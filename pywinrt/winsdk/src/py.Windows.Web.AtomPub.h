// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Data.Xml.Dom.h")
#include "py.Windows.Data.Xml.Dom.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.Web.Syndication.h")
#include "py.Windows.Web.Syndication.h"
#endif

#include <winrt/Windows.Web.AtomPub.h>

namespace py::proj::Windows::Web::AtomPub
{}

namespace py::impl::Windows::Web::AtomPub
{}

namespace py::wrapper::Windows::Web::AtomPub
{
    using AtomPubClient = py::winrt_wrapper<winrt::Windows::Web::AtomPub::AtomPubClient>;
    using ResourceCollection = py::winrt_wrapper<winrt::Windows::Web::AtomPub::ResourceCollection>;
    using ServiceDocument = py::winrt_wrapper<winrt::Windows::Web::AtomPub::ServiceDocument>;
    using Workspace = py::winrt_wrapper<winrt::Windows::Web::AtomPub::Workspace>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Web::AtomPub::AtomPubClient>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::AtomPub::ResourceCollection>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::AtomPub::ServiceDocument>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::AtomPub::Workspace>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
