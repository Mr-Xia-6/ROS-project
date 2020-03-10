#include<ros/ros.h>
#include "turtlesim/Pose.h"

void poseCallback(const turtlesim::Pose::ConstPtr& msg)
{
	ros::Rate loop_rate(10);
	ROS_INFO("Turtle pose: x:%0.6f, y:%0.6f",msg->x,msg->y);
	loop_rate.sleep();
}

int main(int argc, char **argv)
{
	ros::init(argc,argv,"pose_subscriber");
	ros::NodeHandle n;
	ros::Subscriber pose_sub=n.subscribe("/turtle1/pose",10,poseCallback);
	ros::Rate loop_rate(10);
        ros::spin();

	return 0;
}
