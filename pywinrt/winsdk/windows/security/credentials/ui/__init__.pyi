# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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
    import winsdk.windows.storage.streams
except Exception:
    pass

class AuthenticationProtocol(enum.IntEnum):
    BASIC = 0
    DIGEST = 1
    NTLM = 2
    KERBEROS = 3
    NEGOTIATE = 4
    CRED_SSP = 5
    CUSTOM = 6

class CredentialSaveOption(enum.IntEnum):
    UNSELECTED = 0
    SELECTED = 1
    HIDDEN = 2

class UserConsentVerificationResult(enum.IntEnum):
    VERIFIED = 0
    DEVICE_NOT_PRESENT = 1
    NOT_CONFIGURED_FOR_USER = 2
    DISABLED_BY_POLICY = 3
    DEVICE_BUSY = 4
    RETRIES_EXHAUSTED = 5
    CANCELED = 6

class UserConsentVerifierAvailability(enum.IntEnum):
    AVAILABLE = 0
    DEVICE_NOT_PRESENT = 1
    NOT_CONFIGURED_FOR_USER = 2
    DISABLED_BY_POLICY = 3
    DEVICE_BUSY = 4

class CredentialPicker(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> CredentialPicker: ...
    @typing.overload
    @staticmethod
    def pick_async(options: typing.Optional[CredentialPickerOptions]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[CredentialPickerResults]]: ...
    @typing.overload
    @staticmethod
    def pick_async(target_name: str, message: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[CredentialPickerResults]]: ...
    @typing.overload
    @staticmethod
    def pick_async(target_name: str, message: str, caption: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[CredentialPickerResults]]: ...

class CredentialPickerOptions(_winrt.Object):
    target_name: str
    previous_credential: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    message: str
    error_code: _winrt.UInt32
    custom_authentication_protocol: str
    credential_save_option: CredentialSaveOption
    caption: str
    caller_saves_credential: _winrt.Boolean
    authentication_protocol: AuthenticationProtocol
    always_display_dialog: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CredentialPickerOptions: ...
    def __init__(self) -> None: ...

class CredentialPickerResults(_winrt.Object):
    credential: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    credential_domain_name: str
    credential_password: str
    credential_save_option: CredentialSaveOption
    credential_saved: _winrt.Boolean
    credential_user_name: str
    error_code: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> CredentialPickerResults: ...

class UserConsentVerifier(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> UserConsentVerifier: ...
    @staticmethod
    def check_availability_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[UserConsentVerifierAvailability]]: ...
    @staticmethod
    def request_verification_async(message: str) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[UserConsentVerificationResult]]: ...

