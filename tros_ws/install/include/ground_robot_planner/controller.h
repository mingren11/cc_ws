#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "rclcpp/rclcpp.hpp"
#include "navigation_manager.h"
#include <memory>
#include <Eigen/Eigen>

namespace ground_robot_planner
{
    enum class ControllerState
    {
        WAITING_TARGET, // 等待目标
        CLOUD_GLOBAL_PATH,
        PLANNING,         // 初次规划路径
        REPLANNING,       // 行走中重新规划
        LOCAL_REPLANNING, // 局部重新规划
        FOLLOWING,        // 路径跟踪
        EMERGENCY_STOP,   // 紧急停止
        BACK_OFF,         // 尝试转向10度
        STOP,              // 停止
        IN_OBSTACLE,      // 在障碍物中

        MOVE_FORWARD,
        TURN_LEFT,
        TURN_RIGHT
    };
/**
 * @brief 重构后的简化版控制器
 * 
 * 这个类作为NavigationManager的包装器，提供向后兼容的接口
 * 同时大大简化了代码结构
 */
class Controller : public rclcpp::Node
{
public:
    Controller();
    ~Controller() = default;

    /**
     * @brief 初始化控制器
     */
    void init();

    /**
     * @brief 运行控制器主循环
     */
    void run();

    /**
     * @brief 设置导航目标
     * @param goal 目标位置
     * @return 是否设置成功
     */
    bool setGoal(const Eigen::Vector2d& goal);

    /**
     * @brief 停止机器人
     */
    void stop();

    /**
     * @brief 暂停导航
     */
    void pause();

    /**
     * @brief 恢复导航
     */
    void resume();

    /**
     * @brief 获取当前状态
     * @return 当前控制器状态
     */
    ControllerState getCurrentState() const;

    /**
     * @brief 获取当前状态字符串
     * @return 状态字符串
     */
    std::string getStateString() const;

    /**
     * @brief 打印统计信息
     */
    void printStatistics() const;

private:
    std::shared_ptr<NavigationManager> navigation_manager_;
};
} // namespace ground_robot_planner

#endif // CONTROLLER_H
