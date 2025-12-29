#include <iostream>
#include <fstream>
#include <opencv2/opencv.hpp>
#include <thread>
#include <vector>
#include <chrono>
#include "vio_xr_capi.h"
#include "glog/logging.h"

struct IMUData {
  uint64_t timestamp;
  std::vector<double> acc;
  std::vector<double> gyr;
};

std::vector<IMUData> imu_data;
bool is_stereo = true;
std::vector<std::pair<uint64_t, std::string>> cam0_image_names;
std::vector<std::pair<uint64_t, std::string>> cam1_image_names;

uint64_t GetSystemTimestamp() {
  auto now = std::chrono::system_clock::now();
  auto duration = now.time_since_epoch();
  return std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count();
}

void LoadAllImu(const std::string& data_path) {
  imu_data.clear();
  std::ifstream file(data_path + "/imu0/data.csv");
  if (!file.is_open()) {
    std::cerr << "Failed to open file: " << data_path << "/imu0/data.csv" << std::endl;
    return;
  }
  std::string line;
  while (std::getline(file, line)) {
    if (line[0] == '#') continue;
    for (size_t i = 0; i < line.size(); i++) {
      if (line[i] == ',') line[i] = ' ';
    }
    std::istringstream iss(line);
    uint64_t stamp;
    double ax, ay, az, gx, gy, gz;
    iss >> stamp >> gx >> gy >> gz >> ax >> ay >> az;
    IMUData data;
    data.timestamp = stamp;
    data.acc = {ax, ay, az};
    data.gyr = {gx, gy, gz};
    imu_data.emplace_back(data);
  }
  file.close();
}

void LoadAllImages(const std::string& data_path) {
  cam0_image_names.clear();
  std::string image_path = data_path + "/cam0/data/";
  LOG(INFO) << "XRSERVICE image path: " << image_path;
  std::ifstream file(data_path + "/cam0/data.csv");
  if (!file.is_open()) {
    std::cerr << "Failed to open file: " << data_path << "/cam0/data.csv" << std::endl;
    return;
  }
  std::string line;
  while (std::getline(file, line)) {
    if (line[0] == '#') continue;
    std::istringstream iss(line);
    std::string token;
    // read timestamp
    std::getline(iss, token, ',');
    uint64_t timestamp = std::stoull(token);
    // read filename
    std::getline(iss, token, ',');
    if (token[token.size() - 1] != 'g') {
      token.resize(token.size() - 1);
    }
    std::string filename = token;
    cam0_image_names.emplace_back(timestamp, filename);
  }
  file.close();

  if (is_stereo) {
    cam1_image_names.clear();
    std::string image_path = data_path + "/cam1/data/";
    LOG(INFO) << "XRSERVICE image path: " << image_path;
    std::ifstream file(data_path + "/cam1/data.csv");
    if (!file.is_open()) {
      std::cerr << "Failed to open file: " << image_path << std::endl;
      return;
    }
    std::string line;
    while (std::getline(file, line)) {
      if (line[0] == '#') continue;
      std::istringstream iss(line);
      std::string token;
      // read timestamp
      std::getline(iss, token, ',');
      uint64_t timestamp = std::stoull(token);
      // read filename
      std::getline(iss, token, ',');
      if (token[token.size() - 1] != 'g') {
        token.resize(token.size() - 1);
      }
      std::string filename = token;
      cam1_image_names.emplace_back(timestamp, filename);
    }
    file.close();
  }
}


int main(int argc, char* argv[]) {
  if(argc != 4) {
    LOG(ERROR) << "Usage: ./example <path0> <path1> <data_path>";
    return -1;
  }

  Handle vio_handle = nullptr;

  std::string  path0 = argv[1]; // calibration.json
  std::string  path1 = argv[2]; // vio.json
  std::string  data_path = argv[3]; // dataset dir e.g. /mnt/ext_hd/dataset/euroc/data/MH_01_easy/mav0/

  uint32_t  image_height = 480;
  uint32_t  image_width = 752;
  
  bool state = InitVioSystem(path0.c_str(),
                             path1.c_str(), &vio_handle);

  if (!state) {
    LOG(ERROR) << "Init Vio System Failed";
    return -1;
  }

  LoadAllImu(data_path);
  LoadAllImages(data_path);
  LOG(INFO) << "xrservice imu size and image size: " << imu_data.size() << " "
            << cam0_image_names.size();

  size_t imu_idx = 0, img_idx = 0;
  uint64_t sys_timestamp = GetSystemTimestamp();
  std::ofstream pose_file(data_path + (is_stereo ? "StereoPose" : "MonoPose") +
                          std::to_string(sys_timestamp) + ".tum");
  CHECK(pose_file.is_open()) << "Fail to open " << data_path + "/pose.tum";
  std::this_thread::sleep_for(std::chrono::milliseconds(1000));

  while (imu_idx < imu_data.size() && img_idx < cam0_image_names.size()) {
    if (imu_data[imu_idx].timestamp <= cam0_image_names[img_idx].first) {
        VioReceiveGyroscope(vio_handle, imu_data[imu_idx].timestamp, imu_data[imu_idx].gyr[0],
                              imu_data[imu_idx].gyr[1], imu_data[imu_idx].gyr[2]);
        VioReceiveAccelerator(vio_handle, imu_data[imu_idx].timestamp, imu_data[imu_idx].acc[0],
                              imu_data[imu_idx].acc[1], imu_data[imu_idx].acc[2]);

        imu_idx++;
        if (imu_idx % 2) {
          VioPose pose;
          VioGetLatestPose(vio_handle, &pose);
          VioStatusInfo status_info = VioGetSystemStatus(vio_handle);
          LOG(INFO) << "status_info: " << status_info.code << " " << status_info.msg;
          if (status_info.code == VioStatus::TRACKING) {
            LOG(INFO) << "LatestPose " << std::setprecision(20) << pose.timestamp * 1e-9 << " "
                      << pose.px << " " << pose.py << " " << pose.pz << " " << pose.qx << " "
                      << pose.qy << " " << pose.qz << " " << pose.qw;
          }
        }
    } else {
        cv::Mat image = cv::imread(data_path + "/cam0/data/" + cam0_image_names[img_idx].second, 0);
        VioReceiveImageByCameraId(vio_handle, 0, cam0_image_names[img_idx].first, image.cols,
                                  image.rows, image.data);
        if (is_stereo) {
          cv::Mat image = cv::imread(data_path + "/cam1/data/" + cam1_image_names[img_idx].second, 0);
          VioReceiveImageByCameraId(vio_handle, 1, cam1_image_names[img_idx].first, image.cols,
                                    image.rows, image.data);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        auto stamp = cam0_image_names[img_idx++].first;

        VioPose pose;
        VioGetTargetPose(vio_handle, stamp + 30000000UL, &pose);
        // Save tracking pose.
        VioStatusInfo status_info = VioGetSystemStatus(vio_handle);
        if (stamp > 0 && status_info.code == VioStatus::TRACKING) {
          pose_file << std::setprecision(20) << pose.timestamp * 1e-9 << " " << pose.px << " "
                    << pose.py << " " << pose.pz << " " << pose.qx << " " << pose.qy << " " << pose.qz
                    << " " << pose.qw << std::endl;
        }
        LOG(INFO) << "Forward predict period is " << VioGetPredictPeriodBasedOnImu(vio_handle)
                << " second.";
    }
  }
  pose_file.flush();
  StopVioSystem(vio_handle);
  vio_handle = nullptr;
  LOG(INFO) << "VIO system is stoped.";
  return 0;
}
