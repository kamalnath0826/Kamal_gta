#ifndef SR_H
#define SR_H

#include<ros/ros.h>
#include<string.h>
#include<sensor_msg/PointCloud.h>


class Sr_Node {

public:
  Sr_Node();
  ~Sr_Node() {}

private:
  void testCallback(const sensor_msgs::PointCloud::ConstPtr& point_msg){}
  void timerCallback(const ros::TimerEvent& e) {}


  ros::NodeHandle nh;
  ros::Subscriber sub;
  

  std::string name;
  int value;


};

#endif // TEST_NODE_H
