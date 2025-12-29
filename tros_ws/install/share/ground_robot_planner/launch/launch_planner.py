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
            executable='controller_node',
            name='ground_robot_controller',
            output='screen',
            parameters=[
                {'topic.image_topic': "/camera/depth/image_rect_raw"},
                {'topic.pose_topic': '/utlidar/robot_odom'},
                {'camera.fx': 320.8505554199219},
                {'camera.fy': 320.8505554199219},
                {'camera.cx': 320.82977294921875},
                {'camera.cy': 180.17550659179688},
                {"camera.image_width": 640},
                {"camera.image_height": 360},
                {'grid_map.map_size_x': 40.0},
                {'grid_map.map_size_y': 40.0},
                {'grid_map.map_size_z': 1.0},
                {'grid_map.resolution': 0.1},
                {'grid_map.camera_height': 0.38},
                {'grid_map.min_obstacle_height': 0.2},
                {'grid_map.inflation_radius': 0.1},
                {'grid_map.max_depth': 5.0},
                {'grid_map.min_depth': 0.01},
                {'grid_map.obstacle_clear_time': 10.0},
                {'grid_map.use_random_map': False},
                {'grid_map.depth_sampling_step': 10},
                {'grid_map.dev_flag': True},                #{'grid_map.static_map_path': 'src/ground_robot_planner/tools/python/yishang_1st.pgm'},
                {'grid_map.clear_map_flag': True},
                {'planner.max_lookahead_distance': 2.0},
                {'planner.control_point_spacing': 0.3},
                {'planner.safety_margin': 0.1},
                {'planner.robot_radius': 0.25},
                {'controller.control_rate': 25.0},
                {'follower.lookahead_distance': 0.8},
                {'follower.lookahead_distance_factor': 1.0},
                {'follower.target_reached_threshold': 0.2},
                {'follower.max_x_velocity': 2.0},
                {'follower.max_y_velocity': 1.5},
                {'follower.max_angular_velocity': 1.5},
                {'follower.max_replan_distance': 0.5},
                {'follower.slowdown_distance': 1.0},
                {'follower.emergency_stop_distance': 0.5}
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
