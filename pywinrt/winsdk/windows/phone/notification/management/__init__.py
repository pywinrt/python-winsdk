# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Phone.Notification.Management")

try:
    import winsdk.windows.applicationmodel.appointments
except ImportError:
    pass

try:
    import winsdk.windows.applicationmodel.email
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
    import winsdk.windows.storage.streams
except ImportError:
    pass

class AccessoryNotificationType(enum.IntFlag):
    NONE = 0
    PHONE = 0x1
    EMAIL = 0x2
    REMINDER = 0x4
    ALARM = 0x8
    TOAST = 0x10
    APP_UNINSTALLED = 0x20
    DND = 0x40
    DRIVING_MODE = 0x80
    BATTERY_SAVER = 0x100
    MEDIA = 0x200
    CORTANA_TILE = 0x400
    TOAST_CLEARED = 0x800
    CALENDAR_CHANGED = 0x1000
    VOLUME_CHANGED = 0x2000
    EMAIL_READ_STATUS_CHANGED = 0x4000

class CalendarChangedEvent(enum.IntEnum):
    LOST_EVENTS = 0
    APPOINTMENT_ADDED = 1
    APPOINTMENT_CHANGED = 2
    APPOINTMENT_DELETED = 3
    CALENDAR_ADDED = 4
    CALENDAR_CHANGED = 5
    CALENDAR_DELETED = 6

class PhoneCallAudioEndpoint(enum.IntEnum):
    DEFAULT = 0
    SPEAKER = 1
    HANDSFREE = 2

class PhoneCallDirection(enum.IntEnum):
    INCOMING = 0
    OUTGOING = 1

class PhoneCallState(enum.IntEnum):
    UNKNOWN = 0
    RINGING = 1
    TALKING = 2
    HELD = 3
    ENDED = 4

class PhoneCallTransport(enum.IntEnum):
    CELLULAR = 0
    VOIP = 1

class PhoneLineRegistrationState(enum.IntEnum):
    DISCONNECTED = 0
    HOME = 1
    ROAMING = 2

class PhoneMediaType(enum.IntEnum):
    AUDIO_ONLY = 0
    AUDIO_VIDEO = 1

class PhoneNotificationType(enum.IntEnum):
    NEW_CALL = 0
    CALL_CHANGED = 1
    LINE_CHANGED = 2
    PHONE_CALL_AUDIO_ENDPOINT_CHANGED = 3
    PHONE_MUTE_CHANGED = 4

class PlaybackCapability(enum.IntFlag):
    NONE = 0
    PLAY = 0x1
    PAUSE = 0x2
    STOP = 0x4
    RECORD = 0x8
    FAST_FORWARD = 0x10
    REWIND = 0x20
    NEXT = 0x40
    PREVIOUS = 0x80
    CHANNEL_UP = 0x100
    CHANNEL_DOWN = 0x200

class PlaybackCommand(enum.IntEnum):
    PLAY = 0
    PAUSE = 1
    STOP = 2
    RECORD = 3
    FAST_FORWARD = 4
    REWIND = 5
    NEXT = 6
    PREVIOUS = 7
    CHANNEL_UP = 8
    CHANNEL_DOWN = 9

class PlaybackStatus(enum.IntEnum):
    NONE = 0
    TRACK_CHANGED = 1
    STOPPED = 2
    PLAYING = 3
    PAUSED = 4

class ReminderState(enum.IntEnum):
    ACTIVE = 0
    SNOOZED = 1
    DISMISSED = 2

class VibrateState(enum.IntEnum):
    RINGER_OFF_VIBRATE_OFF = 0
    RINGER_OFF_VIBRATE_ON = 1
    RINGER_ON_VIBRATE_OFF = 2
    RINGER_ON_VIBRATE_ON = 3

_ns_module._register_AccessoryNotificationType(AccessoryNotificationType)
_ns_module._register_CalendarChangedEvent(CalendarChangedEvent)
_ns_module._register_PhoneCallAudioEndpoint(PhoneCallAudioEndpoint)
_ns_module._register_PhoneCallDirection(PhoneCallDirection)
_ns_module._register_PhoneCallState(PhoneCallState)
_ns_module._register_PhoneCallTransport(PhoneCallTransport)
_ns_module._register_PhoneLineRegistrationState(PhoneLineRegistrationState)
_ns_module._register_PhoneMediaType(PhoneMediaType)
_ns_module._register_PhoneNotificationType(PhoneNotificationType)
_ns_module._register_PlaybackCapability(PlaybackCapability)
_ns_module._register_PlaybackCommand(PlaybackCommand)
_ns_module._register_PlaybackStatus(PlaybackStatus)
_ns_module._register_ReminderState(ReminderState)
_ns_module._register_VibrateState(VibrateState)

AccessoryManager = _ns_module.AccessoryManager
AlarmNotificationTriggerDetails = _ns_module.AlarmNotificationTriggerDetails
AppNotificationInfo = _ns_module.AppNotificationInfo
BinaryId = _ns_module.BinaryId
CalendarChangedNotificationTriggerDetails = _ns_module.CalendarChangedNotificationTriggerDetails
CortanaTileNotificationTriggerDetails = _ns_module.CortanaTileNotificationTriggerDetails
EmailAccountInfo = _ns_module.EmailAccountInfo
EmailFolderInfo = _ns_module.EmailFolderInfo
EmailNotificationTriggerDetails = _ns_module.EmailNotificationTriggerDetails
EmailReadNotificationTriggerDetails = _ns_module.EmailReadNotificationTriggerDetails
MediaControlsTriggerDetails = _ns_module.MediaControlsTriggerDetails
MediaMetadata = _ns_module.MediaMetadata
PhoneCallDetails = _ns_module.PhoneCallDetails
PhoneLineDetails = _ns_module.PhoneLineDetails
PhoneNotificationTriggerDetails = _ns_module.PhoneNotificationTriggerDetails
ReminderNotificationTriggerDetails = _ns_module.ReminderNotificationTriggerDetails
SpeedDialEntry = _ns_module.SpeedDialEntry
TextResponse = _ns_module.TextResponse
ToastNotificationTriggerDetails = _ns_module.ToastNotificationTriggerDetails
VolumeInfo = _ns_module.VolumeInfo
IAccessoryNotificationTriggerDetails = _ns_module.IAccessoryNotificationTriggerDetails
