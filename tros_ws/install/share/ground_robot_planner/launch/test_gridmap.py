from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # 获取包路径
    pkg_share = get_package_share_directory('ground_robot_planner')
    
    # 参数文件路径
    params_file = os.path.join(pkg_share, 'config', 'planner_params.yaml')
    
    # RViz配置文件路径
    rviz_config = os.path.join(pkg_share, 'config', 'rviz.rviz')
    
    return LaunchDescription([
        # 启动地面机器人控制器
        Node(
            package='ground_robot_planner',
            executable='grid_map_node',
            name='ground_robot_map',
            output='screen',
            parameters=[
                {'grid_map.map_size_x': 100.0},
                {'grid_map.map_size_y': 100.0},
                {'grid_map.map_size_z': 1.0},
                {'grid_map.resolution': 0.2},
                {'grid_map.camera_height': 0.38},
                {'grid_map.min_obstacle_height': 0.2},
                {'grid_map.use_random_map': False},
                {'grid_map.max_depth': 5.0},
                {'grid_map.min_depth': 0.01},
                {'grid_map.depth_sampling_step': 35},
                {'topic.pose_topic': '/dm_unitree/robot_odom'},
                {'planner.max_lookahead_distance': 1.5},
                {'planner.control_point_spacing': 0.2},
                {'planner.robot_width': 0.1},
                {'planner.robot_length': 0.1},
                {'planner.safety_margin': 0.03}
            ]
            # parameters=[params_file],
            # remappings=[
            #     ('/camera/depth/image_rect_raw', '/depth/image_rect_raw'),
            #     ('/vins_estimator/camera_pose', '/utlidar/robot_odom'),
            #     ('/cmd_vel', '/cmd_vel')
            # ]
        ),
        
        # 静态TF发布
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='map_to_odom',
            arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom']
        ),
        
        # 启动RViz2
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config],
            respawn=True
        )
    ])