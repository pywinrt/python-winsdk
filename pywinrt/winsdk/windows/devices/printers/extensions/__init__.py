# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.Printers.Extensions")

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

Print3DWorkflow = _ns_module.Print3DWorkflow
Print3DWorkflowPrintRequestedEventArgs = _ns_module.Print3DWorkflowPrintRequestedEventArgs
Print3DWorkflowPrinterChangedEventArgs = _ns_module.Print3DWorkflowPrinterChangedEventArgs
