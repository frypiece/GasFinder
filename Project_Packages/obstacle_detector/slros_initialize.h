#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block obstacle_detector/Subscribe
extern SimulinkSubscriber<rosgraph_msgs::Clock, SL_Bus_obstacle_detector_rosgraph_msgs_Clock> Sub_obstacle_detector_66;

// For Block obstacle_detector/Subscribe1
extern SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_obstacle_detector_sensor_msgs_LaserScan> Sub_obstacle_detector_63;

// For Block obstacle_detector/Publish
extern SimulinkPublisher<geometry_msgs::PolygonStamped, SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped> Pub_obstacle_detector_6;

void slros_node_init(int argc, char** argv);

#endif
