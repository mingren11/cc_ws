#ifndef DWA_H
#define DWA_H

#include "rclcpp/rclcpp.hpp"
#include <memory>
#include <vector>
#include <Eigen/Eigen>
#include <cmath>

namespace ground_robot_planner
{

/**
 * @brief 机器人状态结构体
 */
struct RobotState
{
    double x;        // x坐标
    double y;        // y坐标
    double theta;    // 朝向角度
    double v;        // 线速度
    double omega;    // 角速度
    
    RobotState() : x(0), y(0), theta(0), v(0), omega(0) {}
    RobotState(double x_, double y_, double theta_, double v_, double omega_)
        : x(x_), y(y_), theta(theta_), v(v_), omega(omega_) {}
};

/**
 * @brief 控制指令结构体
 */
struct ControlCommand
{
    double v;        // 线速度指令
    double omega;    // 角速度指令
    
    ControlCommand() : v(0), omega(0) {}
    ControlCommand(double v_, double omega_) : v(v_), omega(omega_) {}
};

/**
 * @brief 轨迹点结构体
 */
struct TrajectoryPoint
{
    double x, y, theta;
    double v, omega;
    double time;
    
    TrajectoryPoint() : x(0), y(0), theta(0), v(0), omega(0), time(0) {}
    TrajectoryPoint(double x_, double y_, double theta_, double v_, double omega_, double time_)
        : x(x_), y(y_), theta(theta_), v(v_), omega(omega_), time(time_) {}
};

/**
 * @brief 轨迹结构体
 */
struct Trajectory
{
    std::vector<TrajectoryPoint> points;
    double total_cost;
    
    Trajectory() : total_cost(0.0) {}
};

/**
 * @brief DWA算法参数结构体
 */
struct DWAParams
{
    // 机器人动力学约束
    double max_v;           // 最大线速度
    double min_v;           // 最小线速度
    double max_omega;       // 最大角速度
    double min_omega;       // 最小角速度
    double max_acc_v;       // 最大线加速度
    double max_acc_omega;   // 最大角加速度
    
    // 预测参数
    double predict_time;    // 预测时间窗口
    double dt;             // 时间步长
    
    // 代价函数权重
    double heading_weight;     // 朝向代价权重
    double obstacle_weight;    // 障碍物代价权重
    double velocity_weight;     // 速度代价权重
    double path_weight;         // 路径代价权重
    
    // 障碍物检测参数
    double obstacle_threshold; // 障碍物距离阈值
    
    DWAParams()
        : max_v(1.0), min_v(-0.5), max_omega(1.0), min_omega(-1.0)
        , max_acc_v(0.5), max_acc_omega(1.0)
        , predict_time(2.0), dt(0.1)
        , heading_weight(1.0), obstacle_weight(10.0), velocity_weight(1.0), path_weight(1.0)
        , obstacle_threshold(0.3) {}
};

/**
 * @brief 动态窗口法(DWA)算法类
 * 
 * 实现基于动态窗口的局部路径规划算法
 * 在给定机器人当前状态和全局路径的情况下，
 * 找到最优的控制指令使机器人安全到达目标
 */
class DWA
{
public:
    /**
     * @brief 构造函数
     * @param node ROS2节点指针
     */
    explicit DWA(rclcpp::Node::SharedPtr node);
    
    /**
     * @brief 析构函数
     */
    ~DWA() = default;
    
    /**
     * @brief 初始化DWA算法
     */
    void init();
    
    /**
     * @brief 设置算法参数
     * @param params DWA参数
     */
    void setParams(const DWAParams& params);
    
    /**
     * @brief 计算最优控制指令
     * @param current_state 当前机器人状态
     * @param global_path 全局路径点
     * @param obstacles 障碍物点云
     * @return 最优控制指令
     */
    ControlCommand computeControlCommand(
        const RobotState& current_state,
        const std::vector<Eigen::Vector2d>& global_path,
        const std::vector<Eigen::Vector2d>& obstacles);
    
    /**
     * @brief 设置目标点
     * @param goal 目标位置
     */
    void setGoal(const Eigen::Vector2d& goal);
    
    /**
     * @brief 获取当前目标点
     * @return 目标位置
     */
    Eigen::Vector2d getGoal() const { return goal_; }
    
    /**
     * @brief 检查是否到达目标
     * @param current_state 当前状态
     * @param goal_tolerance 目标容差
     * @return 是否到达目标
     */
    bool isGoalReached(const RobotState& current_state, double goal_tolerance = 0.5) const;

private:
    /**
     * @brief 计算动态窗口
     * @param current_state 当前状态
     * @return 动态窗口 [v_min, v_max, omega_min, omega_max]
     */
    std::vector<double> calculateDynamicWindow(const RobotState& current_state);
    
    /**
     * @brief 生成轨迹
     * @param current_state 当前状态
     * @param v 线速度
     * @param omega 角速度
     * @return 预测轨迹
     */
    Trajectory generateTrajectory(const RobotState& current_state, double v, double omega);
    
    /**
     * @brief 计算轨迹代价
     * @param traj 轨迹
     * @param global_path 全局路径
     * @param obstacles 障碍物
     * @return 总代价
     */
    double calculateTrajectoryCost(
        const Trajectory& traj,
        const std::vector<Eigen::Vector2d>& global_path,
        const std::vector<Eigen::Vector2d>& obstacles);
    
    /**
     * @brief 计算朝向代价
     * @param traj 轨迹
     * @return 朝向代价
     */
    double calculateHeadingCost(const Trajectory& traj);
    
    /**
     * @brief 计算障碍物代价
     * @param traj 轨迹
     * @param obstacles 障碍物
     * @return 障碍物代价
     */
    double calculateObstacleCost(const Trajectory& traj, const std::vector<Eigen::Vector2d>& obstacles);
    
    /**
     * @brief 计算速度代价
     * @param traj 轨迹
     * @return 速度代价
     */
    double calculateVelocityCost(const Trajectory& traj);
    
    /**
     * @brief 计算路径代价
     * @param traj 轨迹
     * @param global_path 全局路径
     * @return 路径代价
     */
    double calculatePathCost(const Trajectory& traj, const std::vector<Eigen::Vector2d>& global_path);
    
    /**
     * @brief 计算两点间距离
     * @param p1 点1
     * @param p2 点2
     * @return 距离
     */
    double distance(const Eigen::Vector2d& p1, const Eigen::Vector2d& p2);
    
    /**
     * @brief 计算角度差
     * @param angle1 角度1
     * @param angle2 角度2
     * @return 角度差 [-π, π]
     */
    double angleDiff(double angle1, double angle2);
    
    /**
     * @brief 角度归一化到 [-π, π]
     * @param angle 角度
     * @return 归一化后的角度
     */
    double normalizeAngle(double angle);
    
    /**
     * @brief 找到轨迹上距离目标最近的点
     * @param traj 轨迹
     * @param goal 目标点
     * @return 最近点的索引
     */
    int findClosestPointToGoal(const Trajectory& traj, const Eigen::Vector2d& goal);

private:
    rclcpp::Node::SharedPtr node_;        // ROS2节点
    DWAParams params_;                    // 算法参数
    Eigen::Vector2d goal_;               // 目标点
    rclcpp::Logger logger_;              // 日志记录器
};

} // namespace ground_robot_planner

#endif // DWA_H
