# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.devices.haptics
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

class PointerDeviceType(enum.IntEnum):
    TOUCH = 0
    PEN = 1
    MOUSE = 2

class MouseDelta:
    x: _winrt.Int32
    y: _winrt.Int32
    def __init__(self, x: _winrt.Int32, y: _winrt.Int32) -> None: ...

class PointerDeviceUsage:
    usage_page: _winrt.UInt32
    usage: _winrt.UInt32
    min_logical: _winrt.Int32
    max_logical: _winrt.Int32
    min_physical: _winrt.Int32
    max_physical: _winrt.Int32
    unit: _winrt.UInt32
    physical_multiplier: _winrt.Single
    def __init__(self, usage_page: _winrt.UInt32, usage: _winrt.UInt32, min_logical: _winrt.Int32, max_logical: _winrt.Int32, min_physical: _winrt.Int32, max_physical: _winrt.Int32, unit: _winrt.UInt32, physical_multiplier: _winrt.Single) -> None: ...

class KeyboardCapabilities(_winrt.Object, interfaces=[]):
    keyboard_present: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyboardCapabilities: ...
    def __init__(self) -> None: ...

class MouseCapabilities(_winrt.Object, interfaces=[]):
    horizontal_wheel_present: _winrt.Int32
    mouse_present: _winrt.Int32
    number_of_buttons: _winrt.UInt32
    swap_buttons: _winrt.Int32
    vertical_wheel_present: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> MouseCapabilities: ...
    def __init__(self) -> None: ...

class MouseDevice(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> MouseDevice: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[MouseDevice]: ...
    def add_mouse_moved(self, handler: winsdk.windows.foundation.TypedEventHandler[MouseDevice, MouseEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_mouse_moved(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MouseEventArgs(_winrt.Object, interfaces=[]):
    mouse_delta: MouseDelta
    @staticmethod
    def _from(obj: _winrt.Object) -> MouseEventArgs: ...

class PenButtonListener(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PenButtonListener: ...
    @staticmethod
    def get_default() -> typing.Optional[PenButtonListener]: ...
    def is_supported(self) -> _winrt.Boolean: ...
    def add_is_supported_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PenButtonListener, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_supported_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_tail_button_clicked(self, handler: winsdk.windows.foundation.TypedEventHandler[PenButtonListener, PenTailButtonClickedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_tail_button_clicked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_tail_button_double_clicked(self, handler: winsdk.windows.foundation.TypedEventHandler[PenButtonListener, PenTailButtonDoubleClickedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_tail_button_double_clicked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_tail_button_long_pressed(self, handler: winsdk.windows.foundation.TypedEventHandler[PenButtonListener, PenTailButtonLongPressedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_tail_button_long_pressed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PenDevice(_winrt.Object, interfaces=[]):
    pen_id: uuid.UUID
    simple_haptics_controller: typing.Optional[winsdk.windows.devices.haptics.SimpleHapticsController]
    @staticmethod
    def _from(obj: _winrt.Object) -> PenDevice: ...
    @staticmethod
    def get_from_pointer_id(pointer_id: _winrt.UInt32) -> typing.Optional[PenDevice]: ...

class PenDockListener(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PenDockListener: ...
    @staticmethod
    def get_default() -> typing.Optional[PenDockListener]: ...
    def is_supported(self) -> _winrt.Boolean: ...
    def add_docked(self, handler: winsdk.windows.foundation.TypedEventHandler[PenDockListener, PenDockedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_docked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_is_supported_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PenDockListener, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_supported_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_undocked(self, handler: winsdk.windows.foundation.TypedEventHandler[PenDockListener, PenUndockedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_undocked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PenDockedEventArgs(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PenDockedEventArgs: ...

class PenTailButtonClickedEventArgs(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PenTailButtonClickedEventArgs: ...

class PenTailButtonDoubleClickedEventArgs(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PenTailButtonDoubleClickedEventArgs: ...

class PenTailButtonLongPressedEventArgs(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PenTailButtonLongPressedEventArgs: ...

class PenUndockedEventArgs(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PenUndockedEventArgs: ...

class PointerDevice(_winrt.Object, interfaces=[]):
    is_integrated: _winrt.Boolean
    max_contacts: _winrt.UInt32
    physical_device_rect: winsdk.windows.foundation.Rect
    pointer_device_type: PointerDeviceType
    screen_rect: winsdk.windows.foundation.Rect
    supported_usages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[PointerDeviceUsage]]
    max_pointers_with_z_distance: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> PointerDevice: ...
    @staticmethod
    def get_pointer_device(pointer_id: _winrt.UInt32) -> typing.Optional[PointerDevice]: ...
    @staticmethod
    def get_pointer_devices() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[PointerDevice]]: ...

class TouchCapabilities(_winrt.Object, interfaces=[]):
    contacts: _winrt.UInt32
    touch_present: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> TouchCapabilities: ...
    def __init__(self) -> None: ...

