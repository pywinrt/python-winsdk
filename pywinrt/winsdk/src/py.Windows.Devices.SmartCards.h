// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Core.h")
#include "py.Windows.Security.Cryptography.Core.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Devices.SmartCards.h>

namespace py::proj::Windows::Devices::SmartCards
{}

namespace py::impl::Windows::Devices::SmartCards
{
    struct SmartCardPinResetHandler
    {
        static winrt::Windows::Devices::SmartCards::SmartCardPinResetHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };

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

namespace py::wrapper::Windows::Devices::SmartCards
{
    using CardAddedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::CardAddedEventArgs>;
    using CardRemovedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::CardRemovedEventArgs>;
    using KnownSmartCardAppletIds = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::KnownSmartCardAppletIds>;
    using SmartCard = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCard>;
    using SmartCardAppletIdGroup = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardAppletIdGroup>;
    using SmartCardAppletIdGroupRegistration = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>;
    using SmartCardAutomaticResponseApdu = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardAutomaticResponseApdu>;
    using SmartCardChallengeContext = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardChallengeContext>;
    using SmartCardConnection = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardConnection>;
    using SmartCardCryptogramGenerator = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGenerator>;
    using SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>;
    using SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>;
    using SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>;
    using SmartCardCryptogramMaterialCharacteristics = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialCharacteristics>;
    using SmartCardCryptogramMaterialPackageCharacteristics = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageCharacteristics>;
    using SmartCardCryptogramMaterialPossessionProof = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPossessionProof>;
    using SmartCardCryptogramPlacementStep = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep>;
    using SmartCardCryptogramStorageKeyCharacteristics = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCharacteristics>;
    using SmartCardCryptogramStorageKeyInfo = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyInfo>;
    using SmartCardEmulator = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardEmulator>;
    using SmartCardEmulatorApduReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardEmulatorApduReceivedEventArgs>;
    using SmartCardEmulatorConnectionDeactivatedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedEventArgs>;
    using SmartCardEmulatorConnectionProperties = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionProperties>;
    using SmartCardPinPolicy = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardPinPolicy>;
    using SmartCardPinResetDeferral = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardPinResetDeferral>;
    using SmartCardPinResetRequest = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardPinResetRequest>;
    using SmartCardProvisioning = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardProvisioning>;
    using SmartCardReader = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardReader>;
    using SmartCardTriggerDetails = py::winrt_wrapper<winrt::Windows::Devices::SmartCards::SmartCardTriggerDetails>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::CardAddedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::CardRemovedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::KnownSmartCardAppletIds>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCard>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardAppletIdGroup>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardAutomaticResponseApdu>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardChallengeContext>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardConnection>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGenerator>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialCharacteristics>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageCharacteristics>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPossessionProof>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCharacteristics>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardEmulator>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorApduReceivedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionProperties>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardPinPolicy>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardPinResetDeferral>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardPinResetRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardProvisioning>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardReader>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardTriggerDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template <>
    struct delegate_python_type<winrt::Windows::Devices::SmartCards::SmartCardPinResetHandler>
    {
        using type = py::impl::Windows::Devices::SmartCards::SmartCardPinResetHandler;
    };

}
