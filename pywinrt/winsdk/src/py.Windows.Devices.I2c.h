// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.I2c.Provider.h")
#include "py.Windows.Devices.I2c.Provider.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Devices.I2c.h>

namespace py::proj::Windows::Devices::I2c
{}

namespace py::impl::Windows::Devices::I2c
{}

namespace py::wrapper::Windows::Devices::I2c
{
    using I2cConnectionSettings = py::winrt_wrapper<winrt::Windows::Devices::I2c::I2cConnectionSettings>;
    using I2cController = py::winrt_wrapper<winrt::Windows::Devices::I2c::I2cController>;
    using I2cDevice = py::winrt_wrapper<winrt::Windows::Devices::I2c::I2cDevice>;
    using II2cDeviceStatics = py::winrt_wrapper<winrt::Windows::Devices::I2c::II2cDeviceStatics>;
    using I2cTransferResult = py::winrt_struct_wrapper<winrt::Windows::Devices::I2c::I2cTransferResult>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::I2c::I2cConnectionSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::I2c::I2cController>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::I2c::I2cDevice>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::I2c::II2cDeviceStatics>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::I2c::I2cTransferResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct converter<winrt::Windows::Devices::I2c::I2cTransferResult>
    {
        static PyObject* convert(winrt::Windows::Devices::I2c::I2cTransferResult instance) noexcept;
        static winrt::Windows::Devices::I2c::I2cTransferResult convert_to(PyObject* obj);
    };

}
