# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.storage
except Exception:
    pass

class ApplicationDataManager(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> ApplicationDataManager: ...
    @staticmethod
    def create_for_package_family(package_family_name: str) -> typing.Optional[winsdk.windows.storage.ApplicationData]: ...

