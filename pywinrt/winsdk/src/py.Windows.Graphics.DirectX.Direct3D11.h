// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Graphics.DirectX.h")
#include "py.Windows.Graphics.DirectX.h"
#endif

#include <winrt/Windows.Graphics.DirectX.h>

#include <winrt/Windows.Graphics.DirectX.Direct3D11.h>

namespace py::proj::Windows::Graphics::DirectX::Direct3D11
{}

namespace py::impl::Windows::Graphics::DirectX::Direct3D11
{}

namespace py::wrapper::Windows::Graphics::DirectX::Direct3D11
{
    using IDirect3DDevice = py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>;
    using IDirect3DSurface = py::winrt_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>;
    using Direct3DMultisampleDescription = py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>;
    using Direct3DSurfaceDescription = py::winrt_struct_wrapper<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DBindings> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DUsage> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription> = "T{i:count:i:quality:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription> = "T{i:width:i:height:i:format:T{i:count:i:quality:}:multisample_description:}";


    template<>
    struct py_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DBindings>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DUsage>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription>
    {
        static PyObject* convert(winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription instance) noexcept;
        static winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription>
    {
        static PyObject* convert(winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription instance) noexcept;
        static winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DSurfaceDescription convert_to(PyObject* obj);
    };

}
