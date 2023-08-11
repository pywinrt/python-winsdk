# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.networking
import winsdk.windows.networking.sockets
import winsdk.windows.storage.streams

class WiFiDirectServiceAdvertisementStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    STOPPED = 2
    ABORTED = 3

class WiFiDirectServiceConfigurationMethod(enum.IntEnum):
    DEFAULT = 0
    PIN_DISPLAY = 1
    PIN_ENTRY = 2

class WiFiDirectServiceError(enum.IntEnum):
    SUCCESS = 0
    RADIO_NOT_AVAILABLE = 1
    RESOURCE_IN_USE = 2
    UNSUPPORTED_HARDWARE = 3
    NO_HARDWARE = 4

class WiFiDirectServiceIPProtocol(enum.IntEnum):
    TCP = 6
    UDP = 17

class WiFiDirectServiceSessionErrorStatus(enum.IntEnum):
    OK = 0
    DISASSOCIATED = 1
    LOCAL_CLOSE = 2
    REMOTE_CLOSE = 3
    SYSTEM_FAILURE = 4
    NO_RESPONSE_FROM_REMOTE = 5

class WiFiDirectServiceSessionStatus(enum.IntEnum):
    CLOSED = 0
    INITIATED = 1
    REQUESTED = 2
    OPEN = 3

class WiFiDirectServiceStatus(enum.IntEnum):
    AVAILABLE = 0
    BUSY = 1
    CUSTOM = 2

Self = typing.TypeVar('Self')

class WiFiDirectService(winsdk.system.Object):
    session_info: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    prefer_group_owner_mode: winsdk.system.Boolean
    remote_service_info: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    service_error: WiFiDirectServiceError
    supported_configuration_methods: typing.Optional[winsdk.windows.foundation.collections.IVectorView[WiFiDirectServiceConfigurationMethod]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectService: ...
    @typing.overload
    def connect_async(self) -> winsdk.windows.foundation.IAsyncOperation[WiFiDirectServiceSession]: ...
    @typing.overload
    def connect_async(self, pin: str, /) -> winsdk.windows.foundation.IAsyncOperation[WiFiDirectServiceSession]: ...
    @staticmethod
    def from_id_async(device_id: str, /) -> winsdk.windows.foundation.IAsyncOperation[WiFiDirectService]: ...
    def get_provisioning_info_async(self, selected_configuration_method: WiFiDirectServiceConfigurationMethod, /) -> winsdk.windows.foundation.IAsyncOperation[WiFiDirectServiceProvisioningInfo]: ...
    @typing.overload
    @staticmethod
    def get_selector(service_name: str, /) -> str: ...
    @typing.overload
    @staticmethod
    def get_selector(service_name: str, service_info_filter: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> str: ...
    def add_session_deferred(self, handler: winsdk.windows.foundation.TypedEventHandler[WiFiDirectService, WiFiDirectServiceSessionDeferredEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_session_deferred(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class WiFiDirectServiceAdvertiser(winsdk.system.Object):
    service_status: WiFiDirectServiceStatus
    service_info: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    prefer_group_owner_mode: winsdk.system.Boolean
    deferred_session_info: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    custom_service_status_code: winsdk.system.UInt32
    auto_accept_session: winsdk.system.Boolean
    service_error: WiFiDirectServiceError
    preferred_configuration_methods: typing.Optional[winsdk.windows.foundation.collections.IVector[WiFiDirectServiceConfigurationMethod]]
    service_name: str
    service_name_prefixes: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    advertisement_status: WiFiDirectServiceAdvertisementStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectServiceAdvertiser: ...
    def __new__(cls: typing.Type[WiFiDirectServiceAdvertiser], service_name: str) -> WiFiDirectServiceAdvertiser:...
    @typing.overload
    def connect_async(self, device_info: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation], /) -> winsdk.windows.foundation.IAsyncOperation[WiFiDirectServiceSession]: ...
    @typing.overload
    def connect_async(self, device_info: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation], pin: str, /) -> winsdk.windows.foundation.IAsyncOperation[WiFiDirectServiceSession]: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_advertisement_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[WiFiDirectServiceAdvertiser, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_advertisement_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_auto_accept_session_connected(self, handler: winsdk.windows.foundation.TypedEventHandler[WiFiDirectServiceAdvertiser, WiFiDirectServiceAutoAcceptSessionConnectedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_auto_accept_session_connected(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_session_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[WiFiDirectServiceAdvertiser, WiFiDirectServiceSessionRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_session_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class WiFiDirectServiceAutoAcceptSessionConnectedEventArgs(winsdk.system.Object):
    session: typing.Optional[WiFiDirectServiceSession]
    session_info: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectServiceAutoAcceptSessionConnectedEventArgs: ...

class WiFiDirectServiceProvisioningInfo(winsdk.system.Object):
    is_group_formation_needed: winsdk.system.Boolean
    selected_configuration_method: WiFiDirectServiceConfigurationMethod
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectServiceProvisioningInfo: ...

class WiFiDirectServiceRemotePortAddedEventArgs(winsdk.system.Object):
    endpoint_pairs: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.networking.EndpointPair]]
    protocol: WiFiDirectServiceIPProtocol
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectServiceRemotePortAddedEventArgs: ...

class WiFiDirectServiceSession(winsdk.system.Object):
    advertisement_id: winsdk.system.UInt32
    error_status: WiFiDirectServiceSessionErrorStatus
    service_address: str
    service_name: str
    session_address: str
    session_id: winsdk.system.UInt32
    status: WiFiDirectServiceSessionStatus
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectServiceSession: ...
    def add_datagram_socket_async(self, value: typing.Optional[winsdk.windows.networking.sockets.DatagramSocket], /) -> winsdk.windows.foundation.IAsyncAction: ...
    def add_stream_socket_listener_async(self, value: typing.Optional[winsdk.windows.networking.sockets.StreamSocketListener], /) -> winsdk.windows.foundation.IAsyncAction: ...
    def close(self) -> None: ...
    def get_connection_endpoint_pairs(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.networking.EndpointPair]]: ...
    def add_remote_port_added(self, handler: winsdk.windows.foundation.TypedEventHandler[WiFiDirectServiceSession, WiFiDirectServiceRemotePortAddedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_remote_port_added(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_session_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[WiFiDirectServiceSession, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_session_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class WiFiDirectServiceSessionDeferredEventArgs(winsdk.system.Object):
    deferred_session_info: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectServiceSessionDeferredEventArgs: ...

class WiFiDirectServiceSessionRequest(winsdk.system.Object):
    device_information: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation]
    provisioning_info: typing.Optional[WiFiDirectServiceProvisioningInfo]
    session_info: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectServiceSessionRequest: ...
    def close(self) -> None: ...

class WiFiDirectServiceSessionRequestedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> WiFiDirectServiceSessionRequestedEventArgs: ...
    def get_session_request(self) -> typing.Optional[WiFiDirectServiceSessionRequest]: ...

