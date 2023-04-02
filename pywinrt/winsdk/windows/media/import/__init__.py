# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Media.Import")

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
    import winsdk.windows.storage.streams
except ImportError:
    pass

class PhotoImportAccessMode(enum.IntEnum):
    READ_WRITE = 0
    READ_ONLY = 1
    READ_AND_DELETE = 2

class PhotoImportConnectionTransport(enum.IntEnum):
    UNKNOWN = 0
    USB = 1
    I_P = 2
    BLUETOOTH = 3

class PhotoImportContentType(enum.IntEnum):
    UNKNOWN = 0
    IMAGE = 1
    VIDEO = 2

class PhotoImportContentTypeFilter(enum.IntEnum):
    ONLY_IMAGES = 0
    ONLY_VIDEOS = 1
    IMAGES_AND_VIDEOS = 2
    IMAGES_AND_VIDEOS_FROM_CAMERA_ROLL = 3

class PhotoImportImportMode(enum.IntEnum):
    IMPORT_EVERYTHING = 0
    IGNORE_SIDECARS = 1
    IGNORE_SIBLINGS = 2
    IGNORE_SIDECARS_AND_SIBLINGS = 3

class PhotoImportItemSelectionMode(enum.IntEnum):
    SELECT_ALL = 0
    SELECT_NONE = 1
    SELECT_NEW = 2

class PhotoImportPowerSource(enum.IntEnum):
    UNKNOWN = 0
    BATTERY = 1
    EXTERNAL = 2

class PhotoImportSourceType(enum.IntEnum):
    GENERIC = 0
    CAMERA = 1
    MEDIA_PLAYER = 2
    PHONE = 3
    VIDEO = 4
    PERSONAL_INFO_MANAGER = 5
    AUDIO_RECORDER = 6

class PhotoImportStage(enum.IntEnum):
    NOT_STARTED = 0
    FINDING_ITEMS = 1
    IMPORTING_ITEMS = 2
    DELETING_IMPORTED_ITEMS_FROM_SOURCE = 3

class PhotoImportStorageMediumType(enum.IntEnum):
    UNDEFINED = 0
    FIXED = 1
    REMOVABLE = 2

class PhotoImportSubfolderCreationMode(enum.IntEnum):
    DO_NOT_CREATE_SUBFOLDERS = 0
    CREATE_SUBFOLDERS_FROM_FILE_DATE = 1
    CREATE_SUBFOLDERS_FROM_EXIF_DATE = 2
    KEEP_ORIGINAL_FOLDER_STRUCTURE = 3

class PhotoImportSubfolderDateFormat(enum.IntEnum):
    YEAR = 0
    YEAR_MONTH = 1
    YEAR_MONTH_DAY = 2

_ns_module._register_PhotoImportAccessMode(PhotoImportAccessMode)
_ns_module._register_PhotoImportConnectionTransport(PhotoImportConnectionTransport)
_ns_module._register_PhotoImportContentType(PhotoImportContentType)
_ns_module._register_PhotoImportContentTypeFilter(PhotoImportContentTypeFilter)
_ns_module._register_PhotoImportImportMode(PhotoImportImportMode)
_ns_module._register_PhotoImportItemSelectionMode(PhotoImportItemSelectionMode)
_ns_module._register_PhotoImportPowerSource(PhotoImportPowerSource)
_ns_module._register_PhotoImportSourceType(PhotoImportSourceType)
_ns_module._register_PhotoImportStage(PhotoImportStage)
_ns_module._register_PhotoImportStorageMediumType(PhotoImportStorageMediumType)
_ns_module._register_PhotoImportSubfolderCreationMode(PhotoImportSubfolderCreationMode)
_ns_module._register_PhotoImportSubfolderDateFormat(PhotoImportSubfolderDateFormat)

PhotoImportProgress = _ns_module.PhotoImportProgress
PhotoImportDeleteImportedItemsFromSourceResult = _ns_module.PhotoImportDeleteImportedItemsFromSourceResult
PhotoImportFindItemsResult = _ns_module.PhotoImportFindItemsResult
PhotoImportImportItemsResult = _ns_module.PhotoImportImportItemsResult
PhotoImportItem = _ns_module.PhotoImportItem
PhotoImportItemImportedEventArgs = _ns_module.PhotoImportItemImportedEventArgs
PhotoImportManager = _ns_module.PhotoImportManager
PhotoImportOperation = _ns_module.PhotoImportOperation
PhotoImportSelectionChangedEventArgs = _ns_module.PhotoImportSelectionChangedEventArgs
PhotoImportSession = _ns_module.PhotoImportSession
PhotoImportSidecar = _ns_module.PhotoImportSidecar
PhotoImportSource = _ns_module.PhotoImportSource
PhotoImportStorageMedium = _ns_module.PhotoImportStorageMedium
PhotoImportVideoSegment = _ns_module.PhotoImportVideoSegment
