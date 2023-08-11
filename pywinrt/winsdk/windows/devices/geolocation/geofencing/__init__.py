# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Geolocation.Geofencing")

try:
    import winsdk.windows.devices.geolocation
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class GeofenceMonitorStatus(enum.IntEnum):
    READY = 0
    INITIALIZING = 1
    NO_DATA = 2
    DISABLED = 3
    NOT_INITIALIZED = 4
    NOT_AVAILABLE = 5

class GeofenceRemovalReason(enum.IntEnum):
    USED = 0
    EXPIRED = 1

class GeofenceState(enum.IntFlag):
    NONE = 0
    ENTERED = 0x1
    EXITED = 0x2
    REMOVED = 0x4

class MonitoredGeofenceStates(enum.IntFlag):
    NONE = 0
    ENTERED = 0x1
    EXITED = 0x2
    REMOVED = 0x4

_ns_module._register_GeofenceMonitorStatus(GeofenceMonitorStatus)
_ns_module._register_GeofenceRemovalReason(GeofenceRemovalReason)
_ns_module._register_GeofenceState(GeofenceState)
_ns_module._register_MonitoredGeofenceStates(MonitoredGeofenceStates)

Geofence = _ns_module.Geofence
GeofenceMonitor = _ns_module.GeofenceMonitor
GeofenceStateChangeReport = _ns_module.GeofenceStateChangeReport
