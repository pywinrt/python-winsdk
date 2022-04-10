# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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
    import winsdk.windows.storage.streams
except Exception:
    pass

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

class ErrorReceivedEventArgs(_winrt.Object):
    error: SerialError
    @staticmethod
    def _from(obj: _winrt.Object) -> ErrorReceivedEventArgs: ...

class PinChangedEventArgs(_winrt.Object):
    pin_change: SerialPinChange
    @staticmethod
    def _from(obj: _winrt.Object) -> PinChangedEventArgs: ...

class SerialDevice(winsdk.windows.foundation.IClosable, _winrt.Object):
    is_data_terminal_ready_enabled: _winrt.Boolean
    data_bits: _winrt.UInt16
    handshake: SerialHandshake
    break_signal_state: _winrt.Boolean
    baud_rate: _winrt.UInt32
    write_timeout: winsdk.windows.foundation.TimeSpan
    stop_bits: SerialStopBitCount
    read_timeout: winsdk.windows.foundation.TimeSpan
    parity: SerialParity
    is_request_to_send_enabled: _winrt.Boolean
    bytes_received: _winrt.UInt32
    carrier_detect_state: _winrt.Boolean
    clear_to_send_state: _winrt.Boolean
    data_set_ready_state: _winrt.Boolean
    input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]
    output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]
    port_name: str
    usb_product_id: _winrt.UInt16
    usb_vendor_id: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> SerialDevice: ...
    def close(self) -> None: ...
    @staticmethod
    def from_id_async(device_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[SerialDevice]]: ...
    @typing.overload
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(port_name: str) -> str: ...
    @staticmethod
    def get_device_selector_from_usb_vid_pid(vendor_id: _winrt.UInt16, product_id: _winrt.UInt16) -> str: ...
    def add_error_received(self, report_handler: winsdk.windows.foundation.TypedEventHandler[SerialDevice, ErrorReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_error_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pin_changed(self, report_handler: winsdk.windows.foundation.TypedEventHandler[SerialDevice, PinChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pin_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

