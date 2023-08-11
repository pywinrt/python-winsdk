# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.foundation.collections

class DayFormat(enum.IntEnum):
    NONE = 0
    DEFAULT = 1

class DayOfWeekFormat(enum.IntEnum):
    NONE = 0
    DEFAULT = 1
    ABBREVIATED = 2
    FULL = 3

class HourFormat(enum.IntEnum):
    NONE = 0
    DEFAULT = 1

class MinuteFormat(enum.IntEnum):
    NONE = 0
    DEFAULT = 1

class MonthFormat(enum.IntEnum):
    NONE = 0
    DEFAULT = 1
    ABBREVIATED = 2
    FULL = 3
    NUMERIC = 4

class SecondFormat(enum.IntEnum):
    NONE = 0
    DEFAULT = 1

class YearFormat(enum.IntEnum):
    NONE = 0
    DEFAULT = 1
    ABBREVIATED = 2
    FULL = 3

Self = typing.TypeVar('Self')

class DateTimeFormatter(winsdk.system.Object):
    numeral_system: str
    clock: str
    geographic_region: str
    include_day: DayFormat
    include_day_of_week: DayOfWeekFormat
    include_hour: HourFormat
    include_minute: MinuteFormat
    include_month: MonthFormat
    include_second: SecondFormat
    include_year: YearFormat
    languages: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    calendar: str
    patterns: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    resolved_geographic_region: str
    resolved_language: str
    template: str
    long_date: typing.ClassVar[typing.Optional[DateTimeFormatter]]
    long_time: typing.ClassVar[typing.Optional[DateTimeFormatter]]
    short_date: typing.ClassVar[typing.Optional[DateTimeFormatter]]
    short_time: typing.ClassVar[typing.Optional[DateTimeFormatter]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> DateTimeFormatter: ...
    @typing.overload
    def __new__(cls: typing.Type[DateTimeFormatter], format_template: str) -> DateTimeFormatter:...
    @typing.overload
    def __new__(cls: typing.Type[DateTimeFormatter], format_template: str, languages: typing.Iterable[str]) -> DateTimeFormatter:...
    @typing.overload
    def __new__(cls: typing.Type[DateTimeFormatter], format_template: str, languages: typing.Iterable[str], geographic_region: str, calendar: str, clock: str) -> DateTimeFormatter:...
    @typing.overload
    def __new__(cls: typing.Type[DateTimeFormatter], year_format: YearFormat, month_format: MonthFormat, day_format: DayFormat, day_of_week_format: DayOfWeekFormat) -> DateTimeFormatter:...
    @typing.overload
    def __new__(cls: typing.Type[DateTimeFormatter], hour_format: HourFormat, minute_format: MinuteFormat, second_format: SecondFormat) -> DateTimeFormatter:...
    @typing.overload
    def __new__(cls: typing.Type[DateTimeFormatter], year_format: YearFormat, month_format: MonthFormat, day_format: DayFormat, day_of_week_format: DayOfWeekFormat, hour_format: HourFormat, minute_format: MinuteFormat, second_format: SecondFormat, languages: typing.Iterable[str]) -> DateTimeFormatter:...
    @typing.overload
    def __new__(cls: typing.Type[DateTimeFormatter], year_format: YearFormat, month_format: MonthFormat, day_format: DayFormat, day_of_week_format: DayOfWeekFormat, hour_format: HourFormat, minute_format: MinuteFormat, second_format: SecondFormat, languages: typing.Iterable[str], geographic_region: str, calendar: str, clock: str) -> DateTimeFormatter:...
    @typing.overload
    def format(self, value: datetime.datetime, /) -> str: ...
    @typing.overload
    def format(self, datetime: datetime.datetime, time_zone_id: str, /) -> str: ...

