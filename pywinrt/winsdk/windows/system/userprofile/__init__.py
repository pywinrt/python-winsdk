# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.System.UserProfile")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.globalization
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
    import winsdk.windows.system
except ImportError:
    pass

class AccountPictureKind(enum.IntEnum):
    SMALL_IMAGE = 0
    LARGE_IMAGE = 1
    VIDEO = 2

class SetAccountPictureResult(enum.IntEnum):
    SUCCESS = 0
    CHANGE_DISABLED = 1
    LARGE_OR_DYNAMIC_ERROR = 2
    VIDEO_FRAME_SIZE_ERROR = 3
    FILE_SIZE_ERROR = 4
    FAILURE = 5

class SetImageFeedResult(enum.IntEnum):
    SUCCESS = 0
    CHANGE_DISABLED = 1
    USER_CANCELED = 2

_ns_module._register_AccountPictureKind(AccountPictureKind)
_ns_module._register_SetAccountPictureResult(SetAccountPictureResult)
_ns_module._register_SetImageFeedResult(SetImageFeedResult)

AdvertisingManager = _ns_module.AdvertisingManager
AdvertisingManagerForUser = _ns_module.AdvertisingManagerForUser
AssignedAccessSettings = _ns_module.AssignedAccessSettings
DiagnosticsSettings = _ns_module.DiagnosticsSettings
FirstSignInSettings = _ns_module.FirstSignInSettings
GlobalizationPreferences = _ns_module.GlobalizationPreferences
GlobalizationPreferencesForUser = _ns_module.GlobalizationPreferencesForUser
LockScreen = _ns_module.LockScreen
UserInformation = _ns_module.UserInformation
UserProfilePersonalizationSettings = _ns_module.UserProfilePersonalizationSettings
