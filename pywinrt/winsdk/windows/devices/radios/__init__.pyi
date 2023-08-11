# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class RadioAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED = 1
    DENIED_BY_USER = 2
    DENIED_BY_SYSTEM = 3

class RadioKind(enum.IntEnum):
    OTHER = 0
    WI_FI = 1
    MOBILE_BROADBAND = 2
    BLUETOOTH = 3
    F_M = 4

class RadioState(enum.IntEnum):
    UNKNOWN = 0
    ON = 1
    OFF = 2
    DISABLED = 3

Self = typing.TypeVar('Self')

class Radio(winsdk.system.Object):
    kind: RadioKind
    name: str
    state: RadioState
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> Radio: ...
    @staticmethod
    def from_id_async(device_id: str, /) -> winsdk.windows.foundation.IAsyncOperation[Radio]: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @staticmethod
    def get_radios_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Radio]]: ...
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[RadioAccessStatus]: ...
    def set_state_async(self, value: RadioState, /) -> winsdk.windows.foundation.IAsyncOperation[RadioAccessStatus]: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[Radio, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, event_cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

