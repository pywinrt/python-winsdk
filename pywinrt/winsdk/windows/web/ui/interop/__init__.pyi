# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

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
import winsdk.windows.ui
import winsdk.windows.ui.core
import winsdk.windows.web
import winsdk.windows.web.http
import winsdk.windows.web.ui

class WebViewControlAcceleratorKeyRoutingStage(enum.IntEnum):
    TUNNELING = 0
    BUBBLING = 1

class WebViewControlMoveFocusReason(enum.IntEnum):
    PROGRAMMATIC = 0
    NEXT = 1
    PREVIOUS = 2

class WebViewControlProcessCapabilityState(enum.IntEnum):
    DEFAULT = 0
    DISABLED = 1
    ENABLED = 2

Self = typing.TypeVar('Self')

class WebViewControl(winsdk.system.Object):
    scale: winsdk.system.Double
    is_visible: winsdk.system.Boolean
    bounds: winsdk.windows.foundation.Rect
    process: typing.Optional[WebViewControlProcess]
    source: typing.Optional[winsdk.windows.foundation.Uri]
    default_background_color: winsdk.windows.ui.Color
    can_go_back: winsdk.system.Boolean
    can_go_forward: winsdk.system.Boolean
    contains_full_screen_element: winsdk.system.Boolean
    deferred_permission_requests: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.web.ui.WebViewControlDeferredPermissionRequest]]
    document_title: str
    settings: typing.Optional[winsdk.windows.web.ui.WebViewControlSettings]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebViewControl: ...
    def add_initialize_script(self, script: str) -> None: ...
    def build_local_stream_uri(self, content_identifier: str, relative_path: str) -> typing.Optional[winsdk.windows.foundation.Uri]: ...
    def capture_preview_to_stream_async(self, stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> winsdk.windows.foundation.IAsyncAction: ...
    def capture_selected_content_to_data_package_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.applicationmodel.datatransfer.DataPackage]: ...
    def close(self) -> None: ...
    def get_deferred_permission_request_by_id(self, id: winsdk.system.UInt32) -> typing.Optional[winsdk.windows.web.ui.WebViewControlDeferredPermissionRequest]: ...
    def go_back(self) -> None: ...
    def go_forward(self) -> None: ...
    def invoke_script_async(self, script_name: str, arguments: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def move_focus(self, reason: WebViewControlMoveFocusReason) -> None: ...
    def navigate(self, source: typing.Optional[winsdk.windows.foundation.Uri]) -> None: ...
    def navigate_to_local_stream_uri(self, source: typing.Optional[winsdk.windows.foundation.Uri], stream_resolver: typing.Optional[winsdk.windows.web.IUriToStreamResolver]) -> None: ...
    def navigate_to_string(self, text: str) -> None: ...
    def navigate_with_http_request_message(self, request_message: typing.Optional[winsdk.windows.web.http.HttpRequestMessage]) -> None: ...
    def refresh(self) -> None: ...
    def stop(self) -> None: ...
    def add_contains_full_screen_element_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_contains_full_screen_element_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_content_loading(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlContentLoadingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_content_loading(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_d_o_m_content_loaded(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlDOMContentLoadedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_d_o_m_content_loaded(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_frame_content_loading(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlContentLoadingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_content_loading(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_frame_d_o_m_content_loaded(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlDOMContentLoadedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_d_o_m_content_loaded(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_frame_navigation_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlNavigationCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_navigation_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_frame_navigation_starting(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlNavigationStartingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_navigation_starting(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_long_running_script_detected(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlLongRunningScriptDetectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_long_running_script_detected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_navigation_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlNavigationCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_navigation_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_navigation_starting(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlNavigationStartingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_navigation_starting(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_new_window_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlNewWindowRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_new_window_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_permission_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlPermissionRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_permission_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_script_notify(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlScriptNotifyEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_script_notify(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_unsafe_content_warning_displaying(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_unsafe_content_warning_displaying(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_unsupported_uri_scheme_identified(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlUnsupportedUriSchemeIdentifiedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_unsupported_uri_scheme_identified(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_unviewable_content_identified(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlUnviewableContentIdentifiedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_unviewable_content_identified(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_web_resource_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.WebViewControlWebResourceRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_web_resource_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_accelerator_key_pressed(self, handler: winsdk.windows.foundation.TypedEventHandler[WebViewControl, WebViewControlAcceleratorKeyPressedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_accelerator_key_pressed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_move_focus_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[WebViewControl, WebViewControlMoveFocusRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_move_focus_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_got_focus(self, handler: winsdk.windows.foundation.TypedEventHandler[WebViewControl, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_got_focus(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_lost_focus(self, handler: winsdk.windows.foundation.TypedEventHandler[WebViewControl, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_lost_focus(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebViewControlAcceleratorKeyPressedEventArgs(winsdk.system.Object):
    handled: winsdk.system.Boolean
    event_type: winsdk.windows.ui.core.CoreAcceleratorKeyEventType
    key_status: winsdk.windows.ui.core.CorePhysicalKeyStatus
    routing_stage: WebViewControlAcceleratorKeyRoutingStage
    virtual_key: winsdk.windows.system.VirtualKey
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebViewControlAcceleratorKeyPressedEventArgs: ...

class WebViewControlMoveFocusRequestedEventArgs(winsdk.system.Object):
    reason: WebViewControlMoveFocusReason
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebViewControlMoveFocusRequestedEventArgs: ...

class WebViewControlProcess(winsdk.system.Object):
    enterprise_id: str
    is_private_network_client_server_capability_enabled: winsdk.system.Boolean
    process_id: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebViewControlProcess: ...
    @typing.overload
    def __new__(cls: typing.Type[WebViewControlProcess], process_options: typing.Optional[WebViewControlProcessOptions]) -> WebViewControlProcess:...
    @typing.overload
    def __new__(cls: typing.Type[WebViewControlProcess]) -> WebViewControlProcess:...
    def create_web_view_control_async(self, host_window_handle: winsdk.system.Int64, bounds: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[WebViewControl]: ...
    def get_web_view_controls(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[WebViewControl]]: ...
    def terminate(self) -> None: ...
    def add_process_exited(self, handler: winsdk.windows.foundation.TypedEventHandler[WebViewControlProcess, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_process_exited(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebViewControlProcessOptions(winsdk.system.Object):
    private_network_client_server_capability: WebViewControlProcessCapabilityState
    enterprise_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WebViewControlProcessOptions: ...
    def __new__(cls: typing.Type[WebViewControlProcessOptions]) -> WebViewControlProcessOptions:...

