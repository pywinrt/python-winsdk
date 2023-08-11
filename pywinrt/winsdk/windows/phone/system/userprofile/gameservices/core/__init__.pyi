# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.storage.streams

class GameServiceGameOutcome(enum.IntEnum):
    NONE = 0
    WIN = 1
    LOSS = 2
    TIE = 3

class GameServiceScoreKind(enum.IntEnum):
    NUMBER = 0
    TIME = 1

Self = typing.TypeVar('Self')

class GameService(winsdk.system.Object):
    service_uri: typing.ClassVar[typing.Optional[winsdk.windows.foundation.Uri]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GameService: ...
    @staticmethod
    def get_authentication_status() -> winsdk.system.UInt32: ...
    @staticmethod
    def get_gamer_profile_async() -> winsdk.windows.foundation.IAsyncOperation[GameServicePropertyCollection]: ...
    @staticmethod
    def get_installed_game_items_async() -> winsdk.windows.foundation.IAsyncOperation[GameServicePropertyCollection]: ...
    @staticmethod
    def get_partner_token_async(audience_uri: typing.Optional[winsdk.windows.foundation.Uri], /) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def get_privileges_async() -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    @staticmethod
    def grant_achievement(achievement_id: winsdk.system.UInt32, /) -> None: ...
    @staticmethod
    def grant_avatar_award(avatar_award_id: winsdk.system.UInt32, /) -> None: ...
    @staticmethod
    def notify_partner_token_expired(audience_uri: typing.Optional[winsdk.windows.foundation.Uri], /) -> None: ...
    @staticmethod
    def post_result(game_variant: winsdk.system.UInt32, score_kind: GameServiceScoreKind, score_value: winsdk.system.Int64, game_outcome: GameServiceGameOutcome, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> None: ...

class GameServicePropertyCollection(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GameServicePropertyCollection: ...
    def get_property_async(self, property_name: str, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Object]: ...

