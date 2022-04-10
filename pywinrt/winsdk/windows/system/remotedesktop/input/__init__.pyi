# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

class RemoteTextConnection(winsdk.windows.foundation.IClosable, _winrt.Object):
    is_enabled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> RemoteTextConnection: ...
    def __init__(self, connection_id: uuid.UUID, pdu_forwarder: typing.Optional[RemoteTextConnectionDataHandler]) -> None: ...
    def close(self) -> None: ...
    def register_thread(self, thread_id: _winrt.UInt32) -> None: ...
    def report_data_received(self, pdu_data: typing.Sequence[_winrt.UInt8]) -> None: ...
    def unregister_thread(self, thread_id: _winrt.UInt32) -> None: ...

RemoteTextConnectionDataHandler = typing.Callable[[typing.Sequence[_winrt.UInt8]], _winrt.Boolean]

