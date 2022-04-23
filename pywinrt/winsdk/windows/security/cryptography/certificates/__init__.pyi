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
    import winsdk.windows.networking
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class CertificateChainPolicy(enum.IntEnum):
    BASE = 0
    SSL = 1
    N_T_AUTHENTICATION = 2
    MICROSOFT_ROOT = 3

class ChainValidationResult(enum.IntEnum):
    SUCCESS = 0
    UNTRUSTED = 1
    REVOKED = 2
    EXPIRED = 3
    INCOMPLETE_CHAIN = 4
    INVALID_SIGNATURE = 5
    WRONG_USAGE = 6
    INVALID_NAME = 7
    INVALID_CERTIFICATE_AUTHORITY_POLICY = 8
    BASIC_CONSTRAINTS_ERROR = 9
    UNKNOWN_CRITICAL_EXTENSION = 10
    REVOCATION_INFORMATION_MISSING = 11
    REVOCATION_FAILURE = 12
    OTHER_ERRORS = 13

class EnrollKeyUsages(enum.IntFlag):
    NONE = 0
    DECRYPTION = 0x1
    SIGNING = 0x2
    KEY_AGREEMENT = 0x4
    ALL = 0xffffff

class ExportOption(enum.IntEnum):
    NOT_EXPORTABLE = 0
    EXPORTABLE = 1

class InstallOptions(enum.IntFlag):
    NONE = 0
    DELETE_EXPIRED = 0x1

class KeyProtectionLevel(enum.IntEnum):
    NO_CONSENT = 0
    CONSENT_ONLY = 1
    CONSENT_WITH_PASSWORD = 2
    CONSENT_WITH_FINGERPRINT = 3

class KeySize(enum.IntEnum):
    INVALID = 0
    RSA2048 = 2048
    RSA4096 = 4096

class SignatureValidationResult(enum.IntEnum):
    SUCCESS = 0
    INVALID_PARAMETER = 1
    BAD_MESSAGE = 2
    INVALID_SIGNATURE = 3
    OTHER_ERRORS = 4

class Certificate(_winrt.Object, interfaces=[]):
    friendly_name: str
    enhanced_key_usages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    has_private_key: _winrt.Boolean
    is_strongly_protected: _winrt.Boolean
    issuer: str
    serial_number: _winrt.UInt8
    subject: str
    valid_from: winsdk.windows.foundation.DateTime
    valid_to: winsdk.windows.foundation.DateTime
    is_security_device_bound: _winrt.Boolean
    key_algorithm_name: str
    key_usages: typing.Optional[CertificateKeyUsages]
    signature_algorithm_name: str
    signature_hash_algorithm_name: str
    subject_alternative_name: typing.Optional[SubjectAlternativeNameInfo]
    is_per_user: _winrt.Boolean
    key_storage_provider_name: str
    store_name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Certificate: ...
    def __init__(self, cert_blob: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    @typing.overload
    def build_chain_async(self, certificates: typing.Iterable[typing.Optional[Certificate]]) -> winsdk.windows.foundation.IAsyncOperation[CertificateChain]: ...
    @typing.overload
    def build_chain_async(self, certificates: typing.Iterable[typing.Optional[Certificate]], parameters: typing.Optional[ChainBuildingParameters]) -> winsdk.windows.foundation.IAsyncOperation[CertificateChain]: ...
    def get_certificate_blob(self) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @typing.overload
    def get_hash_value(self) -> _winrt.UInt8: ...
    @typing.overload
    def get_hash_value(self, hash_algorithm_name: str) -> _winrt.UInt8: ...

class CertificateChain(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> CertificateChain: ...
    def get_certificates(self, include_root: _winrt.Boolean) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[Certificate]]: ...
    @typing.overload
    def validate(self) -> ChainValidationResult: ...
    @typing.overload
    def validate(self, parameter: typing.Optional[ChainValidationParameters]) -> ChainValidationResult: ...

class CertificateEnrollmentManager(_winrt.Object):
    user_certificate_enrollment_manager: typing.Optional[UserCertificateEnrollmentManager]
    @staticmethod
    def _from(obj: _winrt.Object) -> CertificateEnrollmentManager: ...
    @staticmethod
    def create_request_async(request: typing.Optional[CertificateRequestProperties]) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def import_pfx_data_async(pfx_data: str, password: str, pfx_import_parameters: typing.Optional[PfxImportParameters]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    @staticmethod
    def import_pfx_data_async(pfx_data: str, password: str, exportable: ExportOption, key_protection_level: KeyProtectionLevel, install_option: InstallOptions, friendly_name: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    @staticmethod
    def import_pfx_data_async(pfx_data: str, password: str, exportable: ExportOption, key_protection_level: KeyProtectionLevel, install_option: InstallOptions, friendly_name: str, key_storage_provider: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def install_certificate_async(certificate: str, install_option: InstallOptions) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class CertificateExtension(_winrt.Object, interfaces=[]):
    value: _winrt.UInt8
    object_id: str
    is_critical: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CertificateExtension: ...
    def __init__(self) -> None: ...
    def encode_value(self, value: str) -> None: ...

class CertificateKeyUsages(_winrt.Object, interfaces=[]):
    non_repudiation: _winrt.Boolean
    key_encipherment: _winrt.Boolean
    key_certificate_sign: _winrt.Boolean
    key_agreement: _winrt.Boolean
    encipher_only: _winrt.Boolean
    digital_signature: _winrt.Boolean
    data_encipherment: _winrt.Boolean
    crl_sign: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CertificateKeyUsages: ...
    def __init__(self) -> None: ...

class CertificateQuery(_winrt.Object, interfaces=[]):
    thumbprint: _winrt.UInt8
    issuer_name: str
    hardware_only: _winrt.Boolean
    friendly_name: str
    enhanced_key_usages: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    store_name: str
    include_expired_certificates: _winrt.Boolean
    include_duplicates: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> CertificateQuery: ...
    def __init__(self) -> None: ...

class CertificateRequestProperties(_winrt.Object, interfaces=[]):
    subject: str
    key_usages: EnrollKeyUsages
    key_storage_provider_name: str
    key_size: _winrt.UInt32
    exportable: ExportOption
    key_protection_level: KeyProtectionLevel
    key_algorithm_name: str
    hash_algorithm_name: str
    friendly_name: str
    attestation_credential_certificate: typing.Optional[Certificate]
    signing_certificate: typing.Optional[Certificate]
    smartcard_reader_name: str
    use_existing_key: _winrt.Boolean
    curve_parameters: _winrt.UInt8
    curve_name: str
    container_name_prefix: str
    container_name: str
    extensions: typing.Optional[winsdk.windows.foundation.collections.IVector[CertificateExtension]]
    subject_alternative_name: typing.Optional[SubjectAlternativeNameInfo]
    suppressed_defaults: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> CertificateRequestProperties: ...
    def __init__(self) -> None: ...

class CertificateStore(_winrt.Object, interfaces=[]):
    name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> CertificateStore: ...
    def add(self, certificate: typing.Optional[Certificate]) -> None: ...
    def delete(self, certificate: typing.Optional[Certificate]) -> None: ...

class CertificateStores(_winrt.Object):
    intermediate_certification_authorities: typing.Optional[CertificateStore]
    trusted_root_certification_authorities: typing.Optional[CertificateStore]
    @staticmethod
    def _from(obj: _winrt.Object) -> CertificateStores: ...
    @typing.overload
    @staticmethod
    def find_all_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Certificate]]: ...
    @typing.overload
    @staticmethod
    def find_all_async(query: typing.Optional[CertificateQuery]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[Certificate]]: ...
    @staticmethod
    def get_store_by_name(store_name: str) -> typing.Optional[CertificateStore]: ...
    @staticmethod
    def get_user_store_by_name(store_name: str) -> typing.Optional[UserCertificateStore]: ...

class ChainBuildingParameters(_winrt.Object, interfaces=[]):
    validation_timestamp: winsdk.windows.foundation.DateTime
    revocation_check_enabled: _winrt.Boolean
    network_retrieval_enabled: _winrt.Boolean
    current_time_validation_enabled: _winrt.Boolean
    authority_information_access_enabled: _winrt.Boolean
    enhanced_key_usages: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    exclusive_trust_roots: typing.Optional[winsdk.windows.foundation.collections.IVector[Certificate]]
    @staticmethod
    def _from(obj: _winrt.Object) -> ChainBuildingParameters: ...
    def __init__(self) -> None: ...

class ChainValidationParameters(_winrt.Object, interfaces=[]):
    server_dns_name: typing.Optional[winsdk.windows.networking.HostName]
    certificate_chain_policy: CertificateChainPolicy
    @staticmethod
    def _from(obj: _winrt.Object) -> ChainValidationParameters: ...
    def __init__(self) -> None: ...

class CmsAttachedSignature(_winrt.Object, interfaces=[]):
    certificates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[Certificate]]
    content: _winrt.UInt8
    signers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[CmsSignerInfo]]
    @staticmethod
    def _from(obj: _winrt.Object) -> CmsAttachedSignature: ...
    def __init__(self, input_blob: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    @staticmethod
    def generate_signature_async(data: typing.Optional[winsdk.windows.storage.streams.IBuffer], signers: typing.Iterable[typing.Optional[CmsSignerInfo]], certificates: typing.Iterable[typing.Optional[Certificate]]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    def verify_signature(self) -> SignatureValidationResult: ...

class CmsDetachedSignature(_winrt.Object, interfaces=[]):
    certificates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[Certificate]]
    signers: typing.Optional[winsdk.windows.foundation.collections.IVectorView[CmsSignerInfo]]
    @staticmethod
    def _from(obj: _winrt.Object) -> CmsDetachedSignature: ...
    def __init__(self, input_blob: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    @staticmethod
    def generate_signature_async(data: typing.Optional[winsdk.windows.storage.streams.IInputStream], signers: typing.Iterable[typing.Optional[CmsSignerInfo]], certificates: typing.Iterable[typing.Optional[Certificate]]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    def verify_signature_async(self, data: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> winsdk.windows.foundation.IAsyncOperation[SignatureValidationResult]: ...

class CmsSignerInfo(_winrt.Object, interfaces=[]):
    hash_algorithm_name: str
    certificate: typing.Optional[Certificate]
    timestamp_info: typing.Optional[CmsTimestampInfo]
    @staticmethod
    def _from(obj: _winrt.Object) -> CmsSignerInfo: ...
    def __init__(self) -> None: ...

class CmsTimestampInfo(_winrt.Object, interfaces=[]):
    certificates: typing.Optional[winsdk.windows.foundation.collections.IVectorView[Certificate]]
    signing_certificate: typing.Optional[Certificate]
    timestamp: winsdk.windows.foundation.DateTime
    @staticmethod
    def _from(obj: _winrt.Object) -> CmsTimestampInfo: ...

class KeyAlgorithmNames(_winrt.Object):
    dsa: str
    ecdh256: str
    ecdh384: str
    ecdh521: str
    ecdsa256: str
    ecdsa384: str
    ecdsa521: str
    rsa: str
    ecdh: str
    ecdsa: str
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyAlgorithmNames: ...

class KeyAttestationHelper(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyAttestationHelper: ...
    @typing.overload
    @staticmethod
    def decrypt_tpm_attestation_credential_async(credential: str) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def decrypt_tpm_attestation_credential_async(credential: str, container_name: str) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_tpm_attestation_credential_id(credential: str) -> str: ...

class KeyStorageProviderNames(_winrt.Object):
    platform_key_storage_provider: str
    smartcard_key_storage_provider: str
    software_key_storage_provider: str
    passport_key_storage_provider: str
    @staticmethod
    def _from(obj: _winrt.Object) -> KeyStorageProviderNames: ...

class PfxImportParameters(_winrt.Object, interfaces=[]):
    reader_name: str
    key_storage_provider_name: str
    key_protection_level: KeyProtectionLevel
    install_options: InstallOptions
    friendly_name: str
    exportable: ExportOption
    container_name_prefix: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PfxImportParameters: ...
    def __init__(self) -> None: ...

class StandardCertificateStoreNames(_winrt.Object):
    intermediate_certification_authorities: str
    personal: str
    trusted_root_certification_authorities: str
    @staticmethod
    def _from(obj: _winrt.Object) -> StandardCertificateStoreNames: ...

class SubjectAlternativeNameInfo(_winrt.Object, interfaces=[]):
    distinguished_name: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    dns_name: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    email_name: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    ip_address: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    principal_name: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    url: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    distinguished_names: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    dns_names: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    email_names: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    extension: typing.Optional[CertificateExtension]
    ip_addresses: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    principal_names: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    urls: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> SubjectAlternativeNameInfo: ...
    def __init__(self) -> None: ...

class UserCertificateEnrollmentManager(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> UserCertificateEnrollmentManager: ...
    def create_request_async(self, request: typing.Optional[CertificateRequestProperties]) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    def import_pfx_data_async(self, pfx_data: str, password: str, pfx_import_parameters: typing.Optional[PfxImportParameters]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def import_pfx_data_async(self, pfx_data: str, password: str, exportable: ExportOption, key_protection_level: KeyProtectionLevel, install_option: InstallOptions, friendly_name: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def import_pfx_data_async(self, pfx_data: str, password: str, exportable: ExportOption, key_protection_level: KeyProtectionLevel, install_option: InstallOptions, friendly_name: str, key_storage_provider: str) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def install_certificate_async(self, certificate: str, install_option: InstallOptions) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class UserCertificateStore(_winrt.Object, interfaces=[]):
    name: str
    @staticmethod
    def _from(obj: _winrt.Object) -> UserCertificateStore: ...
    def request_add_async(self, certificate: typing.Optional[Certificate]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def request_delete_async(self, certificate: typing.Optional[Certificate]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...

