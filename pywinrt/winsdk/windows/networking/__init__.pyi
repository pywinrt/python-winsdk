# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.networking.connectivity

class DomainNameType(enum.IntEnum):
    SUFFIX = 0
    FULLY_QUALIFIED = 1

class HostNameSortOptions(enum.IntFlag):
    NONE = 0
    OPTIMIZE_FOR_LONG_CONNECTIONS = 0x2

class HostNameType(enum.IntEnum):
    DOMAIN_NAME = 0
    IPV4 = 1
    IPV6 = 2
    BLUETOOTH = 3

Self = typing.TypeVar('Self')

class EndpointPair(winsdk.system.Object):
    remote_service_name: str
    remote_host_name: typing.Optional[HostName]
    local_service_name: str
    local_host_name: typing.Optional[HostName]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> EndpointPair: ...
    def __new__(cls: typing.Type[EndpointPair], local_host_name: typing.Optional[HostName], local_service_name: str, remote_host_name: typing.Optional[HostName], remote_service_name: str) -> EndpointPair:...

class HostName(winsdk.system.Object):
    canonical_name: str
    display_name: str
    i_p_information: typing.Optional[winsdk.windows.networking.connectivity.IPInformation]
    raw_name: str
    type: HostNameType
    def __str__(self) -> str: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> HostName: ...
    def __new__(cls: typing.Type[HostName], host_name: str) -> HostName:...
    @staticmethod
    def compare(value1: str, value2: str, /) -> winsdk.system.Int32: ...
    def is_equal(self, host_name: typing.Optional[HostName], /) -> winsdk.system.Boolean: ...
    def to_string(self) -> str: ...

