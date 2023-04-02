# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation

Self = typing.TypeVar('Self')

class ScreenReaderPositionChangedEventArgs(winsdk.system.Object):
    is_reading_text: winsdk.system.Boolean
    screen_position_in_raw_pixels: winsdk.windows.foundation.Rect
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ScreenReaderPositionChangedEventArgs: ...

class ScreenReaderService(winsdk.system.Object):
    current_screen_reader_position: typing.Optional[ScreenReaderPositionChangedEventArgs]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ScreenReaderService: ...
    def __new__(cls: typing.Type[ScreenReaderService]) -> ScreenReaderService:...
    def add_screen_reader_position_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[ScreenReaderService, ScreenReaderPositionChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_screen_reader_position_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

