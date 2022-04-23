# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.applicationmodel.datatransfer
except Exception:
    pass

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

try:
    import winsdk.windows.system
except Exception:
    pass

class CortanaPermission(enum.IntEnum):
    BROWSING_HISTORY = 0
    CALENDAR = 1
    CALL_HISTORY = 2
    CONTACTS = 3
    EMAIL = 4
    INPUT_PERSONALIZATION = 5
    LOCATION = 6
    MESSAGING = 7
    MICROPHONE = 8
    PERSONALIZATION = 9
    PHONE_CALL = 10

class CortanaPermissionsChangeResult(enum.IntEnum):
    SUCCESS = 0
    UNAVAILABLE = 1
    DISABLED_BY_POLICY = 2

class CortanaActionableInsights(_winrt.Object, interfaces=[]):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: _winrt.Object) -> CortanaActionableInsights: ...
    @staticmethod
    def get_default() -> typing.Optional[CortanaActionableInsights]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[CortanaActionableInsights]: ...
    def is_available_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @typing.overload
    def show_insights_async(self, datapackage: typing.Optional[winsdk.windows.applicationmodel.datatransfer.DataPackage]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def show_insights_async(self, datapackage: typing.Optional[winsdk.windows.applicationmodel.datatransfer.DataPackage], options: typing.Optional[CortanaActionableInsightsOptions]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def show_insights_for_image_async(self, image_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def show_insights_for_image_async(self, image_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference], options: typing.Optional[CortanaActionableInsightsOptions]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def show_insights_for_text_async(self, text: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def show_insights_for_text_async(self, text: str, options: typing.Optional[CortanaActionableInsightsOptions]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class CortanaActionableInsightsOptions(_winrt.Object, interfaces=[]):
    surrounding_text: str
    content_source_web_link: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: _winrt.Object) -> CortanaActionableInsightsOptions: ...
    def __init__(self) -> None: ...

class CortanaPermissionsManager(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> CortanaPermissionsManager: ...
    def are_permissions_granted_async(self, permissions: typing.Iterable[CortanaPermission]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @staticmethod
    def get_default() -> typing.Optional[CortanaPermissionsManager]: ...
    def grant_permissions_async(self, permissions: typing.Iterable[CortanaPermission]) -> winsdk.windows.foundation.IAsyncOperation[CortanaPermissionsChangeResult]: ...
    def is_supported(self) -> _winrt.Boolean: ...
    def revoke_permissions_async(self, permissions: typing.Iterable[CortanaPermission]) -> winsdk.windows.foundation.IAsyncOperation[CortanaPermissionsChangeResult]: ...

class CortanaSettings(_winrt.Object, interfaces=[]):
    is_voice_activation_enabled: _winrt.Boolean
    has_user_consent_to_voice_activation: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CortanaSettings: ...
    @staticmethod
    def get_default() -> typing.Optional[CortanaSettings]: ...
    @staticmethod
    def is_supported() -> _winrt.Boolean: ...

