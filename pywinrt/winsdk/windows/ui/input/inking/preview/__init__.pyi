# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.foundation
import winsdk.windows.ui.composition

Self = typing.TypeVar('Self')

class PalmRejectionDelayZonePreview(winsdk.system.Object):
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> PalmRejectionDelayZonePreview: ...
    def close(self) -> None: ...
    @typing.overload
    @staticmethod
    def create_for_visual(input_panel_visual: typing.Optional[winsdk.windows.ui.composition.Visual], input_panel_rect: winsdk.windows.foundation.Rect, /) -> typing.Optional[PalmRejectionDelayZonePreview]: ...
    @typing.overload
    @staticmethod
    def create_for_visual(input_panel_visual: typing.Optional[winsdk.windows.ui.composition.Visual], input_panel_rect: winsdk.windows.foundation.Rect, viewport_visual: typing.Optional[winsdk.windows.ui.composition.Visual], viewport_rect: winsdk.windows.foundation.Rect, /) -> typing.Optional[PalmRejectionDelayZonePreview]: ...

