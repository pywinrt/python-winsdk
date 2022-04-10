// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.h")
#include "py.Windows.ApplicationModel.h"
#endif

#if __has_include("py.Windows.ApplicationModel.Activation.h")
#include "py.Windows.ApplicationModel.Activation.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.Core.h")
#include "py.Windows.UI.Core.h"
#endif

#include <winrt/Windows.ApplicationModel.Core.h>

namespace py::proj::Windows::ApplicationModel::Core
{}

namespace py::impl::Windows::ApplicationModel::Core
{}

namespace py::wrapper::Windows::ApplicationModel::Core
{
    using AppListEntry = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::AppListEntry>;
    using CoreApplication = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::CoreApplication>;
    using CoreApplicationView = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::CoreApplicationView>;
    using CoreApplicationViewTitleBar = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>;
    using HostedViewClosingEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::HostedViewClosingEventArgs>;
    using UnhandledError = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::UnhandledError>;
    using UnhandledErrorDetectedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>;
    using ICoreApplicationUnhandledError = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>;
    using IFrameworkView = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::IFrameworkView>;
    using IFrameworkViewSource = py::winrt_wrapper<winrt::Windows::ApplicationModel::Core::IFrameworkViewSource>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::AppListEntry>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::CoreApplication>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::CoreApplicationView>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::CoreApplicationViewTitleBar>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::HostedViewClosingEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::UnhandledError>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::UnhandledErrorDetectedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::ICoreApplicationUnhandledError>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::IFrameworkView>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Core::IFrameworkViewSource>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
