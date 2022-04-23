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
    import winsdk.windows.media.core
except Exception:
    pass

try:
    import winsdk.windows.media.protection
except Exception:
    pass

try:
    import winsdk.windows.storage
except Exception:
    pass

class NDCertificateFeature(enum.IntEnum):
    TRANSMITTER = 1
    RECEIVER = 2
    SHARED_CERTIFICATE = 3
    SECURE_CLOCK = 4
    ANTI_ROLL_BACK_CLOCK = 5
    C_R_L_S = 9
    PLAY_READY3_FEATURES = 13

class NDCertificatePlatformID(enum.IntEnum):
    WINDOWS = 0
    O_S_X = 1
    WINDOWS_ON_A_R_M = 2
    WINDOWS_MOBILE7 = 5
    I_O_S_ON_A_R_M = 6
    X_BOX_ON_P_P_C = 7
    WINDOWS_PHONE8_ON_A_R_M = 8
    WINDOWS_PHONE8_ON_X86 = 9
    XBOX_ONE = 10
    ANDROID_ON_A_R_M = 11
    WINDOWS_PHONE81_ON_A_R_M = 12
    WINDOWS_PHONE81_ON_X86 = 13

class NDCertificateType(enum.IntEnum):
    UNKNOWN = 0
    P_C = 1
    DEVICE = 2
    DOMAIN = 3
    ISSUER = 4
    CRL_SIGNER = 5
    SERVICE = 6
    SILVERLIGHT = 7
    APPLICATION = 8
    METERING = 9
    KEY_FILE_SIGNER = 10
    SERVER = 11
    LICENSE_SIGNER = 12

class NDClosedCaptionFormat(enum.IntEnum):
    A_T_S_C = 0
    S_C_T_E20 = 1
    UNKNOWN = 2

class NDContentIDType(enum.IntEnum):
    KEY_I_D = 1
    PLAY_READY_OBJECT = 2
    CUSTOM = 3

class NDMediaStreamType(enum.IntEnum):
    AUDIO = 1
    VIDEO = 2

class NDProximityDetectionType(enum.IntEnum):
    U_D_P = 1
    T_C_P = 2
    TRANSPORT_AGNOSTIC = 4

class NDStartAsyncOptions(enum.IntEnum):
    MUTUAL_AUTHENTICATION = 1
    WAIT_FOR_LICENSE_DESCRIPTOR = 2

class PlayReadyDecryptorSetup(enum.IntEnum):
    UNINITIALIZED = 0
    ON_DEMAND = 1

class PlayReadyEncryptionAlgorithm(enum.IntEnum):
    UNPROTECTED = 0
    AES128_CTR = 1
    COCKTAIL = 4
    AES128_CBC = 5
    UNSPECIFIED = 65535
    UNINITIALIZED = 2147483647

class PlayReadyHardwareDRMFeatures(enum.IntEnum):
    HARDWARE_D_R_M = 1
    H_E_V_C = 2
    AES128_CBC = 3

class PlayReadyITADataFormat(enum.IntEnum):
    SERIALIZED_PROPERTIES = 0
    SERIALIZED_PROPERTIES_WITH_CONTENT_PROTECTION_WRAPPER = 1

class NDClient(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDClient: ...
    def __init__(self, download_engine: typing.Optional[INDDownloadEngine], stream_parser: typing.Optional[INDStreamParser], p_messenger: typing.Optional[INDMessenger]) -> None: ...
    def close(self) -> None: ...
    def license_fetch_async(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> winsdk.windows.foundation.IAsyncOperation[INDLicenseFetchResult]: ...
    def re_registration_async(self, registration_custom_data: typing.Optional[INDCustomData]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def start_async(self, content_url: typing.Optional[winsdk.windows.foundation.Uri], start_async_options: _winrt.UInt32, registration_custom_data: typing.Optional[INDCustomData], license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> winsdk.windows.foundation.IAsyncOperation[INDStartResult]: ...
    def add_closed_caption_data_received(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDClosedCaptionDataReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_closed_caption_data_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_license_fetch_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDLicenseFetchCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_license_fetch_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_proximity_detection_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDProximityDetectionCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_proximity_detection_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_re_registration_needed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_re_registration_needed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_registration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDRegistrationCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_registration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class NDCustomData(_winrt.Object, interfaces=[INDCustomData]):
    custom_data: _winrt.UInt8
    custom_data_type_i_d: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> NDCustomData: ...
    def __init__(self, custom_data_type_i_d_bytes: typing.Sequence[_winrt.UInt8], custom_data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...

class NDDownloadEngineNotifier(_winrt.Object, interfaces=[INDDownloadEngineNotifier]):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDDownloadEngineNotifier: ...
    def __init__(self) -> None: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_data_received(self, data_bytes: typing.Sequence[_winrt.UInt8], bytes_received: _winrt.UInt32) -> None: ...
    def on_end_of_stream(self) -> None: ...
    def on_network_error(self) -> None: ...
    def on_play_ready_object_received(self, data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_stream_opened(self) -> None: ...

class NDLicenseFetchDescriptor(_winrt.Object, interfaces=[INDLicenseFetchDescriptor]):
    license_fetch_challenge_custom_data: typing.Optional[INDCustomData]
    content_i_d: _winrt.UInt8
    content_i_d_type: NDContentIDType
    @staticmethod
    def _from(obj: _winrt.Object) -> NDLicenseFetchDescriptor: ...
    def __init__(self, content_i_d_type: NDContentIDType, content_i_d_bytes: typing.Sequence[_winrt.UInt8], license_fetch_challenge_custom_data: typing.Optional[INDCustomData]) -> None: ...

class NDStorageFileHelper(_winrt.Object, interfaces=[INDStorageFileHelper]):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDStorageFileHelper: ...
    def __init__(self) -> None: ...
    def get_file_u_r_ls(self, file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...

class NDStreamParserNotifier(_winrt.Object, interfaces=[INDStreamParserNotifier]):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDStreamParserNotifier: ...
    def __init__(self) -> None: ...
    def on_begin_setup_decryptor(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor], key_i_d: uuid.UUID, pro_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_media_stream_descriptor_created(self, audio_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.AudioStreamDescriptor], video_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.VideoStreamDescriptor]) -> None: ...
    def on_sample_parsed(self, stream_i_d: _winrt.UInt32, stream_type: NDMediaStreamType, stream_sample: typing.Optional[winsdk.windows.media.core.MediaStreamSample], pts: _winrt.Int64, cc_format: NDClosedCaptionFormat, cc_data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...

class NDTCPMessenger(_winrt.Object, interfaces=[INDMessenger]):
    @staticmethod
    def _from(obj: _winrt.Object) -> NDTCPMessenger: ...
    def __init__(self, remote_host_name: str, remote_host_port: _winrt.UInt32) -> None: ...
    def send_license_fetch_request_async(self, session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_response_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: typing.Sequence[_winrt.UInt8], session_i_d_bytes: typing.Sequence[_winrt.UInt8], response_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_start_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: typing.Sequence[_winrt.UInt8], session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_registration_request_async(self, session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...

class PlayReadyContentHeader(_winrt.Object, interfaces=[]):
    custom_attributes: str
    decryptor_setup: PlayReadyDecryptorSetup
    domain_service_id: uuid.UUID
    encryption_type: PlayReadyEncryptionAlgorithm
    header_with_embedded_updates: typing.Optional[PlayReadyContentHeader]
    key_id: uuid.UUID
    key_id_string: str
    license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri]
    license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri]
    key_id_strings: str
    key_ids: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyContentHeader: ...
    @typing.overload
    def __init__(self, dw_flags: _winrt.UInt32, content_key_ids: typing.Sequence[uuid.UUID], content_key_id_strings: typing.Sequence[str], content_encryption_algorithm: PlayReadyEncryptionAlgorithm, license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: uuid.UUID) -> None: ...
    @typing.overload
    def __init__(self, header_bytes: typing.Sequence[_winrt.UInt8], license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: uuid.UUID) -> None: ...
    @typing.overload
    def __init__(self, content_key_id: uuid.UUID, content_key_id_string: str, content_encryption_algorithm: PlayReadyEncryptionAlgorithm, license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: uuid.UUID) -> None: ...
    @typing.overload
    def __init__(self, header_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def get_serialized_header(self) -> _winrt.UInt8: ...

class PlayReadyContentResolver(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyContentResolver: ...
    @staticmethod
    def service_request(content_header: typing.Optional[PlayReadyContentHeader]) -> typing.Optional[IPlayReadyServiceRequest]: ...

class PlayReadyDomain(_winrt.Object, interfaces=[IPlayReadyDomain]):
    account_id: uuid.UUID
    domain_join_url: typing.Optional[winsdk.windows.foundation.Uri]
    friendly_name: str
    revision: _winrt.UInt32
    service_id: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomain: ...

class PlayReadyDomainIterable(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IIterable[IPlayReadyDomain]]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomainIterable: ...
    def __init__(self, domain_account_id: uuid.UUID) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadyDomain]]: ...

class PlayReadyDomainIterator(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IIterator[IPlayReadyDomain]]):
    current: typing.Optional[IPlayReadyDomain]
    has_current: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomainIterator: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[typing.Optional[IPlayReadyDomain]]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class PlayReadyDomainJoinServiceRequest(_winrt.Object, interfaces=[IPlayReadyServiceRequest, winsdk.windows.media.protection.IMediaProtectionServiceRequest]):
    protection_system: uuid.UUID
    type: uuid.UUID
    domain_service_id: uuid.UUID
    domain_friendly_name: str
    domain_account_id: uuid.UUID
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomainJoinServiceRequest: ...
    def __init__(self) -> None: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyDomainLeaveServiceRequest(_winrt.Object, interfaces=[IPlayReadyServiceRequest, winsdk.windows.media.protection.IMediaProtectionServiceRequest]):
    protection_system: uuid.UUID
    type: uuid.UUID
    domain_service_id: uuid.UUID
    domain_account_id: uuid.UUID
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyDomainLeaveServiceRequest: ...
    def __init__(self) -> None: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyITADataGenerator(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyITADataGenerator: ...
    def __init__(self) -> None: ...
    def generate_data(self, guid_c_p_system_id: uuid.UUID, count_of_streams: _winrt.UInt32, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet], format: PlayReadyITADataFormat) -> _winrt.UInt8: ...

class PlayReadyIndividualizationServiceRequest(_winrt.Object, interfaces=[IPlayReadyServiceRequest, winsdk.windows.media.protection.IMediaProtectionServiceRequest]):
    protection_system: uuid.UUID
    type: uuid.UUID
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyIndividualizationServiceRequest: ...
    def __init__(self) -> None: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyLicense(_winrt.Object, interfaces=[IPlayReadyLicense]):
    chain_depth: _winrt.UInt32
    domain_account_i_d: uuid.UUID
    expiration_date: typing.Optional[typing.Optional[winsdk.windows.foundation.DateTime]]
    expire_after_first_play: _winrt.UInt32
    fully_evaluated: _winrt.Boolean
    usable_for_play: _winrt.Boolean
    expires_in_real_time: _winrt.Boolean
    in_memory_only: _winrt.Boolean
    secure_stop_id: uuid.UUID
    security_level: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicense: ...
    def get_k_i_d_at_chain_depth(self, chain_depth: _winrt.UInt32) -> uuid.UUID: ...

class PlayReadyLicenseAcquisitionServiceRequest(_winrt.Object, interfaces=[IPlayReadyLicenseAcquisitionServiceRequest, IPlayReadyServiceRequest, winsdk.windows.media.protection.IMediaProtectionServiceRequest]):
    protection_system: uuid.UUID
    type: uuid.UUID
    domain_service_id: uuid.UUID
    content_header: typing.Optional[PlayReadyContentHeader]
    session_id: uuid.UUID
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseAcquisitionServiceRequest: ...
    def __init__(self) -> None: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: _winrt.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyLicenseIterable(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IIterable[IPlayReadyLicense]]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseIterable: ...
    @typing.overload
    def __init__(self) -> None: ...
    @typing.overload
    def __init__(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: _winrt.Boolean) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadyLicense]]: ...

class PlayReadyLicenseIterator(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IIterator[IPlayReadyLicense]]):
    current: typing.Optional[IPlayReadyLicense]
    has_current: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseIterator: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[typing.Optional[IPlayReadyLicense]]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class PlayReadyLicenseManagement(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseManagement: ...
    @staticmethod
    def delete_licenses(content_header: typing.Optional[PlayReadyContentHeader]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class PlayReadyLicenseSession(_winrt.Object, interfaces=[IPlayReadyLicenseSession, IPlayReadyLicenseSession2]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyLicenseSession: ...
    def __init__(self, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> None: ...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: _winrt.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...

class PlayReadyMeteringReportServiceRequest(_winrt.Object, interfaces=[IPlayReadyServiceRequest, winsdk.windows.media.protection.IMediaProtectionServiceRequest]):
    protection_system: uuid.UUID
    type: uuid.UUID
    metering_certificate: _winrt.UInt8
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyMeteringReportServiceRequest: ...
    def __init__(self) -> None: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyRevocationServiceRequest(_winrt.Object, interfaces=[IPlayReadyServiceRequest, winsdk.windows.media.protection.IMediaProtectionServiceRequest]):
    protection_system: uuid.UUID
    type: uuid.UUID
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyRevocationServiceRequest: ...
    def __init__(self) -> None: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadySecureStopIterable(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IIterable[IPlayReadySecureStopServiceRequest]]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadySecureStopIterable: ...
    def __init__(self, publisher_cert_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadySecureStopServiceRequest]]: ...

class PlayReadySecureStopIterator(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IIterator[IPlayReadySecureStopServiceRequest]]):
    current: typing.Optional[IPlayReadySecureStopServiceRequest]
    has_current: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadySecureStopIterator: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[typing.Optional[IPlayReadySecureStopServiceRequest]]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class PlayReadySecureStopServiceRequest(_winrt.Object, interfaces=[IPlayReadySecureStopServiceRequest, IPlayReadyServiceRequest, winsdk.windows.media.protection.IMediaProtectionServiceRequest]):
    protection_system: uuid.UUID
    type: uuid.UUID
    publisher_certificate: _winrt.UInt8
    session_i_d: uuid.UUID
    start_time: winsdk.windows.foundation.DateTime
    stopped: _winrt.Boolean
    update_time: winsdk.windows.foundation.DateTime
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadySecureStopServiceRequest: ...
    @typing.overload
    def __init__(self, publisher_cert_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    @typing.overload
    def __init__(self, session_i_d: uuid.UUID, publisher_cert_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadySoapMessage(_winrt.Object, interfaces=[]):
    message_headers: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadySoapMessage: ...
    def get_message_body(self) -> _winrt.UInt8: ...

class PlayReadyStatics(_winrt.Object):
    domain_join_service_request_type: uuid.UUID
    domain_leave_service_request_type: uuid.UUID
    individualization_service_request_type: uuid.UUID
    license_acquirer_service_request_type: uuid.UUID
    media_protection_system_id: uuid.UUID
    metering_report_service_request_type: uuid.UUID
    play_ready_security_version: _winrt.UInt32
    revocation_service_request_type: uuid.UUID
    play_ready_certificate_security_level: _winrt.UInt32
    secure_stop_service_request_type: uuid.UUID
    protection_system_id: uuid.UUID
    input_trust_authority_to_create: str
    hardware_d_r_m_disabled_until_time: typing.Optional[typing.Optional[winsdk.windows.foundation.DateTime]]
    hardware_d_r_m_disabled_at_time: typing.Optional[typing.Optional[winsdk.windows.foundation.DateTime]]
    @staticmethod
    def _from(obj: _winrt.Object) -> PlayReadyStatics: ...
    @staticmethod
    def check_supported_hardware(hwdrm_feature: PlayReadyHardwareDRMFeatures) -> _winrt.Boolean: ...
    @staticmethod
    def reset_hardware_d_r_m_disabled() -> None: ...

class INDClosedCaptionDataReceivedEventArgs(typing.Protocol):
    closed_caption_data: _winrt.UInt8
    closed_caption_data_format: NDClosedCaptionFormat
    presentation_timestamp: _winrt.Int64
    @staticmethod
    def _from(obj: _winrt.Object) -> INDClosedCaptionDataReceivedEventArgs: ...

class INDCustomData(typing.Protocol):
    custom_data: _winrt.UInt8
    custom_data_type_i_d: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> INDCustomData: ...

class INDDownloadEngine(typing.Protocol):
    buffer_full_max_threshold_in_samples: _winrt.UInt32
    buffer_full_min_threshold_in_samples: _winrt.UInt32
    can_seek: _winrt.Boolean
    notifier: typing.Optional[NDDownloadEngineNotifier]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDDownloadEngine: ...
    def close(self) -> None: ...
    def open(self, uri: typing.Optional[winsdk.windows.foundation.Uri], session_i_d_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def pause(self) -> None: ...
    def resume(self) -> None: ...
    def seek(self, start_position: winsdk.windows.foundation.TimeSpan) -> None: ...

class INDDownloadEngineNotifier(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> INDDownloadEngineNotifier: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_data_received(self, data_bytes: typing.Sequence[_winrt.UInt8], bytes_received: _winrt.UInt32) -> None: ...
    def on_end_of_stream(self) -> None: ...
    def on_network_error(self) -> None: ...
    def on_play_ready_object_received(self, data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_stream_opened(self) -> None: ...

class INDLicenseFetchCompletedEventArgs(typing.Protocol):
    response_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDLicenseFetchCompletedEventArgs: ...

class INDLicenseFetchDescriptor(typing.Protocol):
    content_i_d: _winrt.UInt8
    content_i_d_type: NDContentIDType
    license_fetch_challenge_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDLicenseFetchDescriptor: ...

class INDLicenseFetchResult(typing.Protocol):
    response_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDLicenseFetchResult: ...

class INDMessenger(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> INDMessenger: ...
    def send_license_fetch_request_async(self, session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_response_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: typing.Sequence[_winrt.UInt8], session_i_d_bytes: typing.Sequence[_winrt.UInt8], response_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_start_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: typing.Sequence[_winrt.UInt8], session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_registration_request_async(self, session_i_d_bytes: typing.Sequence[_winrt.UInt8], challenge_data_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...

class INDProximityDetectionCompletedEventArgs(typing.Protocol):
    proximity_detection_retry_count: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> INDProximityDetectionCompletedEventArgs: ...

class INDRegistrationCompletedEventArgs(typing.Protocol):
    response_custom_data: typing.Optional[INDCustomData]
    transmitter_certificate_accepted: _winrt.Boolean
    transmitter_properties: typing.Optional[INDTransmitterProperties]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDRegistrationCompletedEventArgs: ...

class INDSendResult(typing.Protocol):
    response: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> INDSendResult: ...

class INDStartResult(typing.Protocol):
    media_stream_source: typing.Optional[winsdk.windows.media.core.MediaStreamSource]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDStartResult: ...

class INDStorageFileHelper(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> INDStorageFileHelper: ...
    def get_file_u_r_ls(self, file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...

class INDStreamParser(typing.Protocol):
    notifier: typing.Optional[NDStreamParserNotifier]
    @staticmethod
    def _from(obj: _winrt.Object) -> INDStreamParser: ...
    def begin_of_stream(self) -> None: ...
    def end_of_stream(self) -> None: ...
    def get_stream_information(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor]) -> typing.Tuple[_winrt.UInt32, NDMediaStreamType]: ...
    def parse_data(self, data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...

class INDStreamParserNotifier(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> INDStreamParserNotifier: ...
    def on_begin_setup_decryptor(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor], key_i_d: uuid.UUID, pro_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_media_stream_descriptor_created(self, audio_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.AudioStreamDescriptor], video_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.VideoStreamDescriptor]) -> None: ...
    def on_sample_parsed(self, stream_i_d: _winrt.UInt32, stream_type: NDMediaStreamType, stream_sample: typing.Optional[winsdk.windows.media.core.MediaStreamSample], pts: _winrt.Int64, cc_format: NDClosedCaptionFormat, cc_data_bytes: typing.Sequence[_winrt.UInt8]) -> None: ...

class INDTransmitterProperties(typing.Protocol):
    certificate_type: NDCertificateType
    client_i_d: _winrt.UInt8
    expiration_date: winsdk.windows.foundation.DateTime
    model_digest: _winrt.UInt8
    model_manufacturer_name: str
    model_name: str
    model_number: str
    platform_identifier: NDCertificatePlatformID
    security_level: _winrt.UInt32
    security_version: _winrt.UInt32
    supported_features: NDCertificateFeature
    @staticmethod
    def _from(obj: _winrt.Object) -> INDTransmitterProperties: ...

class IPlayReadyDomain(typing.Protocol):
    account_id: uuid.UUID
    domain_join_url: typing.Optional[winsdk.windows.foundation.Uri]
    friendly_name: str
    revision: _winrt.UInt32
    service_id: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyDomain: ...

class IPlayReadyLicense(typing.Protocol):
    chain_depth: _winrt.UInt32
    domain_account_i_d: uuid.UUID
    expiration_date: typing.Optional[typing.Optional[winsdk.windows.foundation.DateTime]]
    expire_after_first_play: _winrt.UInt32
    fully_evaluated: _winrt.Boolean
    usable_for_play: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyLicense: ...
    def get_k_i_d_at_chain_depth(self, chain_depth: _winrt.UInt32) -> uuid.UUID: ...

class IPlayReadyLicenseAcquisitionServiceRequest(typing.Protocol):
    content_header: typing.Optional[PlayReadyContentHeader]
    domain_service_id: uuid.UUID
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: uuid.UUID
    type: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyLicenseAcquisitionServiceRequest: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class IPlayReadyLicenseSession(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyLicenseSession: ...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...

class IPlayReadyLicenseSession2(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyLicenseSession2: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: _winrt.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...

class IPlayReadySecureStopServiceRequest(typing.Protocol):
    publisher_certificate: _winrt.UInt8
    session_i_d: uuid.UUID
    start_time: winsdk.windows.foundation.DateTime
    stopped: _winrt.Boolean
    update_time: winsdk.windows.foundation.DateTime
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: uuid.UUID
    type: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadySecureStopServiceRequest: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

class IPlayReadyServiceRequest(typing.Protocol):
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: uuid.UUID
    type: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> IPlayReadyServiceRequest: ...
    def begin_service_request(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: typing.Sequence[_winrt.UInt8]) -> winsdk.windows.foundation.HResult: ...

