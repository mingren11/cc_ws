# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_hobot_dosod_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED hobot_dosod_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(hobot_dosod_FOUND FALSE)
  elseif(NOT hobot_dosod_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(hobot_dosod_FOUND FALSE)
  endif()
  return()
endif()
set(_hobot_dosod_CONFIG_INCLUDED TRUE)

# output package information
if(NOT hobot_dosod_FIND_QUIETLY)
  message(STATUS "Found hobot_dosod: 1.0.0 (${hobot_dosod_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'hobot_dosod' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${hobot_dosod_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(hobot_dosod_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${hobot_dosod_DIR}/${_extra}")
endforeach()
