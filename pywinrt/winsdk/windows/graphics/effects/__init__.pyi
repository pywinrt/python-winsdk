# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import datetime
import sys
import types
import typing

import winsdk.system

Self = typing.TypeVar('Self')

class IGraphicsEffect(winsdk.system.Object):
    name: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IGraphicsEffect: ...

class IGraphicsEffectSource(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IGraphicsEffectSource: ...

