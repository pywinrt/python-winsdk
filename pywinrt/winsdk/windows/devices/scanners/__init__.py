# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Scanners")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.graphics.printing
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

class ImageScannerAutoCroppingMode(enum.IntEnum):
    DISABLED = 0
    SINGLE_REGION = 1
    MULTIPLE_REGION = 2

class ImageScannerColorMode(enum.IntEnum):
    COLOR = 0
    GRAYSCALE = 1
    MONOCHROME = 2
    AUTO_COLOR = 3

class ImageScannerFormat(enum.IntEnum):
    JPEG = 0
    PNG = 1
    DEVICE_INDEPENDENT_BITMAP = 2
    TIFF = 3
    XPS = 4
    OPEN_XPS = 5
    PDF = 6

class ImageScannerScanSource(enum.IntEnum):
    DEFAULT = 0
    FLATBED = 1
    FEEDER = 2
    AUTO_CONFIGURED = 3

_ns_module._register_ImageScannerAutoCroppingMode(ImageScannerAutoCroppingMode)
_ns_module._register_ImageScannerColorMode(ImageScannerColorMode)
_ns_module._register_ImageScannerFormat(ImageScannerFormat)
_ns_module._register_ImageScannerScanSource(ImageScannerScanSource)

ImageScannerResolution = _ns_module.ImageScannerResolution
ImageScanner = _ns_module.ImageScanner
ImageScannerAutoConfiguration = _ns_module.ImageScannerAutoConfiguration
ImageScannerFeederConfiguration = _ns_module.ImageScannerFeederConfiguration
ImageScannerFlatbedConfiguration = _ns_module.ImageScannerFlatbedConfiguration
ImageScannerPreviewResult = _ns_module.ImageScannerPreviewResult
ImageScannerScanResult = _ns_module.ImageScannerScanResult
IImageScannerFormatConfiguration = _ns_module.IImageScannerFormatConfiguration
IImageScannerSourceConfiguration = _ns_module.IImageScannerSourceConfiguration
