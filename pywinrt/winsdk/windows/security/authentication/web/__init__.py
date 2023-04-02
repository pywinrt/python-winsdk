# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Security.Authentication.Web")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class TokenBindingKeyType(enum.IntEnum):
    RSA2048 = 0
    ECDSA_P256 = 1
    ANY_EXISTING = 2

class WebAuthenticationOptions(enum.IntFlag):
    NONE = 0
    SILENT_MODE = 0x1
    USE_TITLE = 0x2
    USE_HTTP_POST = 0x4
    USE_CORPORATE_NETWORK = 0x8

class WebAuthenticationStatus(enum.IntEnum):
    SUCCESS = 0
    USER_CANCEL = 1
    ERROR_HTTP = 2

_ns_module._register_TokenBindingKeyType(TokenBindingKeyType)
_ns_module._register_WebAuthenticationOptions(WebAuthenticationOptions)
_ns_module._register_WebAuthenticationStatus(WebAuthenticationStatus)

WebAuthenticationBroker = _ns_module.WebAuthenticationBroker
WebAuthenticationResult = _ns_module.WebAuthenticationResult
