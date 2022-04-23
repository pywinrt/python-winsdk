# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.security.cryptography.core
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

try:
    import winsdk.windows.system
except Exception:
    pass

class KeyCredentialAttestationStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    NOT_SUPPORTED = 2
    TEMPORARY_FAILURE = 3

class KeyCredentialCreationOption(enum.IntEnum):
    REPLACE_EXISTING = 0
    FAIL_IF_EXISTS = 1

class KeyCredentialStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    NOT_FOUND = 2
    USER_CANCELED = 3
    USER_PREFERS_PASSWORD = 4
    CREDENTIAL_ALREADY_EXISTS = 5
    SECURITY_DEVICE_LOCKED = 6

class WebAccountPictureSize(enum.IntEnum):
    SIZE64X64 = 64
    SIZE208X208 = 208
    SIZE424X424 = 424
    SIZE1080X1080 = 1080

class WebAccountState(enum.IntEnum):
    NONE = 0
    CONNECTED = 1
    ERROR = 2

class KeyCredential(_winrt.Object, interfaces=[]):
    name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyCredential: ...
    def get_attestation_async(self) -> winsdk.windows.foundation.IAsyncOperation[KeyCredentialAttestationResult]: ...
    def request_sign_async(self, data: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[KeyCredentialOperationResult]: ...
    @typing.overload
    def retrieve_public_key(self) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @typing.overload
    def retrieve_public_key(self, blob_type: winsdk.windows.security.cryptography.core.CryptographicPublicKeyBlobType) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...

class KeyCredentialAttestationResult(_winrt.Object, interfaces=[]):
    attestation_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    certificate_chain_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    status: KeyCredentialAttestationStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyCredentialAttestationResult: ...

class KeyCredentialManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyCredentialManager: ...
    @staticmethod
    def delete_async(name: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def is_supported_async() -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    @staticmethod
    def open_async(name: str) -> winsdk.windows.foundation.IAsyncOperation[KeyCredentialRetrievalResult]: ...
    @staticmethod
    def renew_attestation_async() -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def request_create_async(name: str, option: KeyCredentialCreationOption) -> winsdk.windows.foundation.IAsyncOperation[KeyCredentialRetrievalResult]: ...

class KeyCredentialOperationResult(_winrt.Object, interfaces=[]):
    result: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    status: KeyCredentialStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyCredentialOperationResult: ...

class KeyCredentialRetrievalResult(_winrt.Object, interfaces=[]):
    credential: typing.Optional[KeyCredential]
    status: KeyCredentialStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyCredentialRetrievalResult: ...

class PasswordCredential(_winrt.Object, interfaces=[]):
    user_name: str
    resource: str
    password: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: _winrt.Object) -> PasswordCredential: ...
    @typing.overload
    def __init__(self, resource: str, user_name: str, password: str) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...
    def retrieve_password(self) -> None: ...

class PasswordCredentialPropertyStore(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IPropertySet, winsdk.windows.foundation.collections.IObservableMap[str, _winrt.Object], winsdk.windows.foundation.collections.IMap[str, _winrt.Object], winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> PasswordCredentialPropertyStore: ...
    def __init__(self) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, _winrt.Object]]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[str, _winrt.Object]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def insert(self, key: str, value: typing.Optional[_winrt.Object]) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[_winrt.Object]: ...
    def remove(self, key: str) -> None: ...
    def add_map_changed(self, vhnd: winsdk.windows.foundation.collections.MapChangedEventHandler[str, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_map_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PasswordVault(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PasswordVault: ...
    def __init__(self) -> None: ...
    def add(self, credential: typing.Optional[PasswordCredential]) -> None: ...
    def find_all_by_resource(self, resource: str) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[PasswordCredential]]: ...
    def find_all_by_user_name(self, user_name: str) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[PasswordCredential]]: ...
    def remove(self, credential: typing.Optional[PasswordCredential]) -> None: ...
    def retrieve(self, resource: str, user_name: str) -> typing.Optional[PasswordCredential]: ...
    def retrieve_all(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[PasswordCredential]]: ...

class WebAccount(_winrt.Object, interfaces=[IWebAccount]):
    state: WebAccountState
    user_name: str
    web_account_provider: typing.Optional[WebAccountProvider]
    id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> WebAccount: ...
    def __init__(self, web_account_provider: typing.Optional[WebAccountProvider], user_name: str, state: WebAccountState) -> None: ...
    def get_picture_async(self, desized_size: WebAccountPictureSize) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStream]: ...
    @typing.overload
    def sign_out_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def sign_out_async(self, client_id: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class WebAccountProvider(_winrt.Object, interfaces=[]):
    display_name: str
    icon_uri: typing.Optional[winsdk.windows.foundation.Uri]
    id: str
    authority: str
    display_purpose: str
    user: typing.Optional[winsdk.windows.system.User]
    is_system_provider: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> WebAccountProvider: ...
    def __init__(self, id: str, display_name: str, icon_uri: typing.Optional[winsdk.windows.foundation.Uri]) -> None: ...

class IWebAccount(typing.Protocol):
    state: WebAccountState
    user_name: str
    web_account_provider: typing.Optional[WebAccountProvider]
    @staticmethod
    def _from(obj: _winrt.Object) -> IWebAccount: ...

