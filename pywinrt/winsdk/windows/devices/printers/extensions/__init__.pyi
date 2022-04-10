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

class Print3DWorkflowDetail(enum.IntEnum):
    UNKNOWN = 0
    MODEL_EXCEEDS_PRINT_BED = 1
    UPLOAD_FAILED = 2
    INVALID_MATERIAL_SELECTION = 3
    INVALID_MODEL = 4
    MODEL_NOT_MANIFOLD = 5
    INVALID_PRINT_TICKET = 6

class Print3DWorkflowStatus(enum.IntEnum):
    ABANDONED = 0
    CANCELED = 1
    FAILED = 2
    SLICING = 3
    SUBMITTED = 4

class Print3DWorkflow(_winrt.Object):
    is_print_ready: _winrt.Boolean
    device_i_d: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Print3DWorkflow: ...
    def get_print_model_package(self) -> typing.Optional[_winrt.Object]: ...
    def add_print_requested(self, event_handler: winsdk.windows.foundation.TypedEventHandler[Print3DWorkflow, Print3DWorkflowPrintRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_print_requested(self, event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_printer_changed(self, event_handler: winsdk.windows.foundation.TypedEventHandler[Print3DWorkflow, Print3DWorkflowPrinterChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_printer_changed(self, event_cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class Print3DWorkflowPrintRequestedEventArgs(_winrt.Object):
    status: Print3DWorkflowStatus
    @staticmethod
    def _from(obj: _winrt.Object) -> Print3DWorkflowPrintRequestedEventArgs: ...
    def set_extended_status(self, value: Print3DWorkflowDetail) -> None: ...
    def set_source(self, source: typing.Optional[_winrt.Object]) -> None: ...
    def set_source_changed(self, value: _winrt.Boolean) -> None: ...

class Print3DWorkflowPrinterChangedEventArgs(_winrt.Object):
    new_device_id: str
    @staticmethod
    def _from(obj: _winrt.Object) -> Print3DWorkflowPrinterChangedEventArgs: ...

