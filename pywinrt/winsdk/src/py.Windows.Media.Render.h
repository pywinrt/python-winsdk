// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"


#include <winrt/Windows.Media.Render.h>

namespace py::proj::Windows::Media::Render
{}

namespace py::impl::Windows::Media::Render
{}

namespace py::wrapper::Windows::Media::Render
{
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::Render::AudioRenderCategory> = "i";


    template<>
    struct py_type<winrt::Windows::Media::Render::AudioRenderCategory>
    {
        static PyObject* get_python_type() noexcept;
    };
}
