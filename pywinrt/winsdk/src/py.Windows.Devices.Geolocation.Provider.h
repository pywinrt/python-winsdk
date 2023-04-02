// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Geolocation.h")
#include "py.Windows.Devices.Geolocation.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Devices.Geolocation.Provider.h>

namespace py::proj::Windows::Devices::Geolocation::Provider
{}

namespace py::impl::Windows::Devices::Geolocation::Provider
{}

namespace py::wrapper::Windows::Devices::Geolocation::Provider
{
    using GeolocationProvider = py::winrt_wrapper<winrt::Windows::Devices::Geolocation::Provider::GeolocationProvider>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Devices::Geolocation::Provider::LocationOverrideStatus> = "i";


    template<>
    struct py_type<winrt::Windows::Devices::Geolocation::Provider::LocationOverrideStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Geolocation::Provider::GeolocationProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
