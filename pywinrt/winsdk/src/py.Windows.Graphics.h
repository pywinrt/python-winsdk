// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"


#include <winrt/Windows.Graphics.h>

namespace py::proj::Windows::Graphics
{}

namespace py::impl::Windows::Graphics
{}

namespace py::wrapper::Windows::Graphics
{
    using IGeometrySource2D = py::winrt_wrapper<winrt::Windows::Graphics::IGeometrySource2D>;
    using DisplayAdapterId = py::winrt_struct_wrapper<winrt::Windows::Graphics::DisplayAdapterId>;
    using DisplayId = py::winrt_struct_wrapper<winrt::Windows::Graphics::DisplayId>;
    using PointInt32 = py::winrt_struct_wrapper<winrt::Windows::Graphics::PointInt32>;
    using RectInt32 = py::winrt_struct_wrapper<winrt::Windows::Graphics::RectInt32>;
    using SizeInt32 = py::winrt_struct_wrapper<winrt::Windows::Graphics::SizeInt32>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DisplayAdapterId> = "T{I:low_part:i:high_part:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DisplayId> = "T{Q:value:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::PointInt32> = "T{i:x:i:y:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::RectInt32> = "T{i:x:i:y:i:width:i:height:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::SizeInt32> = "T{i:width:i:height:}";


    template<>
    struct winrt_type<winrt::Windows::Graphics::IGeometrySource2D>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::DisplayAdapterId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::DisplayId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::PointInt32>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::RectInt32>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::SizeInt32>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Graphics::DisplayAdapterId>
    {
        static PyObject* convert(winrt::Windows::Graphics::DisplayAdapterId instance) noexcept;
        static winrt::Windows::Graphics::DisplayAdapterId convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::DisplayId>
    {
        static PyObject* convert(winrt::Windows::Graphics::DisplayId instance) noexcept;
        static winrt::Windows::Graphics::DisplayId convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::PointInt32>
    {
        static PyObject* convert(winrt::Windows::Graphics::PointInt32 instance) noexcept;
        static winrt::Windows::Graphics::PointInt32 convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::RectInt32>
    {
        static PyObject* convert(winrt::Windows::Graphics::RectInt32 instance) noexcept;
        static winrt::Windows::Graphics::RectInt32 convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::SizeInt32>
    {
        static PyObject* convert(winrt::Windows::Graphics::SizeInt32 instance) noexcept;
        static winrt::Windows::Graphics::SizeInt32 convert_to(PyObject* obj);
    };

}
