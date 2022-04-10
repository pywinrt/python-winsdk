// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Activation.h")
#include "py.Windows.ApplicationModel.Activation.h"
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

#if __has_include("py.Windows.Networking.Sockets.h")
#include "py.Windows.Networking.Sockets.h"
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

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.Networking.Vpn.h>

namespace py::proj::Windows::Networking::Vpn
{}

namespace py::impl::Windows::Networking::Vpn
{}

namespace py::wrapper::Windows::Networking::Vpn
{
    using VpnAppId = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnAppId>;
    using VpnChannel = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnChannel>;
    using VpnChannelActivityEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnChannelActivityEventArgs>;
    using VpnChannelActivityStateChangedArgs = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>;
    using VpnChannelConfiguration = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnChannelConfiguration>;
    using VpnCredential = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCredential>;
    using VpnCustomCheckBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomCheckBox>;
    using VpnCustomComboBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomComboBox>;
    using VpnCustomEditBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomEditBox>;
    using VpnCustomErrorBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomErrorBox>;
    using VpnCustomPromptBooleanInput = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomPromptBooleanInput>;
    using VpnCustomPromptOptionSelector = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomPromptOptionSelector>;
    using VpnCustomPromptText = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomPromptText>;
    using VpnCustomPromptTextInput = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomPromptTextInput>;
    using VpnCustomTextBox = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnCustomTextBox>;
    using VpnDomainNameAssignment = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnDomainNameAssignment>;
    using VpnDomainNameInfo = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnDomainNameInfo>;
    using VpnForegroundActivatedEventArgs = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnForegroundActivatedEventArgs>;
    using VpnForegroundActivationOperation = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnForegroundActivationOperation>;
    using VpnInterfaceId = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnInterfaceId>;
    using VpnManagementAgent = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnManagementAgent>;
    using VpnNamespaceAssignment = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnNamespaceAssignment>;
    using VpnNamespaceInfo = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnNamespaceInfo>;
    using VpnNativeProfile = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnNativeProfile>;
    using VpnPacketBuffer = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnPacketBuffer>;
    using VpnPacketBufferList = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnPacketBufferList>;
    using VpnPickedCredential = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnPickedCredential>;
    using VpnPlugInProfile = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnPlugInProfile>;
    using VpnRoute = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnRoute>;
    using VpnRouteAssignment = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnRouteAssignment>;
    using VpnSystemHealth = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnSystemHealth>;
    using VpnTrafficFilter = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnTrafficFilter>;
    using VpnTrafficFilterAssignment = py::winrt_wrapper<winrt::Windows::Networking::Vpn::VpnTrafficFilterAssignment>;
    using IVpnChannelStatics = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnChannelStatics>;
    using IVpnCredential = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnCredential>;
    using IVpnCustomPrompt = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnCustomPrompt>;
    using IVpnCustomPromptElement = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnCustomPromptElement>;
    using IVpnDomainNameInfoFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnDomainNameInfoFactory>;
    using IVpnInterfaceIdFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnInterfaceIdFactory>;
    using IVpnNamespaceInfoFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnNamespaceInfoFactory>;
    using IVpnPacketBufferFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnPacketBufferFactory>;
    using IVpnPlugIn = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnPlugIn>;
    using IVpnProfile = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnProfile>;
    using IVpnRouteFactory = py::winrt_wrapper<winrt::Windows::Networking::Vpn::IVpnRouteFactory>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnAppId>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnChannel>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnChannelActivityEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnChannelConfiguration>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCredential>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomCheckBox>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomComboBox>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomEditBox>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomErrorBox>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomPromptBooleanInput>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomPromptOptionSelector>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomPromptText>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomPromptTextInput>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnCustomTextBox>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnDomainNameAssignment>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnDomainNameInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnForegroundActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnForegroundActivationOperation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnInterfaceId>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnManagementAgent>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnNamespaceAssignment>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnNamespaceInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnNativeProfile>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnPacketBuffer>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnPacketBufferList>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnPickedCredential>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnPlugInProfile>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnRoute>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnRouteAssignment>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnSystemHealth>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnTrafficFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::VpnTrafficFilterAssignment>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnChannelStatics>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnCredential>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnCustomPrompt>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnCustomPromptElement>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnDomainNameInfoFactory>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnInterfaceIdFactory>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnNamespaceInfoFactory>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnPacketBufferFactory>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnPlugIn>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnProfile>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Networking::Vpn::IVpnRouteFactory>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
