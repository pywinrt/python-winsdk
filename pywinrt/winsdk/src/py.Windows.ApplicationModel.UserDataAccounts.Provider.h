// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.UserDataAccounts.h")
#include "py.Windows.ApplicationModel.UserDataAccounts.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.ApplicationModel.UserDataAccounts.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <winrt/Windows.ApplicationModel.UserDataAccounts.Provider.h>

namespace py::proj::Windows::ApplicationModel::UserDataAccounts::Provider
{}

namespace py::impl::Windows::ApplicationModel::UserDataAccounts::Provider
{}

namespace py::wrapper::Windows::ApplicationModel::UserDataAccounts::Provider
{
    using UserDataAccountPartnerAccountInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo>;
    using UserDataAccountProviderAddAccountOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderAddAccountOperation>;
    using UserDataAccountProviderResolveErrorsOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderResolveErrorsOperation>;
    using UserDataAccountProviderSettingsOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderSettingsOperation>;
    using IUserDataAccountProviderOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderAddAccountOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderResolveErrorsOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderSettingsOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
