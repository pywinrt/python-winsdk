// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Authentication.Web.h")
#include "py.Windows.Security.Authentication.Web.h"
#endif

#if __has_include("py.Windows.Security.Authentication.Web.Core.h")
#include "py.Windows.Security.Authentication.Web.Core.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Core.h")
#include "py.Windows.Security.Cryptography.Core.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.Web.Http.h")
#include "py.Windows.Web.Http.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Security.Authentication.Web.h>
#include <winrt/Windows.Security.Authentication.Web.Core.h>
#include <winrt/Windows.Security.Credentials.h>
#include <winrt/Windows.Security.Cryptography.Core.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.Web.Http.h>

#include <winrt/Windows.Security.Authentication.Web.Provider.h>

namespace py::proj::Windows::Security::Authentication::Web::Provider
{}

namespace py::impl::Windows::Security::Authentication::Web::Provider
{}

namespace py::wrapper::Windows::Security::Authentication::Web::Provider
{
    using WebAccountClientView = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientView>;
    using WebAccountManager = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountManager>;
    using WebAccountProviderAddAccountOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>;
    using WebAccountProviderDeleteAccountOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>;
    using WebAccountProviderGetTokenSilentOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>;
    using WebAccountProviderManageAccountOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>;
    using WebAccountProviderRequestTokenOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>;
    using WebAccountProviderRetrieveCookiesOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>;
    using WebAccountProviderSignOutAccountOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>;
    using WebAccountProviderTriggerDetails = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>;
    using WebProviderTokenRequest = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>;
    using WebProviderTokenResponse = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>;
    using IWebAccountProviderBaseReportOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>;
    using IWebAccountProviderOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>;
    using IWebAccountProviderSilentReportOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>;
    using IWebAccountProviderTokenObjects = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>;
    using IWebAccountProviderTokenObjects2 = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>;
    using IWebAccountProviderTokenOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>;
    using IWebAccountProviderUIReportOperation = py::winrt_wrapper<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions> = "I";


    template<>
    struct py_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientView>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
