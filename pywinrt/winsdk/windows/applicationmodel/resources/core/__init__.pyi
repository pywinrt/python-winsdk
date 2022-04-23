# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

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
    import winsdk.windows.storage
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

try:
    import winsdk.windows.ui
except Exception:
    pass

class ResourceCandidateKind(enum.IntEnum):
    STRING = 0
    FILE = 1
    EMBEDDED_DATA = 2

class ResourceQualifierPersistence(enum.IntEnum):
    NONE = 0
    LOCAL_MACHINE = 1

class ResourceLayoutInfo:
    major_version: _winrt.UInt32
    minor_version: _winrt.UInt32
    resource_subtree_count: _winrt.UInt32
    named_resource_count: _winrt.UInt32
    checksum: _winrt.Int32
    def __init__(self, major_version: _winrt.UInt32, minor_version: _winrt.UInt32, resource_subtree_count: _winrt.UInt32, named_resource_count: _winrt.UInt32, checksum: _winrt.Int32) -> None: ...

class NamedResource(_winrt.Object, interfaces=[]):
    candidates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ResourceCandidate]]
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: _winrt.Object) -> NamedResource: ...
    @typing.overload
    def resolve(self) -> typing.Optional[ResourceCandidate]: ...
    @typing.overload
    def resolve(self, resource_context: typing.Optional[ResourceContext]) -> typing.Optional[ResourceCandidate]: ...
    @typing.overload
    def resolve_all(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ResourceCandidate]]: ...
    @typing.overload
    def resolve_all(self, resource_context: typing.Optional[ResourceContext]) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ResourceCandidate]]: ...

class ResourceCandidate(_winrt.Object, interfaces=[]):
    is_default: _winrt.Boolean
    is_match: _winrt.Boolean
    is_match_as_default: _winrt.Boolean
    qualifiers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[ResourceQualifier]]
    value_as_string: str
    kind: ResourceCandidateKind
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceCandidate: ...
    def get_qualifier_value(self, qualifier_name: str) -> str: ...
    def get_value_as_file_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...
    def get_value_as_stream_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStream]: ...

class ResourceCandidateVectorView(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IVectorView[ResourceCandidate], winsdk.windows.foundation.collections.IIterable[ResourceCandidate]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceCandidateVectorView: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[ResourceCandidate]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[ResourceCandidate]: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[typing.Optional[ResourceCandidate]]]: ...
    def index_of(self, value: typing.Optional[ResourceCandidate]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...

class ResourceContext(_winrt.Object, interfaces=[]):
    languages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    qualifier_values: typing.Optional[winsdk.windows.foundation.collections.IObservableMap[str, str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceContext: ...
    def __init__(self) -> None: ...
    def clone(self) -> typing.Optional[ResourceContext]: ...
    @staticmethod
    def create_matching_context(result: typing.Iterable[typing.Optional[ResourceQualifier]]) -> typing.Optional[ResourceContext]: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[ResourceContext]: ...
    @staticmethod
    def get_for_u_i_context(context: typing.Optional[winsdk.windows.ui.UIContext]) -> typing.Optional[ResourceContext]: ...
    @staticmethod
    def get_for_view_independent_use() -> typing.Optional[ResourceContext]: ...
    def override_to_match(self, result: typing.Iterable[typing.Optional[ResourceQualifier]]) -> None: ...
    @typing.overload
    def reset(self) -> None: ...
    @typing.overload
    def reset(self, qualifier_names: typing.Iterable[str]) -> None: ...
    @typing.overload
    @staticmethod
    def reset_global_qualifier_values() -> None: ...
    @typing.overload
    @staticmethod
    def reset_global_qualifier_values(qualifier_names: typing.Iterable[str]) -> None: ...
    @typing.overload
    @staticmethod
    def set_global_qualifier_value(key: str, value: str) -> None: ...
    @typing.overload
    @staticmethod
    def set_global_qualifier_value(key: str, value: str, persistence: ResourceQualifierPersistence) -> None: ...

class ResourceContextLanguagesVectorView(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IVectorView[str], winsdk.windows.foundation.collections.IIterable[str]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceContextLanguagesVectorView: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[str]]: ...
    def get_at(self, index: _winrt.UInt32) -> str: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[str]]: ...
    def index_of(self, value: str) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...

class ResourceManager(_winrt.Object, interfaces=[]):
    all_resource_maps: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, ResourceMap]]
    default_context: typing.Optional[ResourceContext]
    main_resource_map: typing.Optional[ResourceMap]
    current: typing.Optional[ResourceManager]
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceManager: ...
    def get_all_named_resources_for_package(self, package_name: str, resource_layout_info: ResourceLayoutInfo) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[NamedResource]]: ...
    def get_all_subtrees_for_package(self, package_name: str, resource_layout_info: ResourceLayoutInfo) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[ResourceMap]]: ...
    @staticmethod
    def is_resource_reference(resource_reference: str) -> _winrt.Boolean: ...
    def load_pri_files(self, files: typing.Iterable[typing.Optional[winsdk.windows.storage.IStorageFile]]) -> None: ...
    def unload_pri_files(self, files: typing.Iterable[typing.Optional[winsdk.windows.storage.IStorageFile]]) -> None: ...

class ResourceMap(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IMapView[str, NamedResource], winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[str, NamedResource]]]):
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceMap: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, NamedResource]]]: ...
    def get_subtree(self, reference: str) -> typing.Optional[ResourceMap]: ...
    @typing.overload
    def get_value(self, resource: str) -> typing.Optional[ResourceCandidate]: ...
    @typing.overload
    def get_value(self, resource: str, context: typing.Optional[ResourceContext]) -> typing.Optional[ResourceCandidate]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[NamedResource]: ...
    def split(self, ) -> typing.Tuple[typing.Optional[winsdk.windows.foundation.collections.IMapView[str, NamedResource]], typing.Optional[winsdk.windows.foundation.collections.IMapView[str, NamedResource]]]: ...

class ResourceMapIterator(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, NamedResource]]]):
    current: typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, NamedResource]]
    has_current: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceMapIterator: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, NamedResource]]]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class ResourceMapMapView(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IMapView[str, ResourceMap], winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[str, ResourceMap]]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceMapMapView: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, ResourceMap]]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[ResourceMap]: ...
    def split(self, ) -> typing.Tuple[typing.Optional[winsdk.windows.foundation.collections.IMapView[str, ResourceMap]], typing.Optional[winsdk.windows.foundation.collections.IMapView[str, ResourceMap]]]: ...

class ResourceMapMapViewIterator(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, ResourceMap]]]):
    current: typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, ResourceMap]]
    has_current: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceMapMapViewIterator: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, ResourceMap]]]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class ResourceQualifier(_winrt.Object, interfaces=[]):
    is_default: _winrt.Boolean
    is_match: _winrt.Boolean
    qualifier_name: str
    qualifier_value: str
    score: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceQualifier: ...

class ResourceQualifierMapView(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IMapView[str, str], winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[str, str]]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceQualifierMapView: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, str]]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> str: ...
    def split(self, ) -> typing.Tuple[typing.Optional[winsdk.windows.foundation.collections.IMapView[str, str]], typing.Optional[winsdk.windows.foundation.collections.IMapView[str, str]]]: ...

class ResourceQualifierObservableMap(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IObservableMap[str, str], winsdk.windows.foundation.collections.IMap[str, str], winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[str, str]]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceQualifierObservableMap: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, str]]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[str, str]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def insert(self, key: str, value: str) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> str: ...
    def remove(self, key: str) -> None: ...
    def add_map_changed(self, vhnd: winsdk.windows.foundation.collections.MapChangedEventHandler[str, str]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_map_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ResourceQualifierVectorView(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IVectorView[ResourceQualifier], winsdk.windows.foundation.collections.IIterable[ResourceQualifier]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ResourceQualifierVectorView: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[ResourceQualifier]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[ResourceQualifier]: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[typing.Optional[ResourceQualifier]]]: ...
    def index_of(self, value: typing.Optional[ResourceQualifier]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...

