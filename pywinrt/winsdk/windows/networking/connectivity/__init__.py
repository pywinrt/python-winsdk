# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Networking.Connectivity")

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
    import winsdk.windows.storage.streams
except ImportError:
    pass

class CellularApnAuthenticationType(enum.IntEnum):
    NONE = 0
    PAP = 1
    CHAP = 2
    MSCHAPV2 = 3

class ConnectionProfileDeleteStatus(enum.IntEnum):
    SUCCESS = 0
    DENIED_BY_USER = 1
    DENIED_BY_SYSTEM = 2
    UNKNOWN_ERROR = 3

class DataUsageGranularity(enum.IntEnum):
    PER_MINUTE = 0
    PER_HOUR = 1
    PER_DAY = 2
    TOTAL = 3

class DomainAuthenticationKind(enum.IntEnum):
    NONE = 0
    LDAP = 1
    TLS = 2

class DomainConnectivityLevel(enum.IntEnum):
    NONE = 0
    UNAUTHENTICATED = 1
    AUTHENTICATED = 2

class NetworkAuthenticationType(enum.IntEnum):
    NONE = 0
    UNKNOWN = 1
    OPEN80211 = 2
    SHARED_KEY80211 = 3
    WPA = 4
    WPA_PSK = 5
    WPA_NONE = 6
    RSNA = 7
    RSNA_PSK = 8
    IHV = 9
    WPA3 = 10
    WPA3_ENTERPRISE192_BITS = 10
    WPA3_SAE = 11
    OWE = 12
    WPA3_ENTERPRISE = 13

class NetworkConnectivityLevel(enum.IntEnum):
    NONE = 0
    LOCAL_ACCESS = 1
    CONSTRAINED_INTERNET_ACCESS = 2
    INTERNET_ACCESS = 3

class NetworkCostType(enum.IntEnum):
    UNKNOWN = 0
    UNRESTRICTED = 1
    FIXED = 2
    VARIABLE = 3

class NetworkEncryptionType(enum.IntEnum):
    NONE = 0
    UNKNOWN = 1
    WEP = 2
    WEP40 = 3
    WEP104 = 4
    TKIP = 5
    CCMP = 6
    WPA_USE_GROUP = 7
    RSN_USE_GROUP = 8
    IHV = 9
    GCMP = 10
    GCMP256 = 11

class NetworkTypes(enum.IntFlag):
    NONE = 0
    INTERNET = 0x1
    PRIVATE_NETWORK = 0x2

class RoamingStates(enum.IntFlag):
    NONE = 0
    NOT_ROAMING = 0x1
    ROAMING = 0x2

class TriStates(enum.IntEnum):
    DO_NOT_CARE = 0
    NO = 1
    YES = 2

class WwanDataClass(enum.IntFlag):
    NONE = 0
    GPRS = 0x1
    EDGE = 0x2
    UMTS = 0x4
    HSDPA = 0x8
    HSUPA = 0x10
    LTE_ADVANCED = 0x20
    CDMA1X_RTT = 0x10000
    CDMA1X_EVDO = 0x20000
    CDMA1X_EVDO_REV_A = 0x40000
    CDMA1X_EVDV = 0x80000
    CDMA3X_RTT = 0x100000
    CDMA1X_EVDO_REV_B = 0x200000
    CDMA_UMB = 0x400000
    CUSTOM = 0x80000000

class WwanNetworkIPKind(enum.IntEnum):
    NONE = 0
    IPV4 = 1
    IPV6 = 2
    IPV4V6 = 3
    IPV4V6V4_XLAT = 4

class WwanNetworkRegistrationState(enum.IntEnum):
    NONE = 0
    DEREGISTERED = 1
    SEARCHING = 2
    HOME = 3
    ROAMING = 4
    PARTNER = 5
    DENIED = 6

_ns_module._register_CellularApnAuthenticationType(CellularApnAuthenticationType)
_ns_module._register_ConnectionProfileDeleteStatus(ConnectionProfileDeleteStatus)
_ns_module._register_DataUsageGranularity(DataUsageGranularity)
_ns_module._register_DomainAuthenticationKind(DomainAuthenticationKind)
_ns_module._register_DomainConnectivityLevel(DomainConnectivityLevel)
_ns_module._register_NetworkAuthenticationType(NetworkAuthenticationType)
_ns_module._register_NetworkConnectivityLevel(NetworkConnectivityLevel)
_ns_module._register_NetworkCostType(NetworkCostType)
_ns_module._register_NetworkEncryptionType(NetworkEncryptionType)
_ns_module._register_NetworkTypes(NetworkTypes)
_ns_module._register_RoamingStates(RoamingStates)
_ns_module._register_TriStates(TriStates)
_ns_module._register_WwanDataClass(WwanDataClass)
_ns_module._register_WwanNetworkIPKind(WwanNetworkIPKind)
_ns_module._register_WwanNetworkRegistrationState(WwanNetworkRegistrationState)

NetworkUsageStates = _ns_module.NetworkUsageStates
AttributedNetworkUsage = _ns_module.AttributedNetworkUsage
CellularApnContext = _ns_module.CellularApnContext
ConnectionCost = _ns_module.ConnectionCost
ConnectionProfile = _ns_module.ConnectionProfile
ConnectionProfileFilter = _ns_module.ConnectionProfileFilter
ConnectionSession = _ns_module.ConnectionSession
ConnectivityInterval = _ns_module.ConnectivityInterval
ConnectivityManager = _ns_module.ConnectivityManager
DataPlanStatus = _ns_module.DataPlanStatus
DataPlanUsage = _ns_module.DataPlanUsage
DataUsage = _ns_module.DataUsage
IPInformation = _ns_module.IPInformation
LanIdentifier = _ns_module.LanIdentifier
LanIdentifierData = _ns_module.LanIdentifierData
NetworkAdapter = _ns_module.NetworkAdapter
NetworkInformation = _ns_module.NetworkInformation
NetworkItem = _ns_module.NetworkItem
NetworkSecuritySettings = _ns_module.NetworkSecuritySettings
NetworkStateChangeEventDetails = _ns_module.NetworkStateChangeEventDetails
NetworkUsage = _ns_module.NetworkUsage
ProviderNetworkUsage = _ns_module.ProviderNetworkUsage
ProxyConfiguration = _ns_module.ProxyConfiguration
RoutePolicy = _ns_module.RoutePolicy
WlanConnectionProfileDetails = _ns_module.WlanConnectionProfileDetails
WwanConnectionProfileDetails = _ns_module.WwanConnectionProfileDetails
