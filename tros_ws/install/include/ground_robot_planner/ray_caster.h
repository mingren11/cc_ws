#ifndef RAY_CASTER_H
#define RAY_CASTER_H

#include <Eigen/Eigen>

namespace ground_robot_planner
{

// 前向声明
class GridMap;

// 射线追踪辅助类
class RayCaster
{
private:
  Eigen::Vector3d origin_;       // 射线起点
  Eigen::Vector3d end_;          // 射线终点
  Eigen::Vector3d dir_;          // 射线方向
  Eigen::Vector3d inv_dir_;      // 射线方向的倒数
  int step_x_, step_y_, step_z_; // 每个方向的步进值

  // DDA算法参数
  double t_max_x_, t_max_y_, t_max_z_;
  double t_delta_x_, t_delta_y_, t_delta_z_;
  double total_distance_;        // 射线总长度

  // 当前索引
  Eigen::Vector3i current_idx_;
  Eigen::Vector3i end_idx_;      // 终点索引

  // 地图信息
  double resolution_;
  Eigen::Vector3i grid_size_;

  GridMap *map_;

public:
  // 构造函数
  RayCaster() {}

  // 初始化射线
  void setInput(const Eigen::Vector3d &origin, const Eigen::Vector3d &end,
                double resolution, const Eigen::Vector3i &grid_size, GridMap *map);

  // 执行一步射线追踪，返回当前索引
  bool step(Eigen::Vector3i &out_idx);
};

} // namespace ground_robot_planner

#endif // RAY_CASTER_H