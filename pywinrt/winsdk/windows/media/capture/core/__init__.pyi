# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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
    import winsdk.windows.media.capture
except Exception:
    pass

class VariablePhotoCapturedEventArgs(_winrt.Object):
    capture_time_offset: winsdk.windows.foundation.TimeSpan
    captured_frame_control_values: typing.Optional[winsdk.windows.media.capture.CapturedFrameControlValues]
    frame: typing.Optional[winsdk.windows.media.capture.CapturedFrame]
    used_frame_controller_index: typing.Optional[typing.Optional[_winrt.UInt32]]
    @staticmethod
    def _from(obj: _winrt.Object) -> VariablePhotoCapturedEventArgs: ...

class VariablePhotoSequenceCapture(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> VariablePhotoSequenceCapture: ...
    def finish_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def start_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def stop_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def update_settings_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def add_photo_captured(self, handler: winsdk.windows.foundation.TypedEventHandler[VariablePhotoSequenceCapture, VariablePhotoCapturedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_photo_captured(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stopped(self, handler: winsdk.windows.foundation.TypedEventHandler[VariablePhotoSequenceCapture, _winrt.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stopped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

