# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.numerics
import winsdk.windows.storage.streams
import winsdk.windows.system
import winsdk.windows.ui

class LampArrayKind(enum.IntEnum):
    UNDEFINED = 0
    KEYBOARD = 1
    MOUSE = 2
    GAME_CONTROLLER = 3
    PERIPHERAL = 4
    SCENE = 5
    NOTIFICATION = 6
    CHASSIS = 7
    WEARABLE = 8
    FURNITURE = 9
    ART = 10

class LampPurposes(enum.IntFlag):
    UNDEFINED = 0
    CONTROL = 0x1
    ACCENT = 0x2
    BRANDING = 0x4
    STATUS = 0x8
    ILLUMINATION = 0x10
    PRESENTATION = 0x20

Self = typing.TypeVar('Self')

class Lamp(winsdk.system.Object):
    is_enabled: winsdk.system.Boolean
    color: winsdk.windows.ui.Color
    brightness_level: winsdk.system.Single
    device_id: str
    is_color_settable: winsdk.system.Boolean
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> Lamp: ...
    def close(self) -> None: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[Lamp]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[Lamp]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def add_availability_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Lamp, LampAvailabilityChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_availability_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class LampArray(winsdk.system.Object):
    is_enabled: winsdk.system.Boolean
    brightness_level: winsdk.system.Double
    bounding_box: winsdk.windows.foundation.numerics.Vector3
    device_id: str
    hardware_product_id: winsdk.system.UInt16
    hardware_vendor_id: winsdk.system.UInt16
    hardware_version: winsdk.system.UInt16
    is_connected: winsdk.system.Boolean
    lamp_array_kind: LampArrayKind
    lamp_count: winsdk.system.Int32
    min_update_interval: datetime.timedelta
    supports_virtual_keys: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LampArray: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[LampArray]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    def get_indices_for_key(self, key: winsdk.windows.system.VirtualKey) -> winsdk.system.Int32: ...
    def get_indices_for_purposes(self, purposes: LampPurposes) -> winsdk.system.Int32: ...
    def get_lamp_info(self, lamp_index: winsdk.system.Int32) -> typing.Optional[LampInfo]: ...
    def request_message_async(self, message_id: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    def send_message_async(self, message_id: winsdk.system.Int32, message: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncAction: ...
    def set_color(self, desired_color: winsdk.windows.ui.Color) -> None: ...
    def set_color_for_index(self, lamp_index: winsdk.system.Int32, desired_color: winsdk.windows.ui.Color) -> None: ...
    def set_colors_for_indices(self, desired_colors: winsdk.system.Array[winsdk.windows.ui.Color], lamp_indexes: winsdk.system.Array[winsdk.system.Int32]) -> None: ...
    def set_colors_for_key(self, desired_color: winsdk.windows.ui.Color, key: winsdk.windows.system.VirtualKey) -> None: ...
    def set_colors_for_keys(self, desired_colors: winsdk.system.Array[winsdk.windows.ui.Color], keys: winsdk.system.Array[winsdk.windows.system.VirtualKey]) -> None: ...
    def set_colors_for_purposes(self, desired_color: winsdk.windows.ui.Color, purposes: LampPurposes) -> None: ...
    def set_single_color_for_indices(self, desired_color: winsdk.windows.ui.Color, lamp_indexes: winsdk.system.Array[winsdk.system.Int32]) -> None: ...

class LampAvailabilityChangedEventArgs(winsdk.system.Object):
    is_available: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LampAvailabilityChangedEventArgs: ...

class LampInfo(winsdk.system.Object):
    blue_level_count: winsdk.system.Int32
    fixed_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    gain_level_count: winsdk.system.Int32
    green_level_count: winsdk.system.Int32
    index: winsdk.system.Int32
    position: winsdk.windows.foundation.numerics.Vector3
    purposes: LampPurposes
    red_level_count: winsdk.system.Int32
    update_latency: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LampInfo: ...
    def get_nearest_supported_color(self, desired_color: winsdk.windows.ui.Color) -> winsdk.windows.ui.Color: ...

