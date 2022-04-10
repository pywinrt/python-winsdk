# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

import enum

import winsdk

_ns_module = winsdk._import_ns_module("Windows.Devices.Bluetooth.Background")

try:
    import winsdk.windows.devices.bluetooth
except Exception:
    pass

try:
    import winsdk.windows.devices.bluetooth.advertisement
except Exception:
    pass

try:
    import winsdk.windows.devices.bluetooth.genericattributeprofile
except Exception:
    pass

try:
    import winsdk.windows.devices.bluetooth.rfcomm
except Exception:
    pass

try:
    import winsdk.windows.foundation
except Exception:
    pass

try:
    import winsdk.windows.foundation.collections
except Exception:
    pass

try:
    import winsdk.windows.networking.sockets
except Exception:
    pass

try:
    import winsdk.windows.storage.streams
except Exception:
    pass

class BluetoothEventTriggeringMode(enum.IntEnum):
    SERIAL = 0
    BATCH = 1
    KEEP_LATEST = 2

BluetoothLEAdvertisementPublisherTriggerDetails = _ns_module.BluetoothLEAdvertisementPublisherTriggerDetails
BluetoothLEAdvertisementWatcherTriggerDetails = _ns_module.BluetoothLEAdvertisementWatcherTriggerDetails
GattCharacteristicNotificationTriggerDetails = _ns_module.GattCharacteristicNotificationTriggerDetails
GattServiceProviderConnection = _ns_module.GattServiceProviderConnection
GattServiceProviderTriggerDetails = _ns_module.GattServiceProviderTriggerDetails
RfcommConnectionTriggerDetails = _ns_module.RfcommConnectionTriggerDetails
RfcommInboundConnectionInformation = _ns_module.RfcommInboundConnectionInformation
RfcommOutboundConnectionInformation = _ns_module.RfcommOutboundConnectionInformation
