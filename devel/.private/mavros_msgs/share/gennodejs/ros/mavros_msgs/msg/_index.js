
"use strict";

let PositionTarget = require('./PositionTarget.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let VFR_HUD = require('./VFR_HUD.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let Mavlink = require('./Mavlink.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let RCIn = require('./RCIn.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let CommandCode = require('./CommandCode.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let HilGPS = require('./HilGPS.js');
let Param = require('./Param.js');
let BatteryStatus = require('./BatteryStatus.js');
let State = require('./State.js');
let Vibration = require('./Vibration.js');
let VehicleInfo = require('./VehicleInfo.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let Altitude = require('./Altitude.js');
let ManualControl = require('./ManualControl.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let Tunnel = require('./Tunnel.js');
let GPSINPUT = require('./GPSINPUT.js');
let MountControl = require('./MountControl.js');
let Waypoint = require('./Waypoint.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let ESCInfo = require('./ESCInfo.js');
let DebugValue = require('./DebugValue.js');
let GPSRAW = require('./GPSRAW.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let RTCM = require('./RTCM.js');
let HilControls = require('./HilControls.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let GPSRTK = require('./GPSRTK.js');
let LogEntry = require('./LogEntry.js');
let ESCStatus = require('./ESCStatus.js');
let WaypointReached = require('./WaypointReached.js');
let WaypointList = require('./WaypointList.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let LogData = require('./LogData.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let ExtendedState = require('./ExtendedState.js');
let ParamValue = require('./ParamValue.js');
let Thrust = require('./Thrust.js');
let Trajectory = require('./Trajectory.js');
let FileEntry = require('./FileEntry.js');
let TerrainReport = require('./TerrainReport.js');
let StatusText = require('./StatusText.js');
let HomePosition = require('./HomePosition.js');
let RadioStatus = require('./RadioStatus.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let ActuatorControl = require('./ActuatorControl.js');
let LandingTarget = require('./LandingTarget.js');
let RCOut = require('./RCOut.js');
let RTKBaseline = require('./RTKBaseline.js');
let HilSensor = require('./HilSensor.js');

module.exports = {
  PositionTarget: PositionTarget,
  ESCTelemetryItem: ESCTelemetryItem,
  GlobalPositionTarget: GlobalPositionTarget,
  HilActuatorControls: HilActuatorControls,
  OverrideRCIn: OverrideRCIn,
  VFR_HUD: VFR_HUD,
  CameraImageCaptured: CameraImageCaptured,
  Mavlink: Mavlink,
  MagnetometerReporter: MagnetometerReporter,
  OpticalFlowRad: OpticalFlowRad,
  HilStateQuaternion: HilStateQuaternion,
  CamIMUStamp: CamIMUStamp,
  RCIn: RCIn,
  PlayTuneV2: PlayTuneV2,
  CommandCode: CommandCode,
  OnboardComputerStatus: OnboardComputerStatus,
  HilGPS: HilGPS,
  Param: Param,
  BatteryStatus: BatteryStatus,
  State: State,
  Vibration: Vibration,
  VehicleInfo: VehicleInfo,
  ESCTelemetry: ESCTelemetry,
  Altitude: Altitude,
  ManualControl: ManualControl,
  WheelOdomStamped: WheelOdomStamped,
  Tunnel: Tunnel,
  GPSINPUT: GPSINPUT,
  MountControl: MountControl,
  Waypoint: Waypoint,
  ESCStatusItem: ESCStatusItem,
  ESCInfo: ESCInfo,
  DebugValue: DebugValue,
  GPSRAW: GPSRAW,
  EstimatorStatus: EstimatorStatus,
  RTCM: RTCM,
  HilControls: HilControls,
  TimesyncStatus: TimesyncStatus,
  GPSRTK: GPSRTK,
  LogEntry: LogEntry,
  ESCStatus: ESCStatus,
  WaypointReached: WaypointReached,
  WaypointList: WaypointList,
  NavControllerOutput: NavControllerOutput,
  ADSBVehicle: ADSBVehicle,
  LogData: LogData,
  AttitudeTarget: AttitudeTarget,
  CompanionProcessStatus: CompanionProcessStatus,
  ExtendedState: ExtendedState,
  ParamValue: ParamValue,
  Thrust: Thrust,
  Trajectory: Trajectory,
  FileEntry: FileEntry,
  TerrainReport: TerrainReport,
  StatusText: StatusText,
  HomePosition: HomePosition,
  RadioStatus: RadioStatus,
  ESCInfoItem: ESCInfoItem,
  ActuatorControl: ActuatorControl,
  LandingTarget: LandingTarget,
  RCOut: RCOut,
  RTKBaseline: RTKBaseline,
  HilSensor: HilSensor,
};
