// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <winrt/Windows.System.Update.h>

namespace py::proj::Windows::System::Update
{}

namespace py::impl::Windows::System::Update
{}

namespace py::wrapper::Windows::System::Update
{
    using SystemUpdateItem = py::winrt_wrapper<winrt::Windows::System::Update::SystemUpdateItem>;
    using SystemUpdateLastErrorInfo = py::winrt_wrapper<winrt::Windows::System::Update::SystemUpdateLastErrorInfo>;
    using SystemUpdateManager = py::winrt_wrapper<winrt::Windows::System::Update::SystemUpdateManager>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::System::Update::SystemUpdateAttentionRequiredReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::System::Update::SystemUpdateItemState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::System::Update::SystemUpdateManagerState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::System::Update::SystemUpdateStartInstallAction> = "i";


    template<>
    struct py_type<winrt::Windows::System::Update::SystemUpdateAttentionRequiredReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::System::Update::SystemUpdateItemState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::System::Update::SystemUpdateManagerState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::System::Update::SystemUpdateStartInstallAction>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Update::SystemUpdateItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Update::SystemUpdateLastErrorInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::System::Update::SystemUpdateManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
