// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Foundation.h>

#include <winrt/Windows.Perception.Automation.Core.h>

namespace py::proj::Windows::Perception::Automation::Core
{}

namespace py::impl::Windows::Perception::Automation::Core
{}

namespace py::wrapper::Windows::Perception::Automation::Core
{
    using CorePerceptionAutomation = py::winrt_wrapper<winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Perception::Automation::Core::CorePerceptionAutomation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
