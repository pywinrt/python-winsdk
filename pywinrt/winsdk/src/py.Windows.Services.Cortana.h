// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.DataTransfer.h")
#include "py.Windows.ApplicationModel.DataTransfer.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.Services.Cortana.h>

namespace py::proj::Windows::Services::Cortana
{}

namespace py::impl::Windows::Services::Cortana
{}

namespace py::wrapper::Windows::Services::Cortana
{
    using CortanaActionableInsights = py::winrt_wrapper<winrt::Windows::Services::Cortana::CortanaActionableInsights>;
    using CortanaActionableInsightsOptions = py::winrt_wrapper<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions>;
    using CortanaPermissionsManager = py::winrt_wrapper<winrt::Windows::Services::Cortana::CortanaPermissionsManager>;
    using CortanaSettings = py::winrt_wrapper<winrt::Windows::Services::Cortana::CortanaSettings>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Services::Cortana::CortanaActionableInsights>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Cortana::CortanaActionableInsightsOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Cortana::CortanaPermissionsManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Cortana::CortanaSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
