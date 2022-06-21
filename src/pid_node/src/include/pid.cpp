/**
 * @file pid.cc
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "pid.h"

PID::PID( const geometry_msgs::PoseStamped& pose,
            const mavros_msgs::AttitudeTarget& att, 
            const pid_opts=options )
    : u(0), u_1(0), e(0), e_1(0), e_2(0), 
        in(pose), out(att)
{

}

double PID::samplingTime() 
{
    return opts.TS; 
}


