# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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

class PreviewBuildsManager(_winrt.Object):
    are_preview_builds_allowed: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PreviewBuildsManager: ...
    def get_current_state(self) -> typing.Optional[PreviewBuildsState]: ...
    @staticmethod
    def get_default() -> typing.Optional[PreviewBuildsManager]: ...
    @staticmethod
    def is_supported() -> _winrt.Boolean: ...
    def sync_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]]: ...

class PreviewBuildsState(_winrt.Object):
    properties: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    @staticmethod
    def _from(obj: _winrt.Object) -> PreviewBuildsState: ...

