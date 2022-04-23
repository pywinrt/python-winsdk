// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

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

#include <winrt/Windows.Web.Syndication.h>

namespace py::proj::Windows::Web::Syndication
{}

namespace py::impl::Windows::Web::Syndication
{}

namespace py::wrapper::Windows::Web::Syndication
{
    using SyndicationAttribute = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationAttribute>;
    using SyndicationCategory = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationCategory>;
    using SyndicationClient = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationClient>;
    using SyndicationContent = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationContent>;
    using SyndicationError = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationError>;
    using SyndicationFeed = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationFeed>;
    using SyndicationGenerator = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationGenerator>;
    using SyndicationItem = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationItem>;
    using SyndicationLink = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationLink>;
    using SyndicationNode = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationNode>;
    using SyndicationPerson = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationPerson>;
    using SyndicationText = py::winrt_wrapper<winrt::Windows::Web::Syndication::SyndicationText>;
    using ISyndicationClient = py::winrt_wrapper<winrt::Windows::Web::Syndication::ISyndicationClient>;
    using ISyndicationNode = py::winrt_wrapper<winrt::Windows::Web::Syndication::ISyndicationNode>;
    using ISyndicationText = py::winrt_wrapper<winrt::Windows::Web::Syndication::ISyndicationText>;
    using RetrievalProgress = py::winrt_struct_wrapper<winrt::Windows::Web::Syndication::RetrievalProgress>;
    using TransferProgress = py::winrt_struct_wrapper<winrt::Windows::Web::Syndication::TransferProgress>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationAttribute>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationCategory>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationClient>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationContent>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationError>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationFeed>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationGenerator>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationItem>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationLink>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationNode>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationPerson>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::SyndicationText>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::ISyndicationClient>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::ISyndicationNode>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::ISyndicationText>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::RetrievalProgress>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::Syndication::TransferProgress>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct converter<winrt::Windows::Web::Syndication::RetrievalProgress>
    {
        static PyObject* convert(winrt::Windows::Web::Syndication::RetrievalProgress instance) noexcept;
        static winrt::Windows::Web::Syndication::RetrievalProgress convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Web::Syndication::TransferProgress>
    {
        static PyObject* convert(winrt::Windows::Web::Syndication::TransferProgress instance) noexcept;
        static winrt::Windows::Web::Syndication::TransferProgress convert_to(PyObject* obj);
    };

}
