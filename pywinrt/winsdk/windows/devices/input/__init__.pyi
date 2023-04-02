# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.haptics
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class PointerDeviceType(enum.IntEnum):
    TOUCH = 0
    PEN = 1
    MOUSE = 2

Self = typing.TypeVar('Self')

class MouseDelta:
    x: winsdk.system.Int32
    y: winsdk.system.Int32
    def __new__(cls: typing.Type[MouseDelta], x: winsdk.system.Int32, y: winsdk.system.Int32) -> MouseDelta: ...

class PointerDeviceUsage:
    usage_page: winsdk.system.UInt32
    usage: winsdk.system.UInt32
    min_logical: winsdk.system.Int32
    max_logical: winsdk.system.Int32
    min_physical: winsdk.system.Int32
    max_physical: winsdk.system.Int32
    unit: winsdk.system.UInt32
    physical_multiplier: winsdk.system.Single
    def __new__(cls: typing.Type[PointerDeviceUsage], usage_page: winsdk.system.UInt32, usage: winsdk.system.UInt32, min_logical: winsdk.system.Int32, max_logical: winsdk.system.Int32, min_physical: winsdk.system.Int32, max_physical: winsdk.system.Int32, unit: winsdk.system.UInt32, physical_multiplier: winsdk.system.Single) -> PointerDeviceUsage: ...

class KeyboardCapabilities(winsdk.system.Object):
    keyboard_present: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> KeyboardCapabilities: ...
    def __new__(cls: typing.Type[KeyboardCapabilities]) -> KeyboardCapabilities:...

class MouseCapabilities(winsdk.system.Object):
    horizontal_wheel_present: winsdk.system.Int32
    mouse_present: winsdk.system.Int32
    number_of_buttons: winsdk.system.UInt32
    swap_buttons: winsdk.system.Int32
    vertical_wheel_present: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MouseCapabilities: ...
    def __new__(cls: typing.Type[MouseCapabilities]) -> MouseCapabilities:...

class MouseDevice(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MouseDevice: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[MouseDevice]: ...
    def add_mouse_moved(self, handler: winsdk.windows.foundation.TypedEventHandler[MouseDevice, MouseEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_mouse_moved(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MouseEventArgs(winsdk.system.Object):
    mouse_delta: MouseDelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MouseEventArgs: ...

class PenButtonListener(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PenButtonListener: ...
    @staticmethod
    def get_default() -> typing.Optional[PenButtonListener]: ...
    def is_supported(self) -> winsdk.system.Boolean: ...
    def add_is_supported_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PenButtonListener, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_supported_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_tail_button_clicked(self, handler: winsdk.windows.foundation.TypedEventHandler[PenButtonListener, PenTailButtonClickedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_tail_button_clicked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_tail_button_double_clicked(self, handler: winsdk.windows.foundation.TypedEventHandler[PenButtonListener, PenTailButtonDoubleClickedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_tail_button_double_clicked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_tail_button_long_pressed(self, handler: winsdk.windows.foundation.TypedEventHandler[PenButtonListener, PenTailButtonLongPressedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_tail_button_long_pressed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PenDevice(winsdk.system.Object):
    pen_id: winsdk.system.Guid
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PenDevice: ...
    @staticmethod
    def get_from_pointer_id(pointer_id: winsdk.system.UInt32) -> typing.Optional[PenDevice]: ...

class PenDockListener(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PenDockListener: ...
    @staticmethod
    def get_default() -> typing.Optional[PenDockListener]: ...
    def is_supported(self) -> winsdk.system.Boolean: ...
    def add_docked(self, handler: winsdk.windows.foundation.TypedEventHandler[PenDockListener, PenDockedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_docked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_is_supported_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PenDockListener, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_supported_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_undocked(self, handler: winsdk.windows.foundation.TypedEventHandler[PenDockListener, PenUndockedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_undocked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PenDockedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PenDockedEventArgs: ...

class PenTailButtonClickedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PenTailButtonClickedEventArgs: ...

class PenTailButtonDoubleClickedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PenTailButtonDoubleClickedEventArgs: ...

class PenTailButtonLongPressedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PenTailButtonLongPressedEventArgs: ...

class PenUndockedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PenUndockedEventArgs: ...

class PointerDevice(winsdk.system.Object):
    is_integrated: winsdk.system.Boolean
    max_contacts: winsdk.system.UInt32
    physical_device_rect: winsdk.windows.foundation.Rect
    pointer_device_type: PointerDeviceType
    screen_rect: winsdk.windows.foundation.Rect
    supported_usages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PointerDeviceUsage]]
    max_pointers_with_z_distance: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PointerDevice: ...
    @staticmethod
    def get_pointer_device(pointer_id: winsdk.system.UInt32) -> typing.Optional[PointerDevice]: ...
    @staticmethod
    def get_pointer_devices() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[PointerDevice]]: ...

class TouchCapabilities(winsdk.system.Object):
    contacts: winsdk.system.UInt32
    touch_present: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TouchCapabilities: ...
    def __new__(cls: typing.Type[TouchCapabilities]) -> TouchCapabilities:...

