# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.appservice
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.networking.sockets
import winsdk.windows.web.http

class DevicePortalConnectionClosedReason(enum.IntEnum):
    UNKNOWN = 0
    RESOURCE_LIMITS_EXCEEDED = 1
    PROTOCOL_ERROR = 2
    NOT_AUTHORIZED = 3
    USER_NOT_PRESENT = 4
    SERVICE_TERMINATED = 5

Self = typing.TypeVar('Self')

class DevicePortalConnection(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DevicePortalConnection: ...
    @staticmethod
    def get_for_app_service_connection(app_service_connection: typing.Optional[winsdk.windows.applicationmodel.appservice.AppServiceConnection]) -> typing.Optional[DevicePortalConnection]: ...
    @typing.overload
    def get_server_message_web_socket_for_request(self, request: typing.Optional[winsdk.windows.web.http.HttpRequestMessage]) -> typing.Optional[winsdk.windows.networking.sockets.ServerMessageWebSocket]: ...
    @typing.overload
    def get_server_message_web_socket_for_request(self, request: typing.Optional[winsdk.windows.web.http.HttpRequestMessage], message_type: winsdk.windows.networking.sockets.SocketMessageType, protocol: str) -> typing.Optional[winsdk.windows.networking.sockets.ServerMessageWebSocket]: ...
    @typing.overload
    def get_server_message_web_socket_for_request(self, request: typing.Optional[winsdk.windows.web.http.HttpRequestMessage], message_type: winsdk.windows.networking.sockets.SocketMessageType, protocol: str, outbound_buffer_size_in_bytes: winsdk.system.UInt32, max_message_size: winsdk.system.UInt32, receive_mode: winsdk.windows.networking.sockets.MessageWebSocketReceiveMode) -> typing.Optional[winsdk.windows.networking.sockets.ServerMessageWebSocket]: ...
    @typing.overload
    def get_server_stream_web_socket_for_request(self, request: typing.Optional[winsdk.windows.web.http.HttpRequestMessage]) -> typing.Optional[winsdk.windows.networking.sockets.ServerStreamWebSocket]: ...
    @typing.overload
    def get_server_stream_web_socket_for_request(self, request: typing.Optional[winsdk.windows.web.http.HttpRequestMessage], protocol: str, outbound_buffer_size_in_bytes: winsdk.system.UInt32, no_delay: winsdk.system.Boolean) -> typing.Optional[winsdk.windows.networking.sockets.ServerStreamWebSocket]: ...
    def add_closed(self, handler: winsdk.windows.foundation.TypedEventHandler[DevicePortalConnection, DevicePortalConnectionClosedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_closed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_request_received(self, handler: winsdk.windows.foundation.TypedEventHandler[DevicePortalConnection, DevicePortalConnectionRequestReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_request_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DevicePortalConnectionClosedEventArgs(winsdk.system.Object):
    reason: DevicePortalConnectionClosedReason
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DevicePortalConnectionClosedEventArgs: ...

class DevicePortalConnectionRequestReceivedEventArgs(winsdk.system.Object):
    request_message: typing.Optional[winsdk.windows.web.http.HttpRequestMessage]
    response_message: typing.Optional[winsdk.windows.web.http.HttpResponseMessage]
    is_web_socket_upgrade_request: winsdk.system.Boolean
    web_socket_protocols_requested: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DevicePortalConnectionRequestReceivedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

