# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.cryptography.certificates
import winsdk.windows.storage.streams

class Capi1KdfTargetAlgorithm(enum.IntEnum):
    NOT_AES = 0
    AES = 1

class CryptographicPadding(enum.IntEnum):
    NONE = 0
    RSA_OAEP = 1
    RSA_PKCS1_V15 = 2
    RSA_PSS = 3

class CryptographicPrivateKeyBlobType(enum.IntEnum):
    PKCS8_RAW_PRIVATE_KEY_INFO = 0
    PKCS1_RSA_PRIVATE_KEY = 1
    B_CRYPT_PRIVATE_KEY = 2
    CAPI1_PRIVATE_KEY = 3
    B_CRYPT_ECC_FULL_PRIVATE_KEY = 4

class CryptographicPublicKeyBlobType(enum.IntEnum):
    X509_SUBJECT_PUBLIC_KEY_INFO = 0
    PKCS1_RSA_PUBLIC_KEY = 1
    B_CRYPT_PUBLIC_KEY = 2
    CAPI1_PUBLIC_KEY = 3
    B_CRYPT_ECC_FULL_PUBLIC_KEY = 4

Self = typing.TypeVar('Self')

class AsymmetricAlgorithmNames(winsdk.system.Object):
    ecdsa_p521_sha512: typing.ClassVar[str]
    dsa_sha1: typing.ClassVar[str]
    dsa_sha256: typing.ClassVar[str]
    ecdsa_p256_sha256: typing.ClassVar[str]
    ecdsa_p384_sha384: typing.ClassVar[str]
    rsa_sign_pkcs1_sha256: typing.ClassVar[str]
    rsa_oaep_sha1: typing.ClassVar[str]
    rsa_oaep_sha256: typing.ClassVar[str]
    rsa_oaep_sha384: typing.ClassVar[str]
    rsa_oaep_sha512: typing.ClassVar[str]
    rsa_pkcs1: typing.ClassVar[str]
    rsa_sign_pkcs1_sha1: typing.ClassVar[str]
    rsa_sign_pkcs1_sha384: typing.ClassVar[str]
    rsa_sign_pkcs1_sha512: typing.ClassVar[str]
    rsa_sign_pss_sha1: typing.ClassVar[str]
    rsa_sign_pss_sha256: typing.ClassVar[str]
    rsa_sign_pss_sha384: typing.ClassVar[str]
    rsa_sign_pss_sha512: typing.ClassVar[str]
    ecdsa_sha384: typing.ClassVar[str]
    ecdsa_sha512: typing.ClassVar[str]
    ecdsa_sha256: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> AsymmetricAlgorithmNames: ...

class AsymmetricKeyAlgorithmProvider(winsdk.system.Object):
    algorithm_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> AsymmetricKeyAlgorithmProvider: ...
    def create_key_pair(self, key_size: winsdk.system.UInt32, /) -> typing.Optional[CryptographicKey]: ...
    def create_key_pair_with_curve_name(self, curve_name: str, /) -> typing.Optional[CryptographicKey]: ...
    def create_key_pair_with_curve_parameters(self, parameters: winsdk.system.Array[winsdk.system.UInt8], /) -> typing.Optional[CryptographicKey]: ...
    @typing.overload
    def import_key_pair(self, key_blob: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[CryptographicKey]: ...
    @typing.overload
    def import_key_pair(self, key_blob: typing.Optional[winsdk.windows.storage.streams.IBuffer], blob_type: CryptographicPrivateKeyBlobType, /) -> typing.Optional[CryptographicKey]: ...
    @typing.overload
    def import_public_key(self, key_blob: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[CryptographicKey]: ...
    @typing.overload
    def import_public_key(self, key_blob: typing.Optional[winsdk.windows.storage.streams.IBuffer], blob_type: CryptographicPublicKeyBlobType, /) -> typing.Optional[CryptographicKey]: ...
    @staticmethod
    def open_algorithm(algorithm: str, /) -> typing.Optional[AsymmetricKeyAlgorithmProvider]: ...

class CryptographicEngine(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CryptographicEngine: ...
    @staticmethod
    def decrypt(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], iv: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def decrypt_and_authenticate(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], nonce: typing.Optional[winsdk.windows.storage.streams.IBuffer], authentication_tag: typing.Optional[winsdk.windows.storage.streams.IBuffer], authenticated_data: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def decrypt_async(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], iv: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def derive_key_material(key: typing.Optional[CryptographicKey], parameters: typing.Optional[KeyDerivationParameters], desired_key_size: winsdk.system.UInt32, /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def encrypt(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], iv: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def encrypt_and_authenticate(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], nonce: typing.Optional[winsdk.windows.storage.streams.IBuffer], authenticated_data: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[EncryptedAndAuthenticatedData]: ...
    @staticmethod
    def sign(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def sign_async(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def sign_hashed_data(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def sign_hashed_data_async(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def verify_signature(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], signature: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.system.Boolean: ...
    @staticmethod
    def verify_signature_with_hash_input(key: typing.Optional[CryptographicKey], data: typing.Optional[winsdk.windows.storage.streams.IBuffer], signature: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.system.Boolean: ...

class CryptographicHash(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CryptographicHash: ...
    def append(self, data: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> None: ...
    def get_value_and_reset(self) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...

class CryptographicKey(winsdk.system.Object):
    key_size: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CryptographicKey: ...
    @typing.overload
    def export(self) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @typing.overload
    def export(self, blob_type: CryptographicPrivateKeyBlobType, /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @typing.overload
    def export_public_key(self) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @typing.overload
    def export_public_key(self, blob_type: CryptographicPublicKeyBlobType, /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...

class EccCurveNames(winsdk.system.Object):
    all_ecc_curve_names: typing.ClassVar[typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]]
    brainpool_p160r1: typing.ClassVar[str]
    brainpool_p160t1: typing.ClassVar[str]
    brainpool_p192r1: typing.ClassVar[str]
    brainpool_p192t1: typing.ClassVar[str]
    brainpool_p224r1: typing.ClassVar[str]
    brainpool_p224t1: typing.ClassVar[str]
    brainpool_p256r1: typing.ClassVar[str]
    brainpool_p256t1: typing.ClassVar[str]
    brainpool_p320r1: typing.ClassVar[str]
    brainpool_p320t1: typing.ClassVar[str]
    brainpool_p384r1: typing.ClassVar[str]
    brainpool_p384t1: typing.ClassVar[str]
    brainpool_p512r1: typing.ClassVar[str]
    brainpool_p512t1: typing.ClassVar[str]
    curve25519: typing.ClassVar[str]
    ec192wapi: typing.ClassVar[str]
    nist_p192: typing.ClassVar[str]
    nist_p224: typing.ClassVar[str]
    nist_p256: typing.ClassVar[str]
    nist_p384: typing.ClassVar[str]
    nist_p521: typing.ClassVar[str]
    nums_p256t1: typing.ClassVar[str]
    nums_p384t1: typing.ClassVar[str]
    nums_p512t1: typing.ClassVar[str]
    sec_p160k1: typing.ClassVar[str]
    sec_p160r1: typing.ClassVar[str]
    sec_p160r2: typing.ClassVar[str]
    sec_p192k1: typing.ClassVar[str]
    sec_p192r1: typing.ClassVar[str]
    sec_p224k1: typing.ClassVar[str]
    sec_p224r1: typing.ClassVar[str]
    sec_p256k1: typing.ClassVar[str]
    sec_p256r1: typing.ClassVar[str]
    sec_p384r1: typing.ClassVar[str]
    sec_p521r1: typing.ClassVar[str]
    wtls12: typing.ClassVar[str]
    wtls7: typing.ClassVar[str]
    wtls9: typing.ClassVar[str]
    x962_p192v1: typing.ClassVar[str]
    x962_p192v2: typing.ClassVar[str]
    x962_p192v3: typing.ClassVar[str]
    x962_p239v1: typing.ClassVar[str]
    x962_p239v2: typing.ClassVar[str]
    x962_p239v3: typing.ClassVar[str]
    x962_p256v1: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> EccCurveNames: ...

class EncryptedAndAuthenticatedData(winsdk.system.Object):
    authentication_tag: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    encrypted_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> EncryptedAndAuthenticatedData: ...

class HashAlgorithmNames(winsdk.system.Object):
    md5: typing.ClassVar[str]
    sha1: typing.ClassVar[str]
    sha256: typing.ClassVar[str]
    sha384: typing.ClassVar[str]
    sha512: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> HashAlgorithmNames: ...

class HashAlgorithmProvider(winsdk.system.Object):
    algorithm_name: str
    hash_length: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> HashAlgorithmProvider: ...
    def create_hash(self) -> typing.Optional[CryptographicHash]: ...
    def hash_data(self, data: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def open_algorithm(algorithm: str, /) -> typing.Optional[HashAlgorithmProvider]: ...

class KeyDerivationAlgorithmNames(winsdk.system.Object):
    pbkdf2_sha256: typing.ClassVar[str]
    pbkdf2_md5: typing.ClassVar[str]
    pbkdf2_sha1: typing.ClassVar[str]
    sp800108_ctr_hmac_sha512: typing.ClassVar[str]
    pbkdf2_sha384: typing.ClassVar[str]
    pbkdf2_sha512: typing.ClassVar[str]
    sp800108_ctr_hmac_md5: typing.ClassVar[str]
    sp800108_ctr_hmac_sha1: typing.ClassVar[str]
    sp800108_ctr_hmac_sha256: typing.ClassVar[str]
    sp800108_ctr_hmac_sha384: typing.ClassVar[str]
    sp80056a_concat_md5: typing.ClassVar[str]
    sp80056a_concat_sha1: typing.ClassVar[str]
    sp80056a_concat_sha256: typing.ClassVar[str]
    sp80056a_concat_sha384: typing.ClassVar[str]
    sp80056a_concat_sha512: typing.ClassVar[str]
    capi_kdf_sha1: typing.ClassVar[str]
    capi_kdf_sha256: typing.ClassVar[str]
    capi_kdf_sha384: typing.ClassVar[str]
    capi_kdf_sha512: typing.ClassVar[str]
    capi_kdf_md5: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> KeyDerivationAlgorithmNames: ...

class KeyDerivationAlgorithmProvider(winsdk.system.Object):
    algorithm_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> KeyDerivationAlgorithmProvider: ...
    def create_key(self, key_material: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[CryptographicKey]: ...
    @staticmethod
    def open_algorithm(algorithm: str, /) -> typing.Optional[KeyDerivationAlgorithmProvider]: ...

class KeyDerivationParameters(winsdk.system.Object):
    kdf_generic_binary: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    iteration_count: winsdk.system.UInt32
    capi1_kdf_target_algorithm: Capi1KdfTargetAlgorithm
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> KeyDerivationParameters: ...
    @staticmethod
    def build_for_capi1_kdf(capi1_kdf_target_algorithm: Capi1KdfTargetAlgorithm, /) -> typing.Optional[KeyDerivationParameters]: ...
    @staticmethod
    def build_for_pbkdf2(pbkdf2_salt: typing.Optional[winsdk.windows.storage.streams.IBuffer], iteration_count: winsdk.system.UInt32, /) -> typing.Optional[KeyDerivationParameters]: ...
    @staticmethod
    def build_for_s_p800108(label: typing.Optional[winsdk.windows.storage.streams.IBuffer], context: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[KeyDerivationParameters]: ...
    @staticmethod
    def build_for_s_p80056a(algorithm_id: typing.Optional[winsdk.windows.storage.streams.IBuffer], party_u_info: typing.Optional[winsdk.windows.storage.streams.IBuffer], party_v_info: typing.Optional[winsdk.windows.storage.streams.IBuffer], supp_pub_info: typing.Optional[winsdk.windows.storage.streams.IBuffer], supp_priv_info: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[KeyDerivationParameters]: ...

class MacAlgorithmNames(winsdk.system.Object):
    aes_cmac: typing.ClassVar[str]
    hmac_md5: typing.ClassVar[str]
    hmac_sha1: typing.ClassVar[str]
    hmac_sha256: typing.ClassVar[str]
    hmac_sha384: typing.ClassVar[str]
    hmac_sha512: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> MacAlgorithmNames: ...

class MacAlgorithmProvider(winsdk.system.Object):
    algorithm_name: str
    mac_length: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> MacAlgorithmProvider: ...
    def create_hash(self, key_material: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[CryptographicHash]: ...
    def create_key(self, key_material: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[CryptographicKey]: ...
    @staticmethod
    def open_algorithm(algorithm: str, /) -> typing.Optional[MacAlgorithmProvider]: ...

class PersistedKeyProvider(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PersistedKeyProvider: ...
    @staticmethod
    def open_key_pair_from_certificate_async(certificate: typing.Optional[winsdk.windows.security.cryptography.certificates.Certificate], hash_algorithm_name: str, padding: CryptographicPadding, /) -> winsdk.windows.foundation.IAsyncOperation[CryptographicKey]: ...
    @staticmethod
    def open_public_key_from_certificate(certificate: typing.Optional[winsdk.windows.security.cryptography.certificates.Certificate], hash_algorithm_name: str, padding: CryptographicPadding, /) -> typing.Optional[CryptographicKey]: ...

class SymmetricAlgorithmNames(winsdk.system.Object):
    aes_cbc: typing.ClassVar[str]
    aes_cbc_pkcs7: typing.ClassVar[str]
    aes_ccm: typing.ClassVar[str]
    aes_ecb: typing.ClassVar[str]
    aes_ecb_pkcs7: typing.ClassVar[str]
    aes_gcm: typing.ClassVar[str]
    des_cbc: typing.ClassVar[str]
    des_cbc_pkcs7: typing.ClassVar[str]
    des_ecb: typing.ClassVar[str]
    des_ecb_pkcs7: typing.ClassVar[str]
    rc2_cbc: typing.ClassVar[str]
    rc2_cbc_pkcs7: typing.ClassVar[str]
    rc2_ecb: typing.ClassVar[str]
    rc2_ecb_pkcs7: typing.ClassVar[str]
    rc4: typing.ClassVar[str]
    triple_des_cbc: typing.ClassVar[str]
    triple_des_cbc_pkcs7: typing.ClassVar[str]
    triple_des_ecb: typing.ClassVar[str]
    triple_des_ecb_pkcs7: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SymmetricAlgorithmNames: ...

class SymmetricKeyAlgorithmProvider(winsdk.system.Object):
    algorithm_name: str
    block_length: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SymmetricKeyAlgorithmProvider: ...
    def create_symmetric_key(self, key_material: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> typing.Optional[CryptographicKey]: ...
    @staticmethod
    def open_algorithm(algorithm: str, /) -> typing.Optional[SymmetricKeyAlgorithmProvider]: ...

