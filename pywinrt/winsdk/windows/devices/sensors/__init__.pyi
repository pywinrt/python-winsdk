# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.graphics.display
except Exception:
    pass

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

class Accelerometer(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    reading_type: AccelerometerReadingType
    report_threshold: typing.Optional[AccelerometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Accelerometer: ...
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

class AccelerometerDataThreshold(_winrt.Object, interfaces=[]):
    z_axis_in_g_force: _winrt.Double
    y_axis_in_g_force: _winrt.Double
    x_axis_in_g_force: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> AccelerometerDataThreshold: ...

class AccelerometerReading(_winrt.Object, interfaces=[]):
    acceleration_x: _winrt.Double
    acceleration_y: _winrt.Double
    acceleration_z: _winrt.Double
    timestamp: winsdk.windows.foundation.DateTime
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AccelerometerReading: ...

class AccelerometerReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[AccelerometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> AccelerometerReadingChangedEventArgs: ...

class AccelerometerShakenEventArgs(_winrt.Object, interfaces=[]):
    timestamp: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> AccelerometerShakenEventArgs: ...

class ActivitySensor(_winrt.Object, interfaces=[]):
    device_id: str
    minimum_report_interval: _winrt.UInt32
    power_in_milliwatts: _winrt.Double
    subscribed_activities: typing.Optional[winsdk.windows.foundation.collections.IVector[ActivityType]]
    supported_activities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ActivityType]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[ActivitySensor]: ...
    def get_current_reading_async(self) -> winsdk.windows.foundation.IAsyncOperation[ActivitySensorReading]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[ActivitySensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: winsdk.windows.foundation.DateTime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReading]]: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: winsdk.windows.foundation.DateTime, duration: winsdk.windows.foundation.TimeSpan) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReading]]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ActivitySensor, ActivitySensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ActivitySensorReading(_winrt.Object, interfaces=[]):
    activity: ActivityType
    confidence: ActivitySensorReadingConfidence
    timestamp: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensorReading: ...

class ActivitySensorReadingChangeReport(_winrt.Object, interfaces=[]):
    reading: typing.Optional[ActivitySensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensorReadingChangeReport: ...

class ActivitySensorReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[ActivitySensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensorReadingChangedEventArgs: ...

class ActivitySensorTriggerDetails(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> ActivitySensorTriggerDetails: ...
    def read_reports(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ActivitySensorReadingChangeReport]]: ...

class Altimeter(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    device_id: str
    minimum_report_interval: _winrt.UInt32
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> Altimeter: ...
    def get_current_reading(self) -> typing.Optional[AltimeterReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Altimeter]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Altimeter, AltimeterReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AltimeterReading(_winrt.Object, interfaces=[]):
    altitude_change_in_meters: _winrt.Double
    timestamp: winsdk.windows.foundation.DateTime
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AltimeterReading: ...

class AltimeterReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[AltimeterReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> AltimeterReadingChangedEventArgs: ...

class Barometer(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    device_id: str
    minimum_report_interval: _winrt.UInt32
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[BarometerDataThreshold]
    @staticmethod
    def _from(obj: _winrt.Object) -> Barometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Barometer]: ...
    def get_current_reading(self) -> typing.Optional[BarometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Barometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Barometer, BarometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class BarometerDataThreshold(_winrt.Object, interfaces=[]):
    hectopascals: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> BarometerDataThreshold: ...

class BarometerReading(_winrt.Object, interfaces=[]):
    station_pressure_in_hectopascals: _winrt.Double
    timestamp: winsdk.windows.foundation.DateTime
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> BarometerReading: ...

class BarometerReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[BarometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> BarometerReadingChangedEventArgs: ...

class Compass(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[CompassDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Compass: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Compass]: ...
    def get_current_reading(self) -> typing.Optional[CompassReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Compass]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Compass, CompassReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CompassDataThreshold(_winrt.Object, interfaces=[]):
    degrees: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> CompassDataThreshold: ...

class CompassReading(_winrt.Object, interfaces=[]):
    heading_magnetic_north: _winrt.Double
    heading_true_north: typing.Optional[typing.Optional[_winrt.Double]]
    timestamp: winsdk.windows.foundation.DateTime
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    heading_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: _winrt.Object) -> CompassReading: ...

class CompassReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[CompassReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> CompassReadingChangedEventArgs: ...

class Gyrometer(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[GyrometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Gyrometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Gyrometer]: ...
    def get_current_reading(self) -> typing.Optional[GyrometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Gyrometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Gyrometer, GyrometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GyrometerDataThreshold(_winrt.Object, interfaces=[]):
    z_axis_in_degrees_per_second: _winrt.Double
    y_axis_in_degrees_per_second: _winrt.Double
    x_axis_in_degrees_per_second: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> GyrometerDataThreshold: ...

class GyrometerReading(_winrt.Object, interfaces=[]):
    angular_velocity_x: _winrt.Double
    angular_velocity_y: _winrt.Double
    angular_velocity_z: _winrt.Double
    timestamp: winsdk.windows.foundation.DateTime
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> GyrometerReading: ...

class GyrometerReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[GyrometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> GyrometerReadingChangedEventArgs: ...

class HingeAngleReading(_winrt.Object, interfaces=[]):
    angle_in_degrees: _winrt.Double
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    timestamp: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> HingeAngleReading: ...

class HingeAngleSensor(_winrt.Object, interfaces=[]):
    report_threshold_in_degrees: _winrt.Double
    device_id: str
    min_report_threshold_in_degrees: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> HingeAngleSensor: ...
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

class HingeAngleSensorReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[HingeAngleReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> HingeAngleSensorReadingChangedEventArgs: ...

class Inclinometer(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    reading_type: SensorReadingType
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[InclinometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Inclinometer: ...
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

class InclinometerDataThreshold(_winrt.Object, interfaces=[]):
    yaw_in_degrees: _winrt.Single
    roll_in_degrees: _winrt.Single
    pitch_in_degrees: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> InclinometerDataThreshold: ...

class InclinometerReading(_winrt.Object, interfaces=[]):
    pitch_degrees: _winrt.Single
    roll_degrees: _winrt.Single
    timestamp: winsdk.windows.foundation.DateTime
    yaw_degrees: _winrt.Single
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    yaw_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: _winrt.Object) -> InclinometerReading: ...

class InclinometerReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[InclinometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> InclinometerReadingChangedEventArgs: ...

class LightSensor(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[LightSensorDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> LightSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[LightSensor]: ...
    def get_current_reading(self) -> typing.Optional[LightSensorReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[LightSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[LightSensor, LightSensorReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class LightSensorDataThreshold(_winrt.Object, interfaces=[]):
    lux_percentage: _winrt.Single
    absolute_lux: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> LightSensorDataThreshold: ...

class LightSensorReading(_winrt.Object, interfaces=[]):
    illuminance_in_lux: _winrt.Single
    timestamp: winsdk.windows.foundation.DateTime
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> LightSensorReading: ...

class LightSensorReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[LightSensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> LightSensorReadingChangedEventArgs: ...

class Magnetometer(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    report_threshold: typing.Optional[MagnetometerDataThreshold]
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Magnetometer: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Magnetometer]: ...
    def get_current_reading(self) -> typing.Optional[MagnetometerReading]: ...
    @staticmethod
    def get_default() -> typing.Optional[Magnetometer]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Magnetometer, MagnetometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MagnetometerDataThreshold(_winrt.Object, interfaces=[]):
    z_axis_microteslas: _winrt.Single
    y_axis_microteslas: _winrt.Single
    x_axis_microteslas: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> MagnetometerDataThreshold: ...

class MagnetometerReading(_winrt.Object, interfaces=[]):
    directional_accuracy: MagnetometerAccuracy
    magnetic_field_x: _winrt.Single
    magnetic_field_y: _winrt.Single
    magnetic_field_z: _winrt.Single
    timestamp: winsdk.windows.foundation.DateTime
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    @staticmethod
    def _from(obj: _winrt.Object) -> MagnetometerReading: ...

class MagnetometerReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[MagnetometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> MagnetometerReadingChangedEventArgs: ...

class OrientationSensor(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    minimum_report_interval: _winrt.UInt32
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    reading_type: SensorReadingType
    report_latency: _winrt.UInt32
    max_batch_size: _winrt.UInt32
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> OrientationSensor: ...
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

class OrientationSensorReading(_winrt.Object, interfaces=[]):
    quaternion: typing.Optional[SensorQuaternion]
    rotation_matrix: typing.Optional[SensorRotationMatrix]
    timestamp: winsdk.windows.foundation.DateTime
    performance_count: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]
    yaw_accuracy: MagnetometerAccuracy
    @staticmethod
    def _from(obj: _winrt.Object) -> OrientationSensorReading: ...

class OrientationSensorReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[OrientationSensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> OrientationSensorReadingChangedEventArgs: ...

class Pedometer(_winrt.Object, interfaces=[]):
    report_interval: _winrt.UInt32
    device_id: str
    minimum_report_interval: _winrt.UInt32
    power_in_milliwatts: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> Pedometer: ...
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
    def get_system_history_async(from_time: winsdk.windows.foundation.DateTime) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PedometerReading]]: ...
    @typing.overload
    @staticmethod
    def get_system_history_async(from_time: winsdk.windows.foundation.DateTime, duration: winsdk.windows.foundation.TimeSpan) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[PedometerReading]]: ...
    def add_reading_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Pedometer, PedometerReadingChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reading_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PedometerDataThreshold(_winrt.Object, interfaces=[ISensorDataThreshold]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PedometerDataThreshold: ...
    def __init__(self, sensor: typing.Optional[Pedometer], step_goal: _winrt.Int32) -> None: ...

class PedometerReading(_winrt.Object, interfaces=[]):
    cumulative_steps: _winrt.Int32
    cumulative_steps_duration: winsdk.windows.foundation.TimeSpan
    step_kind: PedometerStepKind
    timestamp: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> PedometerReading: ...

class PedometerReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[PedometerReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> PedometerReadingChangedEventArgs: ...

class ProximitySensor(_winrt.Object, interfaces=[]):
    device_id: str
    max_distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    min_distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensor: ...
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

class ProximitySensorDataThreshold(_winrt.Object, interfaces=[ISensorDataThreshold]):
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensorDataThreshold: ...
    def __init__(self, sensor: typing.Optional[ProximitySensor]) -> None: ...

class ProximitySensorDisplayOnOffController(_winrt.Object, interfaces=[winsdk.windows.foundation.IClosable]):
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensorDisplayOnOffController: ...
    def close(self) -> None: ...

class ProximitySensorReading(_winrt.Object, interfaces=[]):
    distance_in_millimeters: typing.Optional[typing.Optional[_winrt.UInt32]]
    is_detected: _winrt.Boolean
    timestamp: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensorReading: ...

class ProximitySensorReadingChangedEventArgs(_winrt.Object, interfaces=[]):
    reading: typing.Optional[ProximitySensorReading]
    @staticmethod
    def _from(obj: _winrt.Object) -> ProximitySensorReadingChangedEventArgs: ...

class SensorDataThresholdTriggerDetails(_winrt.Object, interfaces=[]):
    device_id: str
    sensor_type: SensorType
    @staticmethod
    def _from(obj: _winrt.Object) -> SensorDataThresholdTriggerDetails: ...

class SensorQuaternion(_winrt.Object, interfaces=[]):
    w: _winrt.Single
    x: _winrt.Single
    y: _winrt.Single
    z: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> SensorQuaternion: ...

class SensorRotationMatrix(_winrt.Object, interfaces=[]):
    m11: _winrt.Single
    m12: _winrt.Single
    m13: _winrt.Single
    m21: _winrt.Single
    m22: _winrt.Single
    m23: _winrt.Single
    m31: _winrt.Single
    m32: _winrt.Single
    m33: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> SensorRotationMatrix: ...

class SimpleOrientationSensor(_winrt.Object, interfaces=[]):
    reading_transform: winsdk.windows.graphics.display.DisplayOrientations
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> SimpleOrientationSensor: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[SimpleOrientationSensor]: ...
    def get_current_orientation(self) -> SimpleOrientation: ...
    @staticmethod
    def get_default() -> typing.Optional[SimpleOrientationSensor]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_orientation_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[SimpleOrientationSensor, SimpleOrientationSensorOrientationChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_orientation_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class SimpleOrientationSensorOrientationChangedEventArgs(_winrt.Object, interfaces=[]):
    orientation: SimpleOrientation
    timestamp: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> SimpleOrientationSensorOrientationChangedEventArgs: ...

class ISensorDataThreshold(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> ISensorDataThreshold: ...

