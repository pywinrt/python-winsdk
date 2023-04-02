# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.storage.streams

class SerialError(enum.IntEnum):
    FRAME = 0
    BUFFER_OVERRUN = 1
    RECEIVE_FULL = 2
    RECEIVE_PARITY = 3
    TRANSMIT_FULL = 4

class SerialHandshake(enum.IntEnum):
    NONE = 0
    REQUEST_TO_SEND = 1
    X_ON_X_OFF = 2
    REQUEST_TO_SEND_X_ON_X_OFF = 3

class SerialParity(enum.IntEnum):
    NONE = 0
    ODD = 1
    EVEN = 2
    MARK = 3
    SPACE = 4

class SerialPinChange(enum.IntEnum):
    BREAK_SIGNAL = 0
    CARRIER_DETECT = 1
    CLEAR_TO_SEND = 2
    DATA_SET_READY = 3
    RING_INDICATOR = 4

class SerialStopBitCount(enum.IntEnum):
    ONE = 0
    ONE_POINT_FIVE = 1
    TWO = 2

Self = typing.TypeVar('Self')

class ErrorReceivedEventArgs(winsdk.system.Object):
    error: SerialError
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ErrorReceivedEventArgs: ...

class PinChangedEventArgs(winsdk.system.Object):
    pin_change: SerialPinChange
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PinChangedEventArgs: ...

class SerialDevice(winsdk.system.Object):
    is_data_terminal_ready_enabled: winsdk.system.Boolean
    data_bits: winsdk.system.UInt16
    handshake: SerialHandshake
    break_signal_state: winsdk.system.Boolean
    baud_rate: winsdk.system.UInt32
    write_timeout: datetime.timedelta
    stop_bits: SerialStopBitCount
    read_timeout: datetime.timedelta
    parity: SerialParity
    is_request_to_send_enabled: winsdk.system.Boolean
    bytes_received: winsdk.system.UInt32
    carrier_detect_state: winsdk.system.Boolean
    clear_to_send_state: winsdk.system.Boolean
    data_set_ready_state: winsdk.system.Boolean
    input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]
    output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]
    port_name: str
    usb_product_id: winsdk.system.UInt16
    usb_vendor_id: winsdk.system.UInt16
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SerialDevice: ...
    def close(self) -> None: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[SerialDevice]: ...
    @typing.overload
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(port_name: str) -> str: ...
    @staticmethod
    def get_device_selector_from_usb_vid_pid(vendor_id: winsdk.system.UInt16, product_id: winsdk.system.UInt16) -> str: ...
    def add_error_received(self, report_handler: winsdk.windows.foundation.TypedEventHandler[SerialDevice, ErrorReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_error_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pin_changed(self, report_handler: winsdk.windows.foundation.TypedEventHandler[SerialDevice, PinChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pin_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

