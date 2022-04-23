# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.devices.adc.provider
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

class AdcChannelMode(enum.IntEnum):
    SINGLE_ENDED = 0
    DIFFERENTIAL = 1

class AdcChannel(_winrt.Object, interfaces=[winsdk.windows.foundation.IClosable]):
    controller: typing.Optional[AdcController]
    @staticmethod
    def _from(obj: _winrt.Object) -> AdcChannel: ...
    def close(self) -> None: ...
    def read_ratio(self) -> _winrt.Double: ...
    def read_value(self) -> _winrt.Int32: ...

class AdcController(_winrt.Object, interfaces=[]):
    channel_mode: AdcChannelMode
    channel_count: _winrt.Int32
    max_value: _winrt.Int32
    min_value: _winrt.Int32
    resolution_in_bits: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> AdcController: ...
    @staticmethod
    def get_controllers_async(provider: typing.Optional[winsdk.windows.devices.adc.provider.IAdcProvider]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[AdcController]]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[AdcController]: ...
    def is_channel_mode_supported(self, channel_mode: AdcChannelMode) -> _winrt.Boolean: ...
    def open_channel(self, channel_number: _winrt.Int32) -> typing.Optional[AdcChannel]: ...

