# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Media.Playback")

try:
    import winsdk.windows.devices.enumeration
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.foundation.numerics
except ImportError:
    pass

try:
    import winsdk.windows.graphics.directx.direct3d11
except ImportError:
    pass

try:
    import winsdk.windows.media
except ImportError:
    pass

try:
    import winsdk.windows.media.audio
except ImportError:
    pass

try:
    import winsdk.windows.media.casting
except ImportError:
    pass

try:
    import winsdk.windows.media.core
except ImportError:
    pass

try:
    import winsdk.windows.media.mediaproperties
except ImportError:
    pass

try:
    import winsdk.windows.media.protection
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

try:
    import winsdk.windows.ui.composition
except ImportError:
    pass

class AutoLoadedDisplayPropertyKind(enum.IntEnum):
    NONE = 0
    MUSIC_OR_VIDEO = 1
    MUSIC = 2
    VIDEO = 3

class FailedMediaStreamKind(enum.IntEnum):
    UNKNOWN = 0
    AUDIO = 1
    VIDEO = 2

class MediaBreakInsertionMethod(enum.IntEnum):
    INTERRUPT = 0
    REPLACE = 1

class MediaCommandEnablingRule(enum.IntEnum):
    AUTO = 0
    ALWAYS = 1
    NEVER = 2

class MediaPlaybackItemChangedReason(enum.IntEnum):
    INITIAL_ITEM = 0
    END_OF_STREAM = 1
    ERROR = 2
    APP_REQUESTED = 3

class MediaPlaybackItemErrorCode(enum.IntEnum):
    NONE = 0
    ABORTED = 1
    NETWORK_ERROR = 2
    DECODE_ERROR = 3
    SOURCE_NOT_SUPPORTED_ERROR = 4
    ENCRYPTION_ERROR = 5

class MediaPlaybackSessionVideoConstrictionReason(enum.IntEnum):
    NONE = 0
    VIRTUAL_MACHINE = 1
    UNSUPPORTED_DISPLAY_ADAPTER = 2
    UNSIGNED_DRIVER = 3
    FRAME_SERVER_ENABLED = 4
    OUTPUT_PROTECTION_FAILED = 5
    UNKNOWN = 6

class MediaPlaybackState(enum.IntEnum):
    NONE = 0
    OPENING = 1
    BUFFERING = 2
    PLAYING = 3
    PAUSED = 4

class MediaPlayerAudioCategory(enum.IntEnum):
    OTHER = 0
    COMMUNICATIONS = 3
    ALERTS = 4
    SOUND_EFFECTS = 5
    GAME_EFFECTS = 6
    GAME_MEDIA = 7
    GAME_CHAT = 8
    SPEECH = 9
    MOVIE = 10
    MEDIA = 11

class MediaPlayerAudioDeviceType(enum.IntEnum):
    CONSOLE = 0
    MULTIMEDIA = 1
    COMMUNICATIONS = 2

class MediaPlayerError(enum.IntEnum):
    UNKNOWN = 0
    ABORTED = 1
    NETWORK_ERROR = 2
    DECODING_ERROR = 3
    SOURCE_NOT_SUPPORTED = 4

class MediaPlayerState(enum.IntEnum):
    CLOSED = 0
    OPENING = 1
    BUFFERING = 2
    PLAYING = 3
    PAUSED = 4
    STOPPED = 5

class SphericalVideoProjectionMode(enum.IntEnum):
    SPHERICAL = 0
    FLAT = 1

class StereoscopicVideoRenderMode(enum.IntEnum):
    MONO = 0
    STEREO = 1

class TimedMetadataTrackPresentationMode(enum.IntEnum):
    DISABLED = 0
    HIDDEN = 1
    APPLICATION_PRESENTED = 2
    PLATFORM_PRESENTED = 3

_ns_module._register_AutoLoadedDisplayPropertyKind(AutoLoadedDisplayPropertyKind)
_ns_module._register_FailedMediaStreamKind(FailedMediaStreamKind)
_ns_module._register_MediaBreakInsertionMethod(MediaBreakInsertionMethod)
_ns_module._register_MediaCommandEnablingRule(MediaCommandEnablingRule)
_ns_module._register_MediaPlaybackItemChangedReason(MediaPlaybackItemChangedReason)
_ns_module._register_MediaPlaybackItemErrorCode(MediaPlaybackItemErrorCode)
_ns_module._register_MediaPlaybackSessionVideoConstrictionReason(MediaPlaybackSessionVideoConstrictionReason)
_ns_module._register_MediaPlaybackState(MediaPlaybackState)
_ns_module._register_MediaPlayerAudioCategory(MediaPlayerAudioCategory)
_ns_module._register_MediaPlayerAudioDeviceType(MediaPlayerAudioDeviceType)
_ns_module._register_MediaPlayerError(MediaPlayerError)
_ns_module._register_MediaPlayerState(MediaPlayerState)
_ns_module._register_SphericalVideoProjectionMode(SphericalVideoProjectionMode)
_ns_module._register_StereoscopicVideoRenderMode(StereoscopicVideoRenderMode)
_ns_module._register_TimedMetadataTrackPresentationMode(TimedMetadataTrackPresentationMode)

BackgroundMediaPlayer = _ns_module.BackgroundMediaPlayer
CurrentMediaPlaybackItemChangedEventArgs = _ns_module.CurrentMediaPlaybackItemChangedEventArgs
MediaBreak = _ns_module.MediaBreak
MediaBreakEndedEventArgs = _ns_module.MediaBreakEndedEventArgs
MediaBreakManager = _ns_module.MediaBreakManager
MediaBreakSchedule = _ns_module.MediaBreakSchedule
MediaBreakSeekedOverEventArgs = _ns_module.MediaBreakSeekedOverEventArgs
MediaBreakSkippedEventArgs = _ns_module.MediaBreakSkippedEventArgs
MediaBreakStartedEventArgs = _ns_module.MediaBreakStartedEventArgs
MediaItemDisplayProperties = _ns_module.MediaItemDisplayProperties
MediaPlaybackAudioTrackList = _ns_module.MediaPlaybackAudioTrackList
MediaPlaybackCommandManager = _ns_module.MediaPlaybackCommandManager
MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
MediaPlaybackCommandManagerCommandBehavior = _ns_module.MediaPlaybackCommandManagerCommandBehavior
MediaPlaybackCommandManagerFastForwardReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerFastForwardReceivedEventArgs
MediaPlaybackCommandManagerNextReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerNextReceivedEventArgs
MediaPlaybackCommandManagerPauseReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerPauseReceivedEventArgs
MediaPlaybackCommandManagerPlayReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerPlayReceivedEventArgs
MediaPlaybackCommandManagerPositionReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerPositionReceivedEventArgs
MediaPlaybackCommandManagerPreviousReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerPreviousReceivedEventArgs
MediaPlaybackCommandManagerRateReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerRateReceivedEventArgs
MediaPlaybackCommandManagerRewindReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerRewindReceivedEventArgs
MediaPlaybackCommandManagerShuffleReceivedEventArgs = _ns_module.MediaPlaybackCommandManagerShuffleReceivedEventArgs
MediaPlaybackItem = _ns_module.MediaPlaybackItem
MediaPlaybackItemError = _ns_module.MediaPlaybackItemError
MediaPlaybackItemFailedEventArgs = _ns_module.MediaPlaybackItemFailedEventArgs
MediaPlaybackItemOpenedEventArgs = _ns_module.MediaPlaybackItemOpenedEventArgs
MediaPlaybackList = _ns_module.MediaPlaybackList
MediaPlaybackSession = _ns_module.MediaPlaybackSession
MediaPlaybackSessionBufferingStartedEventArgs = _ns_module.MediaPlaybackSessionBufferingStartedEventArgs
MediaPlaybackSessionOutputDegradationPolicyState = _ns_module.MediaPlaybackSessionOutputDegradationPolicyState
MediaPlaybackSphericalVideoProjection = _ns_module.MediaPlaybackSphericalVideoProjection
MediaPlaybackTimedMetadataTrackList = _ns_module.MediaPlaybackTimedMetadataTrackList
MediaPlaybackVideoTrackList = _ns_module.MediaPlaybackVideoTrackList
MediaPlayer = _ns_module.MediaPlayer
MediaPlayerDataReceivedEventArgs = _ns_module.MediaPlayerDataReceivedEventArgs
MediaPlayerFailedEventArgs = _ns_module.MediaPlayerFailedEventArgs
MediaPlayerRateChangedEventArgs = _ns_module.MediaPlayerRateChangedEventArgs
MediaPlayerSurface = _ns_module.MediaPlayerSurface
PlaybackMediaMarker = _ns_module.PlaybackMediaMarker
PlaybackMediaMarkerReachedEventArgs = _ns_module.PlaybackMediaMarkerReachedEventArgs
PlaybackMediaMarkerSequence = _ns_module.PlaybackMediaMarkerSequence
TimedMetadataPresentationModeChangedEventArgs = _ns_module.TimedMetadataPresentationModeChangedEventArgs
IMediaEnginePlaybackSource = _ns_module.IMediaEnginePlaybackSource
IMediaPlaybackSource = _ns_module.IMediaPlaybackSource
