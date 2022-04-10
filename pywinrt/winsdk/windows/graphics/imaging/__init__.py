# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Graphics.Imaging")

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.graphics.directx.direct3d11
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class BitmapAlphaMode(enum.IntEnum):
    PREMULTIPLIED = 0
    STRAIGHT = 1
    IGNORE = 2

class BitmapBufferAccessMode(enum.IntEnum):
    READ = 0
    READ_WRITE = 1
    WRITE = 2

class BitmapFlip(enum.IntEnum):
    NONE = 0
    HORIZONTAL = 1
    VERTICAL = 2

class BitmapInterpolationMode(enum.IntEnum):
    NEAREST_NEIGHBOR = 0
    LINEAR = 1
    CUBIC = 2
    FANT = 3

class BitmapPixelFormat(enum.IntEnum):
    UNKNOWN = 0
    RGBA16 = 12
    RGBA8 = 30
    GRAY16 = 57
    GRAY8 = 62
    BGRA8 = 87
    NV12 = 103
    P010 = 104
    YUY2 = 107

class BitmapRotation(enum.IntEnum):
    NONE = 0
    CLOCKWISE90_DEGREES = 1
    CLOCKWISE180_DEGREES = 2
    CLOCKWISE270_DEGREES = 3

class ColorManagementMode(enum.IntEnum):
    DO_NOT_COLOR_MANAGE = 0
    COLOR_MANAGE_TO_S_RGB = 1

class ExifOrientationMode(enum.IntEnum):
    IGNORE_EXIF_ORIENTATION = 0
    RESPECT_EXIF_ORIENTATION = 1

class JpegSubsamplingMode(enum.IntEnum):
    DEFAULT = 0
    Y4_CB2_CR0 = 1
    Y4_CB2_CR2 = 2
    Y4_CB4_CR4 = 3

class PngFilterMode(enum.IntEnum):
    AUTOMATIC = 0
    NONE = 1
    SUB = 2
    UP = 3
    AVERAGE = 4
    PAETH = 5
    ADAPTIVE = 6

class TiffCompressionMode(enum.IntEnum):
    AUTOMATIC = 0
    NONE = 1
    CCITT3 = 2
    CCITT4 = 3
    LZW = 4
    RLE = 5
    ZIP = 6
    LZWH_DIFFERENCING = 7

BitmapBounds = _ns_module.BitmapBounds
BitmapPlaneDescription = _ns_module.BitmapPlaneDescription
BitmapSize = _ns_module.BitmapSize
BitmapBuffer = _ns_module.BitmapBuffer
BitmapCodecInformation = _ns_module.BitmapCodecInformation
BitmapDecoder = _ns_module.BitmapDecoder
BitmapEncoder = _ns_module.BitmapEncoder
BitmapFrame = _ns_module.BitmapFrame
BitmapProperties = _ns_module.BitmapProperties
BitmapPropertiesView = _ns_module.BitmapPropertiesView
BitmapPropertySet = _ns_module.BitmapPropertySet
BitmapTransform = _ns_module.BitmapTransform
BitmapTypedValue = _ns_module.BitmapTypedValue
ImageStream = _ns_module.ImageStream
PixelDataProvider = _ns_module.PixelDataProvider
SoftwareBitmap = _ns_module.SoftwareBitmap
IBitmapFrame = _ns_module.IBitmapFrame
IBitmapFrameWithSoftwareBitmap = _ns_module.IBitmapFrameWithSoftwareBitmap
IBitmapPropertiesView = _ns_module.IBitmapPropertiesView
