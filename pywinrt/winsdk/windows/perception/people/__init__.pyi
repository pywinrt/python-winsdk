# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.numerics
import winsdk.windows.perception
import winsdk.windows.perception.spatial
import winsdk.windows.ui.input
import winsdk.windows.ui.input.spatial

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

Self = typing.TypeVar('Self')

class HandMeshVertex:
    position: winsdk.windows.foundation.numerics.Vector3
    normal: winsdk.windows.foundation.numerics.Vector3
    def __new__(cls: typing.Type[HandMeshVertex], position: winsdk.windows.foundation.numerics.Vector3, normal: winsdk.windows.foundation.numerics.Vector3) -> HandMeshVertex: ...

class JointPose:
    orientation: winsdk.windows.foundation.numerics.Quaternion
    position: winsdk.windows.foundation.numerics.Vector3
    radius: winsdk.system.Single
    accuracy: JointPoseAccuracy
    def __new__(cls: typing.Type[JointPose], orientation: winsdk.windows.foundation.numerics.Quaternion, position: winsdk.windows.foundation.numerics.Vector3, radius: winsdk.system.Single, accuracy: JointPoseAccuracy) -> JointPose: ...

class EyesPose(winsdk.system.Object):
    gaze: typing.Optional[typing.Optional[winsdk.windows.perception.spatial.SpatialRay]]
    is_calibration_valid: winsdk.system.Boolean
    update_timestamp: typing.Optional[winsdk.windows.perception.PerceptionTimestamp]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> EyesPose: ...
    @staticmethod
    def is_supported() -> winsdk.system.Boolean: ...
    @staticmethod
    def request_access_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.ui.input.GazeInputAccessStatus]: ...

class HandMeshObserver(winsdk.system.Object):
    model_id: winsdk.system.Int32
    neutral_pose: typing.Optional[HandPose]
    neutral_pose_version: winsdk.system.Int32
    source: typing.Optional[winsdk.windows.ui.input.spatial.SpatialInteractionSource]
    triangle_index_count: winsdk.system.UInt32
    vertex_count: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> HandMeshObserver: ...
    def get_triangle_indices(self, indices: winsdk.system.Array[winsdk.system.UInt16], /) -> None: ...
    def get_vertex_state_for_pose(self, hand_pose: typing.Optional[HandPose], /) -> typing.Optional[HandMeshVertexState]: ...

class HandMeshVertexState(winsdk.system.Object):
    coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem]
    update_timestamp: typing.Optional[winsdk.windows.perception.PerceptionTimestamp]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> HandMeshVertexState: ...
    def get_vertices(self, vertices: winsdk.system.Array[HandMeshVertex], /) -> None: ...

class HandPose(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> HandPose: ...
    def get_relative_joint(self, joint: HandJointKind, reference_joint: HandJointKind, /) -> JointPose: ...
    def get_relative_joints(self, joints: winsdk.system.Array[HandJointKind], reference_joints: winsdk.system.Array[HandJointKind], joint_poses: winsdk.system.Array[JointPose], /) -> None: ...
    def try_get_joint(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], joint: HandJointKind, /) -> typing.Tuple[winsdk.system.Boolean, JointPose]: ...
    def try_get_joints(self, coordinate_system: typing.Optional[winsdk.windows.perception.spatial.SpatialCoordinateSystem], joints: winsdk.system.Array[HandJointKind], joint_poses: winsdk.system.Array[JointPose], /) -> winsdk.system.Boolean: ...

class HeadPose(winsdk.system.Object):
    forward_direction: winsdk.windows.foundation.numerics.Vector3
    position: winsdk.windows.foundation.numerics.Vector3
    up_direction: winsdk.windows.foundation.numerics.Vector3
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> HeadPose: ...

