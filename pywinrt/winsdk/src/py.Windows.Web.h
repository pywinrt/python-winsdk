// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Web.h>

namespace py::proj::Windows::Web
{}

namespace py::impl::Windows::Web
{}

namespace py::wrapper::Windows::Web
{
    using WebError = py::winrt_wrapper<winrt::Windows::Web::WebError>;
    using IUriToStreamResolver = py::winrt_wrapper<winrt::Windows::Web::IUriToStreamResolver>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Web::WebError>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::IUriToStreamResolver>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
