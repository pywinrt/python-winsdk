// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#include <winrt/Windows.Management.Workplace.h>

namespace py::proj::Windows::Management::Workplace
{}

namespace py::impl::Windows::Management::Workplace
{}

namespace py::wrapper::Windows::Management::Workplace
{
    using MdmPolicy = py::winrt_wrapper<winrt::Windows::Management::Workplace::MdmPolicy>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Management::Workplace::MdmPolicy>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
