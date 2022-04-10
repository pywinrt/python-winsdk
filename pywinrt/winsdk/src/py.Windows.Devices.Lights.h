// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.Devices.Lights.h>

namespace py::proj::Windows::Devices::Lights
{}

namespace py::impl::Windows::Devices::Lights
{}

namespace py::wrapper::Windows::Devices::Lights
{
    using Lamp = py::winrt_wrapper<winrt::Windows::Devices::Lights::Lamp>;
    using LampArray = py::winrt_wrapper<winrt::Windows::Devices::Lights::LampArray>;
    using LampAvailabilityChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Lights::LampAvailabilityChangedEventArgs>;
    using LampInfo = py::winrt_wrapper<winrt::Windows::Devices::Lights::LampInfo>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Lamp>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::LampArray>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::LampAvailabilityChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::LampInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
