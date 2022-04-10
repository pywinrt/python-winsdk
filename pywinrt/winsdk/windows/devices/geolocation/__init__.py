# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.Geolocation")

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

class AltitudeReferenceSystem(enum.IntEnum):
    UNSPECIFIED = 0
    TERRAIN = 1
    ELLIPSOID = 2
    GEOID = 3
    SURFACE = 4

class GeolocationAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED = 1
    DENIED = 2

class GeoshapeType(enum.IntEnum):
    GEOPOINT = 0
    GEOCIRCLE = 1
    GEOPATH = 2
    GEOBOUNDING_BOX = 3

class PositionAccuracy(enum.IntEnum):
    DEFAULT = 0
    HIGH = 1

class PositionSource(enum.IntEnum):
    CELLULAR = 0
    SATELLITE = 1
    WI_FI = 2
    IP_ADDRESS = 3
    UNKNOWN = 4
    DEFAULT = 5
    OBFUSCATED = 6

class PositionStatus(enum.IntEnum):
    READY = 0
    INITIALIZING = 1
    NO_DATA = 2
    DISABLED = 3
    NOT_INITIALIZED = 4
    NOT_AVAILABLE = 5

class VisitMonitoringScope(enum.IntEnum):
    VENUE = 0
    CITY = 1

class VisitStateChange(enum.IntEnum):
    TRACKING_LOST = 0
    ARRIVED = 1
    DEPARTED = 2
    OTHER_MOVEMENT = 3

BasicGeoposition = _ns_module.BasicGeoposition
CivicAddress = _ns_module.CivicAddress
GeoboundingBox = _ns_module.GeoboundingBox
Geocircle = _ns_module.Geocircle
Geocoordinate = _ns_module.Geocoordinate
GeocoordinateSatelliteData = _ns_module.GeocoordinateSatelliteData
Geolocator = _ns_module.Geolocator
Geopath = _ns_module.Geopath
Geopoint = _ns_module.Geopoint
Geoposition = _ns_module.Geoposition
Geovisit = _ns_module.Geovisit
GeovisitMonitor = _ns_module.GeovisitMonitor
GeovisitStateChangedEventArgs = _ns_module.GeovisitStateChangedEventArgs
GeovisitTriggerDetails = _ns_module.GeovisitTriggerDetails
PositionChangedEventArgs = _ns_module.PositionChangedEventArgs
StatusChangedEventArgs = _ns_module.StatusChangedEventArgs
VenueData = _ns_module.VenueData
IGeoshape = _ns_module.IGeoshape
