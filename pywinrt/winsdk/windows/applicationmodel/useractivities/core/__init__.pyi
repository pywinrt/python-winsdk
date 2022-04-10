# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.applicationmodel.useractivities
except Exception:
    pass

try:
    import winsdk.windows.foundation
except Exception:
    pass

class CoreUserActivityManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> CoreUserActivityManager: ...
    @staticmethod
    def create_user_activity_session_in_background(activity: typing.Optional[winsdk.windows.applicationmodel.useractivities.UserActivity]) -> typing.Optional[winsdk.windows.applicationmodel.useractivities.UserActivitySession]: ...
    @staticmethod
    def delete_user_activity_sessions_in_time_range_async(channel: typing.Optional[winsdk.windows.applicationmodel.useractivities.UserActivityChannel], start_time: winsdk.windows.foundation.DateTime, end_time: winsdk.windows.foundation.DateTime) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

