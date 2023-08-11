# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.ui
import winsdk.windows.ui.core
import winsdk.windows.ui.popups
import winsdk.windows.ui.windowmanagement

class ApplicationViewBoundsMode(enum.IntEnum):
    USE_VISIBLE = 0
    USE_CORE_WINDOW = 1

class ApplicationViewMode(enum.IntEnum):
    DEFAULT = 0
    COMPACT_OVERLAY = 1

class ApplicationViewOrientation(enum.IntEnum):
    LANDSCAPE = 0
    PORTRAIT = 1

class ApplicationViewState(enum.IntEnum):
    FULL_SCREEN_LANDSCAPE = 0
    FILLED = 1
    SNAPPED = 2
    FULL_SCREEN_PORTRAIT = 3

class ApplicationViewSwitchingOptions(enum.IntFlag):
    DEFAULT = 0
    SKIP_ANIMATION = 0x1
    CONSOLIDATE_VIEWS = 0x2

class ApplicationViewWindowingMode(enum.IntEnum):
    AUTO = 0
    PREFERRED_LAUNCH_VIEW_SIZE = 1
    FULL_SCREEN = 2
    COMPACT_OVERLAY = 3
    MAXIMIZED = 4

class FullScreenSystemOverlayMode(enum.IntEnum):
    STANDARD = 0
    MINIMAL = 1

class HandPreference(enum.IntEnum):
    LEFT_HANDED = 0
    RIGHT_HANDED = 1

class ScreenCaptureDisabledBehavior(enum.IntEnum):
    DRAW_AS_BLACK = 0
    EXCLUDE_FROM_CAPTURE = 1

class UIColorType(enum.IntEnum):
    BACKGROUND = 0
    FOREGROUND = 1
    ACCENT_DARK3 = 2
    ACCENT_DARK2 = 3
    ACCENT_DARK1 = 4
    ACCENT = 5
    ACCENT_LIGHT1 = 6
    ACCENT_LIGHT2 = 7
    ACCENT_LIGHT3 = 8
    COMPLEMENT = 9

class UIElementType(enum.IntEnum):
    ACTIVE_CAPTION = 0
    BACKGROUND = 1
    BUTTON_FACE = 2
    BUTTON_TEXT = 3
    CAPTION_TEXT = 4
    GRAY_TEXT = 5
    HIGHLIGHT = 6
    HIGHLIGHT_TEXT = 7
    HOTLIGHT = 8
    INACTIVE_CAPTION = 9
    INACTIVE_CAPTION_TEXT = 10
    WINDOW = 11
    WINDOW_TEXT = 12
    ACCENT_COLOR = 1000
    TEXT_HIGH = 1001
    TEXT_MEDIUM = 1002
    TEXT_LOW = 1003
    TEXT_CONTRAST_WITH_HIGH = 1004
    NON_TEXT_HIGH = 1005
    NON_TEXT_MEDIUM_HIGH = 1006
    NON_TEXT_MEDIUM = 1007
    NON_TEXT_MEDIUM_LOW = 1008
    NON_TEXT_LOW = 1009
    PAGE_BACKGROUND = 1010
    POPUP_BACKGROUND = 1011
    OVERLAY_OUTSIDE_POPUP = 1012

class UserInteractionMode(enum.IntEnum):
    MOUSE = 0
    TOUCH = 1

class ViewSizePreference(enum.IntEnum):
    DEFAULT = 0
    USE_LESS = 1
    USE_HALF = 2
    USE_MORE = 3
    USE_MINIMUM = 4
    USE_NONE = 5
    CUSTOM = 6

Self = typing.TypeVar('Self')

class AccessibilitySettings(winsdk.system.Object):
    high_contrast: winsdk.system.Boolean
    high_contrast_scheme: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> AccessibilitySettings: ...
    def __new__(cls: typing.Type[AccessibilitySettings]) -> AccessibilitySettings:...
    def add_high_contrast_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[AccessibilitySettings, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_high_contrast_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class ActivationViewSwitcher(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ActivationViewSwitcher: ...
    def is_view_presented_on_activation_virtual_desktop(self, view_id: winsdk.system.Int32, /) -> winsdk.system.Boolean: ...
    @typing.overload
    def show_as_standalone_async(self, view_id: winsdk.system.Int32, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_as_standalone_async(self, view_id: winsdk.system.Int32, size_preference: ViewSizePreference, /) -> winsdk.windows.foundation.IAsyncAction: ...

class ApplicationView(winsdk.system.Object):
    title: str
    is_screen_capture_enabled: winsdk.system.Boolean
    adjacent_to_left_display_edge: winsdk.system.Boolean
    adjacent_to_right_display_edge: winsdk.system.Boolean
    id: winsdk.system.Int32
    is_full_screen: winsdk.system.Boolean
    is_on_lock_screen: winsdk.system.Boolean
    orientation: ApplicationViewOrientation
    suppress_system_overlays: winsdk.system.Boolean
    visible_bounds: winsdk.windows.foundation.Rect
    desired_bounds_mode: ApplicationViewBoundsMode
    full_screen_system_overlay_mode: FullScreenSystemOverlayMode
    title_bar: typing.Optional[ApplicationViewTitleBar]
    is_full_screen_mode: winsdk.system.Boolean
    view_mode: ApplicationViewMode
    persisted_state_id: str
    windowing_environment: typing.Optional[winsdk.windows.ui.windowmanagement.WindowingEnvironment]
    u_i_context: typing.Optional[winsdk.windows.ui.UIContext]
    value: typing.ClassVar[ApplicationViewState]
    terminate_app_on_final_view_close: typing.ClassVar[winsdk.system.Boolean]
    preferred_launch_windowing_mode: typing.ClassVar[ApplicationViewWindowingMode]
    preferred_launch_view_size: typing.ClassVar[winsdk.windows.foundation.Size]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ApplicationView: ...
    @staticmethod
    def clear_all_persisted_state() -> None: ...
    @staticmethod
    def clear_persisted_state(key: str, /) -> None: ...
    def exit_full_screen_mode(self) -> None: ...
    @staticmethod
    def get_application_view_id_for_window(window: typing.Optional[winsdk.windows.ui.core.ICoreWindow], /) -> winsdk.system.Int32: ...
    def get_display_regions(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.ui.windowmanagement.DisplayRegion]]: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[ApplicationView]: ...
    def is_view_mode_supported(self, view_mode: ApplicationViewMode, /) -> winsdk.system.Boolean: ...
    def set_desired_bounds_mode(self, bounds_mode: ApplicationViewBoundsMode, /) -> winsdk.system.Boolean: ...
    def set_preferred_min_size(self, min_size: winsdk.windows.foundation.Size, /) -> None: ...
    def show_standard_system_overlays(self) -> None: ...
    def try_consolidate_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_enter_full_screen_mode(self) -> winsdk.system.Boolean: ...
    @typing.overload
    def try_enter_view_mode_async(self, view_mode: ApplicationViewMode, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def try_enter_view_mode_async(self, view_mode: ApplicationViewMode, view_mode_preferences: typing.Optional[ViewModePreferences], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_resize_view(self, value: winsdk.windows.foundation.Size, /) -> winsdk.system.Boolean: ...
    @staticmethod
    def try_unsnap() -> winsdk.system.Boolean: ...
    @staticmethod
    def try_unsnap_to_fullscreen() -> winsdk.system.Boolean: ...
    def add_consolidated(self, handler: winsdk.windows.foundation.TypedEventHandler[ApplicationView, ApplicationViewConsolidatedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_consolidated(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_visible_bounds_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ApplicationView, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_visible_bounds_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class ApplicationViewConsolidatedEventArgs(winsdk.system.Object):
    is_user_initiated: winsdk.system.Boolean
    is_app_initiated: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ApplicationViewConsolidatedEventArgs: ...

class ApplicationViewScaling(winsdk.system.Object):
    disable_layout_scaling: typing.ClassVar[winsdk.system.Boolean]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ApplicationViewScaling: ...
    @staticmethod
    def try_set_disable_layout_scaling(disable_layout_scaling: winsdk.system.Boolean, /) -> winsdk.system.Boolean: ...

class ApplicationViewSwitcher(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ApplicationViewSwitcher: ...
    @staticmethod
    def disable_showing_main_view_on_activation() -> None: ...
    @staticmethod
    def disable_system_view_activation_policy() -> None: ...
    @staticmethod
    def prepare_for_custom_animated_switch_async(to_view_id: winsdk.system.Int32, from_view_id: winsdk.system.Int32, options: ApplicationViewSwitchingOptions, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def switch_async(view_id: winsdk.system.Int32, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    @staticmethod
    def switch_async(to_view_id: winsdk.system.Int32, from_view_id: winsdk.system.Int32, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    @staticmethod
    def switch_async(to_view_id: winsdk.system.Int32, from_view_id: winsdk.system.Int32, options: ApplicationViewSwitchingOptions, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    @staticmethod
    def try_show_as_standalone_async(view_id: winsdk.system.Int32, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def try_show_as_standalone_async(view_id: winsdk.system.Int32, size_preference: ViewSizePreference, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def try_show_as_standalone_async(view_id: winsdk.system.Int32, size_preference: ViewSizePreference, anchor_view_id: winsdk.system.Int32, anchor_size_preference: ViewSizePreference, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def try_show_as_view_mode_async(view_id: winsdk.system.Int32, view_mode: ApplicationViewMode, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def try_show_as_view_mode_async(view_id: winsdk.system.Int32, view_mode: ApplicationViewMode, view_mode_preferences: typing.Optional[ViewModePreferences], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class ApplicationViewTitleBar(winsdk.system.Object):
    inactive_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    inactive_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_pressed_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_pressed_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_inactive_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_inactive_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_hover_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_hover_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    button_background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ApplicationViewTitleBar: ...

class ApplicationViewTransferContext(winsdk.system.Object):
    view_id: winsdk.system.Int32
    data_package_format_id: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ApplicationViewTransferContext: ...
    def __new__(cls: typing.Type[ApplicationViewTransferContext]) -> ApplicationViewTransferContext:...

class InputPane(winsdk.system.Object):
    occluded_rect: winsdk.windows.foundation.Rect
    visible: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> InputPane: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[InputPane]: ...
    @staticmethod
    def get_for_u_i_context(context: typing.Optional[winsdk.windows.ui.UIContext], /) -> typing.Optional[InputPane]: ...
    def try_hide(self) -> winsdk.system.Boolean: ...
    def try_show(self) -> winsdk.system.Boolean: ...
    def add_hiding(self, handler: winsdk.windows.foundation.TypedEventHandler[InputPane, InputPaneVisibilityEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_hiding(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_showing(self, handler: winsdk.windows.foundation.TypedEventHandler[InputPane, InputPaneVisibilityEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_showing(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class InputPaneVisibilityEventArgs(winsdk.system.Object):
    ensured_focused_element_in_view: winsdk.system.Boolean
    occluded_rect: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> InputPaneVisibilityEventArgs: ...

class ProjectionManager(winsdk.system.Object):
    projection_display_available: typing.ClassVar[winsdk.system.Boolean]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ProjectionManager: ...
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def request_start_projecting_async(projection_view_id: winsdk.system.Int32, anchor_view_id: winsdk.system.Int32, selection: winsdk.windows.foundation.Rect, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def request_start_projecting_async(projection_view_id: winsdk.system.Int32, anchor_view_id: winsdk.system.Int32, selection: winsdk.windows.foundation.Rect, preffered_placement: winsdk.windows.ui.popups.Placement, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def start_projecting_async(projection_view_id: winsdk.system.Int32, anchor_view_id: winsdk.system.Int32, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    @staticmethod
    def start_projecting_async(projection_view_id: winsdk.system.Int32, anchor_view_id: winsdk.system.Int32, display_device_info: typing.Optional[winsdk.windows.devices.enumeration.DeviceInformation], /) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def stop_projecting_async(projection_view_id: winsdk.system.Int32, anchor_view_id: winsdk.system.Int32, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def swap_displays_for_views_async(projection_view_id: winsdk.system.Int32, anchor_view_id: winsdk.system.Int32, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def add_projection_display_available_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_projection_display_available_changed(token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class StatusBar(winsdk.system.Object):
    foreground_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    background_opacity: winsdk.system.Double
    background_color: typing.Optional[typing.Optional[winsdk.windows.ui.Color]]
    occluded_rect: winsdk.windows.foundation.Rect
    progress_indicator: typing.Optional[StatusBarProgressIndicator]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> StatusBar: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[StatusBar]: ...
    def hide_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def show_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def add_hiding(self, event_handler: winsdk.windows.foundation.TypedEventHandler[StatusBar, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_hiding(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_showing(self, event_handler: winsdk.windows.foundation.TypedEventHandler[StatusBar, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_showing(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class StatusBarProgressIndicator(winsdk.system.Object):
    text: str
    progress_value: typing.Optional[typing.Optional[winsdk.system.Double]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> StatusBarProgressIndicator: ...
    def hide_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def show_async(self) -> winsdk.windows.foundation.IAsyncAction: ...

class UISettings(winsdk.system.Object):
    animations_enabled: winsdk.system.Boolean
    caret_blink_rate: winsdk.system.UInt32
    caret_browsing_enabled: winsdk.system.Boolean
    caret_width: winsdk.system.UInt32
    cursor_size: winsdk.windows.foundation.Size
    double_click_time: winsdk.system.UInt32
    hand_preference: HandPreference
    message_duration: winsdk.system.UInt32
    mouse_hover_time: winsdk.system.UInt32
    scroll_bar_arrow_size: winsdk.windows.foundation.Size
    scroll_bar_size: winsdk.windows.foundation.Size
    scroll_bar_thumb_box_size: winsdk.windows.foundation.Size
    text_scale_factor: winsdk.system.Double
    advanced_effects_enabled: winsdk.system.Boolean
    auto_hide_scroll_bars: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> UISettings: ...
    def __new__(cls: typing.Type[UISettings]) -> UISettings:...
    def get_color_value(self, desired_color: UIColorType, /) -> winsdk.windows.ui.Color: ...
    def u_i_element_color(self, desired_element: UIElementType, /) -> winsdk.windows.ui.Color: ...
    def add_text_scale_factor_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[UISettings, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_text_scale_factor_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_color_values_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[UISettings, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_color_values_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_advanced_effects_enabled_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[UISettings, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_advanced_effects_enabled_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_auto_hide_scroll_bars_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[UISettings, UISettingsAutoHideScrollBarsChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_auto_hide_scroll_bars_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_animations_enabled_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[UISettings, UISettingsAnimationsEnabledChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_animations_enabled_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_message_duration_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[UISettings, UISettingsMessageDurationChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_message_duration_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class UISettingsAnimationsEnabledChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> UISettingsAnimationsEnabledChangedEventArgs: ...

class UISettingsAutoHideScrollBarsChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> UISettingsAutoHideScrollBarsChangedEventArgs: ...

class UISettingsMessageDurationChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> UISettingsMessageDurationChangedEventArgs: ...

class UIViewSettings(winsdk.system.Object):
    user_interaction_mode: UserInteractionMode
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> UIViewSettings: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[UIViewSettings]: ...

class ViewModePreferences(winsdk.system.Object):
    view_size_preference: ViewSizePreference
    custom_size: winsdk.windows.foundation.Size
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ViewModePreferences: ...
    @staticmethod
    def create_default(mode: ApplicationViewMode, /) -> typing.Optional[ViewModePreferences]: ...

