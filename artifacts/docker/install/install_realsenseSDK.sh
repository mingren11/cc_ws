#!/bin/bash
set -e

git clone https://github.com/IntelRealSense/librealsense.git
cd librealsense 
mkdir build && cd build 
cmake ../ -DBUILD_EXAMPLES=true -DFORCE_RSUSB_BACKEND=true 
make -j$(nproc) 
make install

rm -rf librealsense
echo "RealSense SDK installed successfully"