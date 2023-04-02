# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.Wallet.System")

try:
    import winsdk.windows.applicationmodel.wallet
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

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class WalletItemAppAssociation(enum.IntEnum):
    NONE = 0
    APP_INSTALLED = 1
    APP_NOT_INSTALLED = 2

_ns_module._register_WalletItemAppAssociation(WalletItemAppAssociation)

WalletItemSystemStore = _ns_module.WalletItemSystemStore
WalletManagerSystem = _ns_module.WalletManagerSystem
