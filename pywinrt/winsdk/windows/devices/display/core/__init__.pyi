# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.display
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.foundation.numerics
import winsdk.windows.graphics
import winsdk.windows.graphics.directx
import winsdk.windows.graphics.directx.direct3d11
import winsdk.windows.storage.streams

class DisplayBitsPerChannel(enum.IntFlag):
    NONE = 0
    BPC6 = 0x1
    BPC8 = 0x2
    BPC10 = 0x4
    BPC12 = 0x8
    BPC14 = 0x10
    BPC16 = 0x20

class DisplayDeviceCapability(enum.IntEnum):
    FLIP_OVERRIDE = 0

class DisplayManagerOptions(enum.IntFlag):
    NONE = 0
    ENFORCE_SOURCE_OWNERSHIP = 0x1
    VIRTUAL_REFRESH_RATE_AWARE = 0x2

class DisplayManagerResult(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_FAILURE = 1
    TARGET_ACCESS_DENIED = 2
    TARGET_STALE = 3
    REMOTE_SESSION_NOT_SUPPORTED = 4

class DisplayModeQueryOptions(enum.IntFlag):
    NONE = 0
    ONLY_PREFERRED_RESOLUTION = 0x1

class DisplayPathScaling(enum.IntEnum):
    IDENTITY = 0
    CENTERED = 1
    STRETCHED = 2
    ASPECT_RATIO_STRETCHED = 3
    CUSTOM = 4
    DRIVER_PREFERRED = 5

class DisplayPathStatus(enum.IntEnum):
    UNKNOWN = 0
    SUCCEEDED = 1
    PENDING = 2
    FAILED = 3
    FAILED_ASYNC = 4
    INVALIDATED_ASYNC = 5

class DisplayPresentStatus(enum.IntEnum):
    SUCCESS = 0
    SOURCE_STATUS_PREVENTED_PRESENT = 1
    SCANOUT_INVALID = 2
    SOURCE_INVALID = 3
    DEVICE_INVALID = 4
    UNKNOWN_FAILURE = 5

class DisplayRotation(enum.IntEnum):
    NONE = 0
    CLOCKWISE90_DEGREES = 1
    CLOCKWISE180_DEGREES = 2
    CLOCKWISE270_DEGREES = 3

class DisplayScanoutOptions(enum.IntFlag):
    NONE = 0
    ALLOW_TEARING = 0x2

class DisplaySourceStatus(enum.IntEnum):
    ACTIVE = 0
    POWERED_OFF = 1
    INVALID = 2
    OWNED_BY_ANOTHER_DEVICE = 3
    UNOWNED = 4

class DisplayStateApplyOptions(enum.IntFlag):
    NONE = 0
    FAIL_IF_STATE_CHANGED = 0x1
    FORCE_REAPPLY = 0x2
    FORCE_MODE_ENUMERATION = 0x4

class DisplayStateFunctionalizeOptions(enum.IntFlag):
    NONE = 0
    FAIL_IF_STATE_CHANGED = 0x1
    VALIDATE_TOPOLOGY_ONLY = 0x2

class DisplayStateOperationStatus(enum.IntEnum):
    SUCCESS = 0
    PARTIAL_FAILURE = 1
    UNKNOWN_FAILURE = 2
    TARGET_OWNERSHIP_LOST = 3
    SYSTEM_STATE_CHANGED = 4
    TOO_MANY_PATHS_FOR_ADAPTER = 5
    MODES_NOT_SUPPORTED = 6
    REMOTE_SESSION_NOT_SUPPORTED = 7

class DisplayTargetPersistence(enum.IntEnum):
    NONE = 0
    BOOT_PERSISTED = 1
    TEMPORARY_PERSISTED = 2
    PATH_PERSISTED = 3

class DisplayTaskSignalKind(enum.IntEnum):
    ON_PRESENT_FLIP_AWAY = 0
    ON_PRESENT_FLIP_TO = 1

class DisplayWireFormatColorSpace(enum.IntEnum):
    B_T709 = 0
    B_T2020 = 1
    PROFILE_DEFINED_WIDE_COLOR_GAMUT = 2

class DisplayWireFormatEotf(enum.IntEnum):
    SDR = 0
    HDR_SMPTE2084 = 1

class DisplayWireFormatHdrMetadata(enum.IntEnum):
    NONE = 0
    HDR10 = 1
    HDR10_PLUS = 2
    DOLBY_VISION_LOW_LATENCY = 3

class DisplayWireFormatPixelEncoding(enum.IntEnum):
    RGB444 = 0
    YCC444 = 1
    YCC422 = 2
    YCC420 = 3
    INTENSITY = 4

Self = typing.TypeVar('Self')

class DisplayPresentationRate:
    vertical_sync_rate: winsdk.windows.foundation.numerics.Rational
    vertical_syncs_per_presentation: winsdk.system.Int32
    def __new__(cls: typing.Type[DisplayPresentationRate], vertical_sync_rate: winsdk.windows.foundation.numerics.Rational, vertical_syncs_per_presentation: winsdk.system.Int32) -> DisplayPresentationRate: ...

class DisplayAdapter(winsdk.system.Object):
    device_interface_path: str
    id: winsdk.windows.graphics.DisplayAdapterId
    pci_device_id: winsdk.system.UInt32
    pci_revision: winsdk.system.UInt32
    pci_sub_system_id: winsdk.system.UInt32
    pci_vendor_id: winsdk.system.UInt32
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]
    source_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayAdapter: ...
    @staticmethod
    def from_id(id: winsdk.windows.graphics.DisplayAdapterId) -> typing.Optional[DisplayAdapter]: ...

class DisplayDevice(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayDevice: ...
    def create_periodic_fence(self, target: typing.Optional[DisplayTarget], offset_from_v_blank: datetime.timedelta) -> typing.Optional[DisplayFence]: ...
    def create_primary(self, target: typing.Optional[DisplayTarget], desc: typing.Optional[DisplayPrimaryDescription]) -> typing.Optional[DisplaySurface]: ...
    def create_scanout_source(self, target: typing.Optional[DisplayTarget]) -> typing.Optional[DisplaySource]: ...
    def create_simple_scanout(self, p_source: typing.Optional[DisplaySource], p_surface: typing.Optional[DisplaySurface], sub_resource_index: winsdk.system.UInt32, sync_interval: winsdk.system.UInt32) -> typing.Optional[DisplayScanout]: ...
    def create_simple_scanout_with_dirty_rects_and_options(self, source: typing.Optional[DisplaySource], surface: typing.Optional[DisplaySurface], subresource_index: winsdk.system.UInt32, sync_interval: winsdk.system.UInt32, dirty_rects: typing.Iterable[winsdk.windows.graphics.RectInt32], options: DisplayScanoutOptions) -> typing.Optional[DisplayScanout]: ...
    def create_task_pool(self) -> typing.Optional[DisplayTaskPool]: ...
    def is_capability_supported(self, capability: DisplayDeviceCapability) -> winsdk.system.Boolean: ...
    def wait_for_v_blank(self, source: typing.Optional[DisplaySource]) -> None: ...

class DisplayFence(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayFence: ...

class DisplayManager(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayManager: ...
    def close(self) -> None: ...
    @staticmethod
    def create(options: DisplayManagerOptions) -> typing.Optional[DisplayManager]: ...
    def create_display_device(self, adapter: typing.Optional[DisplayAdapter]) -> typing.Optional[DisplayDevice]: ...
    def get_current_adapters(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[DisplayAdapter]]: ...
    def get_current_targets(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[DisplayTarget]]: ...
    def release_target(self, target: typing.Optional[DisplayTarget]) -> None: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def try_acquire_target(self, target: typing.Optional[DisplayTarget]) -> DisplayManagerResult: ...
    def try_acquire_targets_and_create_empty_state(self, targets: typing.Iterable[DisplayTarget]) -> typing.Optional[DisplayManagerResultWithState]: ...
    def try_acquire_targets_and_create_substate(self, existing_state: typing.Optional[DisplayState], targets: typing.Iterable[DisplayTarget]) -> typing.Optional[DisplayManagerResultWithState]: ...
    def try_acquire_targets_and_read_current_state(self, targets: typing.Iterable[DisplayTarget]) -> typing.Optional[DisplayManagerResultWithState]: ...
    def try_read_current_state_for_all_targets(self) -> typing.Optional[DisplayManagerResultWithState]: ...
    def add_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[DisplayManager, DisplayManagerChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_disabled(self, handler: winsdk.windows.foundation.TypedEventHandler[DisplayManager, DisplayManagerDisabledEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_disabled(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_enabled(self, handler: winsdk.windows.foundation.TypedEventHandler[DisplayManager, DisplayManagerEnabledEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enabled(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_paths_failed_or_invalidated(self, handler: winsdk.windows.foundation.TypedEventHandler[DisplayManager, DisplayManagerPathsFailedOrInvalidatedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_paths_failed_or_invalidated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DisplayManagerChangedEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayManagerChangedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class DisplayManagerDisabledEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayManagerDisabledEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class DisplayManagerEnabledEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayManagerEnabledEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class DisplayManagerPathsFailedOrInvalidatedEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayManagerPathsFailedOrInvalidatedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class DisplayManagerResultWithState(winsdk.system.Object):
    error_code: DisplayManagerResult
    extended_error_code: winsdk.windows.foundation.HResult
    state: typing.Optional[DisplayState]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayManagerResultWithState: ...

class DisplayModeInfo(winsdk.system.Object):
    is_interlaced: winsdk.system.Boolean
    is_stereo: winsdk.system.Boolean
    presentation_rate: DisplayPresentationRate
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]
    source_pixel_format: winsdk.windows.graphics.directx.DirectXPixelFormat
    source_resolution: winsdk.windows.graphics.SizeInt32
    target_resolution: winsdk.windows.graphics.SizeInt32
    physical_presentation_rate: DisplayPresentationRate
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayModeInfo: ...
    def get_wire_format_supported_bits_per_channel(self, encoding: DisplayWireFormatPixelEncoding) -> DisplayBitsPerChannel: ...
    def is_wire_format_supported(self, wire_format: typing.Optional[DisplayWireFormat]) -> winsdk.system.Boolean: ...

class DisplayPath(winsdk.system.Object):
    wire_format: typing.Optional[DisplayWireFormat]
    target_resolution: typing.Optional[typing.Optional[winsdk.windows.graphics.SizeInt32]]
    source_resolution: typing.Optional[typing.Optional[winsdk.windows.graphics.SizeInt32]]
    source_pixel_format: winsdk.windows.graphics.directx.DirectXPixelFormat
    scaling: DisplayPathScaling
    rotation: DisplayRotation
    presentation_rate: typing.Optional[typing.Optional[DisplayPresentationRate]]
    is_stereo: winsdk.system.Boolean
    is_interlaced: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMap[winsdk.system.Guid, winsdk.system.Object]]
    status: DisplayPathStatus
    target: typing.Optional[DisplayTarget]
    view: typing.Optional[DisplayView]
    physical_presentation_rate: typing.Optional[typing.Optional[DisplayPresentationRate]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayPath: ...
    def apply_properties_from_mode(self, mode_result: typing.Optional[DisplayModeInfo]) -> None: ...
    def find_modes(self, flags: DisplayModeQueryOptions) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[DisplayModeInfo]]: ...

class DisplayPrimaryDescription(winsdk.system.Object):
    color_space: winsdk.windows.graphics.directx.DirectXColorSpace
    format: winsdk.windows.graphics.directx.DirectXPixelFormat
    height: winsdk.system.UInt32
    is_stereo: winsdk.system.Boolean
    multisample_description: winsdk.windows.graphics.directx.direct3d11.Direct3DMultisampleDescription
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]
    width: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayPrimaryDescription: ...
    def __new__(cls: typing.Type[DisplayPrimaryDescription], width: winsdk.system.UInt32, height: winsdk.system.UInt32, pixel_format: winsdk.windows.graphics.directx.DirectXPixelFormat, color_space: winsdk.windows.graphics.directx.DirectXColorSpace, is_stereo: winsdk.system.Boolean, multisample_description: winsdk.windows.graphics.directx.direct3d11.Direct3DMultisampleDescription) -> DisplayPrimaryDescription:...
    @staticmethod
    def create_with_properties(extra_properties: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[winsdk.system.Guid, winsdk.system.Object]], width: winsdk.system.UInt32, height: winsdk.system.UInt32, pixel_format: winsdk.windows.graphics.directx.DirectXPixelFormat, color_space: winsdk.windows.graphics.directx.DirectXColorSpace, is_stereo: winsdk.system.Boolean, multisample_description: winsdk.windows.graphics.directx.direct3d11.Direct3DMultisampleDescription) -> typing.Optional[DisplayPrimaryDescription]: ...

class DisplayScanout(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayScanout: ...

class DisplaySource(winsdk.system.Object):
    adapter_id: winsdk.windows.graphics.DisplayAdapterId
    source_id: winsdk.system.UInt32
    status: DisplaySourceStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplaySource: ...
    def get_metadata(self, key: winsdk.system.Guid) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    def add_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[DisplaySource, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DisplayState(winsdk.system.Object):
    is_read_only: winsdk.system.Boolean
    is_stale: winsdk.system.Boolean
    properties: typing.Optional[winsdk.windows.foundation.collections.IMap[winsdk.system.Guid, winsdk.system.Object]]
    targets: typing.Optional[winsdk.windows.foundation.collections.IVectorView[DisplayTarget]]
    views: typing.Optional[winsdk.windows.foundation.collections.IVectorView[DisplayView]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayState: ...
    def can_connect_target_to_view(self, target: typing.Optional[DisplayTarget], view: typing.Optional[DisplayView]) -> winsdk.system.Boolean: ...
    def clone(self) -> typing.Optional[DisplayState]: ...
    @typing.overload
    def connect_target(self, target: typing.Optional[DisplayTarget]) -> typing.Optional[DisplayPath]: ...
    @typing.overload
    def connect_target(self, target: typing.Optional[DisplayTarget], view: typing.Optional[DisplayView]) -> typing.Optional[DisplayPath]: ...
    def disconnect_target(self, target: typing.Optional[DisplayTarget]) -> None: ...
    def get_path_for_target(self, target: typing.Optional[DisplayTarget]) -> typing.Optional[DisplayPath]: ...
    def get_view_for_target(self, target: typing.Optional[DisplayTarget]) -> typing.Optional[DisplayView]: ...
    def try_apply(self, options: DisplayStateApplyOptions) -> typing.Optional[DisplayStateOperationResult]: ...
    def try_functionalize(self, options: DisplayStateFunctionalizeOptions) -> typing.Optional[DisplayStateOperationResult]: ...

class DisplayStateOperationResult(winsdk.system.Object):
    extended_error_code: winsdk.windows.foundation.HResult
    status: DisplayStateOperationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayStateOperationResult: ...

class DisplaySurface(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplaySurface: ...

class DisplayTarget(winsdk.system.Object):
    adapter: typing.Optional[DisplayAdapter]
    adapter_relative_id: winsdk.system.UInt32
    device_interface_path: str
    is_connected: winsdk.system.Boolean
    is_stale: winsdk.system.Boolean
    is_virtual_mode_enabled: winsdk.system.Boolean
    is_virtual_topology_enabled: winsdk.system.Boolean
    monitor_persistence: DisplayTargetPersistence
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]
    stable_monitor_id: str
    usage_kind: winsdk.windows.devices.display.DisplayMonitorUsageKind
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayTarget: ...
    def is_equal(self, other_target: typing.Optional[DisplayTarget]) -> winsdk.system.Boolean: ...
    def is_same(self, other_target: typing.Optional[DisplayTarget]) -> winsdk.system.Boolean: ...
    def try_get_monitor(self) -> typing.Optional[winsdk.windows.devices.display.DisplayMonitor]: ...

class DisplayTask(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayTask: ...
    def set_scanout(self, scanout: typing.Optional[DisplayScanout]) -> None: ...
    def set_signal(self, signal_kind: DisplayTaskSignalKind, fence: typing.Optional[DisplayFence]) -> None: ...
    def set_wait(self, ready_fence: typing.Optional[DisplayFence], ready_fence_value: winsdk.system.UInt64) -> None: ...

class DisplayTaskPool(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayTaskPool: ...
    def create_task(self) -> typing.Optional[DisplayTask]: ...
    def execute_task(self, task: typing.Optional[DisplayTask]) -> None: ...
    def try_execute_task(self, task: typing.Optional[DisplayTask]) -> typing.Optional[DisplayTaskResult]: ...

class DisplayTaskResult(winsdk.system.Object):
    present_id: winsdk.system.UInt64
    present_status: DisplayPresentStatus
    source_status: DisplaySourceStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayTaskResult: ...

class DisplayView(winsdk.system.Object):
    content_resolution: typing.Optional[typing.Optional[winsdk.windows.graphics.SizeInt32]]
    paths: typing.Optional[winsdk.windows.foundation.collections.IVectorView[DisplayPath]]
    properties: typing.Optional[winsdk.windows.foundation.collections.IMap[winsdk.system.Guid, winsdk.system.Object]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayView: ...
    def set_primary_path(self, path: typing.Optional[DisplayPath]) -> None: ...

class DisplayWireFormat(winsdk.system.Object):
    bits_per_channel: winsdk.system.Int32
    color_space: DisplayWireFormatColorSpace
    eotf: DisplayWireFormatEotf
    hdr_metadata: DisplayWireFormatHdrMetadata
    pixel_encoding: DisplayWireFormatPixelEncoding
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayWireFormat: ...
    def __new__(cls: typing.Type[DisplayWireFormat], pixel_encoding: DisplayWireFormatPixelEncoding, bits_per_channel: winsdk.system.Int32, color_space: DisplayWireFormatColorSpace, eotf: DisplayWireFormatEotf, hdr_metadata: DisplayWireFormatHdrMetadata) -> DisplayWireFormat:...
    @staticmethod
    def create_with_properties(extra_properties: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[winsdk.system.Guid, winsdk.system.Object]], pixel_encoding: DisplayWireFormatPixelEncoding, bits_per_channel: winsdk.system.Int32, color_space: DisplayWireFormatColorSpace, eotf: DisplayWireFormatEotf, hdr_metadata: DisplayWireFormatHdrMetadata) -> typing.Optional[DisplayWireFormat]: ...

