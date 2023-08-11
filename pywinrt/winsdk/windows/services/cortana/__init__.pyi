# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.datatransfer
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams
import winsdk.windows.system

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

Self = typing.TypeVar('Self')

class CortanaActionableInsights(winsdk.system.Object):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CortanaActionableInsights: ...
    @staticmethod
    def get_default() -> typing.Optional[CortanaActionableInsights]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User], /) -> typing.Optional[CortanaActionableInsights]: ...
    def is_available_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def show_insights_async(self, datapackage: typing.Optional[winsdk.windows.applicationmodel.datatransfer.DataPackage], /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_insights_async(self, datapackage: typing.Optional[winsdk.windows.applicationmodel.datatransfer.DataPackage], options: typing.Optional[CortanaActionableInsightsOptions], /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_insights_for_image_async(self, image_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference], /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_insights_for_image_async(self, image_stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference], options: typing.Optional[CortanaActionableInsightsOptions], /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_insights_for_text_async(self, text: str, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_insights_for_text_async(self, text: str, options: typing.Optional[CortanaActionableInsightsOptions], /) -> winsdk.windows.foundation.IAsyncAction: ...

class CortanaActionableInsightsOptions(winsdk.system.Object):
    surrounding_text: str
    content_source_web_link: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CortanaActionableInsightsOptions: ...
    def __new__(cls: typing.Type[CortanaActionableInsightsOptions]) -> CortanaActionableInsightsOptions:...

class CortanaPermissionsManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CortanaPermissionsManager: ...
    def are_permissions_granted_async(self, permissions: typing.Iterable[CortanaPermission], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @staticmethod
    def get_default() -> typing.Optional[CortanaPermissionsManager]: ...
    def grant_permissions_async(self, permissions: typing.Iterable[CortanaPermission], /) -> winsdk.windows.foundation.IAsyncOperation[CortanaPermissionsChangeResult]: ...
    def is_supported(self) -> winsdk.system.Boolean: ...
    def revoke_permissions_async(self, permissions: typing.Iterable[CortanaPermission], /) -> winsdk.windows.foundation.IAsyncOperation[CortanaPermissionsChangeResult]: ...

class CortanaSettings(winsdk.system.Object):
    is_voice_activation_enabled: winsdk.system.Boolean
    has_user_consent_to_voice_activation: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CortanaSettings: ...
    @staticmethod
    def get_default() -> typing.Optional[CortanaSettings]: ...
    @staticmethod
    def is_supported() -> winsdk.system.Boolean: ...

