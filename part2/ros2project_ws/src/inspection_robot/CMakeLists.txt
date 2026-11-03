cmake_minimum_required(VERSION 3.8)
project(inspection_robot)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(inspection_interfaces REQUIRED)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

add_executable(robot1 src/robot1.cpp)
target_include_directories(robot1 PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(robot1 PUBLIC c_std_99 cxx_std_17)

ament_target_dependencies(
  robot1
  "rclcpp"
  "inspection_interfaces"
)


add_executable(moniter src/moniter.cpp)
target_include_directories(moniter PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(moniter PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(
  moniter
  "rclcpp"
  "inspection_interfaces"
)

target_link_libraries(robot1  inspection_interfaces::inspection_interfaces__rosidl_typesupport_cpp)
target_link_libraries(moniter inspection_interfaces::inspection_interfaces__rosidl_typesupport_cpp)
install(TARGETS robot1 moniter
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})
  
ament_package()