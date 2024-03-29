// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"


#include <winrt/Windows.Graphics.DirectX.h>

namespace py::proj::Windows::Graphics::DirectX
{}

namespace py::impl::Windows::Graphics::DirectX
{}

namespace py::wrapper::Windows::Graphics::DirectX
{
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DirectX::DirectXAlphaMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DirectX::DirectXColorSpace> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DirectX::DirectXPixelFormat> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DirectX::DirectXPrimitiveTopology> = "i";


    template<>
    struct py_type<winrt::Windows::Graphics::DirectX::DirectXAlphaMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::DirectX::DirectXColorSpace>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::DirectX::DirectXPixelFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::DirectX::DirectXPrimitiveTopology>
    {
        static PyObject* get_python_type() noexcept;
    };
}
