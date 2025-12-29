// include/astar_planner.hpp
#ifndef ASTAR_PLANNER_HPP
#define ASTAR_PLANNER_HPP

#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/path.hpp>
#include <nav_msgs/msg/occupancy_grid.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <Eigen/Eigen>
#include <vector>
#include <queue>
#include <unordered_map>
#include <functional>
#include "grid_map.h"
#include <limits>

namespace ground_robot_planner
{

    struct AStarNode
    {
        int x, y;
        double g_cost; // 从起点到当前节点的实际移动成本
        double h_cost; // 启发式：从当前节点到目标的估计成本
        double obs_cost; // 额外的障碍物距离成本
        double f_cost; // f = g + h + obs_cost
        int parent_x, parent_y;

        AStarNode() : x(0), y(0), g_cost(0), h_cost(0), obs_cost(0), f_cost(0), parent_x(-1), parent_y(-1) {}

        AStarNode(int _x, int _y) : x(_x), y(_y), g_cost(0), h_cost(0), obs_cost(0), f_cost(0), parent_x(-1), parent_y(-1) {}

        bool operator>(const AStarNode &other) const
        {
            if (std::abs(f_cost - other.f_cost) > 1e-6) {
                return f_cost > other.f_cost;
            }
            return h_cost > other.h_cost;
        }
    };

    struct NodeHash
    {
        std::size_t operator()(const std::pair<int, int> &key) const
        {
            return std::hash<int>()(key.first) ^ (std::hash<int>()(key.second) << 1);
        }
    };

    class AStarPlanner
    {
    public:
        // --- 成员变量声明顺序调整 ---
        rclcpp::Node::SharedPtr node_;
        rclcpp::Logger logger_; // logger_ 可以在构造函数列表初始化

        AStarPlanner(rclcpp::Node::SharedPtr node);
        ~AStarPlanner() = default;

        void init(std::shared_ptr<GridMap> grid_map);

        // --- 主要规划接口 ---
        bool planGlobal(const Eigen::Vector2d &start, const Eigen::Vector2d &goal,
                        std::vector<Eigen::Vector2d> &path, Eigen::Vector2d &adjusted_goal);

        // --- 修改 planLocal 签名 ---
        bool planLocal(const Eigen::Vector2d &start,
                       const std::vector<Eigen::Vector2d>& global_path, // <-- 新增全局路径参数
                       size_t current_path_index,
                       std::vector<Eigen::Vector2d> &local_path,
                       size_t &target_path_index);
        // ---------------------------

        void setGridMap(std::shared_ptr<GridMap> grid_map);

        void setGoal(const Eigen::Vector2d &goal);

        // --- 可视化和辅助函数 ---
        void publishPath(const std::vector<Eigen::Vector2d> &path, const std::string& topic = "planned_path");
        void publishControlPoints(const std::vector<Eigen::Vector2d> &control_points);
        void publishExploredNodes();
        std::vector<Eigen::Vector2d> getControlPoints() const { return control_points_; }
        std::vector<Eigen::Vector2d> generateControlPoints(const std::vector<Eigen::Vector2d> &path);
        bool hasObstacleInControlPoints(
            const std::vector<Eigen::Vector2d>& control_points,
            const nav_msgs::msg::OccupancyGrid& map);
        // --- 移到 public ---
        bool isValidNode(int x, int y, const nav_msgs::msg::OccupancyGrid &map);
        bool checkCollision(int x, int y, const nav_msgs::msg::OccupancyGrid &map);
        std::vector<Eigen::Vector2d> smoothPath(const std::vector<Eigen::Vector2d> &path);


    private:
        // --- 核心 A* 实现 ---
        bool planAStarCore(const Eigen::Vector3i &start_idx, const Eigen::Vector3i &goal_idx,
                           const nav_msgs::msg::OccupancyGrid &map,
                           const std::vector<float>& distance_field,
                           std::vector<std::pair<int, int>> &path_indices);

        // --- 辅助函数 ---
        std::vector<Eigen::Vector2d> reconstructPath(const std::pair<int, int>& goal_idx);
        void clear();
        double calculateHeuristic(int x1, int y1, int x2, int y2);
        double calculateObstacleCost(int x, int y, const std::vector<float>& distance_field, int grid_width);
        std::vector<float> calculateDistanceField(const nav_msgs::msg::OccupancyGrid &map);
        bool findNearbyValidGoal(const Eigen::Vector3i& start_idx,
                                const Eigen::Vector3i& original_goal_idx,
                                const nav_msgs::msg::OccupancyGrid& map,
                                const std::vector<float>& distance_field,
                                Eigen::Vector3i& new_goal_idx,
                                int search_radius = 10);
        bool hasObstacleInLine(const Eigen::Vector2d &start, const Eigen::Vector2d &end,
                               const nav_msgs::msg::OccupancyGrid &map);
        std::vector<Eigen::Vector2d> generateControlPoints(const Eigen::Vector2d &start,
                                                         const Eigen::Vector2d &goal);
        bool isControlPointNearObstacle(const Eigen::Vector2d &point,
                                      const nav_msgs::msg::OccupancyGrid &map);


        // --- 成员变量 ---
        rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_global_;
        rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_local_;
        rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr control_points_pub_;
        rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr explored_nodes_pub_;
        rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr distance_field_pub_;

        std::shared_ptr<GridMap> grid_map_;

        double robot_radius_;
        int robot_radius_cells_;
        double safety_margin_;
        double resolution_;
        double obstacle_cost_weight_;
        double control_point_spacing_;
        double max_lookahead_distance_;

        std::priority_queue<AStarNode, std::vector<AStarNode>, std::greater<AStarNode>> open_list_;
        std::unordered_map<std::pair<int, int>, AStarNode, NodeHash> closed_list_;
        std::unordered_map<std::pair<int, int>, double, NodeHash> g_cost_map_;
        std::vector<Eigen::Vector2d> control_points_;

        const int dx_[8] = {0, 1, 0, -1, -1, 1, 1, -1};
        const int dy_[8] = {1, 0, -1, 0, 1, 1, -1, -1};
        const double costs_[8] = {1.0, 1.0, 1.0, 1.0, M_SQRT2, M_SQRT2, M_SQRT2, M_SQRT2};

    };

} // namespace ground_robot_planner

#endif // ASTAR_PLANNER_HPP