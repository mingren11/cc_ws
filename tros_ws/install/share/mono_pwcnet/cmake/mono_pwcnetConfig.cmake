# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mono_pwcnet_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mono_pwcnet_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mono_pwcnet_FOUND FALSE)
  elseif(NOT mono_pwcnet_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mono_pwcnet_FOUND FALSE)
  endif()
  return()
endif()
set(_mono_pwcnet_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mono_pwcnet_FIND_QUIETLY)
  message(STATUS "Found mono_pwcnet: 0.1.0 (${mono_pwcnet_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mono_pwcnet' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${mono_pwcnet_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mono_pwcnet_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mono_pwcnet_DIR}/${_extra}")
endforeach()
