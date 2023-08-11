# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.globalization
import winsdk.windows.ui.text
import winsdk.windows.ui.viewmanagement

class CoreTextFormatUpdatingReason(enum.IntEnum):
    NONE = 0
    COMPOSITION_UNCONVERTED = 1
    COMPOSITION_CONVERTED = 2
    COMPOSITION_TARGET_UNCONVERTED = 3
    COMPOSITION_TARGET_CONVERTED = 4

class CoreTextFormatUpdatingResult(enum.IntEnum):
    SUCCEEDED = 0
    FAILED = 1

class CoreTextInputPaneDisplayPolicy(enum.IntEnum):
    AUTOMATIC = 0
    MANUAL = 1

class CoreTextInputScope(enum.IntEnum):
    DEFAULT = 0
    URL = 1
    FILE_PATH = 2
    FILE_NAME = 3
    EMAIL_USER_NAME = 4
    EMAIL_ADDRESS = 5
    USER_NAME = 6
    PERSONAL_FULL_NAME = 7
    PERSONAL_NAME_PREFIX = 8
    PERSONAL_GIVEN_NAME = 9
    PERSONAL_MIDDLE_NAME = 10
    PERSONAL_SURNAME = 11
    PERSONAL_NAME_SUFFIX = 12
    ADDRESS = 13
    ADDRESS_POSTAL_CODE = 14
    ADDRESS_STREET = 15
    ADDRESS_STATE_OR_PROVINCE = 16
    ADDRESS_CITY = 17
    ADDRESS_COUNTRY_NAME = 18
    ADDRESS_COUNTRY_SHORT_NAME = 19
    CURRENCY_AMOUNT_AND_SYMBOL = 20
    CURRENCY_AMOUNT = 21
    DATE = 22
    DATE_MONTH = 23
    DATE_DAY = 24
    DATE_YEAR = 25
    DATE_MONTH_NAME = 26
    DATE_DAY_NAME = 27
    NUMBER = 29
    SINGLE_CHARACTER = 30
    PASSWORD = 31
    TELEPHONE_NUMBER = 32
    TELEPHONE_COUNTRY_CODE = 33
    TELEPHONE_AREA_CODE = 34
    TELEPHONE_LOCAL_NUMBER = 35
    TIME = 36
    TIME_HOUR = 37
    TIME_MINUTE_OR_SECOND = 38
    NUMBER_FULL_WIDTH = 39
    ALPHANUMERIC_HALF_WIDTH = 40
    ALPHANUMERIC_FULL_WIDTH = 41
    CURRENCY_CHINESE = 42
    BOPOMOFO = 43
    HIRAGANA = 44
    KATAKANA_HALF_WIDTH = 45
    KATAKANA_FULL_WIDTH = 46
    HANJA = 47
    HANGUL_HALF_WIDTH = 48
    HANGUL_FULL_WIDTH = 49
    SEARCH = 50
    FORMULA = 51
    SEARCH_INCREMENTAL = 52
    CHINESE_HALF_WIDTH = 53
    CHINESE_FULL_WIDTH = 54
    NATIVE_SCRIPT = 55
    TEXT = 57
    CHAT = 58
    NAME_OR_PHONE_NUMBER = 59
    EMAIL_USER_NAME_OR_ADDRESS = 60
    PRIVATE = 61
    MAPS = 62
    PASSWORD_NUMERIC = 63
    FORMULA_NUMBER = 67
    CHAT_WITHOUT_EMOJI = 68
    DIGITS = 28
    PIN_NUMERIC = 64
    PIN_ALPHANUMERIC = 65

class CoreTextSelectionUpdatingResult(enum.IntEnum):
    SUCCEEDED = 0
    FAILED = 1

class CoreTextTextUpdatingResult(enum.IntEnum):
    SUCCEEDED = 0
    FAILED = 1

Self = typing.TypeVar('Self')

class CoreTextRange:
    start_caret_position: winsdk.system.Int32
    end_caret_position: winsdk.system.Int32
    def __new__(cls: typing.Type[CoreTextRange], start_caret_position: winsdk.system.Int32, end_caret_position: winsdk.system.Int32) -> CoreTextRange: ...

class CoreTextCompositionCompletedEventArgs(winsdk.system.Object):
    composition_segments: typing.Optional[winsdk.windows.foundation.collections.IVectorView[CoreTextCompositionSegment]]
    is_canceled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextCompositionCompletedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class CoreTextCompositionSegment(winsdk.system.Object):
    preconversion_string: str
    range: CoreTextRange
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextCompositionSegment: ...

class CoreTextCompositionStartedEventArgs(winsdk.system.Object):
    is_canceled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextCompositionStartedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class CoreTextEditContext(winsdk.system.Object):
    name: str
    is_read_only: winsdk.system.Boolean
    input_scope: CoreTextInputScope
    input_pane_display_policy: CoreTextInputPaneDisplayPolicy
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextEditContext: ...
    def notify_focus_enter(self) -> None: ...
    def notify_focus_leave(self) -> None: ...
    def notify_layout_changed(self) -> None: ...
    def notify_selection_changed(self, selection: CoreTextRange, /) -> None: ...
    def notify_text_changed(self, modified_range: CoreTextRange, new_length: winsdk.system.Int32, new_selection: CoreTextRange, /) -> None: ...
    def add_composition_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, CoreTextCompositionCompletedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_composition_completed(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_composition_started(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, CoreTextCompositionStartedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_composition_started(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_focus_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_focus_removed(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_format_updating(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, CoreTextFormatUpdatingEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_format_updating(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_layout_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, CoreTextLayoutRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_layout_requested(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_selection_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, CoreTextSelectionRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_selection_requested(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_selection_updating(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, CoreTextSelectionUpdatingEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_selection_updating(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_text_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, CoreTextTextRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_text_requested(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_text_updating(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, CoreTextTextUpdatingEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_text_updating(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_notify_focus_leave_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextEditContext, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_notify_focus_leave_completed(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class CoreTextFormatUpdatingEventArgs(winsdk.system.Object):
    result: CoreTextFormatUpdatingResult
    background_color: typing.Optional[typing.Optional[winsdk.windows.ui.viewmanagement.UIElementType]]
    is_canceled: winsdk.system.Boolean
    range: CoreTextRange
    reason: CoreTextFormatUpdatingReason
    text_color: typing.Optional[typing.Optional[winsdk.windows.ui.viewmanagement.UIElementType]]
    underline_color: typing.Optional[typing.Optional[winsdk.windows.ui.viewmanagement.UIElementType]]
    underline_type: typing.Optional[typing.Optional[winsdk.windows.ui.text.UnderlineType]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextFormatUpdatingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class CoreTextLayoutBounds(winsdk.system.Object):
    text_bounds: winsdk.windows.foundation.Rect
    control_bounds: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextLayoutBounds: ...

class CoreTextLayoutRequest(winsdk.system.Object):
    is_canceled: winsdk.system.Boolean
    layout_bounds: typing.Optional[CoreTextLayoutBounds]
    range: CoreTextRange
    layout_bounds_visual_pixels: typing.Optional[CoreTextLayoutBounds]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextLayoutRequest: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class CoreTextLayoutRequestedEventArgs(winsdk.system.Object):
    request: typing.Optional[CoreTextLayoutRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextLayoutRequestedEventArgs: ...

class CoreTextSelectionRequest(winsdk.system.Object):
    selection: CoreTextRange
    is_canceled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextSelectionRequest: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class CoreTextSelectionRequestedEventArgs(winsdk.system.Object):
    request: typing.Optional[CoreTextSelectionRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextSelectionRequestedEventArgs: ...

class CoreTextSelectionUpdatingEventArgs(winsdk.system.Object):
    result: CoreTextSelectionUpdatingResult
    is_canceled: winsdk.system.Boolean
    selection: CoreTextRange
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextSelectionUpdatingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class CoreTextServicesConstants(winsdk.system.Object):
    hidden_character: typing.ClassVar[winsdk.system.Char16]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextServicesConstants: ...

class CoreTextServicesManager(winsdk.system.Object):
    input_language: typing.Optional[winsdk.windows.globalization.Language]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextServicesManager: ...
    def create_edit_context(self) -> typing.Optional[CoreTextEditContext]: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[CoreTextServicesManager]: ...
    def add_input_language_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[CoreTextServicesManager, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_input_language_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class CoreTextTextRequest(winsdk.system.Object):
    text: str
    is_canceled: winsdk.system.Boolean
    range: CoreTextRange
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextTextRequest: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class CoreTextTextRequestedEventArgs(winsdk.system.Object):
    request: typing.Optional[CoreTextTextRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextTextRequestedEventArgs: ...

class CoreTextTextUpdatingEventArgs(winsdk.system.Object):
    result: CoreTextTextUpdatingResult
    input_language: typing.Optional[winsdk.windows.globalization.Language]
    is_canceled: winsdk.system.Boolean
    new_selection: CoreTextRange
    range: CoreTextRange
    text: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CoreTextTextUpdatingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

