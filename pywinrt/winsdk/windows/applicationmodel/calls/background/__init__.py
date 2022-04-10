# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.ApplicationModel.Calls.Background")

try:
    import winsdk.windows.foundation
except Exception:
    pass

class PhoneCallBlockedReason(enum.IntEnum):
    IN_CALL_BLOCKING_LIST = 0
    PRIVATE_NUMBER = 1
    UNKNOWN_NUMBER = 2

class PhoneIncomingCallDismissedReason(enum.IntEnum):
    UNKNOWN = 0
    CALL_REJECTED = 1
    TEXT_REPLY = 2
    CONNECTION_LOST = 3

class PhoneLineChangeKind(enum.IntEnum):
    ADDED = 0
    REMOVED = 1
    PROPERTIES_CHANGED = 2

class PhoneLineProperties(enum.IntFlag):
    NONE = 0
    BRANDING_OPTIONS = 0x1
    CAN_DIAL = 0x2
    CELLULAR_DETAILS = 0x4
    DISPLAY_COLOR = 0x8
    DISPLAY_NAME = 0x10
    NETWORK_NAME = 0x20
    NETWORK_STATE = 0x40
    TRANSPORT = 0x80
    VOICEMAIL = 0x100

class PhoneTriggerType(enum.IntEnum):
    NEW_VOICEMAIL_MESSAGE = 0
    CALL_HISTORY_CHANGED = 1
    LINE_CHANGED = 2
    AIRPLANE_MODE_DISABLED_FOR_EMERGENCY_CALL = 3
    CALL_ORIGIN_DATA_REQUEST = 4
    CALL_BLOCKED = 5
    INCOMING_CALL_DISMISSED = 6
    INCOMING_CALL_NOTIFICATION = 7

PhoneCallBlockedTriggerDetails = _ns_module.PhoneCallBlockedTriggerDetails
PhoneCallOriginDataRequestTriggerDetails = _ns_module.PhoneCallOriginDataRequestTriggerDetails
PhoneIncomingCallDismissedTriggerDetails = _ns_module.PhoneIncomingCallDismissedTriggerDetails
PhoneIncomingCallNotificationTriggerDetails = _ns_module.PhoneIncomingCallNotificationTriggerDetails
PhoneLineChangedTriggerDetails = _ns_module.PhoneLineChangedTriggerDetails
PhoneNewVoicemailMessageTriggerDetails = _ns_module.PhoneNewVoicemailMessageTriggerDetails
