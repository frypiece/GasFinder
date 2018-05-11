#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Point32.h>
#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/PolygonStamped.h>
#include <ros/time.h>
#include <rosgraph_msgs/Clock.h>
#include <sensor_msgs/LaserScan.h>
#include <std_msgs/Header.h>
#include "obstacle_detector_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Point32* msgPtr, SL_Bus_obstacle_detector_geometry_msgs_Point32 const* busPtr);
void convertToBus(SL_Bus_obstacle_detector_geometry_msgs_Point32* busPtr, geometry_msgs::Point32 const* msgPtr);

void convertFromBus(geometry_msgs::Polygon* msgPtr, SL_Bus_obstacle_detector_geometry_msgs_Polygon const* busPtr);
void convertToBus(SL_Bus_obstacle_detector_geometry_msgs_Polygon* busPtr, geometry_msgs::Polygon const* msgPtr);

void convertFromBus(geometry_msgs::PolygonStamped* msgPtr, SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped const* busPtr);
void convertToBus(SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped* busPtr, geometry_msgs::PolygonStamped const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_obstacle_detector_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_obstacle_detector_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(rosgraph_msgs::Clock* msgPtr, SL_Bus_obstacle_detector_rosgraph_msgs_Clock const* busPtr);
void convertToBus(SL_Bus_obstacle_detector_rosgraph_msgs_Clock* busPtr, rosgraph_msgs::Clock const* msgPtr);

void convertFromBus(sensor_msgs::LaserScan* msgPtr, SL_Bus_obstacle_detector_sensor_msgs_LaserScan const* busPtr);
void convertToBus(SL_Bus_obstacle_detector_sensor_msgs_LaserScan* busPtr, sensor_msgs::LaserScan const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_obstacle_detector_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_obstacle_detector_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);


#endif
