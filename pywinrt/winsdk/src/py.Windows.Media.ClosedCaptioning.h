// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.h>

#include <winrt/Windows.Media.ClosedCaptioning.h>

namespace py::proj::Windows::Media::ClosedCaptioning
{}

namespace py::impl::Windows::Media::ClosedCaptioning
{}

namespace py::wrapper::Windows::Media::ClosedCaptioning
{
    using ClosedCaptionProperties = py::winrt_wrapper<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle> = "i";


    template<>
    struct py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionColor>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionSize>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionStyle>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
