/**
 * @file thrust_controller.cpp
 * @author Nathaniel Mallick (nmm109@pitt.edu)
 * @brief RAS-Aerial PID implementation of a thrust controller 
 * @version 0.1
 * @date 2022-04-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h> 
#include <offboard/offboardMode.h> 


offboard::offboardMode mode; // offboard mode
geometry_msgs::PoseStamped measured_pose; // drone pose 

void pose_cb( const geometry_msgs::PoseStamped::ConstPtr& msg ) { 
    measured_pose = *msg; 
}

int main(int argc, char **argv) { 

    /* INITIALIZE AS A ROS NODE */
    ros::init(argc, argv, "thrust_controller"); 
    ros::NodeHandle nh; 

    /* DECLARED PUBLISHERS AND SUBSCRIBER */ 
    
    // Position Subscription
    ros::Subscriber pos_sub = nh.subscribe<geometry_msgs::PoseStamped>
        ("mavros/local_position/pose", 10, pose_cb); 
    
    ros::Rate rate(20.0);   

}



