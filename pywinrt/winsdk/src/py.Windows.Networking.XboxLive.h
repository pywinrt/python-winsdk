// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.h")
#include "py.Windows.Networking.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Networking.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Networking.XboxLive.h>

namespace py::proj::Windows::Networking::XboxLive
{}

namespace py::impl::Windows::Networking::XboxLive
{}

namespace py::wrapper::Windows::Networking::XboxLive
{
    using XboxLiveDeviceAddress = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveDeviceAddress>;
    using XboxLiveEndpointPair = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPair>;
    using XboxLiveEndpointPairCreationResult = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>;
    using XboxLiveEndpointPairStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>;
    using XboxLiveEndpointPairTemplate = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>;
    using XboxLiveInboundEndpointPairCreatedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>;
    using XboxLiveQualityOfServiceMeasurement = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>;
    using XboxLiveQualityOfServiceMetricResult = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>;
    using XboxLiveQualityOfServicePrivatePayloadResult = py::winrt_wrapper<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::XboxLive::XboxLiveNetworkAccessKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::XboxLive::XboxLiveSocketKind> = "i";


    template<>
    struct py_type<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::XboxLive::XboxLiveNetworkAccessKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::XboxLive::XboxLiveSocketKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveDeviceAddress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPair>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
