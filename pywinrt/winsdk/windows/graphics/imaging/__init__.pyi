# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum
import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

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

class BitmapBounds:
    x: _winrt.UInt32
    y: _winrt.UInt32
    width: _winrt.UInt32
    height: _winrt.UInt32
    def __init__(self, x: _winrt.UInt32, y: _winrt.UInt32, width: _winrt.UInt32, height: _winrt.UInt32) -> None: ...

class BitmapPlaneDescription:
    start_index: _winrt.Int32
    width: _winrt.Int32
    height: _winrt.Int32
    stride: _winrt.Int32
    def __init__(self, start_index: _winrt.Int32, width: _winrt.Int32, height: _winrt.Int32, stride: _winrt.Int32) -> None: ...

class BitmapSize:
    width: _winrt.UInt32
    height: _winrt.UInt32
    def __init__(self, width: _winrt.UInt32, height: _winrt.UInt32) -> None: ...

class BitmapBuffer(_winrt.Object, interfaces=[winsdk.windows.foundation.IMemoryBuffer, winsdk.windows.foundation.IClosable]):
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapBuffer: ...
    def close(self) -> None: ...
    def create_reference(self) -> typing.Optional[winsdk.windows.foundation.IMemoryBufferReference]: ...
    def get_plane_count(self) -> _winrt.Int32: ...
    def get_plane_description(self, index: _winrt.Int32) -> BitmapPlaneDescription: ...

class BitmapCodecInformation(_winrt.Object, interfaces=[]):
    codec_id: uuid.UUID
    file_extensions: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    friendly_name: str
    mime_types: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapCodecInformation: ...

class BitmapDecoder(_winrt.Object, interfaces=[IBitmapFrame, IBitmapFrameWithSoftwareBitmap]):
    bitmap_container_properties: typing.Optional[BitmapPropertiesView]
    decoder_information: typing.Optional[BitmapCodecInformation]
    frame_count: _winrt.UInt32
    bitmap_alpha_mode: BitmapAlphaMode
    bitmap_pixel_format: BitmapPixelFormat
    bitmap_properties: typing.Optional[BitmapPropertiesView]
    dpi_x: _winrt.Double
    dpi_y: _winrt.Double
    oriented_pixel_height: _winrt.UInt32
    oriented_pixel_width: _winrt.UInt32
    pixel_height: _winrt.UInt32
    pixel_width: _winrt.UInt32
    bmp_decoder_id: uuid.UUID
    gif_decoder_id: uuid.UUID
    ico_decoder_id: uuid.UUID
    jpeg_decoder_id: uuid.UUID
    jpeg_x_r_decoder_id: uuid.UUID
    png_decoder_id: uuid.UUID
    tiff_decoder_id: uuid.UUID
    heif_decoder_id: uuid.UUID
    webp_decoder_id: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapDecoder: ...
    @typing.overload
    @staticmethod
    def create_async(stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> winsdk.windows.foundation.IAsyncOperation[BitmapDecoder]: ...
    @typing.overload
    @staticmethod
    def create_async(decoder_id: uuid.UUID, stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> winsdk.windows.foundation.IAsyncOperation[BitmapDecoder]: ...
    @staticmethod
    def get_decoder_information_enumerator() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[BitmapCodecInformation]]: ...
    def get_frame_async(self, frame_index: _winrt.UInt32) -> winsdk.windows.foundation.IAsyncOperation[BitmapFrame]: ...
    @typing.overload
    def get_pixel_data_async(self) -> winsdk.windows.foundation.IAsyncOperation[PixelDataProvider]: ...
    @typing.overload
    def get_pixel_data_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode, transform: typing.Optional[BitmapTransform], exif_orientation_mode: ExifOrientationMode, color_management_mode: ColorManagementMode) -> winsdk.windows.foundation.IAsyncOperation[PixelDataProvider]: ...
    def get_preview_async(self) -> winsdk.windows.foundation.IAsyncOperation[ImageStream]: ...
    @typing.overload
    def get_software_bitmap_async(self) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    @typing.overload
    def get_software_bitmap_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    @typing.overload
    def get_software_bitmap_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode, transform: typing.Optional[BitmapTransform], exif_orientation_mode: ExifOrientationMode, color_management_mode: ColorManagementMode) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    def get_thumbnail_async(self) -> winsdk.windows.foundation.IAsyncOperation[ImageStream]: ...

class BitmapEncoder(_winrt.Object, interfaces=[]):
    is_thumbnail_generated: _winrt.Boolean
    generated_thumbnail_width: _winrt.UInt32
    generated_thumbnail_height: _winrt.UInt32
    bitmap_container_properties: typing.Optional[BitmapProperties]
    bitmap_properties: typing.Optional[BitmapProperties]
    bitmap_transform: typing.Optional[BitmapTransform]
    encoder_information: typing.Optional[BitmapCodecInformation]
    bmp_encoder_id: uuid.UUID
    gif_encoder_id: uuid.UUID
    jpeg_encoder_id: uuid.UUID
    jpeg_x_r_encoder_id: uuid.UUID
    png_encoder_id: uuid.UUID
    tiff_encoder_id: uuid.UUID
    heif_encoder_id: uuid.UUID
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapEncoder: ...
    @typing.overload
    @staticmethod
    def create_async(encoder_id: uuid.UUID, stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> winsdk.windows.foundation.IAsyncOperation[BitmapEncoder]: ...
    @typing.overload
    @staticmethod
    def create_async(encoder_id: uuid.UUID, stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream], encoding_options: typing.Iterable[typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, BitmapTypedValue]]]) -> winsdk.windows.foundation.IAsyncOperation[BitmapEncoder]: ...
    @staticmethod
    def create_for_in_place_property_encoding_async(bitmap_decoder: typing.Optional[BitmapDecoder]) -> winsdk.windows.foundation.IAsyncOperation[BitmapEncoder]: ...
    @staticmethod
    def create_for_transcoding_async(stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream], bitmap_decoder: typing.Optional[BitmapDecoder]) -> winsdk.windows.foundation.IAsyncOperation[BitmapEncoder]: ...
    def flush_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def get_encoder_information_enumerator() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[BitmapCodecInformation]]: ...
    @typing.overload
    def go_to_next_frame_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @typing.overload
    def go_to_next_frame_async(self, encoding_options: typing.Iterable[typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, BitmapTypedValue]]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def set_pixel_data(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode, width: _winrt.UInt32, height: _winrt.UInt32, dpi_x: _winrt.Double, dpi_y: _winrt.Double, pixels: typing.Sequence[_winrt.UInt8]) -> None: ...
    def set_software_bitmap(self, bitmap: typing.Optional[SoftwareBitmap]) -> None: ...

class BitmapFrame(_winrt.Object, interfaces=[IBitmapFrame, IBitmapFrameWithSoftwareBitmap]):
    bitmap_alpha_mode: BitmapAlphaMode
    bitmap_pixel_format: BitmapPixelFormat
    bitmap_properties: typing.Optional[BitmapPropertiesView]
    dpi_x: _winrt.Double
    dpi_y: _winrt.Double
    oriented_pixel_height: _winrt.UInt32
    oriented_pixel_width: _winrt.UInt32
    pixel_height: _winrt.UInt32
    pixel_width: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapFrame: ...
    @typing.overload
    def get_pixel_data_async(self) -> winsdk.windows.foundation.IAsyncOperation[PixelDataProvider]: ...
    @typing.overload
    def get_pixel_data_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode, transform: typing.Optional[BitmapTransform], exif_orientation_mode: ExifOrientationMode, color_management_mode: ColorManagementMode) -> winsdk.windows.foundation.IAsyncOperation[PixelDataProvider]: ...
    @typing.overload
    def get_software_bitmap_async(self) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    @typing.overload
    def get_software_bitmap_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    @typing.overload
    def get_software_bitmap_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode, transform: typing.Optional[BitmapTransform], exif_orientation_mode: ExifOrientationMode, color_management_mode: ColorManagementMode) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    def get_thumbnail_async(self) -> winsdk.windows.foundation.IAsyncOperation[ImageStream]: ...

class BitmapProperties(_winrt.Object, interfaces=[IBitmapPropertiesView]):
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapProperties: ...
    def get_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[BitmapPropertySet]: ...
    def set_properties_async(self, properties_to_set: typing.Iterable[typing.Optional[winsdk.windows.foundation.collections.IKeyValuePair[str, BitmapTypedValue]]]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class BitmapPropertiesView(_winrt.Object, interfaces=[IBitmapPropertiesView]):
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapPropertiesView: ...
    def get_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[BitmapPropertySet]: ...

class BitmapPropertySet(_winrt.Object, interfaces=[winsdk.windows.foundation.collections.IMap[str, BitmapTypedValue], winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[str, BitmapTypedValue]]]):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapPropertySet: ...
    def __init__(self) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[str, BitmapTypedValue]]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[str, BitmapTypedValue]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def insert(self, key: str, value: typing.Optional[BitmapTypedValue]) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[BitmapTypedValue]: ...
    def remove(self, key: str) -> None: ...

class BitmapTransform(_winrt.Object, interfaces=[]):
    scaled_width: _winrt.UInt32
    scaled_height: _winrt.UInt32
    rotation: BitmapRotation
    interpolation_mode: BitmapInterpolationMode
    flip: BitmapFlip
    bounds: BitmapBounds
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapTransform: ...
    def __init__(self) -> None: ...

class BitmapTypedValue(_winrt.Object, interfaces=[]):
    type: winsdk.windows.foundation.PropertyType
    value: typing.Optional[_winrt.Object]
    @staticmethod
    def _from(obj: _winrt.Object) -> BitmapTypedValue: ...
    def __init__(self, value: typing.Optional[_winrt.Object], type: winsdk.windows.foundation.PropertyType) -> None: ...

class ImageStream(_winrt.Object, interfaces=[winsdk.windows.storage.streams.IRandomAccessStreamWithContentType, winsdk.windows.storage.streams.IContentTypeProvider, winsdk.windows.storage.streams.IRandomAccessStream, winsdk.windows.storage.streams.IOutputStream, winsdk.windows.foundation.IClosable, winsdk.windows.storage.streams.IInputStream]):
    content_type: str
    size: _winrt.UInt64
    can_read: _winrt.Boolean
    can_write: _winrt.Boolean
    position: _winrt.UInt64
    @staticmethod
    def _from(obj: _winrt.Object) -> ImageStream: ...
    def clone_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def get_input_stream_at(self, position: _winrt.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...
    def get_output_stream_at(self, position: _winrt.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], count: _winrt.UInt32, options: winsdk.windows.storage.streams.InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, _winrt.UInt32]: ...
    def seek(self, position: _winrt.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[_winrt.UInt32, _winrt.UInt32]: ...

class PixelDataProvider(_winrt.Object, interfaces=[]):
    @staticmethod
    def _from(obj: _winrt.Object) -> PixelDataProvider: ...
    def detach_pixel_data(self) -> _winrt.UInt8: ...

class SoftwareBitmap(_winrt.Object, interfaces=[winsdk.windows.foundation.IClosable]):
    dpi_y: _winrt.Double
    dpi_x: _winrt.Double
    bitmap_alpha_mode: BitmapAlphaMode
    bitmap_pixel_format: BitmapPixelFormat
    is_read_only: _winrt.Boolean
    pixel_height: _winrt.Int32
    pixel_width: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> SoftwareBitmap: ...
    @typing.overload
    def __init__(self, format: BitmapPixelFormat, width: _winrt.Int32, height: _winrt.Int32) -> None: ...
    @typing.overload
    def __init__(self, format: BitmapPixelFormat, width: _winrt.Int32, height: _winrt.Int32, alpha: BitmapAlphaMode) -> None: ...
    def close(self) -> None: ...
    @typing.overload
    @staticmethod
    def convert(source: typing.Optional[SoftwareBitmap], format: BitmapPixelFormat) -> typing.Optional[SoftwareBitmap]: ...
    @typing.overload
    @staticmethod
    def convert(source: typing.Optional[SoftwareBitmap], format: BitmapPixelFormat, alpha: BitmapAlphaMode) -> typing.Optional[SoftwareBitmap]: ...
    @staticmethod
    def copy(source: typing.Optional[SoftwareBitmap]) -> typing.Optional[SoftwareBitmap]: ...
    def copy_from_buffer(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    def copy_to(self, bitmap: typing.Optional[SoftwareBitmap]) -> None: ...
    def copy_to_buffer(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    @typing.overload
    @staticmethod
    def create_copy_from_buffer(source: typing.Optional[winsdk.windows.storage.streams.IBuffer], format: BitmapPixelFormat, width: _winrt.Int32, height: _winrt.Int32) -> typing.Optional[SoftwareBitmap]: ...
    @typing.overload
    @staticmethod
    def create_copy_from_buffer(source: typing.Optional[winsdk.windows.storage.streams.IBuffer], format: BitmapPixelFormat, width: _winrt.Int32, height: _winrt.Int32, alpha: BitmapAlphaMode) -> typing.Optional[SoftwareBitmap]: ...
    @typing.overload
    @staticmethod
    def create_copy_from_surface_async(surface: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface]) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    @typing.overload
    @staticmethod
    def create_copy_from_surface_async(surface: typing.Optional[winsdk.windows.graphics.directx.direct3d11.IDirect3DSurface], alpha: BitmapAlphaMode) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    def get_read_only_view(self) -> typing.Optional[SoftwareBitmap]: ...
    def lock_buffer(self, mode: BitmapBufferAccessMode) -> typing.Optional[BitmapBuffer]: ...

class IBitmapFrame(typing.Protocol):
    bitmap_alpha_mode: BitmapAlphaMode
    bitmap_pixel_format: BitmapPixelFormat
    bitmap_properties: typing.Optional[BitmapPropertiesView]
    dpi_x: _winrt.Double
    dpi_y: _winrt.Double
    oriented_pixel_height: _winrt.UInt32
    oriented_pixel_width: _winrt.UInt32
    pixel_height: _winrt.UInt32
    pixel_width: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> IBitmapFrame: ...
    @typing.overload
    def get_pixel_data_async(self) -> winsdk.windows.foundation.IAsyncOperation[PixelDataProvider]: ...
    @typing.overload
    def get_pixel_data_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode, transform: typing.Optional[BitmapTransform], exif_orientation_mode: ExifOrientationMode, color_management_mode: ColorManagementMode) -> winsdk.windows.foundation.IAsyncOperation[PixelDataProvider]: ...
    def get_thumbnail_async(self) -> winsdk.windows.foundation.IAsyncOperation[ImageStream]: ...

class IBitmapFrameWithSoftwareBitmap(typing.Protocol):
    bitmap_alpha_mode: BitmapAlphaMode
    bitmap_pixel_format: BitmapPixelFormat
    bitmap_properties: typing.Optional[BitmapPropertiesView]
    dpi_x: _winrt.Double
    dpi_y: _winrt.Double
    oriented_pixel_height: _winrt.UInt32
    oriented_pixel_width: _winrt.UInt32
    pixel_height: _winrt.UInt32
    pixel_width: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> IBitmapFrameWithSoftwareBitmap: ...
    @typing.overload
    def get_software_bitmap_async(self) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    @typing.overload
    def get_software_bitmap_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    @typing.overload
    def get_software_bitmap_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode, transform: typing.Optional[BitmapTransform], exif_orientation_mode: ExifOrientationMode, color_management_mode: ColorManagementMode) -> winsdk.windows.foundation.IAsyncOperation[SoftwareBitmap]: ...
    @typing.overload
    def get_pixel_data_async(self) -> winsdk.windows.foundation.IAsyncOperation[PixelDataProvider]: ...
    @typing.overload
    def get_pixel_data_async(self, pixel_format: BitmapPixelFormat, alpha_mode: BitmapAlphaMode, transform: typing.Optional[BitmapTransform], exif_orientation_mode: ExifOrientationMode, color_management_mode: ColorManagementMode) -> winsdk.windows.foundation.IAsyncOperation[PixelDataProvider]: ...
    def get_thumbnail_async(self) -> winsdk.windows.foundation.IAsyncOperation[ImageStream]: ...

class IBitmapPropertiesView(typing.Protocol):
    @staticmethod
    def _from(obj: _winrt.Object) -> IBitmapPropertiesView: ...
    def get_properties_async(self, properties_to_retrieve: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[BitmapPropertySet]: ...

