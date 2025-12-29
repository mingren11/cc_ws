cmake_minimum_required(VERSION 3.10)
project(example)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV 4 REQUIRED)
find_package(glog REQUIRED)
find_package(gflags REQUIRED)

add_library(vio SHARED IMPORTED GLOBAL)
set_target_properties(vio PROPERTIES IMPORTED_LOCATION /cc_ws/install/Sigma/libvio_xr_capi.so)

add_executable(example example.cc)
target_link_libraries(example vio ${OpenCV_LIBS} glog gflags)
