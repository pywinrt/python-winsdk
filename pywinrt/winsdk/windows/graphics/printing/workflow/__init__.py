# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Graphics.Printing.Workflow")

try:
    import winsdk.windows.applicationmodel.activation
except Exception:
    pass

try:
    import winsdk.windows.devices.printers
except Exception:
    pass

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.graphics.printing.printticket
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

try:
    import winsdk.windows.system
except Exception:
    pass

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

PrintWorkflowBackgroundSession = _ns_module.PrintWorkflowBackgroundSession
PrintWorkflowBackgroundSetupRequestedEventArgs = _ns_module.PrintWorkflowBackgroundSetupRequestedEventArgs
PrintWorkflowConfiguration = _ns_module.PrintWorkflowConfiguration
PrintWorkflowForegroundSession = _ns_module.PrintWorkflowForegroundSession
PrintWorkflowForegroundSetupRequestedEventArgs = _ns_module.PrintWorkflowForegroundSetupRequestedEventArgs
PrintWorkflowJobActivatedEventArgs = _ns_module.PrintWorkflowJobActivatedEventArgs
PrintWorkflowJobBackgroundSession = _ns_module.PrintWorkflowJobBackgroundSession
PrintWorkflowJobNotificationEventArgs = _ns_module.PrintWorkflowJobNotificationEventArgs
PrintWorkflowJobStartingEventArgs = _ns_module.PrintWorkflowJobStartingEventArgs
PrintWorkflowJobTriggerDetails = _ns_module.PrintWorkflowJobTriggerDetails
PrintWorkflowJobUISession = _ns_module.PrintWorkflowJobUISession
PrintWorkflowObjectModelSourceFileContent = _ns_module.PrintWorkflowObjectModelSourceFileContent
PrintWorkflowObjectModelTargetPackage = _ns_module.PrintWorkflowObjectModelTargetPackage
PrintWorkflowPdlConverter = _ns_module.PrintWorkflowPdlConverter
PrintWorkflowPdlDataAvailableEventArgs = _ns_module.PrintWorkflowPdlDataAvailableEventArgs
PrintWorkflowPdlModificationRequestedEventArgs = _ns_module.PrintWorkflowPdlModificationRequestedEventArgs
PrintWorkflowPdlSourceContent = _ns_module.PrintWorkflowPdlSourceContent
PrintWorkflowPdlTargetStream = _ns_module.PrintWorkflowPdlTargetStream
PrintWorkflowPrinterJob = _ns_module.PrintWorkflowPrinterJob
PrintWorkflowSourceContent = _ns_module.PrintWorkflowSourceContent
PrintWorkflowSpoolStreamContent = _ns_module.PrintWorkflowSpoolStreamContent
PrintWorkflowStreamTarget = _ns_module.PrintWorkflowStreamTarget
PrintWorkflowSubmittedEventArgs = _ns_module.PrintWorkflowSubmittedEventArgs
PrintWorkflowSubmittedOperation = _ns_module.PrintWorkflowSubmittedOperation
PrintWorkflowTarget = _ns_module.PrintWorkflowTarget
PrintWorkflowTriggerDetails = _ns_module.PrintWorkflowTriggerDetails
PrintWorkflowUIActivatedEventArgs = _ns_module.PrintWorkflowUIActivatedEventArgs
PrintWorkflowUILauncher = _ns_module.PrintWorkflowUILauncher
PrintWorkflowXpsDataAvailableEventArgs = _ns_module.PrintWorkflowXpsDataAvailableEventArgs
