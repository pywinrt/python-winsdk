# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Usb")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

try:
    import winsdk.windows.storage.streams
except ImportError:
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

_ns_module._register_UsbControlRecipient(UsbControlRecipient)
_ns_module._register_UsbControlTransferType(UsbControlTransferType)
_ns_module._register_UsbEndpointType(UsbEndpointType)
_ns_module._register_UsbReadOptions(UsbReadOptions)
_ns_module._register_UsbTransferDirection(UsbTransferDirection)
_ns_module._register_UsbWriteOptions(UsbWriteOptions)

UsbBulkInEndpointDescriptor = _ns_module.UsbBulkInEndpointDescriptor
UsbBulkInPipe = _ns_module.UsbBulkInPipe
UsbBulkOutEndpointDescriptor = _ns_module.UsbBulkOutEndpointDescriptor
UsbBulkOutPipe = _ns_module.UsbBulkOutPipe
UsbConfiguration = _ns_module.UsbConfiguration
UsbConfigurationDescriptor = _ns_module.UsbConfigurationDescriptor
UsbControlRequestType = _ns_module.UsbControlRequestType
UsbDescriptor = _ns_module.UsbDescriptor
UsbDevice = _ns_module.UsbDevice
UsbDeviceClass = _ns_module.UsbDeviceClass
UsbDeviceClasses = _ns_module.UsbDeviceClasses
UsbDeviceDescriptor = _ns_module.UsbDeviceDescriptor
UsbEndpointDescriptor = _ns_module.UsbEndpointDescriptor
UsbInterface = _ns_module.UsbInterface
UsbInterfaceDescriptor = _ns_module.UsbInterfaceDescriptor
UsbInterfaceSetting = _ns_module.UsbInterfaceSetting
UsbInterruptInEndpointDescriptor = _ns_module.UsbInterruptInEndpointDescriptor
UsbInterruptInEventArgs = _ns_module.UsbInterruptInEventArgs
UsbInterruptInPipe = _ns_module.UsbInterruptInPipe
UsbInterruptOutEndpointDescriptor = _ns_module.UsbInterruptOutEndpointDescriptor
UsbInterruptOutPipe = _ns_module.UsbInterruptOutPipe
UsbSetupPacket = _ns_module.UsbSetupPacket
