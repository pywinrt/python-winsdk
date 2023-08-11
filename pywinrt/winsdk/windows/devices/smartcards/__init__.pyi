# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.cryptography.core
import winsdk.windows.storage.streams

class SmartCardActivationPolicyChangeResult(enum.IntEnum):
    DENIED = 0
    ALLOWED = 1

class SmartCardAppletIdGroupActivationPolicy(enum.IntEnum):
    DISABLED = 0
    FOREGROUND_OVERRIDE = 1
    ENABLED = 2

class SmartCardAutomaticResponseStatus(enum.IntEnum):
    NONE = 0
    SUCCESS = 1
    UNKNOWN_ERROR = 2

class SmartCardCryptogramAlgorithm(enum.IntEnum):
    NONE = 0
    CBC_MAC = 1
    CVC3_UMD = 2
    DECIMALIZED_MSD = 3
    CVC3_M_D = 4
    SHA1 = 5
    SIGNED_DYNAMIC_APPLICATION_DATA = 6
    RSA_PKCS1 = 7
    SHA256_HMAC = 8

class SmartCardCryptogramGeneratorOperationStatus(enum.IntEnum):
    SUCCESS = 0
    AUTHORIZATION_FAILED = 1
    AUTHORIZATION_CANCELED = 2
    AUTHORIZATION_REQUIRED = 3
    CRYPTOGRAM_MATERIAL_PACKAGE_STORAGE_KEY_EXISTS = 4
    NO_CRYPTOGRAM_MATERIAL_PACKAGE_STORAGE_KEY = 5
    NO_CRYPTOGRAM_MATERIAL_PACKAGE = 6
    UNSUPPORTED_CRYPTOGRAM_MATERIAL_PACKAGE = 7
    UNKNOWN_CRYPTOGRAM_MATERIAL_NAME = 8
    INVALID_CRYPTOGRAM_MATERIAL_USAGE = 9
    APDU_RESPONSE_NOT_SENT = 10
    OTHER_ERROR = 11
    VALIDATION_FAILED = 12
    NOT_SUPPORTED = 13

class SmartCardCryptogramMaterialPackageConfirmationResponseFormat(enum.IntEnum):
    NONE = 0
    VISA_HMAC = 1

class SmartCardCryptogramMaterialPackageFormat(enum.IntEnum):
    NONE = 0
    JWE_RSA_PKI = 1

class SmartCardCryptogramMaterialProtectionMethod(enum.IntEnum):
    NONE = 0
    WHITE_BOXING = 1

class SmartCardCryptogramMaterialType(enum.IntEnum):
    NONE = 0
    STATIC_DATA_AUTHENTICATION = 1
    TRIPLE_DES112 = 2
    AES = 3
    RSA_PKCS1 = 4

class SmartCardCryptogramPlacementOptions(enum.IntFlag):
    NONE = 0
    UNITS_ARE_IN_NIBBLES = 0x1
    CHAIN_OUTPUT = 0x2

class SmartCardCryptogramStorageKeyAlgorithm(enum.IntEnum):
    NONE = 0
    RSA2048 = 1

class SmartCardCryptogramStorageKeyCapabilities(enum.IntFlag):
    NONE = 0
    HARDWARE_PROTECTION = 0x1
    UNLOCK_PROMPT = 0x2

class SmartCardCryptographicKeyAttestationStatus(enum.IntEnum):
    NO_ATTESTATION = 0
    SOFTWARE_KEY_WITHOUT_TPM = 1
    SOFTWARE_KEY_WITH_TPM = 2
    TPM_KEY_UNKNOWN_ATTESTATION_STATUS = 3
    TPM_KEY_WITHOUT_ATTESTATION_CAPABILITY = 4
    TPM_KEY_WITH_TEMPORARY_ATTESTATION_FAILURE = 5
    TPM_KEY_WITH_LONG_TERM_ATTESTATION_FAILURE = 6
    TPM_KEY_WITH_ATTESTATION = 7

class SmartCardEmulationCategory(enum.IntEnum):
    OTHER = 0
    PAYMENT = 1

class SmartCardEmulationType(enum.IntEnum):
    HOST = 0
    UICC = 1
    EMBEDDED_S_E = 2

class SmartCardEmulatorConnectionDeactivatedReason(enum.IntEnum):
    CONNECTION_LOST = 0
    CONNECTION_REDIRECTED = 1

class SmartCardEmulatorConnectionSource(enum.IntEnum):
    UNKNOWN = 0
    NFC_READER = 1

class SmartCardEmulatorEnablementPolicy(enum.IntEnum):
    NEVER = 0
    ALWAYS = 1
    SCREEN_ON = 2
    SCREEN_UNLOCKED = 3

class SmartCardLaunchBehavior(enum.IntEnum):
    DEFAULT = 0
    ABOVE_LOCK = 1

class SmartCardPinCharacterPolicyOption(enum.IntEnum):
    ALLOW = 0
    REQUIRE_AT_LEAST_ONE = 1
    DISALLOW = 2

class SmartCardReaderKind(enum.IntEnum):
    ANY = 0
    GENERIC = 1
    TPM = 2
    NFC = 3
    UICC = 4
    EMBEDDED_S_E = 5

class SmartCardReaderStatus(enum.IntEnum):
    DISCONNECTED = 0
    READY = 1
    EXCLUSIVE = 2

class SmartCardStatus(enum.IntEnum):
    DISCONNECTED = 0
    READY = 1
    SHARED = 2
    EXCLUSIVE = 3
    UNRESPONSIVE = 4

class SmartCardTriggerType(enum.IntEnum):
    EMULATOR_TRANSACTION = 0
    EMULATOR_NEAR_FIELD_ENTRY = 1
    EMULATOR_NEAR_FIELD_EXIT = 2
    EMULATOR_HOST_APPLICATION_ACTIVATED = 3
    EMULATOR_APPLET_ID_GROUP_REGISTRATION_CHANGED = 4
    READER_CARD_ADDED = 5

class SmartCardUnlockPromptingBehavior(enum.IntEnum):
    ALLOW_UNLOCK_PROMPT = 0
    REQUIRE_UNLOCK_PROMPT = 1
    PREVENT_UNLOCK_PROMPT = 2

Self = typing.TypeVar('Self')

class CardAddedEventArgs(winsdk.system.Object):
    smart_card: typing.Optional[SmartCard]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CardAddedEventArgs: ...

class CardRemovedEventArgs(winsdk.system.Object):
    smart_card: typing.Optional[SmartCard]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CardRemovedEventArgs: ...

class KnownSmartCardAppletIds(winsdk.system.Object):
    payment_system_environment: typing.ClassVar[typing.Optional[winsdk.windows.storage.streams.IBuffer]]
    proximity_payment_system_environment: typing.ClassVar[typing.Optional[winsdk.windows.storage.streams.IBuffer]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> KnownSmartCardAppletIds: ...

class SmartCard(winsdk.system.Object):
    reader: typing.Optional[SmartCardReader]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCard: ...
    def connect_async(self) -> winsdk.windows.foundation.IAsyncOperation[SmartCardConnection]: ...
    def get_answer_to_reset_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    def get_status_async(self) -> winsdk.windows.foundation.IAsyncOperation[SmartCardStatus]: ...

class SmartCardAppletIdGroup(winsdk.system.Object):
    smart_card_emulation_type: SmartCardEmulationType
    smart_card_emulation_category: SmartCardEmulationCategory
    display_name: str
    automatic_enablement: winsdk.system.Boolean
    applet_ids: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.storage.streams.IBuffer]]
    secure_user_authentication_required: winsdk.system.Boolean
    logo: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    description: str
    properties: typing.Optional[winsdk.windows.foundation.collections.ValueSet]
    max_applet_ids: typing.ClassVar[winsdk.system.UInt16]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardAppletIdGroup: ...
    @typing.overload
    def __new__(cls: typing.Type[SmartCardAppletIdGroup], display_name: str, applet_ids: winsdk.windows.foundation.collections.IVector[winsdk.windows.storage.streams.IBuffer], emulation_category: SmartCardEmulationCategory, emulation_type: SmartCardEmulationType) -> SmartCardAppletIdGroup:...
    @typing.overload
    def __new__(cls: typing.Type[SmartCardAppletIdGroup]) -> SmartCardAppletIdGroup:...

class SmartCardAppletIdGroupRegistration(winsdk.system.Object):
    activation_policy: SmartCardAppletIdGroupActivationPolicy
    applet_id_group: typing.Optional[SmartCardAppletIdGroup]
    id: winsdk.system.Guid
    smart_card_reader_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardAppletIdGroupRegistration: ...
    def request_activation_policy_change_async(self, policy: SmartCardAppletIdGroupActivationPolicy, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardActivationPolicyChangeResult]: ...
    def set_automatic_response_apdus_async(self, apdus: typing.Iterable[SmartCardAutomaticResponseApdu], /) -> winsdk.windows.foundation.IAsyncAction: ...
    def set_properties_async(self, props: typing.Optional[winsdk.windows.foundation.collections.ValueSet], /) -> winsdk.windows.foundation.IAsyncAction: ...

class SmartCardAutomaticResponseApdu(winsdk.system.Object):
    should_match_length: winsdk.system.Boolean
    response_apdu: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    command_apdu_bit_mask: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    command_apdu: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    applet_id: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    output_state: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    input_state: typing.Optional[typing.Optional[winsdk.system.UInt32]]
    allow_when_cryptogram_generator_not_prepared: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardAutomaticResponseApdu: ...
    def __new__(cls: typing.Type[SmartCardAutomaticResponseApdu], command_apdu: typing.Optional[winsdk.windows.storage.streams.IBuffer], response_apdu: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> SmartCardAutomaticResponseApdu:...

class SmartCardChallengeContext(winsdk.system.Object):
    challenge: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardChallengeContext: ...
    def change_administrative_key_async(self, response: typing.Optional[winsdk.windows.storage.streams.IBuffer], new_administrative_key: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncAction: ...
    def close(self) -> None: ...
    @typing.overload
    def provision_async(self, response: typing.Optional[winsdk.windows.storage.streams.IBuffer], format_card: winsdk.system.Boolean, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def provision_async(self, response: typing.Optional[winsdk.windows.storage.streams.IBuffer], format_card: winsdk.system.Boolean, new_card_id: winsdk.system.Guid, /) -> winsdk.windows.foundation.IAsyncAction: ...
    def verify_response_async(self, response: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class SmartCardConnection(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardConnection: ...
    def close(self) -> None: ...
    def transmit_async(self, command: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...

class SmartCardCryptogramGenerator(winsdk.system.Object):
    supported_cryptogram_algorithms: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramAlgorithm]]
    supported_cryptogram_material_package_confirmation_response_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramMaterialPackageConfirmationResponseFormat]]
    supported_cryptogram_material_package_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramMaterialPackageFormat]]
    supported_cryptogram_material_types: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramMaterialType]]
    supported_smart_card_cryptogram_storage_key_capabilities: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramStorageKeyCapabilities]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramGenerator: ...
    def create_cryptogram_material_storage_key_async(self, prompting_behavior: SmartCardUnlockPromptingBehavior, storage_key_name: str, algorithm: SmartCardCryptogramStorageKeyAlgorithm, capabilities: SmartCardCryptogramStorageKeyCapabilities, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGeneratorOperationStatus]: ...
    def delete_cryptogram_material_package_async(self, material_package_name: str, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGeneratorOperationStatus]: ...
    def delete_cryptogram_material_storage_key_async(self, storage_key_name: str, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGeneratorOperationStatus]: ...
    def get_all_cryptogram_material_characteristics_async(self, prompting_behavior: SmartCardUnlockPromptingBehavior, material_package_name: str, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult]: ...
    @typing.overload
    def get_all_cryptogram_material_package_characteristics_async(self) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult]: ...
    @typing.overload
    def get_all_cryptogram_material_package_characteristics_async(self, storage_key_name: str, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult]: ...
    def get_all_cryptogram_storage_key_characteristics_async(self) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult]: ...
    @staticmethod
    def get_smart_card_cryptogram_generator_async() -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGenerator]: ...
    def import_cryptogram_material_package_async(self, format: SmartCardCryptogramMaterialPackageFormat, storage_key_name: str, material_package_name: str, cryptogram_material_package: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGeneratorOperationStatus]: ...
    @staticmethod
    def is_supported() -> winsdk.system.Boolean: ...
    def request_cryptogram_material_storage_key_info_async(self, prompting_behavior: SmartCardUnlockPromptingBehavior, storage_key_name: str, format: winsdk.windows.security.cryptography.core.CryptographicPublicKeyBlobType, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramStorageKeyInfo]: ...
    def request_unlock_cryptogram_material_for_use_async(self, prompting_behavior: SmartCardUnlockPromptingBehavior, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGeneratorOperationStatus]: ...
    def try_prove_possession_of_cryptogram_material_package_async(self, prompting_behavior: SmartCardUnlockPromptingBehavior, response_format: SmartCardCryptogramMaterialPackageConfirmationResponseFormat, material_package_name: str, material_name: str, challenge: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramMaterialPossessionProof]: ...
    def validate_request_apdu_async(self, prompting_behavior: SmartCardUnlockPromptingBehavior, apdu_to_validate: typing.Optional[winsdk.windows.storage.streams.IBuffer], cryptogram_placement_steps: typing.Iterable[SmartCardCryptogramPlacementStep], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGeneratorOperationStatus]: ...

class SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult(winsdk.system.Object):
    characteristics: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramMaterialCharacteristics]]
    operation_status: SmartCardCryptogramGeneratorOperationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult: ...
    def __new__(cls: typing.Type[SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult]) -> SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult:...

class SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult(winsdk.system.Object):
    characteristics: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramMaterialPackageCharacteristics]]
    operation_status: SmartCardCryptogramGeneratorOperationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult: ...
    def __new__(cls: typing.Type[SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult]) -> SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult:...

class SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult(winsdk.system.Object):
    characteristics: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramStorageKeyCharacteristics]]
    operation_status: SmartCardCryptogramGeneratorOperationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult: ...
    def __new__(cls: typing.Type[SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult]) -> SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult:...

class SmartCardCryptogramMaterialCharacteristics(winsdk.system.Object):
    allowed_algorithms: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramAlgorithm]]
    allowed_proof_of_possession_algorithms: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramMaterialPackageConfirmationResponseFormat]]
    allowed_validations: typing.Optional[winsdk.windows.foundation.collections.IVectorView[SmartCardCryptogramAlgorithm]]
    material_length: winsdk.system.Int32
    material_name: str
    material_type: SmartCardCryptogramMaterialType
    protection_method: SmartCardCryptogramMaterialProtectionMethod
    protection_version: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramMaterialCharacteristics: ...
    def __new__(cls: typing.Type[SmartCardCryptogramMaterialCharacteristics]) -> SmartCardCryptogramMaterialCharacteristics:...

class SmartCardCryptogramMaterialPackageCharacteristics(winsdk.system.Object):
    date_imported: datetime.datetime
    package_format: SmartCardCryptogramMaterialPackageFormat
    package_name: str
    storage_key_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramMaterialPackageCharacteristics: ...
    def __new__(cls: typing.Type[SmartCardCryptogramMaterialPackageCharacteristics]) -> SmartCardCryptogramMaterialPackageCharacteristics:...

class SmartCardCryptogramMaterialPossessionProof(winsdk.system.Object):
    operation_status: SmartCardCryptogramGeneratorOperationStatus
    proof: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramMaterialPossessionProof: ...

class SmartCardCryptogramPlacementStep(winsdk.system.Object):
    template_offset: winsdk.system.Int32
    source_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    cryptogram_placement_options: SmartCardCryptogramPlacementOptions
    cryptogram_offset: winsdk.system.Int32
    cryptogram_material_package_name: str
    cryptogram_material_name: str
    cryptogram_length: winsdk.system.Int32
    chained_output_step: typing.Optional[SmartCardCryptogramPlacementStep]
    algorithm: SmartCardCryptogramAlgorithm
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramPlacementStep: ...
    def __new__(cls: typing.Type[SmartCardCryptogramPlacementStep]) -> SmartCardCryptogramPlacementStep:...

class SmartCardCryptogramStorageKeyCharacteristics(winsdk.system.Object):
    algorithm: SmartCardCryptogramStorageKeyAlgorithm
    capabilities: SmartCardCryptogramStorageKeyCapabilities
    date_created: datetime.datetime
    storage_key_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramStorageKeyCharacteristics: ...
    def __new__(cls: typing.Type[SmartCardCryptogramStorageKeyCharacteristics]) -> SmartCardCryptogramStorageKeyCharacteristics:...

class SmartCardCryptogramStorageKeyInfo(winsdk.system.Object):
    attestation: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    attestation_certificate_chain: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    attestation_status: SmartCardCryptographicKeyAttestationStatus
    capabilities: SmartCardCryptogramStorageKeyCapabilities
    operation_status: SmartCardCryptogramGeneratorOperationStatus
    public_key: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    public_key_blob_type: winsdk.windows.security.cryptography.core.CryptographicPublicKeyBlobType
    operational_requirements: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardCryptogramStorageKeyInfo: ...

class SmartCardEmulator(winsdk.system.Object):
    enablement_policy: SmartCardEmulatorEnablementPolicy
    max_applet_id_group_registrations: typing.ClassVar[winsdk.system.UInt16]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardEmulator: ...
    @staticmethod
    def get_applet_id_group_registrations_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[SmartCardAppletIdGroupRegistration]]: ...
    @staticmethod
    def get_default_async() -> winsdk.windows.foundation.IAsyncOperation[SmartCardEmulator]: ...
    def is_host_card_emulation_supported(self) -> winsdk.system.Boolean: ...
    @staticmethod
    def is_supported() -> winsdk.system.Boolean: ...
    @staticmethod
    def register_applet_id_group_async(applet_id_group: typing.Optional[SmartCardAppletIdGroup], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardAppletIdGroupRegistration]: ...
    def start(self) -> None: ...
    @staticmethod
    def unregister_applet_id_group_async(registration: typing.Optional[SmartCardAppletIdGroupRegistration], /) -> winsdk.windows.foundation.IAsyncAction: ...
    def add_apdu_received(self, value: winsdk.windows.foundation.TypedEventHandler[SmartCardEmulator, SmartCardEmulatorApduReceivedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_apdu_received(self, value: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_connection_deactivated(self, value: winsdk.windows.foundation.TypedEventHandler[SmartCardEmulator, SmartCardEmulatorConnectionDeactivatedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_connection_deactivated(self, value: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class SmartCardEmulatorApduReceivedEventArgs(winsdk.system.Object):
    automatic_response_status: SmartCardAutomaticResponseStatus
    command_apdu: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    connection_properties: typing.Optional[SmartCardEmulatorConnectionProperties]
    state: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardEmulatorApduReceivedEventArgs: ...
    @typing.overload
    def try_respond_async(self, response_apdu: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def try_respond_async(self, response_apdu: typing.Optional[winsdk.windows.storage.streams.IBuffer], next_state: typing.Optional[winsdk.system.UInt32], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def try_respond_with_cryptograms_async(self, response_template: typing.Optional[winsdk.windows.storage.streams.IBuffer], cryptogram_placement_steps: typing.Iterable[SmartCardCryptogramPlacementStep], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGeneratorOperationStatus]: ...
    @typing.overload
    def try_respond_with_cryptograms_async(self, response_template: typing.Optional[winsdk.windows.storage.streams.IBuffer], cryptogram_placement_steps: typing.Iterable[SmartCardCryptogramPlacementStep], next_state: typing.Optional[winsdk.system.UInt32], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardCryptogramGeneratorOperationStatus]: ...

class SmartCardEmulatorConnectionDeactivatedEventArgs(winsdk.system.Object):
    connection_properties: typing.Optional[SmartCardEmulatorConnectionProperties]
    reason: SmartCardEmulatorConnectionDeactivatedReason
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardEmulatorConnectionDeactivatedEventArgs: ...

class SmartCardEmulatorConnectionProperties(winsdk.system.Object):
    id: winsdk.system.Guid
    source: SmartCardEmulatorConnectionSource
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardEmulatorConnectionProperties: ...

class SmartCardPinPolicy(winsdk.system.Object):
    uppercase_letters: SmartCardPinCharacterPolicyOption
    special_characters: SmartCardPinCharacterPolicyOption
    min_length: winsdk.system.UInt32
    max_length: winsdk.system.UInt32
    lowercase_letters: SmartCardPinCharacterPolicyOption
    digits: SmartCardPinCharacterPolicyOption
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardPinPolicy: ...
    def __new__(cls: typing.Type[SmartCardPinPolicy]) -> SmartCardPinPolicy:...

class SmartCardPinResetDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardPinResetDeferral: ...
    def complete(self) -> None: ...

class SmartCardPinResetRequest(winsdk.system.Object):
    challenge: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    deadline: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardPinResetRequest: ...
    def get_deferral(self) -> typing.Optional[SmartCardPinResetDeferral]: ...
    def set_response(self, response: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> None: ...

class SmartCardProvisioning(winsdk.system.Object):
    smart_card: typing.Optional[SmartCard]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardProvisioning: ...
    @staticmethod
    def from_smart_card_async(card: typing.Optional[SmartCard], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardProvisioning]: ...
    def get_authority_key_container_name_async(self) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def get_challenge_context_async(self) -> winsdk.windows.foundation.IAsyncOperation[SmartCardChallengeContext]: ...
    def get_id_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Guid]: ...
    def get_name_async(self) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @typing.overload
    @staticmethod
    def request_attested_virtual_smart_card_creation_async(friendly_name: str, administrative_key: typing.Optional[winsdk.windows.storage.streams.IBuffer], pin_policy: typing.Optional[SmartCardPinPolicy], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardProvisioning]: ...
    @typing.overload
    @staticmethod
    def request_attested_virtual_smart_card_creation_async(friendly_name: str, administrative_key: typing.Optional[winsdk.windows.storage.streams.IBuffer], pin_policy: typing.Optional[SmartCardPinPolicy], card_id: winsdk.system.Guid, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardProvisioning]: ...
    def request_pin_change_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def request_pin_reset_async(self, handler: typing.Optional[SmartCardPinResetHandler], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    @staticmethod
    def request_virtual_smart_card_creation_async(friendly_name: str, administrative_key: typing.Optional[winsdk.windows.storage.streams.IBuffer], pin_policy: typing.Optional[SmartCardPinPolicy], /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardProvisioning]: ...
    @typing.overload
    @staticmethod
    def request_virtual_smart_card_creation_async(friendly_name: str, administrative_key: typing.Optional[winsdk.windows.storage.streams.IBuffer], pin_policy: typing.Optional[SmartCardPinPolicy], card_id: winsdk.system.Guid, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardProvisioning]: ...
    @staticmethod
    def request_virtual_smart_card_deletion_async(card: typing.Optional[SmartCard], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class SmartCardReader(winsdk.system.Object):
    device_id: str
    kind: SmartCardReaderKind
    name: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardReader: ...
    def find_all_cards_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[SmartCard]]: ...
    @staticmethod
    def from_id_async(device_id: str, /) -> winsdk.windows.foundation.IAsyncOperation[SmartCardReader]: ...
    @typing.overload
    @staticmethod
    def get_device_selector() -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(kind: SmartCardReaderKind, /) -> str: ...
    def get_status_async(self) -> winsdk.windows.foundation.IAsyncOperation[SmartCardReaderStatus]: ...
    def add_card_added(self, handler: winsdk.windows.foundation.TypedEventHandler[SmartCardReader, CardAddedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_card_added(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_card_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[SmartCardReader, CardRemovedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_card_removed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class SmartCardTriggerDetails(winsdk.system.Object):
    source_applet_id: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    trigger_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    trigger_type: SmartCardTriggerType
    emulator: typing.Optional[SmartCardEmulator]
    smart_card: typing.Optional[SmartCard]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SmartCardTriggerDetails: ...
    @typing.overload
    def try_launch_current_app_async(self, arguments: str, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def try_launch_current_app_async(self, arguments: str, behavior: SmartCardLaunchBehavior, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

SmartCardPinResetHandler = typing.Callable[[typing.Optional[SmartCardProvisioning], typing.Optional[SmartCardPinResetRequest]], None]

