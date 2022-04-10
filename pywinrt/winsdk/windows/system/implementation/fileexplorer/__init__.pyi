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
    import winsdk.windows.web.http
except Exception:
    pass

class SysStorageProviderEventReceivedEventArgs(_winrt.Object):
    json: str
    @staticmethod
    def _from(obj: _winrt.Object) -> SysStorageProviderEventReceivedEventArgs: ...
    def __init__(self, json: str) -> None: ...

class ISysStorageProviderEventSource(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ISysStorageProviderEventSource: ...
    def add_event_received(self, handler: winsdk.windows.foundation.TypedEventHandler[ISysStorageProviderEventSource, SysStorageProviderEventReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_event_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ISysStorageProviderHandlerFactory(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ISysStorageProviderHandlerFactory: ...
    def get_event_source(self, sync_root_id: str, event_name: str) -> typing.Optional[ISysStorageProviderEventSource]: ...
    def get_http_request_provider(self, sync_root_id: str) -> typing.Optional[ISysStorageProviderHttpRequestProvider]: ...

class ISysStorageProviderHttpRequestProvider(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ISysStorageProviderHttpRequestProvider: ...
    def send_request_async(self, request: typing.Optional[winsdk.windows.web.http.HttpRequestMessage]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.web.http.HttpResponseMessage]]: ...

