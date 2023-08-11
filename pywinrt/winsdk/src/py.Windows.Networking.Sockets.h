// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Background.h")
#include "py.Windows.ApplicationModel.Background.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Networking.h")
#include "py.Windows.Networking.h"
#endif

#if __has_include("py.Windows.Networking.Connectivity.h")
#include "py.Windows.Networking.Connectivity.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Certificates.h")
#include "py.Windows.Security.Cryptography.Certificates.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.Web.h")
#include "py.Windows.Web.h"
#endif

#include <winrt/Windows.ApplicationModel.Background.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Networking.h>
#include <winrt/Windows.Networking.Connectivity.h>
#include <winrt/Windows.Security.Credentials.h>
#include <winrt/Windows.Security.Cryptography.Certificates.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Web.h>

#include <winrt/Windows.Networking.Sockets.h>

namespace py::proj::Windows::Networking::Sockets
{}

namespace py::impl::Windows::Networking::Sockets
{}

namespace py::wrapper::Windows::Networking::Sockets
{
    using ControlChannelTrigger = py::winrt_wrapper<winrt::Windows::Networking::Sockets::ControlChannelTrigger>;
    using DatagramSocket = py::winrt_wrapper<winrt::Windows::Networking::Sockets::DatagramSocket>;
    using DatagramSocketControl = py::winrt_wrapper<winrt::Windows::Networking::Sockets::DatagramSocketControl>;
    using DatagramSocketInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::DatagramSocketInformation>;
    using DatagramSocketMessageReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs>;
    using MessageWebSocket = py::winrt_wrapper<winrt::Windows::Networking::Sockets::MessageWebSocket>;
    using MessageWebSocketControl = py::winrt_wrapper<winrt::Windows::Networking::Sockets::MessageWebSocketControl>;
    using MessageWebSocketInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::MessageWebSocketInformation>;
    using MessageWebSocketMessageReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs>;
    using ServerMessageWebSocket = py::winrt_wrapper<winrt::Windows::Networking::Sockets::ServerMessageWebSocket>;
    using ServerMessageWebSocketControl = py::winrt_wrapper<winrt::Windows::Networking::Sockets::ServerMessageWebSocketControl>;
    using ServerMessageWebSocketInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::ServerMessageWebSocketInformation>;
    using ServerStreamWebSocket = py::winrt_wrapper<winrt::Windows::Networking::Sockets::ServerStreamWebSocket>;
    using ServerStreamWebSocketInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::ServerStreamWebSocketInformation>;
    using SocketActivityContext = py::winrt_wrapper<winrt::Windows::Networking::Sockets::SocketActivityContext>;
    using SocketActivityInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::SocketActivityInformation>;
    using SocketActivityTriggerDetails = py::winrt_wrapper<winrt::Windows::Networking::Sockets::SocketActivityTriggerDetails>;
    using SocketError = py::winrt_wrapper<winrt::Windows::Networking::Sockets::SocketError>;
    using StreamSocket = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamSocket>;
    using StreamSocketControl = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamSocketControl>;
    using StreamSocketInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamSocketInformation>;
    using StreamSocketListener = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamSocketListener>;
    using StreamSocketListenerConnectionReceivedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs>;
    using StreamSocketListenerControl = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamSocketListenerControl>;
    using StreamSocketListenerInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamSocketListenerInformation>;
    using StreamWebSocket = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamWebSocket>;
    using StreamWebSocketControl = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamWebSocketControl>;
    using StreamWebSocketInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::StreamWebSocketInformation>;
    using WebSocketClosedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs>;
    using WebSocketError = py::winrt_wrapper<winrt::Windows::Networking::Sockets::WebSocketError>;
    using WebSocketKeepAlive = py::winrt_wrapper<winrt::Windows::Networking::Sockets::WebSocketKeepAlive>;
    using WebSocketServerCustomValidationRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>;
    using IControlChannelTriggerEventDetails = py::winrt_wrapper<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails>;
    using IControlChannelTriggerResetEventDetails = py::winrt_wrapper<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>;
    using IWebSocket = py::winrt_wrapper<winrt::Windows::Networking::Sockets::IWebSocket>;
    using IWebSocketControl = py::winrt_wrapper<winrt::Windows::Networking::Sockets::IWebSocketControl>;
    using IWebSocketControl2 = py::winrt_wrapper<winrt::Windows::Networking::Sockets::IWebSocketControl2>;
    using IWebSocketInformation = py::winrt_wrapper<winrt::Windows::Networking::Sockets::IWebSocketInformation>;
    using IWebSocketInformation2 = py::winrt_wrapper<winrt::Windows::Networking::Sockets::IWebSocketInformation2>;
    using BandwidthStatistics = py::winrt_struct_wrapper<winrt::Windows::Networking::Sockets::BandwidthStatistics>;
    using RoundTripTimeStatistics = py::winrt_struct_wrapper<winrt::Windows::Networking::Sockets::RoundTripTimeStatistics>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::ControlChannelTriggerResetReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::ControlChannelTriggerResourceType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::ControlChannelTriggerStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::MessageWebSocketReceiveMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::SocketActivityKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::SocketActivityTriggerReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::SocketErrorStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::SocketMessageType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::SocketProtectionLevel> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::SocketQualityOfService> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::SocketSslErrorSeverity> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::BandwidthStatistics> = "T{Q:outbound_bits_per_second:Q:inbound_bits_per_second:Q:outbound_bits_per_second_instability:Q:inbound_bits_per_second_instability:?:outbound_bandwidth_peaked:?:inbound_bandwidth_peaked:}";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Networking::Sockets::RoundTripTimeStatistics> = "T{I:variance:I:max:I:min:I:sum:}";


    template<>
    struct py_type<winrt::Windows::Networking::Sockets::ControlChannelTriggerResetReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::ControlChannelTriggerResourceType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::ControlChannelTriggerStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::MessageWebSocketReceiveMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::SocketActivityKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::SocketActivityTriggerReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::SocketErrorStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::SocketMessageType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::SocketProtectionLevel>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::SocketQualityOfService>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Networking::Sockets::SocketSslErrorSeverity>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::ControlChannelTrigger>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::DatagramSocket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::DatagramSocketControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::DatagramSocketInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::MessageWebSocket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::MessageWebSocketControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::MessageWebSocketInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::ServerMessageWebSocket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::ServerMessageWebSocketControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::ServerMessageWebSocketInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::ServerStreamWebSocket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::ServerStreamWebSocketInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::SocketActivityContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::SocketActivityInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::SocketActivityTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::SocketError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamSocket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamSocketControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamSocketInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamSocketListener>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamSocketListenerControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamSocketListenerInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamWebSocket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamWebSocketControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::StreamWebSocketInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::WebSocketError>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::WebSocketKeepAlive>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::IWebSocket>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::IWebSocketControl>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::IWebSocketControl2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::IWebSocketInformation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::IWebSocketInformation2>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::BandwidthStatistics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Sockets::RoundTripTimeStatistics>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Networking::Sockets::BandwidthStatistics>
    {
        static PyObject* convert(winrt::Windows::Networking::Sockets::BandwidthStatistics instance) noexcept;
        static winrt::Windows::Networking::Sockets::BandwidthStatistics convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Networking::Sockets::RoundTripTimeStatistics>
    {
        static PyObject* convert(winrt::Windows::Networking::Sockets::RoundTripTimeStatistics instance) noexcept;
        static winrt::Windows::Networking::Sockets::RoundTripTimeStatistics convert_to(PyObject* obj);
    };

}
