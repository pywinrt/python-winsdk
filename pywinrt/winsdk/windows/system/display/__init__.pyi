# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import datetime
import sys
import types
import typing

import winsdk.system

Self = typing.TypeVar('Self')

class DisplayRequest(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DisplayRequest: ...
    def __new__(cls: typing.Type[DisplayRequest]) -> DisplayRequest:...
    def request_active(self) -> None: ...
    def request_release(self) -> None: ...

