# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Globalization.Collation")

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass


CharacterGrouping = _ns_module.CharacterGrouping
CharacterGroupings = _ns_module.CharacterGroupings
winsdk.system._mixin_sequence(CharacterGroupings)
