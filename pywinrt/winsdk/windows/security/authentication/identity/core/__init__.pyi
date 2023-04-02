# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class MicrosoftAccountMultiFactorAuthenticationType(enum.IntEnum):
    USER = 0
    DEVICE = 1

class MicrosoftAccountMultiFactorServiceResponse(enum.IntEnum):
    SUCCESS = 0
    ERROR = 1
    NO_NETWORK_CONNECTION = 2
    SERVICE_UNAVAILABLE = 3
    TOTP_SETUP_DENIED = 4
    NGC_NOT_SETUP = 5
    SESSION_ALREADY_DENIED = 6
    SESSION_ALREADY_APPROVED = 7
    SESSION_EXPIRED = 8
    NGC_NONCE_EXPIRED = 9
    INVALID_SESSION_ID = 10
    INVALID_SESSION_TYPE = 11
    INVALID_OPERATION = 12
    INVALID_STATE_TRANSITION = 13
    DEVICE_NOT_FOUND = 14
    FLOW_DISABLED = 15
    SESSION_NOT_APPROVED = 16
    OPERATION_CANCELED_BY_USER = 17
    NGC_DISABLED_BY_SERVER = 18
    NGC_KEY_NOT_FOUND_ON_SERVER = 19
    U_I_REQUIRED = 20
    DEVICE_ID_CHANGED = 21

class MicrosoftAccountMultiFactorSessionApprovalStatus(enum.IntEnum):
    PENDING = 0
    APPROVED = 1
    DENIED = 2

class MicrosoftAccountMultiFactorSessionAuthenticationStatus(enum.IntEnum):
    AUTHENTICATED = 0
    UNAUTHENTICATED = 1

Self = typing.TypeVar('Self')

class MicrosoftAccountMultiFactorAuthenticationManager(winsdk.system.Object):
    current: typing.ClassVar[typing.Optional[MicrosoftAccountMultiFactorAuthenticationManager]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MicrosoftAccountMultiFactorAuthenticationManager: ...
    def add_device_async(self, user_account_id: str, authentication_token: str, wns_channel_id: str) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorServiceResponse]: ...
    @typing.overload
    def approve_session_async(self, session_authentiction_status: MicrosoftAccountMultiFactorSessionAuthenticationStatus, authentication_session_info: typing.Optional[MicrosoftAccountMultiFactorSessionInfo]) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorServiceResponse]: ...
    @typing.overload
    def approve_session_async(self, session_authentiction_status: MicrosoftAccountMultiFactorSessionAuthenticationStatus, user_account_id: str, session_id: str, session_authentication_type: MicrosoftAccountMultiFactorAuthenticationType) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorServiceResponse]: ...
    @typing.overload
    def deny_session_async(self, authentication_session_info: typing.Optional[MicrosoftAccountMultiFactorSessionInfo]) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorServiceResponse]: ...
    @typing.overload
    def deny_session_async(self, user_account_id: str, session_id: str, session_authentication_type: MicrosoftAccountMultiFactorAuthenticationType) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorServiceResponse]: ...
    def get_one_time_pass_code_async(self, user_account_id: str, code_length: winsdk.system.UInt32) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorOneTimeCodedInfo]: ...
    def get_sessions_and_unregistered_accounts_async(self, user_account_id_list: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo]: ...
    def get_sessions_async(self, user_account_id_list: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorGetSessionsResult]: ...
    def remove_device_async(self, user_account_id: str) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorServiceResponse]: ...
    def update_wns_channel_async(self, user_account_id: str, channel_uri: str) -> winsdk.windows.foundation.IAsyncOperation[MicrosoftAccountMultiFactorServiceResponse]: ...

class MicrosoftAccountMultiFactorGetSessionsResult(winsdk.system.Object):
    service_response: MicrosoftAccountMultiFactorServiceResponse
    sessions: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MicrosoftAccountMultiFactorSessionInfo]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MicrosoftAccountMultiFactorGetSessionsResult: ...

class MicrosoftAccountMultiFactorOneTimeCodedInfo(winsdk.system.Object):
    code: str
    service_response: MicrosoftAccountMultiFactorServiceResponse
    time_interval: datetime.timedelta
    time_to_live: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MicrosoftAccountMultiFactorOneTimeCodedInfo: ...

class MicrosoftAccountMultiFactorSessionInfo(winsdk.system.Object):
    approval_status: MicrosoftAccountMultiFactorSessionApprovalStatus
    authentication_type: MicrosoftAccountMultiFactorAuthenticationType
    display_session_id: str
    expiration_time: datetime.datetime
    request_time: datetime.datetime
    session_id: str
    user_account_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MicrosoftAccountMultiFactorSessionInfo: ...

class MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(winsdk.system.Object):
    service_response: MicrosoftAccountMultiFactorServiceResponse
    sessions: typing.Optional[winsdk.windows.foundation.collections.IVectorView[MicrosoftAccountMultiFactorSessionInfo]]
    unregistered_accounts: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo: ...

