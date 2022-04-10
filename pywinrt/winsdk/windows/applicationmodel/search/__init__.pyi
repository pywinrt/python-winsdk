# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import sys
import types
import typing
import uuid

import winsdk._winrt as _winrt

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.storage
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class LocalContentSuggestionSettings(_winrt.Object):
    enabled: _winrt.Boolean
    aqs_filter: str
    locations: typing.Optional[winsdk.windows.foundation.collections.IVector[winsdk.windows.storage.StorageFolder]]
    properties_to_match: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: _winrt.Object) -> LocalContentSuggestionSettings: ...
    def __init__(self) -> None: ...

class SearchPaneQueryLinguisticDetails(_winrt.Object):
    query_text_alternatives: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    query_text_composition_length: _winrt.UInt32
    query_text_composition_start: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> SearchPaneQueryLinguisticDetails: ...

class SearchQueryLinguisticDetails(_winrt.Object):
    query_text_alternatives: typing.Optional[winsdk.windows.foundation.collections.IVectorView[str]]
    query_text_composition_length: _winrt.UInt32
    query_text_composition_start: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> SearchQueryLinguisticDetails: ...
    def __init__(self, query_text_alternatives: typing.Iterable[str], query_text_composition_start: _winrt.UInt32, query_text_composition_length: _winrt.UInt32) -> None: ...

class SearchSuggestionCollection(_winrt.Object):
    size: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> SearchSuggestionCollection: ...
    def append_query_suggestion(self, text: str) -> None: ...
    def append_query_suggestions(self, suggestions: typing.Iterable[str]) -> None: ...
    def append_result_suggestion(self, text: str, detail_text: str, tag: str, image: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference], image_alternate_text: str) -> None: ...
    def append_search_separator(self, label: str) -> None: ...

class SearchSuggestionsRequest(_winrt.Object):
    is_canceled: _winrt.Boolean
    search_suggestion_collection: typing.Optional[SearchSuggestionCollection]
    @staticmethod
    def _from(obj: _winrt.Object) -> SearchSuggestionsRequest: ...
    def get_deferral(self) -> typing.Optional[SearchSuggestionsRequestDeferral]: ...

class SearchSuggestionsRequestDeferral(_winrt.Object):
    @staticmethod
    def _from(obj: _winrt.Object) -> SearchSuggestionsRequestDeferral: ...
    def complete(self) -> None: ...

