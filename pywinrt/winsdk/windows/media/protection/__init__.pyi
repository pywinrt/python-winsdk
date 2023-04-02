# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.media.playback

class GraphicsTrustStatus(enum.IntEnum):
    TRUST_NOT_REQUIRED = 0
    TRUST_ESTABLISHED = 1
    ENVIRONMENT_NOT_SUPPORTED = 2
    DRIVER_NOT_SUPPORTED = 3
    DRIVER_SIGNING_FAILURE = 4
    UNKNOWN_FAILURE = 5

class HdcpProtection(enum.IntEnum):
    OFF = 0
    ON = 1
    ON_WITH_TYPE_ENFORCEMENT = 2

class HdcpSetProtectionResult(enum.IntEnum):
    SUCCESS = 0
    TIMED_OUT = 1
    NOT_SUPPORTED = 2
    UNKNOWN_FAILURE = 3

class ProtectionCapabilityResult(enum.IntEnum):
    NOT_SUPPORTED = 0
    MAYBE = 1
    PROBABLY = 2

class RenewalStatus(enum.IntEnum):
    NOT_STARTED = 0
    UPDATES_IN_PROGRESS = 1
    USER_CANCELLED = 2
    APP_COMPONENTS_MAY_NEED_UPDATING = 3
    NO_COMPONENTS_FOUND = 4

class RevocationAndRenewalReasons(enum.IntFlag):
    USER_MODE_COMPONENT_LOAD = 0x1
    KERNEL_MODE_COMPONENT_LOAD = 0x2
    APP_COMPONENT = 0x4
    GLOBAL_REVOCATION_LIST_LOAD_FAILED = 0x10
    INVALID_GLOBAL_REVOCATION_LIST_SIGNATURE = 0x20
    GLOBAL_REVOCATION_LIST_ABSENT = 0x1000
    COMPONENT_REVOKED = 0x2000
    INVALID_COMPONENT_CERTIFICATE_EXTENDED_KEY_USE = 0x4000
    COMPONENT_CERTIFICATE_REVOKED = 0x8000
    INVALID_COMPONENT_CERTIFICATE_ROOT = 0x10000
    COMPONENT_HIGH_SECURITY_CERTIFICATE_REVOKED = 0x20000
    COMPONENT_LOW_SECURITY_CERTIFICATE_REVOKED = 0x40000
    BOOT_DRIVER_VERIFICATION_FAILED = 0x100000
    COMPONENT_SIGNED_WITH_TEST_CERTIFICATE = 0x1000000
    ENCRYPTION_FAILURE = 0x10000000

Self = typing.TypeVar('Self')

class ComponentLoadFailedEventArgs(winsdk.system.Object):
    completion: typing.Optional[MediaProtectionServiceCompletion]
    information: typing.Optional[RevocationAndRenewalInformation]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ComponentLoadFailedEventArgs: ...

class ComponentRenewal(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ComponentRenewal: ...
    @staticmethod
    def renew_system_components_async(information: typing.Optional[RevocationAndRenewalInformation]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[RenewalStatus, winsdk.system.UInt32]: ...

class HdcpSession(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> HdcpSession: ...
    def __new__(cls: typing.Type[HdcpSession]) -> HdcpSession:...
    def close(self) -> None: ...
    def get_effective_protection(self) -> typing.Optional[typing.Optional[HdcpProtection]]: ...
    def is_effective_protection_at_least(self, protection: HdcpProtection) -> winsdk.system.Boolean: ...
    def set_desired_min_protection_async(self, protection: HdcpProtection) -> winsdk.windows.foundation.IAsyncOperation[HdcpSetProtectionResult]: ...
    def add_protection_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[HdcpSession, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_protection_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MediaProtectionManager(winsdk.system.Object):
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaProtectionManager: ...
    def __new__(cls: typing.Type[MediaProtectionManager]) -> MediaProtectionManager:...
    def add_component_load_failed(self, handler: typing.Optional[ComponentLoadFailedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_component_load_failed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_reboot_needed(self, handler: typing.Optional[RebootNeededEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_reboot_needed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_service_requested(self, handler: typing.Optional[ServiceRequestedEventHandler]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_service_requested(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class MediaProtectionPMPServer(winsdk.system.Object):
    properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaProtectionPMPServer: ...
    def __new__(cls: typing.Type[MediaProtectionPMPServer], p_properties: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> MediaProtectionPMPServer:...

class MediaProtectionServiceCompletion(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> MediaProtectionServiceCompletion: ...
    def complete(self, success: winsdk.system.Boolean) -> None: ...

class ProtectionCapabilities(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ProtectionCapabilities: ...
    def __new__(cls: typing.Type[ProtectionCapabilities]) -> ProtectionCapabilities:...
    def is_type_supported(self, type: str, key_system: str) -> ProtectionCapabilityResult: ...

class RevocationAndRenewalInformation(winsdk.system.Object):
    items: typing.Optional[winsdk.windows.foundation.collections.IVector[RevocationAndRenewalItem]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RevocationAndRenewalInformation: ...

class RevocationAndRenewalItem(winsdk.system.Object):
    header_hash: str
    name: str
    public_key_hash: str
    reasons: RevocationAndRenewalReasons
    renewal_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> RevocationAndRenewalItem: ...

class ServiceRequestedEventArgs(winsdk.system.Object):
    completion: typing.Optional[MediaProtectionServiceCompletion]
    request: typing.Optional[IMediaProtectionServiceRequest]
    media_playback_item: typing.Optional[winsdk.windows.media.playback.MediaPlaybackItem]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ServiceRequestedEventArgs: ...

class IMediaProtectionServiceRequest(winsdk.system.Object):
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IMediaProtectionServiceRequest: ...

ComponentLoadFailedEventHandler = typing.Callable[[typing.Optional[MediaProtectionManager], typing.Optional[ComponentLoadFailedEventArgs]], None]

RebootNeededEventHandler = typing.Callable[[typing.Optional[MediaProtectionManager]], None]

ServiceRequestedEventHandler = typing.Callable[[typing.Optional[MediaProtectionManager], typing.Optional[ServiceRequestedEventArgs]], None]

