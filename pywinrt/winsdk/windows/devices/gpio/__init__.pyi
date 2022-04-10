# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.devices.gpio.provider
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

class GpioChangePolarity(enum.IntEnum):
    FALLING = 0
    RISING = 1
    BOTH = 2

class GpioOpenStatus(enum.IntEnum):
    PIN_OPENED = 0
    PIN_UNAVAILABLE = 1
    SHARING_VIOLATION = 2
    MUXING_CONFLICT = 3
    UNKNOWN_ERROR = 4

class GpioPinDriveMode(enum.IntEnum):
    INPUT = 0
    OUTPUT = 1
    INPUT_PULL_UP = 2
    INPUT_PULL_DOWN = 3
    OUTPUT_OPEN_DRAIN = 4
    OUTPUT_OPEN_DRAIN_PULL_UP = 5
    OUTPUT_OPEN_SOURCE = 6
    OUTPUT_OPEN_SOURCE_PULL_DOWN = 7

class GpioPinEdge(enum.IntEnum):
    FALLING_EDGE = 0
    RISING_EDGE = 1

class GpioPinValue(enum.IntEnum):
    LOW = 0
    HIGH = 1

class GpioSharingMode(enum.IntEnum):
    EXCLUSIVE = 0
    SHARED_READ_ONLY = 1

class GpioChangeCount:
    count: _winrt.UInt64
    relative_time: winsdk.windows.foundation.TimeSpan
    def __init__(self, count: _winrt.UInt64, relative_time: winsdk.windows.foundation.TimeSpan) -> None: ...

class GpioChangeRecord:
    relative_time: winsdk.windows.foundation.TimeSpan
    edge: GpioPinEdge
    def __init__(self, relative_time: winsdk.windows.foundation.TimeSpan, edge: GpioPinEdge) -> None: ...

class GpioChangeCounter(winsdk.windows.foundation.IClosable, _winrt.Object):
    polarity: GpioChangePolarity
    is_started: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> GpioChangeCounter: ...
    def __init__(self, pin: typing.Optional[GpioPin]) -> None: ...
    def close(self) -> None: ...
    def read(self) -> GpioChangeCount: ...
    def reset(self) -> GpioChangeCount: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

class GpioChangeReader(winsdk.windows.foundation.IClosable, _winrt.Object):
    polarity: GpioChangePolarity
    capacity: _winrt.Int32
    is_empty: _winrt.Boolean
    is_overflowed: _winrt.Boolean
    is_started: _winrt.Boolean
    length: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> GpioChangeReader: ...
    @typing.overload
    def __init__(self, pin: typing.Optional[GpioPin]) -> None: ...
    @typing.overload
    def __init__(self, pin: typing.Optional[GpioPin], min_capacity: _winrt.Int32) -> None: ...
    def clear(self) -> None: ...
    def close(self) -> None: ...
    def get_all_items(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[GpioChangeRecord]]: ...
    def get_next_item(self) -> GpioChangeRecord: ...
    def peek_next_item(self) -> GpioChangeRecord: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def wait_for_items_async(self, count: _winrt.Int32) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class GpioController(_winrt.Object):
    pin_count: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> GpioController: ...
    @staticmethod
    def get_controllers_async(provider: typing.Optional[winsdk.windows.devices.gpio.provider.IGpioProvider]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[GpioController]]]: ...
    @staticmethod
    def get_default() -> typing.Optional[GpioController]: ...
    @staticmethod
    def get_default_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[GpioController]]: ...
    @typing.overload
    def open_pin(self, pin_number: _winrt.Int32) -> typing.Optional[GpioPin]: ...
    @typing.overload
    def open_pin(self, pin_number: _winrt.Int32, sharing_mode: GpioSharingMode) -> typing.Optional[GpioPin]: ...
    def try_open_pin(self, pin_number: _winrt.Int32, sharing_mode: GpioSharingMode) -> typing.Tuple[_winrt.Boolean, typing.Optional[GpioPin], GpioOpenStatus]: ...

class GpioPin(winsdk.windows.foundation.IClosable, _winrt.Object):
    debounce_timeout: winsdk.windows.foundation.TimeSpan
    pin_number: _winrt.Int32
    sharing_mode: GpioSharingMode
    @staticmethod
    def _from(obj: _winrt.Object) -> GpioPin: ...
    def close(self) -> None: ...
    def get_drive_mode(self) -> GpioPinDriveMode: ...
    def is_drive_mode_supported(self, drive_mode: GpioPinDriveMode) -> _winrt.Boolean: ...
    def read(self) -> GpioPinValue: ...
    def set_drive_mode(self, value: GpioPinDriveMode) -> None: ...
    def write(self, value: GpioPinValue) -> None: ...
    def add_value_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GpioPin, GpioPinValueChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_value_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GpioPinValueChangedEventArgs(_winrt.Object):
    edge: GpioPinEdge
    @staticmethod
    def _from(obj: _winrt.Object) -> GpioPinValueChangedEventArgs: ...

