# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Sms")

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

class CellularClass(enum.IntEnum):
    NONE = 0
    GSM = 1
    CDMA = 2

class SmsBroadcastType(enum.IntEnum):
    OTHER = 0
    CMAS_PRESIDENTIAL = 1
    CMAS_EXTREME = 2
    CMAS_SEVERE = 3
    CMAS_AMBER = 4
    CMAS_TEST = 5
    E_U_ALERT1 = 6
    E_U_ALERT2 = 7
    E_U_ALERT3 = 8
    E_U_ALERT_AMBER = 9
    E_U_ALERT_INFO = 10
    ETWS_EARTHQUAKE = 11
    ETWS_TSUNAMI = 12
    ETWS_TSUNAMI_AND_EARTHQUAKE = 13
    LAT_ALERT_LOCAL = 14

class SmsDataFormat(enum.IntEnum):
    UNKNOWN = 0
    CDMA_SUBMIT = 1
    GSM_SUBMIT = 2
    CDMA_DELIVER = 3
    GSM_DELIVER = 4

class SmsDeviceStatus(enum.IntEnum):
    OFF = 0
    READY = 1
    SIM_NOT_INSERTED = 2
    BAD_SIM = 3
    DEVICE_FAILURE = 4
    SUBSCRIPTION_NOT_ACTIVATED = 5
    DEVICE_LOCKED = 6
    DEVICE_BLOCKED = 7

class SmsEncoding(enum.IntEnum):
    UNKNOWN = 0
    OPTIMAL = 1
    SEVEN_BIT_ASCII = 2
    UNICODE = 3
    GSM_SEVEN_BIT = 4
    EIGHT_BIT = 5
    LATIN = 6
    KOREAN = 7
    I_A5 = 8
    SHIFT_JIS = 9
    LATIN_HEBREW = 10

class SmsFilterActionType(enum.IntEnum):
    ACCEPT_IMMEDIATELY = 0
    DROP = 1
    PEEK = 2
    ACCEPT = 3

class SmsGeographicalScope(enum.IntEnum):
    NONE = 0
    CELL_WITH_IMMEDIATE_DISPLAY = 1
    LOCATION_AREA = 2
    PLMN = 3
    CELL = 4

class SmsMessageClass(enum.IntEnum):
    NONE = 0
    CLASS0 = 1
    CLASS1 = 2
    CLASS2 = 3
    CLASS3 = 4

class SmsMessageFilter(enum.IntEnum):
    ALL = 0
    UNREAD = 1
    READ = 2
    SENT = 3
    DRAFT = 4

class SmsMessageType(enum.IntEnum):
    BINARY = 0
    TEXT = 1
    WAP = 2
    APP = 3
    BROADCAST = 4
    VOICEMAIL = 5
    STATUS = 6

class SmsModemErrorCode(enum.IntEnum):
    OTHER = 0
    MESSAGING_NETWORK_ERROR = 1
    SMS_OPERATION_NOT_SUPPORTED_BY_DEVICE = 2
    SMS_SERVICE_NOT_SUPPORTED_BY_NETWORK = 3
    DEVICE_FAILURE = 4
    MESSAGE_NOT_ENCODED_PROPERLY = 5
    MESSAGE_TOO_LARGE = 6
    DEVICE_NOT_READY = 7
    NETWORK_NOT_READY = 8
    INVALID_SMSC_ADDRESS = 9
    NETWORK_FAILURE = 10
    FIXED_DIALING_NUMBER_RESTRICTED = 11

_ns_module._register_CellularClass(CellularClass)
_ns_module._register_SmsBroadcastType(SmsBroadcastType)
_ns_module._register_SmsDataFormat(SmsDataFormat)
_ns_module._register_SmsDeviceStatus(SmsDeviceStatus)
_ns_module._register_SmsEncoding(SmsEncoding)
_ns_module._register_SmsFilterActionType(SmsFilterActionType)
_ns_module._register_SmsGeographicalScope(SmsGeographicalScope)
_ns_module._register_SmsMessageClass(SmsMessageClass)
_ns_module._register_SmsMessageFilter(SmsMessageFilter)
_ns_module._register_SmsMessageType(SmsMessageType)
_ns_module._register_SmsModemErrorCode(SmsModemErrorCode)

SmsEncodedLength = _ns_module.SmsEncodedLength
DeleteSmsMessageOperation = _ns_module.DeleteSmsMessageOperation
DeleteSmsMessagesOperation = _ns_module.DeleteSmsMessagesOperation
GetSmsDeviceOperation = _ns_module.GetSmsDeviceOperation
GetSmsMessageOperation = _ns_module.GetSmsMessageOperation
GetSmsMessagesOperation = _ns_module.GetSmsMessagesOperation
SendSmsMessageOperation = _ns_module.SendSmsMessageOperation
SmsAppMessage = _ns_module.SmsAppMessage
SmsBinaryMessage = _ns_module.SmsBinaryMessage
SmsBroadcastMessage = _ns_module.SmsBroadcastMessage
SmsDevice = _ns_module.SmsDevice
SmsDevice2 = _ns_module.SmsDevice2
SmsDeviceMessageStore = _ns_module.SmsDeviceMessageStore
SmsFilterRule = _ns_module.SmsFilterRule
SmsFilterRules = _ns_module.SmsFilterRules
SmsMessageReceivedEventArgs = _ns_module.SmsMessageReceivedEventArgs
SmsMessageReceivedTriggerDetails = _ns_module.SmsMessageReceivedTriggerDetails
SmsMessageRegistration = _ns_module.SmsMessageRegistration
SmsReceivedEventDetails = _ns_module.SmsReceivedEventDetails
SmsSendMessageResult = _ns_module.SmsSendMessageResult
SmsStatusMessage = _ns_module.SmsStatusMessage
SmsTextMessage = _ns_module.SmsTextMessage
SmsTextMessage2 = _ns_module.SmsTextMessage2
SmsVoicemailMessage = _ns_module.SmsVoicemailMessage
SmsWapMessage = _ns_module.SmsWapMessage
ISmsBinaryMessage = _ns_module.ISmsBinaryMessage
ISmsDevice = _ns_module.ISmsDevice
ISmsMessage = _ns_module.ISmsMessage
ISmsMessageBase = _ns_module.ISmsMessageBase
ISmsTextMessage = _ns_module.ISmsTextMessage
