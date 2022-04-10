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
    import winsdk.windows.foundation.numerics
except Exception:
    pass

try:
    import winsdk.windows.perception
except Exception:
    pass

try:
    import winsdk.windows.perception.spatial
except Exception:
    pass

try:
    import winsdk.windows.ui.input
except Exception:
    pass

try:
    import winsdk.windows.ui.input.spatial
except Exception:
    pass

class HandJointKind(enum.IntEnum):
    PALM = 0
    WRIST = 1
    THUMB_METACARPAL = 2
    THUMB_PROXIMAL = 3
    THUMB_DISTAL = 4
    THUMB_TIP = 5
    INDEX_METACARPAL = 6
    INDEX_PROXIMAL = 7
    INDEX_INTERMEDIATE = 8
    INDEX_DISTAL = 9
    INDEX_TIP = 10
    MIDDLE_METACARPAL = 11
    MIDDLE_PROXIMAL = 12
    MIDDLE_INTERMEDIATE = 13
    MIDDLE_DISTAL = 14
    MIDDLE_TIP = 15
    RING_METACARPAL = 16
    RING_PROXIMAL = 17
    RING_INTERMEDIATE = 18
    RING_DISTAL = 19
    RING_TIP = 20
    LITTLE_METACARPAL = 21
    LITTLE_PROXIMAL = 22
    LITTLE_INTERMEDIATE = 23
    LITTLE_DISTAL = 24
    LITTLE_TIP = 25

class JointPoseAccuracy(enum.IntEnum):
    HIGH = 0
    APPROXIMATE = 1

class HandMeshVertex:
    position: winsdk.windows.foundation.numerics.Vector3
    normal: winsdk.windows.foundation.numerics.Vector3
    def __init__(self, position: winsdk.windows.foundation.numerics.Vector3, normal: winsdk.windows.foundation.numerics.Vector3) -> None: ...

class JointPose:
    orientation: winsdk.windows.foundation.numerics.Quaternion
    position: winsdk.windows.foundation.numerics.Vector3
    radius: _winrt.Single
    accuracy: JointPoseAccuracy
    def __init__(self, orientation: winsdk.windows.foundation.numerics.Quaternion, position: winsdk.windows.foundation.numerics.Vector3, radius: _winrt.Single, accuracy: JointPoseAccuracy) -> None: ...

class EyesPose(_winrt.Object):
    gaze: typing.Optional[typing.Optional[winsdk.windows.perception.spatial.SpatialRay]]
    is_calibration_valid: _winrt.Boolean
    update_timestamp: typing.Optional[winsdk.windows.perception.PerceptionTimestamp]
    @staticmethod
    def _from(obj: _winrt.Object) -> EyesPose: ...
    @staticmethod
    def is_supported() -> _winrt.Boolean: ...
    @staticmethod
    def request_access_async() -> typing.Optional[winsdk.windows.foundation.IAsyncOperation[winsdk.windows.ui.input.GazeInputAccessStatus]]: ...

class HandMeshObserver(_winrt.Object):
    model_id: _winrt.Int32
    neutral_pose: typing.Optional[HandPose]
    neutral_pose_version: _winrt.Int32
    source: typing.Optional[winsdk.windows.ui.input.spatial.SpatialInteractionSource]
    triangle_index_count: _winrt.UInt32
    vertex_count: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> HandMeshObserver: ...
    def get_triangle_indices(self, indices_size: _winrt.UInt32) -> typing.List[_winrt.UInt16]: ...
    def get_vertex_state_for_pose(self, hand_pose: typing.Optional[HandPose]) -> typing.Optional[HandMeshVertexState]: ...

class HandMeshVertexState(_winrt.Object):
    coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]
    update_timestamp: typing.Optional[winsdk.windows.perception.PerceptionTimestamp]
    @staticmethod
    def _from(obj: _winrt.Object) -> HandMeshVertexState: ...
    def get_vertices(self, vertices_size: _winrt.UInt32) -> typing.List[HandMeshVertex]: ...

class HandPose(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> HandPose: ...
    def get_relative_joint(self, joint: HandJointKind, reference_joint: HandJointKind) -> JointPose: ...
    def get_relative_joints(self, joints: typing.Sequence[HandJointKind], reference_joints: typing.Sequence[HandJointKind], joint_poses_size: _winrt.UInt32) -> typing.List[JointPose]: ...
    def try_get_joint(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], joint: HandJointKind) -> typing.Tuple[_winrt.Boolean, JointPose]: ...
    def try_get_joints(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], joints: typing.Sequence[HandJointKind], joint_poses_size: _winrt.UInt32) -> typing.Tuple[_winrt.Boolean, typing.List[JointPose]]: ...

class HeadPose(_winrt.Object):
    forward_direction: winsdk.windows.foundation.numerics.Vector3
    position: winsdk.windows.foundation.numerics.Vector3
    up_direction: winsdk.windows.foundation.numerics.Vector3
    @staticmethod
    def _from(obj: _winrt.Object) -> HeadPose: ...

