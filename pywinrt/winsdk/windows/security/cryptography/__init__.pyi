# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.storage.streams

class BinaryStringEncoding(enum.IntEnum):
    UTF8 = 0
    UTF16_L_E = 1
    UTF16_B_E = 2

Self = typing.TypeVar('Self')

class CryptographicBuffer(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CryptographicBuffer: ...
    @staticmethod
    def compare(object1: typing.Optional[winsdk.windows.storage.streams.IBuffer], object2: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.system.Boolean: ...
    @staticmethod
    def convert_binary_to_string(encoding: BinaryStringEncoding, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> str: ...
    @staticmethod
    def convert_string_to_binary(value: str, encoding: BinaryStringEncoding, /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def copy_to_byte_array(buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.system.Array[winsdk.system.UInt8]: ...
    @staticmethod
    def create_from_byte_array(value: winsdk.system.Array[winsdk.system.UInt8], /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def decode_from_base64_string(value: str, /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def decode_from_hex_string(value: str, /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def encode_to_base64_string(buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> str: ...
    @staticmethod
    def encode_to_hex_string(buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> str: ...
    @staticmethod
    def generate_random(length: winsdk.system.UInt32, /) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    @staticmethod
    def generate_random_number() -> winsdk.system.UInt32: ...

