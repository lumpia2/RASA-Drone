/** @file
 *  @brief MAVLink comm protocol generated from ardupilotmega.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_ARDUPILOTMEGA_H
#define MAVLINK_ARDUPILOTMEGA_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ARDUPILOTMEGA.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 1

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {9, 31, 12, 0, 14, 28, 3, 32, 36, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 20, 2, 25, 23, 30, 101, 22, 26, 16, 14, 28, 32, 28, 28, 22, 22, 21, 6, 6, 37, 4, 4, 2, 2, 4, 2, 2, 3, 13, 12, 37, 4, 0, 0, 27, 25, 0, 0, 0, 0, 0, 72, 26, 181, 225, 42, 6, 4, 0, 11, 18, 0, 0, 37, 20, 35, 33, 3, 0, 0, 4, 22, 39, 37, 53, 51, 53, 51, 0, 28, 56, 42, 33, 81, 0, 0, 0, 0, 0, 0, 26, 32, 32, 20, 32, 62, 44, 64, 84, 9, 254, 16, 12, 36, 44, 64, 22, 6, 14, 12, 97, 2, 2, 113, 35, 6, 79, 35, 35, 22, 13, 255, 14, 18, 43, 8, 22, 14, 36, 43, 41, 32, 243, 14, 93, 0, 100, 36, 60, 30, 42, 8, 4, 12, 15, 13, 6, 15, 14, 0, 12, 3, 8, 28, 44, 3, 9, 22, 12, 18, 34, 66, 98, 8, 48, 19, 3, 20, 24, 29, 45, 4, 40, 2, 206, 7, 29, 0, 0, 0, 0, 27, 44, 22, 25, 37, 0, 0, 0, 0, 42, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 3, 3, 6, 7, 2, 0, 0, 0, 0, 0, 65, 8, 0, 0, 0, 42, 40, 63, 182, 40, 42, 0, 0, 0, 0, 0, 32, 52, 53, 6, 2, 38, 19, 254, 36, 30, 18, 18, 51, 9, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {50, 124, 137, 0, 237, 217, 104, 119, 117, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 214, 159, 220, 168, 24, 23, 170, 144, 67, 115, 39, 246, 185, 104, 237, 244, 222, 212, 9, 254, 230, 28, 28, 132, 221, 232, 11, 153, 41, 39, 78, 196, 0, 0, 15, 3, 0, 0, 0, 0, 0, 167, 183, 119, 191, 118, 148, 21, 0, 243, 124, 0, 0, 38, 20, 158, 152, 143, 0, 0, 14, 106, 49, 22, 143, 140, 5, 150, 0, 231, 183, 63, 54, 47, 0, 0, 0, 0, 0, 0, 175, 102, 158, 208, 56, 93, 138, 108, 32, 185, 84, 34, 174, 124, 237, 4, 76, 128, 56, 116, 134, 237, 203, 250, 87, 203, 220, 25, 226, 46, 29, 223, 85, 6, 229, 203, 1, 195, 109, 168, 181, 47, 72, 131, 127, 0, 103, 154, 178, 200, 134, 219, 208, 188, 84, 22, 19, 21, 134, 0, 78, 68, 189, 127, 154, 21, 21, 144, 1, 234, 73, 181, 22, 83, 167, 138, 234, 240, 47, 189, 52, 174, 229, 85, 159, 186, 72, 0, 0, 0, 0, 92, 36, 71, 98, 120, 0, 0, 0, 0, 134, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 101, 50, 202, 17, 162, 0, 0, 0, 0, 0, 208, 207, 0, 0, 0, 163, 105, 151, 35, 150, 179, 0, 0, 0, 0, 0, 90, 104, 85, 95, 130, 184, 81, 8, 204, 49, 170, 44, 83, 46, 0}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ARDUPILOTMEGA

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_ACCELCAL_VEHICLE_POS
#define HAVE_ENUM_ACCELCAL_VEHICLE_POS
typedef enum ACCELCAL_VEHICLE_POS
{
   ACCELCAL_VEHICLE_POS_LEVEL=1, /*  | */
   ACCELCAL_VEHICLE_POS_LEFT=2, /*  | */
   ACCELCAL_VEHICLE_POS_RIGHT=3, /*  | */
   ACCELCAL_VEHICLE_POS_NOSEDOWN=4, /*  | */
   ACCELCAL_VEHICLE_POS_NOSEUP=5, /*  | */
   ACCELCAL_VEHICLE_POS_BACK=6, /*  | */
   ACCELCAL_VEHICLE_POS_SUCCESS=16777215, /*  | */
   ACCELCAL_VEHICLE_POS_FAILED=16777216, /*  | */
   ACCELCAL_VEHICLE_POS_ENUM_END=16777217, /*  | */
} ACCELCAL_VEHICLE_POS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_HEADING_TYPE
#define HAVE_ENUM_HEADING_TYPE
typedef enum HEADING_TYPE
{
   HEADING_TYPE_COURSE_OVER_GROUND=0, /*  | */
   HEADING_TYPE_HEADING=1, /*  | */
   HEADING_TYPE_ENUM_END=2, /*  | */
} HEADING_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SPEED_TYPE
#define HAVE_ENUM_SPEED_TYPE
typedef enum SPEED_TYPE
{
   SPEED_TYPE_AIRSPEED=0, /*  | */
   SPEED_TYPE_GROUNDSPEED=1, /*  | */
   SPEED_TYPE_ENUM_END=2, /*  | */
} SPEED_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SCRIPTING_CMD
#define HAVE_ENUM_SCRIPTING_CMD
typedef enum SCRIPTING_CMD
{
   SCRIPTING_CMD_REPL_START=0, /* Start a REPL session. | */
   SCRIPTING_CMD_REPL_STOP=1, /* End a REPL session. | */
   SCRIPTING_CMD_STOP=2, /* Stop execution of scripts. | */
   SCRIPTING_CMD_STOP_AND_RESTART=3, /* Stop execution of scripts and restart. | */
   SCRIPTING_CMD_ENUM_END=4, /*  | */
} SCRIPTING_CMD;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LIMITS_STATE
#define HAVE_ENUM_LIMITS_STATE
typedef enum LIMITS_STATE
{
   LIMITS_INIT=0, /* Pre-initialization. | */
   LIMITS_DISABLED=1, /* Disabled. | */
   LIMITS_ENABLED=2, /* Checking limits. | */
   LIMITS_TRIGGERED=3, /* A limit has been breached. | */
   LIMITS_RECOVERING=4, /* Taking action e.g. Return/RTL. | */
   LIMITS_RECOVERED=5, /* We're no longer in breach of a limit. | */
   LIMITS_STATE_ENUM_END=6, /*  | */
} LIMITS_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LIMIT_MODULE
#define HAVE_ENUM_LIMIT_MODULE
typedef enum LIMIT_MODULE
{
   LIMIT_GPSLOCK=1, /* Pre-initialization. | */
   LIMIT_GEOFENCE=2, /* Disabled. | */
   LIMIT_ALTITUDE=4, /* Checking limits. | */
   LIMIT_MODULE_ENUM_END=5, /*  | */
} LIMIT_MODULE;
#endif

/** @brief Flags in RALLY_POINT message. */
#ifndef HAVE_ENUM_RALLY_FLAGS
#define HAVE_ENUM_RALLY_FLAGS
typedef enum RALLY_FLAGS
{
   FAVORABLE_WIND=1, /* Flag set when requiring favorable winds for landing. | */
   LAND_IMMEDIATELY=2, /* Flag set when plane is to immediately descend to break altitude and land without GCS intervention. Flag not set when plane is to loiter at Rally point until commanded to land. | */
   RALLY_FLAGS_ENUM_END=3, /*  | */
} RALLY_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_CAMERA_STATUS_TYPES
#define HAVE_ENUM_CAMERA_STATUS_TYPES
typedef enum CAMERA_STATUS_TYPES
{
   CAMERA_STATUS_TYPE_HEARTBEAT=0, /* Camera heartbeat, announce camera component ID at 1Hz. | */
   CAMERA_STATUS_TYPE_TRIGGER=1, /* Camera image triggered. | */
   CAMERA_STATUS_TYPE_DISCONNECT=2, /* Camera connection lost. | */
   CAMERA_STATUS_TYPE_ERROR=3, /* Camera unknown error. | */
   CAMERA_STATUS_TYPE_LOWBATT=4, /* Camera battery low. Parameter p1 shows reported voltage. | */
   CAMERA_STATUS_TYPE_LOWSTORE=5, /* Camera storage low. Parameter p1 shows reported shots remaining. | */
   CAMERA_STATUS_TYPE_LOWSTOREV=6, /* Camera storage low. Parameter p1 shows reported video minutes remaining. | */
   CAMERA_STATUS_TYPES_ENUM_END=7, /*  | */
} CAMERA_STATUS_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_CAMERA_FEEDBACK_FLAGS
#define HAVE_ENUM_CAMERA_FEEDBACK_FLAGS
typedef enum CAMERA_FEEDBACK_FLAGS
{
   CAMERA_FEEDBACK_PHOTO=0, /* Shooting photos, not video. | */
   CAMERA_FEEDBACK_VIDEO=1, /* Shooting video, not stills. | */
   CAMERA_FEEDBACK_BADEXPOSURE=2, /* Unable to achieve requested exposure (e.g. shutter speed too low). | */
   CAMERA_FEEDBACK_CLOSEDLOOP=3, /* Closed loop feedback from camera, we know for sure it has successfully taken a picture. | */
   CAMERA_FEEDBACK_OPENLOOP=4, /* Open loop camera, an image trigger has been requested but we can't know for sure it has successfully taken a picture. | */
   CAMERA_FEEDBACK_FLAGS_ENUM_END=5, /*  | */
} CAMERA_FEEDBACK_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_MODE_GIMBAL
#define HAVE_ENUM_MAV_MODE_GIMBAL
typedef enum MAV_MODE_GIMBAL
{
   MAV_MODE_GIMBAL_UNINITIALIZED=0, /* Gimbal is powered on but has not started initializing yet. | */
   MAV_MODE_GIMBAL_CALIBRATING_PITCH=1, /* Gimbal is currently running calibration on the pitch axis. | */
   MAV_MODE_GIMBAL_CALIBRATING_ROLL=2, /* Gimbal is currently running calibration on the roll axis. | */
   MAV_MODE_GIMBAL_CALIBRATING_YAW=3, /* Gimbal is currently running calibration on the yaw axis. | */
   MAV_MODE_GIMBAL_INITIALIZED=4, /* Gimbal has finished calibrating and initializing, but is relaxed pending reception of first rate command from copter. | */
   MAV_MODE_GIMBAL_ACTIVE=5, /* Gimbal is actively stabilizing. | */
   MAV_MODE_GIMBAL_RATE_CMD_TIMEOUT=6, /* Gimbal is relaxed because it missed more than 10 expected rate command messages in a row. Gimbal will move back to active mode when it receives a new rate command. | */
   MAV_MODE_GIMBAL_ENUM_END=7, /*  | */
} MAV_MODE_GIMBAL;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS
#define HAVE_ENUM_GIMBAL_AXIS
typedef enum GIMBAL_AXIS
{
   GIMBAL_AXIS_YAW=0, /* Gimbal yaw axis. | */
   GIMBAL_AXIS_PITCH=1, /* Gimbal pitch axis. | */
   GIMBAL_AXIS_ROLL=2, /* Gimbal roll axis. | */
   GIMBAL_AXIS_ENUM_END=3, /*  | */
} GIMBAL_AXIS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_STATUS
#define HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_STATUS
typedef enum GIMBAL_AXIS_CALIBRATION_STATUS
{
   GIMBAL_AXIS_CALIBRATION_STATUS_IN_PROGRESS=0, /* Axis calibration is in progress. | */
   GIMBAL_AXIS_CALIBRATION_STATUS_SUCCEEDED=1, /* Axis calibration succeeded. | */
   GIMBAL_AXIS_CALIBRATION_STATUS_FAILED=2, /* Axis calibration failed. | */
   GIMBAL_AXIS_CALIBRATION_STATUS_ENUM_END=3, /*  | */
} GIMBAL_AXIS_CALIBRATION_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_REQUIRED
#define HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_REQUIRED
typedef enum GIMBAL_AXIS_CALIBRATION_REQUIRED
{
   GIMBAL_AXIS_CALIBRATION_REQUIRED_UNKNOWN=0, /* Whether or not this axis requires calibration is unknown at this time. | */
   GIMBAL_AXIS_CALIBRATION_REQUIRED_TRUE=1, /* This axis requires calibration. | */
   GIMBAL_AXIS_CALIBRATION_REQUIRED_FALSE=2, /* This axis does not require calibration. | */
   GIMBAL_AXIS_CALIBRATION_REQUIRED_ENUM_END=3, /*  | */
} GIMBAL_AXIS_CALIBRATION_REQUIRED;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_HEARTBEAT_STATUS
#define HAVE_ENUM_GOPRO_HEARTBEAT_STATUS
typedef enum GOPRO_HEARTBEAT_STATUS
{
   GOPRO_HEARTBEAT_STATUS_DISCONNECTED=0, /* No GoPro connected. | */
   GOPRO_HEARTBEAT_STATUS_INCOMPATIBLE=1, /* The detected GoPro is not HeroBus compatible. | */
   GOPRO_HEARTBEAT_STATUS_CONNECTED=2, /* A HeroBus compatible GoPro is connected. | */
   GOPRO_HEARTBEAT_STATUS_ERROR=3, /* An unrecoverable error was encountered with the connected GoPro, it may require a power cycle. | */
   GOPRO_HEARTBEAT_STATUS_ENUM_END=4, /*  | */
} GOPRO_HEARTBEAT_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_HEARTBEAT_FLAGS
#define HAVE_ENUM_GOPRO_HEARTBEAT_FLAGS
typedef enum GOPRO_HEARTBEAT_FLAGS
{
   GOPRO_FLAG_RECORDING=1, /* GoPro is currently recording. | */
   GOPRO_HEARTBEAT_FLAGS_ENUM_END=2, /*  | */
} GOPRO_HEARTBEAT_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_REQUEST_STATUS
#define HAVE_ENUM_GOPRO_REQUEST_STATUS
typedef enum GOPRO_REQUEST_STATUS
{
   GOPRO_REQUEST_SUCCESS=0, /* The write message with ID indicated succeeded. | */
   GOPRO_REQUEST_FAILED=1, /* The write message with ID indicated failed. | */
   GOPRO_REQUEST_STATUS_ENUM_END=2, /*  | */
} GOPRO_REQUEST_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_COMMAND
#define HAVE_ENUM_GOPRO_COMMAND
typedef enum GOPRO_COMMAND
{
   GOPRO_COMMAND_POWER=0, /* (Get/Set). | */
   GOPRO_COMMAND_CAPTURE_MODE=1, /* (Get/Set). | */
   GOPRO_COMMAND_SHUTTER=2, /* (___/Set). | */
   GOPRO_COMMAND_BATTERY=3, /* (Get/___). | */
   GOPRO_COMMAND_MODEL=4, /* (Get/___). | */
   GOPRO_COMMAND_VIDEO_SETTINGS=5, /* (Get/Set). | */
   GOPRO_COMMAND_LOW_LIGHT=6, /* (Get/Set). | */
   GOPRO_COMMAND_PHOTO_RESOLUTION=7, /* (Get/Set). | */
   GOPRO_COMMAND_PHOTO_BURST_RATE=8, /* (Get/Set). | */
   GOPRO_COMMAND_PROTUNE=9, /* (Get/Set). | */
   GOPRO_COMMAND_PROTUNE_WHITE_BALANCE=10, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_PROTUNE_COLOUR=11, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_PROTUNE_GAIN=12, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_PROTUNE_SHARPNESS=13, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_PROTUNE_EXPOSURE=14, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_TIME=15, /* (Get/Set). | */
   GOPRO_COMMAND_CHARGING=16, /* (Get/Set). | */
   GOPRO_COMMAND_ENUM_END=17, /*  | */
} GOPRO_COMMAND;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_CAPTURE_MODE
#define HAVE_ENUM_GOPRO_CAPTURE_MODE
typedef enum GOPRO_CAPTURE_MODE
{
   GOPRO_CAPTURE_MODE_VIDEO=0, /* Video mode. | */
   GOPRO_CAPTURE_MODE_PHOTO=1, /* Photo mode. | */
   GOPRO_CAPTURE_MODE_BURST=2, /* Burst mode, Hero 3+ only. | */
   GOPRO_CAPTURE_MODE_TIME_LAPSE=3, /* Time lapse mode, Hero 3+ only. | */
   GOPRO_CAPTURE_MODE_MULTI_SHOT=4, /* Multi shot mode, Hero 4 only. | */
   GOPRO_CAPTURE_MODE_PLAYBACK=5, /* Playback mode, Hero 4 only, silver only except when LCD or HDMI is connected to black. | */
   GOPRO_CAPTURE_MODE_SETUP=6, /* Playback mode, Hero 4 only. | */
   GOPRO_CAPTURE_MODE_UNKNOWN=255, /* Mode not yet known. | */
   GOPRO_CAPTURE_MODE_ENUM_END=256, /*  | */
} GOPRO_CAPTURE_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_RESOLUTION
#define HAVE_ENUM_GOPRO_RESOLUTION
typedef enum GOPRO_RESOLUTION
{
   GOPRO_RESOLUTION_480p=0, /* 848 x 480 (480p). | */
   GOPRO_RESOLUTION_720p=1, /* 1280 x 720 (720p). | */
   GOPRO_RESOLUTION_960p=2, /* 1280 x 960 (960p). | */
   GOPRO_RESOLUTION_1080p=3, /* 1920 x 1080 (1080p). | */
   GOPRO_RESOLUTION_1440p=4, /* 1920 x 1440 (1440p). | */
   GOPRO_RESOLUTION_2_7k_17_9=5, /* 2704 x 1440 (2.7k-17:9). | */
   GOPRO_RESOLUTION_2_7k_16_9=6, /* 2704 x 1524 (2.7k-16:9). | */
   GOPRO_RESOLUTION_2_7k_4_3=7, /* 2704 x 2028 (2.7k-4:3). | */
   GOPRO_RESOLUTION_4k_16_9=8, /* 3840 x 2160 (4k-16:9). | */
   GOPRO_RESOLUTION_4k_17_9=9, /* 4096 x 2160 (4k-17:9). | */
   GOPRO_RESOLUTION_720p_SUPERVIEW=10, /* 1280 x 720 (720p-SuperView). | */
   GOPRO_RESOLUTION_1080p_SUPERVIEW=11, /* 1920 x 1080 (1080p-SuperView). | */
   GOPRO_RESOLUTION_2_7k_SUPERVIEW=12, /* 2704 x 1520 (2.7k-SuperView). | */
   GOPRO_RESOLUTION_4k_SUPERVIEW=13, /* 3840 x 2160 (4k-SuperView). | */
   GOPRO_RESOLUTION_ENUM_END=14, /*  | */
} GOPRO_RESOLUTION;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_FRAME_RATE
#define HAVE_ENUM_GOPRO_FRAME_RATE
typedef enum GOPRO_FRAME_RATE
{
   GOPRO_FRAME_RATE_12=0, /* 12 FPS. | */
   GOPRO_FRAME_RATE_15=1, /* 15 FPS. | */
   GOPRO_FRAME_RATE_24=2, /* 24 FPS. | */
   GOPRO_FRAME_RATE_25=3, /* 25 FPS. | */
   GOPRO_FRAME_RATE_30=4, /* 30 FPS. | */
   GOPRO_FRAME_RATE_48=5, /* 48 FPS. | */
   GOPRO_FRAME_RATE_50=6, /* 50 FPS. | */
   GOPRO_FRAME_RATE_60=7, /* 60 FPS. | */
   GOPRO_FRAME_RATE_80=8, /* 80 FPS. | */
   GOPRO_FRAME_RATE_90=9, /* 90 FPS. | */
   GOPRO_FRAME_RATE_100=10, /* 100 FPS. | */
   GOPRO_FRAME_RATE_120=11, /* 120 FPS. | */
   GOPRO_FRAME_RATE_240=12, /* 240 FPS. | */
   GOPRO_FRAME_RATE_12_5=13, /* 12.5 FPS. | */
   GOPRO_FRAME_RATE_ENUM_END=14, /*  | */
} GOPRO_FRAME_RATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_FIELD_OF_VIEW
#define HAVE_ENUM_GOPRO_FIELD_OF_VIEW
typedef enum GOPRO_FIELD_OF_VIEW
{
   GOPRO_FIELD_OF_VIEW_WIDE=0, /* 0x00: Wide. | */
   GOPRO_FIELD_OF_VIEW_MEDIUM=1, /* 0x01: Medium. | */
   GOPRO_FIELD_OF_VIEW_NARROW=2, /* 0x02: Narrow. | */
   GOPRO_FIELD_OF_VIEW_ENUM_END=3, /*  | */
} GOPRO_FIELD_OF_VIEW;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_VIDEO_SETTINGS_FLAGS
#define HAVE_ENUM_GOPRO_VIDEO_SETTINGS_FLAGS
typedef enum GOPRO_VIDEO_SETTINGS_FLAGS
{
   GOPRO_VIDEO_SETTINGS_TV_MODE=1, /* 0=NTSC, 1=PAL. | */
   GOPRO_VIDEO_SETTINGS_FLAGS_ENUM_END=2, /*  | */
} GOPRO_VIDEO_SETTINGS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PHOTO_RESOLUTION
#define HAVE_ENUM_GOPRO_PHOTO_RESOLUTION
typedef enum GOPRO_PHOTO_RESOLUTION
{
   GOPRO_PHOTO_RESOLUTION_5MP_MEDIUM=0, /* 5MP Medium. | */
   GOPRO_PHOTO_RESOLUTION_7MP_MEDIUM=1, /* 7MP Medium. | */
   GOPRO_PHOTO_RESOLUTION_7MP_WIDE=2, /* 7MP Wide. | */
   GOPRO_PHOTO_RESOLUTION_10MP_WIDE=3, /* 10MP Wide. | */
   GOPRO_PHOTO_RESOLUTION_12MP_WIDE=4, /* 12MP Wide. | */
   GOPRO_PHOTO_RESOLUTION_ENUM_END=5, /*  | */
} GOPRO_PHOTO_RESOLUTION;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_WHITE_BALANCE
#define HAVE_ENUM_GOPRO_PROTUNE_WHITE_BALANCE
typedef enum GOPRO_PROTUNE_WHITE_BALANCE
{
   GOPRO_PROTUNE_WHITE_BALANCE_AUTO=0, /* Auto. | */
   GOPRO_PROTUNE_WHITE_BALANCE_3000K=1, /* 3000K. | */
   GOPRO_PROTUNE_WHITE_BALANCE_5500K=2, /* 5500K. | */
   GOPRO_PROTUNE_WHITE_BALANCE_6500K=3, /* 6500K. | */
   GOPRO_PROTUNE_WHITE_BALANCE_RAW=4, /* Camera Raw. | */
   GOPRO_PROTUNE_WHITE_BALANCE_ENUM_END=5, /*  | */
} GOPRO_PROTUNE_WHITE_BALANCE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_COLOUR
#define HAVE_ENUM_GOPRO_PROTUNE_COLOUR
typedef enum GOPRO_PROTUNE_COLOUR
{
   GOPRO_PROTUNE_COLOUR_STANDARD=0, /* Auto. | */
   GOPRO_PROTUNE_COLOUR_NEUTRAL=1, /* Neutral. | */
   GOPRO_PROTUNE_COLOUR_ENUM_END=2, /*  | */
} GOPRO_PROTUNE_COLOUR;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_GAIN
#define HAVE_ENUM_GOPRO_PROTUNE_GAIN
typedef enum GOPRO_PROTUNE_GAIN
{
   GOPRO_PROTUNE_GAIN_400=0, /* ISO 400. | */
   GOPRO_PROTUNE_GAIN_800=1, /* ISO 800 (Only Hero 4). | */
   GOPRO_PROTUNE_GAIN_1600=2, /* ISO 1600. | */
   GOPRO_PROTUNE_GAIN_3200=3, /* ISO 3200 (Only Hero 4). | */
   GOPRO_PROTUNE_GAIN_6400=4, /* ISO 6400. | */
   GOPRO_PROTUNE_GAIN_ENUM_END=5, /*  | */
} GOPRO_PROTUNE_GAIN;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_SHARPNESS
#define HAVE_ENUM_GOPRO_PROTUNE_SHARPNESS
typedef enum GOPRO_PROTUNE_SHARPNESS
{
   GOPRO_PROTUNE_SHARPNESS_LOW=0, /* Low Sharpness. | */
   GOPRO_PROTUNE_SHARPNESS_MEDIUM=1, /* Medium Sharpness. | */
   GOPRO_PROTUNE_SHARPNESS_HIGH=2, /* High Sharpness. | */
   GOPRO_PROTUNE_SHARPNESS_ENUM_END=3, /*  | */
} GOPRO_PROTUNE_SHARPNESS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_EXPOSURE
#define HAVE_ENUM_GOPRO_PROTUNE_EXPOSURE
typedef enum GOPRO_PROTUNE_EXPOSURE
{
   GOPRO_PROTUNE_EXPOSURE_NEG_5_0=0, /* -5.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_4_5=1, /* -4.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_4_0=2, /* -4.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_3_5=3, /* -3.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_3_0=4, /* -3.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_2_5=5, /* -2.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_2_0=6, /* -2.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_NEG_1_5=7, /* -1.5 EV. | */
   GOPRO_PROTUNE_EXPOSURE_NEG_1_0=8, /* -1.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_NEG_0_5=9, /* -0.5 EV. | */
   GOPRO_PROTUNE_EXPOSURE_ZERO=10, /* 0.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_0_5=11, /* +0.5 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_1_0=12, /* +1.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_1_5=13, /* +1.5 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_2_0=14, /* +2.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_2_5=15, /* +2.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_3_0=16, /* +3.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_3_5=17, /* +3.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_4_0=18, /* +4.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_4_5=19, /* +4.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_5_0=20, /* +5.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_ENUM_END=21, /*  | */
} GOPRO_PROTUNE_EXPOSURE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_CHARGING
#define HAVE_ENUM_GOPRO_CHARGING
typedef enum GOPRO_CHARGING
{
   GOPRO_CHARGING_DISABLED=0, /* Charging disabled. | */
   GOPRO_CHARGING_ENABLED=1, /* Charging enabled. | */
   GOPRO_CHARGING_ENUM_END=2, /*  | */
} GOPRO_CHARGING;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_MODEL
#define HAVE_ENUM_GOPRO_MODEL
typedef enum GOPRO_MODEL
{
   GOPRO_MODEL_UNKNOWN=0, /* Unknown gopro model. | */
   GOPRO_MODEL_HERO_3_PLUS_SILVER=1, /* Hero 3+ Silver (HeroBus not supported by GoPro). | */
   GOPRO_MODEL_HERO_3_PLUS_BLACK=2, /* Hero 3+ Black. | */
   GOPRO_MODEL_HERO_4_SILVER=3, /* Hero 4 Silver. | */
   GOPRO_MODEL_HERO_4_BLACK=4, /* Hero 4 Black. | */
   GOPRO_MODEL_ENUM_END=5, /*  | */
} GOPRO_MODEL;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_BURST_RATE
#define HAVE_ENUM_GOPRO_BURST_RATE
typedef enum GOPRO_BURST_RATE
{
   GOPRO_BURST_RATE_3_IN_1_SECOND=0, /* 3 Shots / 1 Second. | */
   GOPRO_BURST_RATE_5_IN_1_SECOND=1, /* 5 Shots / 1 Second. | */
   GOPRO_BURST_RATE_10_IN_1_SECOND=2, /* 10 Shots / 1 Second. | */
   GOPRO_BURST_RATE_10_IN_2_SECOND=3, /* 10 Shots / 2 Second. | */
   GOPRO_BURST_RATE_10_IN_3_SECOND=4, /* 10 Shots / 3 Second (Hero 4 Only). | */
   GOPRO_BURST_RATE_30_IN_1_SECOND=5, /* 30 Shots / 1 Second. | */
   GOPRO_BURST_RATE_30_IN_2_SECOND=6, /* 30 Shots / 2 Second. | */
   GOPRO_BURST_RATE_30_IN_3_SECOND=7, /* 30 Shots / 3 Second. | */
   GOPRO_BURST_RATE_30_IN_6_SECOND=8, /* 30 Shots / 6 Second. | */
   GOPRO_BURST_RATE_ENUM_END=9, /*  | */
} GOPRO_BURST_RATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL
#define HAVE_ENUM_MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL
typedef enum MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL
{
   MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL_LOW=0, /* Switch Low. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL_MIDDLE=1, /* Switch Middle. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL_HIGH=2, /* Switch High. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL_ENUM_END=3, /*  | */
} MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LED_CONTROL_PATTERN
#define HAVE_ENUM_LED_CONTROL_PATTERN
typedef enum LED_CONTROL_PATTERN
{
   LED_CONTROL_PATTERN_OFF=0, /* LED patterns off (return control to regular vehicle control). | */
   LED_CONTROL_PATTERN_FIRMWAREUPDATE=1, /* LEDs show pattern during firmware update. | */
   LED_CONTROL_PATTERN_CUSTOM=255, /* Custom Pattern using custom bytes fields. | */
   LED_CONTROL_PATTERN_ENUM_END=256, /*  | */
} LED_CONTROL_PATTERN;
#endif

/** @brief Flags in EKF_STATUS message. */
#ifndef HAVE_ENUM_EKF_STATUS_FLAGS
#define HAVE_ENUM_EKF_STATUS_FLAGS
typedef enum EKF_STATUS_FLAGS
{
   EKF_ATTITUDE=1, /* Set if EKF's attitude estimate is good. | */
   EKF_VELOCITY_HORIZ=2, /* Set if EKF's horizontal velocity estimate is good. | */
   EKF_VELOCITY_VERT=4, /* Set if EKF's vertical velocity estimate is good. | */
   EKF_POS_HORIZ_REL=8, /* Set if EKF's horizontal position (relative) estimate is good. | */
   EKF_POS_HORIZ_ABS=16, /* Set if EKF's horizontal position (absolute) estimate is good. | */
   EKF_POS_VERT_ABS=32, /* Set if EKF's vertical position (absolute) estimate is good. | */
   EKF_POS_VERT_AGL=64, /* Set if EKF's vertical position (above ground) estimate is good. | */
   EKF_CONST_POS_MODE=128, /* EKF is in constant position mode and does not know it's absolute or relative position. | */
   EKF_PRED_POS_HORIZ_REL=256, /* Set if EKF's predicted horizontal position (relative) estimate is good. | */
   EKF_PRED_POS_HORIZ_ABS=512, /* Set if EKF's predicted horizontal position (absolute) estimate is good. | */
   EKF_UNINITIALIZED=1024, /* Set if EKF has never been healthy. | */
   EKF_STATUS_FLAGS_ENUM_END=1025, /*  | */
} EKF_STATUS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PID_TUNING_AXIS
#define HAVE_ENUM_PID_TUNING_AXIS
typedef enum PID_TUNING_AXIS
{
   PID_TUNING_ROLL=1, /*  | */
   PID_TUNING_PITCH=2, /*  | */
   PID_TUNING_YAW=3, /*  | */
   PID_TUNING_ACCZ=4, /*  | */
   PID_TUNING_STEER=5, /*  | */
   PID_TUNING_LANDING=6, /*  | */
   PID_TUNING_AXIS_ENUM_END=7, /*  | */
} PID_TUNING_AXIS;
#endif

/** @brief Special ACK block numbers control activation of dataflash log streaming. */
#ifndef HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
#define HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
typedef enum MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
{
   MAV_REMOTE_LOG_DATA_BLOCK_STOP=2147483645, /* UAV to stop sending DataFlash blocks. | */
   MAV_REMOTE_LOG_DATA_BLOCK_START=2147483646, /* UAV to start sending DataFlash blocks. | */
   MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS_ENUM_END=2147483647, /*  | */
} MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS;
#endif

/** @brief Possible remote log data block statuses. */
#ifndef HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
#define HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
typedef enum MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
{
   MAV_REMOTE_LOG_DATA_BLOCK_NACK=0, /* This block has NOT been received. | */
   MAV_REMOTE_LOG_DATA_BLOCK_ACK=1, /* This block has been received. | */
   MAV_REMOTE_LOG_DATA_BLOCK_STATUSES_ENUM_END=2, /*  | */
} MAV_REMOTE_LOG_DATA_BLOCK_STATUSES;
#endif

/** @brief Bus types for device operations. */
#ifndef HAVE_ENUM_DEVICE_OP_BUSTYPE
#define HAVE_ENUM_DEVICE_OP_BUSTYPE
typedef enum DEVICE_OP_BUSTYPE
{
   DEVICE_OP_BUSTYPE_I2C=0, /* I2C Device operation. | */
   DEVICE_OP_BUSTYPE_SPI=1, /* SPI Device operation. | */
   DEVICE_OP_BUSTYPE_ENUM_END=2, /*  | */
} DEVICE_OP_BUSTYPE;
#endif

/** @brief Deepstall flight stage. */
#ifndef HAVE_ENUM_DEEPSTALL_STAGE
#define HAVE_ENUM_DEEPSTALL_STAGE
typedef enum DEEPSTALL_STAGE
{
   DEEPSTALL_STAGE_FLY_TO_LANDING=0, /* Flying to the landing point. | */
   DEEPSTALL_STAGE_ESTIMATE_WIND=1, /* Building an estimate of the wind. | */
   DEEPSTALL_STAGE_WAIT_FOR_BREAKOUT=2, /* Waiting to breakout of the loiter to fly the approach. | */
   DEEPSTALL_STAGE_FLY_TO_ARC=3, /* Flying to the first arc point to turn around to the landing point. | */
   DEEPSTALL_STAGE_ARC=4, /* Turning around back to the deepstall landing point. | */
   DEEPSTALL_STAGE_APPROACH=5, /* Approaching the landing point. | */
   DEEPSTALL_STAGE_LAND=6, /* Stalling and steering towards the land point. | */
   DEEPSTALL_STAGE_ENUM_END=7, /*  | */
} DEEPSTALL_STAGE;
#endif

/** @brief A mapping of plane flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_PLANE_MODE
#define HAVE_ENUM_PLANE_MODE
typedef enum PLANE_MODE
{
   PLANE_MODE_MANUAL=0, /*  | */
   PLANE_MODE_CIRCLE=1, /*  | */
   PLANE_MODE_STABILIZE=2, /*  | */
   PLANE_MODE_TRAINING=3, /*  | */
   PLANE_MODE_ACRO=4, /*  | */
   PLANE_MODE_FLY_BY_WIRE_A=5, /*  | */
   PLANE_MODE_FLY_BY_WIRE_B=6, /*  | */
   PLANE_MODE_CRUISE=7, /*  | */
   PLANE_MODE_AUTOTUNE=8, /*  | */
   PLANE_MODE_AUTO=10, /*  | */
   PLANE_MODE_RTL=11, /*  | */
   PLANE_MODE_LOITER=12, /*  | */
   PLANE_MODE_TAKEOFF=13, /*  | */
   PLANE_MODE_AVOID_ADSB=14, /*  | */
   PLANE_MODE_GUIDED=15, /*  | */
   PLANE_MODE_INITIALIZING=16, /*  | */
   PLANE_MODE_QSTABILIZE=17, /*  | */
   PLANE_MODE_QHOVER=18, /*  | */
   PLANE_MODE_QLOITER=19, /*  | */
   PLANE_MODE_QLAND=20, /*  | */
   PLANE_MODE_QRTL=21, /*  | */
   PLANE_MODE_QAUTOTUNE=22, /*  | */
   PLANE_MODE_QACRO=23, /*  | */
   PLANE_MODE_THERMAL=24, /*  | */
   PLANE_MODE_ENUM_END=25, /*  | */
} PLANE_MODE;
#endif

/** @brief A mapping of copter flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_COPTER_MODE
#define HAVE_ENUM_COPTER_MODE
typedef enum COPTER_MODE
{
   COPTER_MODE_STABILIZE=0, /*  | */
   COPTER_MODE_ACRO=1, /*  | */
   COPTER_MODE_ALT_HOLD=2, /*  | */
   COPTER_MODE_AUTO=3, /*  | */
   COPTER_MODE_GUIDED=4, /*  | */
   COPTER_MODE_LOITER=5, /*  | */
   COPTER_MODE_RTL=6, /*  | */
   COPTER_MODE_CIRCLE=7, /*  | */
   COPTER_MODE_LAND=9, /*  | */
   COPTER_MODE_DRIFT=11, /*  | */
   COPTER_MODE_SPORT=13, /*  | */
   COPTER_MODE_FLIP=14, /*  | */
   COPTER_MODE_AUTOTUNE=15, /*  | */
   COPTER_MODE_POSHOLD=16, /*  | */
   COPTER_MODE_BRAKE=17, /*  | */
   COPTER_MODE_THROW=18, /*  | */
   COPTER_MODE_AVOID_ADSB=19, /*  | */
   COPTER_MODE_GUIDED_NOGPS=20, /*  | */
   COPTER_MODE_SMART_RTL=21, /*  | */
   COPTER_MODE_FLOWHOLD=22, /*  | */
   COPTER_MODE_FOLLOW=23, /*  | */
   COPTER_MODE_ZIGZAG=24, /*  | */
   COPTER_MODE_SYSTEMID=25, /*  | */
   COPTER_MODE_AUTOROTATE=26, /*  | */
   COPTER_MODE_AUTO_RTL=27, /*  | */
   COPTER_MODE_ENUM_END=28, /*  | */
} COPTER_MODE;
#endif

/** @brief A mapping of sub flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_SUB_MODE
#define HAVE_ENUM_SUB_MODE
typedef enum SUB_MODE
{
   SUB_MODE_STABILIZE=0, /*  | */
   SUB_MODE_ACRO=1, /*  | */
   SUB_MODE_ALT_HOLD=2, /*  | */
   SUB_MODE_AUTO=3, /*  | */
   SUB_MODE_GUIDED=4, /*  | */
   SUB_MODE_CIRCLE=7, /*  | */
   SUB_MODE_SURFACE=9, /*  | */
   SUB_MODE_POSHOLD=16, /*  | */
   SUB_MODE_MANUAL=19, /*  | */
   SUB_MODE_ENUM_END=20, /*  | */
} SUB_MODE;
#endif

/** @brief A mapping of rover flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_ROVER_MODE
#define HAVE_ENUM_ROVER_MODE
typedef enum ROVER_MODE
{
   ROVER_MODE_MANUAL=0, /*  | */
   ROVER_MODE_ACRO=1, /*  | */
   ROVER_MODE_STEERING=3, /*  | */
   ROVER_MODE_HOLD=4, /*  | */
   ROVER_MODE_LOITER=5, /*  | */
   ROVER_MODE_FOLLOW=6, /*  | */
   ROVER_MODE_SIMPLE=7, /*  | */
   ROVER_MODE_AUTO=10, /*  | */
   ROVER_MODE_RTL=11, /*  | */
   ROVER_MODE_SMART_RTL=12, /*  | */
   ROVER_MODE_GUIDED=15, /*  | */
   ROVER_MODE_INITIALIZING=16, /*  | */
   ROVER_MODE_ENUM_END=17, /*  | */
} ROVER_MODE;
#endif

/** @brief A mapping of antenna tracker flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_TRACKER_MODE
#define HAVE_ENUM_TRACKER_MODE
typedef enum TRACKER_MODE
{
   TRACKER_MODE_MANUAL=0, /*  | */
   TRACKER_MODE_STOP=1, /*  | */
   TRACKER_MODE_SCAN=2, /*  | */
   TRACKER_MODE_SERVO_TEST=3, /*  | */
   TRACKER_MODE_AUTO=10, /*  | */
   TRACKER_MODE_INITIALIZING=16, /*  | */
   TRACKER_MODE_ENUM_END=17, /*  | */
} TRACKER_MODE;
#endif

/** @brief The type of parameter for the OSD parameter editor. */
#ifndef HAVE_ENUM_OSD_PARAM_CONFIG_TYPE
#define HAVE_ENUM_OSD_PARAM_CONFIG_TYPE
typedef enum OSD_PARAM_CONFIG_TYPE
{
   OSD_PARAM_NONE=0, /*  | */
   OSD_PARAM_SERIAL_PROTOCOL=1, /*  | */
   OSD_PARAM_SERVO_FUNCTION=2, /*  | */
   OSD_PARAM_AUX_FUNCTION=3, /*  | */
   OSD_PARAM_FLIGHT_MODE=4, /*  | */
   OSD_PARAM_FAILSAFE_ACTION=5, /*  | */
   OSD_PARAM_FAILSAFE_ACTION_1=6, /*  | */
   OSD_PARAM_FAILSAFE_ACTION_2=7, /*  | */
   OSD_PARAM_NUM_TYPES=8, /*  | */
   OSD_PARAM_CONFIG_TYPE_ENUM_END=9, /*  | */
} OSD_PARAM_CONFIG_TYPE;
#endif

/** @brief The error type for the OSD parameter editor. */
#ifndef HAVE_ENUM_OSD_PARAM_CONFIG_ERROR
#define HAVE_ENUM_OSD_PARAM_CONFIG_ERROR
typedef enum OSD_PARAM_CONFIG_ERROR
{
   OSD_PARAM_SUCCESS=0, /*  | */
   OSD_PARAM_INVALID_SCREEN=1, /*  | */
   OSD_PARAM_INVALID_PARAMETER_INDEX=2, /*  | */
   OSD_PARAM_INVALID_PARAMETER=3, /*  | */
   OSD_PARAM_CONFIG_ERROR_ENUM_END=4, /*  | */
} OSD_PARAM_CONFIG_ERROR;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_sensor_offsets.h"
#include "./mavlink_msg_set_mag_offsets.h"
#include "./mavlink_msg_meminfo.h"
#include "./mavlink_msg_ap_adc.h"
#include "./mavlink_msg_digicam_configure.h"
#include "./mavlink_msg_digicam_control.h"
#include "./mavlink_msg_mount_configure.h"
#include "./mavlink_msg_mount_control.h"
#include "./mavlink_msg_mount_status.h"
#include "./mavlink_msg_fence_point.h"
#include "./mavlink_msg_fence_fetch_point.h"
#include "./mavlink_msg_ahrs.h"
#include "./mavlink_msg_simstate.h"
#include "./mavlink_msg_hwstatus.h"
#include "./mavlink_msg_radio.h"
#include "./mavlink_msg_limits_status.h"
#include "./mavlink_msg_wind.h"
#include "./mavlink_msg_data16.h"
#include "./mavlink_msg_data32.h"
#include "./mavlink_msg_data64.h"
#include "./mavlink_msg_data96.h"
#include "./mavlink_msg_rangefinder.h"
#include "./mavlink_msg_airspeed_autocal.h"
#include "./mavlink_msg_rally_point.h"
#include "./mavlink_msg_rally_fetch_point.h"
#include "./mavlink_msg_compassmot_status.h"
#include "./mavlink_msg_ahrs2.h"
#include "./mavlink_msg_camera_status.h"
#include "./mavlink_msg_camera_feedback.h"
#include "./mavlink_msg_battery2.h"
#include "./mavlink_msg_ahrs3.h"
#include "./mavlink_msg_autopilot_version_request.h"
#include "./mavlink_msg_remote_log_data_block.h"
#include "./mavlink_msg_remote_log_block_status.h"
#include "./mavlink_msg_led_control.h"
#include "./mavlink_msg_mag_cal_progress.h"
#include "./mavlink_msg_ekf_status_report.h"
#include "./mavlink_msg_pid_tuning.h"
#include "./mavlink_msg_deepstall.h"
#include "./mavlink_msg_gimbal_report.h"
#include "./mavlink_msg_gimbal_control.h"
#include "./mavlink_msg_gimbal_torque_cmd_report.h"
#include "./mavlink_msg_gopro_heartbeat.h"
#include "./mavlink_msg_gopro_get_request.h"
#include "./mavlink_msg_gopro_get_response.h"
#include "./mavlink_msg_gopro_set_request.h"
#include "./mavlink_msg_gopro_set_response.h"
#include "./mavlink_msg_rpm.h"

// base include
#include "../common/common.h"
#include "../uAvionix/uAvionix.h"
#include "../icarous/icarous.h"

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 1

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, MAVLINK_MESSAGE_INFO_LINK_NODE_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SET_MODE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_COMMAND_CANCEL, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, MAVLINK_MESSAGE_INFO_HIL_ACTUATOR_CONTROLS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, MAVLINK_MESSAGE_INFO_FOLLOW_TARGET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, MAVLINK_MESSAGE_INFO_SENSOR_OFFSETS, MAVLINK_MESSAGE_INFO_SET_MAG_OFFSETS, MAVLINK_MESSAGE_INFO_MEMINFO, MAVLINK_MESSAGE_INFO_AP_ADC, MAVLINK_MESSAGE_INFO_DIGICAM_CONFIGURE, MAVLINK_MESSAGE_INFO_DIGICAM_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_CONFIGURE, MAVLINK_MESSAGE_INFO_MOUNT_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_FENCE_POINT, MAVLINK_MESSAGE_INFO_FENCE_FETCH_POINT, MAVLINK_MESSAGE_INFO_FENCE_STATUS, MAVLINK_MESSAGE_INFO_AHRS, MAVLINK_MESSAGE_INFO_SIMSTATE, MAVLINK_MESSAGE_INFO_HWSTATUS, MAVLINK_MESSAGE_INFO_RADIO, MAVLINK_MESSAGE_INFO_LIMITS_STATUS, MAVLINK_MESSAGE_INFO_WIND, MAVLINK_MESSAGE_INFO_DATA16, MAVLINK_MESSAGE_INFO_DATA32, MAVLINK_MESSAGE_INFO_DATA64, MAVLINK_MESSAGE_INFO_DATA96, MAVLINK_MESSAGE_INFO_RANGEFINDER, MAVLINK_MESSAGE_INFO_AIRSPEED_AUTOCAL, MAVLINK_MESSAGE_INFO_RALLY_POINT, MAVLINK_MESSAGE_INFO_RALLY_FETCH_POINT, MAVLINK_MESSAGE_INFO_COMPASSMOT_STATUS, MAVLINK_MESSAGE_INFO_AHRS2, MAVLINK_MESSAGE_INFO_CAMERA_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_FEEDBACK, MAVLINK_MESSAGE_INFO_BATTERY2, MAVLINK_MESSAGE_INFO_AHRS3, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION_REQUEST, MAVLINK_MESSAGE_INFO_REMOTE_LOG_DATA_BLOCK, MAVLINK_MESSAGE_INFO_REMOTE_LOG_BLOCK_STATUS, MAVLINK_MESSAGE_INFO_LED_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MAG_CAL_PROGRESS, MAVLINK_MESSAGE_INFO_MAG_CAL_REPORT, MAVLINK_MESSAGE_INFO_EKF_STATUS_REPORT, MAVLINK_MESSAGE_INFO_PID_TUNING, MAVLINK_MESSAGE_INFO_DEEPSTALL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_REPORT, MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_TORQUE_CMD_REPORT, MAVLINK_MESSAGE_INFO_GOPRO_HEARTBEAT, MAVLINK_MESSAGE_INFO_GOPRO_GET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_GET_RESPONSE, MAVLINK_MESSAGE_INFO_GOPRO_SET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_SET_RESPONSE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_EFI_STATUS, MAVLINK_MESSAGE_INFO_RPM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS, MAVLINK_MESSAGE_INFO_WIND_COV, MAVLINK_MESSAGE_INFO_GPS_INPUT, MAVLINK_MESSAGE_INFO_GPS_RTCM_DATA, MAVLINK_MESSAGE_INFO_HIGH_LATENCY, MAVLINK_MESSAGE_INFO_HIGH_LATENCY2, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, MAVLINK_MESSAGE_INFO_ADSB_VEHICLE, MAVLINK_MESSAGE_INFO_COLLISION, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
# define MAVLINK_MESSAGE_NAMES {{ "ACTUATOR_CONTROL_TARGET", 140 }, { "ADSB_VEHICLE", 246 }, { "AHRS", 163 }, { "AHRS2", 178 }, { "AHRS3", 182 }, { "AIRSPEED_AUTOCAL", 174 }, { "ALTITUDE", 141 }, { "AP_ADC", 153 }, { "ATTITUDE", 30 }, { "ATTITUDE_QUATERNION", 31 }, { "ATTITUDE_QUATERNION_COV", 61 }, { "ATTITUDE_TARGET", 83 }, { "ATT_POS_MOCAP", 138 }, { "AUTH_KEY", 7 }, { "AUTOPILOT_VERSION", 148 }, { "AUTOPILOT_VERSION_REQUEST", 183 }, { "BATTERY2", 181 }, { "BATTERY_STATUS", 147 }, { "CAMERA_FEEDBACK", 180 }, { "CAMERA_STATUS", 179 }, { "CAMERA_TRIGGER", 112 }, { "CHANGE_OPERATOR_CONTROL", 5 }, { "CHANGE_OPERATOR_CONTROL_ACK", 6 }, { "COLLISION", 247 }, { "COMMAND_ACK", 77 }, { "COMMAND_CANCEL", 80 }, { "COMMAND_INT", 75 }, { "COMMAND_LONG", 76 }, { "COMPASSMOT_STATUS", 177 }, { "CONTROL_SYSTEM_STATE", 146 }, { "DATA16", 169 }, { "DATA32", 170 }, { "DATA64", 171 }, { "DATA96", 172 }, { "DATA_STREAM", 67 }, { "DATA_TRANSMISSION_HANDSHAKE", 130 }, { "DEBUG", 254 }, { "DEBUG_VECT", 250 }, { "DEEPSTALL", 195 }, { "DIGICAM_CONFIGURE", 154 }, { "DIGICAM_CONTROL", 155 }, { "DISTANCE_SENSOR", 132 }, { "EFI_STATUS", 225 }, { "EKF_STATUS_REPORT", 193 }, { "ENCAPSULATED_DATA", 131 }, { "ESTIMATOR_STATUS", 230 }, { "EXTENDED_SYS_STATE", 245 }, { "FENCE_FETCH_POINT", 161 }, { "FENCE_POINT", 160 }, { "FENCE_STATUS", 162 }, { "FILE_TRANSFER_PROTOCOL", 110 }, { "FOLLOW_TARGET", 144 }, { "GIMBAL_CONTROL", 201 }, { "GIMBAL_REPORT", 200 }, { "GIMBAL_TORQUE_CMD_REPORT", 214 }, { "GLOBAL_POSITION_INT", 33 }, { "GLOBAL_POSITION_INT_COV", 63 }, { "GLOBAL_VISION_POSITION_ESTIMATE", 101 }, { "GOPRO_GET_REQUEST", 216 }, { "GOPRO_GET_RESPONSE", 217 }, { "GOPRO_HEARTBEAT", 215 }, { "GOPRO_SET_REQUEST", 218 }, { "GOPRO_SET_RESPONSE", 219 }, { "GPS2_RAW", 124 }, { "GPS2_RTK", 128 }, { "GPS_GLOBAL_ORIGIN", 49 }, { "GPS_INJECT_DATA", 123 }, { "GPS_INPUT", 232 }, { "GPS_RAW_INT", 24 }, { "GPS_RTCM_DATA", 233 }, { "GPS_RTK", 127 }, { "GPS_STATUS", 25 }, { "HEARTBEAT", 0 }, { "HIGHRES_IMU", 105 }, { "HIGH_LATENCY", 234 }, { "HIGH_LATENCY2", 235 }, { "HIL_ACTUATOR_CONTROLS", 93 }, { "HIL_CONTROLS", 91 }, { "HIL_GPS", 113 }, { "HIL_OPTICAL_FLOW", 114 }, { "HIL_RC_INPUTS_RAW", 92 }, { "HIL_SENSOR", 107 }, { "HIL_STATE", 90 }, { "HIL_STATE_QUATERNION", 115 }, { "HOME_POSITION", 242 }, { "HWSTATUS", 165 }, { "LANDING_TARGET", 149 }, { "LED_CONTROL", 186 }, { "LIMITS_STATUS", 167 }, { "LINK_NODE_STATUS", 8 }, { "LOCAL_POSITION_NED", 32 }, { "LOCAL_POSITION_NED_COV", 64 }, { "LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET", 89 }, { "LOG_DATA", 120 }, { "LOG_ENTRY", 118 }, { "LOG_ERASE", 121 }, { "LOG_REQUEST_DATA", 119 }, { "LOG_REQUEST_END", 122 }, { "LOG_REQUEST_LIST", 117 }, { "MAG_CAL_PROGRESS", 191 }, { "MAG_CAL_REPORT", 192 }, { "MANUAL_CONTROL", 69 }, { "MANUAL_SETPOINT", 81 }, { "MEMINFO", 152 }, { "MEMORY_VECT", 249 }, { "MESSAGE_INTERVAL", 244 }, { "MISSION_ACK", 47 }, { "MISSION_CLEAR_ALL", 45 }, { "MISSION_COUNT", 44 }, { "MISSION_CURRENT", 42 }, { "MISSION_ITEM", 39 }, { "MISSION_ITEM_INT", 73 }, { "MISSION_ITEM_REACHED", 46 }, { "MISSION_REQUEST", 40 }, { "MISSION_REQUEST_INT", 51 }, { "MISSION_REQUEST_LIST", 43 }, { "MISSION_REQUEST_PARTIAL_LIST", 37 }, { "MISSION_SET_CURRENT", 41 }, { "MISSION_WRITE_PARTIAL_LIST", 38 }, { "MOUNT_CONFIGURE", 156 }, { "MOUNT_CONTROL", 157 }, { "MOUNT_STATUS", 158 }, { "NAMED_VALUE_FLOAT", 251 }, { "NAMED_VALUE_INT", 252 }, { "NAV_CONTROLLER_OUTPUT", 62 }, { "OPTICAL_FLOW", 100 }, { "OPTICAL_FLOW_RAD", 106 }, { "PARAM_MAP_RC", 50 }, { "PARAM_REQUEST_LIST", 21 }, { "PARAM_REQUEST_READ", 20 }, { "PARAM_SET", 23 }, { "PARAM_VALUE", 22 }, { "PID_TUNING", 194 }, { "PING", 4 }, { "POSITION_TARGET_GLOBAL_INT", 87 }, { "POSITION_TARGET_LOCAL_NED", 85 }, { "POWER_STATUS", 125 }, { "RADIO", 166 }, { "RADIO_STATUS", 109 }, { "RALLY_FETCH_POINT", 176 }, { "RALLY_POINT", 175 }, { "RANGEFINDER", 173 }, { "RAW_IMU", 27 }, { "RAW_PRESSURE", 28 }, { "RC_CHANNELS", 65 }, { "RC_CHANNELS_OVERRIDE", 70 }, { "RC_CHANNELS_RAW", 35 }, { "RC_CHANNELS_SCALED", 34 }, { "REMOTE_LOG_BLOCK_STATUS", 185 }, { "REMOTE_LOG_DATA_BLOCK", 184 }, { "REQUEST_DATA_STREAM", 66 }, { "RESOURCE_REQUEST", 142 }, { "RPM", 226 }, { "SAFETY_ALLOWED_AREA", 55 }, { "SAFETY_SET_ALLOWED_AREA", 54 }, { "SCALED_IMU", 26 }, { "SCALED_IMU2", 116 }, { "SCALED_IMU3", 129 }, { "SCALED_PRESSURE", 29 }, { "SCALED_PRESSURE2", 137 }, { "SCALED_PRESSURE3", 143 }, { "SENSOR_OFFSETS", 150 }, { "SERIAL_CONTROL", 126 }, { "SERVO_OUTPUT_RAW", 36 }, { "SET_ACTUATOR_CONTROL_TARGET", 139 }, { "SET_ATTITUDE_TARGET", 82 }, { "SET_GPS_GLOBAL_ORIGIN", 48 }, { "SET_HOME_POSITION", 243 }, { "SET_MAG_OFFSETS", 151 }, { "SET_MODE", 11 }, { "SET_POSITION_TARGET_GLOBAL_INT", 86 }, { "SET_POSITION_TARGET_LOCAL_NED", 84 }, { "SIMSTATE", 164 }, { "SIM_STATE", 108 }, { "STATUSTEXT", 253 }, { "SYSTEM_TIME", 2 }, { "SYS_STATUS", 1 }, { "TERRAIN_CHECK", 135 }, { "TERRAIN_DATA", 134 }, { "TERRAIN_REPORT", 136 }, { "TERRAIN_REQUEST", 133 }, { "TIMESYNC", 111 }, { "V2_EXTENSION", 248 }, { "VFR_HUD", 74 }, { "VIBRATION", 241 }, { "VICON_POSITION_ESTIMATE", 104 }, { "VISION_POSITION_ESTIMATE", 102 }, { "VISION_SPEED_ESTIMATE", 103 }, { "WIND", 168 }, { "WIND_COV", 231 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ARDUPILOTMEGA_H
, etc.)| 0: No Action 1: Request storage information| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_STORAGE_FORMAT=526, /* Format a storage medium. Once format is complete, a STORAGE_INFORMATION message is sent. Use the command's target_component to target a specific component's storage. |Storage ID (1 for first, 2 for second, etc.)| Format storage (and reset image log). 0: No action 1: Format storage| Reset Image Log (without formatting storage medium). This will reset CAMERA_CAPTURE_STATUS.image_count and CAMERA_IMAGE_CAPTURED.image_index. 0: No action 1: Reset Image Log| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_CAMERA_CAPTURE_STATUS=527, /* Request camera capture status (CAMERA_CAPTURE_STATUS) |0: No Action 1: Request camera capture status| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_FLIGHT_INFORMATION=528, /* Request flight information (FLIGHT_INFORMATION) |1: Request flight information| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_RESET_CAMERA_SETTINGS=529, /* Reset all camera settings to Factory Default |0: No Action 1: Reset all settings| Reserved (all remaining params)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_SET_CAMERA_MODE=530, /* Set camera running mode. Use NaN for reserved values. GCS will send a MAV_CMD_REQUEST_VIDEO_STREAM_STATUS command after a mode change if the camera supports video streaming. |Reserved (Set to 0)| Camera mode| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_SET_CAMERA_ZOOM=531, /* Set camera zoom. Camera must respond with a CAMERA_SETTINGS message (on success). |Zoom type| Zoom value. The range of valid values depend on the zoom type.| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_SET_CAMERA_FOCUS=532, /* Set camera focus. Camera must respond with a CAMERA_SETTINGS message (on success). |Focus type| Focus value| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_SET_STORAGE_USAGE=533, /* Set that a particular storage is the preferred location for saving photos, videos, and/or other media (e.g. to set that an SD card is used for storing videos).
          There can only be one preferred save location for each particular media type: setting a media usage flag will clear/reset that same flag if set on any other storage.
          If no flag is set the system should use its default storage.
          A target system can choose to always use default storage, in which case it should ACK the command with MAV_RESULT_UNSUPPORTED.
          A target system can choose to not allow a particular storage to be set as preferred storage, in which case it should ACK the command with MAV_RESULT_DENIED. |Storage ID (1 for first, 2 for second, etc.)| Usage flags| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_JUMP_TAG=600, /* Tagged jump target. Can be jumped to with MAV_CMD_DO_JUMP_TAG. |Tag.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_JUMP_TAG=601, /* Jump to the matching tag in the mission list. Repeat this action for the specified number of times. A mission should contain a single matching tag for each jump. If this is not the case then a jump to a missing tag should complete the mission, and a jump where there are multiple matching tags should always select the one with the lowest mission sequence number. |Target tag to jump to.| Repeat count.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_PARAM_TRANSACTION=900, /* Request to start or end a parameter transaction. Multiple kinds of transport layers can be used to exchange parameters in the transaction (param, param_ext and mavftp). The command response can either be a success/failure or an in progress in case the receiving side takes some time to apply the parameters. |Action to be performed (start, commit, cancel, etc.)| Possible transport layers to set and get parameters via mavlink during a parameter transaction.| Identifier for a specific transaction.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_GIMBAL_MANAGER_PITCHYAW=1000, /* High level setpoint to be sent to a gimbal manager to set a gimbal attitude. It is possible to set combinations of the values below. E.g. an angle as well as a desired angular rate can be used to get to this angle at a certain angular rate, or an angular rate only will result in continuous turning. NaN is to be used to signal unset. Note: a gimbal is never to react to this command but only the gimbal manager. |Pitch angle (positive to pitch up, relative to vehicle for FOLLOW mode, relative to world horizon for LOCK mode).| Yaw angle (positive to yaw to the right, relative to vehicle for FOLLOW mode, absolute to North for LOCK mode).| Pitch rate (positive to pitch up).| Yaw rate (positive to yaw to the right).| Gimbal manager flags to use.| Reserved (default:0)| Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).|  */
   MAV_CMD_DO_GIMBAL_MANAGER_CONFIGURE=1001, /* Gimbal configuration to set which sysid/compid is in primary and secondary control. |Sysid for primary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Compid for primary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Sysid for secondary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Compid for secondary control (0: no one in control, -1: leave unchanged, -2: set itself in control (for missions where the own sysid is still unknown), -3: remove control if currently in control).| Reserved (default:0)| Reserved (default:0)| Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. Send command multiple times for more than one gimbal (but not all gimbals).|  */
   MAV_CMD_IMAGE_START_CAPTURE=2000, /* Start image capture sequence. Sends CAMERA_IMAGE_CAPTURED after each capture. Use NaN for reserved values. |Reserved (Set to 0)| Desired elapsed time between two consecutive pictures (in seconds). Minimum values depend on hardware (typically greater than 2 seconds).| Total number of images to capture. 0 to capture forever/until MAV_CMD_IMAGE_STOP_CAPTURE.| Capture sequence number starting from 1. This is only valid for single-capture (param3 == 1), otherwise set to 0. Increment the capture ID for each capture command to prevent double captures when a command is re-transmitted.| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)|  */
   MAV_CMD_IMAGE_STOP_CAPTURE=2001, /* Stop image capture sequence Use NaN for reserved values. |Reserved (Set to 0)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_REQUEST_CAMERA_IMAGE_CAPTURE=2002, /* Re-request a CAMERA_IMAGE_CAPTURED message. |Sequence number for missing CAMERA_IMAGE_CAPTURED message| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:0)| Reserved (default:0)| Reserved (default:NaN)|  */
   MAV_CMD_DO_TRIGGER_CONTROL=2003, /* Enable or disable on-board camera triggering system. |Trigger enable/disable (0 for disable, 1 for start), -1 to ignore| 1 to reset the trigger sequence, -1 or 0 to ignore| 1 to pause triggering, but without switching the camera off or retracting it. -1 to ignore| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_CAMERA_TRACK_POINT=2004, /* If the camera supports point visual tracking (CAMERA_CAP_FLAGS_HAS_TRACKING_POINT is set), this command allows to initiate the tracking. |Point to track x value (normalized 0..1, 0 is left, 1 is right).| Point to track y value (normalized 0..1, 0 is top, 1 is bottom).| Point radius (normalized 0..1, 0 is image left, 1 is image right).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_CAMERA_TRACK_RECTANGLE=2005, /* If the camera supports rectangle visual tracking (CAMERA_CAP_FLAGS_HAS_TRACKING_RECTANGLE is set), this command allows to initiate the tracking. |Top left corner of rectangle x value (normalized 0..1, 0 is left, 1 is right).| Top left corner of rectangle y value (normalized 0..1, 0 is top, 1 is bottom).| Bottom right corner of rectangle x value (normalized 0..1, 0 is left, 1 is right).| Bottom right corner of rectangle y value (normalized 0..1, 0 is top, 1 is bottom).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_CAMERA_STOP_TRACKING=2010, /* Stops ongoing tracking. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_VIDEO_START_CAPTURE=2500, /* Starts video capture (recording). |Video Stream ID (0 for all streams)| Frequency CAMERA_CAPTURE_STATUS messages should be sent while recording (0 for no messages, otherwise frequency)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)|  */
   MAV_CMD_VIDEO_STOP_CAPTURE=2501, /* Stop the current video capture (recording). |Video Stream ID (0 for all streams)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)|  */
   MAV_CMD_VIDEO_START_STREAMING=2502, /* Start video streaming |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_VIDEO_STOP_STREAMING=2503, /* Stop the given video stream |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_VIDEO_STREAM_INFORMATION=2504, /* Request video stream information (VIDEO_STREAM_INFORMATION) |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_REQUEST_VIDEO_STREAM_STATUS=2505, /* Request video stream status (VIDEO_STREAM_STATUS) |Video Stream ID (0 for all streams, 1 for first, 2 for second, etc.)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_LOGGING_START=2510, /* Request to start streaming logging data over MAVLink (see also LOGGING_DATA message) |Format: 0: ULog| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_LOGGING_STOP=2511, /* Request to stop streaming log data over MAVLink |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_AIRFRAME_CONFIGURATION=2520, /*  |Landing gear ID (default: 0, -1 for all)| Landing gear position (Down: 0, Up: 1, NaN for no change)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)| Reserved (default:NaN)|  */
   MAV_CMD_CONTROL_HIGH_LATENCY=2600, /* Request to start/stop transmitting over the high latency telemetry |Control transmission over high latency telemetry (0: stop, 1: start)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_PANORAMA_CREATE=2800, /* Create a panorama at the current position |Viewing angle horizontal of the panorama (+- 0.5 the total angle)| Viewing angle vertical of panorama.| Speed of the horizontal rotation.| Speed of the vertical rotation.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_VTOL_TRANSITION=3000, /* Request VTOL transition |The target VTOL state. For normal transitions, only MAV_VTOL_STATE_MC and MAV_VTOL_STATE_FW can be used.| Force immediate transition to the specified MAV_VTOL_STATE. 1: Force immediate, 0: normal transition. Can be used, for example, to trigger an emergency "Quadchute". Caution: Can be dangerous/damage vehicle, depending on autopilot implementation of this command.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_ARM_AUTHORIZATION_REQUEST=3001, /* Request authorization to arm the vehicle to a external entity, the arm authorizer is responsible to request all data that is needs from the vehicle before authorize or deny the request. If approved the progress of command_ack message should be set with period of time that this authorization is valid in seconds or in case it was denied it should be set with one of the reasons in ARM_AUTH_DENIED_REASON.
         |Vehicle system id, this way ground station can request arm authorization on behalf of any vehicle| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_SET_GUIDED_SUBMODE_STANDARD=4000, /* This command sets the submode to standard guided when vehicle is in guided mode. The vehicle holds position and altitude and the user can input the desired velocities along all three axes.
                   |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_SET_GUIDED_SUBMODE_CIRCLE=4001, /* This command sets submode circle when vehicle is in guided mode. Vehicle flies along a circle facing the center of the circle. The user can input the velocity along the circle and change the radius. If no input is given the vehicle will hold position.
                   |Radius of desired circle in CIRCLE_MODE| User defined| User defined| User defined| Target latitude of center of circle in CIRCLE_MODE| Target longitude of center of circle in CIRCLE_MODE| Reserved (default:0)|  */
   MAV_CMD_CONDITION_GATE=4501, /* Delay mission state machine until gate has been reached. |Geometry: 0: orthogonal to path between previous and next waypoint.| Altitude: 0: ignore altitude| Empty| Empty| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_FENCE_RETURN_POINT=5000, /* Fence return point (there can only be one such point in a geofence definition). If rally points are supported they should be used instead. |Reserved| Reserved| Reserved| Reserved| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_FENCE_POLYGON_VERTEX_INCLUSION=5001, /* Fence vertex for an inclusion polygon (the polygon must not be self-intersecting). The vehicle must stay within this area. Minimum of 3 vertices required.
         |Polygon vertex count| Vehicle must be inside ALL inclusion zones in a single group, vehicle must be inside at least one group, must be the same for all points in each polygon| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_POLYGON_VERTEX_EXCLUSION=5002, /* Fence vertex for an exclusion polygon (the polygon must not be self-intersecting). The vehicle must stay outside this area. Minimum of 3 vertices required.
         |Polygon vertex count| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_CIRCLE_INCLUSION=5003, /* Circular fence area. The vehicle must stay inside this area.
         |Radius.| Vehicle must be inside ALL inclusion zones in a single group, vehicle must be inside at least one group| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_CIRCLE_EXCLUSION=5004, /* Circular fence area. The vehicle must stay outside this area.
         |Radius.| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_SET_FENCE_BREACH_ACTION=5010, /* Sets the action on geofence breach.
          If sent using the command protocol this sets the system-default geofence action.
          As part of a mission protocol plan it sets the fence action for the next complete geofence definition *after* the command.
          Note: A fence action defined in a plan will override the default system setting (even if the system-default is `FENCE_ACTION_NONE`).
          Note: Every geofence in a plan can have its own action; if no fence action is defined for a particular fence the system-default will be used.
          Note: The flight stack should reject a plan or command that uses a geofence action that it does not support and send a STATUSTEXT with the reason.
         |Fence action on breach.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_NAV_RALLY_POINT=5100, /* Rally point. You can have multiple rally points defined.
         |Reserved| Reserved| Reserved| Reserved| Latitude| Longitude| Altitude|  */
   MAV_CMD_UAVCAN_GET_NODE_INFO=5200, /* Commands the vehicle to respond with a sequence of messages UAVCAN_NODE_INFO, one message per every UAVCAN node that is online. Note that some of the response messages can be lost, which the receiver can detect easily by checking whether every received UAVCAN_NODE_STATUS has a matching message UAVCAN_NODE_INFO received earlier; if not, this command should be sent again in order to request re-transmission of the node information messages. |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_DO_ADSB_OUT_IDENT=10001, /* Trigger the start of an ADSB-out IDENT. This should only be used when requested to do so by an Air Traffic Controller in controlled airspace. This starts the IDENT which is then typically held for 18 seconds by the hardware per the Mode A, C, and S transponder spec. |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_PAYLOAD_PREPARE_DEPLOY=30001, /* Deploy payload on a Lat / Lon / Alt position. This includes the navigation to reach the required release position and velocity. |Operation mode. 0: prepare single payload deploy (overwriting previous requests), but do not execute it. 1: execute payload deploy immediately (rejecting further deploy commands during execution, but allowing abort). 2: add payload deploy to existing deployment list.| Desired approach vector in compass heading. A negative value indicates the system can define the approach vector at will.| Desired ground speed at release time. This can be overridden by the airframe in case it needs to meet minimum airspeed. A negative value indicates the system can define the ground speed at will.| Minimum altitude clearance to the release position. A negative value indicates the system can define the clearance at will.| Latitude. Note, if used in MISSION_ITEM (deprecated) the units are degrees (unscaled)| Longitude. Note, if used in MISSION_ITEM (deprecated) the units are degrees (unscaled)| Altitude (MSL)|  */
   MAV_CMD_PAYLOAD_CONTROL_DEPLOY=30002, /* Control the payload deployment. |Operation mode. 0: Abort deployment, continue normal mission. 1: switch to payload deployment mode. 100: delete first payload deployment request. 101: delete all payload deployment requests.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_WAYPOINT_USER_1=31000, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_WAYPOINT_USER_2=31001, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_WAYPOINT_USER_3=31002, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_WAYPOINT_USER_4=31003, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_WAYPOINT_USER_5=31004, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_1=31005, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_2=31006, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_3=31007, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_4=31008, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_SPATIAL_USER_5=31009, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (MSL)|  */
   MAV_CMD_USER_1=31010, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_2=31011, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_3=31012, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_4=31013, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_5=31014, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_RESET_MPPT=40001, /* Mission command to reset Maximum Power Point Tracker (MPPT) |MPPT number| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_PAYLOAD_CONTROL=40002, /* Mission command to perform a power cycle on payload |Complete power cycle| VISensor power cycle| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_POWER_OFF_INITIATED=42000, /* A system wide power-off event has been initiated. |Empty.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_SOLO_BTN_FLY_CLICK=42001, /* FLY button has been clicked. |Empty.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_SOLO_BTN_FLY_HOLD=42002, /* FLY button has been held for 1.5 seconds. |Takeoff altitude.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_SOLO_BTN_PAUSE_CLICK=42003, /* PAUSE button has been clicked. |1 if Solo is in a shot mode, 0 otherwise.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_FIXED_MAG_CAL=42004, /* Magnetometer calibration based on fixed position
        in earth field given by inclination, declination and intensity. |Magnetic declination.| Magnetic inclination.| Magnetic intensity.| Yaw.| Empty.| Empty.| Empty.|  */
   MAV_CMD_FIXED_MAG_CAL_FIELD=42005, /* Magnetometer calibration based on fixed expected field values. |Field strength X.| Field strength Y.| Field strength Z.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_FIXED_MAG_CAL_YAW=42006, /* Magnetometer calibration based on provided known yaw. This allows for fast calibration using WMM field tables in the vehicle, given only the known yaw of the vehicle. If Latitude and longitude are both zero then use the current vehicle location. |Yaw of vehicle in earth frame.| CompassMask, 0 for all.| Latitude.| Longitude.| Empty.| Empty.| Empty.|  */
   MAV_CMD_SET_EKF_SOURCE_SET=42007, /* Set EKF sensor source set. |Source Set Id.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_DO_START_MAG_CAL=42424, /* Initiate a magnetometer calibration. |Bitmask of magnetometers to calibrate. Use 0 to calibrate all sensors that can be started (sensors may not start if disabled, unhealthy, etc.). The command will NACK if calibration does not start for a sensor explicitly specified by the bitmask.| Automatically retry on failure (0=no retry, 1=retry).| Save without user input (0=require input, 1=autosave).| Delay.| Autoreboot (0=user reboot, 1=autoreboot).| Empty.| Empty.|  */
   MAV_CMD_DO_ACCEPT_MAG_CAL=42425, /* Accept a magnetometer calibration. |Bitmask of magnetometers that calibration is accepted (0 means all).| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_DO_CANCEL_MAG_CAL=42426, /* Cancel a running magnetometer calibration. |Bitmask of magnetometers to cancel a running calibration (0 means all).| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_SET_FACTORY_TEST_MODE=42427, /* Command autopilot to get into factory test/diagnostic mode. |0: activate test mode, 1: exit test mode.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_DO_SEND_BANNER=42428, /* Reply with the version banner. |Empty.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_ACCELCAL_VEHICLE_POS=42429, /* Used when doing accelerometer calibration. When sent to the GCS tells it what position to put the vehicle in. When sent to the vehicle says what position the vehicle is in. |Position.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_GIMBAL_RESET=42501, /* Causes the gimbal to reset and boot as if it was just powered on. |Empty.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_GIMBAL_AXIS_CALIBRATION_STATUS=42502, /* Reports progress and success or failure of gimbal axis calibration procedure. |Gimbal axis we're reporting calibration progress for.| Current calibration progress for this axis.| Status of the calibration.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_GIMBAL_REQUEST_AXIS_CALIBRATION=42503, /* Starts commutation calibration on the gimbal. |Empty.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_GIMBAL_FULL_RESET=42505, /* Erases gimbal application and parameters. |Magic number.| Magic number.| Magic number.| Magic number.| Magic number.| Magic number.| Magic number.|  */
   MAV_CMD_DO_WINCH=42600, /* Command to operate winch. |Winch instance number.| Action to perform.| Length of line to release (negative to wind).| Release rate (negative to wind).| Empty.| Empty.| Empty.|  */
   MAV_CMD_FLASH_BOOTLOADER=42650, /* Update the bootloader |Empty| Empty| Empty| Empty| Magic number - set to 290876 to actually flash| Empty| Empty|  */
   MAV_CMD_BATTERY_RESET=42651, /* Reset battery capacity for batteries that accumulate consumed battery via integration. |Bitmask of batteries to reset. Least significant bit is for the first battery.| Battery percentage remaining to set.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DEBUG_TRAP=42700, /* Issue a trap signal to the autopilot process, presumably to enter the debugger. |Magic number - set to 32451 to actually trap.| Empty.| Empty.| Empty.| Empty.| Empty.| Empty.|  */
   MAV_CMD_SCRIPTING=42701, /* Control onboard scripting. |Scripting command to execute| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_NAV_SCRIPT_TIME=42702, /* Scripting command as NAV command with wait for completion. |integer command number (0 to 255)| timeout for operation in seconds. Zero means no timeout (0 to 255)| argument1.| argument2.| Empty| Empty| Empty|  */
   MAV_CMD_GUIDED_CHANGE_SPEED=43000, /* Change flight speed at a given rate. This slews the vehicle at a controllable rate between it's previous speed and the new one. (affects GUIDED only. Outside GUIDED, aircraft ignores these commands. Designed for onboard companion-computer command-and-control, not normally operator/GCS control.) |Airspeed or groundspeed.| Target Speed| Acceleration rate, 0 to take effect instantly| Empty| Empty| Empty| Empty|  */
   MAV_CMD_GUIDED_CHANGE_ALTITUDE=43001, /* Change target altitude at a given rate. This slews the vehicle at a controllable rate between it's previous altitude and the new one. (affects GUIDED only. Outside GUIDED, aircraft ignores these commands. Designed for onboard companion-computer command-and-control, not normally operator/GCS control.) |Empty| Empty| Rate of change, toward new altitude. 0 for maximum rate change. Positive numbers only, as negative numbers will not converge on the new target alt.| Empty| Empty| Empty| Target Altitude|  */
   MAV_CMD_GUIDED_CHANGE_HEADING=43002, /* Change to target heading at a given rate, overriding previous heading/s. This slews the vehicle at a controllable rate between it's previous heading and the new one. (affects GUIDED only. Exiting GUIDED returns aircraft to normal behaviour defined elsewhere. Designed for onboard companion-computer command-and-control, not normally operator/GCS control.) |course-over-ground or raw vehicle heading.| Target heading.| Maximum centripetal accelearation, ie rate of change,  toward new heading.| Empty| Empty| Empty| Empty|  */
   MAV_CMD_STORM32_DO_GIMBAL_MANAGER_CONTROL_PITCHYAW=60002, /* Command to a gimbal manager to control the gimbal tilt and pan angles. It is possible to set combinations of the values below. E.g. an angle as well as a desired angular rate can be used to get to this angle at a certain angular rate, or an angular rate only will result in continuous turning. NaN is to be used to signal unset. A gimbal device is never to react to this command. |Pitch/tilt angle (positive: tilt up, NaN to be ignored).| Yaw/pan angle (positive: pan to the right, the frame is determined by the STORM32_GIMBAL_DEVICE_FLAGS_YAW_ABSOLUTE flag, NaN to be ignored).| Pitch/tilt rate (positive: tilt up, NaN to be ignored).| Yaw/pan rate (positive: pan to the right, the frame is determined by the STORM32_GIMBAL_DEVICE_FLAGS_YAW_ABSOLUTE flag, NaN to be ignored).| Gimbal device flags.| Gimbal manager flags.| Gimbal ID of the gimbal manager to address (component ID or 1-6 for non-MAVLink gimbal, 0 for all gimbals, send command multiple times for more than one but not all gimbals). The client is copied into bits 8-15.|  */
   MAV_CMD_STORM32_DO_GIMBAL_MANAGER_SETUP=60010, /* Command to configure a gimbal manager. A gimbal device is never to react to this command. The selected profile is reported in the STORM32_GIMBAL_MANAGER_STATUS message. |Gimbal manager profile (0 = default).| Gimbal manager setup flags (0 = none).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Gimbal ID of the gimbal manager to address (component ID or 1-6 for non-MAVLink gimbal, 0 for all gimbals). Send command multiple times for more than one but not all gimbals.|  */
   MAV_CMD_STORM32_DO_GIMBAL_ACTION=60011, /* Command to initiate gimbal actions. Usually performed by the gimbal device, but some can also be done by the gimbal manager. It is hence best to broadcast this command. |Gimbal action to initiate (0 = none).| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Gimbal ID of the gimbal to address (component ID or 1-6 for non-MAVLink gimbal, 0 for all gimbals). Send command multiple times for more than one but not all gimbals.|  */
   MAV_CMD_QSHOT_DO_CONFIGURE=60020, /* Command to set the shot manager mode. |Set shot mode.| Set shot state or command. The allowed values are specific to the selected shot mode.| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_PRS_SET_ARM=60050, /* AVSS defined command. Set PRS arm statuses. |PRS arm statuses| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_GET_ARM=60051, /* AVSS defined command. Gets PRS arm statuses |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_GET_BATTERY=60052, /* AVSS defined command.  Get the PRS battery voltage in millivolts |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_GET_ERR=60053, /* AVSS defined command. Get the PRS error statuses. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_SET_ARM_ALTI=60070, /* AVSS defined command. Set the ATS arming altitude in meters. |ATS arming altitude| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_GET_ARM_ALTI=60071, /* AVSS defined command. Get the ATS arming altitude in meters. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_SHUTDOWN=60072, /* AVSS defined command. Shuts down the PRS system. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_SET_CHARGE_MV=60073, /* AVSS defined command. Set the threshold to charge from outside in millivolts |Charge Threshold| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_GET_CHARGE_MV=60074, /* AVSS defined command. Get the threshold to charge from outside in millivolts. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_SET_TIMEOUT=60075, /* AVSS defined command. Set the timeout between FTS request and deploying the chute. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_GET_TIMEOUT=60076, /* AVSS defined command. Get the timeout between FTS request and deploying the chute. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_SET_FTS_CONNECT=60077, /* AVSS defined command. Set up the PRS to connect to the drone.. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_PRS_GET_FTS_CONNECT=60078, /* AVSS defined command. Get the connection status of PRS and drone. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_ENUM_END=60079, /*  | */
} MAV_CMD;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SCRIPTING_CMD
#define HAVE_ENUM_SCRIPTING_CMD
typedef enum SCRIPTING_CMD
{
   SCRIPTING_CMD_REPL_START=0, /* Start a REPL session. | */
   SCRIPTING_CMD_REPL_STOP=1, /* End a REPL session. | */
   SCRIPTING_CMD_STOP=2, /* Stop execution of scripts. | */
   SCRIPTING_CMD_STOP_AND_RESTART=3, /* Stop execution of scripts and restart. | */
   SCRIPTING_CMD_ENUM_END=4, /*  | */
} SCRIPTING_CMD;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LIMITS_STATE
#define HAVE_ENUM_LIMITS_STATE
typedef enum LIMITS_STATE
{
   LIMITS_INIT=0, /* Pre-initialization. | */
   LIMITS_DISABLED=1, /* Disabled. | */
   LIMITS_ENABLED=2, /* Checking limits. | */
   LIMITS_TRIGGERED=3, /* A limit has been breached. | */
   LIMITS_RECOVERING=4, /* Taking action e.g. Return/RTL. | */
   LIMITS_RECOVERED=5, /* We're no longer in breach of a limit. | */
   LIMITS_STATE_ENUM_END=6, /*  | */
} LIMITS_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LIMIT_MODULE
#define HAVE_ENUM_LIMIT_MODULE
typedef enum LIMIT_MODULE
{
   LIMIT_GPSLOCK=1, /* Pre-initialization. | */
   LIMIT_GEOFENCE=2, /* Disabled. | */
   LIMIT_ALTITUDE=4, /* Checking limits. | */
   LIMIT_MODULE_ENUM_END=5, /*  | */
} LIMIT_MODULE;
#endif

/** @brief Flags in RALLY_POINT message. */
#ifndef HAVE_ENUM_RALLY_FLAGS
#define HAVE_ENUM_RALLY_FLAGS
typedef enum RALLY_FLAGS
{
   FAVORABLE_WIND=1, /* Flag set when requiring favorable winds for landing. | */
   LAND_IMMEDIATELY=2, /* Flag set when plane is to immediately descend to break altitude and land without GCS intervention. Flag not set when plane is to loiter at Rally point until commanded to land. | */
   RALLY_FLAGS_ENUM_END=3, /*  | */
} RALLY_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_CAMERA_STATUS_TYPES
#define HAVE_ENUM_CAMERA_STATUS_TYPES
typedef enum CAMERA_STATUS_TYPES
{
   CAMERA_STATUS_TYPE_HEARTBEAT=0, /* Camera heartbeat, announce camera component ID at 1Hz. | */
   CAMERA_STATUS_TYPE_TRIGGER=1, /* Camera image triggered. | */
   CAMERA_STATUS_TYPE_DISCONNECT=2, /* Camera connection lost. | */
   CAMERA_STATUS_TYPE_ERROR=3, /* Camera unknown error. | */
   CAMERA_STATUS_TYPE_LOWBATT=4, /* Camera battery low. Parameter p1 shows reported voltage. | */
   CAMERA_STATUS_TYPE_LOWSTORE=5, /* Camera storage low. Parameter p1 shows reported shots remaining. | */
   CAMERA_STATUS_TYPE_LOWSTOREV=6, /* Camera storage low. Parameter p1 shows reported video minutes remaining. | */
   CAMERA_STATUS_TYPES_ENUM_END=7, /*  | */
} CAMERA_STATUS_TYPES;
#endif

/** @brief  */
#ifndef HAVE_ENUM_CAMERA_FEEDBACK_FLAGS
#define HAVE_ENUM_CAMERA_FEEDBACK_FLAGS
typedef enum CAMERA_FEEDBACK_FLAGS
{
   CAMERA_FEEDBACK_PHOTO=0, /* Shooting photos, not video. | */
   CAMERA_FEEDBACK_VIDEO=1, /* Shooting video, not stills. | */
   CAMERA_FEEDBACK_BADEXPOSURE=2, /* Unable to achieve requested exposure (e.g. shutter speed too low). | */
   CAMERA_FEEDBACK_CLOSEDLOOP=3, /* Closed loop feedback from camera, we know for sure it has successfully taken a picture. | */
   CAMERA_FEEDBACK_OPENLOOP=4, /* Open loop camera, an image trigger has been requested but we can't know for sure it has successfully taken a picture. | */
   CAMERA_FEEDBACK_FLAGS_ENUM_END=5, /*  | */
} CAMERA_FEEDBACK_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_MODE_GIMBAL
#define HAVE_ENUM_MAV_MODE_GIMBAL
typedef enum MAV_MODE_GIMBAL
{
   MAV_MODE_GIMBAL_UNINITIALIZED=0, /* Gimbal is powered on but has not started initializing yet. | */
   MAV_MODE_GIMBAL_CALIBRATING_PITCH=1, /* Gimbal is currently running calibration on the pitch axis. | */
   MAV_MODE_GIMBAL_CALIBRATING_ROLL=2, /* Gimbal is currently running calibration on the roll axis. | */
   MAV_MODE_GIMBAL_CALIBRATING_YAW=3, /* Gimbal is currently running calibration on the yaw axis. | */
   MAV_MODE_GIMBAL_INITIALIZED=4, /* Gimbal has finished calibrating and initializing, but is relaxed pending reception of first rate command from copter. | */
   MAV_MODE_GIMBAL_ACTIVE=5, /* Gimbal is actively stabilizing. | */
   MAV_MODE_GIMBAL_RATE_CMD_TIMEOUT=6, /* Gimbal is relaxed because it missed more than 10 expected rate command messages in a row. Gimbal will move back to active mode when it receives a new rate command. | */
   MAV_MODE_GIMBAL_ENUM_END=7, /*  | */
} MAV_MODE_GIMBAL;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS
#define HAVE_ENUM_GIMBAL_AXIS
typedef enum GIMBAL_AXIS
{
   GIMBAL_AXIS_YAW=0, /* Gimbal yaw axis. | */
   GIMBAL_AXIS_PITCH=1, /* Gimbal pitch axis. | */
   GIMBAL_AXIS_ROLL=2, /* Gimbal roll axis. | */
   GIMBAL_AXIS_ENUM_END=3, /*  | */
} GIMBAL_AXIS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_STATUS
#define HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_STATUS
typedef enum GIMBAL_AXIS_CALIBRATION_STATUS
{
   GIMBAL_AXIS_CALIBRATION_STATUS_IN_PROGRESS=0, /* Axis calibration is in progress. | */
   GIMBAL_AXIS_CALIBRATION_STATUS_SUCCEEDED=1, /* Axis calibration succeeded. | */
   GIMBAL_AXIS_CALIBRATION_STATUS_FAILED=2, /* Axis calibration failed. | */
   GIMBAL_AXIS_CALIBRATION_STATUS_ENUM_END=3, /*  | */
} GIMBAL_AXIS_CALIBRATION_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_REQUIRED
#define HAVE_ENUM_GIMBAL_AXIS_CALIBRATION_REQUIRED
typedef enum GIMBAL_AXIS_CALIBRATION_REQUIRED
{
   GIMBAL_AXIS_CALIBRATION_REQUIRED_UNKNOWN=0, /* Whether or not this axis requires calibration is unknown at this time. | */
   GIMBAL_AXIS_CALIBRATION_REQUIRED_TRUE=1, /* This axis requires calibration. | */
   GIMBAL_AXIS_CALIBRATION_REQUIRED_FALSE=2, /* This axis does not require calibration. | */
   GIMBAL_AXIS_CALIBRATION_REQUIRED_ENUM_END=3, /*  | */
} GIMBAL_AXIS_CALIBRATION_REQUIRED;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_HEARTBEAT_STATUS
#define HAVE_ENUM_GOPRO_HEARTBEAT_STATUS
typedef enum GOPRO_HEARTBEAT_STATUS
{
   GOPRO_HEARTBEAT_STATUS_DISCONNECTED=0, /* No GoPro connected. | */
   GOPRO_HEARTBEAT_STATUS_INCOMPATIBLE=1, /* The detected GoPro is not HeroBus compatible. | */
   GOPRO_HEARTBEAT_STATUS_CONNECTED=2, /* A HeroBus compatible GoPro is connected. | */
   GOPRO_HEARTBEAT_STATUS_ERROR=3, /* An unrecoverable error was encountered with the connected GoPro, it may require a power cycle. | */
   GOPRO_HEARTBEAT_STATUS_ENUM_END=4, /*  | */
} GOPRO_HEARTBEAT_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_HEARTBEAT_FLAGS
#define HAVE_ENUM_GOPRO_HEARTBEAT_FLAGS
typedef enum GOPRO_HEARTBEAT_FLAGS
{
   GOPRO_FLAG_RECORDING=1, /* GoPro is currently recording. | */
   GOPRO_HEARTBEAT_FLAGS_ENUM_END=2, /*  | */
} GOPRO_HEARTBEAT_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_REQUEST_STATUS
#define HAVE_ENUM_GOPRO_REQUEST_STATUS
typedef enum GOPRO_REQUEST_STATUS
{
   GOPRO_REQUEST_SUCCESS=0, /* The write message with ID indicated succeeded. | */
   GOPRO_REQUEST_FAILED=1, /* The write message with ID indicated failed. | */
   GOPRO_REQUEST_STATUS_ENUM_END=2, /*  | */
} GOPRO_REQUEST_STATUS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_COMMAND
#define HAVE_ENUM_GOPRO_COMMAND
typedef enum GOPRO_COMMAND
{
   GOPRO_COMMAND_POWER=0, /* (Get/Set). | */
   GOPRO_COMMAND_CAPTURE_MODE=1, /* (Get/Set). | */
   GOPRO_COMMAND_SHUTTER=2, /* (___/Set). | */
   GOPRO_COMMAND_BATTERY=3, /* (Get/___). | */
   GOPRO_COMMAND_MODEL=4, /* (Get/___). | */
   GOPRO_COMMAND_VIDEO_SETTINGS=5, /* (Get/Set). | */
   GOPRO_COMMAND_LOW_LIGHT=6, /* (Get/Set). | */
   GOPRO_COMMAND_PHOTO_RESOLUTION=7, /* (Get/Set). | */
   GOPRO_COMMAND_PHOTO_BURST_RATE=8, /* (Get/Set). | */
   GOPRO_COMMAND_PROTUNE=9, /* (Get/Set). | */
   GOPRO_COMMAND_PROTUNE_WHITE_BALANCE=10, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_PROTUNE_COLOUR=11, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_PROTUNE_GAIN=12, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_PROTUNE_SHARPNESS=13, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_PROTUNE_EXPOSURE=14, /* (Get/Set) Hero 3+ Only. | */
   GOPRO_COMMAND_TIME=15, /* (Get/Set). | */
   GOPRO_COMMAND_CHARGING=16, /* (Get/Set). | */
   GOPRO_COMMAND_ENUM_END=17, /*  | */
} GOPRO_COMMAND;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_CAPTURE_MODE
#define HAVE_ENUM_GOPRO_CAPTURE_MODE
typedef enum GOPRO_CAPTURE_MODE
{
   GOPRO_CAPTURE_MODE_VIDEO=0, /* Video mode. | */
   GOPRO_CAPTURE_MODE_PHOTO=1, /* Photo mode. | */
   GOPRO_CAPTURE_MODE_BURST=2, /* Burst mode, Hero 3+ only. | */
   GOPRO_CAPTURE_MODE_TIME_LAPSE=3, /* Time lapse mode, Hero 3+ only. | */
   GOPRO_CAPTURE_MODE_MULTI_SHOT=4, /* Multi shot mode, Hero 4 only. | */
   GOPRO_CAPTURE_MODE_PLAYBACK=5, /* Playback mode, Hero 4 only, silver only except when LCD or HDMI is connected to black. | */
   GOPRO_CAPTURE_MODE_SETUP=6, /* Playback mode, Hero 4 only. | */
   GOPRO_CAPTURE_MODE_UNKNOWN=255, /* Mode not yet known. | */
   GOPRO_CAPTURE_MODE_ENUM_END=256, /*  | */
} GOPRO_CAPTURE_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_RESOLUTION
#define HAVE_ENUM_GOPRO_RESOLUTION
typedef enum GOPRO_RESOLUTION
{
   GOPRO_RESOLUTION_480p=0, /* 848 x 480 (480p). | */
   GOPRO_RESOLUTION_720p=1, /* 1280 x 720 (720p). | */
   GOPRO_RESOLUTION_960p=2, /* 1280 x 960 (960p). | */
   GOPRO_RESOLUTION_1080p=3, /* 1920 x 1080 (1080p). | */
   GOPRO_RESOLUTION_1440p=4, /* 1920 x 1440 (1440p). | */
   GOPRO_RESOLUTION_2_7k_17_9=5, /* 2704 x 1440 (2.7k-17:9). | */
   GOPRO_RESOLUTION_2_7k_16_9=6, /* 2704 x 1524 (2.7k-16:9). | */
   GOPRO_RESOLUTION_2_7k_4_3=7, /* 2704 x 2028 (2.7k-4:3). | */
   GOPRO_RESOLUTION_4k_16_9=8, /* 3840 x 2160 (4k-16:9). | */
   GOPRO_RESOLUTION_4k_17_9=9, /* 4096 x 2160 (4k-17:9). | */
   GOPRO_RESOLUTION_720p_SUPERVIEW=10, /* 1280 x 720 (720p-SuperView). | */
   GOPRO_RESOLUTION_1080p_SUPERVIEW=11, /* 1920 x 1080 (1080p-SuperView). | */
   GOPRO_RESOLUTION_2_7k_SUPERVIEW=12, /* 2704 x 1520 (2.7k-SuperView). | */
   GOPRO_RESOLUTION_4k_SUPERVIEW=13, /* 3840 x 2160 (4k-SuperView). | */
   GOPRO_RESOLUTION_ENUM_END=14, /*  | */
} GOPRO_RESOLUTION;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_FRAME_RATE
#define HAVE_ENUM_GOPRO_FRAME_RATE
typedef enum GOPRO_FRAME_RATE
{
   GOPRO_FRAME_RATE_12=0, /* 12 FPS. | */
   GOPRO_FRAME_RATE_15=1, /* 15 FPS. | */
   GOPRO_FRAME_RATE_24=2, /* 24 FPS. | */
   GOPRO_FRAME_RATE_25=3, /* 25 FPS. | */
   GOPRO_FRAME_RATE_30=4, /* 30 FPS. | */
   GOPRO_FRAME_RATE_48=5, /* 48 FPS. | */
   GOPRO_FRAME_RATE_50=6, /* 50 FPS. | */
   GOPRO_FRAME_RATE_60=7, /* 60 FPS. | */
   GOPRO_FRAME_RATE_80=8, /* 80 FPS. | */
   GOPRO_FRAME_RATE_90=9, /* 90 FPS. | */
   GOPRO_FRAME_RATE_100=10, /* 100 FPS. | */
   GOPRO_FRAME_RATE_120=11, /* 120 FPS. | */
   GOPRO_FRAME_RATE_240=12, /* 240 FPS. | */
   GOPRO_FRAME_RATE_12_5=13, /* 12.5 FPS. | */
   GOPRO_FRAME_RATE_ENUM_END=14, /*  | */
} GOPRO_FRAME_RATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_FIELD_OF_VIEW
#define HAVE_ENUM_GOPRO_FIELD_OF_VIEW
typedef enum GOPRO_FIELD_OF_VIEW
{
   GOPRO_FIELD_OF_VIEW_WIDE=0, /* 0x00: Wide. | */
   GOPRO_FIELD_OF_VIEW_MEDIUM=1, /* 0x01: Medium. | */
   GOPRO_FIELD_OF_VIEW_NARROW=2, /* 0x02: Narrow. | */
   GOPRO_FIELD_OF_VIEW_ENUM_END=3, /*  | */
} GOPRO_FIELD_OF_VIEW;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_VIDEO_SETTINGS_FLAGS
#define HAVE_ENUM_GOPRO_VIDEO_SETTINGS_FLAGS
typedef enum GOPRO_VIDEO_SETTINGS_FLAGS
{
   GOPRO_VIDEO_SETTINGS_TV_MODE=1, /* 0=NTSC, 1=PAL. | */
   GOPRO_VIDEO_SETTINGS_FLAGS_ENUM_END=2, /*  | */
} GOPRO_VIDEO_SETTINGS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PHOTO_RESOLUTION
#define HAVE_ENUM_GOPRO_PHOTO_RESOLUTION
typedef enum GOPRO_PHOTO_RESOLUTION
{
   GOPRO_PHOTO_RESOLUTION_5MP_MEDIUM=0, /* 5MP Medium. | */
   GOPRO_PHOTO_RESOLUTION_7MP_MEDIUM=1, /* 7MP Medium. | */
   GOPRO_PHOTO_RESOLUTION_7MP_WIDE=2, /* 7MP Wide. | */
   GOPRO_PHOTO_RESOLUTION_10MP_WIDE=3, /* 10MP Wide. | */
   GOPRO_PHOTO_RESOLUTION_12MP_WIDE=4, /* 12MP Wide. | */
   GOPRO_PHOTO_RESOLUTION_ENUM_END=5, /*  | */
} GOPRO_PHOTO_RESOLUTION;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_WHITE_BALANCE
#define HAVE_ENUM_GOPRO_PROTUNE_WHITE_BALANCE
typedef enum GOPRO_PROTUNE_WHITE_BALANCE
{
   GOPRO_PROTUNE_WHITE_BALANCE_AUTO=0, /* Auto. | */
   GOPRO_PROTUNE_WHITE_BALANCE_3000K=1, /* 3000K. | */
   GOPRO_PROTUNE_WHITE_BALANCE_5500K=2, /* 5500K. | */
   GOPRO_PROTUNE_WHITE_BALANCE_6500K=3, /* 6500K. | */
   GOPRO_PROTUNE_WHITE_BALANCE_RAW=4, /* Camera Raw. | */
   GOPRO_PROTUNE_WHITE_BALANCE_ENUM_END=5, /*  | */
} GOPRO_PROTUNE_WHITE_BALANCE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_COLOUR
#define HAVE_ENUM_GOPRO_PROTUNE_COLOUR
typedef enum GOPRO_PROTUNE_COLOUR
{
   GOPRO_PROTUNE_COLOUR_STANDARD=0, /* Auto. | */
   GOPRO_PROTUNE_COLOUR_NEUTRAL=1, /* Neutral. | */
   GOPRO_PROTUNE_COLOUR_ENUM_END=2, /*  | */
} GOPRO_PROTUNE_COLOUR;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_GAIN
#define HAVE_ENUM_GOPRO_PROTUNE_GAIN
typedef enum GOPRO_PROTUNE_GAIN
{
   GOPRO_PROTUNE_GAIN_400=0, /* ISO 400. | */
   GOPRO_PROTUNE_GAIN_800=1, /* ISO 800 (Only Hero 4). | */
   GOPRO_PROTUNE_GAIN_1600=2, /* ISO 1600. | */
   GOPRO_PROTUNE_GAIN_3200=3, /* ISO 3200 (Only Hero 4). | */
   GOPRO_PROTUNE_GAIN_6400=4, /* ISO 6400. | */
   GOPRO_PROTUNE_GAIN_ENUM_END=5, /*  | */
} GOPRO_PROTUNE_GAIN;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_SHARPNESS
#define HAVE_ENUM_GOPRO_PROTUNE_SHARPNESS
typedef enum GOPRO_PROTUNE_SHARPNESS
{
   GOPRO_PROTUNE_SHARPNESS_LOW=0, /* Low Sharpness. | */
   GOPRO_PROTUNE_SHARPNESS_MEDIUM=1, /* Medium Sharpness. | */
   GOPRO_PROTUNE_SHARPNESS_HIGH=2, /* High Sharpness. | */
   GOPRO_PROTUNE_SHARPNESS_ENUM_END=3, /*  | */
} GOPRO_PROTUNE_SHARPNESS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_PROTUNE_EXPOSURE
#define HAVE_ENUM_GOPRO_PROTUNE_EXPOSURE
typedef enum GOPRO_PROTUNE_EXPOSURE
{
   GOPRO_PROTUNE_EXPOSURE_NEG_5_0=0, /* -5.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_4_5=1, /* -4.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_4_0=2, /* -4.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_3_5=3, /* -3.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_3_0=4, /* -3.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_2_5=5, /* -2.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_NEG_2_0=6, /* -2.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_NEG_1_5=7, /* -1.5 EV. | */
   GOPRO_PROTUNE_EXPOSURE_NEG_1_0=8, /* -1.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_NEG_0_5=9, /* -0.5 EV. | */
   GOPRO_PROTUNE_EXPOSURE_ZERO=10, /* 0.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_0_5=11, /* +0.5 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_1_0=12, /* +1.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_1_5=13, /* +1.5 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_2_0=14, /* +2.0 EV. | */
   GOPRO_PROTUNE_EXPOSURE_POS_2_5=15, /* +2.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_3_0=16, /* +3.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_3_5=17, /* +3.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_4_0=18, /* +4.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_4_5=19, /* +4.5 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_POS_5_0=20, /* +5.0 EV (Hero 3+ Only). | */
   GOPRO_PROTUNE_EXPOSURE_ENUM_END=21, /*  | */
} GOPRO_PROTUNE_EXPOSURE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_CHARGING
#define HAVE_ENUM_GOPRO_CHARGING
typedef enum GOPRO_CHARGING
{
   GOPRO_CHARGING_DISABLED=0, /* Charging disabled. | */
   GOPRO_CHARGING_ENABLED=1, /* Charging enabled. | */
   GOPRO_CHARGING_ENUM_END=2, /*  | */
} GOPRO_CHARGING;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_MODEL
#define HAVE_ENUM_GOPRO_MODEL
typedef enum GOPRO_MODEL
{
   GOPRO_MODEL_UNKNOWN=0, /* Unknown gopro model. | */
   GOPRO_MODEL_HERO_3_PLUS_SILVER=1, /* Hero 3+ Silver (HeroBus not supported by GoPro). | */
   GOPRO_MODEL_HERO_3_PLUS_BLACK=2, /* Hero 3+ Black. | */
   GOPRO_MODEL_HERO_4_SILVER=3, /* Hero 4 Silver. | */
   GOPRO_MODEL_HERO_4_BLACK=4, /* Hero 4 Black. | */
   GOPRO_MODEL_ENUM_END=5, /*  | */
} GOPRO_MODEL;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GOPRO_BURST_RATE
#define HAVE_ENUM_GOPRO_BURST_RATE
typedef enum GOPRO_BURST_RATE
{
   GOPRO_BURST_RATE_3_IN_1_SECOND=0, /* 3 Shots / 1 Second. | */
   GOPRO_BURST_RATE_5_IN_1_SECOND=1, /* 5 Shots / 1 Second. | */
   GOPRO_BURST_RATE_10_IN_1_SECOND=2, /* 10 Shots / 1 Second. | */
   GOPRO_BURST_RATE_10_IN_2_SECOND=3, /* 10 Shots / 2 Second. | */
   GOPRO_BURST_RATE_10_IN_3_SECOND=4, /* 10 Shots / 3 Second (Hero 4 Only). | */
   GOPRO_BURST_RATE_30_IN_1_SECOND=5, /* 30 Shots / 1 Second. | */
   GOPRO_BURST_RATE_30_IN_2_SECOND=6, /* 30 Shots / 2 Second. | */
   GOPRO_BURST_RATE_30_IN_3_SECOND=7, /* 30 Shots / 3 Second. | */
   GOPRO_BURST_RATE_30_IN_6_SECOND=8, /* 30 Shots / 6 Second. | */
   GOPRO_BURST_RATE_ENUM_END=9, /*  | */
} GOPRO_BURST_RATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL
#define HAVE_ENUM_MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL
typedef enum MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL
{
   MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL_LOW=0, /* Switch Low. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL_MIDDLE=1, /* Switch Middle. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL_HIGH=2, /* Switch High. |Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)| Reserved (default:0)|  */
   MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL_ENUM_END=3, /*  | */
} MAV_CMD_DO_AUX_FUNCTION_SWITCH_LEVEL;
#endif

/** @brief  */
#ifndef HAVE_ENUM_LED_CONTROL_PATTERN
#define HAVE_ENUM_LED_CONTROL_PATTERN
typedef enum LED_CONTROL_PATTERN
{
   LED_CONTROL_PATTERN_OFF=0, /* LED patterns off (return control to regular vehicle control). | */
   LED_CONTROL_PATTERN_FIRMWAREUPDATE=1, /* LEDs show pattern during firmware update. | */
   LED_CONTROL_PATTERN_CUSTOM=255, /* Custom Pattern using custom bytes fields. | */
   LED_CONTROL_PATTERN_ENUM_END=256, /*  | */
} LED_CONTROL_PATTERN;
#endif

/** @brief Flags in EKF_STATUS message. */
#ifndef HAVE_ENUM_EKF_STATUS_FLAGS
#define HAVE_ENUM_EKF_STATUS_FLAGS
typedef enum EKF_STATUS_FLAGS
{
   EKF_ATTITUDE=1, /* Set if EKF's attitude estimate is good. | */
   EKF_VELOCITY_HORIZ=2, /* Set if EKF's horizontal velocity estimate is good. | */
   EKF_VELOCITY_VERT=4, /* Set if EKF's vertical velocity estimate is good. | */
   EKF_POS_HORIZ_REL=8, /* Set if EKF's horizontal position (relative) estimate is good. | */
   EKF_POS_HORIZ_ABS=16, /* Set if EKF's horizontal position (absolute) estimate is good. | */
   EKF_POS_VERT_ABS=32, /* Set if EKF's vertical position (absolute) estimate is good. | */
   EKF_POS_VERT_AGL=64, /* Set if EKF's vertical position (above ground) estimate is good. | */
   EKF_CONST_POS_MODE=128, /* EKF is in constant position mode and does not know it's absolute or relative position. | */
   EKF_PRED_POS_HORIZ_REL=256, /* Set if EKF's predicted horizontal position (relative) estimate is good. | */
   EKF_PRED_POS_HORIZ_ABS=512, /* Set if EKF's predicted horizontal position (absolute) estimate is good. | */
   EKF_UNINITIALIZED=1024, /* Set if EKF has never been healthy. | */
   EKF_STATUS_FLAGS_ENUM_END=1025, /*  | */
} EKF_STATUS_FLAGS;
#endif

/** @brief  */
#ifndef HAVE_ENUM_PID_TUNING_AXIS
#define HAVE_ENUM_PID_TUNING_AXIS
typedef enum PID_TUNING_AXIS
{
   PID_TUNING_ROLL=1, /*  | */
   PID_TUNING_PITCH=2, /*  | */
   PID_TUNING_YAW=3, /*  | */
   PID_TUNING_ACCZ=4, /*  | */
   PID_TUNING_STEER=5, /*  | */
   PID_TUNING_LANDING=6, /*  | */
   PID_TUNING_AXIS_ENUM_END=7, /*  | */
} PID_TUNING_AXIS;
#endif

/** @brief Special ACK block numbers control activation of dataflash log streaming. */
#ifndef HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
#define HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
typedef enum MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS
{
   MAV_REMOTE_LOG_DATA_BLOCK_STOP=2147483645, /* UAV to stop sending DataFlash blocks. | */
   MAV_REMOTE_LOG_DATA_BLOCK_START=2147483646, /* UAV to start sending DataFlash blocks. | */
   MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS_ENUM_END=2147483647, /*  | */
} MAV_REMOTE_LOG_DATA_BLOCK_COMMANDS;
#endif

/** @brief Possible remote log data block statuses. */
#ifndef HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
#define HAVE_ENUM_MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
typedef enum MAV_REMOTE_LOG_DATA_BLOCK_STATUSES
{
   MAV_REMOTE_LOG_DATA_BLOCK_NACK=0, /* This block has NOT been received. | */
   MAV_REMOTE_LOG_DATA_BLOCK_ACK=1, /* This block has been received. | */
   MAV_REMOTE_LOG_DATA_BLOCK_STATUSES_ENUM_END=2, /*  | */
} MAV_REMOTE_LOG_DATA_BLOCK_STATUSES;
#endif

/** @brief Bus types for device operations. */
#ifndef HAVE_ENUM_DEVICE_OP_BUSTYPE
#define HAVE_ENUM_DEVICE_OP_BUSTYPE
typedef enum DEVICE_OP_BUSTYPE
{
   DEVICE_OP_BUSTYPE_I2C=0, /* I2C Device operation. | */
   DEVICE_OP_BUSTYPE_SPI=1, /* SPI Device operation. | */
   DEVICE_OP_BUSTYPE_ENUM_END=2, /*  | */
} DEVICE_OP_BUSTYPE;
#endif

/** @brief Deepstall flight stage. */
#ifndef HAVE_ENUM_DEEPSTALL_STAGE
#define HAVE_ENUM_DEEPSTALL_STAGE
typedef enum DEEPSTALL_STAGE
{
   DEEPSTALL_STAGE_FLY_TO_LANDING=0, /* Flying to the landing point. | */
   DEEPSTALL_STAGE_ESTIMATE_WIND=1, /* Building an estimate of the wind. | */
   DEEPSTALL_STAGE_WAIT_FOR_BREAKOUT=2, /* Waiting to breakout of the loiter to fly the approach. | */
   DEEPSTALL_STAGE_FLY_TO_ARC=3, /* Flying to the first arc point to turn around to the landing point. | */
   DEEPSTALL_STAGE_ARC=4, /* Turning around back to the deepstall landing point. | */
   DEEPSTALL_STAGE_APPROACH=5, /* Approaching the landing point. | */
   DEEPSTALL_STAGE_LAND=6, /* Stalling and steering towards the land point. | */
   DEEPSTALL_STAGE_ENUM_END=7, /*  | */
} DEEPSTALL_STAGE;
#endif

/** @brief A mapping of plane flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_PLANE_MODE
#define HAVE_ENUM_PLANE_MODE
typedef enum PLANE_MODE
{
   PLANE_MODE_MANUAL=0, /*  | */
   PLANE_MODE_CIRCLE=1, /*  | */
   PLANE_MODE_STABILIZE=2, /*  | */
   PLANE_MODE_TRAINING=3, /*  | */
   PLANE_MODE_ACRO=4, /*  | */
   PLANE_MODE_FLY_BY_WIRE_A=5, /*  | */
   PLANE_MODE_FLY_BY_WIRE_B=6, /*  | */
   PLANE_MODE_CRUISE=7, /*  | */
   PLANE_MODE_AUTOTUNE=8, /*  | */
   PLANE_MODE_AUTO=10, /*  | */
   PLANE_MODE_RTL=11, /*  | */
   PLANE_MODE_LOITER=12, /*  | */
   PLANE_MODE_TAKEOFF=13, /*  | */
   PLANE_MODE_AVOID_ADSB=14, /*  | */
   PLANE_MODE_GUIDED=15, /*  | */
   PLANE_MODE_INITIALIZING=16, /*  | */
   PLANE_MODE_QSTABILIZE=17, /*  | */
   PLANE_MODE_QHOVER=18, /*  | */
   PLANE_MODE_QLOITER=19, /*  | */
   PLANE_MODE_QLAND=20, /*  | */
   PLANE_MODE_QRTL=21, /*  | */
   PLANE_MODE_QAUTOTUNE=22, /*  | */
   PLANE_MODE_QACRO=23, /*  | */
   PLANE_MODE_THERMAL=24, /*  | */
   PLANE_MODE_ENUM_END=25, /*  | */
} PLANE_MODE;
#endif

/** @brief A mapping of copter flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_COPTER_MODE
#define HAVE_ENUM_COPTER_MODE
typedef enum COPTER_MODE
{
   COPTER_MODE_STABILIZE=0, /*  | */
   COPTER_MODE_ACRO=1, /*  | */
   COPTER_MODE_ALT_HOLD=2, /*  | */
   COPTER_MODE_AUTO=3, /*  | */
   COPTER_MODE_GUIDED=4, /*  | */
   COPTER_MODE_LOITER=5, /*  | */
   COPTER_MODE_RTL=6, /*  | */
   COPTER_MODE_CIRCLE=7, /*  | */
   COPTER_MODE_LAND=9, /*  | */
   COPTER_MODE_DRIFT=11, /*  | */
   COPTER_MODE_SPORT=13, /*  | */
   COPTER_MODE_FLIP=14, /*  | */
   COPTER_MODE_AUTOTUNE=15, /*  | */
   COPTER_MODE_POSHOLD=16, /*  | */
   COPTER_MODE_BRAKE=17, /*  | */
   COPTER_MODE_THROW=18, /*  | */
   COPTER_MODE_AVOID_ADSB=19, /*  | */
   COPTER_MODE_GUIDED_NOGPS=20, /*  | */
   COPTER_MODE_SMART_RTL=21, /*  | */
   COPTER_MODE_FLOWHOLD=22, /*  | */
   COPTER_MODE_FOLLOW=23, /*  | */
   COPTER_MODE_ZIGZAG=24, /*  | */
   COPTER_MODE_SYSTEMID=25, /*  | */
   COPTER_MODE_AUTOROTATE=26, /*  | */
   COPTER_MODE_AUTO_RTL=27, /*  | */
   COPTER_MODE_ENUM_END=28, /*  | */
} COPTER_MODE;
#endif

/** @brief A mapping of sub flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_SUB_MODE
#define HAVE_ENUM_SUB_MODE
typedef enum SUB_MODE
{
   SUB_MODE_STABILIZE=0, /*  | */
   SUB_MODE_ACRO=1, /*  | */
   SUB_MODE_ALT_HOLD=2, /*  | */
   SUB_MODE_AUTO=3, /*  | */
   SUB_MODE_GUIDED=4, /*  | */
   SUB_MODE_CIRCLE=7, /*  | */
   SUB_MODE_SURFACE=9, /*  | */
   SUB_MODE_POSHOLD=16, /*  | */
   SUB_MODE_MANUAL=19, /*  | */
   SUB_MODE_ENUM_END=20, /*  | */
} SUB_MODE;
#endif

/** @brief A mapping of rover flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_ROVER_MODE
#define HAVE_ENUM_ROVER_MODE
typedef enum ROVER_MODE
{
   ROVER_MODE_MANUAL=0, /*  | */
   ROVER_MODE_ACRO=1, /*  | */
   ROVER_MODE_STEERING=3, /*  | */
   ROVER_MODE_HOLD=4, /*  | */
   ROVER_MODE_LOITER=5, /*  | */
   ROVER_MODE_FOLLOW=6, /*  | */
   ROVER_MODE_SIMPLE=7, /*  | */
   ROVER_MODE_AUTO=10, /*  | */
   ROVER_MODE_RTL=11, /*  | */
   ROVER_MODE_SMART_RTL=12, /*  | */
   ROVER_MODE_GUIDED=15, /*  | */
   ROVER_MODE_INITIALIZING=16, /*  | */
   ROVER_MODE_ENUM_END=17, /*  | */
} ROVER_MODE;
#endif

/** @brief A mapping of antenna tracker flight modes for custom_mode field of heartbeat. */
#ifndef HAVE_ENUM_TRACKER_MODE
#define HAVE_ENUM_TRACKER_MODE
typedef enum TRACKER_MODE
{
   TRACKER_MODE_MANUAL=0, /*  | */
   TRACKER_MODE_STOP=1, /*  | */
   TRACKER_MODE_SCAN=2, /*  | */
   TRACKER_MODE_SERVO_TEST=3, /*  | */
   TRACKER_MODE_AUTO=10, /*  | */
   TRACKER_MODE_INITIALIZING=16, /*  | */
   TRACKER_MODE_ENUM_END=17, /*  | */
} TRACKER_MODE;
#endif

/** @brief The type of parameter for the OSD parameter editor. */
#ifndef HAVE_ENUM_OSD_PARAM_CONFIG_TYPE
#define HAVE_ENUM_OSD_PARAM_CONFIG_TYPE
typedef enum OSD_PARAM_CONFIG_TYPE
{
   OSD_PARAM_NONE=0, /*  | */
   OSD_PARAM_SERIAL_PROTOCOL=1, /*  | */
   OSD_PARAM_SERVO_FUNCTION=2, /*  | */
   OSD_PARAM_AUX_FUNCTION=3, /*  | */
   OSD_PARAM_FLIGHT_MODE=4, /*  | */
   OSD_PARAM_FAILSAFE_ACTION=5, /*  | */
   OSD_PARAM_FAILSAFE_ACTION_1=6, /*  | */
   OSD_PARAM_FAILSAFE_ACTION_2=7, /*  | */
   OSD_PARAM_NUM_TYPES=8, /*  | */
   OSD_PARAM_CONFIG_TYPE_ENUM_END=9, /*  | */
} OSD_PARAM_CONFIG_TYPE;
#endif

/** @brief The error type for the OSD parameter editor. */
#ifndef HAVE_ENUM_OSD_PARAM_CONFIG_ERROR
#define HAVE_ENUM_OSD_PARAM_CONFIG_ERROR
typedef enum OSD_PARAM_CONFIG_ERROR
{
   OSD_PARAM_SUCCESS=0, /*  | */
   OSD_PARAM_INVALID_SCREEN=1, /*  | */
   OSD_PARAM_INVALID_PARAMETER_INDEX=2, /*  | */
   OSD_PARAM_INVALID_PARAMETER=3, /*  | */
   OSD_PARAM_CONFIG_ERROR_ENUM_END=4, /*  | */
} OSD_PARAM_CONFIG_ERROR;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_sensor_offsets.h"
#include "./mavlink_msg_set_mag_offsets.h"
#include "./mavlink_msg_meminfo.h"
#include "./mavlink_msg_ap_adc.h"
#include "./mavlink_msg_digicam_configure.h"
#include "./mavlink_msg_digicam_control.h"
#include "./mavlink_msg_mount_configure.h"
#include "./mavlink_msg_mount_control.h"
#include "./mavlink_msg_mount_status.h"
#include "./mavlink_msg_fence_point.h"
#include "./mavlink_msg_fence_fetch_point.h"
#include "./mavlink_msg_ahrs.h"
#include "./mavlink_msg_simstate.h"
#include "./mavlink_msg_hwstatus.h"
#include "./mavlink_msg_radio.h"
#include "./mavlink_msg_limits_status.h"
#include "./mavlink_msg_wind.h"
#include "./mavlink_msg_data16.h"
#include "./mavlink_msg_data32.h"
#include "./mavlink_msg_data64.h"
#include "./mavlink_msg_data96.h"
#include "./mavlink_msg_rangefinder.h"
#include "./mavlink_msg_airspeed_autocal.h"
#include "./mavlink_msg_rally_point.h"
#include "./mavlink_msg_rally_fetch_point.h"
#include "./mavlink_msg_compassmot_status.h"
#include "./mavlink_msg_ahrs2.h"
#include "./mavlink_msg_camera_status.h"
#include "./mavlink_msg_camera_feedback.h"
#include "./mavlink_msg_battery2.h"
#include "./mavlink_msg_ahrs3.h"
#include "./mavlink_msg_autopilot_version_request.h"
#include "./mavlink_msg_remote_log_data_block.h"
#include "./mavlink_msg_remote_log_block_status.h"
#include "./mavlink_msg_led_control.h"
#include "./mavlink_msg_mag_cal_progress.h"
#include "./mavlink_msg_ekf_status_report.h"
#include "./mavlink_msg_pid_tuning.h"
#include "./mavlink_msg_deepstall.h"
#include "./mavlink_msg_gimbal_report.h"
#include "./mavlink_msg_gimbal_control.h"
#include "./mavlink_msg_gimbal_torque_cmd_report.h"
#include "./mavlink_msg_gopro_heartbeat.h"
#include "./mavlink_msg_gopro_get_request.h"
#include "./mavlink_msg_gopro_get_response.h"
#include "./mavlink_msg_gopro_set_request.h"
#include "./mavlink_msg_gopro_set_response.h"
#include "./mavlink_msg_rpm.h"

// base include
#include "../common/common.h"
#include "../uAvionix/uAvionix.h"
#include "../icarous/icarous.h"

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 1

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, MAVLINK_MESSAGE_INFO_LINK_NODE_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SET_MODE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_COMMAND_CANCEL, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, MAVLINK_MESSAGE_INFO_HIL_ACTUATOR_CONTROLS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, MAVLINK_MESSAGE_INFO_FOLLOW_TARGET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, MAVLINK_MESSAGE_INFO_SENSOR_OFFSETS, MAVLINK_MESSAGE_INFO_SET_MAG_OFFSETS, MAVLINK_MESSAGE_INFO_MEMINFO, MAVLINK_MESSAGE_INFO_AP_ADC, MAVLINK_MESSAGE_INFO_DIGICAM_CONFIGURE, MAVLINK_MESSAGE_INFO_DIGICAM_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_CONFIGURE, MAVLINK_MESSAGE_INFO_MOUNT_CONTROL, MAVLINK_MESSAGE_INFO_MOUNT_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_FENCE_POINT, MAVLINK_MESSAGE_INFO_FENCE_FETCH_POINT, MAVLINK_MESSAGE_INFO_FENCE_STATUS, MAVLINK_MESSAGE_INFO_AHRS, MAVLINK_MESSAGE_INFO_SIMSTATE, MAVLINK_MESSAGE_INFO_HWSTATUS, MAVLINK_MESSAGE_INFO_RADIO, MAVLINK_MESSAGE_INFO_LIMITS_STATUS, MAVLINK_MESSAGE_INFO_WIND, MAVLINK_MESSAGE_INFO_DATA16, MAVLINK_MESSAGE_INFO_DATA32, MAVLINK_MESSAGE_INFO_DATA64, MAVLINK_MESSAGE_INFO_DATA96, MAVLINK_MESSAGE_INFO_RANGEFINDER, MAVLINK_MESSAGE_INFO_AIRSPEED_AUTOCAL, MAVLINK_MESSAGE_INFO_RALLY_POINT, MAVLINK_MESSAGE_INFO_RALLY_FETCH_POINT, MAVLINK_MESSAGE_INFO_COMPASSMOT_STATUS, MAVLINK_MESSAGE_INFO_AHRS2, MAVLINK_MESSAGE_INFO_CAMERA_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_FEEDBACK, MAVLINK_MESSAGE_INFO_BATTERY2, MAVLINK_MESSAGE_INFO_AHRS3, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION_REQUEST, MAVLINK_MESSAGE_INFO_REMOTE_LOG_DATA_BLOCK, MAVLINK_MESSAGE_INFO_REMOTE_LOG_BLOCK_STATUS, MAVLINK_MESSAGE_INFO_LED_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MAG_CAL_PROGRESS, MAVLINK_MESSAGE_INFO_MAG_CAL_REPORT, MAVLINK_MESSAGE_INFO_EKF_STATUS_REPORT, MAVLINK_MESSAGE_INFO_PID_TUNING, MAVLINK_MESSAGE_INFO_DEEPSTALL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_REPORT, MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_GIMBAL_TORQUE_CMD_REPORT, MAVLINK_MESSAGE_INFO_GOPRO_HEARTBEAT, MAVLINK_MESSAGE_INFO_GOPRO_GET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_GET_RESPONSE, MAVLINK_MESSAGE_INFO_GOPRO_SET_REQUEST, MAVLINK_MESSAGE_INFO_GOPRO_SET_RESPONSE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_EFI_STATUS, MAVLINK_MESSAGE_INFO_RPM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS, MAVLINK_MESSAGE_INFO_WIND_COV, MAVLINK_MESSAGE_INFO_GPS_INPUT, MAVLINK_MESSAGE_INFO_GPS_RTCM_DATA, MAVLINK_MESSAGE_INFO_HIGH_LATENCY, MAVLINK_MESSAGE_INFO_HIGH_LATENCY2, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, MAVLINK_MESSAGE_INFO_ADSB_VEHICLE, MAVLINK_MESSAGE_INFO_COLLISION, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
# define MAVLINK_MESSAGE_NAMES {{ "ACTUATOR_CONTROL_TARGET", 140 }, { "ADSB_VEHICLE", 246 }, { "AHRS", 163 }, { "AHRS2", 178 }, { "AHRS3", 182 }, { "AIRSPEED_AUTOCAL", 174 }, { "ALTITUDE", 141 }, { "AP_ADC", 153 }, { "ATTITUDE", 30 }, { "ATTITUDE_QUATERNION", 31 }, { "ATTITUDE_QUATERNION_COV", 61 }, { "ATTITUDE_TARGET", 83 }, { "ATT_POS_MOCAP", 138 }, { "AUTH_KEY", 7 }, { "AUTOPILOT_VERSION", 148 }, { "AUTOPILOT_VERSION_REQUEST", 183 }, { "BATTERY2", 181 }, { "BATTERY_STATUS", 147 }, { "CAMERA_FEEDBACK", 180 }, { "CAMERA_STATUS", 179 }, { "CAMERA_TRIGGER", 112 }, { "CHANGE_OPERATOR_CONTROL", 5 }, { "CHANGE_OPERATOR_CONTROL_ACK", 6 }, { "COLLISION", 247 }, { "COMMAND_ACK", 77 }, { "COMMAND_CANCEL", 80 }, { "COMMAND_INT", 75 }, { "COMMAND_LONG", 76 }, { "COMPASSMOT_STATUS", 177 }, { "CONTROL_SYSTEM_STATE", 146 }, { "DATA16", 169 }, { "DATA32", 170 }, { "DATA64", 171 }, { "DATA96", 172 }, { "DATA_STREAM", 67 }, { "DATA_TRANSMISSION_HANDSHAKE", 130 }, { "DEBUG", 254 }, { "DEBUG_VECT", 250 }, { "DEEPSTALL", 195 }, { "DIGICAM_CONFIGURE", 154 }, { "DIGICAM_CONTROL", 155 }, { "DISTANCE_SENSOR", 132 }, { "EFI_STATUS", 225 }, { "EKF_STATUS_REPORT", 193 }, { "ENCAPSULATED_DATA", 131 }, { "ESTIMATOR_STATUS", 230 }, { "EXTENDED_SYS_STATE", 245 }, { "FENCE_FETCH_POINT", 161 }, { "FENCE_POINT", 160 }, { "FENCE_STATUS", 162 }, { "FILE_TRANSFER_PROTOCOL", 110 }, { "FOLLOW_TARGET", 144 }, { "GIMBAL_CONTROL", 201 }, { "GIMBAL_REPORT", 200 }, { "GIMBAL_TORQUE_CMD_REPORT", 214 }, { "GLOBAL_POSITION_INT", 33 }, { "GLOBAL_POSITION_INT_COV", 63 }, { "GLOBAL_VISION_POSITION_ESTIMATE", 101 }, { "GOPRO_GET_REQUEST", 216 }, { "GOPRO_GET_RESPONSE", 217 }, { "GOPRO_HEARTBEAT", 215 }, { "GOPRO_SET_REQUEST", 218 }, { "GOPRO_SET_RESPONSE", 219 }, { "GPS2_RAW", 124 }, { "GPS2_RTK", 128 }, { "GPS_GLOBAL_ORIGIN", 49 }, { "GPS_INJECT_DATA", 123 }, { "GPS_INPUT", 232 }, { "GPS_RAW_INT", 24 }, { "GPS_RTCM_DATA", 233 }, { "GPS_RTK", 127 }, { "GPS_STATUS", 25 }, { "HEARTBEAT", 0 }, { "HIGHRES_IMU", 105 }, { "HIGH_LATENCY", 234 }, { "HIGH_LATENCY2", 235 }, { "HIL_ACTUATOR_CONTROLS", 93 }, { "HIL_CONTROLS", 91 }, { "HIL_GPS", 113 }, { "HIL_OPTICAL_FLOW", 114 }, { "HIL_RC_INPUTS_RAW", 92 }, { "HIL_SENSOR", 107 }, { "HIL_STATE", 90 }, { "HIL_STATE_QUATERNION", 115 }, { "HOME_POSITION", 242 }, { "HWSTATUS", 165 }, { "LANDING_TARGET", 149 }, { "LED_CONTROL", 186 }, { "LIMITS_STATUS", 167 }, { "LINK_NODE_STATUS", 8 }, { "LOCAL_POSITION_NED", 32 }, { "LOCAL_POSITION_NED_COV", 64 }, { "LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET", 89 }, { "LOG_DATA", 120 }, { "LOG_ENTRY", 118 }, { "LOG_ERASE", 121 }, { "LOG_REQUEST_DATA", 119 }, { "LOG_REQUEST_END", 122 }, { "LOG_REQUEST_LIST", 117 }, { "MAG_CAL_PROGRESS", 191 }, { "MAG_CAL_REPORT", 192 }, { "MANUAL_CONTROL", 69 }, { "MANUAL_SETPOINT", 81 }, { "MEMINFO", 152 }, { "MEMORY_VECT", 249 }, { "MESSAGE_INTERVAL", 244 }, { "MISSION_ACK", 47 }, { "MISSION_CLEAR_ALL", 45 }, { "MISSION_COUNT", 44 }, { "MISSION_CURRENT", 42 }, { "MISSION_ITEM", 39 }, { "MISSION_ITEM_INT", 73 }, { "MISSION_ITEM_REACHED", 46 }, { "MISSION_REQUEST", 40 }, { "MISSION_REQUEST_INT", 51 }, { "MISSION_REQUEST_LIST", 43 }, { "MISSION_REQUEST_PARTIAL_LIST", 37 }, { "MISSION_SET_CURRENT", 41 }, { "MISSION_WRITE_PARTIAL_LIST", 38 }, { "MOUNT_CONFIGURE", 156 }, { "MOUNT_CONTROL", 157 }, { "MOUNT_STATUS", 158 }, { "NAMED_VALUE_FLOAT", 251 }, { "NAMED_VALUE_INT", 252 }, { "NAV_CONTROLLER_OUTPUT", 62 }, { "OPTICAL_FLOW", 100 }, { "OPTICAL_FLOW_RAD", 106 }, { "PARAM_MAP_RC", 50 }, { "PARAM_REQUEST_LIST", 21 }, { "PARAM_REQUEST_READ", 20 }, { "PARAM_SET", 23 }, { "PARAM_VALUE", 22 }, { "PID_TUNING", 194 }, { "PING", 4 }, { "POSITION_TARGET_GLOBAL_INT", 87 }, { "POSITION_TARGET_LOCAL_NED", 85 }, { "POWER_STATUS", 125 }, { "RADIO", 166 }, { "RADIO_STATUS", 109 }, { "RALLY_FETCH_POINT", 176 }, { "RALLY_POINT", 175 }, { "RANGEFINDER", 173 }, { "RAW_IMU", 27 }, { "RAW_PRESSURE", 28 }, { "RC_CHANNELS", 65 }, { "RC_CHANNELS_OVERRIDE", 70 }, { "RC_CHANNELS_RAW", 35 }, { "RC_CHANNELS_SCALED", 34 }, { "REMOTE_LOG_BLOCK_STATUS", 185 }, { "REMOTE_LOG_DATA_BLOCK", 184 }, { "REQUEST_DATA_STREAM", 66 }, { "RESOURCE_REQUEST", 142 }, { "RPM", 226 }, { "SAFETY_ALLOWED_AREA", 55 }, { "SAFETY_SET_ALLOWED_AREA", 54 }, { "SCALED_IMU", 26 }, { "SCALED_IMU2", 116 }, { "SCALED_IMU3", 129 }, { "SCALED_PRESSURE", 29 }, { "SCALED_PRESSURE2", 137 }, { "SCALED_PRESSURE3", 143 }, { "SENSOR_OFFSETS", 150 }, { "SERIAL_CONTROL", 126 }, { "SERVO_OUTPUT_RAW", 36 }, { "SET_ACTUATOR_CONTROL_TARGET", 139 }, { "SET_ATTITUDE_TARGET", 82 }, { "SET_GPS_GLOBAL_ORIGIN", 48 }, { "SET_HOME_POSITION", 243 }, { "SET_MAG_OFFSETS", 151 }, { "SET_MODE", 11 }, { "SET_POSITION_TARGET_GLOBAL_INT", 86 }, { "SET_POSITION_TARGET_LOCAL_NED", 84 }, { "SIMSTATE", 164 }, { "SIM_STATE", 108 }, { "STATUSTEXT", 253 }, { "SYSTEM_TIME", 2 }, { "SYS_STATUS", 1 }, { "TERRAIN_CHECK", 135 }, { "TERRAIN_DATA", 134 }, { "TERRAIN_REPORT", 136 }, { "TERRAIN_REQUEST", 133 }, { "TIMESYNC", 111 }, { "V2_EXTENSION", 248 }, { "VFR_HUD", 74 }, { "VIBRATION", 241 }, { "VICON_POSITION_ESTIMATE", 104 }, { "VISION_POSITION_ESTIMATE", 102 }, { "VISION_SPEED_ESTIMATE", 103 }, { "WIND", 168 }, { "WIND_COV", 231 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ARDUPILOTMEGA_H
