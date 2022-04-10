# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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
    import winsdk.windows.media.core
except Exception:
    pass

try:
    import winsdk.windows.storage
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

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

class AudioEncodingProperties(IMediaEncodingProperties, _winrt.Object):
    sample_rate: _winrt.UInt32
    channel_count: _winrt.UInt32
    bits_per_sample: _winrt.UInt32
    bitrate: _winrt.UInt32
    is_spatial: _winrt.Boolean
    subtype: str
    properties: typing.Optional[MediaPropertySet]
    type: str
    @staticmethod
    def _from(obj: _winrt.Object) -> AudioEncodingProperties: ...
    def __init__(self) -> None: ...
    def copy(self) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_aac(sample_rate: _winrt.UInt32, channel_count: _winrt.UInt32, bitrate: _winrt.UInt32) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_aac_adts(sample_rate: _winrt.UInt32, channel_count: _winrt.UInt32, bitrate: _winrt.UInt32) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_alac(sample_rate: _winrt.UInt32, channel_count: _winrt.UInt32, bits_per_sample: _winrt.UInt32) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_flac(sample_rate: _winrt.UInt32, channel_count: _winrt.UInt32, bits_per_sample: _winrt.UInt32) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_mp3(sample_rate: _winrt.UInt32, channel_count: _winrt.UInt32, bitrate: _winrt.UInt32) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_pcm(sample_rate: _winrt.UInt32, channel_count: _winrt.UInt32, bits_per_sample: _winrt.UInt32) -> typing.Optional[AudioEncodingProperties]: ...
    @staticmethod
    def create_wma(sample_rate: _winrt.UInt32, channel_count: _winrt.UInt32, bitrate: _winrt.UInt32) -> typing.Optional[AudioEncodingProperties]: ...
    def get_format_user_data(self, ) -> typing.List[_winrt.UInt8]: ...
    def set_format_user_data(self, value: typing.Sequence[_winrt.UInt8]) -> None: ...

class ContainerEncodingProperties(IMediaEncodingProperties, _winrt.Object):
    subtype: str
    properties: typing.Optional[MediaPropertySet]
    type: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ContainerEncodingProperties: ...
    def __init__(self) -> None: ...
    def copy(self) -> typing.Optional[ContainerEncodingProperties]: ...

class H264ProfileIds(_winrt.Object):
    baseline: _winrt.Int32
    constrained_baseline: _winrt.Int32
    extended: _winrt.Int32
    high: _winrt.Int32
    high10: _winrt.Int32
    high422: _winrt.Int32
    high444: _winrt.Int32
    main: _winrt.Int32
    multiview_high: _winrt.Int32
    stereo_high: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> H264ProfileIds: ...

class ImageEncodingProperties(IMediaEncodingProperties, _winrt.Object):
    width: _winrt.UInt32
    height: _winrt.UInt32
    subtype: str
    properties: typing.Optional[MediaPropertySet]
    type: str
    @staticmethod
    def _from(obj: _winrt.Object) -> ImageEncodingProperties: ...
    def __init__(self) -> None: ...
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
    def create_uncompressed(format: MediaPixelFormat) -> typing.Optional[ImageEncodingProperties]: ...

class MediaEncodingProfile(_winrt.Object):
    video: typing.Optional[VideoEncodingProperties]
    container: typing.Optional[ContainerEncodingProperties]
    audio: typing.Optional[AudioEncodingProperties]
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaEncodingProfile: ...
    def __init__(self) -> None: ...
    @staticmethod
    def create_alac(quality: AudioEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_avi(quality: VideoEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_flac(quality: AudioEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_from_file_async(file: typing.Optional[winsdk.windows.storage.IStorageFile]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[MediaEncodingProfile]]: ...
    @staticmethod
    def create_from_stream_async(stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]) -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[MediaEncodingProfile]]: ...
    @staticmethod
    def create_hevc(quality: VideoEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_m4a(quality: AudioEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_mp3(quality: AudioEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_mp4(quality: VideoEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_wav(quality: AudioEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_wma(quality: AudioEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    @staticmethod
    def create_wmv(quality: VideoEncodingQuality) -> typing.Optional[MediaEncodingProfile]: ...
    def get_audio_tracks(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.AudioStreamDescriptor]]: ...
    def get_timed_metadata_tracks(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.TimedMetadataStreamDescriptor]]: ...
    def get_video_tracks(self) -> typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.media.core.VideoStreamDescriptor]]: ...
    def set_audio_tracks(self, value: typing.Iterable[typing.Optional[winsdk.windows.media.core.AudioStreamDescriptor]]) -> None: ...
    def set_timed_metadata_tracks(self, value: typing.Iterable[typing.Optional[winsdk.windows.media.core.TimedMetadataStreamDescriptor]]) -> None: ...
    def set_video_tracks(self, value: typing.Iterable[typing.Optional[winsdk.windows.media.core.VideoStreamDescriptor]]) -> None: ...

class MediaEncodingSubtypes(_winrt.Object):
    asf: str
    aac: str
    aac_adts: str
    ac3: str
    amr_nb: str
    amr_wb: str
    argb32: str
    mpeg1: str
    avi: str
    bgra8: str
    bmp: str
    eac3: str
    float: str
    gif: str
    h263: str
    h264: str
    h264_es: str
    hevc: str
    hevc_es: str
    iyuv: str
    jpeg: str
    jpeg_xr: str
    mjpg: str
    mp3: str
    mpeg: str
    mpeg2: str
    mpeg4: str
    nv12: str
    pcm: str
    png: str
    rgb24: str
    rgb32: str
    tiff: str
    wave: str
    wma8: str
    wma9: str
    wmv3: str
    wvc1: str
    yuy2: str
    yv12: str
    d16: str
    l16: str
    l8: str
    vp9: str
    alac: str
    flac: str
    p010: str
    heif: str
    srt: str
    ssa: str
    vob_sub: str
    pgs: str
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaEncodingSubtypes: ...

class MediaPropertySet(winsdk.windows.foundation.collections.IMap[uuid.UUID, _winrt.Object], winsdk.windows.foundation.collections.IIterable[winsdk.windows.foundation.collections.IKeyValuePair[uuid.UUID, _winrt.Object]], _winrt.Object):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaPropertySet: ...
    def __init__(self) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[winsdk.windows.foundation.collections.IKeyValuePair[uuid.UUID, _winrt.Object]]]: ...
    def get_view(self) -> typing.Optional[winsdk.windows.foundation.collections.IMapView[uuid.UUID, _winrt.Object]]: ...
    def has_key(self, key: uuid.UUID) -> _winrt.Boolean: ...
    def insert(self, key: uuid.UUID, value: typing.Optional[_winrt.Object]) -> _winrt.Boolean: ...
    def lookup(self, key: uuid.UUID) -> typing.Optional[_winrt.Object]: ...
    def remove(self, key: uuid.UUID) -> None: ...

class MediaRatio(_winrt.Object):
    numerator: _winrt.UInt32
    denominator: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> MediaRatio: ...

class Mpeg2ProfileIds(_winrt.Object):
    high: _winrt.Int32
    main: _winrt.Int32
    signal_noise_ratio_scalable: _winrt.Int32
    simple: _winrt.Int32
    spatially_scalable: _winrt.Int32
    @staticmethod
    def _from(obj: _winrt.Object) -> Mpeg2ProfileIds: ...

class TimedMetadataEncodingProperties(IMediaEncodingProperties, _winrt.Object):
    subtype: str
    properties: typing.Optional[MediaPropertySet]
    type: str
    @staticmethod
    def _from(obj: _winrt.Object) -> TimedMetadataEncodingProperties: ...
    def __init__(self) -> None: ...
    def copy(self) -> typing.Optional[TimedMetadataEncodingProperties]: ...
    @staticmethod
    def create_pgs() -> typing.Optional[TimedMetadataEncodingProperties]: ...
    @staticmethod
    def create_srt() -> typing.Optional[TimedMetadataEncodingProperties]: ...
    @staticmethod
    def create_ssa(format_user_data: typing.Sequence[_winrt.UInt8]) -> typing.Optional[TimedMetadataEncodingProperties]: ...
    @staticmethod
    def create_vob_sub(format_user_data: typing.Sequence[_winrt.UInt8]) -> typing.Optional[TimedMetadataEncodingProperties]: ...
    def get_format_user_data(self, ) -> typing.List[_winrt.UInt8]: ...
    def set_format_user_data(self, value: typing.Sequence[_winrt.UInt8]) -> None: ...

class VideoEncodingProperties(IMediaEncodingProperties, _winrt.Object):
    subtype: str
    type: str
    properties: typing.Optional[MediaPropertySet]
    width: _winrt.UInt32
    height: _winrt.UInt32
    bitrate: _winrt.UInt32
    pixel_aspect_ratio: typing.Optional[MediaRatio]
    frame_rate: typing.Optional[MediaRatio]
    profile_id: _winrt.Int32
    stereoscopic_video_packing_mode: StereoscopicVideoPackingMode
    spherical_video_frame_format: SphericalVideoFrameFormat
    @staticmethod
    def _from(obj: _winrt.Object) -> VideoEncodingProperties: ...
    def __init__(self) -> None: ...
    def copy(self) -> typing.Optional[VideoEncodingProperties]: ...
    @staticmethod
    def create_h264() -> typing.Optional[VideoEncodingProperties]: ...
    @staticmethod
    def create_hevc() -> typing.Optional[VideoEncodingProperties]: ...
    @staticmethod
    def create_mpeg2() -> typing.Optional[VideoEncodingProperties]: ...
    @staticmethod
    def create_uncompressed(subtype: str, width: _winrt.UInt32, height: _winrt.UInt32) -> typing.Optional[VideoEncodingProperties]: ...
    def get_format_user_data(self, ) -> typing.List[_winrt.UInt8]: ...
    def set_format_user_data(self, value: typing.Sequence[_winrt.UInt8]) -> None: ...

class IMediaEncodingProperties(_winrt.Object):
    properties: typing.Optional[MediaPropertySet]
    subtype: str
    type: str
    @staticmethod
    def _from(obj: _winrt.Object) -> IMediaEncodingProperties: ...

