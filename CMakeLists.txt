cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_library(welcome SHARED script/welcome.cpp)
target_link_libraries(welcome ${GAZEBO_LIBRARIES})

add_library(model_bounce SHARED script/model_bounce.cpp)
target_link_libraries(model_bounce ${GAZEBO_LIBRARIES})

add_library(arm_torque SHARED script/arm_torque.cpp)
target_link_libraries(arm_torque ${GAZEBO_LIBRARIES})
