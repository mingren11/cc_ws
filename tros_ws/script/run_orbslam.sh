#!/bin/bash
mount -o rw,remount /
mount -o rw,remount /usr/hobot
resize2fs /dev/block/platform/by-name/system

export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/userdata/deps
source /opt/ros/humble/setup.bash
source /userdata/ming.ren/install/setup.bash

# 启动测试节点
ros2 run orb_slam3_example_ros2 mono ./ORBvoc.txt ./Examples/Monocular/mipi.yaml 