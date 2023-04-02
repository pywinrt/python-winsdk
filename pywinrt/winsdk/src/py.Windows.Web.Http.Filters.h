// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.Sockets.h")
#include "py.Windows.Networking.Sockets.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Certificates.h")
#include "py.Windows.Security.Cryptography.Certificates.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.Web.Http.h")
#include "py.Windows.Web.Http.h"
#endif

#include <winrt/Windows.Web.Http.Filters.h>

namespace py::proj::Windows::Web::Http::Filters
{}

namespace py::impl::Windows::Web::Http::Filters
{}

namespace py::wrapper::Windows::Web::Http::Filters
{
    using HttpBaseProtocolFilter = py::winrt_wrapper<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter>;
    using HttpCacheControl = py::winrt_wrapper<winrt::Windows::Web::Http::Filters::HttpCacheControl>;
    using HttpServerCustomValidationRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs>;
    using IHttpFilter = py::winrt_wrapper<winrt::Windows::Web::Http::Filters::IHttpFilter>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Web::Http::Filters::HttpCacheReadBehavior> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Web::Http::Filters::HttpCacheWriteBehavior> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Web::Http::Filters::HttpCookieUsageBehavior> = "i";


    template<>
    struct py_type<winrt::Windows::Web::Http::Filters::HttpCacheReadBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Web::Http::Filters::HttpCacheWriteBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Web::Http::Filters::HttpCookieUsageBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::Filters::HttpCacheControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Http::Filters::IHttpFilter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
