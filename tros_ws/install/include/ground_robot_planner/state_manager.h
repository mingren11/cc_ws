#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <rclcpp/rclcpp.hpp>
#include <string>
#include <mutex>
#include <functional>

namespace ground_robot_planner
{

/**
 * @brief 控制器状态枚举
 */
enum class ControllerState
{
    WAITING_TARGET,     // 等待目标
    CLOUD_GLOBAL_PATH,  // 云端全局路径
    PLANNING,           // 初次规划路径
    LOCAL_REPLANNING,   // 局部重新规划
    FOLLOWING,          // 路径跟踪
    EMERGENCY_STOP,     // 紧急停止
    BACK_OFF,           // 尝试退后
    STOP,               // 停止
    IN_OBSTACLE,        // 在障碍物中
    MOVE_FORWARD,       // 前进
    TURN_LEFT,          // 左转
    TURN_RIGHT          // 右转
};

/**
 * @brief 状态管理类
 * 负责控制器状态的管理和转换
 */
class StateManager
{
public:
    explicit StateManager(rclcpp::Node::SharedPtr node);
    ~StateManager() = default;

    // 状态操作
    ControllerState getCurrentState() const;
    void changeState(ControllerState new_state);
    std::string getStateString() const;
    std::string getStateString(ControllerState state) const;
    
    // 状态历史
    bool hasStateHistory() const;
    ControllerState getPreviousState() const;
    
    // 状态转换回调
    void setStateChangeCallback(std::function<void(ControllerState, ControllerState)> callback);
    
    // 状态验证
    bool isValidTransition(ControllerState from, ControllerState to) const;
    
    // 状态持续时间
    rclcpp::Duration getStateDuration() const;
    void resetStateTimer();

private:
    rclcpp::Node::SharedPtr node_;
    mutable std::mutex state_mutex_;
    
    ControllerState current_state_;
    ControllerState previous_state_;
    rclcpp::Time state_start_time_;
    bool has_previous_state_;
    
    std::function<void(ControllerState, ControllerState)> state_change_callback_;
    
    // 状态转换验证规则
    bool isValidTransitionInternal(ControllerState from, ControllerState to) const;
};

} // namespace ground_robot_planner

#endif // STATE_MANAGER_H
