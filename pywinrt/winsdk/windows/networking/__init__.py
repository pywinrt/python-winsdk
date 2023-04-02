# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Networking")

try:
    import winsdk.windows.networking.connectivity
except ImportError:
    pass

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

_ns_module._register_DomainNameType(DomainNameType)
_ns_module._register_HostNameSortOptions(HostNameSortOptions)
_ns_module._register_HostNameType(HostNameType)

EndpointPair = _ns_module.EndpointPair
HostName = _ns_module.HostName
