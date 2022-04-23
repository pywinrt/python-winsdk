# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Networking.BackgroundTransfer")

try:
    import winsdk.windows.applicationmodel.background
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
    import winsdk.windows.security.credentials
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
    import winsdk.windows.ui.notifications
except Exception:
    pass

try:
    import winsdk.windows.web
except Exception:
    pass

class BackgroundTransferBehavior(enum.IntEnum):
    PARALLEL = 0
    SERIALIZED = 1

class BackgroundTransferCostPolicy(enum.IntEnum):
    DEFAULT = 0
    UNRESTRICTED_ONLY = 1
    ALWAYS = 2

class BackgroundTransferPriority(enum.IntEnum):
    DEFAULT = 0
    HIGH = 1
    LOW = 2

class BackgroundTransferStatus(enum.IntEnum):
    IDLE = 0
    RUNNING = 1
    PAUSED_BY_APPLICATION = 2
    PAUSED_COSTED_NETWORK = 3
    PAUSED_NO_NETWORK = 4
    COMPLETED = 5
    CANCELED = 6
    ERROR = 7
    PAUSED_RECOVERABLE_WEB_ERROR_STATUS = 8
    PAUSED_SYSTEM_POLICY = 32

BackgroundDownloadProgress = _ns_module.BackgroundDownloadProgress
BackgroundTransferFileRange = _ns_module.BackgroundTransferFileRange
BackgroundUploadProgress = _ns_module.BackgroundUploadProgress
BackgroundDownloader = _ns_module.BackgroundDownloader
BackgroundTransferCompletionGroup = _ns_module.BackgroundTransferCompletionGroup
BackgroundTransferCompletionGroupTriggerDetails = _ns_module.BackgroundTransferCompletionGroupTriggerDetails
BackgroundTransferContentPart = _ns_module.BackgroundTransferContentPart
BackgroundTransferError = _ns_module.BackgroundTransferError
BackgroundTransferGroup = _ns_module.BackgroundTransferGroup
BackgroundTransferRangesDownloadedEventArgs = _ns_module.BackgroundTransferRangesDownloadedEventArgs
BackgroundUploader = _ns_module.BackgroundUploader
ContentPrefetcher = _ns_module.ContentPrefetcher
DownloadOperation = _ns_module.DownloadOperation
ResponseInformation = _ns_module.ResponseInformation
UnconstrainedTransferRequestResult = _ns_module.UnconstrainedTransferRequestResult
UploadOperation = _ns_module.UploadOperation
IBackgroundTransferBase = _ns_module.IBackgroundTransferBase
IBackgroundTransferContentPartFactory = _ns_module.IBackgroundTransferContentPartFactory
IBackgroundTransferOperation = _ns_module.IBackgroundTransferOperation
IBackgroundTransferOperationPriority = _ns_module.IBackgroundTransferOperationPriority
