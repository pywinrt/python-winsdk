# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.ApplicationModel.UserActivities.Core")

try:
    import winsdk.windows.applicationmodel.useractivities
except ImportError:
    pass

try:
    import winsdk.windows.foundation
except ImportError:
    pass


CoreUserActivityManager = _ns_module.CoreUserActivityManager
