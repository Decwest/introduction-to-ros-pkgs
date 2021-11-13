cmake_minimum_required(VERSION 3.0.2)
project(room_circuit_controller)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES my_ros_tutorial
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(room_circuit_controller src/room_circuit_controller.cpp)
target_link_libraries(room_circuit_controller ${catkin_LIBRARIES})
