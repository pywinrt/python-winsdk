# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.media.capture
import winsdk.windows.media.devices.core
import winsdk.windows.media.mediaproperties
import winsdk.windows.storage.streams

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

class TelephonyKey(enum.IntEnum):
    D0 = 0
    D1 = 1
    D2 = 2
    D3 = 3
    D4 = 4
    D5 = 5
    D6 = 6
    D7 = 7
    D8 = 8
    D9 = 9
    STAR = 10
    POUND = 11
    A = 12
    B = 13
    C = 14
    D = 15

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

Self = typing.TypeVar('Self')

class AdvancedPhotoCaptureSettings(winsdk.system.Object):
    mode: AdvancedPhotoMode
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AdvancedPhotoCaptureSettings: ...
    def __new__(cls: typing.Type[AdvancedPhotoCaptureSettings]) -> AdvancedPhotoCaptureSettings:...

class AdvancedPhotoControl(winsdk.system.Object):
    mode: AdvancedPhotoMode
    supported: winsdk.system.Boolean
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[AdvancedPhotoMode]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AdvancedPhotoControl: ...
    def configure(self, settings: typing.Optional[AdvancedPhotoCaptureSettings]) -> None: ...

class AudioDeviceController(winsdk.system.Object):
    volume_percent: winsdk.system.Single
    muted: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioDeviceController: ...
    def get_available_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]]: ...
    def get_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]: ...
    def set_media_stream_properties_async(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType, media_encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> winsdk.windows.foundation.IAsyncAction: ...

class AudioDeviceModule(winsdk.system.Object):
    class_id: str
    display_name: str
    instance_id: winsdk.system.UInt32
    major_version: winsdk.system.UInt32
    minor_version: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioDeviceModule: ...
    def send_command_async(self, command: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[ModuleCommandResult]: ...

class AudioDeviceModuleNotificationEventArgs(winsdk.system.Object):
    module: typing.Optional[AudioDeviceModule]
    notification_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioDeviceModuleNotificationEventArgs: ...

class AudioDeviceModulesManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AudioDeviceModulesManager: ...
    def __new__(cls: typing.Type[AudioDeviceModulesManager], device_id: str) -> AudioDeviceModulesManager:...
    def find_all(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[AudioDeviceModule]]: ...
    def find_all_by_id(self, module_id: str) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[AudioDeviceModule]]: ...
    def add_module_notification_received(self, handler: winsdk.windows.foundation.TypedEventHandler[AudioDeviceModulesManager, AudioDeviceModuleNotificationEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_module_notification_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CallControl(winsdk.system.Object):
    has_ringer: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CallControl: ...
    def end_call(self, call_token: winsdk.system.UInt64) -> None: ...
    @staticmethod
    def from_id(device_id: str) -> typing.Optional[CallControl]: ...
    @staticmethod
    def get_default() -> typing.Optional[CallControl]: ...
    def indicate_active_call(self, call_token: winsdk.system.UInt64) -> None: ...
    def indicate_new_incoming_call(self, enable_ringer: winsdk.system.Boolean, caller_id: str) -> winsdk.system.UInt64: ...
    def indicate_new_outgoing_call(self) -> winsdk.system.UInt64: ...
    def add_answer_requested(self, handler: typing.Optional[CallControlEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_answer_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_audio_transfer_requested(self, handler: typing.Optional[CallControlEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_audio_transfer_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_dial_requested(self, handler: typing.Optional[DialRequestedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_dial_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_hang_up_requested(self, handler: typing.Optional[CallControlEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_hang_up_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_keypad_pressed(self, handler: typing.Optional[KeypadPressedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_keypad_pressed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_redial_requested(self, handler: typing.Optional[RedialRequestedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_redial_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CameraOcclusionInfo(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CameraOcclusionInfo: ...
    def get_state(self) -> typing.Optional[CameraOcclusionState]: ...
    def is_occlusion_kind_supported(self, occlusion_kind: CameraOcclusionKind) -> winsdk.system.Boolean: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[CameraOcclusionInfo, CameraOcclusionStateChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CameraOcclusionState(winsdk.system.Object):
    is_occluded: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CameraOcclusionState: ...
    def is_occlusion_kind(self, occlusion_kind: CameraOcclusionKind) -> winsdk.system.Boolean: ...

class CameraOcclusionStateChangedEventArgs(winsdk.system.Object):
    state: typing.Optional[CameraOcclusionState]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CameraOcclusionStateChangedEventArgs: ...

class DefaultAudioCaptureDeviceChangedEventArgs(winsdk.system.Object):
    id: str
    role: AudioDeviceRole
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DefaultAudioCaptureDeviceChangedEventArgs: ...

class DefaultAudioRenderDeviceChangedEventArgs(winsdk.system.Object):
    id: str
    role: AudioDeviceRole
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DefaultAudioRenderDeviceChangedEventArgs: ...

class DialRequestedEventArgs(winsdk.system.Object):
    contact: typing.Optional[winsdk.system.Object]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DialRequestedEventArgs: ...
    def handled(self) -> None: ...

class DigitalWindowBounds(winsdk.system.Object):
    scale: winsdk.system.Double
    normalized_origin_top: winsdk.system.Double
    normalized_origin_left: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DigitalWindowBounds: ...
    def __new__(cls: typing.Type[DigitalWindowBounds]) -> DigitalWindowBounds:...

class DigitalWindowCapability(winsdk.system.Object):
    height: winsdk.system.Int32
    max_scale_value: winsdk.system.Double
    min_scale_value: winsdk.system.Double
    min_scale_value_without_upsampling: winsdk.system.Double
    normalized_field_of_view_limit: winsdk.windows.foundation.Rect
    width: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DigitalWindowCapability: ...

class DigitalWindowControl(winsdk.system.Object):
    current_mode: DigitalWindowMode
    is_supported: winsdk.system.Boolean
    supported_capabilities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[DigitalWindowCapability]]
    supported_modes: DigitalWindowMode
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DigitalWindowControl: ...
    @typing.overload
    def configure(self, digital_window_mode: DigitalWindowMode) -> None: ...
    @typing.overload
    def configure(self, digital_window_mode: DigitalWindowMode, digital_window_bounds: typing.Optional[DigitalWindowBounds]) -> None: ...
    def get_bounds(self) -> typing.Optional[DigitalWindowBounds]: ...
    def get_capability_for_size(self, width: winsdk.system.Int32, height: winsdk.system.Int32) -> typing.Optional[DigitalWindowCapability]: ...

class ExposureCompensationControl(winsdk.system.Object):
    max: winsdk.system.Single
    min: winsdk.system.Single
    step: winsdk.system.Single
    supported: winsdk.system.Boolean
    value: winsdk.system.Single
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ExposureCompensationControl: ...
    def set_value_async(self, value: winsdk.system.Single) -> winsdk.windows.foundation.IAsyncAction: ...

class ExposureControl(winsdk.system.Object):
    auto: winsdk.system.Boolean
    max: datetime.timedelta
    min: datetime.timedelta
    step: datetime.timedelta
    supported: winsdk.system.Boolean
    value: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ExposureControl: ...
    def set_auto_async(self, value: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncAction: ...
    def set_value_async(self, shutter_duration: datetime.timedelta) -> winsdk.windows.foundation.IAsyncAction: ...

class ExposurePriorityVideoControl(winsdk.system.Object):
    enabled: winsdk.system.Boolean
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ExposurePriorityVideoControl: ...

class FlashControl(winsdk.system.Object):
    red_eye_reduction: winsdk.system.Boolean
    power_percent: winsdk.system.Single
    enabled: winsdk.system.Boolean
    auto: winsdk.system.Boolean
    power_supported: winsdk.system.Boolean
    red_eye_reduction_supported: winsdk.system.Boolean
    supported: winsdk.system.Boolean
    assistant_light_enabled: winsdk.system.Boolean
    assistant_light_supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FlashControl: ...

class FocusControl(winsdk.system.Object):
    max: winsdk.system.UInt32
    min: winsdk.system.UInt32
    preset: FocusPreset
    step: winsdk.system.UInt32
    supported: winsdk.system.Boolean
    supported_presets: typing.Optional[winsdk.windows.foundation.collections.IVectorView[FocusPreset]]
    value: winsdk.system.UInt32
    focus_changed_supported: winsdk.system.Boolean
    focus_state: MediaCaptureFocusState
    mode: FocusMode
    supported_focus_distances: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ManualFocusDistance]]
    supported_focus_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[FocusMode]]
    supported_focus_ranges: typing.Optional[winsdk.windows.foundation.collections.IVectorView[AutoFocusRange]]
    wait_for_focus_supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FocusControl: ...
    def configure(self, settings: typing.Optional[FocusSettings]) -> None: ...
    def focus_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def lock_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def set_preset_async(self, preset: FocusPreset) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def set_preset_async(self, preset: FocusPreset, complete_before_focus: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncAction: ...
    def set_value_async(self, focus: winsdk.system.UInt32) -> winsdk.windows.foundation.IAsyncAction: ...
    def unlock_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class FocusSettings(winsdk.system.Object):
    wait_for_focus: winsdk.system.Boolean
    value: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    mode: FocusMode
    distance: typing.Optional[typing.Optional[ManualFocusDistance]]
    disable_driver_fallback: winsdk.system.Boolean
    auto_focus_range: AutoFocusRange
    @staticmethod
    def _from(obj: winsdk.system.Object) -> FocusSettings: ...
    def __new__(cls: typing.Type[FocusSettings]) -> FocusSettings:...

class HdrVideoControl(winsdk.system.Object):
    mode: HdrVideoMode
    supported: winsdk.system.Boolean
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HdrVideoMode]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HdrVideoControl: ...

class InfraredTorchControl(winsdk.system.Object):
    power: winsdk.system.Int32
    current_mode: InfraredTorchMode
    is_supported: winsdk.system.Boolean
    max_power: winsdk.system.Int32
    min_power: winsdk.system.Int32
    power_step: winsdk.system.Int32
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[InfraredTorchMode]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> InfraredTorchControl: ...

class IsoSpeedControl(winsdk.system.Object):
    preset: IsoSpeedPreset
    supported: winsdk.system.Boolean
    supported_presets: typing.Optional[winsdk.windows.foundation.collections.IVectorView[IsoSpeedPreset]]
    auto: winsdk.system.Boolean
    max: winsdk.system.UInt32
    min: winsdk.system.UInt32
    step: winsdk.system.UInt32
    value: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IsoSpeedControl: ...
    def set_auto_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def set_preset_async(self, preset: IsoSpeedPreset) -> winsdk.windows.foundation.IAsyncAction: ...
    def set_value_async(self, iso_speed: winsdk.system.UInt32) -> winsdk.windows.foundation.IAsyncAction: ...

class KeypadPressedEventArgs(winsdk.system.Object):
    telephony_key: TelephonyKey
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KeypadPressedEventArgs: ...

class LowLagPhotoControl(winsdk.system.Object):
    thumbnail_format: winsdk.windows.media.mediaproperties.MediaThumbnailFormat
    thumbnail_enabled: winsdk.system.Boolean
    desired_thumbnail_size: winsdk.system.UInt32
    hardware_accelerated_thumbnail_supported: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LowLagPhotoControl: ...
    def get_current_frame_rate(self) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...
    def get_highest_concurrent_frame_rate(self, capture_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...

class LowLagPhotoSequenceControl(winsdk.system.Object):
    thumbnail_format: winsdk.windows.media.mediaproperties.MediaThumbnailFormat
    thumbnail_enabled: winsdk.system.Boolean
    photos_per_second_limit: winsdk.system.Single
    past_photo_limit: winsdk.system.UInt32
    desired_thumbnail_size: winsdk.system.UInt32
    hardware_accelerated_thumbnail_supported: winsdk.system.UInt32
    max_past_photos: winsdk.system.UInt32
    max_photos_per_second: winsdk.system.Single
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LowLagPhotoSequenceControl: ...
    def get_current_frame_rate(self) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...
    def get_highest_concurrent_frame_rate(self, capture_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> typing.Optional[winsdk.windows.media.mediaproperties.MediaRatio]: ...

class MediaDevice(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaDevice: ...
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
    def add_default_audio_capture_device_changed(handler: winsdk.windows.foundation.TypedEventHandler[winsdk.system.Object, DefaultAudioCaptureDeviceChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_default_audio_capture_device_changed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_default_audio_render_device_changed(handler: winsdk.windows.foundation.TypedEventHandler[winsdk.system.Object, DefaultAudioRenderDeviceChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_default_audio_render_device_changed(cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MediaDeviceControl(winsdk.system.Object):
    capabilities: typing.Optional[MediaDeviceControlCapabilities]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaDeviceControl: ...
    def try_get_auto(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.Boolean]: ...
    def try_get_value(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.Double]: ...
    def try_set_auto(self, value: winsdk.system.Boolean) -> winsdk.system.Boolean: ...
    def try_set_value(self, value: winsdk.system.Double) -> winsdk.system.Boolean: ...

class MediaDeviceControlCapabilities(winsdk.system.Object):
    auto_mode_supported: winsdk.system.Boolean
    default: winsdk.system.Double
    max: winsdk.system.Double
    min: winsdk.system.Double
    step: winsdk.system.Double
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaDeviceControlCapabilities: ...

class ModuleCommandResult(winsdk.system.Object):
    result: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    status: SendCommandStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ModuleCommandResult: ...

class OpticalImageStabilizationControl(winsdk.system.Object):
    mode: OpticalImageStabilizationMode
    supported: winsdk.system.Boolean
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[OpticalImageStabilizationMode]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> OpticalImageStabilizationControl: ...

class PanelBasedOptimizationControl(winsdk.system.Object):
    panel: winsdk.windows.devices.enumeration.Panel
    is_supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PanelBasedOptimizationControl: ...

class PhotoConfirmationControl(winsdk.system.Object):
    pixel_format: winsdk.windows.media.mediaproperties.MediaPixelFormat
    enabled: winsdk.system.Boolean
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PhotoConfirmationControl: ...

class RedialRequestedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RedialRequestedEventArgs: ...
    def handled(self) -> None: ...

class RegionOfInterest(winsdk.system.Object):
    bounds: winsdk.windows.foundation.Rect
    auto_white_balance_enabled: winsdk.system.Boolean
    auto_focus_enabled: winsdk.system.Boolean
    auto_exposure_enabled: winsdk.system.Boolean
    weight: winsdk.system.UInt32
    type: RegionOfInterestType
    bounds_normalized: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RegionOfInterest: ...
    def __new__(cls: typing.Type[RegionOfInterest]) -> RegionOfInterest:...

class RegionsOfInterestControl(winsdk.system.Object):
    auto_exposure_supported: winsdk.system.Boolean
    auto_focus_supported: winsdk.system.Boolean
    auto_white_balance_supported: winsdk.system.Boolean
    max_regions: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RegionsOfInterestControl: ...
    def clear_regions_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def set_regions_async(self, regions: typing.Iterable[RegionOfInterest]) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def set_regions_async(self, regions: typing.Iterable[RegionOfInterest], lock_values: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncAction: ...

class SceneModeControl(winsdk.system.Object):
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[CaptureSceneMode]]
    value: CaptureSceneMode
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SceneModeControl: ...
    def set_value_async(self, scene_mode: CaptureSceneMode) -> winsdk.windows.foundation.IAsyncAction: ...

class TorchControl(winsdk.system.Object):
    power_percent: winsdk.system.Single
    enabled: winsdk.system.Boolean
    power_supported: winsdk.system.Boolean
    supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TorchControl: ...

class VideoDeviceController(winsdk.system.Object):
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
    zoom: typing.Optional[MediaDeviceControl]
    contrast: typing.Optional[MediaDeviceControl]
    backlight_compensation: typing.Optional[MediaDeviceControl]
    white_balance: typing.Optional[MediaDeviceControl]
    brightness: typing.Optional[MediaDeviceControl]
    exposure: typing.Optional[MediaDeviceControl]
    tilt: typing.Optional[MediaDeviceControl]
    roll: typing.Optional[MediaDeviceControl]
    hue: typing.Optional[MediaDeviceControl]
    pan: typing.Optional[MediaDeviceControl]
    focus: typing.Optional[MediaDeviceControl]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoDeviceController: ...
    def get_available_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]]: ...
    def get_device_property(self, property_id: str) -> typing.Optional[winsdk.system.Object]: ...
    def get_device_property_by_extended_id(self, extended_property_id: winsdk.system.Array[winsdk.system.UInt8], max_property_value_size: typing.Optional[winsdk.system.UInt32]) -> typing.Optional[VideoDeviceControllerGetDevicePropertyResult]: ...
    def get_device_property_by_id(self, property_id: str, max_property_value_size: typing.Optional[winsdk.system.UInt32]) -> typing.Optional[VideoDeviceControllerGetDevicePropertyResult]: ...
    def get_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]: ...
    def set_device_property(self, property_id: str, property_value: typing.Optional[winsdk.system.Object]) -> None: ...
    def set_device_property_by_extended_id(self, extended_property_id: winsdk.system.Array[winsdk.system.UInt8], property_value: winsdk.system.Array[winsdk.system.UInt8]) -> VideoDeviceControllerSetDevicePropertyStatus: ...
    def set_device_property_by_id(self, property_id: str, property_value: typing.Optional[winsdk.system.Object]) -> VideoDeviceControllerSetDevicePropertyStatus: ...
    def set_media_stream_properties_async(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType, media_encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> winsdk.windows.foundation.IAsyncAction: ...
    def try_acquire_exclusive_control(self, device_id: str, mode: winsdk.windows.media.capture.MediaCaptureDeviceExclusiveControlReleaseMode) -> winsdk.system.Boolean: ...
    def try_get_powerline_frequency(self) -> typing.Tuple[winsdk.system.Boolean, winsdk.windows.media.capture.PowerlineFrequency]: ...
    def try_set_powerline_frequency(self, value: winsdk.windows.media.capture.PowerlineFrequency) -> winsdk.system.Boolean: ...

class VideoDeviceControllerGetDevicePropertyResult(winsdk.system.Object):
    status: VideoDeviceControllerGetDevicePropertyStatus
    value: typing.Optional[winsdk.system.Object]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoDeviceControllerGetDevicePropertyResult: ...

class VideoTemporalDenoisingControl(winsdk.system.Object):
    mode: VideoTemporalDenoisingMode
    supported: winsdk.system.Boolean
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[VideoTemporalDenoisingMode]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> VideoTemporalDenoisingControl: ...

class WhiteBalanceControl(winsdk.system.Object):
    max: winsdk.system.UInt32
    min: winsdk.system.UInt32
    preset: ColorTemperaturePreset
    step: winsdk.system.UInt32
    supported: winsdk.system.Boolean
    value: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WhiteBalanceControl: ...
    def set_preset_async(self, preset: ColorTemperaturePreset) -> winsdk.windows.foundation.IAsyncAction: ...
    def set_value_async(self, temperature: winsdk.system.UInt32) -> winsdk.windows.foundation.IAsyncAction: ...

class ZoomControl(winsdk.system.Object):
    value: winsdk.system.Single
    max: winsdk.system.Single
    min: winsdk.system.Single
    step: winsdk.system.Single
    supported: winsdk.system.Boolean
    mode: ZoomTransitionMode
    supported_modes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ZoomTransitionMode]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ZoomControl: ...
    def configure(self, settings: typing.Optional[ZoomSettings]) -> None: ...

class ZoomSettings(winsdk.system.Object):
    value: winsdk.system.Single
    mode: ZoomTransitionMode
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ZoomSettings: ...
    def __new__(cls: typing.Type[ZoomSettings]) -> ZoomSettings:...

class IDefaultAudioDeviceChangedEventArgs(winsdk.system.Object):
    id: str
    role: AudioDeviceRole
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IDefaultAudioDeviceChangedEventArgs: ...

class IMediaDeviceController(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IMediaDeviceController: ...
    def get_available_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]]: ...
    def get_media_stream_properties(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType) -> typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]: ...
    def set_media_stream_properties_async(self, media_stream_type: winsdk.windows.media.capture.MediaStreamType, media_encoding_properties: typing.Optional[winsdk.windows.media.mediaproperties.IMediaEncodingProperties]) -> winsdk.windows.foundation.IAsyncAction: ...

CallControlEventHandler = typing.Callable[[typing.Optional[CallControl]], None]

DialRequestedEventHandler = typing.Callable[[typing.Optional[CallControl], typing.Optional[DialRequestedEventArgs]], None]

KeypadPressedEventHandler = typing.Callable[[typing.Optional[CallControl], typing.Optional[KeypadPressedEventArgs]], None]

RedialRequestedEventHandler = typing.Callable[[typing.Optional[CallControl], typing.Optional[RedialRequestedEventArgs]], None]

