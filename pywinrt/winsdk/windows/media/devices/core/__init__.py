# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Media.Devices.Core")

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.foundation.numerics
except Exception:
    pass

try:
    import winsdk.windows.media.mediaproperties
except Exception:
    pass

try:
    import winsdk.windows.perception.spatial
except Exception:
    pass

class FrameFlashMode(enum.IntEnum):
    DISABLE = 0
    ENABLE = 1
    GLOBAL = 2

CameraIntrinsics = _ns_module.CameraIntrinsics
DepthCorrelatedCoordinateMapper = _ns_module.DepthCorrelatedCoordinateMapper
FrameControlCapabilities = _ns_module.FrameControlCapabilities
FrameController = _ns_module.FrameController
FrameExposureCapabilities = _ns_module.FrameExposureCapabilities
FrameExposureCompensationCapabilities = _ns_module.FrameExposureCompensationCapabilities
FrameExposureCompensationControl = _ns_module.FrameExposureCompensationControl
FrameExposureControl = _ns_module.FrameExposureControl
FrameFlashCapabilities = _ns_module.FrameFlashCapabilities
FrameFlashControl = _ns_module.FrameFlashControl
FrameFocusCapabilities = _ns_module.FrameFocusCapabilities
FrameFocusControl = _ns_module.FrameFocusControl
FrameIsoSpeedCapabilities = _ns_module.FrameIsoSpeedCapabilities
FrameIsoSpeedControl = _ns_module.FrameIsoSpeedControl
VariablePhotoSequenceController = _ns_module.VariablePhotoSequenceController
