# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.system

class UserDataTaskDaysOfWeek(enum.IntFlag):
    NONE = 0
    SUNDAY = 0x1
    MONDAY = 0x2
    TUESDAY = 0x4
    WEDNESDAY = 0x8
    THURSDAY = 0x10
    FRIDAY = 0x20
    SATURDAY = 0x40

class UserDataTaskDetailsKind(enum.IntEnum):
    PLAIN_TEXT = 0
    HTML = 1

class UserDataTaskKind(enum.IntEnum):
    SINGLE = 0
    RECURRING = 1
    REGENERATING = 2

class UserDataTaskListOtherAppReadAccess(enum.IntEnum):
    FULL = 0
    SYSTEM_ONLY = 1
    NONE = 2

class UserDataTaskListOtherAppWriteAccess(enum.IntEnum):
    LIMITED = 0
    NONE = 1

class UserDataTaskListSyncStatus(enum.IntEnum):
    IDLE = 0
    SYNCING = 1
    UP_TO_DATE = 2
    AUTHENTICATION_ERROR = 3
    POLICY_ERROR = 4
    UNKNOWN_ERROR = 5

class UserDataTaskPriority(enum.IntEnum):
    NORMAL = 0
    LOW = -1
    HIGH = 1

class UserDataTaskQueryKind(enum.IntEnum):
    ALL = 0
    INCOMPLETE = 1
    COMPLETE = 2

class UserDataTaskQuerySortProperty(enum.IntEnum):
    DUE_DATE = 0

class UserDataTaskRecurrenceUnit(enum.IntEnum):
    DAILY = 0
    WEEKLY = 1
    MONTHLY = 2
    MONTHLY_ON_DAY = 3
    YEARLY = 4
    YEARLY_ON_DAY = 5

class UserDataTaskRegenerationUnit(enum.IntEnum):
    DAILY = 0
    WEEKLY = 1
    MONTHLY = 2
    YEARLY = 4

class UserDataTaskSensitivity(enum.IntEnum):
    PUBLIC = 0
    PRIVATE = 1

class UserDataTaskStoreAccessType(enum.IntEnum):
    APP_TASKS_READ_WRITE = 0
    ALL_TASKS_LIMITED_READ_WRITE = 1

class UserDataTaskWeekOfMonth(enum.IntEnum):
    FIRST = 0
    SECOND = 1
    THIRD = 2
    FOURTH = 3
    LAST = 4

Self = typing.TypeVar('Self')

class UserDataTask(winsdk.system.Object):
    regeneration_properties: typing.Optional[UserDataTaskRegenerationProperties]
    priority: UserDataTaskPriority
    completed_date: typing.Optional[typing.Optional[datetime.datetime]]
    due_date: typing.Optional[typing.Optional[datetime.datetime]]
    details_kind: UserDataTaskDetailsKind
    start_date: typing.Optional[typing.Optional[datetime.datetime]]
    details: str
    subject: str
    sensitivity: UserDataTaskSensitivity
    remote_id: str
    reminder: typing.Optional[typing.Optional[datetime.datetime]]
    recurrence_properties: typing.Optional[UserDataTaskRecurrenceProperties]
    id: str
    kind: UserDataTaskKind
    list_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTask: ...
    def __new__(cls: typing.Type[UserDataTask]) -> UserDataTask:...

class UserDataTaskBatch(winsdk.system.Object):
    tasks: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UserDataTask]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskBatch: ...

class UserDataTaskList(winsdk.system.Object):
    other_app_write_access: UserDataTaskListOtherAppWriteAccess
    other_app_read_access: UserDataTaskListOtherAppReadAccess
    display_name: str
    id: str
    limited_write_operations: typing.Optional[UserDataTaskListLimitedWriteOperations]
    source_display_name: str
    sync_manager: typing.Optional[UserDataTaskListSyncManager]
    user_data_account_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskList: ...
    def delete_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def delete_task_async(self, user_data_task_id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    def get_task_async(self, user_data_task: str) -> winsdk.windows.foundation.IAsyncOperation[UserDataTask]: ...
    @typing.overload
    def get_task_reader(self) -> typing.Optional[UserDataTaskReader]: ...
    @typing.overload
    def get_task_reader(self, options: typing.Optional[UserDataTaskQueryOptions]) -> typing.Optional[UserDataTaskReader]: ...
    def register_sync_manager_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def save_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def save_task_async(self, user_data_task: typing.Optional[UserDataTask]) -> winsdk.windows.foundation.IAsyncAction: ...

class UserDataTaskListLimitedWriteOperations(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskListLimitedWriteOperations: ...
    def try_complete_task_async(self, user_data_task_id: str) -> winsdk.windows.foundation.IAsyncOperation[str]: ...
    def try_create_or_update_task_async(self, user_data_task: typing.Optional[UserDataTask]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_delete_task_async(self, user_data_task_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def try_skip_occurrence_async(self, user_data_task_id: str) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...

class UserDataTaskListSyncManager(winsdk.system.Object):
    status: UserDataTaskListSyncStatus
    last_successful_sync_time: datetime.datetime
    last_attempted_sync_time: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskListSyncManager: ...
    def sync_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def add_sync_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[UserDataTaskListSyncManager, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_sync_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class UserDataTaskManager(winsdk.system.Object):
    user: typing.Optional[winsdk.windows.system.User]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskManager: ...
    @staticmethod
    def get_default() -> typing.Optional[UserDataTaskManager]: ...
    @staticmethod
    def get_for_user(user: typing.Optional[winsdk.windows.system.User]) -> typing.Optional[UserDataTaskManager]: ...
    def request_store_async(self, access_type: UserDataTaskStoreAccessType) -> winsdk.windows.foundation.IAsyncOperation[UserDataTaskStore]: ...

class UserDataTaskQueryOptions(winsdk.system.Object):
    sort_property: UserDataTaskQuerySortProperty
    kind: UserDataTaskQueryKind
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskQueryOptions: ...
    def __new__(cls: typing.Type[UserDataTaskQueryOptions]) -> UserDataTaskQueryOptions:...

class UserDataTaskReader(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskReader: ...
    def read_batch_async(self) -> winsdk.windows.foundation.IAsyncOperation[UserDataTaskBatch]: ...

class UserDataTaskRecurrenceProperties(winsdk.system.Object):
    week_of_month: typing.Optional[typing.Optional[UserDataTaskWeekOfMonth]]
    until: typing.Optional[typing.Optional[datetime.datetime]]
    unit: UserDataTaskRecurrenceUnit
    occurrences: typing.Optional[typing.Optional[winsdk.system.Int32]]
    month: typing.Optional[typing.Optional[winsdk.system.Int32]]
    interval: winsdk.system.Int32
    days_of_week: typing.Optional[typing.Optional[UserDataTaskDaysOfWeek]]
    day: typing.Optional[typing.Optional[winsdk.system.Int32]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskRecurrenceProperties: ...
    def __new__(cls: typing.Type[UserDataTaskRecurrenceProperties]) -> UserDataTaskRecurrenceProperties:...

class UserDataTaskRegenerationProperties(winsdk.system.Object):
    until: typing.Optional[typing.Optional[datetime.datetime]]
    unit: UserDataTaskRegenerationUnit
    occurrences: typing.Optional[typing.Optional[winsdk.system.Int32]]
    interval: winsdk.system.Int32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskRegenerationProperties: ...
    def __new__(cls: typing.Type[UserDataTaskRegenerationProperties]) -> UserDataTaskRegenerationProperties:...

class UserDataTaskStore(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> UserDataTaskStore: ...
    @typing.overload
    def create_list_async(self, name: str) -> winsdk.windows.foundation.IAsyncOperation[UserDataTaskList]: ...
    @typing.overload
    def create_list_async(self, name: str, user_data_account_id: str) -> winsdk.windows.foundation.IAsyncOperation[UserDataTaskList]: ...
    def find_lists_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[UserDataTaskList]]: ...
    def get_list_async(self, task_list_id: str) -> winsdk.windows.foundation.IAsyncOperation[UserDataTaskList]: ...

