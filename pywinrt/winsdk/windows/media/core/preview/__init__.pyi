# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.media

Self = typing.TypeVar('Self')

class SoundLevelBroker(winsdk.system.Object):
    sound_level: typing.ClassVar[winsdk.windows.media.SoundLevel]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SoundLevelBroker: ...
    @staticmethod
    def add_sound_level_changed(handler: winsdk.windows.foundation.EventHandler[winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    @staticmethod
    def remove_sound_level_changed(token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

