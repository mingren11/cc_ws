# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_trigger_node_example_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED trigger_node_example_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(trigger_node_example_FOUND FALSE)
  elseif(NOT trigger_node_example_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(trigger_node_example_FOUND FALSE)
  endif()
  return()
endif()
set(_trigger_node_example_CONFIG_INCLUDED TRUE)

# output package information
if(NOT trigger_node_example_FIND_QUIETLY)
  message(STATUS "Found trigger_node_example: 2.1.0 (${trigger_node_example_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'trigger_node_example' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${trigger_node_example_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(trigger_node_example_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${trigger_node_example_DIR}/${_extra}")
endforeach()
