# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel
import winsdk.windows.applicationmodel.activation
import winsdk.windows.data.xml.dom
import winsdk.windows.devices.printers
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.graphics.printing.printticket
import winsdk.windows.system
import winsdk.windows.ui.shell

class SettingsLaunchKind(enum.IntEnum):
    JOB_PRINT_TICKET = 0
    USER_DEFAULT_PRINT_TICKET = 1

class WorkflowPrintTicketValidationStatus(enum.IntEnum):
    RESOLVED = 0
    CONFLICTING = 1
    INVALID = 2

Self = typing.TypeVar('Self')

class PrintSupportExtensionSession(winsdk.system.Object):
    printer: typing.Optional[winsdk.windows.devices.printers.IppPrintDevice]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportExtensionSession: ...
    def start(self) -> None: ...
    def add_print_device_capabilities_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PrintSupportExtensionSession, PrintSupportPrintDeviceCapabilitiesChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_print_device_capabilities_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_print_ticket_validation_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[PrintSupportExtensionSession, PrintSupportPrintTicketValidationRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_print_ticket_validation_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_printer_selected(self, handler: winsdk.windows.foundation.TypedEventHandler[PrintSupportExtensionSession, PrintSupportPrinterSelectedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_printer_selected(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class PrintSupportExtensionTriggerDetails(winsdk.system.Object):
    session: typing.Optional[PrintSupportExtensionSession]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportExtensionTriggerDetails: ...

class PrintSupportPrintDeviceCapabilitiesChangedEventArgs(winsdk.system.Object):
    resource_language: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportPrintDeviceCapabilitiesChangedEventArgs: ...
    def get_current_print_device_capabilities(self) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...
    def get_current_print_device_resources(self) -> typing.Optional[winsdk.windows.data.xml.dom.XmlDocument]: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def set_print_device_capabilities_update_policy(self, update_policy: typing.Optional[PrintSupportPrintDeviceCapabilitiesUpdatePolicy], /) -> None: ...
    def set_supported_pdl_passthrough_content_types(self, supported_pdl_content_types: typing.Iterable[str], /) -> None: ...
    def update_print_device_capabilities(self, updated_pdc: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument], /) -> None: ...
    def update_print_device_resources(self, updated_pdr: typing.Optional[winsdk.windows.data.xml.dom.XmlDocument], /) -> None: ...

class PrintSupportPrintDeviceCapabilitiesUpdatePolicy(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportPrintDeviceCapabilitiesUpdatePolicy: ...
    @staticmethod
    def create_periodic_refresh(update_period: datetime.timedelta, /) -> typing.Optional[PrintSupportPrintDeviceCapabilitiesUpdatePolicy]: ...
    @staticmethod
    def create_print_job_refresh(number_of_jobs: winsdk.system.UInt32, /) -> typing.Optional[PrintSupportPrintDeviceCapabilitiesUpdatePolicy]: ...

class PrintSupportPrintTicketElement(winsdk.system.Object):
    namespace_uri: str
    local_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportPrintTicketElement: ...
    def __new__(cls: typing.Type[PrintSupportPrintTicketElement]) -> PrintSupportPrintTicketElement:...

class PrintSupportPrintTicketValidationRequestedEventArgs(winsdk.system.Object):
    print_ticket: typing.Optional[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportPrintTicketValidationRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def set_print_ticket_validation_status(self, status: WorkflowPrintTicketValidationStatus, /) -> None: ...

class PrintSupportPrinterSelectedEventArgs(winsdk.system.Object):
    print_ticket: typing.Optional[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket]
    allowed_additional_features_and_parameters_count: winsdk.system.UInt32
    source_app_info: typing.Optional[winsdk.windows.applicationmodel.AppInfo]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportPrinterSelectedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def set_adaptive_card(self, adaptive_card: typing.Optional[winsdk.windows.ui.shell.IAdaptiveCard], /) -> None: ...
    def set_additional_features(self, features: typing.Iterable[PrintSupportPrintTicketElement], /) -> None: ...
    def set_additional_parameters(self, parameters: typing.Iterable[PrintSupportPrintTicketElement], /) -> None: ...

class PrintSupportSessionInfo(winsdk.system.Object):
    printer: typing.Optional[winsdk.windows.devices.printers.IppPrintDevice]
    source_app_info: typing.Optional[winsdk.windows.applicationmodel.AppInfo]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportSessionInfo: ...

class PrintSupportSettingsActivatedEventArgs(winsdk.system.Object):
    kind: winsdk.windows.applicationmodel.activation.ActivationKind
    previous_execution_state: winsdk.windows.applicationmodel.activation.ApplicationExecutionState
    splash_screen: typing.Optional[winsdk.windows.applicationmodel.activation.SplashScreen]
    user: typing.Optional[winsdk.windows.system.User]
    session: typing.Optional[PrintSupportSettingsUISession]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportSettingsActivatedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class PrintSupportSettingsUISession(winsdk.system.Object):
    document_title: str
    launch_kind: SettingsLaunchKind
    session_info: typing.Optional[PrintSupportSessionInfo]
    session_print_ticket: typing.Optional[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PrintSupportSettingsUISession: ...
    def update_print_ticket(self, print_ticket: typing.Optional[winsdk.windows.graphics.printing.printticket.WorkflowPrintTicket], /) -> None: ...

