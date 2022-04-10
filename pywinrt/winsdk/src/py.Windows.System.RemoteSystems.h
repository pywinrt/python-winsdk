// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.AppService.h")
#include "py.Windows.ApplicationModel.AppService.h"
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

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.System.RemoteSystems.h>

namespace py::proj::Windows::System::RemoteSystems
{}

namespace py::impl::Windows::System::RemoteSystems
{}

namespace py::wrapper::Windows::System::RemoteSystems
{
    using KnownRemoteSystemCapabilities = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::KnownRemoteSystemCapabilities>;
    using RemoteSystem = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystem>;
    using RemoteSystemAddedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>;
    using RemoteSystemApp = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemApp>;
    using RemoteSystemAppRegistration = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemAppRegistration>;
    using RemoteSystemAuthorizationKindFilter = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>;
    using RemoteSystemConnectionInfo = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionInfo>;
    using RemoteSystemConnectionRequest = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest>;
    using RemoteSystemDiscoveryTypeFilter = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>;
    using RemoteSystemEnumerationCompletedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemEnumerationCompletedEventArgs>;
    using RemoteSystemKindFilter = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter>;
    using RemoteSystemKinds = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemKinds>;
    using RemoteSystemRemovedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>;
    using RemoteSystemSession = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSession>;
    using RemoteSystemSessionAddedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>;
    using RemoteSystemSessionController = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController>;
    using RemoteSystemSessionCreationResult = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>;
    using RemoteSystemSessionDisconnectedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>;
    using RemoteSystemSessionInfo = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo>;
    using RemoteSystemSessionInvitation = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation>;
    using RemoteSystemSessionInvitationListener = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>;
    using RemoteSystemSessionInvitationReceivedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>;
    using RemoteSystemSessionJoinRequest = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>;
    using RemoteSystemSessionJoinRequestedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>;
    using RemoteSystemSessionJoinResult = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>;
    using RemoteSystemSessionMessageChannel = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>;
    using RemoteSystemSessionOptions = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions>;
    using RemoteSystemSessionParticipant = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant>;
    using RemoteSystemSessionParticipantAddedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>;
    using RemoteSystemSessionParticipantRemovedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>;
    using RemoteSystemSessionParticipantWatcher = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>;
    using RemoteSystemSessionRemovedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>;
    using RemoteSystemSessionUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>;
    using RemoteSystemSessionValueSetReceivedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>;
    using RemoteSystemSessionWatcher = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher>;
    using RemoteSystemStatusTypeFilter = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>;
    using RemoteSystemUpdatedEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>;
    using RemoteSystemWatcher = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher>;
    using RemoteSystemWatcherErrorOccurredEventArgs = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemWatcherErrorOccurredEventArgs>;
    using RemoteSystemWebAccountFilter = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::RemoteSystemWebAccountFilter>;
    using IRemoteSystemFilter = py::winrt_wrapper<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::KnownRemoteSystemCapabilities>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystem>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemApp>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemAppRegistration>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemEnumerationCompletedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemKinds>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSession>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemWatcherErrorOccurredEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::RemoteSystemWebAccountFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
