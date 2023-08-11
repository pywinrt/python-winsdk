# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.activation
import winsdk.windows.applicationmodel.core
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage
import winsdk.windows.storage.streams
import winsdk.windows.system

class AddResourcePackageOptions(enum.IntFlag):
    NONE = 0
    FORCE_TARGET_APP_SHUTDOWN = 0x1
    APPLY_UPDATE_IF_AVAILABLE = 0x2

class AppExecutionContext(enum.IntEnum):
    UNKNOWN = 0
    HOST = 1
    GUEST = 2

class AppInstallerPolicySource(enum.IntEnum):
    DEFAULT = 0
    SYSTEM = 1

class FullTrustLaunchResult(enum.IntEnum):
    SUCCESS = 0
    ACCESS_DENIED = 1
    FILE_NOT_FOUND = 2
    UNKNOWN = 3

class LimitedAccessFeatureStatus(enum.IntEnum):
    UNAVAILABLE = 0
    AVAILABLE = 1
    AVAILABLE_WITHOUT_TOKEN = 2
    UNKNOWN = 3

class PackageContentGroupState(enum.IntEnum):
    NOT_STAGED = 0
    QUEUED = 1
    STAGING = 2
    STAGED = 3

class PackageRelationship(enum.IntEnum):
    DEPENDENCIES = 0
    DEPENDENTS = 1
    ALL = 2

class PackageSignatureKind(enum.IntEnum):
    NONE = 0
    DEVELOPER = 1
    ENTERPRISE = 2
    STORE = 3
    SYSTEM = 4

class PackageUpdateAvailability(enum.IntEnum):
    UNKNOWN = 0
    NO_UPDATES = 1
    AVAILABLE = 2
    REQUIRED = 3
    ERROR = 4

class StartupTaskState(enum.IntEnum):
    DISABLED = 0
    DISABLED_BY_USER = 1
    ENABLED = 2
    DISABLED_BY_POLICY = 3
    ENABLED_BY_POLICY = 4

Self = typing.TypeVar('Self')

class PackageInstallProgress:
    percent_complete: winsdk.system.UInt32
    def __new__(cls: typing.Type[PackageInstallProgress], percent_complete: winsdk.system.UInt32) -> PackageInstallProgress: ...

class PackageVersion:
    major: winsdk.system.UInt16
    minor: winsdk.system.UInt16
    build: winsdk.system.UInt16
    revision: winsdk.system.UInt16
    def __new__(cls: typing.Type[PackageVersion], major: winsdk.system.UInt16, minor: winsdk.system.UInt16, build: winsdk.system.UInt16, revision: winsdk.system.UInt16) -> PackageVersion: ...

class AppDisplayInfo(winsdk.system.Object):
    description: str
    display_name: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> AppDisplayInfo: ...
    def get_logo(self, size: winsdk.windows.foundation.Size, /) -> typing.Optional[winsdk.windows.storage.streams.RandomAccessStreamReference]: ...

class AppInfo(winsdk.system.Object):
    app_user_model_id: str
    display_info: typing.Optional[AppDisplayInfo]
    id: str
    package_family_name: str
    package: typing.Optional[Package]
    execution_context: AppExecutionContext
    supported_file_extensions: str
    current: typing.ClassVar[typing.Optional[AppInfo]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> AppInfo: ...
    @staticmethod
    def get_from_app_user_model_id(app_user_model_id: str, /) -> typing.Optional[AppInfo]: ...
    @staticmethod
    def get_from_app_user_model_id_for_user(user: typing.Optional[winsdk.windows.system.User], app_user_model_id: str, /) -> typing.Optional[AppInfo]: ...

class AppInstallerInfo(winsdk.system.Object):
    uri: typing.Optional[winsdk.windows.foundation.Uri]
    automatic_background_task: winsdk.system.Boolean
    dependency_package_uris: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.foundation.Uri]]
    force_update_from_any_version: winsdk.system.Boolean
    hours_between_update_checks: winsdk.system.UInt32
    is_auto_repair_enabled: winsdk.system.Boolean
    last_checked: datetime.datetime
    on_launch: winsdk.system.Boolean
    optional_package_uris: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.foundation.Uri]]
    paused_until: typing.Optional[typing.Optional[datetime.datetime]]
    policy_source: AppInstallerPolicySource
    repair_uris: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.foundation.Uri]]
    show_prompt: winsdk.system.Boolean
    update_blocks_activation: winsdk.system.Boolean
    update_uris: typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.foundation.Uri]]
    version: PackageVersion
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> AppInstallerInfo: ...

class AppInstance(winsdk.system.Object):
    is_current_instance: winsdk.system.Boolean
    key: str
    recommended_instance: typing.ClassVar[typing.Optional[AppInstance]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> AppInstance: ...
    @staticmethod
    def find_or_register_instance_for_key(key: str, /) -> typing.Optional[AppInstance]: ...
    @staticmethod
    def get_activated_event_args() -> typing.Optional[winsdk.windows.applicationmodel.activation.IActivatedEventArgs]: ...
    @staticmethod
    def get_instances() -> typing.Optional[winsdk.windows.foundation.collections.IVector[AppInstance]]: ...
    def redirect_activation_to(self) -> None: ...
    @staticmethod
    def unregister() -> None: ...

class CameraApplicationManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> CameraApplicationManager: ...
    @staticmethod
    def show_installed_applications_u_i() -> None: ...

class DesignMode(winsdk.system.Object):
    design_mode_enabled: typing.ClassVar[winsdk.system.Boolean]
    design_mode2_enabled: typing.ClassVar[winsdk.system.Boolean]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> DesignMode: ...

class EnteredBackgroundEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> EnteredBackgroundEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class FindRelatedPackagesOptions(winsdk.system.Object):
    relationship: PackageRelationship
    include_resources: winsdk.system.Boolean
    include_optionals: winsdk.system.Boolean
    include_host_runtimes: winsdk.system.Boolean
    include_frameworks: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> FindRelatedPackagesOptions: ...
    def __new__(cls: typing.Type[FindRelatedPackagesOptions], relationship: PackageRelationship) -> FindRelatedPackagesOptions:...

class FullTrustProcessLaunchResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    launch_result: FullTrustLaunchResult
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> FullTrustProcessLaunchResult: ...

class FullTrustProcessLauncher(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> FullTrustProcessLauncher: ...
    @typing.overload
    @staticmethod
    def launch_full_trust_process_for_app_async(full_trust_package_relative_app_id: str, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    @staticmethod
    def launch_full_trust_process_for_app_async(full_trust_package_relative_app_id: str, parameter_group_id: str, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def launch_full_trust_process_for_app_with_arguments_async(full_trust_package_relative_app_id: str, command_line: str, /) -> winsdk.windows.foundation.IAsyncOperation[FullTrustProcessLaunchResult]: ...
    @typing.overload
    @staticmethod
    def launch_full_trust_process_for_current_app_async() -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    @staticmethod
    def launch_full_trust_process_for_current_app_async(parameter_group_id: str, /) -> winsdk.windows.foundation.IAsyncAction: ...
    @staticmethod
    def launch_full_trust_process_for_current_app_with_arguments_async(command_line: str, /) -> winsdk.windows.foundation.IAsyncOperation[FullTrustProcessLaunchResult]: ...

class LeavingBackgroundEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LeavingBackgroundEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class LimitedAccessFeatureRequestResult(winsdk.system.Object):
    estimated_removal_date: typing.Optional[typing.Optional[datetime.datetime]]
    feature_id: str
    status: LimitedAccessFeatureStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LimitedAccessFeatureRequestResult: ...

class LimitedAccessFeatures(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LimitedAccessFeatures: ...
    @staticmethod
    def try_unlock_feature(feature_id: str, token: str, attestation: str, /) -> typing.Optional[LimitedAccessFeatureRequestResult]: ...

class Package(winsdk.system.Object):
    dependencies: typing.Optional[winsdk.windows.foundation.collections.IVectorView[Package]]
    id: typing.Optional[PackageId]
    installed_location: typing.Optional[winsdk.windows.storage.StorageFolder]
    is_framework: winsdk.system.Boolean
    description: str
    display_name: str
    is_bundle: winsdk.system.Boolean
    is_development_mode: winsdk.system.Boolean
    is_resource_package: winsdk.system.Boolean
    logo: typing.Optional[winsdk.windows.foundation.Uri]
    publisher_display_name: str
    installed_date: datetime.datetime
    status: typing.Optional[PackageStatus]
    is_optional: winsdk.system.Boolean
    signature_kind: PackageSignatureKind
    effective_location: typing.Optional[winsdk.windows.storage.StorageFolder]
    mutable_location: typing.Optional[winsdk.windows.storage.StorageFolder]
    effective_external_location: typing.Optional[winsdk.windows.storage.StorageFolder]
    effective_external_path: str
    effective_path: str
    installed_path: str
    is_stub: winsdk.system.Boolean
    machine_external_location: typing.Optional[winsdk.windows.storage.StorageFolder]
    machine_external_path: str
    mutable_path: str
    user_external_location: typing.Optional[winsdk.windows.storage.StorageFolder]
    user_external_path: str
    source_uri_scheme_name: str
    install_date: datetime.datetime
    current: typing.ClassVar[typing.Optional[Package]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> Package: ...
    def check_update_availability_async(self) -> winsdk.windows.foundation.IAsyncOperation[PackageUpdateAvailabilityResult]: ...
    def find_related_packages(self, options: typing.Optional[FindRelatedPackagesOptions], /) -> typing.Optional[winsdk.windows.foundation.collections.IVector[Package]]: ...
    def get_app_installer_info(self) -> typing.Optional[AppInstallerInfo]: ...
    def get_app_list_entries(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.applicationmodel.core.AppListEntry]]: ...
    def get_app_list_entries_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[winsdk.windows.applicationmodel.core.AppListEntry]]: ...
    def get_content_group_async(self, name: str, /) -> winsdk.windows.foundation.IAsyncOperation[PackageContentGroup]: ...
    def get_content_groups_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVector[PackageContentGroup]]: ...
    def get_logo_as_random_access_stream_reference(self, size: winsdk.windows.foundation.Size, /) -> typing.Optional[winsdk.windows.storage.streams.RandomAccessStreamReference]: ...
    def get_thumbnail_token(self) -> str: ...
    def launch(self, parameters: str, /) -> None: ...
    def set_in_use_async(self, in_use: winsdk.system.Boolean, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    @typing.overload
    def stage_content_groups_async(self, names: typing.Iterable[str], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVector[PackageContentGroup]]: ...
    @typing.overload
    def stage_content_groups_async(self, names: typing.Iterable[str], move_to_head_of_queue: winsdk.system.Boolean, /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVector[PackageContentGroup]]: ...
    def verify_content_integrity_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class PackageCatalog(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageCatalog: ...
    def add_optional_package_async(self, optional_package_family_name: str, /) -> winsdk.windows.foundation.IAsyncOperation[PackageCatalogAddOptionalPackageResult]: ...
    def add_resource_package_async(self, resource_package_family_name: str, resource_i_d: str, options: AddResourcePackageOptions, /) -> winsdk.windows.foundation.IAsyncOperationWithProgress[PackageCatalogAddResourcePackageResult, PackageInstallProgress]: ...
    @staticmethod
    def open_for_current_package() -> typing.Optional[PackageCatalog]: ...
    @staticmethod
    def open_for_current_user() -> typing.Optional[PackageCatalog]: ...
    @staticmethod
    def open_for_package(package: typing.Optional[Package], /) -> typing.Optional[PackageCatalog]: ...
    def remove_optional_packages_async(self, optional_package_family_names: typing.Iterable[str], /) -> winsdk.windows.foundation.IAsyncOperation[PackageCatalogRemoveOptionalPackagesResult]: ...
    def remove_resource_packages_async(self, resource_packages: typing.Iterable[Package], /) -> winsdk.windows.foundation.IAsyncOperation[PackageCatalogRemoveResourcePackagesResult]: ...
    def add_package_installing(self, handler: winsdk.windows.foundation.TypedEventHandler[PackageCatalog, PackageInstallingEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_package_installing(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_package_staging(self, handler: winsdk.windows.foundation.TypedEventHandler[PackageCatalog, PackageStagingEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_package_staging(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_package_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[PackageCatalog, PackageStatusChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_package_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_package_uninstalling(self, handler: winsdk.windows.foundation.TypedEventHandler[PackageCatalog, PackageUninstallingEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_package_uninstalling(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_package_updating(self, handler: winsdk.windows.foundation.TypedEventHandler[PackageCatalog, PackageUpdatingEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_package_updating(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_package_content_group_staging(self, handler: winsdk.windows.foundation.TypedEventHandler[PackageCatalog, PackageContentGroupStagingEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_package_content_group_staging(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class PackageCatalogAddOptionalPackageResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    package: typing.Optional[Package]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageCatalogAddOptionalPackageResult: ...

class PackageCatalogAddResourcePackageResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    is_complete: winsdk.system.Boolean
    package: typing.Optional[Package]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageCatalogAddResourcePackageResult: ...

class PackageCatalogRemoveOptionalPackagesResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    packages_removed: typing.Optional[winsdk.windows.foundation.collections.IVectorView[Package]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageCatalogRemoveOptionalPackagesResult: ...

class PackageCatalogRemoveResourcePackagesResult(winsdk.system.Object):
    extended_error: winsdk.windows.foundation.HResult
    packages_removed: typing.Optional[winsdk.windows.foundation.collections.IVectorView[Package]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageCatalogRemoveResourcePackagesResult: ...

class PackageContentGroup(winsdk.system.Object):
    is_required: winsdk.system.Boolean
    name: str
    package: typing.Optional[Package]
    state: PackageContentGroupState
    required_group_name: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageContentGroup: ...

class PackageContentGroupStagingEventArgs(winsdk.system.Object):
    activity_id: winsdk.system.Guid
    content_group_name: str
    error_code: winsdk.windows.foundation.HResult
    is_complete: winsdk.system.Boolean
    is_content_group_required: winsdk.system.Boolean
    package: typing.Optional[Package]
    progress: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageContentGroupStagingEventArgs: ...

class PackageId(winsdk.system.Object):
    architecture: winsdk.windows.system.ProcessorArchitecture
    family_name: str
    full_name: str
    name: str
    publisher: str
    publisher_id: str
    resource_id: str
    version: PackageVersion
    author: str
    product_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageId: ...

class PackageInstallingEventArgs(winsdk.system.Object):
    activity_id: winsdk.system.Guid
    error_code: winsdk.windows.foundation.HResult
    is_complete: winsdk.system.Boolean
    package: typing.Optional[Package]
    progress: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageInstallingEventArgs: ...

class PackageStagingEventArgs(winsdk.system.Object):
    activity_id: winsdk.system.Guid
    error_code: winsdk.windows.foundation.HResult
    is_complete: winsdk.system.Boolean
    package: typing.Optional[Package]
    progress: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageStagingEventArgs: ...

class PackageStatus(winsdk.system.Object):
    data_offline: winsdk.system.Boolean
    dependency_issue: winsdk.system.Boolean
    deployment_in_progress: winsdk.system.Boolean
    disabled: winsdk.system.Boolean
    license_issue: winsdk.system.Boolean
    modified: winsdk.system.Boolean
    needs_remediation: winsdk.system.Boolean
    not_available: winsdk.system.Boolean
    package_offline: winsdk.system.Boolean
    servicing: winsdk.system.Boolean
    tampered: winsdk.system.Boolean
    is_partially_staged: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageStatus: ...
    def verify_is_o_k(self) -> winsdk.system.Boolean: ...

class PackageStatusChangedEventArgs(winsdk.system.Object):
    package: typing.Optional[Package]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageStatusChangedEventArgs: ...

class PackageUninstallingEventArgs(winsdk.system.Object):
    activity_id: winsdk.system.Guid
    error_code: winsdk.windows.foundation.HResult
    is_complete: winsdk.system.Boolean
    package: typing.Optional[Package]
    progress: winsdk.system.Double
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageUninstallingEventArgs: ...

class PackageUpdateAvailabilityResult(winsdk.system.Object):
    availability: PackageUpdateAvailability
    extended_error: winsdk.windows.foundation.HResult
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageUpdateAvailabilityResult: ...

class PackageUpdatingEventArgs(winsdk.system.Object):
    activity_id: winsdk.system.Guid
    error_code: winsdk.windows.foundation.HResult
    is_complete: winsdk.system.Boolean
    progress: winsdk.system.Double
    source_package: typing.Optional[Package]
    target_package: typing.Optional[Package]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PackageUpdatingEventArgs: ...

class StartupTask(winsdk.system.Object):
    state: StartupTaskState
    task_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> StartupTask: ...
    def disable(self) -> None: ...
    @staticmethod
    def get_async(task_id: str, /) -> winsdk.windows.foundation.IAsyncOperation[StartupTask]: ...
    @staticmethod
    def get_for_current_package_async() -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[StartupTask]]: ...
    def request_enable_async(self) -> winsdk.windows.foundation.IAsyncOperation[StartupTaskState]: ...

class SuspendingDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SuspendingDeferral: ...
    def complete(self) -> None: ...

class SuspendingEventArgs(winsdk.system.Object):
    suspending_operation: typing.Optional[SuspendingOperation]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SuspendingEventArgs: ...

class SuspendingOperation(winsdk.system.Object):
    deadline: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> SuspendingOperation: ...
    def get_deferral(self) -> typing.Optional[SuspendingDeferral]: ...

class IEnteredBackgroundEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> IEnteredBackgroundEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class ILeavingBackgroundEventArgs(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ILeavingBackgroundEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class IPackageCatalogStatics2(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> IPackageCatalogStatics2: ...
    def open_for_package(self, package: typing.Optional[Package], /) -> typing.Optional[PackageCatalog]: ...

class ISuspendingDeferral(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ISuspendingDeferral: ...
    def complete(self) -> None: ...

class ISuspendingEventArgs(winsdk.system.Object):
    suspending_operation: typing.Optional[SuspendingOperation]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ISuspendingEventArgs: ...

class ISuspendingOperation(winsdk.system.Object):
    deadline: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> ISuspendingOperation: ...
    def get_deferral(self) -> typing.Optional[SuspendingDeferral]: ...

