# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics.display

class AccelerometerReadingType(enum.IntEnum):
    STANDARD = 0
    LINEAR = 1
    GRAVITY = 2

class ActivitySensorReadingConfidence(enum.IntEnum):
    HIGH = 0
    LOW = 1

class ActivityType(enum.IntEnum):
    UNKNOWN = 0
    IDLE = 1
    STATIONARY = 2
    FIDGETING = 3
    WALKING = 4
    RUNNING = 5
    IN_VEHICLE = 6
    BIKING = 7

class HumanEngagement(enum.IntEnum):
    UNKNOWN = 0
    ENGAGED = 1
    UNENGAGED = 2

class HumanPresence(enum.IntEnum):
    UNKNOWN = 0
    PRESENT = 1
    NOT_PRESENT = 2

class MagnetometerAccuracy(enum.IntEnum):
    UNKNOWN = 0
    UNRELIABLE = 1
    APPROXIMATE = 2
    HIGH = 3

class PedometerStepKind(enum.IntEnum):
    UNKNOWN = 0
    WALKING = 1
    RUNNING = 2

class SensorOptimizationGoal(enum.IntEnum):
    PRECISION = 0
    POWER_EFFICIENCY = 1

class SensorReadingType(enum.IntEnum):
    ABSOLUTE = 0
    RELATIVE = 1

class SensorType(enum.IntEnum):
    ACCELEROMETER = 0
    ACTIVITY_SENSOR = 1
    BAROMETER = 2
    COMPASS = 3
    CUSTOM_SENSOR = 4
    GYROSCOPE = 5
    PROXIMITY_SENSOR = 6
    INCLINOMETER = 7
    LIGHT_SENSOR = 8
    ORIENTATION_SENSOR = 9
    PEDOMETER = 10
    RELATIVE_INCLINOMETER = 11
    RELATIVE_ORIENTATION_SENSOR = 12
    SIMPLE_ORIENTATION_SENSOR = 13

class SimpleOrientation(enum.IntEnum):
    NOT_ROTATED = 0
    ROTATED90_DEGREES_COUNTERCLOCKWISE = 1
    ROTATED180_DEGREES_COUNTERCLOCKWISE = 2
    ROTATED270_DEGREES_COUNTERCLOCKWISE = 3
    FACEUP = 4
    FACEDOWN = 5

Self = typing.TypeVar('Self')

class Accelerometer(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    minimum_report_interval: winsdk.system.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    reading_type: AccelerometerReadingType
    report_threshold: typing.Optional[AccelerometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Accelerometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Accelerometer]: ...
    def get_current_reading(self) -> typing.Optional[AccelerometerReading]: ...
    @typing.overload
    @staticmethod
    def get_default() -> typing.Optional[Accelerometer]: ...
    @typing.overload
    @staticmethod
    def get_default(reading_type: AccelerometerReadingType) -> typing.Optional[Accelerometer]: ...
    @staticmethod
    def get_device_selector(reading_type: AccelerometerReadingType) -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Accelerometer, AccelerometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_shaken(self, handler: winsdk.windows.foundation.TypedEventHandler[Accelerometer, AccelerometerShakenEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_shaken(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AccelerometerDataThreshold(winsdk.system.Object):
    z_axis_in_g_force: winsdk.system.Double
    y_axis_in_g_force: winsdk.system.Double
    x_axis_in_g_force: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AccelerometerDataThreshold: ...

class AccelerometerReading(winsdk.system.Object):
    acceleration_x: winsdk.system.Double
    acceleration_y: winsdk.system.Double
    acceleration_z: winsdk.system.Double
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AccelerometerReading: ...

class AccelerometerReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[AccelerometerReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AccelerometerReadingChangedEventArgs: ...

class AccelerometerShakenEventArgs(winsdk.system.Object):
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AccelerometerShakenEventArgs: ...

class ActivitySensor(winsdk.system.Object):
    device_id: str
    minimum_report_interval: winsdk.system.UInt32
    power_in_milliwatts: winsdk.system.Double
    subscribed_activities: typing.Optional[winsdk.windows.foundation.collections.IVector[ActivityType]]
    supported_activities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ActivityType]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ActivitySensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[ActivitySensor]: ...
    def get_current_reading_async(self) -> winsdk.windows.foundation.IAsyncOperation[ActivitySensorReading]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[ActivitySensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReading]]: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: datetime.datetime, duration: datetime.timedelta) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReading]]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ActivitySensor, ActivitySensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ActivitySensorReading(winsdk.system.Object):
    activity: ActivityType
    confidence: ActivitySensorReadingConfidence
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ActivitySensorReading: ...

class ActivitySensorReadingChangeReport(winsdk.system.Object):
    reading: typing.Optional[ActivitySensorReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ActivitySensorReadingChangeReport: ...

class ActivitySensorReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[ActivitySensorReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ActivitySensorReadingChangedEventArgs: ...

class ActivitySensorTriggerDetails(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ActivitySensorTriggerDetails: ...
    def read_reports(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReadingChangeReport]]: ...

class Altimeter(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    device_id: str
    minimum_report_interval: winsdk.system.UInt32
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Altimeter: ...
    def get_current_reading(self) -> typing.Optional[AltimeterReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Altimeter]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Altimeter, AltimeterReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AltimeterReading(winsdk.system.Object):
    altitude_change_in_meters: winsdk.system.Double
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AltimeterReading: ...

class AltimeterReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[AltimeterReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AltimeterReadingChangedEventArgs: ...

class Barometer(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    device_id: str
    minimum_report_interval: winsdk.system.UInt32
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    report_threshold: typing.Optional[BarometerDataThreshold]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Barometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Barometer]: ...
    def get_current_reading(self) -> typing.Optional[BarometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Barometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Barometer, BarometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class BarometerDataThreshold(winsdk.system.Object):
    hectopascals: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarometerDataThreshold: ...

class BarometerReading(winsdk.system.Object):
    station_pressure_in_hectopascals: winsdk.system.Double
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarometerReading: ...

class BarometerReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[BarometerReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarometerReadingChangedEventArgs: ...

class Compass(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    minimum_report_interval: winsdk.system.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    report_threshold: typing.Optional[CompassDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Compass: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Compass]: ...
    def get_current_reading(self) -> typing.Optional[CompassReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Compass]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Compass, CompassReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CompassDataThreshold(winsdk.system.Object):
    degrees: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CompassDataThreshold: ...

class CompassReading(winsdk.system.Object):
    heading_magnetic_north: winsdk.system.Double
    heading_true_north: typing.Optional[typing.Optional[winsdk.system.Double]]
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    heading_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CompassReading: ...

class CompassReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[CompassReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CompassReadingChangedEventArgs: ...

class Gyrometer(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    minimum_report_interval: winsdk.system.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    report_threshold: typing.Optional[GyrometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Gyrometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Gyrometer]: ...
    def get_current_reading(self) -> typing.Optional[GyrometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Gyrometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Gyrometer, GyrometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GyrometerDataThreshold(winsdk.system.Object):
    z_axis_in_degrees_per_second: winsdk.system.Double
    y_axis_in_degrees_per_second: winsdk.system.Double
    x_axis_in_degrees_per_second: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GyrometerDataThreshold: ...

class GyrometerReading(winsdk.system.Object):
    angular_velocity_x: winsdk.system.Double
    angular_velocity_y: winsdk.system.Double
    angular_velocity_z: winsdk.system.Double
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GyrometerReading: ...

class GyrometerReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[GyrometerReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GyrometerReadingChangedEventArgs: ...

class HingeAngleReading(winsdk.system.Object):
    angle_in_degrees: winsdk.system.Double
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HingeAngleReading: ...

class HingeAngleSensor(winsdk.system.Object):
    report_threshold_in_degrees: winsdk.system.Double
    device_id: str
    min_report_threshold_in_degrees: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HingeAngleSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[HingeAngleSensor]: ...
    def get_current_reading_async(self) -> winsdk.windows.foundation.IAsyncOperation[HingeAngleReading]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[HingeAngleSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @staticmethod
    def get_related_to_adjacent_panels_async(first_panel_id: str, second_panel_id: str) -> winsdk.windows.foundation.IAsyncOperation[HingeAngleSensor]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[HingeAngleSensor, HingeAngleSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HingeAngleSensorReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[HingeAngleReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HingeAngleSensorReadingChangedEventArgs: ...

class HumanPresenceFeatures(winsdk.system.Object):
    is_attention_aware_dimming_supported: winsdk.system.Boolean
    is_lock_on_leave_supported: winsdk.system.Boolean
    is_wake_on_approach_supported: winsdk.system.Boolean
    sensor_id: str
    supported_wake_or_lock_distances_in_millimeters: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.system.UInt32]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HumanPresenceFeatures: ...

class HumanPresenceSensor(winsdk.system.Object):
    device_id: str
    max_detectable_distance_in_millimeters: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    min_detectable_distance_in_millimeters: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HumanPresenceSensor: ...
    @staticmethod
    def from_id_async(sensor_id: str) -> winsdk.windows.foundation.IAsyncOperation[HumanPresenceSensor]: ...
    def get_current_reading(self) -> typing.Optional[HumanPresenceSensorReading]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[HumanPresenceSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[HumanPresenceSensor, HumanPresenceSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HumanPresenceSensorReading(winsdk.system.Object):
    distance_in_millimeters: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    engagement: HumanEngagement
    presence: HumanPresence
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HumanPresenceSensorReading: ...

class HumanPresenceSensorReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[HumanPresenceSensorReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HumanPresenceSensorReadingChangedEventArgs: ...

class HumanPresenceSettings(winsdk.system.Object):
    wake_on_approach_distance_in_millimeters: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    sensor_id: str
    lock_on_leave_timeout: datetime.timedelta
    lock_on_leave_distance_in_millimeters: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    is_wake_on_approach_enabled: winsdk.system.Boolean
    is_lock_on_leave_enabled: winsdk.system.Boolean
    is_attention_aware_dimming_enabled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HumanPresenceSettings: ...
    @staticmethod
    def get_current_settings() -> typing.Optional[HumanPresenceSettings]: ...
    @staticmethod
    def get_current_settings_async() -> winsdk.windows.foundation.IAsyncOperation[HumanPresenceSettings]: ...
    @staticmethod
    def get_supported_features_for_sensor_id(sensor_id: str) -> typing.Optional[HumanPresenceFeatures]: ...
    @staticmethod
    def get_supported_features_for_sensor_id_async(sensor_id: str) -> winsdk.windows.foundation.IAsyncOperation[HumanPresenceFeatures]: ...
    @staticmethod
    def get_supported_lock_on_leave_timeouts() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[datetime.timedelta]]: ...
    @staticmethod
    def update_settings(settings: typing.Optional[HumanPresenceSettings]) -> None: ...
    @staticmethod
    def update_settings_async(settings: typing.Optional[HumanPresenceSettings]) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def add_settings_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_settings_changed(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class Inclinometer(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    minimum_report_interval: winsdk.system.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    reading_type: SensorReadingType
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    report_threshold: typing.Optional[InclinometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Inclinometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Inclinometer]: ...
    def get_current_reading(self) -> typing.Optional[InclinometerReading]: ...
    @typing.overload
    @staticmethod
    def get_default() -> typing.Optional[Inclinometer]: ...
    @typing.overload
    @staticmethod
    def get_default(sensor_readingtype: SensorReadingType) -> typing.Optional[Inclinometer]: ...
    @staticmethod
    def get_default_for_relative_readings() -> typing.Optional[Inclinometer]: ...
    @staticmethod
    def get_device_selector(reading_type: SensorReadingType) -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Inclinometer, InclinometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class InclinometerDataThreshold(winsdk.system.Object):
    yaw_in_degrees: winsdk.system.Single
    roll_in_degrees: winsdk.system.Single
    pitch_in_degrees: winsdk.system.Single
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InclinometerDataThreshold: ...

class InclinometerReading(winsdk.system.Object):
    pitch_degrees: winsdk.system.Single
    roll_degrees: winsdk.system.Single
    timestamp: datetime.datetime
    yaw_degrees: winsdk.system.Single
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    yaw_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InclinometerReading: ...

class InclinometerReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[InclinometerReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InclinometerReadingChangedEventArgs: ...

class LightSensor(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    minimum_report_interval: winsdk.system.UInt32
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    report_threshold: typing.Optional[LightSensorDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LightSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[LightSensor]: ...
    def get_current_reading(self) -> typing.Optional[LightSensorReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[LightSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[LightSensor, LightSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class LightSensorDataThreshold(winsdk.system.Object):
    lux_percentage: winsdk.system.Single
    absolute_lux: winsdk.system.Single
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LightSensorDataThreshold: ...

class LightSensorReading(winsdk.system.Object):
    illuminance_in_lux: winsdk.system.Single
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LightSensorReading: ...

class LightSensorReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[LightSensorReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LightSensorReadingChangedEventArgs: ...

class Magnetometer(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    minimum_report_interval: winsdk.system.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    report_threshold: typing.Optional[MagnetometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Magnetometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Magnetometer]: ...
    def get_current_reading(self) -> typing.Optional[MagnetometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Magnetometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Magnetometer, MagnetometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MagnetometerDataThreshold(winsdk.system.Object):
    z_axis_microteslas: winsdk.system.Single
    y_axis_microteslas: winsdk.system.Single
    x_axis_microteslas: winsdk.system.Single
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MagnetometerDataThreshold: ...

class MagnetometerReading(winsdk.system.Object):
    directional_accuracy: MagnetometerAccuracy
    magnetic_field_x: winsdk.system.Single
    magnetic_field_y: winsdk.system.Single
    magnetic_field_z: winsdk.system.Single
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MagnetometerReading: ...

class MagnetometerReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[MagnetometerReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MagnetometerReadingChangedEventArgs: ...

class OrientationSensor(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    minimum_report_interval: winsdk.system.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    reading_type: SensorReadingType
    report_latency: winsdk.system.UInt32
    max_batch_size: winsdk.system.UInt32
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OrientationSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[OrientationSensor]: ...
    def get_current_reading(self) -> typing.Optional[OrientationSensorReading]: ...
    @typing.overload
    @staticmethod
    def get_default() -> typing.Optional[OrientationSensor]: ...
    @typing.overload
    @staticmethod
    def get_default(sensor_readingtype: SensorReadingType) -> typing.Optional[OrientationSensor]: ...
    @typing.overload
    @staticmethod
    def get_default(sensor_reading_type: SensorReadingType, optimization_goal: SensorOptimizationGoal) -> typing.Optional[OrientationSensor]: ...
    @staticmethod
    def get_default_for_relative_readings() -> typing.Optional[OrientationSensor]: ...
    @typing.overload
    @staticmethod
    def get_device_selector(reading_type: SensorReadingType) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(reading_type: SensorReadingType, optimization_goal: SensorOptimizationGoal) -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[OrientationSensor, OrientationSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class OrientationSensorReading(winsdk.system.Object):
    quaternion: typing.Optional[SensorQuaternion]
    rotation_matrix: typing.Optional[SensorRotationMatrix]
    timestamp: datetime.datetime
    performance_count: typing.Optional[typing.Optional[datetime.timedelta]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    yaw_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OrientationSensorReading: ...

class OrientationSensorReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[OrientationSensorReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OrientationSensorReadingChangedEventArgs: ...

class Pedometer(winsdk.system.Object):
    report_interval: winsdk.system.UInt32
    device_id: str
    minimum_report_interval: winsdk.system.UInt32
    power_in_milliwatts: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Pedometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Pedometer]: ...
    def get_current_readings(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[PedometerStepKind, PedometerReading]]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[Pedometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @staticmethod
    def get_readings_from_trigger_details(trigger_details: typing.Optional[SensorDataThresholdTriggerDetails]) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[PedometerReading]]: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: datetime.datetime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PedometerReading]]: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: datetime.datetime, duration: datetime.timedelta) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PedometerReading]]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Pedometer, PedometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PedometerDataThreshold(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PedometerDataThreshold: ...
    def __new__(cls: typing.Type[PedometerDataThreshold], sensor: typing.Optional[Pedometer], step_goal: winsdk.system.Int32) -> PedometerDataThreshold:...

class PedometerReading(winsdk.system.Object):
    cumulative_steps: winsdk.system.Int32
    cumulative_steps_duration: datetime.timedelta
    step_kind: PedometerStepKind
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PedometerReading: ...

class PedometerReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[PedometerReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PedometerReadingChangedEventArgs: ...

class ProximitySensor(winsdk.system.Object):
    device_id: str
    max_distance_in_millimeters: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    min_distance_in_millimeters: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProximitySensor: ...
    def create_display_on_off_controller(self) -> typing.Optional[ProximitySensorDisplayOnOffController]: ...
    @staticmethod
    def from_id(sensor_id: str) -> typing.Optional[ProximitySensor]: ...
    def get_current_reading(self) -> typing.Optional[ProximitySensorReading]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @staticmethod
    def get_readings_from_trigger_details(trigger_details: typing.Optional[SensorDataThresholdTriggerDetails]) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ProximitySensorReading]]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ProximitySensor, ProximitySensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ProximitySensorDataThreshold(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProximitySensorDataThreshold: ...
    def __new__(cls: typing.Type[ProximitySensorDataThreshold], sensor: typing.Optional[ProximitySensor]) -> ProximitySensorDataThreshold:...

class ProximitySensorDisplayOnOffController(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProximitySensorDisplayOnOffController: ...
    def close(self) -> None: ...

class ProximitySensorReading(winsdk.system.Object):
    distance_in_millimeters: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    is_detected: winsdk.system.Boolean
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProximitySensorReading: ...

class ProximitySensorReadingChangedEventArgs(winsdk.system.Object):
    reading: typing.Optional[ProximitySensorReading]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProximitySensorReadingChangedEventArgs: ...

class SensorDataThresholdTriggerDetails(winsdk.system.Object):
    device_id: str
    sensor_type: SensorType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SensorDataThresholdTriggerDetails: ...

class SensorQuaternion(winsdk.system.Object):
    w: winsdk.system.Single
    x: winsdk.system.Single
    y: winsdk.system.Single
    z: winsdk.system.Single
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SensorQuaternion: ...

class SensorRotationMatrix(winsdk.system.Object):
    m11: winsdk.system.Single
    m12: winsdk.system.Single
    m13: winsdk.system.Single
    m21: winsdk.system.Single
    m22: winsdk.system.Single
    m23: winsdk.system.Single
    m31: winsdk.system.Single
    m32: winsdk.system.Single
    m33: winsdk.system.Single
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SensorRotationMatrix: ...

class SimpleOrientationSensor(winsdk.system.Object):
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SimpleOrientationSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[SimpleOrientationSensor]: ...
    def get_current_orientation(self) -> SimpleOrientation: ...
    @staticmethod
    def get_default() -> typing.Optional[SimpleOrientationSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_orientation_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[SimpleOrientationSensor, SimpleOrientationSensorOrientationChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_orientation_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SimpleOrientationSensorOrientationChangedEventArgs(winsdk.system.Object):
    orientation: SimpleOrientation
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SimpleOrientationSensorOrientationChangedEventArgs: ...

class ISensorDataThreshold(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ISensorDataThreshold: ...

