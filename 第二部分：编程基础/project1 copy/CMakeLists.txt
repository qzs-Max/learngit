cmake_minimum_required(VERSION 3.16)
project(robot_action_system VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

# 核心库：动作体系 + 机器人控制
add_library(robot_core STATIC
    src/action.cpp
    src/robot.cpp
)
target_include_directories(robot_core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

if(MSVC)
    target_compile_options(robot_core PRIVATE /W4 /permissive- /utf-8)
else()
    target_compile_options(robot_core PRIVATE -Wall -Wextra -Wpedantic)
endif()

# 演示程序
add_executable(robot_demo app/main.cpp)
target_link_libraries(robot_demo PRIVATE robot_core)

# 中文输出在 MSVC 下需要 /utf-8，否则 ° 和汉字会乱码
if(MSVC)
    target_compile_options(robot_demo PRIVATE /utf-8)
    target_compile_options(robot_demo_extended PRIVATE /utf-8)
endif()