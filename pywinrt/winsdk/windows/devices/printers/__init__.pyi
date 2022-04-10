# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class IppAttributeErrorReason(enum.IntEnum):
    REQUEST_ENTITY_TOO_LARGE = 0
    ATTRIBUTE_NOT_SUPPORTED = 1
    ATTRIBUTE_VALUES_NOT_SUPPORTED = 2
    ATTRIBUTE_NOT_SETTABLE = 3
    CONFLICTING_ATTRIBUTES = 4

class IppAttributeValueKind(enum.IntEnum):
    UNSUPPORTED = 0
    UNKNOWN = 1
    NO_VALUE = 2
    INTEGER = 3
    BOOLEAN = 4
    ENUM = 5
    OCTET_STRING = 6
    DATE_TIME = 7
    RESOLUTION = 8
    RANGE_OF_INTEGER = 9
    COLLECTION = 10
    TEXT_WITH_LANGUAGE = 11
    NAME_WITH_LANGUAGE = 12
    TEXT_WITHOUT_LANGUAGE = 13
    NAME_WITHOUT_LANGUAGE = 14
    KEYWORD = 15
    URI = 16
    URI_SCHEMA = 17
    CHARSET = 18
    NATURAL_LANGUAGE = 19
    MIME_MEDIA_TYPE = 20

class IppResolutionUnit(enum.IntEnum):
    DOTS_PER_INCH = 0
    DOTS_PER_CENTIMETER = 1

class IppAttributeError(_winrt.Object):
    extended_error: winsdk.windows.foundation.HResult
    reason: IppAttributeErrorReason
    @staticmethod
    def _from(obj: _winrt.Object) -> IppAttributeError: ...
    def get_unsupported_values(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[IppAttributeValue]]: ...

class IppAttributeValue(_winrt.Object):
    kind: IppAttributeValueKind
    @staticmethod
    def _from(obj: _winrt.Object) -> IppAttributeValue: ...
    @staticmethod
    def create_boolean(value: _winrt.Boolean) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_boolean_array(values: typing.Iterable[_winrt.Boolean]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_charset(value: str) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_charset_array(values: typing.Iterable[str]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_collection(member_attributes: typing.Iterable[typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, IppAttributeValue]]]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_collection_array(member_attributes_array: typing.Iterable[typing.Optional[winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[str, IppAttributeValue]]]]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_date_time(value: winsdk.windows.foundation.DateTime) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_date_time_array(values: typing.Iterable[winsdk.windows.foundation.DateTime]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_enum(value: _winrt.Int32) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_enum_array(values: typing.Iterable[_winrt.Int32]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_integer(value: _winrt.Int32) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_integer_array(values: typing.Iterable[_winrt.Int32]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_keyword(value: str) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_keyword_array(values: typing.Iterable[str]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_mime_media(value: str) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_mime_media_array(values: typing.Iterable[str]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_name_with_language(value: typing.Optional[IppTextWithLanguage]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_name_with_language_array(values: typing.Iterable[typing.Optional[IppTextWithLanguage]]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_name_without_language(value: str) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_name_without_language_array(values: typing.Iterable[str]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_natural_language(value: str) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_natural_language_array(values: typing.Iterable[str]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_no_value() -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_octet_string(value: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_octet_string_array(values: typing.Iterable[typing.Optional[winsdk.windows.storage.streams.IBuffer]]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_range_of_integer(value: typing.Optional[IppIntegerRange]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_range_of_integer_array(values: typing.Iterable[typing.Optional[IppIntegerRange]]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_resolution(value: typing.Optional[IppResolution]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_resolution_array(values: typing.Iterable[typing.Optional[IppResolution]]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_text_with_language(value: typing.Optional[IppTextWithLanguage]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_text_with_language_array(values: typing.Iterable[typing.Optional[IppTextWithLanguage]]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_text_without_language(value: str) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_text_without_language_array(values: typing.Iterable[str]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_unknown() -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_unsupported() -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_uri(value: typing.Optional[winsdk.windows.foundation.Uri]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_uri_array(values: typing.Iterable[typing.Optional[winsdk.windows.foundation.Uri]]) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_uri_schema(value: str) -> typing.Optional[IppAttributeValue]: ...
    @staticmethod
    def create_uri_schema_array(values: typing.Iterable[str]) -> typing.Optional[IppAttributeValue]: ...
    def get_boolean_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[_winrt.Boolean]]: ...
    def get_charset_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    def get_collection_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.foundation.collections.IMapView[str, IppAttributeValue]]]: ...
    def get_date_time_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.foundation.DateTime]]: ...
    def get_enum_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[_winrt.Int32]]: ...
    def get_integer_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[_winrt.Int32]]: ...
    def get_keyword_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    def get_mime_media_type_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    def get_name_with_language_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[IppTextWithLanguage]]: ...
    def get_name_without_language_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    def get_natural_language_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    def get_octet_string_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.storage.streams.IBuffer]]: ...
    def get_range_of_integer_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[IppIntegerRange]]: ...
    def get_resolution_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[IppResolution]]: ...
    def get_text_with_language_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[IppTextWithLanguage]]: ...
    def get_text_without_language_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    def get_uri_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.foundation.Uri]]: ...
    def get_uri_schema_array(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...

class IppIntegerRange(_winrt.Object):
    end: _winrt.Int32
    start: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> IppIntegerRange: ...
    def __init__(self, start: _winrt.Int32, end: _winrt.Int32) -> None: ...

class IppPrintDevice(_winrt.Object):
    printer_name: str
    printer_uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: _winrt.Object) -> IppPrintDevice: ...
    def get_printer_attributes(self, attribute_names: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.collections.IMap[str, IppAttributeValue]]: ...
    def get_printer_attributes_as_buffer(self, attribute_names: typing.Iterable[str]) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    def set_printer_attributes(self, printer_attributes: typing.Iterable[typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, IppAttributeValue]]]) -> typing.Optional[IppSetAttributesResult]: ...
    def set_printer_attributes_from_buffer(self, printer_attributes_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> typing.Optional[IppSetAttributesResult]: ...

class IppResolution(_winrt.Object):
    height: _winrt.Int32
    unit: IppResolutionUnit
    width: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> IppResolution: ...
    def __init__(self, width: _winrt.Int32, height: _winrt.Int32, unit: IppResolutionUnit) -> None: ...

class IppSetAttributesResult(_winrt.Object):
    attribute_errors: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, IppAttributeError]]
    succeeded: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> IppSetAttributesResult: ...

class IppTextWithLanguage(_winrt.Object):
    language: str
    value: str
    @staticmethod
    def _from(obj: _winrt.Object) -> IppTextWithLanguage: ...
    def __init__(self, language: str, text: str) -> None: ...

class Print3DDevice(_winrt.Object):
    print_schema: typing.Optional[PrintSchema]
    @staticmethod
    def _from(obj: _winrt.Object) -> Print3DDevice: ...
    @staticmethod
    def from_id_async(device_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[Print3DDevice]]: ...
    @staticmethod
    def get_device_selector() -> str: ...

class PrintSchema(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PrintSchema: ...
    def get_capabilities_async(self, constrain_ticket: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]]: ...
    def get_default_print_ticket_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]]: ...
    def merge_and_validate_with_default_print_ticket_async(self, delta_ticket: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType]]: ...

