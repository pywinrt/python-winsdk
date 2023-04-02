# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.media.core
import winsdk.windows.media.protection
import winsdk.windows.storage

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

Self = typing.TypeVar('Self')

class NDClient(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NDClient: ...
    def __new__(cls: typing.Type[NDClient], download_engine: typing.Optional[INDDownloadEngine], stream_parser: typing.Optional[INDStreamParser], p_messenger: typing.Optional[INDMessenger]) -> NDClient:...
    def close(self) -> None: ...
    def license_fetch_async(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> winsdk.windows.foundation.IAsyncOperation[INDLicenseFetchResult]: ...
    def re_registration_async(self, registration_custom_data: typing.Optional[INDCustomData]) -> winsdk.windows.foundation.IAsyncAction: ...
    def start_async(self, content_url: typing.Optional[winsdk.windows.foundation.Uri], start_async_options: winsdk.system.UInt32, registration_custom_data: typing.Optional[INDCustomData], license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> winsdk.windows.foundation.IAsyncOperation[INDStartResult]: ...
    def add_closed_caption_data_received(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDClosedCaptionDataReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_closed_caption_data_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_license_fetch_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDLicenseFetchCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_license_fetch_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_proximity_detection_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDProximityDetectionCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_proximity_detection_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_re_registration_needed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_re_registration_needed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_registration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[NDClient, INDRegistrationCompletedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_registration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class NDCustomData(winsdk.system.Object):
    custom_data: winsdk.system.UInt8
    custom_data_type_i_d: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NDCustomData: ...
    def __new__(cls: typing.Type[NDCustomData], custom_data_type_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], custom_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> NDCustomData:...

class NDDownloadEngineNotifier(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NDDownloadEngineNotifier: ...
    def __new__(cls: typing.Type[NDDownloadEngineNotifier]) -> NDDownloadEngineNotifier:...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_data_received(self, data_bytes: winsdk.system.Array[winsdk.system.UInt8], bytes_received: winsdk.system.UInt32) -> None: ...
    def on_end_of_stream(self) -> None: ...
    def on_network_error(self) -> None: ...
    def on_play_ready_object_received(self, data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def on_stream_opened(self) -> None: ...

class NDLicenseFetchDescriptor(winsdk.system.Object):
    license_fetch_challenge_custom_data: typing.Optional[INDCustomData]
    content_i_d: winsdk.system.UInt8
    content_i_d_type: NDContentIDType
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NDLicenseFetchDescriptor: ...
    def __new__(cls: typing.Type[NDLicenseFetchDescriptor], content_i_d_type: NDContentIDType, content_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], license_fetch_challenge_custom_data: typing.Optional[INDCustomData]) -> NDLicenseFetchDescriptor:...

class NDStorageFileHelper(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NDStorageFileHelper: ...
    def __new__(cls: typing.Type[NDStorageFileHelper]) -> NDStorageFileHelper:...
    def get_file_u_r_ls(self, file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...

class NDStreamParserNotifier(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NDStreamParserNotifier: ...
    def __new__(cls: typing.Type[NDStreamParserNotifier]) -> NDStreamParserNotifier:...
    def on_begin_setup_decryptor(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor], key_i_d: winsdk.system.Guid, pro_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_media_stream_descriptor_created(self, audio_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.AudioStreamDescriptor], video_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.VideoStreamDescriptor]) -> None: ...
    def on_sample_parsed(self, stream_i_d: winsdk.system.UInt32, stream_type: NDMediaStreamType, stream_sample: typing.Optional[winsdk.windows.media.core.MediaStreamSample], pts: winsdk.system.Int64, cc_format: NDClosedCaptionFormat, cc_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...

class NDTCPMessenger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> NDTCPMessenger: ...
    def __new__(cls: typing.Type[NDTCPMessenger], remote_host_name: str, remote_host_port: winsdk.system.UInt32) -> NDTCPMessenger:...
    def send_license_fetch_request_async(self, session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], challenge_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_response_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: winsdk.system.Array[winsdk.system.UInt8], session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], response_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_start_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: winsdk.system.Array[winsdk.system.UInt8], session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], challenge_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_registration_request_async(self, session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], challenge_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...

class PlayReadyContentHeader(winsdk.system.Object):
    custom_attributes: str
    decryptor_setup: PlayReadyDecryptorSetup
    domain_service_id: winsdk.system.Guid
    encryption_type: PlayReadyEncryptionAlgorithm
    header_with_embedded_updates: typing.Optional[PlayReadyContentHeader]
    key_id: winsdk.system.Guid
    key_id_string: str
    license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri]
    license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri]
    key_id_strings: str
    key_ids: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyContentHeader: ...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyContentHeader], dw_flags: winsdk.system.UInt32, content_key_ids: winsdk.system.Array[winsdk.system.Guid], content_key_id_strings: winsdk.system.Array[str], content_encryption_algorithm: PlayReadyEncryptionAlgorithm, license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: winsdk.system.Guid) -> PlayReadyContentHeader:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyContentHeader], header_bytes: winsdk.system.Array[winsdk.system.UInt8], license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: winsdk.system.Guid) -> PlayReadyContentHeader:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyContentHeader], content_key_id: winsdk.system.Guid, content_key_id_string: str, content_encryption_algorithm: PlayReadyEncryptionAlgorithm, license_acquisition_url: typing.Optional[winsdk.windows.foundation.Uri], license_acquisition_user_interface_url: typing.Optional[winsdk.windows.foundation.Uri], custom_attributes: str, domain_service_id: winsdk.system.Guid) -> PlayReadyContentHeader:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyContentHeader], header_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> PlayReadyContentHeader:...
    def get_serialized_header(self) -> winsdk.system.UInt8: ...

class PlayReadyContentResolver(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyContentResolver: ...
    @staticmethod
    def service_request(content_header: typing.Optional[PlayReadyContentHeader]) -> typing.Optional[IPlayReadyServiceRequest]: ...

class PlayReadyDomain(winsdk.system.Object):
    account_id: winsdk.system.Guid
    domain_join_url: typing.Optional[winsdk.windows.foundation.Uri]
    friendly_name: str
    revision: winsdk.system.UInt32
    service_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyDomain: ...

class PlayReadyDomainIterable(winsdk.system.Object):
    def __iter__(self) -> winsdk.windows.foundation.collections.IIterator[IPlayReadyDomain]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyDomainIterable: ...
    def __new__(cls: typing.Type[PlayReadyDomainIterable], domain_account_id: winsdk.system.Guid) -> PlayReadyDomainIterable:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadyDomain]]: ...

class PlayReadyDomainIterator(winsdk.system.Object):
    current: typing.Optional[IPlayReadyDomain]
    has_current: winsdk.system.Boolean
    def __iter__(self: Self) -> Self: ...
    def __next__(self) -> IPlayReadyDomain: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyDomainIterator: ...
    def get_many(self, items: winsdk.system.Array[IPlayReadyDomain]) -> winsdk.system.UInt32: ...
    def move_next(self) -> winsdk.system.Boolean: ...

class PlayReadyDomainJoinServiceRequest(winsdk.system.Object):
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    domain_service_id: winsdk.system.Guid
    domain_friendly_name: str
    domain_account_id: winsdk.system.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyDomainJoinServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyDomainJoinServiceRequest]) -> PlayReadyDomainJoinServiceRequest:...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyDomainLeaveServiceRequest(winsdk.system.Object):
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    domain_service_id: winsdk.system.Guid
    domain_account_id: winsdk.system.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyDomainLeaveServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyDomainLeaveServiceRequest]) -> PlayReadyDomainLeaveServiceRequest:...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyITADataGenerator(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyITADataGenerator: ...
    def __new__(cls: typing.Type[PlayReadyITADataGenerator]) -> PlayReadyITADataGenerator:...
    def generate_data(self, guid_c_p_system_id: winsdk.system.Guid, count_of_streams: winsdk.system.UInt32, configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet], format: PlayReadyITADataFormat) -> winsdk.system.UInt8: ...

class PlayReadyIndividualizationServiceRequest(winsdk.system.Object):
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyIndividualizationServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyIndividualizationServiceRequest]) -> PlayReadyIndividualizationServiceRequest:...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyLicense(winsdk.system.Object):
    chain_depth: winsdk.system.UInt32
    domain_account_i_d: winsdk.system.Guid
    expiration_date: typing.Optional[typing.Optional[datetime.datetime]]
    expire_after_first_play: winsdk.system.UInt32
    fully_evaluated: winsdk.system.Boolean
    usable_for_play: winsdk.system.Boolean
    expires_in_real_time: winsdk.system.Boolean
    in_memory_only: winsdk.system.Boolean
    secure_stop_id: winsdk.system.Guid
    security_level: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyLicense: ...
    def get_k_i_d_at_chain_depth(self, chain_depth: winsdk.system.UInt32) -> winsdk.system.Guid: ...

class PlayReadyLicenseAcquisitionServiceRequest(winsdk.system.Object):
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    domain_service_id: winsdk.system.Guid
    content_header: typing.Optional[PlayReadyContentHeader]
    session_id: winsdk.system.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyLicenseAcquisitionServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyLicenseAcquisitionServiceRequest]) -> PlayReadyLicenseAcquisitionServiceRequest:...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: winsdk.system.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyLicenseIterable(winsdk.system.Object):
    def __iter__(self) -> winsdk.windows.foundation.collections.IIterator[IPlayReadyLicense]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyLicenseIterable: ...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyLicenseIterable]) -> PlayReadyLicenseIterable:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadyLicenseIterable], content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: winsdk.system.Boolean) -> PlayReadyLicenseIterable:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadyLicense]]: ...

class PlayReadyLicenseIterator(winsdk.system.Object):
    current: typing.Optional[IPlayReadyLicense]
    has_current: winsdk.system.Boolean
    def __iter__(self: Self) -> Self: ...
    def __next__(self) -> IPlayReadyLicense: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyLicenseIterator: ...
    def get_many(self, items: winsdk.system.Array[IPlayReadyLicense]) -> winsdk.system.UInt32: ...
    def move_next(self) -> winsdk.system.Boolean: ...

class PlayReadyLicenseManagement(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyLicenseManagement: ...
    @staticmethod
    def delete_licenses(content_header: typing.Optional[PlayReadyContentHeader]) -> winsdk.windows.foundation.IAsyncAction: ...

class PlayReadyLicenseSession(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyLicenseSession: ...
    def __new__(cls: typing.Type[PlayReadyLicenseSession], configuration: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]) -> PlayReadyLicenseSession:...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: winsdk.system.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...

class PlayReadyMeteringReportServiceRequest(winsdk.system.Object):
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    metering_certificate: winsdk.system.UInt8
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyMeteringReportServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyMeteringReportServiceRequest]) -> PlayReadyMeteringReportServiceRequest:...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadyRevocationServiceRequest(winsdk.system.Object):
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyRevocationServiceRequest: ...
    def __new__(cls: typing.Type[PlayReadyRevocationServiceRequest]) -> PlayReadyRevocationServiceRequest:...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadySecureStopIterable(winsdk.system.Object):
    def __iter__(self) -> winsdk.windows.foundation.collections.IIterator[IPlayReadySecureStopServiceRequest]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadySecureStopIterable: ...
    def __new__(cls: typing.Type[PlayReadySecureStopIterable], publisher_cert_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> PlayReadySecureStopIterable:...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[IPlayReadySecureStopServiceRequest]]: ...

class PlayReadySecureStopIterator(winsdk.system.Object):
    current: typing.Optional[IPlayReadySecureStopServiceRequest]
    has_current: winsdk.system.Boolean
    def __iter__(self: Self) -> Self: ...
    def __next__(self) -> IPlayReadySecureStopServiceRequest: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadySecureStopIterator: ...
    def get_many(self, items: winsdk.system.Array[IPlayReadySecureStopServiceRequest]) -> winsdk.system.UInt32: ...
    def move_next(self) -> winsdk.system.Boolean: ...

class PlayReadySecureStopServiceRequest(winsdk.system.Object):
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    publisher_certificate: winsdk.system.UInt8
    session_i_d: winsdk.system.Guid
    start_time: datetime.datetime
    stopped: winsdk.system.Boolean
    update_time: datetime.datetime
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    challenge_custom_data: str
    response_custom_data: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadySecureStopServiceRequest: ...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadySecureStopServiceRequest], publisher_cert_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> PlayReadySecureStopServiceRequest:...
    @typing.overload
    def __new__(cls: typing.Type[PlayReadySecureStopServiceRequest], session_i_d: winsdk.system.Guid, publisher_cert_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> PlayReadySecureStopServiceRequest:...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class PlayReadySoapMessage(winsdk.system.Object):
    message_headers: typing.Optional[winsdk.windows.foundation.collections.IPropertySet]
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadySoapMessage: ...
    def get_message_body(self) -> winsdk.system.UInt8: ...

class PlayReadyStatics(winsdk.system.Object):
    domain_join_service_request_type: typing.ClassVar[winsdk.system.Guid]
    domain_leave_service_request_type: typing.ClassVar[winsdk.system.Guid]
    individualization_service_request_type: typing.ClassVar[winsdk.system.Guid]
    license_acquirer_service_request_type: typing.ClassVar[winsdk.system.Guid]
    media_protection_system_id: typing.ClassVar[winsdk.system.Guid]
    metering_report_service_request_type: typing.ClassVar[winsdk.system.Guid]
    play_ready_security_version: typing.ClassVar[winsdk.system.UInt32]
    revocation_service_request_type: typing.ClassVar[winsdk.system.Guid]
    play_ready_certificate_security_level: typing.ClassVar[winsdk.system.UInt32]
    secure_stop_service_request_type: typing.ClassVar[winsdk.system.Guid]
    protection_system_id: typing.ClassVar[winsdk.system.Guid]
    input_trust_authority_to_create: typing.ClassVar[str]
    hardware_d_r_m_disabled_until_time: typing.ClassVar[typing.Optional[typing.Optional[datetime.datetime]]]
    hardware_d_r_m_disabled_at_time: typing.ClassVar[typing.Optional[typing.Optional[datetime.datetime]]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlayReadyStatics: ...
    @staticmethod
    def check_supported_hardware(hwdrm_feature: PlayReadyHardwareDRMFeatures) -> winsdk.system.Boolean: ...
    @staticmethod
    def reset_hardware_d_r_m_disabled() -> None: ...

class INDClosedCaptionDataReceivedEventArgs(winsdk.system.Object):
    closed_caption_data: winsdk.system.UInt8
    closed_caption_data_format: NDClosedCaptionFormat
    presentation_timestamp: winsdk.system.Int64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDClosedCaptionDataReceivedEventArgs: ...

class INDCustomData(winsdk.system.Object):
    custom_data: winsdk.system.UInt8
    custom_data_type_i_d: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDCustomData: ...

class INDDownloadEngine(winsdk.system.Object):
    buffer_full_max_threshold_in_samples: winsdk.system.UInt32
    buffer_full_min_threshold_in_samples: winsdk.system.UInt32
    can_seek: winsdk.system.Boolean
    notifier: typing.Optional[NDDownloadEngineNotifier]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDDownloadEngine: ...
    def close(self) -> None: ...
    def open(self, uri: typing.Optional[winsdk.windows.foundation.Uri], session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def pause(self) -> None: ...
    def resume(self) -> None: ...
    def seek(self, start_position: datetime.timedelta) -> None: ...

class INDDownloadEngineNotifier(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDDownloadEngineNotifier: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_data_received(self, data_bytes: winsdk.system.Array[winsdk.system.UInt8], bytes_received: winsdk.system.UInt32) -> None: ...
    def on_end_of_stream(self) -> None: ...
    def on_network_error(self) -> None: ...
    def on_play_ready_object_received(self, data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def on_stream_opened(self) -> None: ...

class INDLicenseFetchCompletedEventArgs(winsdk.system.Object):
    response_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDLicenseFetchCompletedEventArgs: ...

class INDLicenseFetchDescriptor(winsdk.system.Object):
    content_i_d: winsdk.system.UInt8
    content_i_d_type: NDContentIDType
    license_fetch_challenge_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDLicenseFetchDescriptor: ...

class INDLicenseFetchResult(winsdk.system.Object):
    response_custom_data: typing.Optional[INDCustomData]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDLicenseFetchResult: ...

class INDMessenger(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDMessenger: ...
    def send_license_fetch_request_async(self, session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], challenge_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_response_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: winsdk.system.Array[winsdk.system.UInt8], session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], response_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_proximity_detection_start_async(self, pd_type: NDProximityDetectionType, transmitter_channel_bytes: winsdk.system.Array[winsdk.system.UInt8], session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], challenge_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...
    def send_registration_request_async(self, session_i_d_bytes: winsdk.system.Array[winsdk.system.UInt8], challenge_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.IAsyncOperation[INDSendResult]: ...

class INDProximityDetectionCompletedEventArgs(winsdk.system.Object):
    proximity_detection_retry_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDProximityDetectionCompletedEventArgs: ...

class INDRegistrationCompletedEventArgs(winsdk.system.Object):
    response_custom_data: typing.Optional[INDCustomData]
    transmitter_certificate_accepted: winsdk.system.Boolean
    transmitter_properties: typing.Optional[INDTransmitterProperties]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDRegistrationCompletedEventArgs: ...

class INDSendResult(winsdk.system.Object):
    response: winsdk.system.UInt8
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDSendResult: ...

class INDStartResult(winsdk.system.Object):
    media_stream_source: typing.Optional[winsdk.windows.media.core.MediaStreamSource]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDStartResult: ...

class INDStorageFileHelper(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDStorageFileHelper: ...
    def get_file_u_r_ls(self, file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[winsdk.windows.foundation.collections.IVector[str]]: ...

class INDStreamParser(winsdk.system.Object):
    notifier: typing.Optional[NDStreamParserNotifier]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDStreamParser: ...
    def begin_of_stream(self) -> None: ...
    def end_of_stream(self) -> None: ...
    def get_stream_information(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor]) -> typing.Tuple[winsdk.system.UInt32, NDMediaStreamType]: ...
    def parse_data(self, data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...

class INDStreamParserNotifier(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDStreamParserNotifier: ...
    def on_begin_setup_decryptor(self, descriptor: typing.Optional[winsdk.windows.media.core.IMediaStreamDescriptor], key_i_d: winsdk.system.Guid, pro_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...
    def on_content_i_d_received(self, license_fetch_descriptor: typing.Optional[INDLicenseFetchDescriptor]) -> None: ...
    def on_media_stream_descriptor_created(self, audio_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.AudioStreamDescriptor], video_stream_descriptors: winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.VideoStreamDescriptor]) -> None: ...
    def on_sample_parsed(self, stream_i_d: winsdk.system.UInt32, stream_type: NDMediaStreamType, stream_sample: typing.Optional[winsdk.windows.media.core.MediaStreamSample], pts: winsdk.system.Int64, cc_format: NDClosedCaptionFormat, cc_data_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> None: ...

class INDTransmitterProperties(winsdk.system.Object):
    certificate_type: NDCertificateType
    client_i_d: winsdk.system.UInt8
    expiration_date: datetime.datetime
    model_digest: winsdk.system.UInt8
    model_manufacturer_name: str
    model_name: str
    model_number: str
    platform_identifier: NDCertificatePlatformID
    security_level: winsdk.system.UInt32
    security_version: winsdk.system.UInt32
    supported_features: NDCertificateFeature
    @staticmethod
    def _from(obj: winsdk.system.Object) -> INDTransmitterProperties: ...

class IPlayReadyDomain(winsdk.system.Object):
    account_id: winsdk.system.Guid
    domain_join_url: typing.Optional[winsdk.windows.foundation.Uri]
    friendly_name: str
    revision: winsdk.system.UInt32
    service_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPlayReadyDomain: ...

class IPlayReadyLicense(winsdk.system.Object):
    chain_depth: winsdk.system.UInt32
    domain_account_i_d: winsdk.system.Guid
    expiration_date: typing.Optional[typing.Optional[datetime.datetime]]
    expire_after_first_play: winsdk.system.UInt32
    fully_evaluated: winsdk.system.Boolean
    usable_for_play: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPlayReadyLicense: ...
    def get_k_i_d_at_chain_depth(self, chain_depth: winsdk.system.UInt32) -> winsdk.system.Guid: ...

class IPlayReadyLicenseAcquisitionServiceRequest(winsdk.system.Object):
    content_header: typing.Optional[PlayReadyContentHeader]
    domain_service_id: winsdk.system.Guid
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPlayReadyLicenseAcquisitionServiceRequest: ...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class IPlayReadyLicenseSession(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPlayReadyLicenseSession: ...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...

class IPlayReadyLicenseSession2(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPlayReadyLicenseSession2: ...
    def configure_media_protection_manager(self, mpm: typing.Optional[winsdk.windows.media.protection.MediaProtectionManager]) -> None: ...
    def create_l_a_service_request(self) -> typing.Optional[IPlayReadyLicenseAcquisitionServiceRequest]: ...
    def create_license_iterable(self, content_header: typing.Optional[PlayReadyContentHeader], fully_evaluated: winsdk.system.Boolean) -> typing.Optional[PlayReadyLicenseIterable]: ...

class IPlayReadySecureStopServiceRequest(winsdk.system.Object):
    publisher_certificate: winsdk.system.UInt8
    session_i_d: winsdk.system.Guid
    start_time: datetime.datetime
    stopped: winsdk.system.Boolean
    update_time: datetime.datetime
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPlayReadySecureStopServiceRequest: ...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

class IPlayReadyServiceRequest(winsdk.system.Object):
    challenge_custom_data: str
    response_custom_data: str
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    protection_system: winsdk.system.Guid
    type: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IPlayReadyServiceRequest: ...
    def begin_service_request(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def generate_manual_enabling_challenge(self) -> typing.Optional[PlayReadySoapMessage]: ...
    def next_service_request(self) -> typing.Optional[IPlayReadyServiceRequest]: ...
    def process_manual_enabling_response(self, response_bytes: winsdk.system.Array[winsdk.system.UInt8]) -> winsdk.windows.foundation.HResult: ...

