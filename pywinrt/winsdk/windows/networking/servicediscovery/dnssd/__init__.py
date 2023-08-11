# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Networking.ServiceDiscovery.Dnssd")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.networking
except ImportError:
    pass

try:
    import winsdk.windows.networking.connectivity
except ImportError:
    pass

try:
    import winsdk.windows.networking.sockets
except ImportError:
    pass

class DnssdRegistrationStatus(enum.IntEnum):
    SUCCESS = 0
    INVALID_SERVICE_NAME = 1
    SERVER_ERROR = 2
    SECURITY_ERROR = 3

class DnssdServiceWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    ENUMERATION_COMPLETED = 2
    STOPPING = 3
    STOPPED = 4
    ABORTED = 5

_ns_module._register_DnssdRegistrationStatus(DnssdRegistrationStatus)
_ns_module._register_DnssdServiceWatcherStatus(DnssdServiceWatcherStatus)

DnssdRegistrationResult = _ns_module.DnssdRegistrationResult
DnssdServiceInstance = _ns_module.DnssdServiceInstance
DnssdServiceInstanceCollection = _ns_module.DnssdServiceInstanceCollection
winsdk.system._mixin_sequence(DnssdServiceInstanceCollection)
DnssdServiceWatcher = _ns_module.DnssdServiceWatcher
