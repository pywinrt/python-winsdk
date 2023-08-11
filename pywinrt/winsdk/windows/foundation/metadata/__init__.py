# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Foundation.Metadata")

class AttributeTargets(enum.IntFlag):
    ALL = 0xffffffff
    DELEGATE = 0x1
    ENUM = 0x2
    EVENT = 0x4
    FIELD = 0x8
    INTERFACE = 0x10
    METHOD = 0x40
    PARAMETER = 0x80
    PROPERTY = 0x100
    RUNTIME_CLASS = 0x200
    STRUCT = 0x400
    INTERFACE_IMPL = 0x800
    API_CONTRACT = 0x2000

class CompositionType(enum.IntEnum):
    PROTECTED = 1
    PUBLIC = 2

class DeprecationType(enum.IntEnum):
    DEPRECATE = 0
    REMOVE = 1

class FeatureStage(enum.IntEnum):
    ALWAYS_DISABLED = 0
    DISABLED_BY_DEFAULT = 1
    ENABLED_BY_DEFAULT = 2
    ALWAYS_ENABLED = 3

class GCPressureAmount(enum.IntEnum):
    LOW = 0
    MEDIUM = 1
    HIGH = 2

class MarshalingType(enum.IntEnum):
    NONE = 1
    AGILE = 2
    STANDARD = 3
    INVALID_MARSHALING = 0

class Platform(enum.IntEnum):
    WINDOWS = 0
    WINDOWS_PHONE = 1

class ThreadingModel(enum.IntEnum):
    S_T_A = 1
    M_T_A = 2
    BOTH = 3
    INVALID_THREADING = 0

_ns_module._register_AttributeTargets(AttributeTargets)
_ns_module._register_CompositionType(CompositionType)
_ns_module._register_DeprecationType(DeprecationType)
_ns_module._register_FeatureStage(FeatureStage)
_ns_module._register_GCPressureAmount(GCPressureAmount)
_ns_module._register_MarshalingType(MarshalingType)
_ns_module._register_Platform(Platform)
_ns_module._register_ThreadingModel(ThreadingModel)

ApiInformation = _ns_module.ApiInformation
