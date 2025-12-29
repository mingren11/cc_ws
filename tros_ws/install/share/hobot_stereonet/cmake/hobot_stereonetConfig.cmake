# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_hobot_stereonet_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED hobot_stereonet_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(hobot_stereonet_FOUND FALSE)
  elseif(NOT hobot_stereonet_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(hobot_stereonet_FOUND FALSE)
  endif()
  return()
endif()
set(_hobot_stereonet_CONFIG_INCLUDED TRUE)

# output package information
if(NOT hobot_stereonet_FIND_QUIETLY)
  message(STATUS "Found hobot_stereonet: 2.4.6 (${hobot_stereonet_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'hobot_stereonet' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${hobot_stereonet_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(hobot_stereonet_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${hobot_stereonet_DIR}/${_extra}")
endforeach()
