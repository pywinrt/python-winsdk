# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.ExtendedExecution.Foreground")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

class ExtendedExecutionForegroundReason(enum.IntEnum):
    UNSPECIFIED = 0
    SAVING_DATA = 1
    BACKGROUND_AUDIO = 2
    UNCONSTRAINED = 3

class ExtendedExecutionForegroundResult(enum.IntEnum):
    ALLOWED = 0
    DENIED = 1

class ExtendedExecutionForegroundRevokedReason(enum.IntEnum):
    RESUMED = 0
    SYSTEM_POLICY = 1

_ns_module._register_ExtendedExecutionForegroundReason(ExtendedExecutionForegroundReason)
_ns_module._register_ExtendedExecutionForegroundResult(ExtendedExecutionForegroundResult)
_ns_module._register_ExtendedExecutionForegroundRevokedReason(ExtendedExecutionForegroundRevokedReason)

ExtendedExecutionForegroundRevokedEventArgs = _ns_module.ExtendedExecutionForegroundRevokedEventArgs
ExtendedExecutionForegroundSession = _ns_module.ExtendedExecutionForegroundSession
