#ifndef GRID_MAP_H
#define GRID_MAP_H

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <nav_msgs/msg/occupancy_grid.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <geometry_msgs/msg/point_stamped.hpp>
#include <nav_msgs/msg/path.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <cv_bridge/cv_bridge.h>
#include <Eigen/Eigen>
#include <vector>
#include <mutex>
#include <atomic>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl_conversions/pcl_conversions.h>
#include <nav_msgs/msg/odometry.hpp>
#include <std_msgs/msg/empty.hpp>
#include <message_filters/subscriber.h>
#include <message_filters/sync_policies/approximate_time.h>
#include <message_filters/time_synchronizer.h>
#include <shared_mutex> // 用于读写锁
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "ray_caster.h"

#define logit(x) (log((x) / (1 - (x))))

namespace ground_robot_planner
{

  // 栅格单元的状态
  enum class CellState
  {
    FREE = 0,     // 自由空间
    OCCUPIED = 1, // 占用空间
    UNKNOWN = 2   // 未知空间
  };

  // 3D栅格地图类
  class GridMap
  {
  public:
    GridMap();
    GridMap(rclcpp::Node::SharedPtr node);
    ~GridMap();

    void init(rclcpp::Node::SharedPtr node);

    // 存储单个更新的结构体
    struct UpdateInfo
    {
      int idx;  // 索引
      bool hit; // 是否命中
    };

    // 相机参数结构体
    struct CameraParams
    {
      Eigen::Vector3d camera_pos;
      Eigen::Vector3d camera_pos_local;
      tf2::Matrix3x3 R;
      tf2::Matrix3x3 R_local;
      double floor_height;
      float min_depth;
      float max_depth;
      double min_obstacle_height;
      double max_obstacle_height;
    };

    // 用于概率更新的函数
    void updateCellLogOdds(int idx, bool hit);

    // 通用地图区域遍历函数
    void forEachCellInRegion(const Eigen::Vector3i &min_idx, const Eigen::Vector3i &max_idx, 
                           std::function<void(int, int, int, int)> cell_processor);

    // 特定区域删除
    void clearCellsInRegion(const Eigen::Vector3i &min_idx, const Eigen::Vector3i &max_idx);

    // 特定区域内膨胀障碍物
    void inflateObstaclesInRegion(const Eigen::Vector3i &min_idx, const Eigen::Vector3i &max_idx);

    // 将世界坐标转换为栅格坐标
    Eigen::Vector3i posToIndex(const Eigen::Vector3d &pos);

    // 将栅格坐标转换为世界坐标
    Eigen::Vector3d indexToPos(const Eigen::Vector3i &index);

    bool pose_received_;
    bool depth_image_received_;
    bool use_octree_;
    bool has_static_map_;
    bool static_map_on_;

    // 当前相机位姿
    Eigen::Vector3d current_position_;
    Eigen::Vector3d last_position_;
    Eigen::Vector3d current_body_position_;
    Eigen::Vector3d old_point0_;
    Eigen::Quaterniond current_orientation_;
    Eigen::Quaterniond last_orientation_;
    cv_bridge::CvImageConstPtr current_depth_image_;
    // 检查位置是否在地图范围内
    bool isInMap(const Eigen::Vector3d &pos);

    // 检查索引是否在地图范围内
    bool isInMap(const Eigen::Vector3i &index);

    // 检查位置是否被占用
    bool isOccupied(const Eigen::Vector3d &pos);

    // 检查索引是否被占用
    bool isOccupied(const Eigen::Vector3i &index);

    // 检查位置是否在膨胀区域内
    bool isInflated(const Eigen::Vector3d &pos);

    // 检查索引是否在膨胀区域内
    bool isInflated(const Eigen::Vector3i &index);

    // 检查深度传感器是否正常
    bool checkDepthSensor();

    // 检查 odom 是否正常
    bool checkOdom();

    // 从深度图更新栅格地图
    void updateMapFromDepthImage(const std::shared_ptr<rclcpp::TimerBase> /*event*/);
    void updateMapFromDepthImageOptimized(const std::shared_ptr<rclcpp::TimerBase> /*event*/);

    // 提取的辅助函数
    cv::Mat processDepthImage(const cv::Mat& raw_depth);
    Eigen::Matrix4d computeCameraTransform();
    CameraParams computeCameraParams(const Eigen::Matrix4d& cam2world);
    void processDepthImageData(const cv::Mat& filtered_depth, const CameraParams& params, std::vector<UpdateInfo>& updates);
    void processMapUpdates(const std::vector<UpdateInfo>& updates);
    void publishMapData();
    void publishRobotBodyPose(const Eigen::Matrix4d& cam2world);

    // 膨胀障碍物
    void inflateObstacles(const std::shared_ptr<rclcpp::TimerBase> /*event*/);

    // 清除地图
    void clearMap();

    // 发布地图用于可视化
    void publishMap(const std::shared_ptr<rclcpp::TimerBase> /*event*/);

    // 重置单个网格状态
    void resetGrid(int idx, bool reset_first = true);


    // --- 新增：处理和发布地图的定时器回调 ---
    void processAndPublishMapCallback();

    void poseCallback(const nav_msgs::msg::Odometry::SharedPtr odom);
    void depthImageCallback(const sensor_msgs::msg::Image::SharedPtr depth_img);
    void offsetCallback(const geometry_msgs::msg::PoseStamped::SharedPtr offset);
    void syncCallback(const sensor_msgs::msg::Image::SharedPtr depth_msg, const nav_msgs::msg::Odometry::SharedPtr odom_msg);

    Eigen::Matrix4d projection_matrix_;
    std::vector<double> depth_sample_x_;
    std::vector<double> depth_sample_y_;
    std::vector<double> obstacle_timestamps_;

    // 设置地图更新回调
    void setMapUpdateCallback(std::function<void(const nav_msgs::msg::OccupancyGrid &)> callback)
    {
      map_update_callback_ = callback;
    }

    double getResolution() const
    {
      return resolution_;
    }

    // 将 initMap 移到 public 部分
    void initMap();
    
    void precomputeProjectionMatrix();

    // 加载静态 PGM 地图
    bool loadStaticMapFromPGM(const std::string& filename);
    
    // -------------------------

    // 添加获取缓存的2D膨胀地图的函数
    nav_msgs::msg::OccupancyGrid getInflated2DMap() const;

    // 通用的地图数据生成函数
    void generateMapData(nav_msgs::msg::OccupancyGrid& map_msg, nav_msgs::msg::OccupancyGrid& inflated_map_msg);

    // 深度图处理相关函数
    float extractDepthValue(const cv::Mat& depth_image, int u, int v);
    void forEachDepthPixel(const cv::Mat& depth_image, std::function<void(int u, int v, float depth)> pixel_processor);

    // 坐标转换相关函数
    Eigen::Vector3d cameraToWorld(const Eigen::Vector3d& camera_point, const CameraParams& params);
    Eigen::Vector3d compute3DPoint(int u, int v, float depth);

    // 相机参数相关函数
    CameraParams getCameraParams();


    // 话题参数
    std::string image_topic_;
    std::string pose_topic_;
    std::string offset_topic_;

    // --- 新增：用于控制随机地图生成的参数 ---
    bool use_random_map_;
    bool dev_flag_;
    // ----------------------------------

    void clearMapAll();

    void updateMapWindow();

    Eigen::Vector3d getMapSize() const {
      return Eigen::Vector3d(map_size_x_, map_size_y_, map_size_z_);
    }

    Eigen::Vector3d getMapOrigin() const {
      return map_origin_;
    }


  private:
    // ROS2相关
    rclcpp::Node::SharedPtr node_;
    rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr map_pub_;
    rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr inflated_map_pub_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr offset_sub_;
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr obstacle_marker_pub_;
    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr robot_body_pose_pub_;

    // --- 新增：用于解耦更新和发布的定时器 ---
    rclcpp::TimerBase::SharedPtr processing_timer_;

    // 地图参数
    double resolution_;                           // 地图分辨率(m/cell)
    double map_size_x_, map_size_y_, map_size_z_; // 地图尺寸(m)
    Eigen::Vector3d map_origin_;                  // 地图原点(m)
    int grid_size_x_, grid_size_y_, grid_size_z_; // 栅格尺寸
    double max_depth_, min_depth_;                // 最大和最小深度(m)
    double obstacle_clear_time_;                  // 障碍物清除时间(s)
    int offset_x_, offset_y_; // 偏移量

    // 图片 cut
    double cut_upper_ratio_, cut_lower_ratio_;

    // 3D栅格地图数据
    std::vector<CellState> grid_map_; // 3D栅格地图
    std::vector<bool> is_static_loaded_map_; // 是否加载了静态地图
    std::vector<bool> inflated_map_;  // 膨胀区域
    std::vector<bool> random_map_;    // 随机地图
    // 快速索引访问函数
    inline int toAddress(int x, int y, int z) const
    {
      return x + y * grid_size_x_ + z * grid_size_x_ * grid_size_y_;
    }

    inline int toAddress(const Eigen::Vector3i &idx) const
    {
      return toAddress(idx.x(), idx.y(), idx.z());
    }

    Eigen::Vector3i addressToIndex(int address) const
    {
      return Eigen::Vector3i(address % grid_size_x_, (address / grid_size_x_) % grid_size_y_, address / (grid_size_x_ * grid_size_y_));
    }

    // 线程安全
    std::mutex map_mutex_;

    // --- 新增：用于保护累积更新区域的互斥锁和状态 ---
    std::mutex update_region_mutex_;
    Eigen::Vector3i accumulated_update_min_;
    Eigen::Vector3i accumulated_update_max_;
    bool map_updated_since_last_tick_;
    // --------------------------------------------

    // 地图更新参数
    double min_obstacle_height_; // 被视为障碍物的最小高度（相对地面）
    double max_obstacle_height_; // 被视为障碍物的最大高度（相对地面）
    double inflation_radius_;    // 障碍物膨胀半径(m)
    int inflate_steps_;          // 膨胀的栅格步数

    // 相机参数
    double fx_, fy_, cx_, cy_;
    int image_width_, image_height_;       // 图像宽度(像素)和高度(像素)
    double horizontal_fov_, vertical_fov_; // 水平和垂直视野角度(度)

    double camera_height_;    // 相机高度(m)
    int depth_sampling_step_; // 深度图采样步长
    int vis_update_rate_;     // 可视化更新频率
    bool clear_map_flag_;     // 清理的 flag
    double clear_map_factor_; // 清理的因子
    rclcpp::TimerBase::SharedPtr occ_timer_;
    rclcpp::TimerBase::SharedPtr inflate_timer_;
    rclcpp::TimerBase::SharedPtr publish_timer_;
    // 地图更新回调
    std::function<void(const nav_msgs::msg::OccupancyGrid &)> map_update_callback_;

    // 生成膨胀区域的可视化
    visualization_msgs::msg::MarkerArray createVisualization();

    // 坐标转换检查
    bool checkAndFixIndex(Eigen::Vector3i &index);

    // 概率
    std::vector<double> log_odds_buffer_;  // 存储每个栅格的对数几率值
    double prob_hit_log_, prob_miss_log_;  // 更新参数
    double clamp_min_log_, clamp_max_log_; // 截断阈值
    double static_map_origin_x_, static_map_origin_y_;
    int static_map_width_, static_map_height_;
    double static_map_resolution_;

    // 相机到机器人坐标系的转换矩阵
    Eigen::Matrix4d cam2body_;

    // RayCaster实例
    RayCaster ray_caster_;

    // 确保 min_occupancy_log_ 变量已声明
    double min_occupancy_log_;

    // 静态地图相关
    std::string static_map_path_;
    std::vector<CellState> static_grid_map_; // 静态地图数据
    std::vector<CellState> static_grid_map_raw_; // 静态地图数据
    std::vector<uint16_t> count_hit_and_miss_; // 命中和未命中的计数
    std::vector<uint16_t> count_hit_; //命中的计数
    std::vector<double> obstacle_last_timestamps_; // 障碍物最后存活时间参数（秒）
    std::vector<double> obstacle_first_timestamps_; // 障碍物最早存活时间参数（秒）

    // 添加message_filters相关成员
    typedef message_filters::sync_policies::ApproximateTime<
        sensor_msgs::msg::Image, 
        nav_msgs::msg::Odometry
    > SyncPolicy;
    
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr depth_sub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr pose_sub_; 
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr offset_topic_sub_;


    // 添加同步回调函数声明
    void syncCallback(
        const std::shared_ptr<const sensor_msgs::msg::Image>& depth_msg,
        const std::shared_ptr<const nav_msgs::msg::Odometry>& odom_msg);

    // 用于缓存最新的2D膨胀地图
    nav_msgs::msg::OccupancyGrid last_inflated_2d_map_;
    mutable std::shared_mutex map_2d_mutex_; // 使用读写锁提高并发读取性能

    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr obstacle_mask_image_pub_;
    
    // 无效数据发布器
    rclcpp::Publisher<std_msgs::msg::Empty>::SharedPtr depth_image_invalid_pub_;
    rclcpp::Publisher<std_msgs::msg::Empty>::SharedPtr odom_invalid_pub_;

    void publishObstacleMaskImage();

    // 深度图卷积处理相关
    int convolution_kernel_size_;  // 卷积核大小
    cv::Mat convolution_kernel_;   // 卷积核
    cv::Mat filtered_depth_image_; // 存储卷积后的深度图
    std_msgs::msg::Header obstacle_mask_header_;
    double last_depth_image_time_;
    double last_odom_time_;
    double difference_depth_image_time_;
    double difference_odom_time_;
    
    // 回调函数互斥锁，防止重叠执行
    std::unique_ptr<std::mutex> callback_mutex_;
    
    // 回调执行状态标志位（原子操作）
    std::atomic<bool> callback_running_{false};
  };
} // namespace ground_robot_planner

#endif // GRID_MAP_H