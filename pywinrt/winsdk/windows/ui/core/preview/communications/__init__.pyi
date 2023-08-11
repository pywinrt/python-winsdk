# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation

class PreviewMeetingInfoDisplayKind(enum.IntEnum):
    ORGANIZER_AND_TIME = 0
    ORGANIZER_TIME_AND_TITLE = 1

class PreviewSystemState(enum.IntEnum):
    PREPARING = 0
    REBOOTING = 1
    ERROR = 2
    SESSION_PAUSED = 3
    READY = 4

class PreviewTeamEndMeetingKind(enum.IntEnum):
    SHOW_DEFAULT_VIEW = 0
    CLOSE_VIEW = 1

class PreviewTeamViewCommand(enum.IntEnum):
    TOGGLE_CALL_CONTROL = 0
    SHOW_PEOPLE = 1
    SHOW_MESSAGING = 2
    SHOW_CONTENT = 3
    TOGGLE_MICROPHONE = 4
    TOGGLE_CAMERA = 5
    SHOW_CALENDAR = 6
    TOGGLE_SCREEN_SHARING = 7
    TOGGLE_FULL_SCREEN = 8

Self = typing.TypeVar('Self')

class PreviewTeamCleanupRequestedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PreviewTeamCleanupRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class PreviewTeamCommandInvokedEventArgs(winsdk.system.Object):
    command: PreviewTeamViewCommand
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PreviewTeamCommandInvokedEventArgs: ...

class PreviewTeamDeviceCredentials(winsdk.system.Object):
    domain_user_name: str
    password: str
    user_principal_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PreviewTeamDeviceCredentials: ...
    def __new__(cls: typing.Type[PreviewTeamDeviceCredentials]) -> PreviewTeamDeviceCredentials:...

class PreviewTeamEndMeetingRequestedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PreviewTeamEndMeetingRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class PreviewTeamJoinMeetingRequestedEventArgs(winsdk.system.Object):
    meeting_uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PreviewTeamJoinMeetingRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class PreviewTeamView(winsdk.system.Object):
    is_full_screen: winsdk.system.Boolean
    is_screen_sharing: winsdk.system.Boolean
    meeting_info_display_type: PreviewMeetingInfoDisplayKind
    meeting_uri: typing.Optional[winsdk.windows.foundation.Uri]
    sharing_screen_bounds: winsdk.windows.foundation.Rect
    system_state: PreviewSystemState
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PreviewTeamView: ...
    def enter_full_screen(self) -> None: ...
    @staticmethod
    def get_for_current_view() -> typing.Optional[PreviewTeamView]: ...
    def join_meeting_with_uri(self, meeting_uri: typing.Optional[winsdk.windows.foundation.Uri], /) -> None: ...
    def leave_full_screen(self) -> None: ...
    def notify_meeting_ended(self, kind: PreviewTeamEndMeetingKind, /) -> None: ...
    def request_foreground(self) -> None: ...
    def set_button_label(self, label: str, /) -> None: ...
    def set_title(self, title: str, /) -> None: ...
    def start_sharing_screen(self) -> None: ...
    def stop_sharing_screen(self) -> None: ...
    def add_cleanup_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[PreviewTeamView, PreviewTeamCleanupRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_cleanup_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_command_invoked(self, handler: winsdk.windows.foundation.TypedEventHandler[PreviewTeamView, PreviewTeamCommandInvokedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_command_invoked(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_end_meeting_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[PreviewTeamView, PreviewTeamEndMeetingRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_end_meeting_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_is_full_screen_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PreviewTeamView, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_full_screen_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_is_screen_sharing_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PreviewTeamView, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_is_screen_sharing_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_join_meeting_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[PreviewTeamView, PreviewTeamJoinMeetingRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_join_meeting_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_sharing_screen_bounds_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PreviewTeamView, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_sharing_screen_bounds_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_system_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PreviewTeamView, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_system_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

