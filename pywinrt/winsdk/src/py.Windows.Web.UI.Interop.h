// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.Core.h")
#include "py.Windows.UI.Core.h"
#endif

#if __has_include("py.Windows.Web.h")
#include "py.Windows.Web.h"
#endif

#if __has_include("py.Windows.Web.Http.h")
#include "py.Windows.Web.Http.h"
#endif

#if __has_include("py.Windows.Web.UI.h")
#include "py.Windows.Web.UI.h"
#endif

#include <winrt/Windows.Web.UI.Interop.h>

namespace py::proj::Windows::Web::UI::Interop
{}

namespace py::impl::Windows::Web::UI::Interop
{}

namespace py::wrapper::Windows::Web::UI::Interop
{
    using WebViewControl = py::winrt_wrapper<winrt::Windows::Web::UI::Interop::WebViewControl>;
    using WebViewControlAcceleratorKeyPressedEventArgs = py::winrt_wrapper<winrt::Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs>;
    using WebViewControlMoveFocusRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs>;
    using WebViewControlProcess = py::winrt_wrapper<winrt::Windows::Web::UI::Interop::WebViewControlProcess>;
    using WebViewControlProcessOptions = py::winrt_wrapper<winrt::Windows::Web::UI::Interop::WebViewControlProcessOptions>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Web::UI::Interop::WebViewControl>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::UI::Interop::WebViewControlProcess>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Web::UI::Interop::WebViewControlProcessOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
