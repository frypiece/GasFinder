#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "center_control";

// For Block center_control/Subscribe
SimulinkSubscriber<geometry_msgs::PolygonStamped, SL_Bus_center_control_geometry_msgs_PolygonStamped> Sub_center_control_1;

// For Block center_control/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_center_control_geometry_msgs_Twist> Pub_center_control_8;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

