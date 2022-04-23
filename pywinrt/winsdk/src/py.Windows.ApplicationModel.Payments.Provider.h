// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Payments.h")
#include "py.Windows.ApplicationModel.Payments.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#include <winrt/Windows.ApplicationModel.Payments.Provider.h>

namespace py::proj::Windows::ApplicationModel::Payments::Provider
{}

namespace py::impl::Windows::ApplicationModel::Payments::Provider
{}

namespace py::wrapper::Windows::ApplicationModel::Payments::Provider
{
    using PaymentAppCanMakePaymentTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppCanMakePaymentTriggerDetails>;
    using PaymentAppManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppManager>;
    using PaymentTransaction = py::winrt_wrapper<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransaction>;
    using PaymentTransactionAcceptResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppCanMakePaymentTriggerDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Payments::Provider::PaymentAppManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransaction>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Payments::Provider::PaymentTransactionAcceptResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
