// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Globalization.Collation.h>

namespace py::proj::Windows::Globalization::Collation
{}

namespace py::impl::Windows::Globalization::Collation
{}

namespace py::wrapper::Windows::Globalization::Collation
{
    using CharacterGrouping = py::winrt_wrapper<winrt::Windows::Globalization::Collation::CharacterGrouping>;
    using CharacterGroupings = py::winrt_wrapper<winrt::Windows::Globalization::Collation::CharacterGroupings>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Globalization::Collation::CharacterGrouping>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::Collation::CharacterGroupings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
