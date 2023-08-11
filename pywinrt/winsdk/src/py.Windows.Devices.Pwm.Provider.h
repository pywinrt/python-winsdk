// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Foundation.Collections.h>

#include <winrt/Windows.Devices.Pwm.Provider.h>

namespace py::proj::Windows::Devices::Pwm::Provider
{}

namespace py::impl::Windows::Devices::Pwm::Provider
{}

namespace py::wrapper::Windows::Devices::Pwm::Provider
{
    using IPwmControllerProvider = py::winrt_wrapper<winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider>;
    using IPwmProvider = py::winrt_wrapper<winrt::Windows::Devices::Pwm::Provider::IPwmProvider>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Pwm::Provider::IPwmProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
