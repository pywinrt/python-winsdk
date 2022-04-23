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
    import winsdk.windows.foundation.numerics
except Exception:
    pass

try:
    import winsdk.windows.media.mediaproperties
except Exception:
    pass

try:
    import winsdk.windows.perception.spatial
except Exception:
    pass

class FrameFlashMode(enum.IntEnum):
    DISABLE = 0
    ENABLE = 1
    GLOBAL = 2

class CameraIntrinsics(_winrt.Object, interfaces=[]):
    focal_length: winsdk.windows.foundation.numerics.Vector2
    image_height: _winrt.UInt32
    image_width: _winrt.UInt32
    principal_point: winsdk.windows.foundation.numerics.Vector2
    radial_distortion: winsdk.windows.foundation.numerics.Vector3
    tangential_distortion: winsdk.windows.foundation.numerics.Vector2
    undistorted_projection_transform: winsdk.windows.foundation.numerics.Matrix4x4
    @staticmethod
    def _from(obj: _winrt.Object) -> CameraIntrinsics: ...
    def __init__(self, focal_length: winsdk.windows.foundation.numerics.Vector2, principal_point: winsdk.windows.foundation.numerics.Vector2, radial_distortion: winsdk.windows.foundation.numerics.Vector3, tangential_distortion: winsdk.windows.foundation.numerics.Vector2, image_width: _winrt.UInt32, image_height: _winrt.UInt32) -> None: ...
    def distort_point(self, input: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Point: ...
    def distort_points(self, inputs: typing.Sequence[winsdk.windows.foundation.Point], results_size: _winrt.UInt32) -> typing.List[winsdk.windows.foundation.Point]: ...
    def project_many_onto_frame(self, coordinates: typing.Sequence[winsdk.windows.foundation.numerics.Vector3], results_size: _winrt.UInt32) -> typing.List[winsdk.windows.foundation.Point]: ...
    def project_onto_frame(self, coordinate: winsdk.windows.foundation.numerics.Vector3) -> winsdk.windows.foundation.Point: ...
    def undistort_point(self, input: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.Point: ...
    def undistort_points(self, inputs: typing.Sequence[winsdk.windows.foundation.Point], results_size: _winrt.UInt32) -> typing.List[winsdk.windows.foundation.Point]: ...
    def unproject_at_unit_depth(self, pixel_coordinate: winsdk.windows.foundation.Point) -> winsdk.windows.foundation.numerics.Vector2: ...
    def unproject_pixels_at_unit_depth(self, pixel_coordinates: typing.Sequence[winsdk.windows.foundation.Point], results_size: _winrt.UInt32) -> typing.List[winsdk.windows.foundation.numerics.Vector2]: ...

class DepthCorrelatedCoordinateMapper(_winrt.Object, interfaces=[winsdk.windows.foundation.IClosable]):
    @staticmethod
    def _from(obj: _winrt.Object) -> DepthCorrelatedCoordinateMapper: ...
    def close(self) -> None: ...
    def map_point(self, source_point: winsdk.windows.foundation.Point, target_coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], target_camera_intrinsics: typing.Optional[CameraIntrinsics]) -> winsdk.windows.foundation.Point: ...
    def map_points(self, source_points: typing.Sequence[winsdk.windows.foundation.Point], target_coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], target_camera_intrinsics: typing.Optional[CameraIntrinsics], results_size: _winrt.UInt32) -> typing.List[winsdk.windows.foundation.Point]: ...
    def unproject_point(self, source_point: winsdk.windows.foundation.Point, target_coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]) -> winsdk.windows.foundation.numerics.Vector3: ...
    def unproject_points(self, source_points: typing.Sequence[winsdk.windows.foundation.Point], target_coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], results_size: _winrt.UInt32) -> typing.List[winsdk.windows.foundation.numerics.Vector3]: ...

class FrameControlCapabilities(_winrt.Object, interfaces=[]):
    exposure: typing.Optional[FrameExposureCapabilities]
    exposure_compensation: typing.Optional[FrameExposureCompensationCapabilities]
    focus: typing.Optional[FrameFocusCapabilities]
    iso_speed: typing.Optional[FrameIsoSpeedCapabilities]
    photo_confirmation_supported: _winrt.Boolean
    flash: typing.Optional[FrameFlashCapabilities]
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameControlCapabilities: ...

class FrameController(_winrt.Object, interfaces=[]):
    photo_confirmation_enabled: typing.Optional[typing.Optional[_winrt.Boolean]]
    exposure_compensation_control: typing.Optional[FrameExposureCompensationControl]
    exposure_control: typing.Optional[FrameExposureControl]
    focus_control: typing.Optional[FrameFocusControl]
    iso_speed_control: typing.Optional[FrameIsoSpeedControl]
    flash_control: typing.Optional[FrameFlashControl]
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameController: ...
    def __init__(self) -> None: ...

class FrameExposureCapabilities(_winrt.Object, interfaces=[]):
    max: winsdk.windows.foundation.TimeSpan
    min: winsdk.windows.foundation.TimeSpan
    step: winsdk.windows.foundation.TimeSpan
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameExposureCapabilities: ...

class FrameExposureCompensationCapabilities(_winrt.Object, interfaces=[]):
    max: _winrt.Single
    min: _winrt.Single
    step: _winrt.Single
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameExposureCompensationCapabilities: ...

class FrameExposureCompensationControl(_winrt.Object, interfaces=[]):
    value: typing.Optional[typing.Optional[_winrt.Single]]
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameExposureCompensationControl: ...

class FrameExposureControl(_winrt.Object, interfaces=[]):
    value: typing.Optional[typing.Optional[winsdk.windows.foundation.TimeSpan]]
    auto: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameExposureControl: ...

class FrameFlashCapabilities(_winrt.Object, interfaces=[]):
    power_supported: _winrt.Boolean
    red_eye_reduction_supported: _winrt.Boolean
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameFlashCapabilities: ...

class FrameFlashControl(_winrt.Object, interfaces=[]):
    red_eye_reduction: _winrt.Boolean
    power_percent: _winrt.Single
    mode: FrameFlashMode
    auto: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameFlashControl: ...

class FrameFocusCapabilities(_winrt.Object, interfaces=[]):
    max: _winrt.UInt32
    min: _winrt.UInt32
    step: _winrt.UInt32
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameFocusCapabilities: ...

class FrameFocusControl(_winrt.Object, interfaces=[]):
    value: typing.Optional[typing.Optional[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameFocusControl: ...

class FrameIsoSpeedCapabilities(_winrt.Object, interfaces=[]):
    max: _winrt.UInt32
    min: _winrt.UInt32
    step: _winrt.UInt32
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameIsoSpeedCapabilities: ...

class FrameIsoSpeedControl(_winrt.Object, interfaces=[]):
    value: typing.Optional[typing.Optional[_winrt.UInt32]]
    auto: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FrameIsoSpeedControl: ...

class VariablePhotoSequenceController(_winrt.Object, interfaces=[]):
    photos_per_second_limit: _winrt.Single
    desired_frame_controllers: typing.Optional[winsdk.windows.foundation.collections.IVector[FrameController]]
    frame_capabilities: typing.Optional[FrameControlCapabilities]
    max_photos_per_second: _winrt.Single
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> VariablePhotoSequenceController: ...
    def get_current_frame_rate(self) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...
    def get_highest_concurrent_frame_rate(self, capture_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...

