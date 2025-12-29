# Install script for directory: /cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/cc_ws/tros_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/aarch64-linux-gnu-objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_component_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_component_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_component_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet" TYPE EXECUTABLE FILES "/cc_ws/tros_ws/build/hobot_stereonet/stereonet_model_component_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_component_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_component_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_component_node"
         OLD_RPATH "/cc_ws/tros_ws/build/poco_vendor/poco_external_project_install/lib/:/cc_ws/tros_ws/build/libyaml_vendor/libyaml_install/lib/:/usr/lib/hbbpu:/usr/hobot/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/aarch64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_component_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet" TYPE EXECUTABLE FILES "/cc_ws/tros_ws/build/hobot_stereonet/stereonet_model_intra_sub_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node"
         OLD_RPATH "/cc_ws/tros_ws/build/poco_vendor/poco_external_project_install/lib/:/cc_ws/tros_ws/build/libyaml_vendor/libyaml_install/lib/:/usr/lib/hbbpu:/usr/hobot/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/aarch64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet" TYPE EXECUTABLE FILES "/cc_ws/tros_ws/build/hobot_stereonet/stereonet_model_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_node"
         OLD_RPATH "/cc_ws/tros_ws/build/poco_vendor/poco_external_project_install/lib/:/cc_ws/tros_ws/build/libyaml_vendor/libyaml_install/lib/:/usr/lib/hbbpu:/usr/hobot/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/aarch64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet" TYPE EXECUTABLE FILES "/cc_ws/tros_ws/build/hobot_stereonet/stereonet_model_intra_sub_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node"
         OLD_RPATH "/cc_ws/tros_ws/build/poco_vendor/poco_external_project_install/lib/:/cc_ws/tros_ws/build/libyaml_vendor/libyaml_install/lib/:/usr/lib/hbbpu:/usr/hobot/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/aarch64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/stereonet_model_intra_sub_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/data_collection" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/data_collection")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/data_collection"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet" TYPE EXECUTABLE FILES "/cc_ws/tros_ws/build/hobot_stereonet/data_collection")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/data_collection" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/data_collection")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/data_collection"
         OLD_RPATH "/cc_ws/tros_ws/build/poco_vendor/poco_external_project_install/lib/:/cc_ws/tros_ws/build/libyaml_vendor/libyaml_install/lib/:/usr/lib/hbbpu:/usr/hobot/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/aarch64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/hobot_stereonet/data_collection")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/cc_ws/tros_ws/build/hobot_stereonet/libstereonet_model.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model.so"
         OLD_RPATH "/cc_ws/tros_ws/build/poco_vendor/poco_external_project_install/lib/:/cc_ws/tros_ws/build/libyaml_vendor/libyaml_install/lib/:/usr/lib/hbbpu:/usr/hobot/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/aarch64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model_intra_sub.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model_intra_sub.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model_intra_sub.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/cc_ws/tros_ws/build/hobot_stereonet/libstereonet_model_intra_sub.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model_intra_sub.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model_intra_sub.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model_intra_sub.so"
         OLD_RPATH "/cc_ws/tros_ws/build/poco_vendor/poco_external_project_install/lib/:/cc_ws/tros_ws/build/libyaml_vendor/libyaml_install/lib/:/usr/lib/hbbpu:/usr/hobot/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/aarch64-linux-gnu-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libstereonet_model_intra_sub.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE DIRECTORY FILES "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet/launch" TYPE FILE FILES
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/stereonet_model.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/stereonet_model_component.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/stereonet_model_web_visual.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/stereonet_model_web_visual_component.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/stereonet_offline_infer.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_cmp_rs_230ai.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_cmp_rs_2i.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_cmp_rs_mini.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_cmp_rs_mini_v2.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_component_v2.0.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_component_v2.1.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_component_v2.2.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_component_v2.3.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_v2.0.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_v2.1.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_v2.2.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_v2.3.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_v2.4_int16.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_v2.4_int16_320_256.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_v2.4_int8.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_zed_v2.0.launch.py"
    "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/launch/x5/stereonet_model_web_visual_zed_v2.2.launch.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE DIRECTORY FILES "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE DIRECTORY FILES "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/data")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/hobot_stereonet")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/hobot_stereonet")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet/environment" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet/environment" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_index/share/ament_index/resource_index/packages/hobot_stereonet")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rclcpp_components" TYPE FILE FILES "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_index/share/ament_index/resource_index/rclcpp_components/hobot_stereonet")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet/cmake" TYPE FILE FILES
    "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_core/hobot_stereonetConfig.cmake"
    "/cc_ws/tros_ws/build/hobot_stereonet/ament_cmake_core/hobot_stereonetConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/hobot_stereonet" TYPE FILE FILES "/cc_ws/tros_ws/src/box/hobot_perception/hobot_stereonet/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/cc_ws/tros_ws/build/hobot_stereonet/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
