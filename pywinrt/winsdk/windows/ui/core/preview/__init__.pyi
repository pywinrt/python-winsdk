# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.ui.windowmanagement

Self = typing.TypeVar('Self')

class CoreAppWindowPreview(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreAppWindowPreview: ...
    @staticmethod
    def get_id_from_window(window: typing.Optional[winsdk.windows.ui.windowmanagement.AppWindow], /) -> winsdk.system.Int32: ...

class SystemNavigationCloseRequestedPreviewEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SystemNavigationCloseRequestedPreviewEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class SystemNavigationManagerPreview(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SystemNavigationManagerPreview: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[SystemNavigationManagerPreview]: ...
    def add_close_requested(self, handler: winsdk.windows.foundation.EventHandler[SystemNavigationCloseRequestedPreviewEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_close_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

