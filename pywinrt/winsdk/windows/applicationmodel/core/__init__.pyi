# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.applicationmodel
except Exception:
    pass

try:
    import winsdk.windows.applicationmodel.activation
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
    import winsdk.windows.system
except Exception:
    pass

try:
    import winsdk.windows.ui.core
except Exception:
    pass

class AppRestartFailureReason(enum.IntEnum):
    RESTART_PENDING = 0
    NOT_IN_FOREGROUND = 1
    INVALID_USER = 2
    OTHER = 3

class AppListEntry(_winrt.Object, interfaces=[]):
    display_info: typing.Optional[winsdk.windows.applicationmodel.AppDisplayInfo]
    app_user_model_id: str
    app_info: typing.Optional[winsdk.windows.applicationmodel.AppInfo]
    @staticmethod
    def _from(obj: _winrt.Object) -> AppListEntry: ...
    def launch_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def launch_for_user_async(self, user: typing.Optional[winsdk.windows.system.User]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...

class CoreApplication(_winrt.Object):
    id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    main_view: typing.Optional[CoreApplicationView]
    views: typing.Optional[winsdk.windows.foundation.collections.IVectorView[CoreApplicationView]]
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreApplication: ...
    @typing.overload
    @staticmethod
    def create_new_view() -> typing.Optional[CoreApplicationView]: ...
    @typing.overload
    @staticmethod
    def create_new_view(view_source: typing.Optional[IFrameworkViewSource]) -> typing.Optional[CoreApplicationView]: ...
    @typing.overload
    @staticmethod
    def create_new_view(runtime_type: str, entry_point: str) -> typing.Optional[CoreApplicationView]: ...
    @staticmethod
    def decrement_application_use_count() -> None: ...
    @staticmethod
    def enable_prelaunch(value: _winrt.Boolean) -> None: ...
    @staticmethod
    def exit() -> None: ...
    @staticmethod
    def get_current_view() -> typing.Optional[CoreApplicationView]: ...
    @staticmethod
    def increment_application_use_count() -> None: ...
    @staticmethod
    def request_restart_async(launch_arguments: str) -> winsdk.windows.foundation.IAsyncOperation[AppRestartFailureReason]: ...
    @staticmethod
    def request_restart_for_user_async(user: typing.Optional[winsdk.windows.system.User], launch_arguments: str) -> winsdk.windows.foundation.IAsyncOperation[AppRestartFailureReason]: ...
    @staticmethod
    def run(view_source: typing.Optional[IFrameworkViewSource]) -> None: ...
    @staticmethod
    def run_with_activation_factories(activation_factory_callback: typing.Optional[winsdk.windows.foundation.IGetActivationFactory]) -> None: ...
    @staticmethod
    def add_unhandled_error_detected(handler: winsdk.windows.foundation.EventHandler[UnhandledErrorDetectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_unhandled_error_detected(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_exiting(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_exiting(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_background_activated(handler: winsdk.windows.foundation.EventHandler[winsdk.windows.applicationmodel.activation.BackgroundActivatedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_background_activated(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_entered_background(handler: winsdk.windows.foundation.EventHandler[winsdk.windows.applicationmodel.EnteredBackgroundEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_entered_background(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_leaving_background(handler: winsdk.windows.foundation.EventHandler[winsdk.windows.applicationmodel.LeavingBackgroundEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_leaving_background(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_resuming(handler: winsdk.windows.foundation.EventHandler[_winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_resuming(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_suspending(handler: winsdk.windows.foundation.EventHandler[winsdk.windows.applicationmodel.SuspendingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_suspending(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CoreApplicationView(_winrt.Object, interfaces=[]):
    core_window: typing.Optional[winsdk.windows.ui.core.CoreWindow]
    is_hosted: _winrt.Boolean
    is_main: _winrt.Boolean
    dispatcher: typing.Optional[winsdk.windows.ui.core.CoreDispatcher]
    is_component: _winrt.Boolean
    title_bar: typing.Optional[CoreApplicationViewTitleBar]
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    dispatcher_queue: typing.Optional[winsdk.windows.system.DispatcherQueue]
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreApplicationView: ...
    def add_activated(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreApplicationView, winsdk.windows.applicationmodel.activation.IActivatedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_activated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_hosted_view_closing(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreApplicationView, HostedViewClosingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_hosted_view_closing(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CoreApplicationViewTitleBar(_winrt.Object, interfaces=[]):
    extend_view_into_title_bar: _winrt.Boolean
    height: _winrt.Double
    is_visible: _winrt.Boolean
    system_overlay_left_inset: _winrt.Double
    system_overlay_right_inset: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreApplicationViewTitleBar: ...
    def add_is_visible_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreApplicationViewTitleBar, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_visible_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_layout_metrics_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreApplicationViewTitleBar, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_layout_metrics_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HostedViewClosingEventArgs(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> HostedViewClosingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class UnhandledError(_winrt.Object, interfaces=[]):
    handled: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> UnhandledError: ...
    def propagate(self) -> None: ...

class UnhandledErrorDetectedEventArgs(_winrt.Object, interfaces=[]):
    unhandled_error: typing.Optional[UnhandledError]
    @staticmethod
    def _from(obj: _winrt.Object) -> UnhandledErrorDetectedEventArgs: ...

class ICoreApplicationUnhandledError(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> ICoreApplicationUnhandledError: ...
    def add_unhandled_error_detected(self, handler: winsdk.windows.foundation.EventHandler[UnhandledErrorDetectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_unhandled_error_detected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IFrameworkView(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> IFrameworkView: ...
    def initialize(self, application_view: typing.Optional[CoreApplicationView]) -> None: ...
    def load(self, entry_point: str) -> None: ...
    def run(self) -> None: ...
    def set_window(self, window: typing.Optional[winsdk.windows.ui.core.CoreWindow]) -> None: ...
    def uninitialize(self) -> None: ...

class IFrameworkViewSource(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> IFrameworkViewSource: ...
    def create_view(self) -> typing.Optional[IFrameworkView]: ...

