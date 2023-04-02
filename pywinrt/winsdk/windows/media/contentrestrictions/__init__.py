# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Media.ContentRestrictions")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
    pass

class ContentAccessRestrictionLevel(enum.IntEnum):
    ALLOW = 0
    WARN = 1
    BLOCK = 2
    HIDE = 3

class RatedContentCategory(enum.IntEnum):
    GENERAL = 0
    APPLICATION = 1
    GAME = 2
    MOVIE = 3
    TELEVISION = 4
    MUSIC = 5

_ns_module._register_ContentAccessRestrictionLevel(ContentAccessRestrictionLevel)
_ns_module._register_RatedContentCategory(RatedContentCategory)

ContentRestrictionsBrowsePolicy = _ns_module.ContentRestrictionsBrowsePolicy
RatedContentDescription = _ns_module.RatedContentDescription
RatedContentRestrictions = _ns_module.RatedContentRestrictions
