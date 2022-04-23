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

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class UsbControlRecipient(enum.IntEnum):
    DEVICE = 0
    SPECIFIED_INTERFACE = 1
    ENDPOINT = 2
    OTHER = 3
    DEFAULT_INTERFACE = 4

class UsbControlTransferType(enum.IntEnum):
    STANDARD = 0
    CLASS = 1
    VENDOR = 2

class UsbEndpointType(enum.IntEnum):
    CONTROL = 0
    ISOCHRONOUS = 1
    BULK = 2
    INTERRUPT = 3

class UsbReadOptions(enum.IntFlag):
    NONE = 0
    AUTO_CLEAR_STALL = 0x1
    OVERRIDE_AUTOMATIC_BUFFER_MANAGEMENT = 0x2
    IGNORE_SHORT_PACKET = 0x4
    ALLOW_PARTIAL_READS = 0x8

class UsbTransferDirection(enum.IntEnum):
    OUT = 0
    IN = 1

class UsbWriteOptions(enum.IntFlag):
    NONE = 0
    AUTO_CLEAR_STALL = 0x1
    SHORT_PACKET_TERMINATE = 0x2

class UsbBulkInEndpointDescriptor(_winrt.Object, interfaces=[]):
    endpoint_number: _winrt.UInt8
    max_packet_size: _winrt.UInt32
    pipe: typing.Optional[UsbBulkInPipe]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbBulkInEndpointDescriptor: ...

class UsbBulkInPipe(_winrt.Object, interfaces=[]):
    read_options: UsbReadOptions
    endpoint_descriptor: typing.Optional[UsbBulkInEndpointDescriptor]
    input_stream: typing.Optional[winsdk.windows.storage.streams.IInputStream]
    max_transfer_size_bytes: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbBulkInPipe: ...
    def clear_stall_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def flush_buffer(self) -> None: ...

class UsbBulkOutEndpointDescriptor(_winrt.Object, interfaces=[]):
    endpoint_number: _winrt.UInt8
    max_packet_size: _winrt.UInt32
    pipe: typing.Optional[UsbBulkOutPipe]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbBulkOutEndpointDescriptor: ...

class UsbBulkOutPipe(_winrt.Object, interfaces=[]):
    write_options: UsbWriteOptions
    endpoint_descriptor: typing.Optional[UsbBulkOutEndpointDescriptor]
    output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbBulkOutPipe: ...
    def clear_stall_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class UsbConfiguration(_winrt.Object, interfaces=[]):
    configuration_descriptor: typing.Optional[UsbConfigurationDescriptor]
    descriptors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbDescriptor]]
    usb_interfaces: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbInterface]]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbConfiguration: ...

class UsbConfigurationDescriptor(_winrt.Object, interfaces=[]):
    configuration_value: _winrt.UInt8
    max_power_milliamps: _winrt.UInt32
    remote_wakeup: _winrt.Boolean
    self_powered: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbConfigurationDescriptor: ...
    @staticmethod
    def parse(descriptor: typing.Optional[UsbDescriptor]) -> typing.Optional[UsbConfigurationDescriptor]: ...
    @staticmethod
    def try_parse(descriptor: typing.Optional[UsbDescriptor]) -> typing.Tuple[_winrt.Boolean, typing.Optional[UsbConfigurationDescriptor]]: ...

class UsbControlRequestType(_winrt.Object, interfaces=[]):
    recipient: UsbControlRecipient
    direction: UsbTransferDirection
    control_transfer_type: UsbControlTransferType
    as_byte: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbControlRequestType: ...
    def __init__(self) -> None: ...

class UsbDescriptor(_winrt.Object, interfaces=[]):
    descriptor_type: _winrt.UInt8
    length: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbDescriptor: ...
    def read_descriptor_buffer(self, buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...

class UsbDevice(_winrt.Object, interfaces=[winsdk.windows.foundation.IClosable]):
    configuration: typing.Optional[UsbConfiguration]
    default_interface: typing.Optional[UsbInterface]
    device_descriptor: typing.Optional[UsbDeviceDescriptor]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbDevice: ...
    def close(self) -> None: ...
    @staticmethod
    def from_id_async(device_id: str) -> winsdk.windows.foundation.IAsyncOperation[UsbDevice]: ...
    @staticmethod
    def get_device_class_selector(usb_class: typing.Optional[UsbDeviceClass]) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(win_usb_interface_class: uuid.UUID) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(vendor_id: _winrt.UInt32, product_id: _winrt.UInt32) -> str: ...
    @typing.overload
    @staticmethod
    def get_device_selector(vendor_id: _winrt.UInt32, product_id: _winrt.UInt32, win_usb_interface_class: uuid.UUID) -> str: ...
    @typing.overload
    def send_control_in_transfer_async(self, setup_packet: typing.Optional[UsbSetupPacket]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    @typing.overload
    def send_control_in_transfer_async(self, setup_packet: typing.Optional[UsbSetupPacket], buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[winsdk.windows.storage.streams.IBuffer]: ...
    @typing.overload
    def send_control_out_transfer_async(self, setup_packet: typing.Optional[UsbSetupPacket]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.UInt32]: ...
    @typing.overload
    def send_control_out_transfer_async(self, setup_packet: typing.Optional[UsbSetupPacket], buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> winsdk.windows.foundation.IAsyncOperation[_winrt.UInt32]: ...

class UsbDeviceClass(_winrt.Object, interfaces=[]):
    subclass_code: typing.Optional[typing.Optional[_winrt.UInt8]]
    protocol_code: typing.Optional[typing.Optional[_winrt.UInt8]]
    class_code: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbDeviceClass: ...
    def __init__(self) -> None: ...

class UsbDeviceClasses(_winrt.Object, interfaces=[]):
    active_sync: typing.Optional[UsbDeviceClass]
    cdc_control: typing.Optional[UsbDeviceClass]
    device_firmware_update: typing.Optional[UsbDeviceClass]
    irda: typing.Optional[UsbDeviceClass]
    measurement: typing.Optional[UsbDeviceClass]
    palm_sync: typing.Optional[UsbDeviceClass]
    personal_healthcare: typing.Optional[UsbDeviceClass]
    physical: typing.Optional[UsbDeviceClass]
    vendor_specific: typing.Optional[UsbDeviceClass]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbDeviceClasses: ...

class UsbDeviceDescriptor(_winrt.Object, interfaces=[]):
    bcd_device_revision: _winrt.UInt32
    bcd_usb: _winrt.UInt32
    max_packet_size0: _winrt.UInt8
    number_of_configurations: _winrt.UInt8
    product_id: _winrt.UInt32
    vendor_id: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbDeviceDescriptor: ...

class UsbEndpointDescriptor(_winrt.Object, interfaces=[]):
    as_bulk_in_endpoint_descriptor: typing.Optional[UsbBulkInEndpointDescriptor]
    as_bulk_out_endpoint_descriptor: typing.Optional[UsbBulkOutEndpointDescriptor]
    as_interrupt_in_endpoint_descriptor: typing.Optional[UsbInterruptInEndpointDescriptor]
    as_interrupt_out_endpoint_descriptor: typing.Optional[UsbInterruptOutEndpointDescriptor]
    direction: UsbTransferDirection
    endpoint_number: _winrt.UInt8
    endpoint_type: UsbEndpointType
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbEndpointDescriptor: ...
    @staticmethod
    def parse(descriptor: typing.Optional[UsbDescriptor]) -> typing.Optional[UsbEndpointDescriptor]: ...
    @staticmethod
    def try_parse(descriptor: typing.Optional[UsbDescriptor]) -> typing.Tuple[_winrt.Boolean, typing.Optional[UsbEndpointDescriptor]]: ...

class UsbInterface(_winrt.Object, interfaces=[]):
    bulk_in_pipes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbBulkInPipe]]
    bulk_out_pipes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbBulkOutPipe]]
    descriptors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbDescriptor]]
    interface_number: _winrt.UInt8
    interface_settings: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbInterfaceSetting]]
    interrupt_in_pipes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbInterruptInPipe]]
    interrupt_out_pipes: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbInterruptOutPipe]]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbInterface: ...

class UsbInterfaceDescriptor(_winrt.Object, interfaces=[]):
    alternate_setting_number: _winrt.UInt8
    class_code: _winrt.UInt8
    interface_number: _winrt.UInt8
    protocol_code: _winrt.UInt8
    subclass_code: _winrt.UInt8
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbInterfaceDescriptor: ...
    @staticmethod
    def parse(descriptor: typing.Optional[UsbDescriptor]) -> typing.Optional[UsbInterfaceDescriptor]: ...
    @staticmethod
    def try_parse(descriptor: typing.Optional[UsbDescriptor]) -> typing.Tuple[_winrt.Boolean, typing.Optional[UsbInterfaceDescriptor]]: ...

class UsbInterfaceSetting(_winrt.Object, interfaces=[]):
    bulk_in_endpoints: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbBulkInEndpointDescriptor]]
    bulk_out_endpoints: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbBulkOutEndpointDescriptor]]
    descriptors: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbDescriptor]]
    interface_descriptor: typing.Optional[UsbInterfaceDescriptor]
    interrupt_in_endpoints: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbInterruptInEndpointDescriptor]]
    interrupt_out_endpoints: typing.Optional[winsdk.windows.foundation.collections.IVectorView[UsbInterruptOutEndpointDescriptor]]
    selected: _winrt.Boolean
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbInterfaceSetting: ...
    def select_setting_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class UsbInterruptInEndpointDescriptor(_winrt.Object, interfaces=[]):
    endpoint_number: _winrt.UInt8
    interval: winsdk.windows.foundation.TimeSpan
    max_packet_size: _winrt.UInt32
    pipe: typing.Optional[UsbInterruptInPipe]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbInterruptInEndpointDescriptor: ...

class UsbInterruptInEventArgs(_winrt.Object, interfaces=[]):
    interrupt_data: typing.Optional[winsdk.windows.storage.streams.IBuffer]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbInterruptInEventArgs: ...

class UsbInterruptInPipe(_winrt.Object, interfaces=[]):
    endpoint_descriptor: typing.Optional[UsbInterruptInEndpointDescriptor]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbInterruptInPipe: ...
    def clear_stall_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...
    def add_data_received(self, handler: winsdk.windows.foundation.TypedEventHandler[UsbInterruptInPipe, UsbInterruptInEventArgs]) -> winsdk.windows.foundation.EventRegistrationToken: ...
    def remove_data_received(self, token: winsdk.windows.foundation.EventRegistrationToken) -> None: ...

class UsbInterruptOutEndpointDescriptor(_winrt.Object, interfaces=[]):
    endpoint_number: _winrt.UInt8
    interval: winsdk.windows.foundation.TimeSpan
    max_packet_size: _winrt.UInt32
    pipe: typing.Optional[UsbInterruptOutPipe]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbInterruptOutEndpointDescriptor: ...

class UsbInterruptOutPipe(_winrt.Object, interfaces=[]):
    write_options: UsbWriteOptions
    endpoint_descriptor: typing.Optional[UsbInterruptOutEndpointDescriptor]
    output_stream: typing.Optional[winsdk.windows.storage.streams.IOutputStream]
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbInterruptOutPipe: ...
    def clear_stall_async(self) -> typing.Optional[winsdk.windows.foundation.IAsyncAction]: ...

class UsbSetupPacket(_winrt.Object, interfaces=[]):
    value: _winrt.UInt32
    request_type: typing.Optional[UsbControlRequestType]
    request: _winrt.UInt8
    length: _winrt.UInt32
    index: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> UsbSetupPacket: ...
    @typing.overload
    def __init__(self, eight_byte_buffer: typing.Optional[winsdk.windows.storage.streams.IBuffer]) -> None: ...
    @typing.overload
    def __init__(self) -> None: ...

