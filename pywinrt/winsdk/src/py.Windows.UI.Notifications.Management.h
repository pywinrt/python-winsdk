// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.UI.Notifications.h")
#include "py.Windows.UI.Notifications.h"
#endif

#include <winrt/Windows.UI.Notifications.Management.h>

namespace py::proj::Windows::UI::Notifications::Management
{}

namespace py::impl::Windows::UI::Notifications::Management
{}

namespace py::wrapper::Windows::UI::Notifications::Management
{
    using UserNotificationListener = py::winrt_wrapper<winrt::Windows::UI::Notifications::Management::UserNotificationListener>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::UI::Notifications::Management::UserNotificationListener>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
