# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Media.ClosedCaptioning")

try:
    import winsdk.windows.ui
except Exception:
    pass

class ClosedCaptionColor(enum.IntEnum):
    DEFAULT = 0
    WHITE = 1
    BLACK = 2
    RED = 3
    GREEN = 4
    BLUE = 5
    YELLOW = 6
    MAGENTA = 7
    CYAN = 8

class ClosedCaptionEdgeEffect(enum.IntEnum):
    DEFAULT = 0
    NONE = 1
    RAISED = 2
    DEPRESSED = 3
    UNIFORM = 4
    DROP_SHADOW = 5

class ClosedCaptionOpacity(enum.IntEnum):
    DEFAULT = 0
    ONE_HUNDRED_PERCENT = 1
    SEVENTY_FIVE_PERCENT = 2
    TWENTY_FIVE_PERCENT = 3
    ZERO_PERCENT = 4

class ClosedCaptionSize(enum.IntEnum):
    DEFAULT = 0
    FIFTY_PERCENT = 1
    ONE_HUNDRED_PERCENT = 2
    ONE_HUNDRED_FIFTY_PERCENT = 3
    TWO_HUNDRED_PERCENT = 4

class ClosedCaptionStyle(enum.IntEnum):
    DEFAULT = 0
    MONOSPACED_WITH_SERIFS = 1
    PROPORTIONAL_WITH_SERIFS = 2
    MONOSPACED_WITHOUT_SERIFS = 3
    PROPORTIONAL_WITHOUT_SERIFS = 4
    CASUAL = 5
    CURSIVE = 6
    SMALL_CAPITALS = 7

ClosedCaptionProperties = _ns_module.ClosedCaptionProperties
