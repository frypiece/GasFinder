#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_obstacle_detector_geometry_msgs_Point32 and geometry_msgs::Point32

void convertFromBus(geometry_msgs::Point32* msgPtr, SL_Bus_obstacle_detector_geometry_msgs_Point32 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Point32");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_obstacle_detector_geometry_msgs_Point32* busPtr, geometry_msgs::Point32 const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Point32");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_obstacle_detector_geometry_msgs_Polygon and geometry_msgs::Polygon

void convertFromBus(geometry_msgs::Polygon* msgPtr, SL_Bus_obstacle_detector_geometry_msgs_Polygon const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Polygon");

  convertFromBusVariableNestedArray(msgPtr->points, busPtr->Points, busPtr->Points_SL_Info);
}

void convertToBus(SL_Bus_obstacle_detector_geometry_msgs_Polygon* busPtr, geometry_msgs::Polygon const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Polygon");

  convertToBusVariableNestedArray(busPtr->Points, busPtr->Points_SL_Info, msgPtr->points, slros::EnabledWarning(rosMessageType, "points"));
}


// Conversions between SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped and geometry_msgs::PolygonStamped

void convertFromBus(geometry_msgs::PolygonStamped* msgPtr, SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/PolygonStamped");

  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBus(&msgPtr->polygon, &busPtr->Polygon);
}

void convertToBus(SL_Bus_obstacle_detector_geometry_msgs_PolygonStamped* busPtr, geometry_msgs::PolygonStamped const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/PolygonStamped");

  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBus(&busPtr->Polygon, &msgPtr->polygon);
}


// Conversions between SL_Bus_obstacle_detector_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_obstacle_detector_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->sec =  busPtr->Sec;
  msgPtr->nsec =  busPtr->Nsec;
}

void convertToBus(SL_Bus_obstacle_detector_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Sec =  msgPtr->sec;
  busPtr->Nsec =  msgPtr->nsec;
}


// Conversions between SL_Bus_obstacle_detector_rosgraph_msgs_Clock and rosgraph_msgs::Clock

void convertFromBus(rosgraph_msgs::Clock* msgPtr, SL_Bus_obstacle_detector_rosgraph_msgs_Clock const* busPtr)
{
  const std::string rosMessageType("rosgraph_msgs/Clock");

  convertFromBus(&msgPtr->clock, &busPtr->Clock_);
}

void convertToBus(SL_Bus_obstacle_detector_rosgraph_msgs_Clock* busPtr, rosgraph_msgs::Clock const* msgPtr)
{
  const std::string rosMessageType("rosgraph_msgs/Clock");

  convertToBus(&busPtr->Clock_, &msgPtr->clock);
}


// Conversions between SL_Bus_obstacle_detector_sensor_msgs_LaserScan and sensor_msgs::LaserScan

void convertFromBus(sensor_msgs::LaserScan* msgPtr, SL_Bus_obstacle_detector_sensor_msgs_LaserScan const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/LaserScan");

  msgPtr->angle_increment =  busPtr->AngleIncrement;
  msgPtr->angle_max =  busPtr->AngleMax;
  msgPtr->angle_min =  busPtr->AngleMin;
  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBusVariablePrimitiveArray(msgPtr->intensities, busPtr->Intensities, busPtr->Intensities_SL_Info);
  msgPtr->range_max =  busPtr->RangeMax;
  msgPtr->range_min =  busPtr->RangeMin;
  convertFromBusVariablePrimitiveArray(msgPtr->ranges, busPtr->Ranges, busPtr->Ranges_SL_Info);
  msgPtr->scan_time =  busPtr->ScanTime;
  msgPtr->time_increment =  busPtr->TimeIncrement;
}

void convertToBus(SL_Bus_obstacle_detector_sensor_msgs_LaserScan* busPtr, sensor_msgs::LaserScan const* msgPtr)
{
  const std::string rosMessageType("sensor_msgs/LaserScan");

  busPtr->AngleIncrement =  msgPtr->angle_increment;
  busPtr->AngleMax =  msgPtr->angle_max;
  busPtr->AngleMin =  msgPtr->angle_min;
  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBusVariablePrimitiveArray(busPtr->Intensities, busPtr->Intensities_SL_Info, msgPtr->intensities, slros::EnabledWarning(rosMessageType, "intensities"));
  busPtr->RangeMax =  msgPtr->range_max;
  busPtr->RangeMin =  msgPtr->range_min;
  convertToBusVariablePrimitiveArray(busPtr->Ranges, busPtr->Ranges_SL_Info, msgPtr->ranges, slros::EnabledWarning(rosMessageType, "ranges"));
  busPtr->ScanTime =  msgPtr->scan_time;
  busPtr->TimeIncrement =  msgPtr->time_increment;
}


// Conversions between SL_Bus_obstacle_detector_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_obstacle_detector_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_obstacle_detector_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}

