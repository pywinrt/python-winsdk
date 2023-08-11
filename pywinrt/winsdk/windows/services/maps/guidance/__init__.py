# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Services.Maps.Guidance")

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

try:
    import winsdk.windows.services.maps
except ImportError:
    pass

try:
    import winsdk.windows.ui
except ImportError:
    pass

class GuidanceAudioMeasurementSystem(enum.IntEnum):
    METERS = 0
    MILES_AND_YARDS = 1
    MILES_AND_FEET = 2

class GuidanceAudioNotificationKind(enum.IntEnum):
    MANEUVER = 0
    ROUTE = 1
    GPS = 2
    SPEED_LIMIT = 3
    TRAFFIC = 4
    TRAFFIC_CAMERA = 5

class GuidanceAudioNotifications(enum.IntFlag):
    NONE = 0
    MANEUVER = 0x1
    ROUTE = 0x2
    GPS = 0x4
    SPEED_LIMIT = 0x8
    TRAFFIC = 0x10
    TRAFFIC_CAMERA = 0x20

class GuidanceLaneMarkers(enum.IntFlag):
    NONE = 0
    LIGHT_RIGHT = 0x1
    RIGHT = 0x2
    HARD_RIGHT = 0x4
    STRAIGHT = 0x8
    U_TURN_LEFT = 0x10
    HARD_LEFT = 0x20
    LEFT = 0x40
    LIGHT_LEFT = 0x80
    U_TURN_RIGHT = 0x100
    UNKNOWN = 0xffffffff

class GuidanceManeuverKind(enum.IntEnum):
    NONE = 0
    GO_STRAIGHT = 1
    U_TURN_RIGHT = 2
    U_TURN_LEFT = 3
    TURN_KEEP_RIGHT = 4
    TURN_LIGHT_RIGHT = 5
    TURN_RIGHT = 6
    TURN_HARD_RIGHT = 7
    KEEP_MIDDLE = 8
    TURN_KEEP_LEFT = 9
    TURN_LIGHT_LEFT = 10
    TURN_LEFT = 11
    TURN_HARD_LEFT = 12
    FREEWAY_ENTER_RIGHT = 13
    FREEWAY_ENTER_LEFT = 14
    FREEWAY_LEAVE_RIGHT = 15
    FREEWAY_LEAVE_LEFT = 16
    FREEWAY_KEEP_RIGHT = 17
    FREEWAY_KEEP_LEFT = 18
    TRAFFIC_CIRCLE_RIGHT1 = 19
    TRAFFIC_CIRCLE_RIGHT2 = 20
    TRAFFIC_CIRCLE_RIGHT3 = 21
    TRAFFIC_CIRCLE_RIGHT4 = 22
    TRAFFIC_CIRCLE_RIGHT5 = 23
    TRAFFIC_CIRCLE_RIGHT6 = 24
    TRAFFIC_CIRCLE_RIGHT7 = 25
    TRAFFIC_CIRCLE_RIGHT8 = 26
    TRAFFIC_CIRCLE_RIGHT9 = 27
    TRAFFIC_CIRCLE_RIGHT10 = 28
    TRAFFIC_CIRCLE_RIGHT11 = 29
    TRAFFIC_CIRCLE_RIGHT12 = 30
    TRAFFIC_CIRCLE_LEFT1 = 31
    TRAFFIC_CIRCLE_LEFT2 = 32
    TRAFFIC_CIRCLE_LEFT3 = 33
    TRAFFIC_CIRCLE_LEFT4 = 34
    TRAFFIC_CIRCLE_LEFT5 = 35
    TRAFFIC_CIRCLE_LEFT6 = 36
    TRAFFIC_CIRCLE_LEFT7 = 37
    TRAFFIC_CIRCLE_LEFT8 = 38
    TRAFFIC_CIRCLE_LEFT9 = 39
    TRAFFIC_CIRCLE_LEFT10 = 40
    TRAFFIC_CIRCLE_LEFT11 = 41
    TRAFFIC_CIRCLE_LEFT12 = 42
    START = 43
    END = 44
    TAKE_FERRY = 45
    PASS_TRANSIT_STATION = 46
    LEAVE_TRANSIT_STATION = 47

class GuidanceMode(enum.IntEnum):
    NONE = 0
    SIMULATION = 1
    NAVIGATION = 2
    TRACKING = 3

_ns_module._register_GuidanceAudioMeasurementSystem(GuidanceAudioMeasurementSystem)
_ns_module._register_GuidanceAudioNotificationKind(GuidanceAudioNotificationKind)
_ns_module._register_GuidanceAudioNotifications(GuidanceAudioNotifications)
_ns_module._register_GuidanceLaneMarkers(GuidanceLaneMarkers)
_ns_module._register_GuidanceManeuverKind(GuidanceManeuverKind)
_ns_module._register_GuidanceMode(GuidanceMode)

GuidanceAudioNotificationRequestedEventArgs = _ns_module.GuidanceAudioNotificationRequestedEventArgs
GuidanceLaneInfo = _ns_module.GuidanceLaneInfo
GuidanceManeuver = _ns_module.GuidanceManeuver
GuidanceMapMatchedCoordinate = _ns_module.GuidanceMapMatchedCoordinate
GuidanceNavigator = _ns_module.GuidanceNavigator
GuidanceReroutedEventArgs = _ns_module.GuidanceReroutedEventArgs
GuidanceRoadSegment = _ns_module.GuidanceRoadSegment
GuidanceRoadSignpost = _ns_module.GuidanceRoadSignpost
GuidanceRoute = _ns_module.GuidanceRoute
GuidanceTelemetryCollector = _ns_module.GuidanceTelemetryCollector
GuidanceUpdatedEventArgs = _ns_module.GuidanceUpdatedEventArgs
