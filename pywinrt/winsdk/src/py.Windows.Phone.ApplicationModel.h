// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"


#include <winrt/Windows.Phone.ApplicationModel.h>

namespace py::proj::Windows::Phone::ApplicationModel
{}

namespace py::impl::Windows::Phone::ApplicationModel
{}

namespace py::wrapper::Windows::Phone::ApplicationModel
{
    using ApplicationProfile = py::winrt_wrapper<winrt::Windows::Phone::ApplicationModel::ApplicationProfile>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Phone::ApplicationModel::ApplicationProfileModes> = "I";


    template<>
    struct py_type<winrt::Windows::Phone::ApplicationModel::ApplicationProfileModes>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Phone::ApplicationModel::ApplicationProfile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
