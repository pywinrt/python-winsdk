# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.media.core
import winsdk.windows.storage
import winsdk.windows.storage.streams

class AudioEncodingQuality(enum.IntEnum):
    AUTO = 0
    HIGH = 1
    MEDIUM = 2
    LOW = 3

class MediaMirroringOptions(enum.IntFlag):
    NONE = 0
    HORIZONTAL = 0x1
    VERTICAL = 0x2

class MediaPixelFormat(enum.IntEnum):
    NV12 = 0
    BGRA8 = 1
    P010 = 2

class MediaRotation(enum.IntEnum):
    NONE = 0
    CLOCKWISE90_DEGREES = 1
    CLOCKWISE180_DEGREES = 2
    CLOCKWISE270_DEGREES = 3

class MediaThumbnailFormat(enum.IntEnum):
    BMP = 0
    BGRA8 = 1

class SphericalVideoFrameFormat(enum.IntEnum):
    NONE = 0
    UNSUPPORTED = 1
    EQUIRECTANGULAR = 2

class StereoscopicVideoPackingMode(enum.IntEnum):
    NONE = 0
    SIDE_BY_SIDE = 1
    TOP_BOTTOM = 2

class VideoEncodingQuality(enum.IntEnum):
    AUTO = 0
    H_D1080P = 1
    H_D720P = 2
    WVGA = 3
    NTSC = 4
    PAL = 5
    VGA = 6
    QVGA = 7
    UHD2160P = 8
    UHD4320P = 9

Self = typing.TypeVar('Self')

class AudioEncodingProperties(winsdk.system.Object):
    sample_rate: winsdk.system.UInt32
    channel_count: winsdk.system.UInt32
    bits_per_sample: winsdk.system.UInt32
    bitrate: winsdk.system.UInt32
    is_spatial: winsdk.system.Boolean
    subtype: str
    properties: typing.Optional[MediaPropertySet]
    type: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> AudioEncodingProperties: ...
    def __new__(cls: typing.Type[AudioEncodingProperties]) -> AudioEncodingProperties:...
    def copy(self) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_aac(sample_rate: winsdk.system.UInt32, channel_count: winsdk.system.UInt32, bitrate: winsdk.system.UInt32, /) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_aac_adts(sample_rate: winsdk.system.UInt32, channel_count: winsdk.system.UInt32, bitrate: winsdk.system.UInt32, /) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_alac(sample_rate: winsdk.system.UInt32, channel_count: winsdk.system.UInt32, bits_per_sample: winsdk.system.UInt32, /) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_flac(sample_rate: winsdk.system.UInt32, channel_count: winsdk.system.UInt32, bits_per_sample: winsdk.system.UInt32, /) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_mp3(sample_rate: winsdk.system.UInt32, channel_count: winsdk.system.UInt32, bitrate: winsdk.system.UInt32, /) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_pcm(sample_rate: winsdk.system.UInt32, channel_count: winsdk.system.UInt32, bits_per_sample: winsdk.system.UInt32, /) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_wma(sample_rate: winsdk.system.UInt32, channel_count: winsdk.system.UInt32, bitrate: winsdk.system.UInt32, /) -> typing.Optional[AudioEncodingProperties]: ...
    def get_format_user_data(self) -> winsdk.system.Array[winsdk.system.UInt8]: ...
    def set_format_user_data(self, value: winsdk.system.Array[winsdk.system.UInt8], /) -> None: ...

class ContainerEncodingProperties(winsdk.system.Object):
    subtype: str
    properties: typing.Optional[MediaPropertySet]
    type: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ContainerEncodingProperties: ...
    def __new__(cls: typing.Type[ContainerEncodingProperties]) -> ContainerEncodingProperties:...
    def copy(self) -> typing.Optional[ContainerEncodingProperties]: ...

class H264ProfileIds(winsdk.system.Object):
    baseline: typing.ClassVar[winsdk.system.Int32]
    constrained_baseline: typing.ClassVar[winsdk.system.Int32]
    extended: typing.ClassVar[winsdk.system.Int32]
    high: typing.ClassVar[winsdk.system.Int32]
    high10: typing.ClassVar[winsdk.system.Int32]
    high422: typing.ClassVar[winsdk.system.Int32]
    high444: typing.ClassVar[winsdk.system.Int32]
    main: typing.ClassVar[winsdk.system.Int32]
    multiview_high: typing.ClassVar[winsdk.system.Int32]
    stereo_high: typing.ClassVar[winsdk.system.Int32]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> H264ProfileIds: ...

class ImageEncodingProperties(winsdk.system.Object):
    width: winsdk.system.UInt32
    height: winsdk.system.UInt32
    subtype: str
    properties: typing.Optional[MediaPropertySet]
    type: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ImageEncodingProperties: ...
    def __new__(cls: typing.Type[ImageEncodingProperties]) -> ImageEncodingProperties:...
    def copy(self) -> typing.Optional[ImageEncodingProperties]: ...
    @staticmethod
    def create_bmp() -> typing.Optional[ImageEncodingProperties]: ...
    @staticmethod
    def create_heif() -> typing.Optional[ImageEncodingProperties]: ...
    @staticmethod
    def create_jpeg() -> typing.Optional[ImageEncodingProperties]: ...
    @staticmethod
    def create_jpeg_x_r() -> typing.Optional[ImageEncodingProperties]: ...
    @staticmethod
    def create_png() -> typing.Optional[ImageEncodingProperties]: ...
    @staticmethod
    def create_uncompressed(format: MediaPixelFormat, /) -> typing.Optional[ImageEncodingProperties]: ...

class MediaEncodingProfile(winsdk.system.Object):
    video: typing.Optional[VideoEncodingProperties]
    container: typing.Optional[ContainerEncodingProperties]
    audio: typing.Optional[AudioEncodingProperties]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> MediaEncodingProfile: ...
    def __new__(cls: typing.Type[MediaEncodingProfile]) -> MediaEncodingProfile:...
    @staticmethod
    def create_alac(quality: AudioEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_avi(quality: VideoEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_flac(quality: AudioEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_from_file_async(file: typing.Optional[winsdk.windows.storage.IStorageFile], /) -> winsdk.windows.foundation.IAsyncOperation[MediaEncodingProfile]: ...
    @staticmethod
    def create_from_stream_async(stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream], /) -> winsdk.windows.foundation.IAsyncOperation[MediaEncodingProfile]: ...
    @staticmethod
    def create_hevc(quality: VideoEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_m4a(quality: AudioEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_mp3(quality: AudioEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_mp4(quality: VideoEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_wav(quality: AudioEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_wma(quality: AudioEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_wmv(quality: VideoEncodingQuality, /) -> typing.Optional[MediaEncodingProfile]: ...
    def get_audio_tracks(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.AudioStreamDescriptor]]: ...
    def get_timed_metadata_tracks(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.TimedMetadataStreamDescriptor]]: ...
    def get_video_tracks(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.VideoStreamDescriptor]]: ...
    def set_audio_tracks(self, value: typing.Iterable[winsdk.windows.media.core.AudioStreamDescriptor], /) -> None: ...
    def set_timed_metadata_tracks(self, value: typing.Iterable[winsdk.windows.media.core.TimedMetadataStreamDescriptor], /) -> None: ...
    def set_video_tracks(self, value: typing.Iterable[winsdk.windows.media.core.VideoStreamDescriptor], /) -> None: ...

class MediaEncodingSubtypes(winsdk.system.Object):
    asf: typing.ClassVar[str]
    aac: typing.ClassVar[str]
    aac_adts: typing.ClassVar[str]
    ac3: typing.ClassVar[str]
    amr_nb: typing.ClassVar[str]
    amr_wb: typing.ClassVar[str]
    argb32: typing.ClassVar[str]
    mpeg1: typing.ClassVar[str]
    avi: typing.ClassVar[str]
    bgra8: typing.ClassVar[str]
    bmp: typing.ClassVar[str]
    eac3: typing.ClassVar[str]
    float: typing.ClassVar[str]
    gif: typing.ClassVar[str]
    h263: typing.ClassVar[str]
    h264: typing.ClassVar[str]
    h264_es: typing.ClassVar[str]
    hevc: typing.ClassVar[str]
    hevc_es: typing.ClassVar[str]
    iyuv: typing.ClassVar[str]
    jpeg: typing.ClassVar[str]
    jpeg_xr: typing.ClassVar[str]
    mjpg: typing.ClassVar[str]
    mp3: typing.ClassVar[str]
    mpeg: typing.ClassVar[str]
    mpeg2: typing.ClassVar[str]
    mpeg4: typing.ClassVar[str]
    nv12: typing.ClassVar[str]
    pcm: typing.ClassVar[str]
    png: typing.ClassVar[str]
    rgb24: typing.ClassVar[str]
    rgb32: typing.ClassVar[str]
    tiff: typing.ClassVar[str]
    wave: typing.ClassVar[str]
    wma8: typing.ClassVar[str]
    wma9: typing.ClassVar[str]
    wmv3: typing.ClassVar[str]
    wvc1: typing.ClassVar[str]
    yuy2: typing.ClassVar[str]
    yv12: typing.ClassVar[str]
    d16: typing.ClassVar[str]
    l16: typing.ClassVar[str]
    l8: typing.ClassVar[str]
    vp9: typing.ClassVar[str]
    alac: typing.ClassVar[str]
    flac: typing.ClassVar[str]
    p010: typing.ClassVar[str]
    heif: typing.ClassVar[str]
    srt: typing.ClassVar[str]
    ssa: typing.ClassVar[str]
    vob_sub: typing.ClassVar[str]
    pgs: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> MediaEncodingSubtypes: ...

class MediaPropertySet(winsdk.system.Object, typing.MutableMapping[winsdk.system.Guid, winsdk.system.Object]):
    size: winsdk.system.UInt32
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[winsdk.system.Guid]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: winsdk.system.Guid, value: winsdk.system.Object) -> None: ...
    def __getitem__(self, key: winsdk.system.Guid) -> winsdk.system.Object: ...
    def __delitem__(self, key: winsdk.system.Guid) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> MediaPropertySet: ...
    def __new__(cls: typing.Type[MediaPropertySet]) -> MediaPropertySet:...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[winsdk.system.Guid, winsdk.system.Object]]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[winsdk.system.Guid, winsdk.system.Object]]: ...
    def has_key(self, key: winsdk.system.Guid, /) -> winsdk.system.Boolean: ...
    def insert(self, key: winsdk.system.Guid, value: typing.Optional[winsdk.system.Object], /) -> winsdk.system.Boolean: ...
    def lookup(self, key: winsdk.system.Guid, /) -> typing.Optional[winsdk.system.Object]: ...
    def remove(self, key: winsdk.system.Guid, /) -> None: ...

class MediaRatio(winsdk.system.Object):
    numerator: winsdk.system.UInt32
    denominator: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> MediaRatio: ...

class Mpeg2ProfileIds(winsdk.system.Object):
    high: typing.ClassVar[winsdk.system.Int32]
    main: typing.ClassVar[winsdk.system.Int32]
    signal_noise_ratio_scalable: typing.ClassVar[winsdk.system.Int32]
    simple: typing.ClassVar[winsdk.system.Int32]
    spatially_scalable: typing.ClassVar[winsdk.system.Int32]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> Mpeg2ProfileIds: ...

class TimedMetadataEncodingProperties(winsdk.system.Object):
    subtype: str
    properties: typing.Optional[MediaPropertySet]
    type: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> TimedMetadataEncodingProperties: ...
    def __new__(cls: typing.Type[TimedMetadataEncodingProperties]) -> TimedMetadataEncodingProperties:...
    def copy(self) -> typing.Optional[TimedMetadataEncodingProperties]: ...
    @staticmethod
    def create_pgs() -> typing.Optional[TimedMetadataEncodingProperties]: ...
    @staticmethod
    def create_srt() -> typing.Optional[TimedMetadataEncodingProperties]: ...
    @staticmethod
    def create_ssa(format_user_data: winsdk.system.Array[winsdk.system.UInt8], /) -> typing.Optional[TimedMetadataEncodingProperties]: ...
    @staticmethod
    def create_vob_sub(format_user_data: winsdk.system.Array[winsdk.system.UInt8], /) -> typing.Optional[TimedMetadataEncodingProperties]: ...
    def get_format_user_data(self) -> winsdk.system.Array[winsdk.system.UInt8]: ...
    def set_format_user_data(self, value: winsdk.system.Array[winsdk.system.UInt8], /) -> None: ...

class VideoEncodingProperties(winsdk.system.Object):
    subtype: str
    type: str
    properties: typing.Optional[MediaPropertySet]
    width: winsdk.system.UInt32
    height: winsdk.system.UInt32
    bitrate: winsdk.system.UInt32
    pixel_aspect_ratio: typing.Optional[MediaRatio]
    frame_rate: typing.Optional[MediaRatio]
    profile_id: winsdk.system.Int32
    stereoscopic_video_packing_mode: StereoscopicVideoPackingMode
    spherical_video_frame_format: SphericalVideoFrameFormat
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> VideoEncodingProperties: ...
    def __new__(cls: typing.Type[VideoEncodingProperties]) -> VideoEncodingProperties:...
    def copy(self) -> typing.Optional[VideoEncodingProperties]: ...
    @staticmethod
    def create_h264() -> typing.Optional[VideoEncodingProperties]: ...
    @staticmethod
    def create_hevc() -> typing.Optional[VideoEncodingProperties]: ...
    @staticmethod
    def create_mpeg2() -> typing.Optional[VideoEncodingProperties]: ...
    @staticmethod
    def create_uncompressed(subtype: str, width: winsdk.system.UInt32, height: winsdk.system.UInt32, /) -> typing.Optional[VideoEncodingProperties]: ...
    def get_format_user_data(self) -> winsdk.system.Array[winsdk.system.UInt8]: ...
    def set_format_user_data(self, value: winsdk.system.Array[winsdk.system.UInt8], /) -> None: ...

class IMediaEncodingProperties(winsdk.system.Object):
    properties: typing.Optional[MediaPropertySet]
    subtype: str
    type: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> IMediaEncodingProperties: ...

