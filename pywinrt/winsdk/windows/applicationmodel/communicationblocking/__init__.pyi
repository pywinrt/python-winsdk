# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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

class CommunicationBlockingAccessManager(_winrt.Object):
    is_blocking_active: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CommunicationBlockingAccessManager: ...
    @staticmethod
    def is_blocked_number_async(number: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]]: ...
    @staticmethod
    def show_block_numbers_u_i(phone_numbers: typing.Iterable[str]) -> _winrt.Boolean: ...
    @staticmethod
    def show_blocked_calls_u_i() -> None: ...
    @staticmethod
    def show_blocked_messages_u_i() -> None: ...
    @staticmethod
    def show_unblock_numbers_u_i(phone_numbers: typing.Iterable[str]) -> _winrt.Boolean: ...

class CommunicationBlockingAppManager(_winrt.Object):
    is_current_app_active_blocking_app: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CommunicationBlockingAppManager: ...
    @staticmethod
    def request_set_as_active_blocking_app_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]]: ...
    @staticmethod
    def show_communication_blocking_settings_u_i() -> None: ...

