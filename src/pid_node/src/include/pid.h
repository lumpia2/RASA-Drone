/**
 * @file pid.hh
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __PID_H
    #define __PID_H

#pragma once 

#include <ros/ros.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/PoseStamped.h>
#include <mavros_msgs/AttitudeTarget.h>

// #include "pid.cc"

/* PID IMPLEMENTATION  */
void loop(float sp) 
{ 
    // e = sp - pose.pose.position.z; 

    // u = u_1 + 
    //     ( constants.KP + (constants.KD / constants.TS))*e + 
    //     (-constants.KP - (2*constants.KD/constants.TS))*e_1 + 
    //     (constants.KD/constants.TS)*e_2; 
    
    // if ( u > 1 ) att.thrust = 1.0; 
    // else if ( u < 0 ) att.thrust = 0.0; 
    // else att.thrust = u;  

    // // Updating variables 
    // u_1 = u; 
    // e_2 = e_1; 
    // e_1 = e; 
}

/* PID gain values */
struct pid_opts { 
    double KP=0.6,
                 KI=1.0, 
                 KD=0.5;
    double TS = 1/50.0; 
} options; 
 
class PID 
{ 
public:
    PID( const geometry_msgs::PoseStamped&,
            const mavros_msgs::AttitudeTarget&,
            const pid_opts );
    void loop(geometry_msgs::PoseStamped sp);  
    double samplingTime(); 

private: 
    double u, u_1;  
    double e, e_1, e_2; 
    pid_opts opts; 
    geometry_msgs::PoseStamped in; 
    mavros_msgs::AttitudeTarget out; 
};

#endif


