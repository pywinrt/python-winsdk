// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Authentication.Web.Core.h")
#include "py.Windows.Security.Authentication.Web.Core.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.Xaml.h")
#include "py.Windows.UI.Xaml.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Security.Authentication.Web.Core.h>
#include <winrt/Windows.Security.Credentials.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.h>
#include <winrt/Windows.UI.Xaml.h>

#include <winrt/Windows.ApplicationModel.Store.Preview.h>

namespace py::proj::Windows::ApplicationModel::Store::Preview
{}

namespace py::impl::Windows::ApplicationModel::Store::Preview
{}

namespace py::wrapper::Windows::ApplicationModel::Store::Preview
{
    using DeliveryOptimizationSettings = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::Preview::DeliveryOptimizationSettings>;
    using StoreConfiguration = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::Preview::StoreConfiguration>;
    using StoreHardwareManufacturerInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>;
    using StorePreview = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::Preview::StorePreview>;
    using StorePreviewProductInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>;
    using StorePreviewPurchaseResults = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>;
    using StorePreviewSkuInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>;
    using WebAuthenticationCoreManagerHelper = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::Preview::WebAuthenticationCoreManagerHelper>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::Preview::DeliveryOptimizationDownloadMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::Preview::DeliveryOptimizationDownloadModeSource> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::Preview::StoreLogOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::Preview::DeliveryOptimizationDownloadMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::Preview::DeliveryOptimizationDownloadModeSource>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::Preview::StoreLogOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::Preview::DeliveryOptimizationSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::Preview::StoreConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::Preview::StoreHardwareManufacturerInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::Preview::StorePreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::Preview::WebAuthenticationCoreManagerHelper>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
