#!/bin/bash
mount -o rw,remount /
mount -o rw,remount /usr/hobot
resize2fs /dev/block/platform/by-name/system

export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/userdata/deps
source /opt/ros/humble/setup.bash
source /userdata/ming.ren/install/setup.bash

#ros2 launch mipi_cam mipi_cam_dual_channel_websocket.launch.py \
#mipi_image_width:=1280 mipi_image_height:=1088 mipi_rotation:=90.0 mipi_lpwm_enable:=False

if [ $# -eq 0 ]; then
ros2 launch hobot_stereonet stereonet_model_web_visual_v2.0.launch.py \
mipi_image_width:=640 mipi_image_height:=352 mipi_rotation:=90.0 \
mipi_image_framerate:=30.0 mipi_lpwm_enable:=False \
mipi_channel:=0 mipi_channel2:=2 \
need_rectify:=False render_type:=1 render_need_filter:=True depth_need_filter:=True \
height_min:=-10.0 height_max:=10.0 pc_max_depth:=5.0
fi

if [ $# -eq 1 ]; then
ros2 launch hobot_stereonet stereonet_model_web_visual_v2.0.launch.py \
mipi_image_width:=640 mipi_image_height:=352 mipi_rotation:=90.0 \
mipi_image_framerate:=30.0 mipi_lpwm_enable:=False \
mipi_channel:=0 mipi_channel2:=2 \
need_rectify:=False render_type:=1 render_need_filter:=True depth_need_filter:=True \
height_min:=-10.0 height_max:=10.0 pc_max_depth:=5.0 stereonet_pub_web:=False
fi

if [ $# -ne 3 ]; then
    echo "Usage: $0 <directory> <freq> <total>"
    exit 1
fi

DIR=$1
FREQ=$2
TOTAL=$3

if [ -z "$DIR" ] || [ -d "$DIR" ]; then
    echo "The directory $DIR already exists, please set up a directory that does not exist to save the image"
    exit 0
else
ros2 launch hobot_stereonet stereonet_model_web_visual_v2.0.launch.py \
mipi_image_width:=640 mipi_image_height:=352 mipi_rotation:=90.0 \
mipi_image_framerate:=30.0 mipi_lpwm_enable:=False \
mipi_channel:=0 mipi_channel2:=2 \
need_rectify:=False render_type:=1 render_need_filter:=True depth_need_filter:=True \
height_min:=-10.0 height_max:=10.0 pc_max_depth:=5.0 \
save_image_all:=True save_freq:=$FREQ save_dir:=$DIR save_total:=$TOTAL