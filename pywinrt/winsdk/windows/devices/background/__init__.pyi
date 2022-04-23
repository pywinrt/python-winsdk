# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.foundation
except Exception:
    pass

class DeviceServicingDetails(_winrt.Object, interfaces=[]):
    arguments: str
    device_id: str
    expected_duration: winsdk.windows.foundation.TimeSpan
    @staticmethod
    def _from(obj: _winrt.Object) -> DeviceServicingDetails: ...

class DeviceUseDetails(_winrt.Object, interfaces=[]):
    arguments: str
    device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> DeviceUseDetails: ...

