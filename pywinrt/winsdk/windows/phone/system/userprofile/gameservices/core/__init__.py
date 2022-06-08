# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Phone.System.UserProfile.GameServices.Core")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class GameServiceGameOutcome(enum.IntEnum):
    NONE = 0
    WIN = 1
    LOSS = 2
    TIE = 3

class GameServiceScoreKind(enum.IntEnum):
    NUMBER = 0
    TIME = 1

_ns_module._register_GameServiceGameOutcome(GameServiceGameOutcome)
_ns_module._register_GameServiceScoreKind(GameServiceScoreKind)

GameService = _ns_module.GameService
GameServicePropertyCollection = _ns_module.GameServicePropertyCollection