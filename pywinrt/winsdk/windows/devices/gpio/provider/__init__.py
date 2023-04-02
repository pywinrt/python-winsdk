# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import enum

import winsdk.system

_ns_module = winsdk.system._import_ns_module("Windows.Devices.Gpio.Provider")

try:
    import winsdk.windows.foundation
except ImportError:
    pass

try:
    import winsdk.windows.foundation.collections
except ImportError:
    pass

class ProviderGpioPinDriveMode(enum.IntEnum):
    INPUT = 0
    OUTPUT = 1
    INPUT_PULL_UP = 2
    INPUT_PULL_DOWN = 3
    OUTPUT_OPEN_DRAIN = 4
    OUTPUT_OPEN_DRAIN_PULL_UP = 5
    OUTPUT_OPEN_SOURCE = 6
    OUTPUT_OPEN_SOURCE_PULL_DOWN = 7

class ProviderGpioPinEdge(enum.IntEnum):
    FALLING_EDGE = 0
    RISING_EDGE = 1

class ProviderGpioPinValue(enum.IntEnum):
    LOW = 0
    HIGH = 1

class ProviderGpioSharingMode(enum.IntEnum):
    EXCLUSIVE = 0
    SHARED_READ_ONLY = 1

_ns_module._register_ProviderGpioPinDriveMode(ProviderGpioPinDriveMode)
_ns_module._register_ProviderGpioPinEdge(ProviderGpioPinEdge)
_ns_module._register_ProviderGpioPinValue(ProviderGpioPinValue)
_ns_module._register_ProviderGpioSharingMode(ProviderGpioSharingMode)

GpioPinProviderValueChangedEventArgs = _ns_module.GpioPinProviderValueChangedEventArgs
IGpioControllerProvider = _ns_module.IGpioControllerProvider
IGpioPinProvider = _ns_module.IGpioPinProvider
IGpioProvider = _ns_module.IGpioProvider
