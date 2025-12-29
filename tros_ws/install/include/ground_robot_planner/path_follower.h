// include/path_follower.h
#ifndef PATH_FOLLOWER_H
#define PATH_FOLLOWER_H

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/path.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <nav_msgs/msg/occupancy_grid.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <tf2/utils.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <Eigen/Eigen>
#include <vector>
#include <mutex>
#include <memory>
#include "astar_planner.h"

namespace ground_robot_planner {

// 跟随情况分类
enum class FollowState {
    CONTINUE, // 继续跟随
    BIAS, // 偏移
    OBSTACLE_AHEAD, // 前方有障碍物
    GOAL_REACHED, // 到达目标
    EMERGENCY_STOP, // 紧急停止
    IN_OBSTACLE, // 在障碍物中
};

class PathFollower : public rclcpp::Node {
public:
    PathFollower();
    ~PathFollower() = default;

    void init();
    
    // 设置要跟踪的路径
    void setPath(const std::vector<Eigen::Vector2d>& path);
    void setPlanner(std::shared_ptr<AStarPlanner> planner);
    // 设置控制点
    void setControlPoints(const std::vector<Eigen::Vector2d>& control_points);
    // 设置栅格地图
    void setGridMap(std::shared_ptr<GridMap> grid_map);

    std::vector<Eigen::Vector2d> getPath() {
        std::lock_guard<std::mutex> lock(path_mutex_);
        return path_;
    }
    std::vector<Eigen::Vector2d> getControlPoints() {
        return control_points_;
    }

    // 重置路径跟踪
    void reset();

    double getLookaheadDistance();
    
    // 更新跟踪控制，返回是否到达目标
    FollowState update(
        const Eigen::Vector3d& current_position,
        const Eigen::Quaterniond& current_orientation,
        geometry_msgs::msg::Twist& cmd_vel);
    
    // 计算xvel、yvel和rvel
    void calculateVelocities(const Eigen::Vector3d& current_position,
                            const Eigen::Quaterniond& current_orientation,
                            double& xvel, double& yvel, double& rvel);
    
    // 检查是否需要重新规划
    bool needReplanning(const Eigen::Vector3d& current_position);

    void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg);
    
    // 获取当前的目标点
    Eigen::Vector2d getCurrentTarget();
    
    // 检查是否到达目标
    bool reachedGoal();
    
    // 检查是否有有效路径
    bool hasValidPath();
    
    // 暂停/恢复路径跟踪
    void pause() { paused_ = true; }
    void resume() { paused_ = false; }
    bool isPaused() const { return paused_; }

    // 检查前方是否有紧急障碍物，需要紧急停止
    bool checkEmergencyStop(const Eigen::Vector3d& current_position,
                           const Eigen::Quaterniond& current_orientation);
    
    bool checkInObstacle(const Eigen::Vector3d& current_position);

    bool hasObstacleInControlPoints();

    size_t getCurrentTargetIndex() const;

    std::vector<Eigen::Vector2d> getPath() const;
    std::vector<Eigen::Vector2d> getControlPoints() const;

    void setMaxVelocity(double max_x_velocity);

    // 获取当前速度
    Eigen::Vector2d getCurrentVelocity();

    Eigen::Vector3d getMaxVelocities() {
        return Eigen::Vector3d(max_x_velocity_, max_y_velocity_, max_angular_velocity_);
    }

    double max_x_velocity_;       // x方向最大速度(m/s)
    double max_y_velocity_;       // y方向最大速度(m/s)
    double max_angular_velocity_; // 最大角速度(rad/s)

private:

    // ROS2相关
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr target_pub_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr lookahead_pub_;
    
    // 路径跟踪参数
    double lookahead_distance_;        // 前视距离(m)
    double lookahead_distance_factor_; // 前视距离因子
    double target_reached_threshold_;  // 认为到达目标的阈值(m)
    double max_replan_distance_;       // 最大重规划距离(m)
    double slowdown_distance_;         // 开始减速的距离(m)
    double min_linear_velocity_;       // 最小线速度(m/s)
    
    // --- 新增: 前瞻性碰撞检查参数 ---
    double prediction_horizon_secs_; // 模拟预测的时长 (秒)
    double prediction_dt_;           // 模拟步长 (秒)
    double robot_radius_;            // 机器人半径 (米, 用于碰撞检查)
    int collision_check_radius_cells_; // 机器人半径对应的栅格数
    // --------------------------------

    // 路径跟踪状态
    std::vector<Eigen::Vector2d> path_;    // 要跟踪的路径
    std::vector<Eigen::Vector2d> control_points_; // 控制点
    size_t current_target_idx_;               // 当前目标点索引
    Eigen::Vector2d lookahead_point_;      // 前视点
    Eigen::Vector2d current_velocity_;      // 当前速度
    bool reached_final_goal_;              // 是否到达最终目标
    bool paused_;                          // 是否暂停跟踪
    mutable std::mutex path_mutex_;                // 路径数据的互斥锁
    
    // 纯跟踪控制器
    double calculateSteeringAngle(const Eigen::Vector3d& current_position, 
                                 const Eigen::Quaterniond& current_orientation);
    
    // 计算前视点
    Eigen::Vector2d calculateLookaheadPoint(const Eigen::Vector3d& current_position);
    
    // 发布可视化数据
    void publishVisualization(const Eigen::Vector3d& current_position);
    
    // 更新当前目标点索引
    bool updateTargetIndex(const Eigen::Vector3d& current_position);

    // --- 新增: 辅助函数声明 ---
    bool checkPredictedTrajectoryCollision(const geometry_msgs::msg::Twist& cmd_vel,
                                           const Eigen::Vector3d& current_pos,
                                           const Eigen::Quaterniond& current_orient);

    // -------------------------

    // 添加紧急停止相关参数
    double emergency_stop_distance_;  // 紧急停止检测距离(m)

    std::shared_ptr<AStarPlanner> planner_;
    std::shared_ptr<GridMap> grid_map_;
    Eigen::Vector3d current_position_;
    Eigen::Quaterniond current_orientation_;

};

} // namespace ground_robot_planner

#endif // PATH_FOLLOWER_H
