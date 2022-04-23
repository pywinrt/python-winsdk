// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.SerialCommunication.h>

namespace py::proj::Windows::Devices::SerialCommunication
{}

namespace py::impl::Windows::Devices::SerialCommunication
{}

namespace py::wrapper::Windows::Devices::SerialCommunication
{
    using ErrorReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::SerialCommunication::ErrorReceivedEventArgs>;
    using PinChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::SerialCommunication::PinChangedEventArgs>;
    using SerialDevice = py::winrt_wrapper<winrt::Windows::Devices::SerialCommunication::SerialDevice>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::SerialCommunication::ErrorReceivedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SerialCommunication::PinChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SerialCommunication::SerialDevice>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
