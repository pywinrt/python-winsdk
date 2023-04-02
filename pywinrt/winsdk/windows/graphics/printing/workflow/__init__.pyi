# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.activation
import winsdk.windows.devices.printers
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics.printing.printticket
import winsdk.windows.storage
import winsdk.windows.storage.streams
import winsdk.windows.system

class PdlConversionHostBasedProcessingOperations(enum.IntFlag):
    NONE = 0
    PAGE_ROTATION = 0x1
    PAGE_ORDERING = 0x2
    COPIES = 0x4
    BLANK_PAGE_INSERTION = 0x8
    ALL = 0xffffffff

class PrintWorkflowAttributesMergePolicy(enum.IntEnum):
    MERGE_PREFER_PRINT_TICKET_ON_CONFLICT = 0
    MERGE_PREFER_PSA_ON_CONFLICT = 1
    DO_NOT_MERGE_WITH_PRINT_TICKET = 2

class PrintWorkflowJobAbortReason(enum.IntEnum):
    JOB_FAILED = 0
    USER_CANCELED = 1

class PrintWorkflowPdlConversionType(enum.IntEnum):
    XPS_TO_PDF = 0
    XPS_TO_PWGR = 1
    XPS_TO_PCLM = 2

class PrintWorkflowPrinterJobStatus(enum.IntEnum):
    ERROR = 0
    ABORTED = 1
    IN_PROGRESS = 2
    COMPLETED = 3

class PrintWorkflowSessionStatus(enum.IntEnum):
    STARTED = 0
    COMPLETED = 1
    ABORTED = 2
    CLOSED = 3
    PDL_DATA_AVAILABLE_FOR_MODIFICATION = 4

class PrintWorkflowSubmittedStatus(enum.IntEnum):
    SUCCEEDED = 0
    CANCELED = 1
    FAILED = 2

class PrintWorkflowUICompletionStatus(enum.IntEnum):
    COMPLETED = 0
    LAUNCH_FAILED = 1
    JOB_FAILED = 2
    USER_CANCELED = 3

Self = typing.TypeVar('Self')

class PrintWorkflowBackgroundSession(winsdk.system.Object):
    status: PrintWorkflowSessionStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowBackgroundSession: ...
    def start(self) -> None: ...
    def add_setup_requested(self, setup_event_handler: winsdk.windows.foundation.TypedEventHandler[PrintWorkflowBackgroundSession, PrintWorkflowBackgroundSetupRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_setup_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_submitted(self, submitted_event_handler: winsdk.windows.foundation.TypedEventHandler[PrintWorkflowBackgroundSession, PrintWorkflowSubmittedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_submitted(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PrintWorkflowBackgroundSetupRequestedEventArgs(winsdk.system.Object):
    configuration: typing.Optional[PrintWorkflowConfiguration]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowBackgroundSetupRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def get_user_print_ticket_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket]: ...
    def set_requires_u_i(self) -> None: ...

class PrintWorkflowConfiguration(winsdk.system.Object):
    job_title: str
    session_id: str
    source_app_display_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowConfiguration: ...
    def abort_print_flow(self, reason: PrintWorkflowJobAbortReason) -> None: ...

class PrintWorkflowForegroundSession(winsdk.system.Object):
    status: PrintWorkflowSessionStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowForegroundSession: ...
    def start(self) -> None: ...
    def add_setup_requested(self, setup_event_handler: winsdk.windows.foundation.TypedEventHandler[PrintWorkflowForegroundSession, PrintWorkflowForegroundSetupRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_setup_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_xps_data_available(self, xps_data_available_event_handler: winsdk.windows.foundation.TypedEventHandler[PrintWorkflowForegroundSession, PrintWorkflowXpsDataAvailableEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_xps_data_available(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PrintWorkflowForegroundSetupRequestedEventArgs(winsdk.system.Object):
    configuration: typing.Optional[PrintWorkflowConfiguration]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowForegroundSetupRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def get_user_print_ticket_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket]: ...

class PrintWorkflowJobActivatedEventArgs(winsdk.system.Object):
    kind: winsdk.windows.applicationmodel.activation.ActivationKind
    previous_execution_state: winsdk.windows.applicationmodel.activation.ApplicationExecutionState
    splash_screen: typing.Optional[winsdk.windows.applicationmodel.activation.SplashScreen]
    user: typing.Optional[winsdk.windows.system.User]
    session: typing.Optional[PrintWorkflowJobUISession]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowJobActivatedEventArgs: ...

class PrintWorkflowJobBackgroundSession(winsdk.system.Object):
    status: PrintWorkflowSessionStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowJobBackgroundSession: ...
    def start(self) -> None: ...
    def add_job_starting(self, handler: winsdk.windows.foundation.TypedEventHandler[PrintWorkflowJobBackgroundSession, PrintWorkflowJobStartingEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_job_starting(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pdl_modification_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[PrintWorkflowJobBackgroundSession, PrintWorkflowPdlModificationRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pdl_modification_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PrintWorkflowJobNotificationEventArgs(winsdk.system.Object):
    configuration: typing.Optional[PrintWorkflowConfiguration]
    printer_job: typing.Optional[PrintWorkflowPrinterJob]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowJobNotificationEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class PrintWorkflowJobStartingEventArgs(winsdk.system.Object):
    configuration: typing.Optional[PrintWorkflowConfiguration]
    printer: typing.Optional[winsdk.windows.devices.printers.IppPrintDevice]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowJobStartingEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def set_skip_system_rendering(self) -> None: ...

class PrintWorkflowJobTriggerDetails(winsdk.system.Object):
    print_workflow_job_session: typing.Optional[PrintWorkflowJobBackgroundSession]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowJobTriggerDetails: ...

class PrintWorkflowJobUISession(winsdk.system.Object):
    status: PrintWorkflowSessionStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowJobUISession: ...
    def start(self) -> None: ...
    def add_job_notification(self, handler: winsdk.windows.foundation.TypedEventHandler[PrintWorkflowJobUISession, PrintWorkflowJobNotificationEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_job_notification(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_pdl_data_available(self, handler: winsdk.windows.foundation.TypedEventHandler[PrintWorkflowJobUISession, PrintWorkflowPdlDataAvailableEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pdl_data_available(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class PrintWorkflowObjectModelSourceFileContent(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowObjectModelSourceFileContent: ...
    def __new__(cls: typing.Type[PrintWorkflowObjectModelSourceFileContent], xps_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]) -> PrintWorkflowObjectModelSourceFileContent:...

class PrintWorkflowObjectModelTargetPackage(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowObjectModelTargetPackage: ...

class PrintWorkflowPdlConverter(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowPdlConverter: ...
    @typing.overload
    def convert_pdl_async(self, print_ticket: typing.Optional[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket], input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream], output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def convert_pdl_async(self, print_ticket: typing.Optional[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket], input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream], output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream], host_based_processing_operations: PdlConversionHostBasedProcessingOperations) -> winsdk.windows.foundation.IAsyncAction: ...

class PrintWorkflowPdlDataAvailableEventArgs(winsdk.system.Object):
    configuration: typing.Optional[PrintWorkflowConfiguration]
    printer_job: typing.Optional[PrintWorkflowPrinterJob]
    source_content: typing.Optional[PrintWorkflowPdlSourceContent]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowPdlDataAvailableEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class PrintWorkflowPdlModificationRequestedEventArgs(winsdk.system.Object):
    configuration: typing.Optional[PrintWorkflowConfiguration]
    printer_job: typing.Optional[PrintWorkflowPrinterJob]
    source_content: typing.Optional[PrintWorkflowPdlSourceContent]
    u_i_launcher: typing.Optional[PrintWorkflowUILauncher]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowPdlModificationRequestedEventArgs: ...
    def create_job_on_printer(self, target_content_type: str) -> typing.Optional[PrintWorkflowPdlTargetStream]: ...
    @typing.overload
    def create_job_on_printer_with_attributes(self, job_attributes: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.windows.devices.printers.IppAttributeValue]], target_content_type: str) -> typing.Optional[PrintWorkflowPdlTargetStream]: ...
    @typing.overload
    def create_job_on_printer_with_attributes(self, job_attributes: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.windows.devices.printers.IppAttributeValue]], target_content_type: str, operation_attributes: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.windows.devices.printers.IppAttributeValue]], job_attributes_merge_policy: PrintWorkflowAttributesMergePolicy, operation_attributes_merge_policy: PrintWorkflowAttributesMergePolicy) -> typing.Optional[PrintWorkflowPdlTargetStream]: ...
    @typing.overload
    def create_job_on_printer_with_attributes_buffer(self, job_attributes_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], target_content_type: str) -> typing.Optional[PrintWorkflowPdlTargetStream]: ...
    @typing.overload
    def create_job_on_printer_with_attributes_buffer(self, job_attributes_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], target_content_type: str, operation_attributes_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], job_attributes_merge_policy: PrintWorkflowAttributesMergePolicy, operation_attributes_merge_policy: PrintWorkflowAttributesMergePolicy) -> typing.Optional[PrintWorkflowPdlTargetStream]: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def get_pdl_converter(self, conversion_type: PrintWorkflowPdlConversionType) -> typing.Optional[PrintWorkflowPdlConverter]: ...

class PrintWorkflowPdlSourceContent(winsdk.system.Object):
    content_type: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowPdlSourceContent: ...
    def get_content_file_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.StorageFile]: ...
    def get_input_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...

class PrintWorkflowPdlTargetStream(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowPdlTargetStream: ...
    def complete_stream_submission(self, status: PrintWorkflowSubmittedStatus) -> None: ...
    def get_output_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IOutputStream]: ...

class PrintWorkflowPrinterJob(winsdk.system.Object):
    job_id: winsdk.system.Int32
    printer: typing.Optional[winsdk.windows.devices.printers.IppPrintDevice]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowPrinterJob: ...
    def get_job_attributes(self, attribute_names: typing.Iterable[str]) -> typing.Optional[winsdk.windows.foundation.collections.IMap[str, winsdk.windows.devices.printers.IppAttributeValue]]: ...
    def get_job_attributes_as_buffer(self, attribute_names: typing.Iterable[str]) -> typing.Optional[winsdk.windows.storage.streams.IBuffer]: ...
    def get_job_print_ticket(self) -> typing.Optional[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket]: ...
    def get_job_status(self) -> PrintWorkflowPrinterJobStatus: ...
    def set_job_attributes(self, job_attributes: typing.Iterable[winsdk.windows.foundation.collections.IKeyValuePair[str, winsdk.windows.devices.printers.IppAttributeValue]]) -> typing.Optional[winsdk.windows.devices.printers.IppSetAttributesResult]: ...
    def set_job_attributes_from_buffer(self, job_attributes_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> typing.Optional[winsdk.windows.devices.printers.IppSetAttributesResult]: ...

class PrintWorkflowSourceContent(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowSourceContent: ...
    def get_job_print_ticket_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket]: ...
    def get_source_spool_data_as_stream_content(self) -> typing.Optional[PrintWorkflowSpoolStreamContent]: ...
    def get_source_spool_data_as_xps_object_model(self) -> typing.Optional[PrintWorkflowObjectModelSourceFileContent]: ...

class PrintWorkflowSpoolStreamContent(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowSpoolStreamContent: ...
    def get_input_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...

class PrintWorkflowStreamTarget(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowStreamTarget: ...
    def get_output_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IOutputStream]: ...

class PrintWorkflowSubmittedEventArgs(winsdk.system.Object):
    operation: typing.Optional[PrintWorkflowSubmittedOperation]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowSubmittedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def get_target(self, job_print_ticket: typing.Optional[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket]) -> typing.Optional[PrintWorkflowTarget]: ...

class PrintWorkflowSubmittedOperation(winsdk.system.Object):
    configuration: typing.Optional[PrintWorkflowConfiguration]
    xps_content: typing.Optional[PrintWorkflowSourceContent]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowSubmittedOperation: ...
    def complete(self, status: PrintWorkflowSubmittedStatus) -> None: ...

class PrintWorkflowTarget(winsdk.system.Object):
    target_as_stream: typing.Optional[PrintWorkflowStreamTarget]
    target_as_xps_object_model_package: typing.Optional[PrintWorkflowObjectModelTargetPackage]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowTarget: ...

class PrintWorkflowTriggerDetails(winsdk.system.Object):
    print_workflow_session: typing.Optional[PrintWorkflowBackgroundSession]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowTriggerDetails: ...

class PrintWorkflowUIActivatedEventArgs(winsdk.system.Object):
    kind: winsdk.windows.applicationmodel.activation.ActivationKind
    previous_execution_state: winsdk.windows.applicationmodel.activation.ApplicationExecutionState
    splash_screen: typing.Optional[winsdk.windows.applicationmodel.activation.SplashScreen]
    user: typing.Optional[winsdk.windows.system.User]
    print_workflow_session: typing.Optional[PrintWorkflowForegroundSession]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowUIActivatedEventArgs: ...

class PrintWorkflowUILauncher(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowUILauncher: ...
    def is_u_i_launch_enabled(self) -> winsdk.system.Boolean: ...
    def launch_and_complete_u_i_async(self) -> winsdk.windows.foundation.IAsyncOperation[PrintWorkflowUICompletionStatus]: ...

class PrintWorkflowXpsDataAvailableEventArgs(winsdk.system.Object):
    operation: typing.Optional[PrintWorkflowSubmittedOperation]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> PrintWorkflowXpsDataAvailableEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

