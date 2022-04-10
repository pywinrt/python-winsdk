# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

class PlatformTelemetryRegistrationStatus(enum.IntEnum):
    SUCCESS = 0
    SETTINGS_OUT_OF_RANGE = 1
    UNKNOWN_FAILURE = 2

class PlatformTelemetryClient(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlatformTelemetryClient: ...
    @typing.overload
    @staticmethod
    def register(id: str) -> typing.Optional[PlatformTelemetryRegistrationResult]: ...
    @typing.overload
    @staticmethod
    def register(id: str, settings: typing.Optional[PlatformTelemetryRegistrationSettings]) -> typing.Optional[PlatformTelemetryRegistrationResult]: ...

class PlatformTelemetryRegistrationResult(_winrt.Object):
    status: PlatformTelemetryRegistrationStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> PlatformTelemetryRegistrationResult: ...

class PlatformTelemetryRegistrationSettings(_winrt.Object):
    upload_quota_size: _winrt.UInt32
    storage_size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> PlatformTelemetryRegistrationSettings: ...
    def __init__(self) -> None: ...

