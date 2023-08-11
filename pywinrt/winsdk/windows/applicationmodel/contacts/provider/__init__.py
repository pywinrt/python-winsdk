# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.Contacts.Provider")

try:
    import winsdk.windows.applicationmodel.contacts
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

class AddContactResult(enum.IntEnum):
    ADDED = 0
    ALREADY_ADDED = 1
    UNAVAILABLE = 2

_ns_module._register_AddContactResult(AddContactResult)

ContactPickerUI = _ns_module.ContactPickerUI
ContactRemovedEventArgs = _ns_module.ContactRemovedEventArgs
