#ifndef NAVIGATION_MANAGER_H
#define NAVIGATION_MANAGER_H

#include <rclcpp/rclcpp.hpp>
#include <memory>
#include <mutex>
#include <Eigen/Eigen>
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/empty.hpp"
#include "nav_msgs/msg/path.hpp"
#include "std_msgs/msg/float64.hpp"

namespace ground_robot_planner {

// 前向声明
enum class ControllerState;
    class StateManager;
    class StatisticsManager;
    class ParameterManager;
    class GridMap;
    class AStarPlanner;
    class PathFollower;
}

namespace ground_robot_planner
{

/**
 * @brief 导航管理器 - 重构后的主控制器
 * 负责协调各个组件，提供清晰的接口
 */
class NavigationManager
{
public:
    NavigationManager(rclcpp::Node::SharedPtr node);
    ~NavigationManager() = default;

    // 初始化
    void init();
    
    // 运行主循环
    void run();
    
    // 导航控制接口
    bool setGoal(const Eigen::Vector2d& goal);
    void stop();
    void pause();
    void resume();
    
    // 状态查询
    ControllerState getCurrentState() const;
    std::string getStateString() const;
    
    // 统计信息
    void printStatistics() const;

private:
    // ROS节点
    rclcpp::Node::SharedPtr node_;
    
    // 组件管理
    std::shared_ptr<StateManager> state_manager_;
    std::shared_ptr<StatisticsManager> stats_manager_;
    std::shared_ptr<ParameterManager> param_manager_;
    std::shared_ptr<GridMap> grid_map_;
    std::shared_ptr<AStarPlanner> planner_;
    std::shared_ptr<PathFollower> path_follower_;
    
    // ROS接口
    void setupROSInterface();
    void setupSubscribers();
    void setupPublishers();
    
    // 回调函数
    void goalCallback(const geometry_msgs::msg::PoseStamped::SharedPtr goal);
    void cancelCallback(const std_msgs::msg::Empty::SharedPtr msg);
    void globalPathCallback(const nav_msgs::msg::Path::SharedPtr msg);
    void speedCallback(const std_msgs::msg::Float64::SharedPtr msg);
    void lookatCallback(const geometry_msgs::msg::PoseStamped::SharedPtr msg);
    void moveForwardCallback(const std_msgs::msg::Empty::SharedPtr msg);
    void turnLeftCallback(const std_msgs::msg::Empty::SharedPtr msg);
    void turnRightCallback(const std_msgs::msg::Empty::SharedPtr msg);
    void stopCallback(const std_msgs::msg::Empty::SharedPtr msg);
    void pointtypeCallback(const std_msgs::msg::String::SharedPtr msg);
    void endPlanningFlagCallback(const std_msgs::msg::Empty::SharedPtr msg);
    void cloudPathFlagCallback(const std_msgs::msg::Empty::SharedPtr msg);
    
    // 状态处理
    void handleState();
    void handleWaitingTargetState();
    void handlePlanningState();
    void handleCloudGlobalPathState();
    void handleFollowingState();
    void handleLocalReplanningState();
    void handleEmergencyStopState();
    void handleBackOffState();
    void handleStopState();
    void handleInObstacleState();
    void handleMoveForwardState();
    void handleTurnLeftState();
    void handleTurnRightState();
    
    // 辅助函数
    bool getCurrentPoseAndGoal(Eigen::Vector3d& current_pos, Eigen::Vector2d& goal_pos);
    bool everythingOk();
    void publishLookatCmd();
    void publishUpdateWindow();
    
    // 紧急停止监控
    void emergencyMonitorCallback();
    bool checkEmergencyStop();
    void emergencyStop();
    
    // 控制参数
    double control_rate_;
    double replan_check_interval_;
    double obstacle_check_interval_;
    double emergency_check_distance_;
    double emergency_check_width_;
    int emergency_check_steps_;
    
    // 目标管理
    Eigen::Vector2d goal_position_;
    std::mutex goal_mutex_;
    bool received_cloud_goal_;
    bool received_test_goal_;
    bool end_planning_flag_;
    bool cloud_path_flag_;
    bool call_update_window_;
    bool already_replanned_;
    
    // 路径管理
    std::vector<Eigen::Vector2d> path_;
    std::vector<Eigen::Vector2d> control_points_;
    size_t current_idx_;
    
    // 朝向和类型
    Eigen::Vector3d lookat_position_;
    std::string point_type_;
    std::mutex lookat_mutex_;
    
    // 时间管理
    rclcpp::Time last_replan_check_time_;
    rclcpp::Time last_obstacle_check_time_;
    rclcpp::Time stop_start_time_;
    rclcpp::Time turn_start_time_;
    
    // 状态标志
    bool first_enter_stop_state_;
    bool first_enter_turn_state_;
    
    // 紧急停止监控
    rclcpp::TimerBase::SharedPtr emergency_monitor_timer_;
    std::atomic<bool> emergency_stop_triggered_{false};
    std::mutex emergency_mutex_;
    
    // ROS发布器和订阅器
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr goal_sub_;
    rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr cancel_sub_;
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr global_path_sub_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr speed_sub_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr lookat_sub_;
    rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr move_forward_sub_;
    rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr turn_left_sub_;
    rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr turn_right_sub_;
    rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr stop_sub_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr point_sub_;
    rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr end_planning_flag_sub_;
    rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr cloud_path_flag_sub_;
    
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr state_pub_;
    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr lookat_cmd_pub_;
    rclcpp::Publisher<std_msgs::msg::Empty>::SharedPtr update_window_pub_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr mission_reached_pub_;
};

} // namespace ground_robot_planner

#endif // NAVIGATION_MANAGER_H
