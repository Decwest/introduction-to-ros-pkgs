#include <ros/ros.h>
#include <std_msgs/String.h>

void mytopicCallback(const std_msgs::String &msg)
{
    ROS_INFO("subscribe: %s", msg.data.c_str());
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "my_simple_subscriber");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("my_topic", 1, mytopicCallback);

    ros::spin();
    return 0;
}