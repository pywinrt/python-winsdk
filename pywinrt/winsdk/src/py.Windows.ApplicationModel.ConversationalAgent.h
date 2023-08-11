// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Media.Audio.h")
#include "py.Windows.Media.Audio.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Media.Audio.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.ApplicationModel.ConversationalAgent.h>

namespace py::proj::Windows::ApplicationModel::ConversationalAgent
{}

namespace py::impl::Windows::ApplicationModel::ConversationalAgent
{}

namespace py::wrapper::Windows::ApplicationModel::ConversationalAgent
{
    using ActivationSignalDetectionConfiguration = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfiguration>;
    using ActivationSignalDetectionConfigurationCreationResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationCreationResult>;
    using ActivationSignalDetector = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetector>;
    using ConversationalAgentDetectorManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentDetectorManager>;
    using ConversationalAgentSession = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession>;
    using ConversationalAgentSessionInterruptedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs>;
    using ConversationalAgentSignal = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignal>;
    using ConversationalAgentSignalDetectedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs>;
    using ConversationalAgentSystemStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs>;
    using DetectionConfigurationAvailabilityChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangedEventArgs>;
    using DetectionConfigurationAvailabilityInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityInfo>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationCreationStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationRemovalResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationSetModelDataResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationStateChangeResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionTrainingDataFormat> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorPowerState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentActivationKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentActivationResult> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionUpdateResponse> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangeType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentVoiceActivationPrerequisiteKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangeKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationTrainingStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::ConversationalAgent::SignalDetectorResourceKind> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationCreationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationRemovalResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationSetModelDataResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationStateChangeResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionTrainingDataFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectorPowerState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentActivationKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentActivationResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionUpdateResponse>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangeType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentVoiceActivationPrerequisiteKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangeKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationTrainingStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::ConversationalAgent::SignalDetectorResourceKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetectionConfigurationCreationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ActivationSignalDetector>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentDetectorManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSessionInterruptedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignal>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSignalDetectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::ConversationalAgentSystemStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::ConversationalAgent::DetectionConfigurationAvailabilityInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
