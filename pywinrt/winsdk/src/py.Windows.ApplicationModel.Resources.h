// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.ApplicationModel.Resources.h>

namespace py::proj::Windows::ApplicationModel::Resources
{}

namespace py::impl::Windows::ApplicationModel::Resources
{}

namespace py::wrapper::Windows::ApplicationModel::Resources
{
    using ResourceLoader = py::winrt_wrapper<winrt::Windows::ApplicationModel::Resources::ResourceLoader>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Resources::ResourceLoader>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
