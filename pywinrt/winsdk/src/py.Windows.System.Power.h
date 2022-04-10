// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.System.Power.h>

namespace py::proj::Windows::System::Power
{}

namespace py::impl::Windows::System::Power
{}

namespace py::wrapper::Windows::System::Power
{
    using BackgroundEnergyManager = py::winrt_wrapper<winrt::Windows::System::Power::BackgroundEnergyManager>;
    using ForegroundEnergyManager = py::winrt_wrapper<winrt::Windows::System::Power::ForegroundEnergyManager>;
    using PowerManager = py::winrt_wrapper<winrt::Windows::System::Power::PowerManager>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::System::Power::BackgroundEnergyManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::Power::ForegroundEnergyManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::Power::PowerManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
