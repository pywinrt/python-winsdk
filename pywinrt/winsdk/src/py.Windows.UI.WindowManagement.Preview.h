// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.UI.WindowManagement.h")
#include "py.Windows.UI.WindowManagement.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.UI.WindowManagement.h>

#include <winrt/Windows.UI.WindowManagement.Preview.h>

namespace py::proj::Windows::UI::WindowManagement::Preview
{}

namespace py::impl::Windows::UI::WindowManagement::Preview
{}

namespace py::wrapper::Windows::UI::WindowManagement::Preview
{
    using WindowManagementPreview = py::winrt_wrapper<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
