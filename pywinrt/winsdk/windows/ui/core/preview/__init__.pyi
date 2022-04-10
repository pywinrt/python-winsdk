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
    import winsdk.windows.ui.windowmanagement
except Exception:
    pass

class CoreAppWindowPreview(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreAppWindowPreview: ...
    @staticmethod
    def get_id_from_window(window: typing.Optional[winsdk.windows.ui.windowmanagement.AppWindow]) -> _winrt.Int32: ...

class SystemNavigationCloseRequestedPreviewEventArgs(_winrt.Object):
    handled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemNavigationCloseRequestedPreviewEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class SystemNavigationManagerPreview(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> SystemNavigationManagerPreview: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[SystemNavigationManagerPreview]: ...
    def add_close_requested(self, handler: winsdk.windows.foundation.EventHandler[SystemNavigationCloseRequestedPreviewEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_close_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

