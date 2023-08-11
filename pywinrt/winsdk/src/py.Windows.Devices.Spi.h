// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Spi.Provider.h")
#include "py.Windows.Devices.Spi.Provider.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Devices.Spi.Provider.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <winrt/Windows.Devices.Spi.h>

namespace py::proj::Windows::Devices::Spi
{}

namespace py::impl::Windows::Devices::Spi
{}

namespace py::wrapper::Windows::Devices::Spi
{
    using SpiBusInfo = py::winrt_wrapper<winrt::Windows::Devices::Spi::SpiBusInfo>;
    using SpiConnectionSettings = py::winrt_wrapper<winrt::Windows::Devices::Spi::SpiConnectionSettings>;
    using SpiController = py::winrt_wrapper<winrt::Windows::Devices::Spi::SpiController>;
    using SpiDevice = py::winrt_wrapper<winrt::Windows::Devices::Spi::SpiDevice>;
    using ISpiDeviceStatics = py::winrt_wrapper<winrt::Windows::Devices::Spi::ISpiDeviceStatics>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Spi::SpiMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Spi::SpiSharingMode> = "i";


    template<>
    struct py_type<winrt::Windows::Devices::Spi::SpiMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Spi::SpiSharingMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Spi::SpiBusInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Spi::SpiConnectionSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Spi::SpiController>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Spi::SpiDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Spi::ISpiDeviceStatics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
