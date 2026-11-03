# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target inspection_interfaces::inspection_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${inspection_interfaces_TARGETS}.
if(inspection_interfaces_TARGETS AND NOT TARGET inspection_interfaces::inspection_interfaces)
  add_library(inspection_interfaces::inspection_interfaces INTERFACE IMPORTED)
  set_target_properties(inspection_interfaces::inspection_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${inspection_interfaces_TARGETS}")
endif()
