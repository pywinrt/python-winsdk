# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Radios")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class RadioAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED = 1
    DENIED_BY_USER = 2
    DENIED_BY_SYSTEM = 3

class RadioKind(enum.IntEnum):
    OTHER = 0
    WI_FI = 1
    MOBILE_BROADBAND = 2
    BLUETOOTH = 3
    F_M = 4

class RadioState(enum.IntEnum):
    UNKNOWN = 0
    ON = 1
    OFF = 2
    DISABLED = 3

_ns_module._register_RadioAccessStatus(RadioAccessStatus)
_ns_module._register_RadioKind(RadioKind)
_ns_module._register_RadioState(RadioState)

Radio = _ns_module.Radio
