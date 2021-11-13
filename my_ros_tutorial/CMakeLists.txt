cmake_minimum_required(VERSION 3.0.2)
project(my_ros_tutorial)

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

add_executable(my_simple_publisher src/my_simple_publisher.cpp)
target_link_libraries(my_simple_publisher ${catkin_LIBRARIES})

add_executable(my_simple_subscriber src/my_simple_subscriber.cpp)
target_link_libraries(my_simple_subscriber ${catkin_LIBRARIES})