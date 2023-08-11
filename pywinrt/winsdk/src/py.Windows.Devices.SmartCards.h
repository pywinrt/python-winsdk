// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

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

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Security.Cryptography.Core.h>
#include <winrt/Windows.Storage.Streams.h>

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
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardActivationPolicyChangeResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardAppletIdGroupActivationPolicy> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardAutomaticResponseStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramAlgorithm> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGeneratorOperationStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageConfirmationResponseFormat> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageFormat> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialProtectionMethod> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramPlacementOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyAlgorithm> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCapabilities> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardCryptographicKeyAttestationStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardEmulationCategory> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardEmulationType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionSource> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardEmulatorEnablementPolicy> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardLaunchBehavior> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardReaderKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardTriggerType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior> = "i";


    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardActivationPolicyChangeResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardAppletIdGroupActivationPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardAutomaticResponseStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramAlgorithm>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGeneratorOperationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageConfirmationResponseFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialProtectionMethod>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramPlacementOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyAlgorithm>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCapabilities>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardCryptographicKeyAttestationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardEmulationCategory>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardEmulationType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionSource>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorEnablementPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardLaunchBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardPinCharacterPolicyOption>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardReaderKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardReaderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardTriggerType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::SmartCards::SmartCardUnlockPromptingBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::CardAddedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::CardRemovedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::KnownSmartCardAppletIds>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCard>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardAppletIdGroup>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardAppletIdGroupRegistration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardAutomaticResponseApdu>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardChallengeContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardConnection>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGenerator>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialCharacteristicsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramMaterialPackageCharacteristicsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramGetAllCryptogramStorageKeyCharacteristicsResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialCharacteristics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPackageCharacteristics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramMaterialPossessionProof>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramPlacementStep>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyCharacteristics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardCryptogramStorageKeyInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardEmulator>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorApduReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionDeactivatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardEmulatorConnectionProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardPinPolicy>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardPinResetDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardPinResetRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardProvisioning>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::SmartCards::SmartCardTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::Devices::SmartCards::SmartCardPinResetHandler>
    {
        using type = py::impl::Windows::Devices::SmartCards::SmartCardPinResetHandler;
    };

}
