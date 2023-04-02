# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation.collections

class PlatformDiagnosticActionState(enum.IntEnum):
    SUCCESS = 0
    FREE_NETWORK_NOT_AVAILABLE = 1
    A_C_POWER_NOT_AVAILABLE = 2

class PlatformDiagnosticEscalationType(enum.IntEnum):
    ON_COMPLETION = 0
    ON_FAILURE = 1

class PlatformDiagnosticEventBufferLatencies(enum.IntFlag):
    NORMAL = 0x1
    COST_DEFERRED = 0x2
    REALTIME = 0x4

class PlatformDiagnosticTracePriority(enum.IntEnum):
    NORMAL = 0
    USER_ELEVATED = 1

class PlatformDiagnosticTraceSlotState(enum.IntEnum):
    NOT_RUNNING = 0
    RUNNING = 1
    THROTTLED = 2

class PlatformDiagnosticTraceSlotType(enum.IntEnum):
    ALTERNATIVE = 0
    ALWAYS_ON = 1
    MINI = 2

Self = typing.TypeVar('Self')

class PlatformDiagnosticActions(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlatformDiagnosticActions: ...
    @staticmethod
    def download_latest_settings_for_namespace(partner: str, feature: str, is_scenario_namespace: winsdk.system.Boolean, download_over_costed_network: winsdk.system.Boolean, download_over_battery: winsdk.system.Boolean) -> PlatformDiagnosticActionState: ...
    @staticmethod
    def force_upload(latency: PlatformDiagnosticEventBufferLatencies, upload_over_costed_network: winsdk.system.Boolean, upload_over_battery: winsdk.system.Boolean) -> PlatformDiagnosticActionState: ...
    @staticmethod
    def get_active_scenario_list() -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.system.Guid]]: ...
    @staticmethod
    def get_active_trace_runtime(slot_type: PlatformDiagnosticTraceSlotType) -> typing.Optional[PlatformDiagnosticTraceRuntimeInfo]: ...
    @staticmethod
    def get_known_trace_list(slot_type: PlatformDiagnosticTraceSlotType) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[PlatformDiagnosticTraceInfo]]: ...
    @staticmethod
    def is_scenario_enabled(scenario_id: winsdk.system.Guid) -> winsdk.system.Boolean: ...
    @staticmethod
    def is_trace_running(slot_type: PlatformDiagnosticTraceSlotType, scenario_id: winsdk.system.Guid, trace_profile_hash: winsdk.system.UInt64) -> PlatformDiagnosticTraceSlotState: ...
    @staticmethod
    def try_escalate_scenario(scenario_id: winsdk.system.Guid, escalation_type: PlatformDiagnosticEscalationType, output_directory: str, timestamp_output_directory: winsdk.system.Boolean, force_escalation_upload: winsdk.system.Boolean, triggers: winsdk.windows.foundation.collections.IMapView[str, str]) -> winsdk.system.Boolean: ...

class PlatformDiagnosticTraceInfo(winsdk.system.Object):
    is_auto_logger: winsdk.system.Boolean
    is_exclusive: winsdk.system.Boolean
    max_trace_duration_file_time: winsdk.system.Int64
    priority: PlatformDiagnosticTracePriority
    profile_hash: winsdk.system.UInt64
    scenario_id: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlatformDiagnosticTraceInfo: ...

class PlatformDiagnosticTraceRuntimeInfo(winsdk.system.Object):
    etw_runtime_file_time: winsdk.system.Int64
    runtime_file_time: winsdk.system.Int64
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PlatformDiagnosticTraceRuntimeInfo: ...

