# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

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

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class LicenseRefreshOption(enum.IntEnum):
    RUNNING_LICENSES = 0
    ALL_LICENSES = 1

class LicenseManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> LicenseManager: ...
    @staticmethod
    def add_license_async(license: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    @staticmethod
    def get_satisfaction_infos_async(content_ids: typing.Iterable[str], key_ids: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[LicenseSatisfactionResult]: ...
    @staticmethod
    def refresh_licenses_async(refresh_option: LicenseRefreshOption) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class LicenseSatisfactionInfo(_winrt.Object, interfaces=[]):
    is_satisfied: _winrt.Boolean
    satisfied_by_device: _winrt.Boolean
    satisfied_by_install_media: _winrt.Boolean
    satisfied_by_open_license: _winrt.Boolean
    satisfied_by_pass: _winrt.Boolean
    satisfied_by_signed_in_user: _winrt.Boolean
    satisfied_by_trial: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> LicenseSatisfactionInfo: ...

class LicenseSatisfactionResult(_winrt.Object, interfaces=[]):
    extended_error: winsdk.windows.foundation.HResult
    license_satisfaction_infos: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, LicenseSatisfactionInfo]]
    @staticmethod
    def _from(obj: _winrt.Object) -> LicenseSatisfactionResult: ...

