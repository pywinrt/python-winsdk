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

class AddFileResult(enum.IntEnum):
    ADDED = 0
    ALREADY_ADDED = 1
    NOT_ALLOWED = 2
    UNAVAILABLE = 3

class FileSelectionMode(enum.IntEnum):
    SINGLE = 0
    MULTIPLE = 1

class SetFileNameResult(enum.IntEnum):
    SUCCEEDED = 0
    NOT_ALLOWED = 1
    UNAVAILABLE = 2

class FileOpenPickerUI(_winrt.Object, interfaces=[]):
    title: str
    allowed_file_types: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    selection_mode: FileSelectionMode
    settings_identifier: str
    @staticmethod
    def _from(obj: _winrt.Object) -> FileOpenPickerUI: ...
    def add_file(self, id: str, file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> AddFileResult: ...
    def can_add_file(self, file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> _winrt.Boolean: ...
    def contains_file(self, id: str) -> _winrt.Boolean: ...
    def remove_file(self, id: str) -> None: ...
    def add_closing(self, handler: winsdk.windows.foundation.TypedEventHandler[FileOpenPickerUI, PickerClosingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_closing(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_file_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[FileOpenPickerUI, FileRemovedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_file_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class FileRemovedEventArgs(_winrt.Object, interfaces=[]):
    id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> FileRemovedEventArgs: ...

class FileSavePickerUI(_winrt.Object, interfaces=[]):
    title: str
    allowed_file_types: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    file_name: str
    settings_identifier: str
    @staticmethod
    def _from(obj: _winrt.Object) -> FileSavePickerUI: ...
    def try_set_file_name(self, value: str) -> SetFileNameResult: ...
    def add_file_name_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[FileSavePickerUI, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_file_name_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_target_file_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[FileSavePickerUI, TargetFileRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_target_file_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PickerClosingDeferral(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PickerClosingDeferral: ...
    def complete(self) -> None: ...

class PickerClosingEventArgs(_winrt.Object, interfaces=[]):
    closing_operation: typing.Optional[PickerClosingOperation]
    is_canceled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PickerClosingEventArgs: ...

class PickerClosingOperation(_winrt.Object, interfaces=[]):
    deadline: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> PickerClosingOperation: ...
    def get_deferral(self) -> typing.Optional[PickerClosingDeferral]: ...

class TargetFileRequest(_winrt.Object, interfaces=[]):
    target_file: typing.Optional[winsdk.windows.storage.IStorageFile]
    @staticmethod
    def _from(obj: _winrt.Object) -> TargetFileRequest: ...
    def get_deferral(self) -> typing.Optional[TargetFileRequestDeferral]: ...

class TargetFileRequestDeferral(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> TargetFileRequestDeferral: ...
    def complete(self) -> None: ...

class TargetFileRequestedEventArgs(_winrt.Object, interfaces=[]):
    request: typing.Optional[TargetFileRequest]
    @staticmethod
    def _from(obj: _winrt.Object) -> TargetFileRequestedEventArgs: ...

