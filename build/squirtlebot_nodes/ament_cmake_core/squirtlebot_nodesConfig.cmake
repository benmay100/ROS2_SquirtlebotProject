# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_squirtlebot_nodes_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED squirtlebot_nodes_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(squirtlebot_nodes_FOUND FALSE)
  elseif(NOT squirtlebot_nodes_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(squirtlebot_nodes_FOUND FALSE)
  endif()
  return()
endif()
set(_squirtlebot_nodes_CONFIG_INCLUDED TRUE)

# output package information
if(NOT squirtlebot_nodes_FIND_QUIETLY)
  message(STATUS "Found squirtlebot_nodes: 0.0.0 (${squirtlebot_nodes_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'squirtlebot_nodes' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT squirtlebot_nodes_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(squirtlebot_nodes_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${squirtlebot_nodes_DIR}/${_extra}")
endforeach()
