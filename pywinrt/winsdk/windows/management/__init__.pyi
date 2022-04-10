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
    import winsdk.windows.foundation.collections
except Exception:
    pass

class MdmAlertDataType(enum.IntEnum):
    STRING = 0
    BASE64 = 1
    BOOLEAN = 2
    INTEGER = 3

class MdmAlertMark(enum.IntEnum):
    NONE = 0
    FATAL = 1
    CRITICAL = 2
    WARNING = 3
    INFORMATIONAL = 4

class MdmSessionState(enum.IntEnum):
    NOT_STARTED = 0
    STARTING = 1
    CONNECTING = 2
    COMMUNICATING = 3
    ALERT_STATUS_AVAILABLE = 4
    RETRYING = 5
    COMPLETED = 6

class MdmAlert(_winrt.Object):
    type: str
    target: str
    source: str
    mark: MdmAlertMark
    format: MdmAlertDataType
    data: str
    status: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> MdmAlert: ...
    def __init__(self) -> None: ...

class MdmSession(_winrt.Object):
    alerts: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MdmAlert]]
    extended_error: winsdk.windows.foundation.HResult
    id: str
    state: MdmSessionState
    @staticmethod
    def _from(obj: _winrt.Object) -> MdmSession: ...
    def attach_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def delete(self) -> None: ...
    @typing.overload
    def start_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def start_async(self, alerts: typing.Iterable[typing.Optional[MdmAlert]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class MdmSessionManager(_winrt.Object):
    session_ids: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> MdmSessionManager: ...
    @staticmethod
    def delete_session_by_id(session_id: str) -> None: ...
    @staticmethod
    def get_session_by_id(session_id: str) -> typing.Optional[MdmSession]: ...
    @staticmethod
    def try_create_session() -> typing.Optional[MdmSession]: ...

