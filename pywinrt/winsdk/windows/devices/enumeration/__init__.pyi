# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.applicationmodel.background
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.security.credentials
import winsdk.windows.storage.streams
import winsdk.windows.ui
import winsdk.windows.ui.popups

class DeviceAccessStatus(enum.IntEnum):
    UNSPECIFIED = 0
    ALLOWED = 1
    DENIED_BY_USER = 2
    DENIED_BY_SYSTEM = 3

class DeviceClass(enum.IntEnum):
    ALL = 0
    AUDIO_CAPTURE = 1
    AUDIO_RENDER = 2
    PORTABLE_STORAGE_DEVICE = 3
    VIDEO_CAPTURE = 4
    IMAGE_SCANNER = 5
    LOCATION = 6

class DeviceInformationKind(enum.IntEnum):
    UNKNOWN = 0
    DEVICE_INTERFACE = 1
    DEVICE_CONTAINER = 2
    DEVICE = 3
    DEVICE_INTERFACE_CLASS = 4
    ASSOCIATION_ENDPOINT = 5
    ASSOCIATION_ENDPOINT_CONTAINER = 6
    ASSOCIATION_ENDPOINT_SERVICE = 7
    DEVICE_PANEL = 8

class DevicePairingKinds(enum.IntFlag):
    NONE = 0
    CONFIRM_ONLY = 0x1
    DISPLAY_PIN = 0x2
    PROVIDE_PIN = 0x4
    CONFIRM_PIN_MATCH = 0x8
    PROVIDE_PASSWORD_CREDENTIAL = 0x10

class DevicePairingProtectionLevel(enum.IntEnum):
    DEFAULT = 0
    NONE = 1
    ENCRYPTION = 2
    ENCRYPTION_AND_AUTHENTICATION = 3

class DevicePairingResultStatus(enum.IntEnum):
    PAIRED = 0
    NOT_READY_TO_PAIR = 1
    NOT_PAIRED = 2
    ALREADY_PAIRED = 3
    CONNECTION_REJECTED = 4
    TOO_MANY_CONNECTIONS = 5
    HARDWARE_FAILURE = 6
    AUTHENTICATION_TIMEOUT = 7
    AUTHENTICATION_NOT_ALLOWED = 8
    AUTHENTICATION_FAILURE = 9
    NO_SUPPORTED_PROFILES = 10
    PROTECTION_LEVEL_COULD_NOT_BE_MET = 11
    ACCESS_DENIED = 12
    INVALID_CEREMONY_DATA = 13
    PAIRING_CANCELED = 14
    OPERATION_ALREADY_IN_PROGRESS = 15
    REQUIRED_HANDLER_NOT_REGISTERED = 16
    REJECTED_BY_HANDLER = 17
    REMOTE_DEVICE_HAS_ASSOCIATION = 18
    FAILED = 19

class DevicePickerDisplayStatusOptions(enum.IntFlag):
    NONE = 0
    SHOW_PROGRESS = 0x1
    SHOW_DISCONNECT_BUTTON = 0x2
    SHOW_RETRY_BUTTON = 0x4

class DeviceUnpairingResultStatus(enum.IntEnum):
    UNPAIRED = 0
    ALREADY_UNPAIRED = 1
    OPERATION_ALREADY_IN_PROGRESS = 2
    ACCESS_DENIED = 3
    FAILED = 4

class DeviceWatcherEventKind(enum.IntEnum):
    ADD = 0
    UPDATE = 1
    REMOVE = 2

class DeviceWatcherStatus(enum.IntEnum):
    CREATED = 0
    STARTED = 1
    ENUMERATION_COMPLETED = 2
    STOPPING = 3
    STOPPED = 4
    ABORTED = 5

class Panel(enum.IntEnum):
    UNKNOWN = 0
    FRONT = 1
    BACK = 2
    TOP = 3
    BOTTOM = 4
    LEFT = 5
    RIGHT = 6

Self = typing.TypeVar('Self')

class DeviceAccessChangedEventArgs(winsdk.system.Object):
    status: DeviceAccessStatus
    id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceAccessChangedEventArgs: ...

class DeviceAccessInformation(winsdk.system.Object):
    current_status: DeviceAccessStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceAccessInformation: ...
    @staticmethod
    def create_from_device_class(device_class: DeviceClass) -> typing.Optional[DeviceAccessInformation]: ...
    @staticmethod
    def create_from_device_class_id(device_class_id: winsdk.system.Guid) -> typing.Optional[DeviceAccessInformation]: ...
    @staticmethod
    def create_from_id(device_id: str) -> typing.Optional[DeviceAccessInformation]: ...
    def add_access_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[DeviceAccessInformation, DeviceAccessChangedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_access_changed(self, cookie: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DeviceConnectionChangeTriggerDetails(winsdk.system.Object):
    device_id: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceConnectionChangeTriggerDetails: ...

class DeviceDisconnectButtonClickedEventArgs(winsdk.system.Object):
    device: typing.Optional[DeviceInformation]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceDisconnectButtonClickedEventArgs: ...

class DeviceInformation(winsdk.system.Object):
    enclosure_location: typing.Optional[EnclosureLocation]
    id: str
    is_default: winsdk.system.Boolean
    is_enabled: winsdk.system.Boolean
    name: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    kind: DeviceInformationKind
    pairing: typing.Optional[DeviceInformationPairing]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceInformation: ...
    @typing.overload
    @staticmethod
    def create_from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[DeviceInformation]: ...
    @typing.overload
    @staticmethod
    def create_from_id_async(device_id: str, additional_properties: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[DeviceInformation]: ...
    @typing.overload
    @staticmethod
    def create_from_id_async(device_id: str, additional_properties: typing.Iterable[str], kind: DeviceInformationKind) -> winsdk.windows.foundation.IAsyncOperation[DeviceInformation]: ...
    @typing.overload
    @staticmethod
    def create_watcher() -> typing.Optional[DeviceWatcher]: ...
    @typing.overload
    @staticmethod
    def create_watcher(device_class: DeviceClass) -> typing.Optional[DeviceWatcher]: ...
    @typing.overload
    @staticmethod
    def create_watcher(aqs_filter: str, additional_properties: typing.Iterable[str]) -> typing.Optional[DeviceWatcher]: ...
    @typing.overload
    @staticmethod
    def create_watcher(aqs_filter: str, additional_properties: typing.Iterable[str], kind: DeviceInformationKind) -> typing.Optional[DeviceWatcher]: ...
    @typing.overload
    @staticmethod
    def find_all_async() -> winsdk.windows.foundation.IAsyncOperation[DeviceInformationCollection]: ...
    @typing.overload
    @staticmethod
    def find_all_async(device_class: DeviceClass) -> winsdk.windows.foundation.IAsyncOperation[DeviceInformationCollection]: ...
    @typing.overload
    @staticmethod
    def find_all_async(aqs_filter: str, additional_properties: typing.Iterable[str]) -> winsdk.windows.foundation.IAsyncOperation[DeviceInformationCollection]: ...
    @typing.overload
    @staticmethod
    def find_all_async(aqs_filter: str, additional_properties: typing.Iterable[str], kind: DeviceInformationKind) -> winsdk.windows.foundation.IAsyncOperation[DeviceInformationCollection]: ...
    @staticmethod
    def get_aqs_filter_from_device_class(device_class: DeviceClass) -> str: ...
    def get_glyph_thumbnail_async(self) -> winsdk.windows.foundation.IAsyncOperation[DeviceThumbnail]: ...
    def get_thumbnail_async(self) -> winsdk.windows.foundation.IAsyncOperation[DeviceThumbnail]: ...
    def update(self, update_info: typing.Optional[DeviceInformationUpdate]) -> None: ...

class DeviceInformationCollection(winsdk.system.Object, typing.Sequence[DeviceInformation]):
    size: winsdk.system.UInt32
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> DeviceInformation: ...
    @typing.overload
    def __getitem__(self, index: slice) -> winsdk.system.Array[DeviceInformation]: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceInformationCollection: ...
    def first(self) -> typing.Optional[winsdk.windows.foundation.collections.IIterator[DeviceInformation]]: ...
    def get_at(self, index: winsdk.system.UInt32) -> typing.Optional[DeviceInformation]: ...
    def get_many(self, start_index: winsdk.system.UInt32, items: winsdk.system.Array[DeviceInformation]) -> winsdk.system.UInt32: ...
    def index_of(self, value: typing.Optional[DeviceInformation]) -> typing.Tuple[winsdk.system.Boolean, winsdk.system.UInt32]: ...

class DeviceInformationCustomPairing(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceInformationCustomPairing: ...
    @typing.overload
    def pair_async(self, pairing_kinds_supported: DevicePairingKinds) -> winsdk.windows.foundation.IAsyncOperation[DevicePairingResult]: ...
    @typing.overload
    def pair_async(self, pairing_kinds_supported: DevicePairingKinds, min_protection_level: DevicePairingProtectionLevel) -> winsdk.windows.foundation.IAsyncOperation[DevicePairingResult]: ...
    @typing.overload
    def pair_async(self, pairing_kinds_supported: DevicePairingKinds, min_protection_level: DevicePairingProtectionLevel, device_pairing_settings: typing.Optional[IDevicePairingSettings]) -> winsdk.windows.foundation.IAsyncOperation[DevicePairingResult]: ...
    def add_pairing_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[DeviceInformationCustomPairing, DevicePairingRequestedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_pairing_requested(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DeviceInformationPairing(winsdk.system.Object):
    can_pair: winsdk.system.Boolean
    is_paired: winsdk.system.Boolean
    custom: typing.Optional[DeviceInformationCustomPairing]
    protection_level: DevicePairingProtectionLevel
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceInformationPairing: ...
    @typing.overload
    def pair_async(self) -> winsdk.windows.foundation.IAsyncOperation[DevicePairingResult]: ...
    @typing.overload
    def pair_async(self, min_protection_level: DevicePairingProtectionLevel) -> winsdk.windows.foundation.IAsyncOperation[DevicePairingResult]: ...
    @typing.overload
    def pair_async(self, min_protection_level: DevicePairingProtectionLevel, device_pairing_settings: typing.Optional[IDevicePairingSettings]) -> winsdk.windows.foundation.IAsyncOperation[DevicePairingResult]: ...
    @staticmethod
    def try_register_for_all_inbound_pairing_requests(pairing_kinds_supported: DevicePairingKinds) -> winsdk.system.Boolean: ...
    @staticmethod
    def try_register_for_all_inbound_pairing_requests_with_protection_level(pairing_kinds_supported: DevicePairingKinds, min_protection_level: DevicePairingProtectionLevel) -> winsdk.system.Boolean: ...
    def unpair_async(self) -> winsdk.windows.foundation.IAsyncOperation[DeviceUnpairingResult]: ...

class DeviceInformationUpdate(winsdk.system.Object):
    id: str
    properties: typing.Optional[winsdk.windows.foundation.collections.IMapView[str, winsdk.system.Object]]
    kind: DeviceInformationKind
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceInformationUpdate: ...

class DevicePairingRequestedEventArgs(winsdk.system.Object):
    device_information: typing.Optional[DeviceInformation]
    pairing_kind: DevicePairingKinds
    pin: str
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DevicePairingRequestedEventArgs: ...
    @typing.overload
    def accept(self) -> None: ...
    @typing.overload
    def accept(self, pin: str) -> None: ...
    def accept_with_password_credential(self, password_credential: typing.Optional[winsdk.windows.security.credentials.PasswordCredential]) -> None: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...

class DevicePairingResult(winsdk.system.Object):
    protection_level_used: DevicePairingProtectionLevel
    status: DevicePairingResultStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DevicePairingResult: ...

class DevicePicker(winsdk.system.Object):
    appearance: typing.Optional[DevicePickerAppearance]
    filter: typing.Optional[DevicePickerFilter]
    requested_properties: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DevicePicker: ...
    def __new__(cls: typing.Type[DevicePicker]) -> DevicePicker:...
    def hide(self) -> None: ...
    @typing.overload
    def pick_single_device_async(self, selection: winsdk.windows.foundation.Rect) -> winsdk.windows.foundation.IAsyncOperation[DeviceInformation]: ...
    @typing.overload
    def pick_single_device_async(self, selection: winsdk.windows.foundation.Rect, placement: winsdk.windows.ui.popups.Placement) -> winsdk.windows.foundation.IAsyncOperation[DeviceInformation]: ...
    def set_display_status(self, device: typing.Optional[DeviceInformation], status: str, options: DevicePickerDisplayStatusOptions) -> None: ...
    @typing.overload
    def show(self, selection: winsdk.windows.foundation.Rect) -> None: ...
    @typing.overload
    def show(self, selection: winsdk.windows.foundation.Rect, placement: winsdk.windows.ui.popups.Placement) -> None: ...
    def add_device_picker_dismissed(self, handler: winsdk.windows.foundation.TypedEventHandler[DevicePicker, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_device_picker_dismissed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_device_selected(self, handler: winsdk.windows.foundation.TypedEventHandler[DevicePicker, DeviceSelectedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_device_selected(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_disconnect_button_clicked(self, handler: winsdk.windows.foundation.TypedEventHandler[DevicePicker, DeviceDisconnectButtonClickedEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_disconnect_button_clicked(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DevicePickerAppearance(winsdk.system.Object):
    title: str
    selected_foreground_color: winsdk.windows.ui.Color
    selected_background_color: winsdk.windows.ui.Color
    selected_accent_color: winsdk.windows.ui.Color
    foreground_color: winsdk.windows.ui.Color
    background_color: winsdk.windows.ui.Color
    accent_color: winsdk.windows.ui.Color
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DevicePickerAppearance: ...

class DevicePickerFilter(winsdk.system.Object):
    supported_device_classes: typing.Optional[winsdk.windows.foundation.collections.IVector[DeviceClass]]
    supported_device_selectors: typing.Optional[winsdk.windows.foundation.collections.IVector[str]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DevicePickerFilter: ...

class DeviceSelectedEventArgs(winsdk.system.Object):
    selected_device: typing.Optional[DeviceInformation]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceSelectedEventArgs: ...

class DeviceThumbnail(winsdk.system.Object):
    content_type: str
    size: winsdk.system.UInt64
    can_read: winsdk.system.Boolean
    can_write: winsdk.system.Boolean
    position: winsdk.system.UInt64
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceThumbnail: ...
    def clone_stream(self) -> typing.Optional[winsdk.windows.storage.streams.IRandomAccessStream]: ...
    def close(self) -> None: ...
    def flush_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.system.Boolean]: ...
    def get_input_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IInputStream]: ...
    def get_output_stream_at(self, position: winsdk.system.UInt64) -> typing.Optional[winsdk.windows.storage.streams.IOutputStream]: ...
    def read_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer], count: winsdk.system.UInt32, options: winsdk.windows.storage.streams.InputStreamOptions) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.windows.storage.streams.IBuffer, winsdk.system.UInt32]: ...
    def seek(self, position: winsdk.system.UInt64) -> None: ...
    def write_async(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperationWithProgress[winsdk.system.UInt32, winsdk.system.UInt32]: ...

class DeviceUnpairingResult(winsdk.system.Object):
    status: DeviceUnpairingResultStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceUnpairingResult: ...

class DeviceWatcher(winsdk.system.Object):
    status: DeviceWatcherStatus
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceWatcher: ...
    def get_background_trigger(self, requested_event_kinds: typing.Iterable[DeviceWatcherEventKind]) -> typing.Optional[winsdk.windows.applicationmodel.background.DeviceWatcherTrigger]: ...
    def start(self) -> None: ...
    def stop(self) -> None: ...
    def add_added(self, handler: winsdk.windows.foundation.TypedEventHandler[DeviceWatcher, DeviceInformation]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_added(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_enumeration_completed(self, handler: winsdk.windows.foundation.TypedEventHandler[DeviceWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_enumeration_completed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_removed(self, handler: winsdk.windows.foundation.TypedEventHandler[DeviceWatcher, DeviceInformationUpdate]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_removed(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_stopped(self, handler: winsdk.windows.foundation.TypedEventHandler[DeviceWatcher, winsdk.system.Object]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_stopped(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...
    def add_updated(self, handler: winsdk.windows.foundation.TypedEventHandler[DeviceWatcher, DeviceInformationUpdate]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_updated(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class DeviceWatcherEvent(winsdk.system.Object):
    device_information: typing.Optional[DeviceInformation]
    device_information_update: typing.Optional[DeviceInformationUpdate]
    kind: DeviceWatcherEventKind
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceWatcherEvent: ...

class DeviceWatcherTriggerDetails(winsdk.system.Object):
    device_watcher_events: typing.Optional[winsdk.windows.foundation.collections.IVectorView[DeviceWatcherEvent]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> DeviceWatcherTriggerDetails: ...

class EnclosureLocation(winsdk.system.Object):
    in_dock: winsdk.system.Boolean
    in_lid: winsdk.system.Boolean
    panel: Panel
    rotation_angle_in_degrees_clockwise: winsdk.system.UInt32
    @staticmethod
    def _from(obj: winsdk.system.Object) -> EnclosureLocation: ...

class IDevicePairingSettings(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object) -> IDevicePairingSettings: ...

