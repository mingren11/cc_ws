# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_clip_manage_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED clip_manage_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(clip_manage_FOUND FALSE)
  elseif(NOT clip_manage_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(clip_manage_FOUND FALSE)
  endif()
  return()
endif()
set(_clip_manage_CONFIG_INCLUDED TRUE)

# output package information
if(NOT clip_manage_FIND_QUIETLY)
  message(STATUS "Found clip_manage: 0.3.0 (${clip_manage_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'clip_manage' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${clip_manage_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(clip_manage_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${clip_manage_DIR}/${_extra}")
endforeach()
