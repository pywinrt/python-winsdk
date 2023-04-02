# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.geolocation
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams
import winsdk.windows.ui

class WalletActionKind(enum.IntEnum):
    OPEN_ITEM = 0
    TRANSACTION = 1
    MORE_TRANSACTIONS = 2
    MESSAGE = 3
    VERB = 4

class WalletBarcodeSymbology(enum.IntEnum):
    INVALID = 0
    UPCA = 1
    UPCE = 2
    EAN13 = 3
    EAN8 = 4
    ITF = 5
    CODE39 = 6
    CODE128 = 7
    QR = 8
    PDF417 = 9
    AZTEC = 10
    CUSTOM = 100000

class WalletDetailViewPosition(enum.IntEnum):
    HIDDEN = 0
    HEADER_FIELD1 = 1
    HEADER_FIELD2 = 2
    PRIMARY_FIELD1 = 3
    PRIMARY_FIELD2 = 4
    SECONDARY_FIELD1 = 5
    SECONDARY_FIELD2 = 6
    SECONDARY_FIELD3 = 7
    SECONDARY_FIELD4 = 8
    SECONDARY_FIELD5 = 9
    CENTER_FIELD1 = 10
    FOOTER_FIELD1 = 11
    FOOTER_FIELD2 = 12
    FOOTER_FIELD3 = 13
    FOOTER_FIELD4 = 14

class WalletItemKind(enum.IntEnum):
    INVALID = 0
    DEAL = 1
    GENERAL = 2
    PAYMENT_INSTRUMENT = 3
    TICKET = 4
    BOARDING_PASS = 5
    MEMBERSHIP_CARD = 6

class WalletSummaryViewPosition(enum.IntEnum):
    HIDDEN = 0
    FIELD1 = 1
    FIELD2 = 2

Self = typing.TypeVar('Self')

class WalletBarcode(winsdk.system.Object):
    symbology: WalletBarcodeSymbology
    value: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WalletBarcode: ...
    @typing.overload
    def __new__(cls: typing.Type[WalletBarcode], symbology: WalletBarcodeSymbology, value: str) -> WalletBarcode:...
    @typing.overload
    def __new__(cls: typing.Type[WalletBarcode], stream_to_barcode_image: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]) -> WalletBarcode:...
    def get_image_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IRandomAccessStreamReference]: ...

class WalletItem(winsdk.system.Object):
    display_name: str
    display_message: str
    logo_text: str
    body_font_color: winsdk.windows.ui.Color
    body_color: winsdk.windows.ui.Color
    body_background_image: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    is_display_message_launchable: winsdk.system.Boolean
    is_acknowledged: winsdk.system.Boolean
    is_more_transaction_history_launchable: winsdk.system.Boolean
    header_font_color: winsdk.windows.ui.Color
    header_color: winsdk.windows.ui.Color
    header_background_image: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    expiration_date: typing.Optional[typing.Optional[datetime.datetime]]
    logo99x99: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    logo_image: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    promotional_image: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    logo159x159: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    last_updated: typing.Optional[typing.Optional[datetime.datetime]]
    issuer_display_name: str
    barcode: typing.Optional[WalletBarcode]
    relevant_date_display_message: str
    relevant_date: typing.Optional[typing.Optional[datetime.datetime]]
    logo336x336: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]
    kind: WalletItemKind
    display_properties: typing.Optional[winsdk.windows.foundation.collections.IMap[str, WalletItemCustomProperty]]
    id: str
    relevant_locations: typing.Optional[winsdk.windows.foundation.collections.IMap[str, WalletRelevantLocation]]
    transaction_history: typing.Optional[winsdk.windows.foundation.collections.IMap[str, WalletTransaction]]
    verbs: typing.Optional[winsdk.windows.foundation.collections.IMap[str, WalletVerb]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WalletItem: ...
    def __new__(cls: typing.Type[WalletItem], kind: WalletItemKind, display_name: str) -> WalletItem:...

class WalletItemCustomProperty(winsdk.system.Object):
    value: str
    summary_view_position: WalletSummaryViewPosition
    name: str
    detail_view_position: WalletDetailViewPosition
    auto_detect_links: winsdk.system.Boolean
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WalletItemCustomProperty: ...
    def __new__(cls: typing.Type[WalletItemCustomProperty], name: str, value: str) -> WalletItemCustomProperty:...

class WalletItemStore(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WalletItemStore: ...
    def add_async(self, id: str, item: typing.Optional[WalletItem]) -> winsdk.windows.foundation.IAsyncAction: ...
    def clear_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    def delete_async(self, id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def get_items_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[WalletItem]]: ...
    @typing.overload
    def get_items_async(self, kind: WalletItemKind) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[WalletItem]]: ...
    def get_wallet_item_async(self, id: str) -> winsdk.windows.foundation.IAsyncOperation[WalletItem]: ...
    def import_item_async(self, stream: typing.Optional[winsdk.windows.storage.streams.IRandomAccessStreamReference]) -> winsdk.windows.foundation.IAsyncOperation[WalletItem]: ...
    @typing.overload
    def show_async(self) -> winsdk.windows.foundation.IAsyncAction: ...
    @typing.overload
    def show_async(self, id: str) -> winsdk.windows.foundation.IAsyncAction: ...
    def update_async(self, item: typing.Optional[WalletItem]) -> winsdk.windows.foundation.IAsyncAction: ...

class WalletManager(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WalletManager: ...
    @staticmethod
    def request_store_async() -> winsdk.windows.foundation.IAsyncOperation[WalletItemStore]: ...

class WalletRelevantLocation(winsdk.system.Object):
    position: winsdk.windows.devices.geolocation.BasicGeoposition
    display_message: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WalletRelevantLocation: ...
    def __new__(cls: typing.Type[WalletRelevantLocation]) -> WalletRelevantLocation:...

class WalletTransaction(winsdk.system.Object):
    transaction_date: typing.Optional[typing.Optional[datetime.datetime]]
    is_launchable: winsdk.system.Boolean
    ignore_time_of_day: winsdk.system.Boolean
    display_location: str
    display_amount: str
    description: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WalletTransaction: ...
    def __new__(cls: typing.Type[WalletTransaction]) -> WalletTransaction:...

class WalletVerb(winsdk.system.Object):
    name: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> WalletVerb: ...
    def __new__(cls: typing.Type[WalletVerb], name: str) -> WalletVerb:...

