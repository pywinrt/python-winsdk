// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.Popups.h")
#include "py.Windows.UI.Popups.h"
#endif

#include <winrt/Windows.UI.ApplicationSettings.h>

namespace py::proj::Windows::UI::ApplicationSettings
{}

namespace py::impl::Windows::UI::ApplicationSettings
{
    struct CredentialCommandCredentialDeletedHandler
    {
        static winrt::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
                }
            };
        };
    };

    struct WebAccountCommandInvokedHandler
    {
        static winrt::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
                }
            };
        };
    };

    struct WebAccountProviderCommandInvokedHandler
    {
        static winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::UI::ApplicationSettings
{
    using AccountsSettingsPane = py::winrt_wrapper<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane>;
    using AccountsSettingsPaneCommandsRequestedEventArgs = py::winrt_wrapper<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>;
    using AccountsSettingsPaneEventDeferral = py::winrt_wrapper<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>;
    using CredentialCommand = py::winrt_wrapper<winrt::Windows::UI::ApplicationSettings::CredentialCommand>;
    using SettingsCommand = py::winrt_wrapper<winrt::Windows::UI::ApplicationSettings::SettingsCommand>;
    using WebAccountCommand = py::winrt_wrapper<winrt::Windows::UI::ApplicationSettings::WebAccountCommand>;
    using WebAccountInvokedArgs = py::winrt_wrapper<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs>;
    using WebAccountProviderCommand = py::winrt_wrapper<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPane>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneCommandsRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ApplicationSettings::AccountsSettingsPaneEventDeferral>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ApplicationSettings::CredentialCommand>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ApplicationSettings::SettingsCommand>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ApplicationSettings::WebAccountCommand>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ApplicationSettings::WebAccountInvokedArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommand>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template <>
    struct delegate_python_type<winrt::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler>
    {
        using type = py::impl::Windows::UI::ApplicationSettings::CredentialCommandCredentialDeletedHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler>
    {
        using type = py::impl::Windows::UI::ApplicationSettings::WebAccountCommandInvokedHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler>
    {
        using type = py::impl::Windows::UI::ApplicationSettings::WebAccountProviderCommandInvokedHandler;
    };

}
