# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.contacts
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class AddContactResult(enum.IntEnum):
    ADDED = 0
    ALREADY_ADDED = 1
    UNAVAILABLE = 2

Self = typing.TypeVar('Self')

class ContactPickerUI(winsdk.system.Object):
    desired_fields: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    selection_mode: winsdk.windows.applicationmodel.contacts.ContactSelectionMode
    desired_fields_with_contact_field_type: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.applicationmodel.contacts.ContactFieldType]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ContactPickerUI: ...
    @typing.overload
    def add_contact(self, contact: typing.Optional[winsdk.windows.applicationmodel.contacts.Contact], /) -> AddContactResult: ...
    @typing.overload
    def add_contact(self, id: str, contact: typing.Optional[winsdk.windows.applicationmodel.contacts.Contact], /) -> AddContactResult: ...
    def contains_contact(self, id: str, /) -> winsdk.system.Boolean: ...
    def remove_contact(self, id: str, /) -> None: ...
    def add_contact_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[ContactPickerUI, ContactRemovedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_contact_removed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class ContactRemovedEventArgs(winsdk.system.Object):
    id: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ContactRemovedEventArgs: ...

