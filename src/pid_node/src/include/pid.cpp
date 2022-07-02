/**
 * @file pid.cc
 * @author NMM (nmm109@pitt.edu)
 * @brief Class defintion of a PID controller. 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "pid.h"

PID::PID( const geometry_msgs::PoseStamped &pose,
            mavros_msgs::AttitudeTarget &att, 
            const pid_opts &opts )
    : u_1(0), e_1(0), e_2(0), 
        pose(&pose), att(&att), opts(opts) 
{

}

double PID::samplingTime() 
{
    return opts.TS; 
}

void PID::loop(geometry_msgs::PoseStamped& sp)
{
    // Open bag file to record data
    rosbag::Bag bag;
    bag.open("/home/ras/Drone/RASA-Drone/bagfiles/PID_info.bag", rosbag::bagmode::Write)
    
    // ROS_INFO("Setpoint height is : %f", sp.pose.position.z); 
    e = sp.pose.position.z - (*pose).pose.position.z; 
    ROS_INFO("Error: %f", e);

    // Store data in ros msg floats
    std_msgs::Float64 kp_m;
    std_msgs::Float64 ki_m;
    std_msgs::Float64 kd_m;
    std_msgs::Float64 e_m;
    std_msgs::Float64 sp_m;
    std_msgs::Float64 p_m

    // Write data into bag file
    bag.write("KP", ros::Time::now(), kp_m)
    bag.write("KI", ros::Time::now(), ki_m)
    bag.write("KD", ros::Time::now(), Kd_m)
    bag.write("Error", ros::Time::now(), e_m)
    bag.write("Setpoint", ros::Time::now(), sp_m)
    bag.write("Current Position", ros::Time::now(), p_m)

    u = u_1 + 
        ( opts.KP + (opts.KD / opts.TS))*e + 
        (-opts.KP - (2*opts.KD/opts.TS))*e_1 + 
        (opts.KD/opts.TS)*e_2; 
    
    if( u > 1 ) att->thrust = 1.0; 
    else if ( u < 0 ) att->thrust = 0.0; 
    else att->thrust = u; 
    
    // Update hist variables 
    u_1 = u; 
    e_2 = e_1; 
    e_1 = e; 

    bag.close()
}

