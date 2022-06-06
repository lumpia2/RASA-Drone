
"use strict";

let MessageInterval = require('./MessageInterval.js')
let ParamPull = require('./ParamPull.js')
let SetMode = require('./SetMode.js')
let FileRename = require('./FileRename.js')
let ParamPush = require('./ParamPush.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let ParamGet = require('./ParamGet.js')
let LogRequestList = require('./LogRequestList.js')
let ParamSet = require('./ParamSet.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileChecksum = require('./FileChecksum.js')
let CommandHome = require('./CommandHome.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let FileTruncate = require('./FileTruncate.js')
let CommandInt = require('./CommandInt.js')
let FileList = require('./FileList.js')
let CommandAck = require('./CommandAck.js')
let CommandTOL = require('./CommandTOL.js')
let LogRequestData = require('./LogRequestData.js')
let FileWrite = require('./FileWrite.js')
let CommandBool = require('./CommandBool.js')
let WaypointPull = require('./WaypointPull.js')
let CommandLong = require('./CommandLong.js')
let FileClose = require('./FileClose.js')
let WaypointClear = require('./WaypointClear.js')
let WaypointPush = require('./WaypointPush.js')
let StreamRate = require('./StreamRate.js')
let MountConfigure = require('./MountConfigure.js')
let FileRead = require('./FileRead.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileRemove = require('./FileRemove.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let FileOpen = require('./FileOpen.js')
let SetMavFrame = require('./SetMavFrame.js')

module.exports = {
  MessageInterval: MessageInterval,
  ParamPull: ParamPull,
  SetMode: SetMode,
  FileRename: FileRename,
  ParamPush: ParamPush,
  CommandVtolTransition: CommandVtolTransition,
  ParamGet: ParamGet,
  LogRequestList: LogRequestList,
  ParamSet: ParamSet,
  LogRequestEnd: LogRequestEnd,
  FileMakeDir: FileMakeDir,
  FileChecksum: FileChecksum,
  CommandHome: CommandHome,
  FileRemoveDir: FileRemoveDir,
  CommandTriggerControl: CommandTriggerControl,
  FileTruncate: FileTruncate,
  CommandInt: CommandInt,
  FileList: FileList,
  CommandAck: CommandAck,
  CommandTOL: CommandTOL,
  LogRequestData: LogRequestData,
  FileWrite: FileWrite,
  CommandBool: CommandBool,
  WaypointPull: WaypointPull,
  CommandLong: CommandLong,
  FileClose: FileClose,
  WaypointClear: WaypointClear,
  WaypointPush: WaypointPush,
  StreamRate: StreamRate,
  MountConfigure: MountConfigure,
  FileRead: FileRead,
  VehicleInfoGet: VehicleInfoGet,
  CommandTriggerInterval: CommandTriggerInterval,
  FileRemove: FileRemove,
  WaypointSetCurrent: WaypointSetCurrent,
  FileOpen: FileOpen,
  SetMavFrame: SetMavFrame,
};
