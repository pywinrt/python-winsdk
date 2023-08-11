# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Services.Store")

try:
    import winsdk.windows.applicationmodel
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.system
except ImportError:
    pass

try:
    import winsdk.windows.web.http
except ImportError:
    pass

class StoreCanLicenseStatus(enum.IntEnum):
    NOT_LICENSABLE_TO_USER = 0
    LICENSABLE = 1
    LICENSE_ACTION_NOT_APPLICABLE_TO_PRODUCT = 2
    NETWORK_ERROR = 3
    SERVER_ERROR = 4

class StoreConsumableStatus(enum.IntEnum):
    SUCCEEDED = 0
    INSUFFICENT_QUANTITY = 1
    NETWORK_ERROR = 2
    SERVER_ERROR = 3

class StoreDurationUnit(enum.IntEnum):
    MINUTE = 0
    HOUR = 1
    DAY = 2
    WEEK = 3
    MONTH = 4
    YEAR = 5

class StorePackageUpdateState(enum.IntEnum):
    PENDING = 0
    DOWNLOADING = 1
    DEPLOYING = 2
    COMPLETED = 3
    CANCELED = 4
    OTHER_ERROR = 5
    ERROR_LOW_BATTERY = 6
    ERROR_WI_FI_RECOMMENDED = 7
    ERROR_WI_FI_REQUIRED = 8

class StorePurchaseStatus(enum.IntEnum):
    SUCCEEDED = 0
    ALREADY_PURCHASED = 1
    NOT_PURCHASED = 2
    NETWORK_ERROR = 3
    SERVER_ERROR = 4

class StoreQueueItemExtendedState(enum.IntEnum):
    ACTIVE_PENDING = 0
    ACTIVE_STARTING = 1
    ACTIVE_ACQUIRING_LICENSE = 2
    ACTIVE_DOWNLOADING = 3
    ACTIVE_RESTORING_DATA = 4
    ACTIVE_INSTALLING = 5
    COMPLETED = 6
    CANCELED = 7
    PAUSED = 8
    ERROR = 9
    PAUSED_PACKAGES_IN_USE = 10
    PAUSED_LOW_BATTERY = 11
    PAUSED_WI_FI_RECOMMENDED = 12
    PAUSED_WI_FI_REQUIRED = 13
    PAUSED_READY_TO_INSTALL = 14

class StoreQueueItemKind(enum.IntEnum):
    INSTALL = 0
    UPDATE = 1
    REPAIR = 2

class StoreQueueItemState(enum.IntEnum):
    ACTIVE = 0
    COMPLETED = 1
    CANCELED = 2
    ERROR = 3
    PAUSED = 4

class StoreRateAndReviewStatus(enum.IntEnum):
    SUCCEEDED = 0
    CANCELED_BY_USER = 1
    NETWORK_ERROR = 2
    ERROR = 3

class StoreUninstallStorePackageStatus(enum.IntEnum):
    SUCCEEDED = 0
    CANCELED_BY_USER = 1
    NETWORK_ERROR = 2
    UNINSTALL_NOT_APPLICABLE = 3
    ERROR = 4

_ns_module._register_StoreCanLicenseStatus(StoreCanLicenseStatus)
_ns_module._register_StoreConsumableStatus(StoreConsumableStatus)
_ns_module._register_StoreDurationUnit(StoreDurationUnit)
_ns_module._register_StorePackageUpdateState(StorePackageUpdateState)
_ns_module._register_StorePurchaseStatus(StorePurchaseStatus)
_ns_module._register_StoreQueueItemExtendedState(StoreQueueItemExtendedState)
_ns_module._register_StoreQueueItemKind(StoreQueueItemKind)
_ns_module._register_StoreQueueItemState(StoreQueueItemState)
_ns_module._register_StoreRateAndReviewStatus(StoreRateAndReviewStatus)
_ns_module._register_StoreUninstallStorePackageStatus(StoreUninstallStorePackageStatus)

StorePackageUpdateStatus = _ns_module.StorePackageUpdateStatus
StoreAcquireLicenseResult = _ns_module.StoreAcquireLicenseResult
StoreAppLicense = _ns_module.StoreAppLicense
StoreAvailability = _ns_module.StoreAvailability
StoreCanAcquireLicenseResult = _ns_module.StoreCanAcquireLicenseResult
StoreCollectionData = _ns_module.StoreCollectionData
StoreConsumableResult = _ns_module.StoreConsumableResult
StoreContext = _ns_module.StoreContext
StoreImage = _ns_module.StoreImage
StoreLicense = _ns_module.StoreLicense
StorePackageInstallOptions = _ns_module.StorePackageInstallOptions
StorePackageLicense = _ns_module.StorePackageLicense
StorePackageUpdate = _ns_module.StorePackageUpdate
StorePackageUpdateResult = _ns_module.StorePackageUpdateResult
StorePrice = _ns_module.StorePrice
StoreProduct = _ns_module.StoreProduct
StoreProductOptions = _ns_module.StoreProductOptions
StoreProductPagedQueryResult = _ns_module.StoreProductPagedQueryResult
StoreProductQueryResult = _ns_module.StoreProductQueryResult
StoreProductResult = _ns_module.StoreProductResult
StorePurchaseProperties = _ns_module.StorePurchaseProperties
StorePurchaseResult = _ns_module.StorePurchaseResult
StoreQueueItem = _ns_module.StoreQueueItem
StoreQueueItemCompletedEventArgs = _ns_module.StoreQueueItemCompletedEventArgs
StoreQueueItemStatus = _ns_module.StoreQueueItemStatus
StoreRateAndReviewResult = _ns_module.StoreRateAndReviewResult
StoreRequestHelper = _ns_module.StoreRequestHelper
StoreSendRequestResult = _ns_module.StoreSendRequestResult
StoreSku = _ns_module.StoreSku
StoreSubscriptionInfo = _ns_module.StoreSubscriptionInfo
StoreUninstallStorePackageResult = _ns_module.StoreUninstallStorePackageResult
StoreVideo = _ns_module.StoreVideo
