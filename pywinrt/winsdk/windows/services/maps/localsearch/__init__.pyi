# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.geolocation
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.globalization
import winsdk.windows.services.maps

class LocalLocationFinderStatus(enum.IntEnum):
    SUCCESS = 0
    UNKNOWN_ERROR = 1
    INVALID_CREDENTIALS = 2
    INVALID_CATEGORY = 3
    INVALID_SEARCH_TERM = 4
    INVALID_SEARCH_AREA = 5
    NETWORK_FAILURE = 6
    NOT_SUPPORTED = 7

Self = typing.TypeVar('Self')

class LocalCategories(winsdk.system.Object):
    all: typing.ClassVar[str]
    bank_and_credit_unions: typing.ClassVar[str]
    eat_drink: typing.ClassVar[str]
    hospitals: typing.ClassVar[str]
    hotels_and_motels: typing.ClassVar[str]
    parking: typing.ClassVar[str]
    see_do: typing.ClassVar[str]
    shop: typing.ClassVar[str]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LocalCategories: ...

class LocalLocation(winsdk.system.Object):
    address: typing.Optional[winsdk.windows.services.maps.MapAddress]
    data_attribution: str
    description: str
    display_name: str
    identifier: str
    phone_number: str
    point: typing.Optional[winsdk.windows.devices.geolocation.Geopoint]
    category: str
    hours_of_operation: typing.Optional[winsdk.windows.foundation.collections.IVectorView[LocalLocationHoursOfOperationItem]]
    rating_info: typing.Optional[LocalLocationRatingInfo]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LocalLocation: ...

class LocalLocationFinder(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LocalLocationFinder: ...
    @staticmethod
    def find_local_locations_async(search_term: str, search_area: typing.Optional[winsdk.windows.devices.geolocation.Geocircle], local_category: str, max_results: winsdk.system.UInt32, /) -> winsdk.windows.foundation.IAsyncOperation[LocalLocationFinderResult]: ...

class LocalLocationFinderResult(winsdk.system.Object):
    local_locations: typing.Optional[winsdk.windows.foundation.collections.IVectorView[LocalLocation]]
    status: LocalLocationFinderStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LocalLocationFinderResult: ...

class LocalLocationHoursOfOperationItem(winsdk.system.Object):
    day: winsdk.windows.globalization.DayOfWeek
    span: datetime.timedelta
    start: datetime.timedelta
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LocalLocationHoursOfOperationItem: ...

class LocalLocationRatingInfo(winsdk.system.Object):
    aggregate_rating: typing.Optional[typing.Optional[winsdk.system.Double]]
    provider_identifier: str
    rating_count: typing.Optional[typing.Optional[winsdk.system.Int32]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> LocalLocationRatingInfo: ...

class PlaceInfoHelper(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PlaceInfoHelper: ...
    @staticmethod
    def create_from_local_location(location: typing.Optional[LocalLocation], /) -> typing.Optional[winsdk.windows.services.maps.PlaceInfo]: ...

