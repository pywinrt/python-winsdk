# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import datetime
import sys
import types
import typing

import winsdk.system

Self = typing.TypeVar('Self')

class SystemProtection(winsdk.system.Object):
    screen_locked: typing.ClassVar[winsdk.system.Boolean]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SystemProtection: ...
    @staticmethod
    def request_screen_unlock() -> None: ...

