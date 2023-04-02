# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel
import winsdk.windows.applicationmodel.activation
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.system
import winsdk.windows.ui.core

class AppRestartFailureReason(enum.IntEnum):
    RESTART_PENDING = 0
    NOT_IN_FOREGROUND = 1
    INVALID_USER = 2
    OTHER = 3

Self = typing.TypeVar('Self')

class AppListEntry(winsdk.system.Object):
    display_info: typing.Optional[winsdk.windows.applicationmodel.AppDisplayInfo]
    app_user_model_id: str
    app_info: typing.Optional[winsdk.windows.applicationmodel.AppInfo]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> AppListEntry: ...
    def launch_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def launch_for_user_async(self, user: typing.Optional[winsdk.windows.system.User]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class CoreApplication(winsdk.system.Object):
    id: typing.ClassVar[str]
    properties: typing.ClassVar[typing.Optional[winsdk.windows.foundation.collections.IPropertySet]]
    main_view: typing.ClassVar[typing.Optional[CoreApplicationView]]
    views: typing.ClassVar[typing.Optional[winsdk.windows.foundation.collections.IVectorView[CoreApplicationView]]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CoreApplication: ...
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
    def enable_prelaunch(value: winsdk.system.Boolean) -> None: ...
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
    def add_exiting(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
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
    def add_resuming(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_resuming(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    @staticmethod
    def add_suspending(handler: winsdk.windows.foundation.EventHandler[winsdk.windows.applicationmodel.SuspendingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_suspending(token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CoreApplicationView(winsdk.system.Object):
    core_window: typing.Optional[winsdk.windows.ui.core.CoreWindow]
    is_hosted: winsdk.system.Boolean
    is_main: winsdk.system.Boolean
    dispatcher: typing.Optional[winsdk.windows.ui.core.CoreDispatcher]
    is_component: winsdk.system.Boolean
    title_bar: typing.Optional[CoreApplicationViewTitleBar]
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    dispatcher_queue: typing.Optional[winsdk.windows.system.DispatcherQueue]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CoreApplicationView: ...
    def add_activated(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreApplicationView, winsdk.windows.applicationmodel.activation.IActivatedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_activated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_hosted_view_closing(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreApplicationView, HostedViewClosingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_hosted_view_closing(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class CoreApplicationViewTitleBar(winsdk.system.Object):
    extend_view_into_title_bar: winsdk.system.Boolean
    height: winsdk.system.Double
    is_visible: winsdk.system.Boolean
    system_overlay_left_inset: winsdk.system.Double
    system_overlay_right_inset: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CoreApplicationViewTitleBar: ...
    def add_is_visible_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreApplicationViewTitleBar, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_visible_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_layout_metrics_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreApplicationViewTitleBar, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_layout_metrics_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HostedViewClosingEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HostedViewClosingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class UnhandledError(winsdk.system.Object):
    handled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UnhandledError: ...
    def propagate(self) -> None: ...

class UnhandledErrorDetectedEventArgs(winsdk.system.Object):
    unhandled_error: typing.Optional[UnhandledError]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UnhandledErrorDetectedEventArgs: ...

class ICoreApplicationUnhandledError(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ICoreApplicationUnhandledError: ...
    def add_unhandled_error_detected(self, handler: winsdk.windows.foundation.EventHandler[UnhandledErrorDetectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_unhandled_error_detected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class IFrameworkView(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IFrameworkView: ...
    def initialize(self, application_view: typing.Optional[CoreApplicationView]) -> None: ...
    def load(self, entry_point: str) -> None: ...
    def run(self) -> None: ...
    def set_window(self, window: typing.Optional[winsdk.windows.ui.core.CoreWindow]) -> None: ...
    def uninitialize(self) -> None: ...

class IFrameworkViewSource(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IFrameworkViewSource: ...
    def create_view(self) -> typing.Optional[IFrameworkView]: ...

