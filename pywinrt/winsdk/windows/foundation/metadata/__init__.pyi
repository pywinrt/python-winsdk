# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system

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

Self = typing.TypeVar('Self')

class ApiInformation(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ApiInformation: ...
    @typing.overload
    @staticmethod
    def is_api_contract_present(contract_name: str, major_version: winsdk.system.UInt16, /) -> winsdk.system.Boolean: ...
    @typing.overload
    @staticmethod
    def is_api_contract_present(contract_name: str, major_version: winsdk.system.UInt16, minor_version: winsdk.system.UInt16, /) -> winsdk.system.Boolean: ...
    @staticmethod
    def is_enum_named_value_present(enum_type_name: str, value_name: str, /) -> winsdk.system.Boolean: ...
    @staticmethod
    def is_event_present(type_name: str, event_name: str, /) -> winsdk.system.Boolean: ...
    @typing.overload
    @staticmethod
    def is_method_present(type_name: str, method_name: str, /) -> winsdk.system.Boolean: ...
    @typing.overload
    @staticmethod
    def is_method_present(type_name: str, method_name: str, input_parameter_count: winsdk.system.UInt32, /) -> winsdk.system.Boolean: ...
    @staticmethod
    def is_property_present(type_name: str, property_name: str, /) -> winsdk.system.Boolean: ...
    @staticmethod
    def is_read_only_property_present(type_name: str, property_name: str, /) -> winsdk.system.Boolean: ...
    @staticmethod
    def is_type_present(type_name: str, /) -> winsdk.system.Boolean: ...
    @staticmethod
    def is_writeable_property_present(type_name: str, property_name: str, /) -> winsdk.system.Boolean: ...

