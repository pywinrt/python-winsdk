// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.Custom.h>

namespace py::proj::Windows::Devices::Custom
{}

namespace py::impl::Windows::Devices::Custom
{}

namespace py::wrapper::Windows::Devices::Custom
{
    using CustomDevice = py::winrt_wrapper<winrt::Windows::Devices::Custom::CustomDevice>;
    using IOControlCode = py::winrt_wrapper<winrt::Windows::Devices::Custom::IOControlCode>;
    using KnownDeviceTypes = py::winrt_wrapper<winrt::Windows::Devices::Custom::KnownDeviceTypes>;
    using IIOControlCode = py::winrt_wrapper<winrt::Windows::Devices::Custom::IIOControlCode>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::Custom::CustomDevice>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Custom::IOControlCode>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Custom::KnownDeviceTypes>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Custom::IIOControlCode>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
