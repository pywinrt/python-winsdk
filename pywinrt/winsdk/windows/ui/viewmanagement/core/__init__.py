# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.UI.ViewManagement.Core")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.ui
except ImportError:
    pass

class CoreInputViewKind(enum.IntEnum):
    DEFAULT = 0
    KEYBOARD = 1
    HANDWRITING = 2
    EMOJI = 3
    SYMBOLS = 4
    CLIPBOARD = 5
    DICTATION = 6

class CoreInputViewOcclusionKind(enum.IntEnum):
    DOCKED = 0
    FLOATING = 1
    OVERLAY = 2

class CoreInputViewXYFocusTransferDirection(enum.IntEnum):
    UP = 0
    RIGHT = 1
    DOWN = 2
    LEFT = 3

_ns_module._register_CoreInputViewKind(CoreInputViewKind)
_ns_module._register_CoreInputViewOcclusionKind(CoreInputViewOcclusionKind)
_ns_module._register_CoreInputViewXYFocusTransferDirection(CoreInputViewXYFocusTransferDirection)

CoreFrameworkInputView = _ns_module.CoreFrameworkInputView
CoreFrameworkInputViewAnimationStartingEventArgs = _ns_module.CoreFrameworkInputViewAnimationStartingEventArgs
CoreFrameworkInputViewOcclusionsChangedEventArgs = _ns_module.CoreFrameworkInputViewOcclusionsChangedEventArgs
CoreInputView = _ns_module.CoreInputView
CoreInputViewAnimationStartingEventArgs = _ns_module.CoreInputViewAnimationStartingEventArgs
CoreInputViewHidingEventArgs = _ns_module.CoreInputViewHidingEventArgs
CoreInputViewOcclusion = _ns_module.CoreInputViewOcclusion
CoreInputViewOcclusionsChangedEventArgs = _ns_module.CoreInputViewOcclusionsChangedEventArgs
CoreInputViewShowingEventArgs = _ns_module.CoreInputViewShowingEventArgs
CoreInputViewTransferringXYFocusEventArgs = _ns_module.CoreInputViewTransferringXYFocusEventArgs
UISettingsController = _ns_module.UISettingsController
