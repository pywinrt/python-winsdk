# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.UI.WebUI.Core")

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

class WebUICommandBarClosedDisplayMode(enum.IntEnum):
    DEFAULT = 0
    MINIMAL = 1
    COMPACT = 2

_ns_module._register_WebUICommandBarClosedDisplayMode(WebUICommandBarClosedDisplayMode)

WebUICommandBar = _ns_module.WebUICommandBar
WebUICommandBarBitmapIcon = _ns_module.WebUICommandBarBitmapIcon
WebUICommandBarConfirmationButton = _ns_module.WebUICommandBarConfirmationButton
WebUICommandBarIconButton = _ns_module.WebUICommandBarIconButton
WebUICommandBarItemInvokedEventArgs = _ns_module.WebUICommandBarItemInvokedEventArgs
WebUICommandBarSizeChangedEventArgs = _ns_module.WebUICommandBarSizeChangedEventArgs
WebUICommandBarSymbolIcon = _ns_module.WebUICommandBarSymbolIcon
IWebUICommandBarElement = _ns_module.IWebUICommandBarElement
IWebUICommandBarIcon = _ns_module.IWebUICommandBarIcon
