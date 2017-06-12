#include<ros/ros.h>
#include "../include/sr_4000.h"

Sr_Node::Sr_Node() : value(1) {


   nh = ros::NodeHandle("");
   sub = nh.subscribe("test_topic", 10, &TestNode::testCallback, this);
   
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "sr_node");

  Sr_Node tn;

  ros::spin();

  return 0;
}
