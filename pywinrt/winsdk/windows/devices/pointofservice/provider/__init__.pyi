# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.pointofservice
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics.imaging
import winsdk.windows.storage.streams

class BarcodeScannerTriggerState(enum.IntEnum):
    RELEASED = 0
    PRESSED = 1

Self = typing.TypeVar('Self')

class BarcodeScannerDisableScannerRequest(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerDisableScannerRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32, failed_reason_description: str) -> winsdk.windows.foundation.IAsyncAction: ...

class BarcodeScannerDisableScannerRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[BarcodeScannerDisableScannerRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerDisableScannerRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerEnableScannerRequest(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerEnableScannerRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32, failed_reason_description: str) -> winsdk.windows.foundation.IAsyncAction: ...

class BarcodeScannerEnableScannerRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[BarcodeScannerEnableScannerRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerEnableScannerRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerFrameReader(winsdk.system.Object):
    connection: typing.Optional[BarcodeScannerProviderConnection]
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerFrameReader: ...
    def close(self) -> None: ...
    def start_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def stop_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def try_acquire_latest_frame_async(self) -> winsdk.windows.foundation.IAsyncOperation[BarcodeScannerVideoFrame]: ...
    def add_frame_arrived(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerFrameReader, BarcodeScannerFrameReaderFrameArrivedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_frame_arrived(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class BarcodeScannerFrameReaderFrameArrivedEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerFrameReaderFrameArrivedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerGetSymbologyAttributesRequest(winsdk.system.Object):
    symbology: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerGetSymbologyAttributesRequest: ...
    def report_completed_async(self, attributes: typing.Optional[winsdk.windows.devices.pointofservice.BarcodeSymbologyAttributes]) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32, failed_reason_description: str) -> winsdk.windows.foundation.IAsyncAction: ...

class BarcodeScannerGetSymbologyAttributesRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[BarcodeScannerGetSymbologyAttributesRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerGetSymbologyAttributesRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerHideVideoPreviewRequest(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerHideVideoPreviewRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32, failed_reason_description: str) -> winsdk.windows.foundation.IAsyncAction: ...

class BarcodeScannerHideVideoPreviewRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[BarcodeScannerHideVideoPreviewRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerHideVideoPreviewRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerProviderConnection(winsdk.system.Object):
    version: str
    name: str
    company_name: str
    id: str
    supported_symbologies: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.system.UInt32]]
    video_device_id: str
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerProviderConnection: ...
    def close(self) -> None: ...
    @typing.overload
    def create_frame_reader_async(self) -> winsdk.windows.foundation.IAsyncOperation[BarcodeScannerFrameReader]: ...
    @typing.overload
    def create_frame_reader_async(self, preferred_format: winsdk.windows.graphics.imaging.BitmapPixelFormat) -> winsdk.windows.foundation.IAsyncOperation[BarcodeScannerFrameReader]: ...
    @typing.overload
    def create_frame_reader_async(self, preferred_format: winsdk.windows.graphics.imaging.BitmapPixelFormat, preferred_size: winsdk.windows.graphics.imaging.BitmapSize) -> winsdk.windows.foundation.IAsyncOperation[BarcodeScannerFrameReader]: ...
    @typing.overload
    def report_error_async(self, error_data: typing.Optional[winsdk.windows.devices.pointofservice.UnifiedPosErrorData]) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_error_async(self, error_data: typing.Optional[winsdk.windows.devices.pointofservice.UnifiedPosErrorData], is_retriable: winsdk.system.Boolean, scan_report: typing.Optional[winsdk.windows.devices.pointofservice.BarcodeScannerReport]) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_scanned_data_async(self, report: typing.Optional[winsdk.windows.devices.pointofservice.BarcodeScannerReport]) -> winsdk.windows.foundation.IAsyncAction: ...
    def report_trigger_state_async(self, state: BarcodeScannerTriggerState) -> winsdk.windows.foundation.IAsyncAction: ...
    def start(self) -> None: ...
    def add_disable_scanner_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerProviderConnection, BarcodeScannerDisableScannerRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_disable_scanner_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_enable_scanner_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerProviderConnection, BarcodeScannerEnableScannerRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enable_scanner_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_get_barcode_symbology_attributes_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerProviderConnection, BarcodeScannerGetSymbologyAttributesRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_get_barcode_symbology_attributes_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_hide_video_preview_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerProviderConnection, BarcodeScannerHideVideoPreviewRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_hide_video_preview_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_set_active_symbologies_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerProviderConnection, BarcodeScannerSetActiveSymbologiesRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_set_active_symbologies_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_set_barcode_symbology_attributes_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerProviderConnection, BarcodeScannerSetSymbologyAttributesRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_set_barcode_symbology_attributes_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_start_software_trigger_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerProviderConnection, BarcodeScannerStartSoftwareTriggerRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_start_software_trigger_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stop_software_trigger_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[BarcodeScannerProviderConnection, BarcodeScannerStopSoftwareTriggerRequestEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stop_software_trigger_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class BarcodeScannerProviderTriggerDetails(winsdk.system.Object):
    connection: typing.Optional[BarcodeScannerProviderConnection]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerProviderTriggerDetails: ...

class BarcodeScannerSetActiveSymbologiesRequest(winsdk.system.Object):
    symbologies: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.system.UInt32]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerSetActiveSymbologiesRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32, failed_reason_description: str) -> winsdk.windows.foundation.IAsyncAction: ...

class BarcodeScannerSetActiveSymbologiesRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[BarcodeScannerSetActiveSymbologiesRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerSetActiveSymbologiesRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerSetSymbologyAttributesRequest(winsdk.system.Object):
    attributes: typing.Optional[winsdk.windows.devices.pointofservice.BarcodeSymbologyAttributes]
    symbology: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerSetSymbologyAttributesRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32, failed_reason_description: str) -> winsdk.windows.foundation.IAsyncAction: ...

class BarcodeScannerSetSymbologyAttributesRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[BarcodeScannerSetSymbologyAttributesRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerSetSymbologyAttributesRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerStartSoftwareTriggerRequest(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerStartSoftwareTriggerRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32, failed_reason_description: str) -> winsdk.windows.foundation.IAsyncAction: ...

class BarcodeScannerStartSoftwareTriggerRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[BarcodeScannerStartSoftwareTriggerRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerStartSoftwareTriggerRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerStopSoftwareTriggerRequest(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerStopSoftwareTriggerRequest: ...
    def report_completed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def report_failed_async(self, reason: winsdk.system.Int32, failed_reason_description: str) -> winsdk.windows.foundation.IAsyncAction: ...

class BarcodeScannerStopSoftwareTriggerRequestEventArgs(winsdk.system.Object):
    request: typing.Optional[BarcodeScannerStopSoftwareTriggerRequest]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerStopSoftwareTriggerRequestEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class BarcodeScannerVideoFrame(winsdk.system.Object):
    format: winsdk.windows.graphics.imaging.BitmapPixelFormat
    height: winsdk.system.UInt32
    pixel_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    width: winsdk.system.UInt32
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeScannerVideoFrame: ...
    def close(self) -> None: ...

class BarcodeSymbologyAttributesBuilder(winsdk.system.Object):
    is_decode_length_supported: winsdk.system.Boolean
    is_check_digit_validation_supported: winsdk.system.Boolean
    is_check_digit_transmission_supported: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> BarcodeSymbologyAttributesBuilder: ...
    def __new__(cls: typing.Type[BarcodeSymbologyAttributesBuilder]) -> BarcodeSymbologyAttributesBuilder:...
    def create_attributes(self) -> typing.Optional[winsdk.windows.devices.pointofservice.BarcodeSymbologyAttributes]: ...

