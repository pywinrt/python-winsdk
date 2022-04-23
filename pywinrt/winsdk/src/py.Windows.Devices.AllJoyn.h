// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Globalization.h")
#include "py.Windows.Globalization.h"
#endif

#if __has_include("py.Windows.Networking.Sockets.h")
#include "py.Windows.Networking.Sockets.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Certificates.h")
#include "py.Windows.Security.Cryptography.Certificates.h"
#endif

#include <winrt/Windows.Devices.AllJoyn.h>

namespace py::proj::Windows::Devices::AllJoyn
{}

namespace py::impl::Windows::Devices::AllJoyn
{}

namespace py::wrapper::Windows::Devices::AllJoyn
{
    using AllJoynAboutData = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynAboutData>;
    using AllJoynAboutDataView = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynAboutDataView>;
    using AllJoynAcceptSessionJoinerEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>;
    using AllJoynAuthenticationCompleteEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs>;
    using AllJoynBusAttachment = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment>;
    using AllJoynBusAttachmentStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs>;
    using AllJoynBusObject = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynBusObject>;
    using AllJoynBusObjectStoppedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>;
    using AllJoynCredentials = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynCredentials>;
    using AllJoynCredentialsRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs>;
    using AllJoynCredentialsVerificationRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs>;
    using AllJoynMessageInfo = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynMessageInfo>;
    using AllJoynProducerStoppedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs>;
    using AllJoynServiceInfo = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfo>;
    using AllJoynServiceInfoRemovedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs>;
    using AllJoynSession = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynSession>;
    using AllJoynSessionJoinedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>;
    using AllJoynSessionLostEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>;
    using AllJoynSessionMemberAddedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>;
    using AllJoynSessionMemberRemovedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>;
    using AllJoynStatus = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynStatus>;
    using AllJoynWatcherStoppedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs>;
    using IAllJoynAcceptSessionJoiner = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>;
    using IAllJoynProducer = py::winrt_wrapper<winrt::Windows::Devices::AllJoyn::IAllJoynProducer>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynAboutData>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynAboutDataView>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynBusObject>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynCredentials>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynMessageInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynSession>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynStatus>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::AllJoyn::IAllJoynProducer>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
