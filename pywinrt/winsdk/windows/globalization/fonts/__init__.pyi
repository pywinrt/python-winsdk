# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.ui.text
except Exception:
    pass

class LanguageFont(_winrt.Object, interfaces=[]):
    font_family: str
    font_stretch: winsdk.windows.ui.text.FontStretch
    font_style: winsdk.windows.ui.text.FontStyle
    font_weight: winsdk.windows.ui.text.FontWeight
    scale_factor: _winrt.Double
    @staticmethod
    def _from(obj: _winrt.Object) -> LanguageFont: ...

class LanguageFontGroup(_winrt.Object, interfaces=[]):
    document_alternate1_font: typing.Optional[LanguageFont]
    document_alternate2_font: typing.Optional[LanguageFont]
    document_heading_font: typing.Optional[LanguageFont]
    fixed_width_text_font: typing.Optional[LanguageFont]
    modern_document_font: typing.Optional[LanguageFont]
    traditional_document_font: typing.Optional[LanguageFont]
    u_i_caption_font: typing.Optional[LanguageFont]
    u_i_heading_font: typing.Optional[LanguageFont]
    u_i_notification_heading_font: typing.Optional[LanguageFont]
    u_i_text_font: typing.Optional[LanguageFont]
    u_i_title_font: typing.Optional[LanguageFont]
    @staticmethod
    def _from(obj: _winrt.Object) -> LanguageFontGroup: ...
    def __init__(self, language_tag: str) -> None: ...

