# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.web.http

Self = typing.TypeVar('Self')

class SysStorageProviderEventReceivedEventArgs(winsdk.system.Object):
    json: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SysStorageProviderEventReceivedEventArgs: ...
    def __new__(cls: typing.Type[SysStorageProviderEventReceivedEventArgs], json: str) -> SysStorageProviderEventReceivedEventArgs:...

class ISysStorageProviderEventSource(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ISysStorageProviderEventSource: ...
    def add_event_received(self, handler: winsdk.windows.foundation.TypedEventHandler[ISysStorageProviderEventSource, SysStorageProviderEventReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_event_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ISysStorageProviderHandlerFactory(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ISysStorageProviderHandlerFactory: ...
    def get_event_source(self, sync_root_id: str, event_name: str) -> typing.Optional[ISysStorageProviderEventSource]: ...
    def get_http_request_provider(self, sync_root_id: str) -> typing.Optional[ISysStorageProviderHttpRequestProvider]: ...

class ISysStorageProviderHttpRequestProvider(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ISysStorageProviderHttpRequestProvider: ...
    def send_request_async(self, request: typing.Optional[winsdk.windows.web.http.HttpRequestMessage]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.web.http.HttpResponseMessage]: ...

