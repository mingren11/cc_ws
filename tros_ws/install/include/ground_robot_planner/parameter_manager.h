#ifndef PARAMETER_MANAGER_H
#define PARAMETER_MANAGER_H

#include <rclcpp/rclcpp.hpp>
#include <string>
#include <unordered_map>
#include <memory>

namespace ground_robot_planner
{

/**
 * @brief 统一的参数管理类
 * 负责所有组件的参数声明、获取和验证
 */
class ParameterManager
{
public:
    explicit ParameterManager(rclcpp::Node::SharedPtr node);
    ~ParameterManager() = default;

    // 参数声明和获取
    template<typename T>
    T declareAndGet(const std::string& name, const T& default_value, const std::string& description = "");

    // 参数验证
    bool validateParameter(const std::string& name, const std::string& expected_type);
    
    // 批量参数操作
    void declareParameters(const std::unordered_map<std::string, std::string>& param_config);
    
    // 参数更新回调
    void setParameterUpdateCallback(const std::string& name, std::function<void()> callback);

private:
    rclcpp::Node::SharedPtr node_;
    std::unordered_map<std::string, std::function<void()>> update_callbacks_;
};

// 模板实现
template<typename T>
T ParameterManager::declareAndGet(const std::string& name, const T& default_value, const std::string& /*description*/)
{
    if (!node_->has_parameter(name)) {
        node_->declare_parameter(name, default_value);
    }
    return node_->get_parameter(name).get_value<T>();
}

} // namespace ground_robot_planner

#endif // PARAMETER_MANAGER_H
