# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system

class ApplicationProfileModes(enum.IntFlag):
    DEFAULT = 0
    ALTERNATE = 0x1

Self = typing.TypeVar('Self')

class ApplicationProfile(winsdk.system.Object):
    modes: typing.ClassVar[ApplicationProfileModes]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ApplicationProfile: ...

