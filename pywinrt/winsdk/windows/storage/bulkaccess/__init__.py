# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Storage.BulkAccess")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.storage
except ImportError:
    pass

try:
    import winsdk.windows.storage.fileproperties
except ImportError:
    pass

try:
    import winsdk.windows.storage.search
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass


FileInformation = _ns_module.FileInformation
FileInformationFactory = _ns_module.FileInformationFactory
FolderInformation = _ns_module.FolderInformation
IStorageItemInformation = _ns_module.IStorageItemInformation
