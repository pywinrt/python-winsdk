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

try:
    import winsdk.windows.ui
except Exception:
    pass

try:
    import winsdk.windows.ui.core
except Exception:
    pass

try:
    import winsdk.windows.web
except Exception:
    pass

try:
    import winsdk.windows.web.http
except Exception:
    pass

try:
    import winsdk.windows.web.ui
except Exception:
    pass

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

class WebViewControl(_winrt.Object, interfaces=[winsdk.windows.web.ui.IWebViewControl, winsdk.windows.web.ui.IWebViewControl2]):
    scale: _winrt.Double
    is_visible: _winrt.Boolean
    bounds: winsdk.windows.foundation.Rect
    process: typing.Optional[WebViewControlProcess]
    source: typing.Optional[winsdk.windows.foundation.Uri]
    default_background_color: winsdk.windows.ui.Color
    can_go_back: _winrt.Boolean
    can_go_forward: _winrt.Boolean
    contains_full_screen_element: _winrt.Boolean
    deferred_permission_requests: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.web.ui.WebViewControlDeferredPermissionRequest]]
    document_title: str
    settings: typing.Optional[winsdk.windows.web.ui.WebViewControlSettings]
    @staticmethod
    def _from(obj: _winrt.Object) -> WebViewControl: ...
    def add_initialize_script(self, script: str) -> None: ...
    def build_local_stream_uri(self, content_identifier: str, relative_path: str) -> typing.Optional[winsdk.windows.foundation.Uri]: ...
    def capture_preview_to_stream_async(self, stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def capture_selected_content_to_data_package_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.applicationmodel.datatransfer.DataPackage]: ...
    def close(self) -> None: ...
    def get_deferred_permission_request_by_id(self, id: _winrt.UInt32) -> typing.Optional[winsdk.windows.web.ui.WebViewControlDeferredPermissionRequest]: ...
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
    def add_contains_full_screen_element_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
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
    def add_unsafe_content_warning_displaying(self, handler: winsdk.windows.foundation.TypedEventHandler[winsdk.windows.web.ui.IWebViewControl, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
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
    def add_got_focus(self, handler: winsdk.windows.foundation.TypedEventHandler[WebViewControl, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_got_focus(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_lost_focus(self, handler: winsdk.windows.foundation.TypedEventHandler[WebViewControl, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_lost_focus(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebViewControlAcceleratorKeyPressedEventArgs(_winrt.Object, interfaces=[]):
    handled: _winrt.Boolean
    event_type: winsdk.windows.ui.core.CoreAcceleratorKeyEventType
    key_status: winsdk.windows.ui.core.CorePhysicalKeyStatus
    routing_stage: WebViewControlAcceleratorKeyRoutingStage
    virtual_key: winsdk.windows.system.VirtualKey
    @staticmethod
    def _from(obj: _winrt.Object) -> WebViewControlAcceleratorKeyPressedEventArgs: ...

class WebViewControlMoveFocusRequestedEventArgs(_winrt.Object, interfaces=[]):
    reason: WebViewControlMoveFocusReason
    @staticmethod
    def _from(obj: _winrt.Object) -> WebViewControlMoveFocusRequestedEventArgs: ...

class WebViewControlProcess(_winrt.Object, interfaces=[]):
    enterprise_id: str
    is_private_network_client_server_capability_enabled: _winrt.Boolean
    process_id: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> WebViewControlProcess: ...
    @typing.overload
    def __init__(self, process_options: typing.Optional[WebViewControlProcessOptions]) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...
    def create_web_view_control_async(self, host_window_handle: _winrt.Int64, bounds: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[WebViewControl]: ...
    def get_web_view_controls(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[WebViewControl]]: ...
    def terminate(self) -> None: ...
    def add_process_exited(self, handler: winsdk.windows.foundation.TypedEventHandler[WebViewControlProcess, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_process_exited(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WebViewControlProcessOptions(_winrt.Object, interfaces=[]):
    private_network_client_server_capability: WebViewControlProcessCapabilityState
    enterprise_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> WebViewControlProcessOptions: ...
    def __init__(self) -> None: ...

