# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Services.Maps")

try:
    import winsdk.windows.devices.geolocation
except Exception:
    pass

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.ui.popups
except Exception:
    pass

class ManeuverWarningKind(enum.IntEnum):
    NONE = 0
    ACCIDENT = 1
    ADMINISTRATIVE_DIVISION_CHANGE = 2
    ALERT = 3
    BLOCKED_ROAD = 4
    CHECK_TIMETABLE = 5
    CONGESTION = 6
    CONSTRUCTION = 7
    COUNTRY_CHANGE = 8
    DISABLED_VEHICLE = 9
    GATE_ACCESS = 10
    GET_OFF_TRANSIT = 11
    GET_ON_TRANSIT = 12
    ILLEGAL_U_TURN = 13
    MASS_TRANSIT = 14
    MISCELLANEOUS = 15
    NO_INCIDENT = 16
    OTHER = 17
    OTHER_NEWS = 18
    OTHER_TRAFFIC_INCIDENTS = 19
    PLANNED_EVENT = 20
    PRIVATE_ROAD = 21
    RESTRICTED_TURN = 22
    ROAD_CLOSURES = 23
    ROAD_HAZARD = 24
    SCHEDULED_CONSTRUCTION = 25
    SEASONAL_CLOSURES = 26
    TOLLBOOTH = 27
    TOLL_ROAD = 28
    TOLL_ZONE_ENTER = 29
    TOLL_ZONE_EXIT = 30
    TRAFFIC_FLOW = 31
    TRANSIT_LINE_CHANGE = 32
    UNPAVED_ROAD = 33
    UNSCHEDULED_CONSTRUCTION = 34
    WEATHER = 35

class ManeuverWarningSeverity(enum.IntEnum):
    NONE = 0
    LOW_IMPACT = 1
    MINOR = 2
    MODERATE = 3
    SERIOUS = 4

class MapLocationDesiredAccuracy(enum.IntEnum):
    HIGH = 0
    LOW = 1

class MapLocationFinderStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    INVALID_CREDENTIALS = 2
    BAD_LOCATION = 3
    INDEX_FAILURE = 4
    NETWORK_FAILURE = 5
    NOT_SUPPORTED = 6

class MapManeuverNotices(enum.IntFlag):
    NONE = 0
    TOLL = 0x1
    UNPAVED = 0x2

class MapRouteFinderStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    INVALID_CREDENTIALS = 2
    NO_ROUTE_FOUND = 3
    NO_ROUTE_FOUND_WITH_GIVEN_OPTIONS = 4
    START_POINT_NOT_FOUND = 5
    END_POINT_NOT_FOUND = 6
    NO_PEDESTRIAN_ROUTE_FOUND = 7
    NETWORK_FAILURE = 8
    NOT_SUPPORTED = 9

class MapRouteManeuverKind(enum.IntEnum):
    NONE = 0
    START = 1
    STOPOVER = 2
    STOPOVER_RESUME = 3
    END = 4
    GO_STRAIGHT = 5
    U_TURN_LEFT = 6
    U_TURN_RIGHT = 7
    TURN_KEEP_LEFT = 8
    TURN_KEEP_RIGHT = 9
    TURN_LIGHT_LEFT = 10
    TURN_LIGHT_RIGHT = 11
    TURN_LEFT = 12
    TURN_RIGHT = 13
    TURN_HARD_LEFT = 14
    TURN_HARD_RIGHT = 15
    FREEWAY_ENTER_LEFT = 16
    FREEWAY_ENTER_RIGHT = 17
    FREEWAY_LEAVE_LEFT = 18
    FREEWAY_LEAVE_RIGHT = 19
    FREEWAY_CONTINUE_LEFT = 20
    FREEWAY_CONTINUE_RIGHT = 21
    TRAFFIC_CIRCLE_LEFT = 22
    TRAFFIC_CIRCLE_RIGHT = 23
    TAKE_FERRY = 24

class MapRouteOptimization(enum.IntEnum):
    TIME = 0
    DISTANCE = 1
    TIME_WITH_TRAFFIC = 2
    SCENIC = 3

class MapRouteRestrictions(enum.IntFlag):
    NONE = 0
    HIGHWAYS = 0x1
    TOLL_ROADS = 0x2
    FERRIES = 0x4
    TUNNELS = 0x8
    DIRT_ROADS = 0x10
    MOTORAIL = 0x20

class MapServiceDataUsagePreference(enum.IntEnum):
    DEFAULT = 0
    OFFLINE_MAP_DATA_ONLY = 1

class TrafficCongestion(enum.IntEnum):
    UNKNOWN = 0
    LIGHT = 1
    MILD = 2
    MEDIUM = 3
    HEAVY = 4

class WaypointKind(enum.IntEnum):
    STOP = 0
    VIA = 1

EnhancedWaypoint = _ns_module.EnhancedWaypoint
ManeuverWarning = _ns_module.ManeuverWarning
MapAddress = _ns_module.MapAddress
MapLocation = _ns_module.MapLocation
MapLocationFinder = _ns_module.MapLocationFinder
MapLocationFinderResult = _ns_module.MapLocationFinderResult
MapManager = _ns_module.MapManager
MapRoute = _ns_module.MapRoute
MapRouteDrivingOptions = _ns_module.MapRouteDrivingOptions
MapRouteFinder = _ns_module.MapRouteFinder
MapRouteFinderResult = _ns_module.MapRouteFinderResult
MapRouteLeg = _ns_module.MapRouteLeg
MapRouteManeuver = _ns_module.MapRouteManeuver
MapService = _ns_module.MapService
PlaceInfo = _ns_module.PlaceInfo
PlaceInfoCreateOptions = _ns_module.PlaceInfoCreateOptions
