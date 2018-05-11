#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "obstacle_detector";

// For Block obstacle_detector/Subscribe
SimulinkSubscriber<rosgraph_msgs::Clock, SL_Bus_obstacle_detector_rosgraph_msgs_Clock> Sub_obstacle_detector_66;

// For Block obstacle_detector/Subscribe1
SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_obstacle_detector_sensor_msgs_LaserScan> Sub_obstacle_detector_63;

// For Block obstacle_detector/Publish
SimulinkPublisher<geometry_msgs::PolygonStamped, SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped> Pub_obstacle_detector_6;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

