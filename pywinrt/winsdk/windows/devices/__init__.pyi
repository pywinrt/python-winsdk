# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

import datetime
import sys
import types
import typing

import winsdk.system
import winsdk.windows.devices.adc.provider
import winsdk.windows.devices.gpio.provider
import winsdk.windows.devices.i2c.provider
import winsdk.windows.devices.pwm.provider
import winsdk.windows.devices.spi.provider

Self = typing.TypeVar('Self')

class LowLevelDevicesAggregateProvider(winsdk.system.Object):
    adc_controller_provider: typing.Optional[winsdk.windows.devices.adc.provider.IAdcControllerProvider]
    gpio_controller_provider: typing.Optional[winsdk.windows.devices.gpio.provider.IGpioControllerProvider]
    i2c_controller_provider: typing.Optional[winsdk.windows.devices.i2c.provider.II2cControllerProvider]
    pwm_controller_provider: typing.Optional[winsdk.windows.devices.pwm.provider.IPwmControllerProvider]
    spi_controller_provider: typing.Optional[winsdk.windows.devices.spi.provider.ISpiControllerProvider]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LowLevelDevicesAggregateProvider: ...
    def __new__(cls: typing.Type[LowLevelDevicesAggregateProvider], adc: typing.Optional[winsdk.windows.devices.adc.provider.IAdcControllerProvider], pwm: typing.Optional[winsdk.windows.devices.pwm.provider.IPwmControllerProvider], gpio: typing.Optional[winsdk.windows.devices.gpio.provider.IGpioControllerProvider], i2c: typing.Optional[winsdk.windows.devices.i2c.provider.II2cControllerProvider], spi: typing.Optional[winsdk.windows.devices.spi.provider.ISpiControllerProvider]) -> LowLevelDevicesAggregateProvider:...

class LowLevelDevicesController(winsdk.system.Object):
    default_provider: typing.ClassVar[typing.Optional[ILowLevelDevicesAggregateProvider]]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> LowLevelDevicesController: ...

class ILowLevelDevicesAggregateProvider(winsdk.system.Object):
    adc_controller_provider: typing.Optional[winsdk.windows.devices.adc.provider.IAdcControllerProvider]
    gpio_controller_provider: typing.Optional[winsdk.windows.devices.gpio.provider.IGpioControllerProvider]
    i2c_controller_provider: typing.Optional[winsdk.windows.devices.i2c.provider.II2cControllerProvider]
    pwm_controller_provider: typing.Optional[winsdk.windows.devices.pwm.provider.IPwmControllerProvider]
    spi_controller_provider: typing.Optional[winsdk.windows.devices.spi.provider.ISpiControllerProvider]
    @staticmethod
    def _from(obj: winsdk.system.Object) -> ILowLevelDevicesAggregateProvider: ...

