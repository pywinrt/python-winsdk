# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Networking.Vpn")

try:
    import winsdk.windows.applicationmodel.activation
except ImportError:
    pass

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
    import winsdk.windows.networking.sockets
except ImportError:
    pass

try:
    import winsdk.windows.security.credentials
except ImportError:
    pass

try:
    import winsdk.windows.security.cryptography.certificates
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

class VpnAppIdType(enum.IntEnum):
    PACKAGE_FAMILY_NAME = 0
    FULLY_QUALIFIED_BINARY_NAME = 1
    FILE_PATH = 2

class VpnAuthenticationMethod(enum.IntEnum):
    MSCHAPV2 = 0
    EAP = 1
    CERTIFICATE = 2
    PRESHARED_KEY = 3

class VpnChannelActivityEventType(enum.IntEnum):
    IDLE = 0
    ACTIVE = 1

class VpnChannelRequestCredentialsOptions(enum.IntFlag):
    NONE = 0
    RETRYING = 0x1
    USE_FOR_SINGLE_SIGN_IN = 0x2

class VpnCredentialType(enum.IntEnum):
    USERNAME_PASSWORD = 0
    USERNAME_OTP_PIN = 1
    USERNAME_PASSWORD_AND_PIN = 2
    USERNAME_PASSWORD_CHANGE = 3
    SMART_CARD = 4
    PROTECTED_CERTIFICATE = 5
    UN_PROTECTED_CERTIFICATE = 6

class VpnDataPathType(enum.IntEnum):
    SEND = 0
    RECEIVE = 1

class VpnDomainNameType(enum.IntEnum):
    SUFFIX = 0
    FULLY_QUALIFIED = 1
    RESERVED = 65535

class VpnIPProtocol(enum.IntEnum):
    NONE = 0
    TCP = 6
    UDP = 17
    ICMP = 1
    IPV6_ICMP = 58
    IGMP = 2
    PGM = 113

class VpnManagementConnectionStatus(enum.IntEnum):
    DISCONNECTED = 0
    DISCONNECTING = 1
    CONNECTED = 2
    CONNECTING = 3

class VpnManagementErrorStatus(enum.IntEnum):
    OK = 0
    OTHER = 1
    INVALID_XML_SYNTAX = 2
    PROFILE_NAME_TOO_LONG = 3
    PROFILE_INVALID_APP_ID = 4
    ACCESS_DENIED = 5
    CANNOT_FIND_PROFILE = 6
    ALREADY_DISCONNECTING = 7
    ALREADY_CONNECTED = 8
    GENERAL_AUTHENTICATION_FAILURE = 9
    EAP_FAILURE = 10
    SMART_CARD_FAILURE = 11
    CERTIFICATE_FAILURE = 12
    SERVER_CONFIGURATION = 13
    NO_CONNECTION = 14
    SERVER_CONNECTION = 15
    USER_NAME_PASSWORD = 16
    DNS_NOT_RESOLVABLE = 17
    INVALID_I_P = 18

class VpnNativeProtocolType(enum.IntEnum):
    PPTP = 0
    L2TP = 1
    IPSEC_IKEV2 = 2

class VpnPacketBufferStatus(enum.IntEnum):
    OK = 0
    INVALID_BUFFER_SIZE = 1

class VpnRoutingPolicyType(enum.IntEnum):
    SPLIT_ROUTING = 0
    FORCE_ALL_TRAFFIC_OVER_VPN = 1

_ns_module._register_VpnAppIdType(VpnAppIdType)
_ns_module._register_VpnAuthenticationMethod(VpnAuthenticationMethod)
_ns_module._register_VpnChannelActivityEventType(VpnChannelActivityEventType)
_ns_module._register_VpnChannelRequestCredentialsOptions(VpnChannelRequestCredentialsOptions)
_ns_module._register_VpnCredentialType(VpnCredentialType)
_ns_module._register_VpnDataPathType(VpnDataPathType)
_ns_module._register_VpnDomainNameType(VpnDomainNameType)
_ns_module._register_VpnIPProtocol(VpnIPProtocol)
_ns_module._register_VpnManagementConnectionStatus(VpnManagementConnectionStatus)
_ns_module._register_VpnManagementErrorStatus(VpnManagementErrorStatus)
_ns_module._register_VpnNativeProtocolType(VpnNativeProtocolType)
_ns_module._register_VpnPacketBufferStatus(VpnPacketBufferStatus)
_ns_module._register_VpnRoutingPolicyType(VpnRoutingPolicyType)

VpnAppId = _ns_module.VpnAppId
VpnChannel = _ns_module.VpnChannel
VpnChannelActivityEventArgs = _ns_module.VpnChannelActivityEventArgs
VpnChannelActivityStateChangedArgs = _ns_module.VpnChannelActivityStateChangedArgs
VpnChannelConfiguration = _ns_module.VpnChannelConfiguration
VpnCredential = _ns_module.VpnCredential
VpnCustomCheckBox = _ns_module.VpnCustomCheckBox
VpnCustomComboBox = _ns_module.VpnCustomComboBox
VpnCustomEditBox = _ns_module.VpnCustomEditBox
VpnCustomErrorBox = _ns_module.VpnCustomErrorBox
VpnCustomPromptBooleanInput = _ns_module.VpnCustomPromptBooleanInput
VpnCustomPromptOptionSelector = _ns_module.VpnCustomPromptOptionSelector
VpnCustomPromptText = _ns_module.VpnCustomPromptText
VpnCustomPromptTextInput = _ns_module.VpnCustomPromptTextInput
VpnCustomTextBox = _ns_module.VpnCustomTextBox
VpnDomainNameAssignment = _ns_module.VpnDomainNameAssignment
VpnDomainNameInfo = _ns_module.VpnDomainNameInfo
VpnForegroundActivatedEventArgs = _ns_module.VpnForegroundActivatedEventArgs
VpnForegroundActivationOperation = _ns_module.VpnForegroundActivationOperation
VpnInterfaceId = _ns_module.VpnInterfaceId
VpnManagementAgent = _ns_module.VpnManagementAgent
VpnNamespaceAssignment = _ns_module.VpnNamespaceAssignment
VpnNamespaceInfo = _ns_module.VpnNamespaceInfo
VpnNativeProfile = _ns_module.VpnNativeProfile
VpnPacketBuffer = _ns_module.VpnPacketBuffer
VpnPacketBufferList = _ns_module.VpnPacketBufferList
VpnPickedCredential = _ns_module.VpnPickedCredential
VpnPlugInProfile = _ns_module.VpnPlugInProfile
VpnRoute = _ns_module.VpnRoute
VpnRouteAssignment = _ns_module.VpnRouteAssignment
VpnSystemHealth = _ns_module.VpnSystemHealth
VpnTrafficFilter = _ns_module.VpnTrafficFilter
VpnTrafficFilterAssignment = _ns_module.VpnTrafficFilterAssignment
IVpnChannelStatics = _ns_module.IVpnChannelStatics
IVpnCredential = _ns_module.IVpnCredential
IVpnCustomPrompt = _ns_module.IVpnCustomPrompt
IVpnCustomPromptElement = _ns_module.IVpnCustomPromptElement
IVpnDomainNameInfoFactory = _ns_module.IVpnDomainNameInfoFactory
IVpnInterfaceIdFactory = _ns_module.IVpnInterfaceIdFactory
IVpnNamespaceInfoFactory = _ns_module.IVpnNamespaceInfoFactory
IVpnPacketBufferFactory = _ns_module.IVpnPacketBufferFactory
IVpnPlugIn = _ns_module.IVpnPlugIn
IVpnProfile = _ns_module.IVpnProfile
IVpnRouteFactory = _ns_module.IVpnRouteFactory
