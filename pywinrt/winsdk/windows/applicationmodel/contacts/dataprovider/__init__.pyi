# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.applicationmodel.contacts
except Exception:
    pass

try:
    import winsdk.windows.foundation
except Exception:
    pass

class ContactDataProviderConnection(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactDataProviderConnection: ...
    def start(self) -> None: ...
    def add_server_search_read_batch_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[ContactDataProviderConnection, ContactListServerSearchReadBatchRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_server_search_read_batch_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_sync_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[ContactDataProviderConnection, ContactListSyncManagerSyncRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_sync_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_create_or_update_contact_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[ContactDataProviderConnection, ContactListCreateOrUpdateContactRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_create_or_update_contact_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_delete_contact_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[ContactDataProviderConnection, ContactListDeleteContactRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_delete_contact_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class ContactDataProviderTriggerDetails(_winrt.Object, interfaces=[]):
    connection: typing.Optional[ContactDataProviderConnection]
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactDataProviderTriggerDetails: ...

class ContactListCreateOrUpdateContactRequest(_winrt.Object, interfaces=[]):
    contact: typing.Optional[winsdk.windows.applicationmodel.contacts.Contact]
    contact_list_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactListCreateOrUpdateContactRequest: ...
    def report_completed_async(self, created_or_updated_contact: typing.Optional[winsdk.windows.applicationmodel.contacts.Contact]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def report_failed_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ContactListCreateOrUpdateContactRequestEventArgs(_winrt.Object, interfaces=[]):
    request: typing.Optional[ContactListCreateOrUpdateContactRequest]
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactListCreateOrUpdateContactRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class ContactListDeleteContactRequest(_winrt.Object, interfaces=[]):
    contact_id: str
    contact_list_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactListDeleteContactRequest: ...
    def report_completed_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def report_failed_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ContactListDeleteContactRequestEventArgs(_winrt.Object, interfaces=[]):
    request: typing.Optional[ContactListDeleteContactRequest]
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactListDeleteContactRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class ContactListServerSearchReadBatchRequest(_winrt.Object, interfaces=[]):
    contact_list_id: str
    options: typing.Optional[winsdk.windows.applicationmodel.contacts.ContactQueryOptions]
    session_id: str
    suggested_batch_size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactListServerSearchReadBatchRequest: ...
    def report_completed_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def report_failed_async(self, batch_status: winsdk.windows.applicationmodel.contacts.ContactBatchStatus) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def save_contact_async(self, contact: typing.Optional[winsdk.windows.applicationmodel.contacts.Contact]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ContactListServerSearchReadBatchRequestEventArgs(_winrt.Object, interfaces=[]):
    request: typing.Optional[ContactListServerSearchReadBatchRequest]
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactListServerSearchReadBatchRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class ContactListSyncManagerSyncRequest(_winrt.Object, interfaces=[]):
    contact_list_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactListSyncManagerSyncRequest: ...
    def report_completed_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def report_failed_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class ContactListSyncManagerSyncRequestEventArgs(_winrt.Object, interfaces=[]):
    request: typing.Optional[ContactListSyncManagerSyncRequest]
    @staticmethod
    def _from(obj: _winrt.Object) -> ContactListSyncManagerSyncRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

