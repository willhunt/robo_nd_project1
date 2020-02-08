cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_library(welcome SHARED script/welcome.cpp)
target_link_libraries(welcome ${GAZEBO_LIBRARIES})

add_library(model_bounce SHARED script/model_bounce.cpp)
target_link_libraries(model_bounce ${GAZEBO_LIBRARIES})

add_library(spin_arm SHARED script/spin_arm.cpp)
target_link_libraries(spin_arm ${GAZEBO_LIBRARIES})
