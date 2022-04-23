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

class DateTimeFormatter(_winrt.Object, interfaces=[]):
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
    long_date: typing.Optional[DateTimeFormatter]
    long_time: typing.Optional[DateTimeFormatter]
    short_date: typing.Optional[DateTimeFormatter]
    short_time: typing.Optional[DateTimeFormatter]
    @staticmethod
    def _from(obj: _winrt.Object) -> DateTimeFormatter: ...
    @typing.overload
    def __init__(self, format_template: str) -> None: ...
    @typing.overload
    def __init__(self, format_template: str, languages: typing.Iterable[str]) -> None: ...
    @typing.overload
    def __init__(self, format_template: str, languages: typing.Iterable[str], geographic_region: str, calendar: str, clock: str) -> None: ...
    @typing.overload
    def __init__(self, year_format: YearFormat, month_format: MonthFormat, day_format: DayFormat, day_of_week_format: DayOfWeekFormat) -> None: ...
    @typing.overload
    def __init__(self, hour_format: HourFormat, minute_format: MinuteFormat, second_format: SecondFormat) -> None: ...
    @typing.overload
    def __init__(self, year_format: YearFormat, month_format: MonthFormat, day_format: DayFormat, day_of_week_format: DayOfWeekFormat, hour_format: HourFormat, minute_format: MinuteFormat, second_format: SecondFormat, languages: typing.Iterable[str]) -> None: ...
    @typing.overload
    def __init__(self, year_format: YearFormat, month_format: MonthFormat, day_format: DayFormat, day_of_week_format: DayOfWeekFormat, hour_format: HourFormat, minute_format: MinuteFormat, second_format: SecondFormat, languages: typing.Iterable[str], geographic_region: str, calendar: str, clock: str) -> None: ...
    @typing.overload
    def format(self, value: winsdk.windows.foundation.DateTime) -> str: ...
    @typing.overload
    def format(self, datetime: winsdk.windows.foundation.DateTime, time_zone_id: str) -> str: ...

