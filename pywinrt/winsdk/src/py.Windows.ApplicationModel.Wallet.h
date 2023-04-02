// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Geolocation.h")
#include "py.Windows.Devices.Geolocation.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.ApplicationModel.Wallet.h>

namespace py::proj::Windows::ApplicationModel::Wallet
{}

namespace py::impl::Windows::ApplicationModel::Wallet
{}

namespace py::wrapper::Windows::ApplicationModel::Wallet
{
    using WalletBarcode = py::winrt_wrapper<winrt::Windows::ApplicationModel::Wallet::WalletBarcode>;
    using WalletItem = py::winrt_wrapper<winrt::Windows::ApplicationModel::Wallet::WalletItem>;
    using WalletItemCustomProperty = py::winrt_wrapper<winrt::Windows::ApplicationModel::Wallet::WalletItemCustomProperty>;
    using WalletItemStore = py::winrt_wrapper<winrt::Windows::ApplicationModel::Wallet::WalletItemStore>;
    using WalletManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Wallet::WalletManager>;
    using WalletRelevantLocation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Wallet::WalletRelevantLocation>;
    using WalletTransaction = py::winrt_wrapper<winrt::Windows::ApplicationModel::Wallet::WalletTransaction>;
    using WalletVerb = py::winrt_wrapper<winrt::Windows::ApplicationModel::Wallet::WalletVerb>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Wallet::WalletActionKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Wallet::WalletBarcodeSymbology> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Wallet::WalletDetailViewPosition> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Wallet::WalletItemKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Wallet::WalletSummaryViewPosition> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::Wallet::WalletActionKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Wallet::WalletBarcodeSymbology>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Wallet::WalletDetailViewPosition>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Wallet::WalletItemKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Wallet::WalletSummaryViewPosition>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Wallet::WalletBarcode>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Wallet::WalletItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Wallet::WalletItemCustomProperty>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Wallet::WalletItemStore>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Wallet::WalletManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Wallet::WalletRelevantLocation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Wallet::WalletTransaction>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Wallet::WalletVerb>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
