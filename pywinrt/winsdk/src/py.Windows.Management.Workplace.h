// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

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
    using WorkplaceSettings = py::winrt_wrapper<winrt::Windows::Management::Workplace::WorkplaceSettings>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Management::Workplace::MessagingSyncPolicy> = "i";


    template<>
    struct py_type<winrt::Windows::Management::Workplace::MessagingSyncPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Workplace::MdmPolicy>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Management::Workplace::WorkplaceSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
