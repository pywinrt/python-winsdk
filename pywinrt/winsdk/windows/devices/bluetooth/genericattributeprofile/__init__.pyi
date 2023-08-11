# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

import enum
import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.bluetooth
import winsdk.windows.devices.enumeration
import winsdk.windows.foundation
import winsdk.windows.foundation.collections
import winsdk.windows.storage.streams

class GattCharacteristicProperties(enum.IntFlag):
    NONE = 0
    BROADCAST = 0x1
    READ = 0x2
    WRITE_WITHOUT_RESPONSE = 0x4
    WRITE = 0x8
    NOTIFY = 0x10
    INDICATE = 0x20
    AUTHENTICATED_SIGNED_WRITES = 0x40
    EXTENDED_PROPERTIES = 0x80
    RELIABLE_WRITES = 0x100
    WRITABLE_AUXILIARIES = 0x200

class GattClientCharacteristicConfigurationDescriptorValue(enum.IntEnum):
    NONE = 0
    NOTIFY = 1
    INDICATE = 2

class GattCommunicationStatus(enum.IntEnum):
    SUCCESS = 0
    UNREACHABLE = 1
    PROTOCOL_ERROR = 2
    ACCESS_DENIED = 3

class GattOpenStatus(enum.IntEnum):
    UNSPECIFIED = 0
    SUCCESS = 1
    ALREADY_OPENED = 2
    NOT_FOUND = 3
    SHARING_VIOLATION = 4
    ACCESS_DENIED = 5

class GattProtectionLevel(enum.IntEnum):
    PLAIN = 0
    AUTHENTICATION_REQUIRED = 1
    ENCRYPTION_REQUIRED = 2
    ENCRYPTION_AND_AUTHENTICATION_REQUIRED = 3

class GattRequestState(enum.IntEnum):
    PENDING = 0
    COMPLETED = 1
    CANCELED = 2

class GattServiceProviderAdvertisementStatus(enum.IntEnum):
    CREATED = 0
    STOPPED = 1
    STARTED = 2
    ABORTED = 3
    STARTED_WITHOUT_ALL_ADVERTISEMENT_DATA = 4

class GattSessionStatus(enum.IntEnum):
    CLOSED = 0
    ACTIVE = 1

class GattSharingMode(enum.IntEnum):
    UNSPECIFIED = 0
    EXCLUSIVE = 1
    SHARED_READ_ONLY = 2
    SHARED_READ_AND_WRITE = 3

class GattWriteOption(enum.IntEnum):
    WRITE_WITH_RESPONSE = 0
    WRITE_WITHOUT_RESPONSE = 1

Self = typing.TypeVar('Self')

class GattCharacteristic(winsdk.system.Object):
    protection_level: GattProtectionLevel
    attribute_handle: winsdk.system.UInt16
    characteristic_properties: GattCharacteristicProperties
    presentation_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattPresentationFormat]]
    user_description: str
    uuid: winsdk.system.Guid
    service: typing.Optional[GattDeviceService]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattCharacteristic: ...
    @staticmethod
    def convert_short_id_to_uuid(short_id: winsdk.system.UInt16, /) -> winsdk.system.Guid: ...
    def get_all_descriptors(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDescriptor]]: ...
    def get_descriptors(self, descriptor_uuid: winsdk.system.Guid, /) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDescriptor]]: ...
    @typing.overload
    def get_descriptors_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattDescriptorsResult]: ...
    @typing.overload
    def get_descriptors_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattDescriptorsResult]: ...
    @typing.overload
    def get_descriptors_for_uuid_async(self, descriptor_uuid: winsdk.system.Guid, /) -> winsdk.windows.foundation.IAsyncOperation[GattDescriptorsResult]: ...
    @typing.overload
    def get_descriptors_for_uuid_async(self, descriptor_uuid: winsdk.system.Guid, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattDescriptorsResult]: ...
    def read_client_characteristic_configuration_descriptor_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattReadClientCharacteristicConfigurationDescriptorResult]: ...
    @typing.overload
    def read_value_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattReadResult]: ...
    @typing.overload
    def read_value_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattReadResult]: ...
    def write_client_characteristic_configuration_descriptor_async(self, client_characteristic_configuration_descriptor_value: GattClientCharacteristicConfigurationDescriptorValue, /) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    def write_client_characteristic_configuration_descriptor_with_result_async(self, client_characteristic_configuration_descriptor_value: GattClientCharacteristicConfigurationDescriptorValue, /) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...
    @typing.overload
    def write_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    @typing.overload
    def write_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], write_option: GattWriteOption, /) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    @typing.overload
    def write_value_with_result_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...
    @typing.overload
    def write_value_with_result_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], write_option: GattWriteOption, /) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...
    def add_value_changed(self, value_changed_handler: winsdk.windows.foundation.TypedEventHandler[GattCharacteristic, GattValueChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_value_changed(self, value_changed_event_cookie: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class GattCharacteristicUuids(winsdk.system.Object):
    heart_rate_measurement: typing.ClassVar[winsdk.system.Guid]
    battery_level: typing.ClassVar[winsdk.system.Guid]
    blood_pressure_feature: typing.ClassVar[winsdk.system.Guid]
    blood_pressure_measurement: typing.ClassVar[winsdk.system.Guid]
    body_sensor_location: typing.ClassVar[winsdk.system.Guid]
    csc_feature: typing.ClassVar[winsdk.system.Guid]
    csc_measurement: typing.ClassVar[winsdk.system.Guid]
    glucose_feature: typing.ClassVar[winsdk.system.Guid]
    glucose_measurement: typing.ClassVar[winsdk.system.Guid]
    glucose_measurement_context: typing.ClassVar[winsdk.system.Guid]
    heart_rate_control_point: typing.ClassVar[winsdk.system.Guid]
    intermediate_cuff_pressure: typing.ClassVar[winsdk.system.Guid]
    intermediate_temperature: typing.ClassVar[winsdk.system.Guid]
    measurement_interval: typing.ClassVar[winsdk.system.Guid]
    record_access_control_point: typing.ClassVar[winsdk.system.Guid]
    rsc_feature: typing.ClassVar[winsdk.system.Guid]
    rsc_measurement: typing.ClassVar[winsdk.system.Guid]
    s_c_control_point: typing.ClassVar[winsdk.system.Guid]
    sensor_location: typing.ClassVar[winsdk.system.Guid]
    temperature_measurement: typing.ClassVar[winsdk.system.Guid]
    temperature_type: typing.ClassVar[winsdk.system.Guid]
    gap_peripheral_preferred_connection_parameters: typing.ClassVar[winsdk.system.Guid]
    gap_peripheral_privacy_flag: typing.ClassVar[winsdk.system.Guid]
    gap_reconnection_address: typing.ClassVar[winsdk.system.Guid]
    gatt_service_changed: typing.ClassVar[winsdk.system.Guid]
    hardware_revision_string: typing.ClassVar[winsdk.system.Guid]
    hid_control_point: typing.ClassVar[winsdk.system.Guid]
    hid_information: typing.ClassVar[winsdk.system.Guid]
    ieee1107320601_regulatory_certification_data_list: typing.ClassVar[winsdk.system.Guid]
    ln_control_point: typing.ClassVar[winsdk.system.Guid]
    ln_feature: typing.ClassVar[winsdk.system.Guid]
    local_time_information: typing.ClassVar[winsdk.system.Guid]
    location_and_speed: typing.ClassVar[winsdk.system.Guid]
    manufacturer_name_string: typing.ClassVar[winsdk.system.Guid]
    model_number_string: typing.ClassVar[winsdk.system.Guid]
    navigation: typing.ClassVar[winsdk.system.Guid]
    new_alert: typing.ClassVar[winsdk.system.Guid]
    pnp_id: typing.ClassVar[winsdk.system.Guid]
    position_quality: typing.ClassVar[winsdk.system.Guid]
    protocol_mode: typing.ClassVar[winsdk.system.Guid]
    cycling_power_feature: typing.ClassVar[winsdk.system.Guid]
    report: typing.ClassVar[winsdk.system.Guid]
    report_map: typing.ClassVar[winsdk.system.Guid]
    ringer_control_point: typing.ClassVar[winsdk.system.Guid]
    ringer_setting: typing.ClassVar[winsdk.system.Guid]
    scan_interval_window: typing.ClassVar[winsdk.system.Guid]
    scan_refresh: typing.ClassVar[winsdk.system.Guid]
    serial_number_string: typing.ClassVar[winsdk.system.Guid]
    software_revision_string: typing.ClassVar[winsdk.system.Guid]
    support_unread_alert_category: typing.ClassVar[winsdk.system.Guid]
    supported_new_alert_category: typing.ClassVar[winsdk.system.Guid]
    system_id: typing.ClassVar[winsdk.system.Guid]
    time_accuracy: typing.ClassVar[winsdk.system.Guid]
    time_source: typing.ClassVar[winsdk.system.Guid]
    time_update_control_point: typing.ClassVar[winsdk.system.Guid]
    time_update_state: typing.ClassVar[winsdk.system.Guid]
    time_with_dst: typing.ClassVar[winsdk.system.Guid]
    time_zone: typing.ClassVar[winsdk.system.Guid]
    tx_power_level: typing.ClassVar[winsdk.system.Guid]
    unread_alert_status: typing.ClassVar[winsdk.system.Guid]
    alert_category_id: typing.ClassVar[winsdk.system.Guid]
    alert_category_id_bit_mask: typing.ClassVar[winsdk.system.Guid]
    alert_level: typing.ClassVar[winsdk.system.Guid]
    alert_notification_control_point: typing.ClassVar[winsdk.system.Guid]
    alert_status: typing.ClassVar[winsdk.system.Guid]
    boot_keyboard_input_report: typing.ClassVar[winsdk.system.Guid]
    boot_keyboard_output_report: typing.ClassVar[winsdk.system.Guid]
    boot_mouse_input_report: typing.ClassVar[winsdk.system.Guid]
    current_time: typing.ClassVar[winsdk.system.Guid]
    cycling_power_control_point: typing.ClassVar[winsdk.system.Guid]
    reference_time_information: typing.ClassVar[winsdk.system.Guid]
    cycling_power_measurement: typing.ClassVar[winsdk.system.Guid]
    cycling_power_vector: typing.ClassVar[winsdk.system.Guid]
    date_time: typing.ClassVar[winsdk.system.Guid]
    day_date_time: typing.ClassVar[winsdk.system.Guid]
    day_of_week: typing.ClassVar[winsdk.system.Guid]
    dst_offset: typing.ClassVar[winsdk.system.Guid]
    exact_time256: typing.ClassVar[winsdk.system.Guid]
    firmware_revision_string: typing.ClassVar[winsdk.system.Guid]
    gap_appearance: typing.ClassVar[winsdk.system.Guid]
    gap_device_name: typing.ClassVar[winsdk.system.Guid]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattCharacteristicUuids: ...

class GattCharacteristicsResult(winsdk.system.Object):
    characteristics: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattCharacteristic]]
    protocol_error: typing.Optional[typing.Optional[winsdk.system.UInt8]]
    status: GattCommunicationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattCharacteristicsResult: ...

class GattClientNotificationResult(winsdk.system.Object):
    protocol_error: typing.Optional[typing.Optional[winsdk.system.UInt8]]
    status: GattCommunicationStatus
    subscribed_client: typing.Optional[GattSubscribedClient]
    bytes_sent: winsdk.system.UInt16
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattClientNotificationResult: ...

class GattDescriptor(winsdk.system.Object):
    protection_level: GattProtectionLevel
    attribute_handle: winsdk.system.UInt16
    uuid: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattDescriptor: ...
    @staticmethod
    def convert_short_id_to_uuid(short_id: winsdk.system.UInt16, /) -> winsdk.system.Guid: ...
    @typing.overload
    def read_value_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattReadResult]: ...
    @typing.overload
    def read_value_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattReadResult]: ...
    def write_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    def write_value_with_result_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...

class GattDescriptorUuids(winsdk.system.Object):
    characteristic_aggregate_format: typing.ClassVar[winsdk.system.Guid]
    characteristic_extended_properties: typing.ClassVar[winsdk.system.Guid]
    characteristic_presentation_format: typing.ClassVar[winsdk.system.Guid]
    characteristic_user_description: typing.ClassVar[winsdk.system.Guid]
    client_characteristic_configuration: typing.ClassVar[winsdk.system.Guid]
    server_characteristic_configuration: typing.ClassVar[winsdk.system.Guid]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattDescriptorUuids: ...

class GattDescriptorsResult(winsdk.system.Object):
    descriptors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDescriptor]]
    protocol_error: typing.Optional[typing.Optional[winsdk.system.UInt8]]
    status: GattCommunicationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattDescriptorsResult: ...

class GattDeviceService(winsdk.system.Object):
    attribute_handle: winsdk.system.UInt16
    device_id: str
    uuid: winsdk.system.Guid
    device: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothLEDevice]
    parent_services: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDeviceService]]
    device_access_information: typing.Optional[winsdk.windows.devices.enumeration.DeviceAccessInformation]
    session: typing.Optional[GattSession]
    sharing_mode: GattSharingMode
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattDeviceService: ...
    def close(self) -> None: ...
    @staticmethod
    def convert_short_id_to_uuid(short_id: winsdk.system.UInt16, /) -> winsdk.system.Guid: ...
    @typing.overload
    @staticmethod
    def from_id_async(device_id: str, /) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceService]: ...
    @typing.overload
    @staticmethod
    def from_id_async(device_id: str, sharing_mode: GattSharingMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceService]: ...
    def get_all_characteristics(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattCharacteristic]]: ...
    def get_all_included_services(self) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDeviceService]]: ...
    def get_characteristics(self, characteristic_uuid: winsdk.system.Guid, /) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattCharacteristic]]: ...
    @typing.overload
    def get_characteristics_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattCharacteristicsResult]: ...
    @typing.overload
    def get_characteristics_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattCharacteristicsResult]: ...
    @typing.overload
    def get_characteristics_for_uuid_async(self, characteristic_uuid: winsdk.system.Guid, /) -> winsdk.windows.foundation.IAsyncOperation[GattCharacteristicsResult]: ...
    @typing.overload
    def get_characteristics_for_uuid_async(self, characteristic_uuid: winsdk.system.Guid, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattCharacteristicsResult]: ...
    @typing.overload
    @staticmethod
    def get_device_selector_for_bluetooth_device_id(bluetooth_device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId], /) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector_for_bluetooth_device_id(bluetooth_device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId], cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector_for_bluetooth_device_id_and_uuid(bluetooth_device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId], service_uuid: winsdk.system.Guid, /) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector_for_bluetooth_device_id_and_uuid(bluetooth_device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId], service_uuid: winsdk.system.Guid, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> str: ...
    @staticmethod
    def get_device_selector_from_short_id(service_short_id: winsdk.system.UInt16, /) -> str: ...
    @staticmethod
    def get_device_selector_from_uuid(service_uuid: winsdk.system.Guid, /) -> str: ...
    def get_included_services(self, service_uuid: winsdk.system.Guid, /) -> typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDeviceService]]: ...
    @typing.overload
    def get_included_services_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceServicesResult]: ...
    @typing.overload
    def get_included_services_async(self, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceServicesResult]: ...
    @typing.overload
    def get_included_services_for_uuid_async(self, service_uuid: winsdk.system.Guid, /) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceServicesResult]: ...
    @typing.overload
    def get_included_services_for_uuid_async(self, service_uuid: winsdk.system.Guid, cache_mode: winsdk.windows.devices.bluetooth.BluetoothCacheMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattDeviceServicesResult]: ...
    def open_async(self, sharing_mode: GattSharingMode, /) -> winsdk.windows.foundation.IAsyncOperation[GattOpenStatus]: ...
    def request_access_async(self) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.devices.enumeration.DeviceAccessStatus]: ...

class GattDeviceServicesResult(winsdk.system.Object):
    protocol_error: typing.Optional[typing.Optional[winsdk.system.UInt8]]
    services: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattDeviceService]]
    status: GattCommunicationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattDeviceServicesResult: ...

class GattLocalCharacteristic(winsdk.system.Object):
    characteristic_properties: GattCharacteristicProperties
    descriptors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattLocalDescriptor]]
    presentation_formats: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattPresentationFormat]]
    read_protection_level: GattProtectionLevel
    static_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    subscribed_clients: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattSubscribedClient]]
    user_description: str
    uuid: winsdk.system.Guid
    write_protection_level: GattProtectionLevel
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattLocalCharacteristic: ...
    def create_descriptor_async(self, descriptor_uuid: winsdk.system.Guid, parameters: typing.Optional[GattLocalDescriptorParameters], /) -> winsdk.windows.foundation.IAsyncOperation[GattLocalDescriptorResult]: ...
    @typing.overload
    def notify_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.foundation.collections.IVectorView[GattClientNotificationResult]]: ...
    @typing.overload
    def notify_value_async(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], subscribed_client: typing.Optional[GattSubscribedClient], /) -> winsdk.windows.foundation.IAsyncOperation[GattClientNotificationResult]: ...
    def add_read_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalCharacteristic, GattReadRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_read_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_subscribed_clients_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalCharacteristic, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_subscribed_clients_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_write_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalCharacteristic, GattWriteRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_write_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class GattLocalCharacteristicParameters(winsdk.system.Object):
    write_protection_level: GattProtectionLevel
    user_description: str
    static_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    read_protection_level: GattProtectionLevel
    characteristic_properties: GattCharacteristicProperties
    presentation_formats: typing.Optional[winsdk.windows.foundation.collections.IVector[GattPresentationFormat]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattLocalCharacteristicParameters: ...
    def __new__(cls: typing.Type[GattLocalCharacteristicParameters]) -> GattLocalCharacteristicParameters:...

class GattLocalCharacteristicResult(winsdk.system.Object):
    characteristic: typing.Optional[GattLocalCharacteristic]
    error: winsdk.windows.devices.bluetooth.BluetoothError
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattLocalCharacteristicResult: ...

class GattLocalDescriptor(winsdk.system.Object):
    read_protection_level: GattProtectionLevel
    static_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    uuid: winsdk.system.Guid
    write_protection_level: GattProtectionLevel
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattLocalDescriptor: ...
    def add_read_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalDescriptor, GattReadRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_read_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_write_requested(self, handler: winsdk.windows.foundation.TypedEventHandler[GattLocalDescriptor, GattWriteRequestedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_write_requested(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class GattLocalDescriptorParameters(winsdk.system.Object):
    write_protection_level: GattProtectionLevel
    static_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    read_protection_level: GattProtectionLevel
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattLocalDescriptorParameters: ...
    def __new__(cls: typing.Type[GattLocalDescriptorParameters]) -> GattLocalDescriptorParameters:...

class GattLocalDescriptorResult(winsdk.system.Object):
    descriptor: typing.Optional[GattLocalDescriptor]
    error: winsdk.windows.devices.bluetooth.BluetoothError
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattLocalDescriptorResult: ...

class GattLocalService(winsdk.system.Object):
    characteristics: typing.Optional[winsdk.windows.foundation.collections.IVectorView[GattLocalCharacteristic]]
    uuid: winsdk.system.Guid
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattLocalService: ...
    def create_characteristic_async(self, characteristic_uuid: winsdk.system.Guid, parameters: typing.Optional[GattLocalCharacteristicParameters], /) -> winsdk.windows.foundation.IAsyncOperation[GattLocalCharacteristicResult]: ...

class GattPresentationFormat(winsdk.system.Object):
    description: winsdk.system.UInt16
    exponent: winsdk.system.Int32
    format_type: winsdk.system.UInt8
    namespace: winsdk.system.UInt8
    unit: winsdk.system.UInt16
    bluetooth_sig_assigned_numbers: typing.ClassVar[winsdk.system.UInt8]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattPresentationFormat: ...
    @staticmethod
    def from_parts(format_type: winsdk.system.UInt8, exponent: winsdk.system.Int32, unit: winsdk.system.UInt16, namespace_id: winsdk.system.UInt8, description: winsdk.system.UInt16, /) -> typing.Optional[GattPresentationFormat]: ...

class GattPresentationFormatTypes(winsdk.system.Object):
    bit2: typing.ClassVar[winsdk.system.UInt8]
    boolean: typing.ClassVar[winsdk.system.UInt8]
    d_uint16: typing.ClassVar[winsdk.system.UInt8]
    float: typing.ClassVar[winsdk.system.UInt8]
    float32: typing.ClassVar[winsdk.system.UInt8]
    float64: typing.ClassVar[winsdk.system.UInt8]
    nibble: typing.ClassVar[winsdk.system.UInt8]
    s_float: typing.ClassVar[winsdk.system.UInt8]
    s_int12: typing.ClassVar[winsdk.system.UInt8]
    s_int128: typing.ClassVar[winsdk.system.UInt8]
    s_int16: typing.ClassVar[winsdk.system.UInt8]
    s_int24: typing.ClassVar[winsdk.system.UInt8]
    s_int32: typing.ClassVar[winsdk.system.UInt8]
    s_int48: typing.ClassVar[winsdk.system.UInt8]
    s_int64: typing.ClassVar[winsdk.system.UInt8]
    s_int8: typing.ClassVar[winsdk.system.UInt8]
    struct: typing.ClassVar[winsdk.system.UInt8]
    uint12: typing.ClassVar[winsdk.system.UInt8]
    uint128: typing.ClassVar[winsdk.system.UInt8]
    uint16: typing.ClassVar[winsdk.system.UInt8]
    uint24: typing.ClassVar[winsdk.system.UInt8]
    uint32: typing.ClassVar[winsdk.system.UInt8]
    uint48: typing.ClassVar[winsdk.system.UInt8]
    uint64: typing.ClassVar[winsdk.system.UInt8]
    uint8: typing.ClassVar[winsdk.system.UInt8]
    utf16: typing.ClassVar[winsdk.system.UInt8]
    utf8: typing.ClassVar[winsdk.system.UInt8]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattPresentationFormatTypes: ...

class GattProtocolError(winsdk.system.Object):
    attribute_not_found: typing.ClassVar[winsdk.system.UInt8]
    attribute_not_long: typing.ClassVar[winsdk.system.UInt8]
    insufficient_authentication: typing.ClassVar[winsdk.system.UInt8]
    insufficient_authorization: typing.ClassVar[winsdk.system.UInt8]
    insufficient_encryption: typing.ClassVar[winsdk.system.UInt8]
    insufficient_encryption_key_size: typing.ClassVar[winsdk.system.UInt8]
    insufficient_resources: typing.ClassVar[winsdk.system.UInt8]
    invalid_attribute_value_length: typing.ClassVar[winsdk.system.UInt8]
    invalid_handle: typing.ClassVar[winsdk.system.UInt8]
    invalid_offset: typing.ClassVar[winsdk.system.UInt8]
    invalid_pdu: typing.ClassVar[winsdk.system.UInt8]
    prepare_queue_full: typing.ClassVar[winsdk.system.UInt8]
    read_not_permitted: typing.ClassVar[winsdk.system.UInt8]
    request_not_supported: typing.ClassVar[winsdk.system.UInt8]
    unlikely_error: typing.ClassVar[winsdk.system.UInt8]
    unsupported_group_type: typing.ClassVar[winsdk.system.UInt8]
    write_not_permitted: typing.ClassVar[winsdk.system.UInt8]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattProtocolError: ...

class GattReadClientCharacteristicConfigurationDescriptorResult(winsdk.system.Object):
    client_characteristic_configuration_descriptor: GattClientCharacteristicConfigurationDescriptorValue
    status: GattCommunicationStatus
    protocol_error: typing.Optional[typing.Optional[winsdk.system.UInt8]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattReadClientCharacteristicConfigurationDescriptorResult: ...

class GattReadRequest(winsdk.system.Object):
    length: winsdk.system.UInt32
    offset: winsdk.system.UInt32
    state: GattRequestState
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattReadRequest: ...
    def respond_with_protocol_error(self, protocol_error: winsdk.system.UInt8, /) -> None: ...
    def respond_with_value(self, value: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> None: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattReadRequest, GattRequestStateChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class GattReadRequestedEventArgs(winsdk.system.Object):
    session: typing.Optional[GattSession]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattReadRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def get_request_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattReadRequest]: ...

class GattReadResult(winsdk.system.Object):
    status: GattCommunicationStatus
    value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    protocol_error: typing.Optional[typing.Optional[winsdk.system.UInt8]]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattReadResult: ...

class GattReliableWriteTransaction(winsdk.system.Object):
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattReliableWriteTransaction: ...
    def __new__(cls: typing.Type[GattReliableWriteTransaction]) -> GattReliableWriteTransaction:...
    def commit_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattCommunicationStatus]: ...
    def commit_with_result_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattWriteResult]: ...
    def write_value(self, characteristic: typing.Optional[GattCharacteristic], value: typing.Optional[winsdk.windows.storage.streams.IBuffer], /) -> None: ...

class GattRequestStateChangedEventArgs(winsdk.system.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    state: GattRequestState
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattRequestStateChangedEventArgs: ...

class GattServiceProvider(winsdk.system.Object):
    advertisement_status: GattServiceProviderAdvertisementStatus
    service: typing.Optional[GattLocalService]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattServiceProvider: ...
    @staticmethod
    def create_async(service_uuid: winsdk.system.Guid, /) -> winsdk.windows.foundation.IAsyncOperation[GattServiceProviderResult]: ...
    @typing.overload
    def start_advertising(self) -> None: ...
    @typing.overload
    def start_advertising(self, parameters: typing.Optional[GattServiceProviderAdvertisingParameters], /) -> None: ...
    def stop_advertising(self) -> None: ...
    def add_advertisement_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattServiceProvider, GattServiceProviderAdvertisementStatusChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_advertisement_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class GattServiceProviderAdvertisementStatusChangedEventArgs(winsdk.system.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    status: GattServiceProviderAdvertisementStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattServiceProviderAdvertisementStatusChangedEventArgs: ...

class GattServiceProviderAdvertisingParameters(winsdk.system.Object):
    is_discoverable: winsdk.system.Boolean
    is_connectable: winsdk.system.Boolean
    service_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattServiceProviderAdvertisingParameters: ...
    def __new__(cls: typing.Type[GattServiceProviderAdvertisingParameters]) -> GattServiceProviderAdvertisingParameters:...

class GattServiceProviderResult(winsdk.system.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    service_provider: typing.Optional[GattServiceProvider]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattServiceProviderResult: ...

class GattServiceUuids(winsdk.system.Object):
    battery: typing.ClassVar[winsdk.system.Guid]
    blood_pressure: typing.ClassVar[winsdk.system.Guid]
    cycling_speed_and_cadence: typing.ClassVar[winsdk.system.Guid]
    generic_access: typing.ClassVar[winsdk.system.Guid]
    generic_attribute: typing.ClassVar[winsdk.system.Guid]
    glucose: typing.ClassVar[winsdk.system.Guid]
    health_thermometer: typing.ClassVar[winsdk.system.Guid]
    heart_rate: typing.ClassVar[winsdk.system.Guid]
    running_speed_and_cadence: typing.ClassVar[winsdk.system.Guid]
    alert_notification: typing.ClassVar[winsdk.system.Guid]
    current_time: typing.ClassVar[winsdk.system.Guid]
    cycling_power: typing.ClassVar[winsdk.system.Guid]
    device_information: typing.ClassVar[winsdk.system.Guid]
    human_interface_device: typing.ClassVar[winsdk.system.Guid]
    immediate_alert: typing.ClassVar[winsdk.system.Guid]
    link_loss: typing.ClassVar[winsdk.system.Guid]
    location_and_navigation: typing.ClassVar[winsdk.system.Guid]
    next_dst_change: typing.ClassVar[winsdk.system.Guid]
    phone_alert_status: typing.ClassVar[winsdk.system.Guid]
    reference_time_update: typing.ClassVar[winsdk.system.Guid]
    scan_parameters: typing.ClassVar[winsdk.system.Guid]
    tx_power: typing.ClassVar[winsdk.system.Guid]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattServiceUuids: ...

class GattSession(winsdk.system.Object):
    maintain_connection: winsdk.system.Boolean
    can_maintain_connection: winsdk.system.Boolean
    device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId]
    max_pdu_size: winsdk.system.UInt16
    session_status: GattSessionStatus
    def __enter__(self: Self) -> Self: ...
    def __exit__(self, *args) -> None: ...
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattSession: ...
    def close(self) -> None: ...
    @staticmethod
    def from_device_id_async(device_id: typing.Optional[winsdk.windows.devices.bluetooth.BluetoothDeviceId], /) -> winsdk.windows.foundation.IAsyncOperation[GattSession]: ...
    def add_max_pdu_size_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattSession, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_max_pdu_size_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...
    def add_session_status_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattSession, GattSessionStatusChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_session_status_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class GattSessionStatusChangedEventArgs(winsdk.system.Object):
    error: winsdk.windows.devices.bluetooth.BluetoothError
    status: GattSessionStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattSessionStatusChangedEventArgs: ...

class GattSubscribedClient(winsdk.system.Object):
    max_notification_size: winsdk.system.UInt16
    session: typing.Optional[GattSession]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattSubscribedClient: ...
    def add_max_notification_size_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattSubscribedClient, winsdk.system.Object], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_max_notification_size_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class GattValueChangedEventArgs(winsdk.system.Object):
    characteristic_value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    timestamp: datetime.datetime
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattValueChangedEventArgs: ...

class GattWriteRequest(winsdk.system.Object):
    offset: winsdk.system.UInt32
    option: GattWriteOption
    state: GattRequestState
    value: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattWriteRequest: ...
    def respond(self) -> None: ...
    def respond_with_protocol_error(self, protocol_error: winsdk.system.UInt8, /) -> None: ...
    def add_state_changed(self, handler: winsdk.windows.foundation.TypedEventHandler[GattWriteRequest, GattRequestStateChangedEventArgs], /) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_state_changed(self, token: winsdk.windows.foundation.EventRegistrationToken, /) -> None: ...

class GattWriteRequestedEventArgs(winsdk.system.Object):
    session: typing.Optional[GattSession]
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattWriteRequestedEventArgs: ...
    def get_deferral(self) -> typing.Optional[winsdk.windows.foundation.Deferral]: ...
    def get_request_async(self) -> winsdk.windows.foundation.IAsyncOperation[GattWriteRequest]: ...

class GattWriteResult(winsdk.system.Object):
    protocol_error: typing.Optional[typing.Optional[winsdk.system.UInt8]]
    status: GattCommunicationStatus
    @staticmethod
    def _from(obj: winsdk.system.Object, /) -> GattWriteResult: ...

