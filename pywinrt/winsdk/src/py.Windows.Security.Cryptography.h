// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Security.Cryptography.h>

namespace py::proj::Windows::Security::Cryptography
{}

namespace py::impl::Windows::Security::Cryptography
{}

namespace py::wrapper::Windows::Security::Cryptography
{
    using CryptographicBuffer = py::winrt_wrapper<winrt::Windows::Security::Cryptography::CryptographicBuffer>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Security::Cryptography::CryptographicBuffer>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
