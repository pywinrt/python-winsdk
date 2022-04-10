// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.ApplicationModel.ExtendedExecution.Foreground.h>

namespace py::proj::Windows::ApplicationModel::ExtendedExecution::Foreground
{}

namespace py::impl::Windows::ApplicationModel::ExtendedExecution::Foreground
{}

namespace py::wrapper::Windows::ApplicationModel::ExtendedExecution::Foreground
{
    using ExtendedExecutionForegroundRevokedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs>;
    using ExtendedExecutionForegroundSession = py::winrt_wrapper<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundSession>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
