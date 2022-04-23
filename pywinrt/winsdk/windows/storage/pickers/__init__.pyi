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
    import winsdk.windows.system
except Exception:
    pass

class PickerLocationId(enum.IntEnum):
    DOCUMENTS_LIBRARY = 0
    COMPUTER_FOLDER = 1
    DESKTOP = 2
    DOWNLOADS = 3
    HOME_GROUP = 4
    MUSIC_LIBRARY = 5
    PICTURES_LIBRARY = 6
    VIDEOS_LIBRARY = 7
    OBJECTS3_D = 8
    UNSPECIFIED = 9

class PickerViewMode(enum.IntEnum):
    LIST = 0
    THUMBNAIL = 1

class FileExtensionVector(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IVector[str], winsdk.windows.foundation.collections.IIterable[str]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> FileExtensionVector: ...
    def append(self, value: str) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[str]]: ...
    def get_at(self, index: _winrt.UInt32) -> str: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[str]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]: ...
    def index_of(self, value: str) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...
    def insert_at(self, index: _winrt.UInt32, value: str) -> None: ...
    def remove_at(self, index: _winrt.UInt32) -> None: ...
    def remove_at_end(self) -> None: ...
    def replace_all(self, items: typing.Sequence[str]) -> None: ...
    def set_at(self, index: _winrt.UInt32, value: str) -> None: ...

class FileOpenPicker(_winrt.Object, interfaces=[]):
    view_mode: PickerViewMode
    suggested_start_location: PickerLocationId
    settings_identifier: str
    commit_button_text: str
    file_type_filter: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    continuation_data: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: _winrt.Object) -> FileOpenPicker: ...
    def __init__(self) -> None: ...
    @staticmethod
    def create_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[FileOpenPicker]: ...
    def pick_multiple_files_and_continue(self) -> None: ...
    def pick_multiple_files_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.storage.StorageFile]]: ...
    def pick_single_file_and_continue(self) -> None: ...
    @typing.overload
    def pick_single_file_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...
    @typing.overload
    def pick_single_file_async(self, picker_operation_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...
    @staticmethod
    def resume_pick_single_file_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...

class FilePickerFileTypesOrderedMap(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IMap[str, winsdk.windows.foundation.collections.IVector[str]], winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.windows.foundation.collections.IVector[str]]]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> FilePickerFileTypesOrderedMap: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.windows.foundation.collections.IVector[str]]]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.windows.foundation.collections.IVector[str]]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def insert(self, key: str, value: winsdk.windows.foundation.collections.IVector[str]) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...
    def remove(self, key: str) -> None: ...

class FilePickerSelectedFilesArray(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.storage.StorageFile], winsdk.windows.foundation.collections.IIterable[winsdk.windows.storage.StorageFile]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> FilePickerSelectedFilesArray: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.storage.StorageFile]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[winsdk.windows.storage.StorageFile]: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[typing.Optional[winsdk.windows.storage.StorageFile]]]: ...
    def index_of(self, value: typing.Optional[winsdk.windows.storage.StorageFile]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...

class FileSavePicker(_winrt.Object, interfaces=[]):
    suggested_start_location: PickerLocationId
    suggested_save_file: typing.Optional[winsdk.windows.storage.StorageFile]
    suggested_file_name: str
    settings_identifier: str
    default_file_extension: str
    commit_button_text: str
    file_type_choices: typing.Optional[winsdk.windows.foundation.collections.IMap[str, winsdk.windows.foundation.collections.IVector[str]]]
    continuation_data: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    enterprise_id: str
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: _winrt.Object) -> FileSavePicker: ...
    def __init__(self) -> None: ...
    @staticmethod
    def create_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[FileSavePicker]: ...
    def pick_save_file_and_continue(self) -> None: ...
    def pick_save_file_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...

class FolderPicker(_winrt.Object, interfaces=[]):
    view_mode: PickerViewMode
    suggested_start_location: PickerLocationId
    settings_identifier: str
    commit_button_text: str
    file_type_filter: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    continuation_data: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: _winrt.Object) -> FolderPicker: ...
    def __init__(self) -> None: ...
    @staticmethod
    def create_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[FolderPicker]: ...
    def pick_folder_and_continue(self) -> None: ...
    def pick_single_folder_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFolder]: ...

