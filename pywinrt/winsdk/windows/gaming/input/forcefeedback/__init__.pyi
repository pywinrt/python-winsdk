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
    import winsdk.windows.foundation.numerics
except Exception:
    pass

class ConditionForceEffectKind(enum.IntEnum):
    SPRING = 0
    DAMPER = 1
    INERTIA = 2
    FRICTION = 3

class ForceFeedbackEffectAxes(enum.IntFlag):
    NONE = 0
    X = 0x1
    Y = 0x2
    Z = 0x4

class ForceFeedbackEffectState(enum.IntEnum):
    STOPPED = 0
    RUNNING = 1
    PAUSED = 2
    FAULTED = 3

class ForceFeedbackLoadEffectResult(enum.IntEnum):
    SUCCEEDED = 0
    EFFECT_STORAGE_FULL = 1
    EFFECT_NOT_SUPPORTED = 2

class PeriodicForceEffectKind(enum.IntEnum):
    SQUARE_WAVE = 0
    SINE_WAVE = 1
    TRIANGLE_WAVE = 2
    SAWTOOTH_WAVE_UP = 3
    SAWTOOTH_WAVE_DOWN = 4

class ConditionForceEffect(_winrt.Object, interfaces=[IForceFeedbackEffect]):
    kind: ConditionForceEffectKind
    gain: _winrt.Double
    state: ForceFeedbackEffectState
    @staticmethod
    def _from(obj: _winrt.Object) -> ConditionForceEffect: ...
    def __init__(self, effect_kind: ConditionForceEffectKind) -> None: ...
    def set_parameters(self, direction: winsdk.windows.foundation.numerics.Vector3, positive_coefficient: _winrt.Single, negative_coefficient: _winrt.Single, max_positive_magnitude: _winrt.Single, max_negative_magnitude: _winrt.Single, dead_zone: _winrt.Single, bias: _winrt.Single) -> None: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

class ConstantForceEffect(_winrt.Object, interfaces=[IForceFeedbackEffect]):
    gain: _winrt.Double
    state: ForceFeedbackEffectState
    @staticmethod
    def _from(obj: _winrt.Object) -> ConstantForceEffect: ...
    def __init__(self) -> None: ...
    def set_parameters(self, vector: winsdk.windows.foundation.numerics.Vector3, duration: winsdk.windows.foundation.TimeSpan) -> None: ...
    def set_parameters_with_envelope(self, vector: winsdk.windows.foundation.numerics.Vector3, attack_gain: _winrt.Single, sustain_gain: _winrt.Single, release_gain: _winrt.Single, start_delay: winsdk.windows.foundation.TimeSpan, attack_duration: winsdk.windows.foundation.TimeSpan, sustain_duration: winsdk.windows.foundation.TimeSpan, release_duration: winsdk.windows.foundation.TimeSpan, repeat_count: _winrt.UInt32) -> None: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

class ForceFeedbackMotor(_winrt.Object, interfaces=[]):
    master_gain: _winrt.Double
    are_effects_paused: _winrt.Boolean
    is_enabled: _winrt.Boolean
    supported_axes: ForceFeedbackEffectAxes
    @staticmethod
    def _from(obj: _winrt.Object) -> ForceFeedbackMotor: ...
    def load_effect_async(self, effect: typing.Optional[IForceFeedbackEffect]) -> winsdk.windows.foundation.IAsyncOperation[ForceFeedbackLoadEffectResult]: ...
    def pause_all_effects(self) -> None: ...
    def resume_all_effects(self) -> None: ...
    def stop_all_effects(self) -> None: ...
    def try_disable_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def try_enable_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def try_reset_async(self) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...
    def try_unload_effect_async(self, effect: typing.Optional[IForceFeedbackEffect]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.Boolean]: ...

class PeriodicForceEffect(_winrt.Object, interfaces=[IForceFeedbackEffect]):
    gain: _winrt.Double
    state: ForceFeedbackEffectState
    kind: PeriodicForceEffectKind
    @staticmethod
    def _from(obj: _winrt.Object) -> PeriodicForceEffect: ...
    def __init__(self, effect_kind: PeriodicForceEffectKind) -> None: ...
    def set_parameters(self, vector: winsdk.windows.foundation.numerics.Vector3, frequency: _winrt.Single, phase: _winrt.Single, bias: _winrt.Single, duration: winsdk.windows.foundation.TimeSpan) -> None: ...
    def set_parameters_with_envelope(self, vector: winsdk.windows.foundation.numerics.Vector3, frequency: _winrt.Single, phase: _winrt.Single, bias: _winrt.Single, attack_gain: _winrt.Single, sustain_gain: _winrt.Single, release_gain: _winrt.Single, start_delay: winsdk.windows.foundation.TimeSpan, attack_duration: winsdk.windows.foundation.TimeSpan, sustain_duration: winsdk.windows.foundation.TimeSpan, release_duration: winsdk.windows.foundation.TimeSpan, repeat_count: _winrt.UInt32) -> None: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

class RampForceEffect(_winrt.Object, interfaces=[IForceFeedbackEffect]):
    gain: _winrt.Double
    state: ForceFeedbackEffectState
    @staticmethod
    def _from(obj: _winrt.Object) -> RampForceEffect: ...
    def __init__(self) -> None: ...
    def set_parameters(self, start_vector: winsdk.windows.foundation.numerics.Vector3, end_vector: winsdk.windows.foundation.numerics.Vector3, duration: winsdk.windows.foundation.TimeSpan) -> None: ...
    def set_parameters_with_envelope(self, start_vector: winsdk.windows.foundation.numerics.Vector3, end_vector: winsdk.windows.foundation.numerics.Vector3, attack_gain: _winrt.Single, sustain_gain: _winrt.Single, release_gain: _winrt.Single, start_delay: winsdk.windows.foundation.TimeSpan, attack_duration: winsdk.windows.foundation.TimeSpan, sustain_duration: winsdk.windows.foundation.TimeSpan, release_duration: winsdk.windows.foundation.TimeSpan, repeat_count: _winrt.UInt32) -> None: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

class IForceFeedbackEffect(typing.Protocol):
    gain: _winrt.Double
    state: ForceFeedbackEffectState
    @staticmethod
    def _from(obj: _winrt.Object) -> IForceFeedbackEffect: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...

