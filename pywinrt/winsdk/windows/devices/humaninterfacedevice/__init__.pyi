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
    import winsdk.windows.storage
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class HidCollectionType(enum.IntEnum):
    PHYSICAL = 0
    APPLICATION = 1
    LOGICAL = 2
    REPORT = 3
    NAMED_ARRAY = 4
    USAGE_SWITCH = 5
    USAGE_MODIFIER = 6
    OTHER = 7

class HidReportType(enum.IntEnum):
    INPUT = 0
    OUTPUT = 1
    FEATURE = 2

class HidBooleanControl(_winrt.Object, interfaces=[]):
    is_active: _winrt.Boolean
    control_description: typing.Optional[HidBooleanControlDescription]
    id: _winrt.UInt32
    usage_id: _winrt.UInt16
    usage_page: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> HidBooleanControl: ...

class HidBooleanControlDescription(_winrt.Object, interfaces=[]):
    id: _winrt.UInt32
    parent_collections: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HidCollection]]
    report_id: _winrt.UInt16
    report_type: HidReportType
    usage_id: _winrt.UInt16
    usage_page: _winrt.UInt16
    is_absolute: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> HidBooleanControlDescription: ...

class HidCollection(_winrt.Object, interfaces=[]):
    id: _winrt.UInt32
    type: HidCollectionType
    usage_id: _winrt.UInt32
    usage_page: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> HidCollection: ...

class HidDevice(_winrt.Object, interfaces=[winsdk.windows.foundation.IClosable]):
    product_id: _winrt.UInt16
    usage_id: _winrt.UInt16
    usage_page: _winrt.UInt16
    vendor_id: _winrt.UInt16
    version: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> HidDevice: ...
    def close(self) -> None: ...
    @typing.overload
    def create_feature_report(self) -> typing.Optional[HidFeatureReport]: ...
    @typing.overload
    def create_feature_report(self, report_id: _winrt.UInt16) -> typing.Optional[HidFeatureReport]: ...
    @typing.overload
    def create_output_report(self) -> typing.Optional[HidOutputReport]: ...
    @typing.overload
    def create_output_report(self, report_id: _winrt.UInt16) -> typing.Optional[HidOutputReport]: ...
    @staticmethod
    def from_id_async(device_id: str, access_mode: winsdk.windows.storage.FileAccessMode) -> winsdk.windows.foundation.IAsyncOperation[HidDevice]: ...
    def get_boolean_control_descriptions(self, report_type: HidReportType, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[HidBooleanControlDescription]]: ...
    @typing.overload
    @staticmethod
    def get_device_selector(usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(usage_page: _winrt.UInt16, usage_id: _winrt.UInt16, vendor_id: _winrt.UInt16, product_id: _winrt.UInt16) -> str: ...
    @typing.overload
    def get_feature_report_async(self) -> winsdk.windows.foundation.IAsyncOperation[HidFeatureReport]: ...
    @typing.overload
    def get_feature_report_async(self, report_id: _winrt.UInt16) -> winsdk.windows.foundation.IAsyncOperation[HidFeatureReport]: ...
    @typing.overload
    def get_input_report_async(self) -> winsdk.windows.foundation.IAsyncOperation[HidInputReport]: ...
    @typing.overload
    def get_input_report_async(self, report_id: _winrt.UInt16) -> winsdk.windows.foundation.IAsyncOperation[HidInputReport]: ...
    def get_numeric_control_descriptions(self, report_type: HidReportType, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[HidNumericControlDescription]]: ...
    def send_feature_report_async(self, feature_report: typing.Optional[HidFeatureReport]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.UInt32]: ...
    def send_output_report_async(self, output_report: typing.Optional[HidOutputReport]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.UInt32]: ...
    def add_input_report_received(self, report_handler: winsdk.windows.foundation.TypedEventHandler[HidDevice, HidInputReportReceivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_input_report_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class HidFeatureReport(_winrt.Object, interfaces=[]):
    data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    id: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> HidFeatureReport: ...
    def get_boolean_control(self, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[HidBooleanControl]: ...
    def get_boolean_control_by_description(self, control_description: typing.Optional[HidBooleanControlDescription]) -> typing.Optional[HidBooleanControl]: ...
    def get_numeric_control(self, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[HidNumericControl]: ...
    def get_numeric_control_by_description(self, control_description: typing.Optional[HidNumericControlDescription]) -> typing.Optional[HidNumericControl]: ...

class HidInputReport(_winrt.Object, interfaces=[]):
    activated_boolean_controls: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HidBooleanControl]]
    data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    id: _winrt.UInt16
    transitioned_boolean_controls: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HidBooleanControl]]
    @staticmethod
    def _from(obj: _winrt.Object) -> HidInputReport: ...
    def get_boolean_control(self, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[HidBooleanControl]: ...
    def get_boolean_control_by_description(self, control_description: typing.Optional[HidBooleanControlDescription]) -> typing.Optional[HidBooleanControl]: ...
    def get_numeric_control(self, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[HidNumericControl]: ...
    def get_numeric_control_by_description(self, control_description: typing.Optional[HidNumericControlDescription]) -> typing.Optional[HidNumericControl]: ...

class HidInputReportReceivedEventArgs(_winrt.Object, interfaces=[]):
    report: typing.Optional[HidInputReport]
    @staticmethod
    def _from(obj: _winrt.Object) -> HidInputReportReceivedEventArgs: ...

class HidNumericControl(_winrt.Object, interfaces=[]):
    value: _winrt.Int64
    scaled_value: _winrt.Int64
    control_description: typing.Optional[HidNumericControlDescription]
    id: _winrt.UInt32
    is_grouped: _winrt.Boolean
    usage_id: _winrt.UInt16
    usage_page: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> HidNumericControl: ...

class HidNumericControlDescription(_winrt.Object, interfaces=[]):
    has_null: _winrt.Boolean
    id: _winrt.UInt32
    is_absolute: _winrt.Boolean
    logical_maximum: _winrt.Int32
    logical_minimum: _winrt.Int32
    parent_collections: typing.Optional[winsdk.windows.foundation.collections.IVectorView[HidCollection]]
    physical_maximum: _winrt.Int32
    physical_minimum: _winrt.Int32
    report_count: _winrt.UInt32
    report_id: _winrt.UInt16
    report_size: _winrt.UInt32
    report_type: HidReportType
    unit: _winrt.UInt32
    unit_exponent: _winrt.UInt32
    usage_id: _winrt.UInt16
    usage_page: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> HidNumericControlDescription: ...

class HidOutputReport(_winrt.Object, interfaces=[]):
    data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    id: _winrt.UInt16
    @staticmethod
    def _from(obj: _winrt.Object) -> HidOutputReport: ...
    def get_boolean_control(self, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[HidBooleanControl]: ...
    def get_boolean_control_by_description(self, control_description: typing.Optional[HidBooleanControlDescription]) -> typing.Optional[HidBooleanControl]: ...
    def get_numeric_control(self, usage_page: _winrt.UInt16, usage_id: _winrt.UInt16) -> typing.Optional[HidNumericControl]: ...
    def get_numeric_control_by_description(self, control_description: typing.Optional[HidNumericControlDescription]) -> typing.Optional[HidNumericControl]: ...

