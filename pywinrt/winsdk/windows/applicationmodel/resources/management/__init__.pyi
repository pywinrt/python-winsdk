# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class IndexedResourceType(enum.IntEnum):
    STRING = 0
    PATH = 1
    EMBEDDED_DATA = 2

Self = typing.TypeVar('Self')

class IndexedResourceCandidate(winsdk.system.Object):
    metadata: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, str]]
    qualifiers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[IndexedResourceQualifier]]
    type: IndexedResourceType
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    value_as_string: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> IndexedResourceCandidate: ...
    def get_qualifier_value(self, qualifier_name: str, /) -> str: ...

class IndexedResourceQualifier(winsdk.system.Object):
    qualifier_name: str
    qualifier_value: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> IndexedResourceQualifier: ...

class ResourceIndexer(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ResourceIndexer: ...
    @typing.overload
    def __new__(cls: typing.Type[ResourceIndexer], project_root: typing.Optional[winsdk.windows.foundation.Uri], extension_dll_path: typing.Optional[winsdk.windows.foundation.Uri]) -> ResourceIndexer:...
    @typing.overload
    def __new__(cls: typing.Type[ResourceIndexer], project_root: typing.Optional[winsdk.windows.foundation.Uri]) -> ResourceIndexer:...
    def index_file_contents_async(self, file: typing.Optional[winsdk.windows.foundation.Uri], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[IndexedResourceCandidate]]: ...
    def index_file_path(self, file_path: typing.Optional[winsdk.windows.foundation.Uri], /) -> typing.Optional[IndexedResourceCandidate]: ...

