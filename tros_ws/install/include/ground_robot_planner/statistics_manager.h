#ifndef STATISTICS_MANAGER_H
#define STATISTICS_MANAGER_H

#include <rclcpp/rclcpp.hpp>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <mutex>
#include <atomic>

namespace ground_robot_planner
{

/**
 * @brief 统一的统计管理类
 * 负责收集、存储和输出各种统计数据
 */
class StatisticsManager
{
public:
    explicit StatisticsManager(rclcpp::Node::SharedPtr node);
    ~StatisticsManager() = default;

    // 路径跟踪统计
    void updateMovementStats(double distance, double dt, double current_speed);
    void resetMovementStats();
    
    // 规划统计
    void recordPlanningAttempt(bool success);
    void resetPlanningStats();
    
    // 停止统计
    void recordManualStop();
    
    // 文件操作
    void createStatsFile();
    void updateStatsFile(const std::string& event_type);
    
    // 获取统计信息
    struct MovementStats {
        double total_distance = 0.0;
        double total_movement_time = 0.0;
        double average_speed = 0.0;
        double max_speed_achieved = 0.0;
        bool is_moving = false;
    };
    
    struct PlanningStats {
        std::atomic<int> total_attempts{0};
        std::atomic<int> success_count{0};
        std::atomic<int> failure_count{0};
        
        // 添加复制构造函数
        PlanningStats() = default;
        PlanningStats(const PlanningStats& other) 
            : total_attempts(other.total_attempts.load()),
              success_count(other.success_count.load()),
              failure_count(other.failure_count.load()) {}
    };
    
    struct StopStats {
        std::atomic<int> manual_stop_count{0};
        
        // 添加复制构造函数
        StopStats() = default;
        StopStats(const StopStats& other) 
            : manual_stop_count(other.manual_stop_count.load()) {}
    };
    
    MovementStats getMovementStats() const;
    PlanningStats getPlanningStats() const;
    StopStats getStopStats() const;

private:
    rclcpp::Node::SharedPtr node_;
    std::string stats_file_path_;
    
    // 统计数据
    mutable std::mutex movement_mutex_;
    MovementStats movement_stats_;
    rclcpp::Time following_start_time_;
    rclcpp::Time last_following_time_;
    bool tracking_initialized_ = false;
    double movement_threshold_ = 0.05;
    
    PlanningStats planning_stats_;
    StopStats stop_stats_;
    
    // 辅助函数
    std::string getCurrentTimestamp();
    void logStatsToFile(const std::string& event_type);
};

} // namespace ground_robot_planner

#endif // STATISTICS_MANAGER_H
