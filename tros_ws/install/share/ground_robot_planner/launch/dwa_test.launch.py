#!/usr/bin/env python3
"""
DWA算法测试启动文件
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    # 获取包路径
    pkg_share = FindPackageShare(package='ground_robot_planner').find('ground_robot_planner')
    
    # 声明启动参数
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation time'
    )
    
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=PathJoinSubstitution([
            FindPackageShare('ground_robot_planner'),
            'config',
            'dwa_params.yaml'
        ]),
        description='DWA参数配置文件路径'
    )
    
    # DWA测试节点
    dwa_test_node = Node(
        package='ground_robot_planner',
        executable='dwa_example',
        name='dwa_test',
        output='screen',
        parameters=[
            LaunchConfiguration('config_file'),
            {'use_sim_time': LaunchConfiguration('use_sim_time')}
        ],
        remappings=[
            # 可以在这里添加话题重映射
        ]
    )
    
    # 日志信息
    log_info = LogInfo(
        msg="启动DWA算法测试节点"
    )
    
    return LaunchDescription([
        use_sim_time_arg,
        config_file_arg,
        log_info,
        dwa_test_node
    ])
