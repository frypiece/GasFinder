#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block center_control/Subscribe
extern SimulinkSubscriber<geometry_msgs::PolygonStamped, SL_Bus_center_control_geometry_msgs_PolygonStamped> Sub_center_control_1;

// For Block center_control/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_center_control_geometry_msgs_Twist> Pub_center_control_8;

void slros_node_init(int argc, char** argv);

#endif
