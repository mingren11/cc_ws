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
    rviz_config = os.path.join(pkg_share, 'config', 'controller_visualization.rviz')
    
    return LaunchDescription([
        # 启动地面机器人控制器
        Node(
            package='ground_robot_planner',
            executable='controller_node',
            name='ground_robot_controller',
            output='screen',
            parameters=[
                # d455
                # {'camera.fx': 327.37689208984375},
                # {'camera.cx': 325.8572082519531},
                # {'camera.fy': 327.37689208984375},
                # {'camera.cy': 185.15139770507812},
                # d435
                {'camera.fx': 322.1513671875},
                {'camera.cx': 323.6451110839844},
                {'camera.fy': 322.1513671875},
                {'camera.cy': 176.35887145996094},
                {'topic.image_topic': '/camera/depth/image_rect_raw'},
                {'camera.image_width': 640},
                {'camera.image_height': 360},
                {'grid_map.map_size_x': 30.0},
                {'grid_map.map_size_y': 30.0},
                {'grid_map.map_size_z': 0.8},
                {'grid_map.resolution': 0.15},
                {'grid_map.camera_height': 0.75},
                {'grid_map.min_obstacle_height': 0.25},
                {'grid_map.max_obstacle_height': 0.83},
                {'grid_map.inflation_radius': 0.15},
                {'grid_map.max_depth': 3.0},
                {'grid_map.min_depth': 0.1},
                {'grid_map.cut_upper_ratio': 0.3},
                {'grid_map.cut_lower_ratio': 0.9},
                {'grid_map.obstacle_clear_time': 5.0},
                {'grid_map.use_random_map': False},
                {'grid_map.depth_sampling_step': 12},
                {'grid_map.dev_flag': False},
                #{'grid_map.static_map_path': 'src/ground_robot_planner/tools/python/yishang_1st.pgm'},
                {'grid_map.static_map_path': 'src/ground_robot_planner/tools/python/generate_png_from_plys/programs/z_map.pgm'},
                {'grid_map.clear_map_flag': True},
                {'topic.pose_topic': '/dm_unitree/robot_odom'},
                {'topic.offset_topic': '/dm_unitree/robot_offset'},
                {'planner.max_lookahead_distance': 3.5},
                {'planner.control_point_spacing': 0.15},
                {'planner.safety_margin': 0.15},
                {'planner.robot_radius': 0.3},
                {'controller.control_rate': 20.0},
                {'follower.lookahead_distance': 1.0},
                {'follower.lookahead_distance_factor': 1.0},
                {'follower.target_reached_threshold': 1.0},
                {'follower.max_x_velocity': 0.7},
                {'follower.max_y_velocity': 1.0},
                {'follower.max_angular_velocity': 0.8},
                {'follower.slowdown_distance': 0.8},
                {'follower.robot_radius': 0.2},
                {'follower.emergency_stop_distance': 0.9}
            ]
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
        
        # # 启动RViz2
        # Node(
        #     package='rviz2',
        #     executable='rviz2',
        #     name='rviz2',
        #     arguments=['-d', rviz_config],
        #     respawn=True
        # )
    ])
