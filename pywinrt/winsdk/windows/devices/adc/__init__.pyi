# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.adc.provider
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class AdcChannelMode(enum.IntEnum):
    SINGLE_ENDED = 0
    DIFFERENTIAL = 1

Self = typing.TypeVar('Self')

class AdcChannel(winsdk.system.Object):
    controller: typing.Optional[AdcController]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AdcChannel: ...
    def close(self) -> None: ...
    def read_ratio(self) -> winsdk.system.Double: ...
    def read_value(self) -> winsdk.system.Int32: ...

class AdcController(winsdk.system.Object):
    channel_mode: AdcChannelMode
    channel_count: winsdk.system.Int32
    max_value: winsdk.system.Int32
    min_value: winsdk.system.Int32
    resolution_in_bits: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AdcController: ...
    @staticmethod
    def get_controllers_async(provider: typing.Optional[winsdk.windows.devices.adc.provider.IAdcProvider]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[AdcController]]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[AdcController]: ...
    def is_channel_mode_supported(self, channel_mode: AdcChannelMode) -> winsdk.system.Boolean: ...
    def open_channel(self, channel_number: winsdk.system.Int32) -> typing.Optional[AdcChannel]: ...

