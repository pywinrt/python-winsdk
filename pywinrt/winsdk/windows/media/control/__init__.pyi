# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.media
import winsdk.windows.storage.streams

class GlobalSystemMediaTransportControlsSessionPlaybackStatus(enum.IntEnum):
    CLOSED = 0
    OPENED = 1
    CHANGING = 2
    STOPPED = 3
    PLAYING = 4
    PAUSED = 5

Self = typing.TypeVar('Self')

class CurrentSessionChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> CurrentSessionChangedEventArgs: ...

class GlobalSystemMediaTransportControlsSession(winsdk.system.Object):
    source_app_user_model_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GlobalSystemMediaTransportControlsSession: ...
    def get_playback_info(self) -> typing.Optional[GlobalSystemMediaTransportControlsSessionPlaybackInfo]: ...
    def get_timeline_properties(self) -> typing.Optional[GlobalSystemMediaTransportControlsSessionTimelineProperties]: ...
    def try_change_auto_repeat_mode_async(self, requested_auto_repeat_mode: winsdk.windows.media.MediaPlaybackAutoRepeatMode) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_change_channel_down_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_change_channel_up_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_change_playback_position_async(self, requested_playback_position: winsdk.system.Int64) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_change_playback_rate_async(self, requested_playback_rate: winsdk.system.Double) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_change_shuffle_active_async(self, requested_shuffle_state: winsdk.system.Boolean) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_fast_forward_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_get_media_properties_async(self) -> winsdk.windows.foundation.IAsyncOperation[GlobalSystemMediaTransportControlsSessionMediaProperties]: ...
    def try_pause_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_play_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_record_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_rewind_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_skip_next_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_skip_previous_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_stop_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_toggle_play_pause_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def add_media_properties_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GlobalSystemMediaTransportControlsSession, MediaPropertiesChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_media_properties_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_playback_info_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GlobalSystemMediaTransportControlsSession, PlaybackInfoChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_playback_info_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_timeline_properties_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GlobalSystemMediaTransportControlsSession, TimelinePropertiesChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_timeline_properties_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GlobalSystemMediaTransportControlsSessionManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GlobalSystemMediaTransportControlsSessionManager: ...
    def get_current_session(self) -> typing.Optional[GlobalSystemMediaTransportControlsSession]: ...
    def get_sessions(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GlobalSystemMediaTransportControlsSession]]: ...
    @staticmethod
    def request_async() -> winsdk.windows.foundation.IAsyncOperation[GlobalSystemMediaTransportControlsSessionManager]: ...
    def add_current_session_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GlobalSystemMediaTransportControlsSessionManager, CurrentSessionChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_current_session_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_sessions_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GlobalSystemMediaTransportControlsSessionManager, SessionsChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_sessions_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class GlobalSystemMediaTransportControlsSessionMediaProperties(winsdk.system.Object):
    album_artist: str
    album_title: str
    album_track_count: winsdk.system.Int32
    artist: str
    genres: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    playback_type: typing.Optional[typing.Optional[winsdk.windows.media.MediaPlaybackType]]
    subtitle: str
    thumbnail: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    title: str
    track_number: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GlobalSystemMediaTransportControlsSessionMediaProperties: ...

class GlobalSystemMediaTransportControlsSessionPlaybackControls(winsdk.system.Object):
    is_channel_down_enabled: winsdk.system.Boolean
    is_channel_up_enabled: winsdk.system.Boolean
    is_fast_forward_enabled: winsdk.system.Boolean
    is_next_enabled: winsdk.system.Boolean
    is_pause_enabled: winsdk.system.Boolean
    is_play_enabled: winsdk.system.Boolean
    is_play_pause_toggle_enabled: winsdk.system.Boolean
    is_playback_position_enabled: winsdk.system.Boolean
    is_playback_rate_enabled: winsdk.system.Boolean
    is_previous_enabled: winsdk.system.Boolean
    is_record_enabled: winsdk.system.Boolean
    is_repeat_enabled: winsdk.system.Boolean
    is_rewind_enabled: winsdk.system.Boolean
    is_shuffle_enabled: winsdk.system.Boolean
    is_stop_enabled: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GlobalSystemMediaTransportControlsSessionPlaybackControls: ...

class GlobalSystemMediaTransportControlsSessionPlaybackInfo(winsdk.system.Object):
    auto_repeat_mode: typing.Optional[typing.Optional[winsdk.windows.media.MediaPlaybackAutoRepeatMode]]
    controls: typing.Optional[GlobalSystemMediaTransportControlsSessionPlaybackControls]
    is_shuffle_active: typing.Optional[typing.Optional[winsdk.system.Boolean]]
    playback_rate: typing.Optional[typing.Optional[winsdk.system.Double]]
    playback_status: GlobalSystemMediaTransportControlsSessionPlaybackStatus
    playback_type: typing.Optional[typing.Optional[winsdk.windows.media.MediaPlaybackType]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GlobalSystemMediaTransportControlsSessionPlaybackInfo: ...

class GlobalSystemMediaTransportControlsSessionTimelineProperties(winsdk.system.Object):
    end_time: datetime.timedelta
    last_updated_time: datetime.datetime
    max_seek_time: datetime.timedelta
    min_seek_time: datetime.timedelta
    position: datetime.timedelta
    start_time: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> GlobalSystemMediaTransportControlsSessionTimelineProperties: ...

class MediaPropertiesChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaPropertiesChangedEventArgs: ...

class PlaybackInfoChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlaybackInfoChangedEventArgs: ...

class SessionsChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> SessionsChangedEventArgs: ...

class TimelinePropertiesChangedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> TimelinePropertiesChangedEventArgs: ...

