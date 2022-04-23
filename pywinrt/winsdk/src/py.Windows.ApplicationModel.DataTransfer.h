// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.EnterpriseData.h")
#include "py.Windows.Security.EnterpriseData.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.ApplicationModel.DataTransfer.h>

namespace py::proj::Windows::ApplicationModel::DataTransfer
{}

namespace py::impl::Windows::ApplicationModel::DataTransfer
{
    struct DataProviderHandler
    {
        static winrt::Windows::ApplicationModel::DataTransfer::DataProviderHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };

    struct ShareProviderHandler
    {
        static winrt::Windows::ApplicationModel::DataTransfer::ShareProviderHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

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

namespace py::wrapper::Windows::ApplicationModel::DataTransfer
{
    using Clipboard = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::Clipboard>;
    using ClipboardContentOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ClipboardContentOptions>;
    using ClipboardHistoryChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs>;
    using ClipboardHistoryItem = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem>;
    using ClipboardHistoryItemsResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ClipboardHistoryItemsResult>;
    using DataPackage = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataPackage>;
    using DataPackagePropertySet = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>;
    using DataPackagePropertySetView = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>;
    using DataPackageView = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataPackageView>;
    using DataProviderDeferral = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataProviderDeferral>;
    using DataProviderRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataProviderRequest>;
    using DataRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataRequest>;
    using DataRequestDeferral = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataRequestDeferral>;
    using DataRequestedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>;
    using DataTransferManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::DataTransferManager>;
    using HtmlFormatHelper = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::HtmlFormatHelper>;
    using OperationCompletedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>;
    using ShareCompletedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs>;
    using ShareProvider = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ShareProvider>;
    using ShareProviderOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ShareProviderOperation>;
    using ShareProvidersRequestedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs>;
    using ShareTargetInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ShareTargetInfo>;
    using ShareUIOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::ShareUIOptions>;
    using SharedStorageAccessManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager>;
    using StandardDataFormats = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::StandardDataFormats>;
    using TargetApplicationChosenEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::Clipboard>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ClipboardContentOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ClipboardHistoryChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ClipboardHistoryItem>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ClipboardHistoryItemsResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataPackage>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataPackageView>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataProviderDeferral>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataProviderRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataRequestDeferral>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::DataTransferManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::HtmlFormatHelper>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareProvider>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareProviderOperation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareTargetInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareUIOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::StandardDataFormats>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template <>
    struct delegate_python_type<winrt::Windows::ApplicationModel::DataTransfer::DataProviderHandler>
    {
        using type = py::impl::Windows::ApplicationModel::DataTransfer::DataProviderHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::ApplicationModel::DataTransfer::ShareProviderHandler>
    {
        using type = py::impl::Windows::ApplicationModel::DataTransfer::ShareProviderHandler;
    };

}
