// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#include <winrt/Windows.System.Display.h>

namespace py::proj::Windows::System::Display
{}

namespace py::impl::Windows::System::Display
{}

namespace py::wrapper::Windows::System::Display
{
    using DisplayRequest = py::winrt_wrapper<winrt::Windows::System::Display::DisplayRequest>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::System::Display::DisplayRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
