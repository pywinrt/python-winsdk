# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Input")

try:
    import winsdk.windows.devices.haptics
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class PointerDeviceType(enum.IntEnum):
    TOUCH = 0
    PEN = 1
    MOUSE = 2

_ns_module._register_PointerDeviceType(PointerDeviceType)

MouseDelta = _ns_module.MouseDelta
PointerDeviceUsage = _ns_module.PointerDeviceUsage
KeyboardCapabilities = _ns_module.KeyboardCapabilities
MouseCapabilities = _ns_module.MouseCapabilities
MouseDevice = _ns_module.MouseDevice
MouseEventArgs = _ns_module.MouseEventArgs
PenButtonListener = _ns_module.PenButtonListener
PenDevice = _ns_module.PenDevice
PenDockListener = _ns_module.PenDockListener
PenDockedEventArgs = _ns_module.PenDockedEventArgs
PenTailButtonClickedEventArgs = _ns_module.PenTailButtonClickedEventArgs
PenTailButtonDoubleClickedEventArgs = _ns_module.PenTailButtonDoubleClickedEventArgs
PenTailButtonLongPressedEventArgs = _ns_module.PenTailButtonLongPressedEventArgs
PenUndockedEventArgs = _ns_module.PenUndockedEventArgs
PointerDevice = _ns_module.PointerDevice
TouchCapabilities = _ns_module.TouchCapabilities
