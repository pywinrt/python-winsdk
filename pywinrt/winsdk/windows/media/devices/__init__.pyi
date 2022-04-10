# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.devices.enumeration
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
    import winsdk.windows.media.capture
except Exception:
    pass

try:
    import winsdk.windows.media.devices.core
except Exception:
    pass

try:
    import winsdk.windows.media.mediaproperties
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class AdvancedPhotoMode(enum.IntEnum):
    AUTO = 0
    STANDARD = 1
    HDR = 2
    LOW_LIGHT = 3

class AudioDeviceRole(enum.IntEnum):
    DEFAULT = 0
    COMMUNICATIONS = 1

class AutoFocusRange(enum.IntEnum):
    FULL_RANGE = 0
    MACRO = 1
    NORMAL = 2

class CameraOcclusionKind(enum.IntEnum):
    LID = 0
    CAMERA_HARDWARE = 1

class CameraStreamState(enum.IntEnum):
    NOT_STREAMING = 0
    STREAMING = 1
    BLOCKED_FOR_PRIVACY = 2
    SHUTDOWN = 3

class CaptureSceneMode(enum.IntEnum):
    AUTO = 0
    MANUAL = 1
    MACRO = 2
    PORTRAIT = 3
    SPORT = 4
    SNOW = 5
    NIGHT = 6
    BEACH = 7
    SUNSET = 8
    CANDLELIGHT = 9
    LANDSCAPE = 10
    NIGHT_PORTRAIT = 11
    BACKLIT = 12

class CaptureUse(enum.IntEnum):
    NONE = 0
    PHOTO = 1
    VIDEO = 2

class ColorTemperaturePreset(enum.IntEnum):
    AUTO = 0
    MANUAL = 1
    CLOUDY = 2
    DAYLIGHT = 3
    FLASH = 4
    FLUORESCENT = 5
    TUNGSTEN = 6
    CANDLELIGHT = 7

class DigitalWindowMode(enum.IntEnum):
    OFF = 0
    ON = 1
    AUTO = 2

class FocusMode(enum.IntEnum):
    AUTO = 0
    SINGLE = 1
    CONTINUOUS = 2
    MANUAL = 3

class FocusPreset(enum.IntEnum):
    AUTO = 0
    MANUAL = 1
    AUTO_MACRO = 2
    AUTO_NORMAL = 3
    AUTO_INFINITY = 4
    AUTO_HYPERFOCAL = 5

class HdrVideoMode(enum.IntEnum):
    OFF = 0
    ON = 1
    AUTO = 2

class InfraredTorchMode(enum.IntEnum):
    OFF = 0
    ON = 1
    ALTERNATING_FRAME_ILLUMINATION = 2

class IsoSpeedPreset(enum.IntEnum):
    AUTO = 0
    ISO50 = 1
    ISO80 = 2
    ISO100 = 3
    ISO200 = 4
    ISO400 = 5
    ISO800 = 6
    ISO1600 = 7
    ISO3200 = 8
    ISO6400 = 9
    ISO12800 = 10
    ISO25600 = 11

class ManualFocusDistance(enum.IntEnum):
    INFINITY = 0
    HYPERFOCAL = 1
    NEAREST = 2

class MediaCaptureFocusState(enum.IntEnum):
    UNINITIALIZED = 0
    LOST = 1
    SEARCHING = 2
    FOCUSED = 3
    FAILED = 4

class MediaCaptureOptimization(enum.IntEnum):
    DEFAULT = 0
    QUALITY = 1
    LATENCY = 2
    POWER = 3
    LATENCY_THEN_QUALITY = 4
    LATENCY_THEN_POWER = 5
    POWER_AND_QUALITY = 6

class MediaCapturePauseBehavior(enum.IntEnum):
    RETAIN_HARDWARE_RESOURCES = 0
    RELEASE_HARDWARE_RESOURCES = 1

class OpticalImageStabilizationMode(enum.IntEnum):
    OFF = 0
    ON = 1
    AUTO = 2

class RegionOfInterestType(enum.IntEnum):
    UNKNOWN = 0
    FACE = 1

class SendCommandStatus(enum.IntEnum):
    SUCCESS = 0
    DEVICE_NOT_AVAILABLE = 1

class VideoDeviceControllerGetDevicePropertyStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    BUFFER_TOO_SMALL = 2
    NOT_SUPPORTED = 3
    DEVICE_NOT_AVAILABLE = 4
    MAX_PROPERTY_VALUE_SIZE_TOO_SMALL = 5
    MAX_PROPERTY_VALUE_SIZE_REQUIRED = 6

class VideoDeviceControllerSetDevicePropertyStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    NOT_SUPPORTED = 2
    INVALID_VALUE = 3
    DEVICE_NOT_AVAILABLE = 4
    NOT_IN_CONTROL = 5

class VideoTemporalDenoisingMode(enum.IntEnum):
    OFF = 0
    ON = 1
    AUTO = 2

class ZoomTransitionMode(enum.IntEnum):
    AUTO = 0
    DIRECT = 1
    SMOOTH = 2

class AdvancedPhotoCaptureSettings(_winrt.Object):
    mode: AdvancedPhotoMode
    @staticmethod
    def _from(obj: _winrt.Object) -> AdvancedPhotoCaptureSettings: ...
    def __init__(self) -> None: ...

class AdvancedPhotoControl(_winrt.Object):
    mode: AdvancedPhotoMode
    supported: _winrt.Boolean
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[AdvancedPhotoMode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdvancedPhotoControl: ...
    def configure(self, settings: typing.Optional[AdvancedPhotoCaptureSettings]) -> None: ...

class AudioDeviceController(IMediaDeviceController, _winrt.Object):
    volume_percent: _winrt.Single
    muted: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AudioDeviceController: ...
    def get_available_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]]: ...
    def get_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]: ...
    def set_media_stream_properties_async(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType, media_encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class AudioDeviceModule(_winrt.Object):
    class_id: str
    display_name: str
    instance_id: _winrt.UInt32
    major_version: _winrt.UInt32
    minor_version: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> AudioDeviceModule: ...
    def send_command_async(self, command: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[ModuleCommandResult]]: ...

class AudioDeviceModuleNotificationEventArgs(_winrt.Object):
    module: typing.Optional[AudioDeviceModule]
    notification_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: _winrt.Object) -> AudioDeviceModuleNotificationEventArgs: ...

class AudioDeviceModulesManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> AudioDeviceModulesManager: ...
    def __init__(self, device_id: str) -> None: ...
    def find_all(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[AudioDeviceModule]]: ...
    def find_all_by_id(self, module_id: str) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[AudioDeviceModule]]: ...
    def add_module_notification_received(self, handler: winsdk.windows.foundation.TypedEventHandler[AudioDeviceModulesManager, AudioDeviceModuleNotificationEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_module_notification_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CameraOcclusionInfo(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> CameraOcclusionInfo: ...
    def get_state(self) -> typing.Optional[CameraOcclusionState]: ...
    def is_occlusion_kind_supported(self, occlusion_kind: CameraOcclusionKind) -> _winrt.Boolean: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[CameraOcclusionInfo, CameraOcclusionStateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CameraOcclusionState(_winrt.Object):
    is_occluded: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CameraOcclusionState: ...
    def is_occlusion_kind(self, occlusion_kind: CameraOcclusionKind) -> _winrt.Boolean: ...

class CameraOcclusionStateChangedEventArgs(_winrt.Object):
    state: typing.Optional[CameraOcclusionState]
    @staticmethod
    def _from(obj: _winrt.Object) -> CameraOcclusionStateChangedEventArgs: ...

class DefaultAudioCaptureDeviceChangedEventArgs(IDefaultAudioDeviceChangedEventArgs, _winrt.Object):
    id: str
    role: AudioDeviceRole
    @staticmethod
    def _from(obj: _winrt.Object) -> DefaultAudioCaptureDeviceChangedEventArgs: ...

class DefaultAudioRenderDeviceChangedEventArgs(IDefaultAudioDeviceChangedEventArgs, _winrt.Object):
    id: str
    role: AudioDeviceRole
    @staticmethod
    def _from(obj: _winrt.Object) -> DefaultAudioRenderDeviceChangedEventArgs: ...

class DigitalWindowBounds(_winrt.Object):
    scale: _winrt.Double
    normalized_origin_top: _winrt.Double
    normalized_origin_left: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> DigitalWindowBounds: ...
    def __init__(self) -> None: ...

class DigitalWindowCapability(_winrt.Object):
    height: _winrt.Int32
    max_scale_value: _winrt.Double
    min_scale_value: _winrt.Double
    min_scale_value_without_upsampling: _winrt.Double
    normalized_field_of_view_limit: winsdk.windows.foundation.Rect
    width: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> DigitalWindowCapability: ...

class DigitalWindowControl(_winrt.Object):
    current_mode: DigitalWindowMode
    is_supported: _winrt.Boolean
    supported_capabilities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[DigitalWindowCapability]]
    supported_modes: DigitalWindowMode
    @staticmethod
    def _from(obj: _winrt.Object) -> DigitalWindowControl: ...
    @typing.overload
    def configure(self, digital_window_mode: DigitalWindowMode) -> None: ...
    @typing.overload
    def configure(self, digital_window_mode: DigitalWindowMode, digital_window_bounds: typing.Optional[DigitalWindowBounds]) -> None: ...
    def get_bounds(self) -> typing.Optional[DigitalWindowBounds]: ...
    def get_capability_for_size(self, width: _winrt.Int32, height: _winrt.Int32) -> typing.Optional[DigitalWindowCapability]: ...

class ExposureCompensationControl(_winrt.Object):
    max: _winrt.Single
    min: _winrt.Single
    step: _winrt.Single
    supported: _winrt.Boolean
    value: _winrt.Single
    @staticmethod
    def _from(obj: _winrt.Object) -> ExposureCompensationControl: ...
    def set_value_async(self, value: _winrt.Single) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ExposureControl(_winrt.Object):
    auto: _winrt.Boolean
    max: winsdk.windows.foundation.TimeSpan
    min: winsdk.windows.foundation.TimeSpan
    step: winsdk.windows.foundation.TimeSpan
    supported: _winrt.Boolean
    value: winsdk.windows.foundation.TimeSpan
    @staticmethod
    def _from(obj: _winrt.Object) -> ExposureControl: ...
    def set_auto_async(self, value: _winrt.Boolean) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def set_value_async(self, shutter_duration: winsdk.windows.foundation.TimeSpan) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ExposurePriorityVideoControl(_winrt.Object):
    enabled: _winrt.Boolean
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ExposurePriorityVideoControl: ...

class FlashControl(_winrt.Object):
    red_eye_reduction: _winrt.Boolean
    power_percent: _winrt.Single
    enabled: _winrt.Boolean
    auto: _winrt.Boolean
    power_supported: _winrt.Boolean
    red_eye_reduction_supported: _winrt.Boolean
    supported: _winrt.Boolean
    assistant_light_enabled: _winrt.Boolean
    assistant_light_supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FlashControl: ...

class FocusControl(_winrt.Object):
    max: _winrt.UInt32
    min: _winrt.UInt32
    preset: FocusPreset
    step: _winrt.UInt32
    supported: _winrt.Boolean
    supported_presets: typing.Optional[winsdk.windows.foundation.collections.IVectorView[FocusPreset]]
    value: _winrt.UInt32
    focus_changed_supported: _winrt.Boolean
    focus_state: MediaCaptureFocusState
    mode: FocusMode
    supported_focus_distances: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ManualFocusDistance]]
    supported_focus_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[FocusMode]]
    supported_focus_ranges: typing.Optional[winsdk.windows.foundation.collections.IVectorView[AutoFocusRange]]
    wait_for_focus_supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FocusControl: ...
    def configure(self, settings: typing.Optional[FocusSettings]) -> None: ...
    def focus_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def lock_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def set_preset_async(self, preset: FocusPreset) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def set_preset_async(self, preset: FocusPreset, complete_before_focus: _winrt.Boolean) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def set_value_async(self, focus: _winrt.UInt32) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def unlock_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class FocusSettings(_winrt.Object):
    wait_for_focus: _winrt.Boolean
    value: typing.Optional[typing.Optional[_winrt.UInt32]]
    mode: FocusMode
    distance: typing.Optional[typing.Optional[ManualFocusDistance]]
    disable_driver_fallback: _winrt.Boolean
    auto_focus_range: AutoFocusRange
    @staticmethod
    def _from(obj: _winrt.Object) -> FocusSettings: ...
    def __init__(self) -> None: ...

class HdrVideoControl(_winrt.Object):
    mode: HdrVideoMode
    supported: _winrt.Boolean
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HdrVideoMode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> HdrVideoControl: ...

class InfraredTorchControl(_winrt.Object):
    power: _winrt.Int32
    current_mode: InfraredTorchMode
    is_supported: _winrt.Boolean
    max_power: _winrt.Int32
    min_power: _winrt.Int32
    power_step: _winrt.Int32
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[InfraredTorchMode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> InfraredTorchControl: ...

class IsoSpeedControl(_winrt.Object):
    preset: IsoSpeedPreset
    supported: _winrt.Boolean
    supported_presets: typing.Optional[winsdk.windows.foundation.collections.IVectorView[IsoSpeedPreset]]
    auto: _winrt.Boolean
    max: _winrt.UInt32
    min: _winrt.UInt32
    step: _winrt.UInt32
    value: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> IsoSpeedControl: ...
    def set_auto_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def set_preset_async(self, preset: IsoSpeedPreset) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def set_value_async(self, iso_speed: _winrt.UInt32) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class LowLagPhotoControl(_winrt.Object):
    thumbnail_format: winsdk.windows.media.mediaproperties.MediaThumbnailFormat
    thumbnail_enabled: _winrt.Boolean
    desired_thumbnail_size: _winrt.UInt32
    hardware_accelerated_thumbnail_supported: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> LowLagPhotoControl: ...
    def get_current_frame_rate(self) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...
    def get_highest_concurrent_frame_rate(self, capture_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...

class LowLagPhotoSequenceControl(_winrt.Object):
    thumbnail_format: winsdk.windows.media.mediaproperties.MediaThumbnailFormat
    thumbnail_enabled: _winrt.Boolean
    photos_per_second_limit: _winrt.Single
    past_photo_limit: _winrt.UInt32
    desired_thumbnail_size: _winrt.UInt32
    hardware_accelerated_thumbnail_supported: _winrt.UInt32
    max_past_photos: _winrt.UInt32
    max_photos_per_second: _winrt.Single
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> LowLagPhotoSequenceControl: ...
    def get_current_frame_rate(self) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...
    def get_highest_concurrent_frame_rate(self, capture_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...

class MediaDevice(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaDevice: ...
    @staticmethod
    def get_audio_capture_selector() -> str: ...
    @staticmethod
    def get_audio_render_selector() -> str: ...
    @staticmethod
    def get_default_audio_capture_id(role: AudioDeviceRole) -> str: ...
    @staticmethod
    def get_default_audio_render_id(role: AudioDeviceRole) -> str: ...
    @staticmethod
    def get_video_capture_selector() -> str: ...
    @staticmethod
    def add_default_audio_capture_device_changed(handler: winsdk.windows.foundation.TypedEventHandler[_winrt.Object, DefaultAudioCaptureDeviceChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_default_audio_capture_device_changed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_default_audio_render_device_changed(handler: winsdk.windows.foundation.TypedEventHandler[_winrt.Object, DefaultAudioRenderDeviceChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_default_audio_render_device_changed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MediaDeviceControl(_winrt.Object):
    capabilities: typing.Optional[MediaDeviceControlCapabilities]
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaDeviceControl: ...
    def try_get_auto(self, ) -> typing.Tuple[_winrt.Boolean, _winrt.Boolean]: ...
    def try_get_value(self, ) -> typing.Tuple[_winrt.Boolean, _winrt.Double]: ...
    def try_set_auto(self, value: _winrt.Boolean) -> _winrt.Boolean: ...
    def try_set_value(self, value: _winrt.Double) -> _winrt.Boolean: ...

class MediaDeviceControlCapabilities(_winrt.Object):
    auto_mode_supported: _winrt.Boolean
    default: _winrt.Double
    max: _winrt.Double
    min: _winrt.Double
    step: _winrt.Double
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaDeviceControlCapabilities: ...

class ModuleCommandResult(_winrt.Object):
    result: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    status: SendCommandStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> ModuleCommandResult: ...

class OpticalImageStabilizationControl(_winrt.Object):
    mode: OpticalImageStabilizationMode
    supported: _winrt.Boolean
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[OpticalImageStabilizationMode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> OpticalImageStabilizationControl: ...

class PanelBasedOptimizationControl(_winrt.Object):
    panel: winsdk.windows.devices.enumeration.Panel
    is_supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PanelBasedOptimizationControl: ...

class PhotoConfirmationControl(_winrt.Object):
    pixel_format: winsdk.windows.media.mediaproperties.MediaPixelFormat
    enabled: _winrt.Boolean
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PhotoConfirmationControl: ...

class RegionOfInterest(_winrt.Object):
    bounds: winsdk.windows.foundation.Rect
    auto_white_balance_enabled: _winrt.Boolean
    auto_focus_enabled: _winrt.Boolean
    auto_exposure_enabled: _winrt.Boolean
    weight: _winrt.UInt32
    type: RegionOfInterestType
    bounds_normalized: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> RegionOfInterest: ...
    def __init__(self) -> None: ...

class RegionsOfInterestControl(_winrt.Object):
    auto_exposure_supported: _winrt.Boolean
    auto_focus_supported: _winrt.Boolean
    auto_white_balance_supported: _winrt.Boolean
    max_regions: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> RegionsOfInterestControl: ...
    def clear_regions_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def set_regions_async(self, regions: typing.Iterable[typing.Optional[RegionOfInterest]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def set_regions_async(self, regions: typing.Iterable[typing.Optional[RegionOfInterest]], lock_values: _winrt.Boolean) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class SceneModeControl(_winrt.Object):
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[CaptureSceneMode]]
    value: CaptureSceneMode
    @staticmethod
    def _from(obj: _winrt.Object) -> SceneModeControl: ...
    def set_value_async(self, scene_mode: CaptureSceneMode) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class TorchControl(_winrt.Object):
    power_percent: _winrt.Single
    enabled: _winrt.Boolean
    power_supported: _winrt.Boolean
    supported: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> TorchControl: ...

class VideoDeviceController(IMediaDeviceController, _winrt.Object):
    camera_occlusion_info: typing.Optional[CameraOcclusionInfo]
    primary_use: CaptureUse
    focus_control: typing.Optional[FocusControl]
    iso_speed_control: typing.Optional[IsoSpeedControl]
    low_lag_photo: typing.Optional[LowLagPhotoControl]
    white_balance_control: typing.Optional[WhiteBalanceControl]
    torch_control: typing.Optional[TorchControl]
    scene_mode_control: typing.Optional[SceneModeControl]
    regions_of_interest_control: typing.Optional[RegionsOfInterestControl]
    flash_control: typing.Optional[FlashControl]
    low_lag_photo_sequence: typing.Optional[LowLagPhotoSequenceControl]
    exposure_compensation_control: typing.Optional[ExposureCompensationControl]
    exposure_control: typing.Optional[ExposureControl]
    zoom_control: typing.Optional[ZoomControl]
    photo_confirmation_control: typing.Optional[PhotoConfirmationControl]
    variable_photo_sequence_controller: typing.Optional[winsdk.windows.media.devices.core.VariablePhotoSequenceController]
    desired_optimization: MediaCaptureOptimization
    advanced_photo_control: typing.Optional[AdvancedPhotoControl]
    exposure_priority_video_control: typing.Optional[ExposurePriorityVideoControl]
    hdr_video_control: typing.Optional[HdrVideoControl]
    optical_image_stabilization_control: typing.Optional[OpticalImageStabilizationControl]
    id: str
    video_temporal_denoising_control: typing.Optional[VideoTemporalDenoisingControl]
    infrared_torch_control: typing.Optional[InfraredTorchControl]
    panel_based_optimization_control: typing.Optional[PanelBasedOptimizationControl]
    digital_window_control: typing.Optional[DigitalWindowControl]
    hue: typing.Optional[MediaDeviceControl]
    zoom: typing.Optional[MediaDeviceControl]
    contrast: typing.Optional[MediaDeviceControl]
    white_balance: typing.Optional[MediaDeviceControl]
    backlight_compensation: typing.Optional[MediaDeviceControl]
    brightness: typing.Optional[MediaDeviceControl]
    exposure: typing.Optional[MediaDeviceControl]
    tilt: typing.Optional[MediaDeviceControl]
    roll: typing.Optional[MediaDeviceControl]
    pan: typing.Optional[MediaDeviceControl]
    focus: typing.Optional[MediaDeviceControl]
    @staticmethod
    def _from(obj: _winrt.Object) -> VideoDeviceController: ...
    def get_available_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]]: ...
    def get_device_property(self, property_id: str) -> typing.Optional[_winrt.Object]: ...
    def get_device_property_by_extended_id(self, extended_property_id: typing.Sequence[_winrt.UInt8], max_property_value_size: typing.Optional[_winrt.UInt32]) -> typing.Optional[VideoDeviceControllerGetDevicePropertyResult]: ...
    def get_device_property_by_id(self, property_id: str, max_property_value_size: typing.Optional[_winrt.UInt32]) -> typing.Optional[VideoDeviceControllerGetDevicePropertyResult]: ...
    def get_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]: ...
    def set_device_property(self, property_id: str, property_value: typing.Optional[_winrt.Object]) -> None: ...
    def set_device_property_by_extended_id(self, extended_property_id: typing.Sequence[_winrt.UInt8], property_value: typing.Sequence[_winrt.UInt8]) -> VideoDeviceControllerSetDevicePropertyStatus: ...
    def set_device_property_by_id(self, property_id: str, property_value: typing.Optional[_winrt.Object]) -> VideoDeviceControllerSetDevicePropertyStatus: ...
    def set_media_stream_properties_async(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType, media_encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def try_get_powerline_frequency(self, ) -> typing.Tuple[_winrt.Boolean, winsdk.windows.media.capture.PowerlineFrequency]: ...
    def try_set_powerline_frequency(self, value: winsdk.windows.media.capture.PowerlineFrequency) -> _winrt.Boolean: ...

class VideoDeviceControllerGetDevicePropertyResult(_winrt.Object):
    status: VideoDeviceControllerGetDevicePropertyStatus
    value: typing.Optional[_winrt.Object]
    @staticmethod
    def _from(obj: _winrt.Object) -> VideoDeviceControllerGetDevicePropertyResult: ...

class VideoTemporalDenoisingControl(_winrt.Object):
    mode: VideoTemporalDenoisingMode
    supported: _winrt.Boolean
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[VideoTemporalDenoisingMode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> VideoTemporalDenoisingControl: ...

class WhiteBalanceControl(_winrt.Object):
    max: _winrt.UInt32
    min: _winrt.UInt32
    preset: ColorTemperaturePreset
    step: _winrt.UInt32
    supported: _winrt.Boolean
    value: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> WhiteBalanceControl: ...
    def set_preset_async(self, preset: ColorTemperaturePreset) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def set_value_async(self, temperature: _winrt.UInt32) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ZoomControl(_winrt.Object):
    value: _winrt.Single
    max: _winrt.Single
    min: _winrt.Single
    step: _winrt.Single
    supported: _winrt.Boolean
    mode: ZoomTransitionMode
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ZoomTransitionMode]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ZoomControl: ...
    def configure(self, settings: typing.Optional[ZoomSettings]) -> None: ...

class ZoomSettings(_winrt.Object):
    value: _winrt.Single
    mode: ZoomTransitionMode
    @staticmethod
    def _from(obj: _winrt.Object) -> ZoomSettings: ...
    def __init__(self) -> None: ...

class IDefaultAudioDeviceChangedEventArgs(_winrt.Object):
    id: str
    role: AudioDeviceRole
    @staticmethod
    def _from(obj: _winrt.Object) -> IDefaultAudioDeviceChangedEventArgs: ...

class IMediaDeviceController(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> IMediaDeviceController: ...
    def get_available_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]]: ...
    def get_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]: ...
    def set_media_stream_properties_async(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType, media_encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

