# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Graphics.Holographic")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.foundation.numerics
except ImportError:
    pass

try:
    import winsdk.windows.graphics.directx
except ImportError:
    pass

try:
    import winsdk.windows.graphics.directx.direct3d11
except ImportError:
    pass

try:
    import winsdk.windows.perception
except ImportError:
    pass

try:
    import winsdk.windows.perception.spatial
except ImportError:
    pass

try:
    import winsdk.windows.ui.core
except ImportError:
    pass

class HolographicDepthReprojectionMethod(enum.IntEnum):
    DEPTH_REPROJECTION = 0
    AUTO_PLANAR = 1

class HolographicFramePresentResult(enum.IntEnum):
    SUCCESS = 0
    DEVICE_REMOVED = 1

class HolographicFramePresentWaitBehavior(enum.IntEnum):
    WAIT_FOR_FRAME_TO_FINISH = 0
    DO_NOT_WAIT_FOR_FRAME_TO_FINISH = 1

class HolographicReprojectionMode(enum.IntEnum):
    POSITION_AND_ORIENTATION = 0
    ORIENTATION_ONLY = 1
    DISABLED = 2

class HolographicSpaceUserPresence(enum.IntEnum):
    ABSENT = 0
    PRESENT_PASSIVE = 1
    PRESENT_ACTIVE = 2

class HolographicViewConfigurationKind(enum.IntEnum):
    DISPLAY = 0
    PHOTO_VIDEO_CAMERA = 1

_ns_module._register_HolographicDepthReprojectionMethod(HolographicDepthReprojectionMethod)
_ns_module._register_HolographicFramePresentResult(HolographicFramePresentResult)
_ns_module._register_HolographicFramePresentWaitBehavior(HolographicFramePresentWaitBehavior)
_ns_module._register_HolographicReprojectionMode(HolographicReprojectionMode)
_ns_module._register_HolographicSpaceUserPresence(HolographicSpaceUserPresence)
_ns_module._register_HolographicViewConfigurationKind(HolographicViewConfigurationKind)

HolographicAdapterId = _ns_module.HolographicAdapterId
HolographicFrameId = _ns_module.HolographicFrameId
HolographicStereoTransform = _ns_module.HolographicStereoTransform
HolographicCamera = _ns_module.HolographicCamera
HolographicCameraPose = _ns_module.HolographicCameraPose
HolographicCameraRenderingParameters = _ns_module.HolographicCameraRenderingParameters
HolographicCameraViewportParameters = _ns_module.HolographicCameraViewportParameters
HolographicDisplay = _ns_module.HolographicDisplay
HolographicFrame = _ns_module.HolographicFrame
HolographicFramePrediction = _ns_module.HolographicFramePrediction
HolographicFramePresentationMonitor = _ns_module.HolographicFramePresentationMonitor
HolographicFramePresentationReport = _ns_module.HolographicFramePresentationReport
HolographicFrameRenderingReport = _ns_module.HolographicFrameRenderingReport
HolographicFrameScanoutMonitor = _ns_module.HolographicFrameScanoutMonitor
HolographicFrameScanoutReport = _ns_module.HolographicFrameScanoutReport
HolographicQuadLayer = _ns_module.HolographicQuadLayer
HolographicQuadLayerUpdateParameters = _ns_module.HolographicQuadLayerUpdateParameters
HolographicSpace = _ns_module.HolographicSpace
HolographicSpaceCameraAddedEventArgs = _ns_module.HolographicSpaceCameraAddedEventArgs
HolographicSpaceCameraRemovedEventArgs = _ns_module.HolographicSpaceCameraRemovedEventArgs
HolographicViewConfiguration = _ns_module.HolographicViewConfiguration
