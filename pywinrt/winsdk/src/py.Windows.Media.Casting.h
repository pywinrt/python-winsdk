// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.Popups.h")
#include "py.Windows.UI.Popups.h"
#endif

#include <winrt/Windows.Devices.Enumeration.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.UI.Popups.h>

#include <winrt/Windows.Media.Casting.h>

namespace py::proj::Windows::Media::Casting
{}

namespace py::impl::Windows::Media::Casting
{}

namespace py::wrapper::Windows::Media::Casting
{
    using CastingConnection = py::winrt_wrapper<winrt::Windows::Media::Casting::CastingConnection>;
    using CastingConnectionErrorOccurredEventArgs = py::winrt_wrapper<winrt::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs>;
    using CastingDevice = py::winrt_wrapper<winrt::Windows::Media::Casting::CastingDevice>;
    using CastingDevicePicker = py::winrt_wrapper<winrt::Windows::Media::Casting::CastingDevicePicker>;
    using CastingDevicePickerFilter = py::winrt_wrapper<winrt::Windows::Media::Casting::CastingDevicePickerFilter>;
    using CastingDeviceSelectedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Casting::CastingDeviceSelectedEventArgs>;
    using CastingSource = py::winrt_wrapper<winrt::Windows::Media::Casting::CastingSource>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Casting::CastingConnectionErrorStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Casting::CastingConnectionState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Casting::CastingPlaybackTypes> = "I";


    template<>
    struct py_type<winrt::Windows::Media::Casting::CastingConnectionErrorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Casting::CastingConnectionState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Casting::CastingPlaybackTypes>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Casting::CastingConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Casting::CastingDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Casting::CastingDevicePicker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Casting::CastingDevicePickerFilter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Casting::CastingDeviceSelectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Casting::CastingSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
