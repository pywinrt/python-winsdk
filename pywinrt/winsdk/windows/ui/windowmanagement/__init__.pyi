# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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
    import winsdk.windows.system
except Exception:
    pass

try:
    import winsdk.windows.ui
except Exception:
    pass

try:
    import winsdk.windows.ui.composition
except Exception:
    pass

class AppWindowClosedReason(enum.IntEnum):
    OTHER = 0
    APP_INITIATED = 1
    USER_INITIATED = 2

class AppWindowFrameStyle(enum.IntEnum):
    DEFAULT = 0
    NO_FRAME = 1

class AppWindowPresentationKind(enum.IntEnum):
    DEFAULT = 0
    COMPACT_OVERLAY = 1
    FULL_SCREEN = 2

class AppWindowTitleBarVisibility(enum.IntEnum):
    DEFAULT = 0
    ALWAYS_HIDDEN = 1

class WindowingEnvironmentKind(enum.IntEnum):
    UNKNOWN = 0
    OVERLAPPED = 1
    TILED = 2

class AppWindow(_winrt.Object):
    title: str
    persisted_state_id: str
    content: typing.Optional[winsdk.windows.ui.UIContentRoot]
    dispatcher_queue: typing.Optional[winsdk.windows.system.DispatcherQueue]
    frame: typing.Optional[AppWindowFrame]
    is_visible: _winrt.Boolean
    presenter: typing.Optional[AppWindowPresenter]
    title_bar: typing.Optional[AppWindowTitleBar]
    u_i_context: typing.Optional[winsdk.windows.ui.UIContext]
    windowing_environment: typing.Optional[WindowingEnvironment]
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindow: ...
    @staticmethod
    def clear_all_persisted_state() -> None: ...
    @staticmethod
    def clear_persisted_state(key: str) -> None: ...
    def close_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def get_display_regions(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[DisplayRegion]]: ...
    def get_placement(self) -> typing.Optional[AppWindowPlacement]: ...
    def request_move_adjacent_to_current_view(self) -> None: ...
    def request_move_adjacent_to_window(self, anchor_window: typing.Optional[AppWindow]) -> None: ...
    def request_move_relative_to_current_view_content(self, content_offset: winsdk.windows.foundation.Point) -> None: ...
    def request_move_relative_to_display_region(self, display_region: typing.Optional[DisplayRegion], display_region_offset: winsdk.windows.foundation.Point) -> None: ...
    def request_move_relative_to_window_content(self, anchor_window: typing.Optional[AppWindow], content_offset: winsdk.windows.foundation.Point) -> None: ...
    def request_move_to_display_region(self, display_region: typing.Optional[DisplayRegion]) -> None: ...
    def request_size(self, frame_size: winsdk.windows.foundation.Size) -> None: ...
    @staticmethod
    def try_create_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[AppWindow]]: ...
    def try_show_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]]: ...
    def add_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AppWindow, AppWindowChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_close_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[AppWindow, AppWindowCloseRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_close_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_closed(self, handler: winsdk.windows.foundation.TypedEventHandler[AppWindow, AppWindowClosedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_closed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class AppWindowChangedEventArgs(_winrt.Object):
    did_available_window_presentations_change: _winrt.Boolean
    did_display_regions_change: _winrt.Boolean
    did_frame_change: _winrt.Boolean
    did_size_change: _winrt.Boolean
    did_title_bar_change: _winrt.Boolean
    did_visibility_change: _winrt.Boolean
    did_window_presentation_change: _winrt.Boolean
    did_windowing_environment_change: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowChangedEventArgs: ...

class AppWindowCloseRequestedEventArgs(_winrt.Object):
    cancel: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowCloseRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class AppWindowClosedEventArgs(_winrt.Object):
    reason: AppWindowClosedReason
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowClosedEventArgs: ...

class AppWindowFrame(_winrt.Object):
    drag_region_visuals: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.ui.composition.IVisualElement]]
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowFrame: ...
    def get_frame_style(self) -> AppWindowFrameStyle: ...
    def set_frame_style(self, frame_style: AppWindowFrameStyle) -> None: ...

class AppWindowPlacement(_winrt.Object):
    display_region: typing.Optional[DisplayRegion]
    offset: winsdk.windows.foundation.Point
    size: winsdk.windows.foundation.Size
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowPlacement: ...

class AppWindowPresentationConfiguration(_winrt.Object):
    kind: AppWindowPresentationKind
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowPresentationConfiguration: ...

class AppWindowPresenter(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowPresenter: ...
    def get_configuration(self) -> typing.Optional[AppWindowPresentationConfiguration]: ...
    def is_presentation_supported(self, presentation_kind: AppWindowPresentationKind) -> _winrt.Boolean: ...
    def request_presentation(self, presentation_kind: AppWindowPresentationKind) -> _winrt.Boolean: ...

class AppWindowTitleBar(_winrt.Object):
    inactive_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    inactive_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    extends_content_into_title_bar: _winrt.Boolean
    button_pressed_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_pressed_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_inactive_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_inactive_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_hover_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_hover_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    is_visible: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowTitleBar: ...
    def get_preferred_visibility(self) -> AppWindowTitleBarVisibility: ...
    def get_title_bar_occlusions(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[AppWindowTitleBarOcclusion]]: ...
    def set_preferred_visibility(self, visibility_mode: AppWindowTitleBarVisibility) -> None: ...

class AppWindowTitleBarOcclusion(_winrt.Object):
    occluding_rect: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: _winrt.Object) -> AppWindowTitleBarOcclusion: ...

class CompactOverlayPresentationConfiguration(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> CompactOverlayPresentationConfiguration: ...
    def __init__(self) -> None: ...

class DefaultPresentationConfiguration(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> DefaultPresentationConfiguration: ...
    def __init__(self) -> None: ...

class DisplayRegion(_winrt.Object):
    display_monitor_device_id: str
    is_visible: _winrt.Boolean
    windowing_environment: typing.Optional[WindowingEnvironment]
    work_area_offset: winsdk.windows.foundation.Point
    work_area_size: winsdk.windows.foundation.Size
    @staticmethod
    def _from(obj: _winrt.Object) -> DisplayRegion: ...
    def add_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[DisplayRegion, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class FullScreenPresentationConfiguration(_winrt.Object):
    is_exclusive: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> FullScreenPresentationConfiguration: ...
    def __init__(self) -> None: ...

class WindowServices(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> WindowServices: ...
    @staticmethod
    def find_all_top_level_window_ids() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.ui.WindowId]]: ...

class WindowingEnvironment(_winrt.Object):
    is_enabled: _winrt.Boolean
    kind: WindowingEnvironmentKind
    @staticmethod
    def _from(obj: _winrt.Object) -> WindowingEnvironment: ...
    @typing.overload
    @staticmethod
    def find_all() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[WindowingEnvironment]]: ...
    @typing.overload
    @staticmethod
    def find_all(kind: WindowingEnvironmentKind) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[WindowingEnvironment]]: ...
    def get_display_regions(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[DisplayRegion]]: ...
    def add_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[WindowingEnvironment, WindowingEnvironmentChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class WindowingEnvironmentAddedEventArgs(_winrt.Object):
    windowing_environment: typing.Optional[WindowingEnvironment]
    @staticmethod
    def _from(obj: _winrt.Object) -> WindowingEnvironmentAddedEventArgs: ...

class WindowingEnvironmentChangedEventArgs(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> WindowingEnvironmentChangedEventArgs: ...

class WindowingEnvironmentRemovedEventArgs(_winrt.Object):
    windowing_environment: typing.Optional[WindowingEnvironment]
    @staticmethod
    def _from(obj: _winrt.Object) -> WindowingEnvironmentRemovedEventArgs: ...

