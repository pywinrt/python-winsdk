// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.ApplicationModel.Store.h>

namespace py::proj::Windows::ApplicationModel::Store
{}

namespace py::impl::Windows::ApplicationModel::Store
{
    struct LicenseChangedEventHandler
    {
        static winrt::Windows::ApplicationModel::Store::LicenseChangedEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)]()
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle args{ nullptr };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::ApplicationModel::Store
{
    using CurrentApp = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::CurrentApp>;
    using CurrentAppSimulator = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::CurrentAppSimulator>;
    using LicenseInformation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::LicenseInformation>;
    using ListingInformation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::ListingInformation>;
    using ProductLicense = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::ProductLicense>;
    using ProductListing = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::ProductListing>;
    using ProductPurchaseDisplayProperties = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties>;
    using PurchaseResults = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::PurchaseResults>;
    using UnfulfilledConsumable = py::winrt_wrapper<winrt::Windows::ApplicationModel::Store::UnfulfilledConsumable>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::FulfillmentResult> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::ProductPurchaseStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Store::ProductType> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::FulfillmentResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::ProductPurchaseStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Store::ProductType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::CurrentApp>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::CurrentAppSimulator>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::LicenseInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::ListingInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::ProductLicense>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::ProductListing>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::PurchaseResults>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Store::UnfulfilledConsumable>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::ApplicationModel::Store::LicenseChangedEventHandler>
    {
        using type = py::impl::Windows::ApplicationModel::Store::LicenseChangedEventHandler;
    };

}
