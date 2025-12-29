#ifndef EXPORT_API_VIO_XR_CAPI_H_
#define EXPORT_API_VIO_XR_CAPI_H_
#include <stdbool.h>
#include <stdint.h>
#include "vio_scene_data.h"
#ifdef __cplusplus
// Prevent compiler from changing those API names since they could be accessed in Javascript or C#.
extern "C" {
#endif

typedef void* Handle;

typedef struct {
  uint64_t timestamp;
  double px;
  double py;
  double pz;
  double qx;
  double qy;
  double qz;
  double qw;
  float confidence;
} VioPose;

typedef struct {
  double px;
  double py;
  double pz;
  double qx;
  double qy;
  double qz;
  double qw;
} Transformation;

typedef enum {
  NOT_INITED = 0,
  TRACKING = 1,
  TRACKING_LOST = 2,
  DATA_LOST = 3,
  TRACKING_STATIC = 4,
  RELOCALIZATION = 5
} VioStatus;

typedef struct {
  VioStatus code;
  const char* msg;
} VioStatusInfo;

typedef struct {
  uint32_t id;
  int32_t  type;
  uint64_t timestamp;
  double x;
  double y;
  double z;
} MapPoint;

typedef struct {
  double x;
  double y;
  double z;
}VioVector3d;

bool InitVioSystem(const char* cam_imu_calib_path, const char* vio_config_path, Handle* vio_handle);
bool StopVioSystem(Handle vio_handle);

// Adds an image which is captured by camera with camera_id.
void VioReceiveImageByCameraId(Handle vio_handle, int camera_id, uint64_t timestamp,
                               int image_width, int image_height, uint8_t* image_bytes);
// Adds an IMU measurement to VIO.
// linear_acceleration and angular_velocity both have 3 elements, x, y, z.
void VioReceiveGyroscope(Handle vio_handle, uint64_t timestamp, double gx, double gy, double gz);
void VioReceiveAccelerator(Handle vio_handle, uint64_t timestamp, double ax, double ay, double az);

// The high-frequency latest imu pose
// velocity and acceleration are both in the world cooridnate.

void VioGetLatestPose(Handle vio_handle, VioPose* pose);
void VioGetLatestPoseWithVelocity(Handle vio_handle, VioPose* pose, VioVector3d* linear_velocity,
                      VioVector3d* angular_velocity,
                      VioVector3d* linear_acceleration);

// The predict imu pose by custom timestamp
// velocity and acceleration are both in the world cooridnate.
void VioGetTargetPose(Handle vio_handle, uint64_t timestamp, VioPose* pose);
void VioGetTargetPoseWithVelocity(Handle vio_handle, uint64_t timestamp, VioPose* pose,
                                  VioVector3d* linear_velocity, VioVector3d* angular_velocity,
                                  VioVector3d* linear_acceleration);

// Forward predict time
double VioGetPredictPeriodBasedOnImu(Handle vio_handle);
// The status of vio system, helps to control logic for application
VioStatusInfo VioGetSystemStatus(Handle vio_handle);
const char* VioStatusToMsg(VioStatus status);

// Convert imu pose to cam pose
void VioConvertToCamPose(Handle vio_handle, int camera_id, VioPose pose_in, VioPose* pose_out);
// Convert vio pose (right hand) to monado pose(right hand, opengl coord)
void VioConvertToMonadoPose(Handle vio_handle, VioPose pose_in, VioPose* pose_out);

// Save the correct pose in local map
void VioSavePoseInLocalMap(Handle vio_handle, const char* save_path);
// The map points in the current view
void VioGetMapPointsInCurrentView(Handle vio_handle, MapPoint** mps, int* counts);
// Realtime sensor data frequency info
void VioGetDataInfo(Handle vio_handle, char** data_info);
// The loop info (success or fail reason)
void VioGetLoopInfo(Handle vio_handle, char** loop_info);
// Function only for debug
void VioDebugInfo(Handle vio_handle, char** debug_info);
// The realtime frequency of imu pose
uint32_t VioGetPoseFrequencyImu(Handle vio_handle);
// The realtime frequency of cam pose
uint32_t VioGetPoseFrequencyCam(Handle vio_handle);
// Return the camera delay, including preparation/frontend/backend/total delay.
void VioGetCamPoseDelay(Handle vio_handle, float* delay, int size);

void VioGetSceneMesh(Handle vio_handle, DMRawMesh** mesh);

void VioLogDoubleToMcap(const char* channel_name, uint64_t timestamp, double data);

void VioLogBooleanToMcap(const char* channel_name, uint64_t timestamp, bool data);

void VioLogIntegerToMcap(const char* channel_name, uint64_t timestamp, int64_t data);

void VioLogStringToMcap(const char* channel_name, uint64_t timestamp, const char* data);

float VioGetAnchorPoint(Handle handle, float x, float y, uint64_t timestamp, double* pt);

float VioGetAnchorPointByIdx(Handle handle, float x, float y, uint32_t idx, double* pt);

#ifdef __cplusplus
}
//#include "config/sensor_calibration.h"
//#include "config/vio_config.h"
//bool InitVioSystem(int number_of_cameras, const dm::vio::SensorCalibration& sensor_calibration,
//                   const dm::vio::VioConfig& vio_config, Handle* handle);
#endif

#endif  // EXPORT_API_VIO_XR_CAPI_H_
