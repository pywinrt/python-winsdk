// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Contacts.h")
#include "py.Windows.ApplicationModel.Contacts.h"
#endif

#if __has_include("py.Windows.Devices.Enumeration.h")
#include "py.Windows.Devices.Enumeration.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.ApplicationModel.Calls.h>

namespace py::proj::Windows::ApplicationModel::Calls
{}

namespace py::impl::Windows::ApplicationModel::Calls
{}

namespace py::wrapper::Windows::ApplicationModel::Calls
{
    using CallAnswerEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::CallAnswerEventArgs>;
    using CallRejectEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::CallRejectEventArgs>;
    using CallStateChangeEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs>;
    using MuteChangeEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::MuteChangeEventArgs>;
    using PhoneCall = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCall>;
    using PhoneCallBlocking = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallBlocking>;
    using PhoneCallHistoryEntry = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>;
    using PhoneCallHistoryEntryAddress = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>;
    using PhoneCallHistoryEntryQueryOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>;
    using PhoneCallHistoryEntryReader = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>;
    using PhoneCallHistoryManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManager>;
    using PhoneCallHistoryManagerForUser = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>;
    using PhoneCallHistoryStore = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStore>;
    using PhoneCallInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallInfo>;
    using PhoneCallManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallManager>;
    using PhoneCallStore = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallStore>;
    using PhoneCallVideoCapabilities = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>;
    using PhoneCallVideoCapabilitiesManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilitiesManager>;
    using PhoneCallsResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneCallsResult>;
    using PhoneDialOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneDialOptions>;
    using PhoneLine = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneLine>;
    using PhoneLineCellularDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneLineCellularDetails>;
    using PhoneLineConfiguration = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneLineConfiguration>;
    using PhoneLineDialResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneLineDialResult>;
    using PhoneLineTransportDevice = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice>;
    using PhoneLineWatcher = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher>;
    using PhoneLineWatcherEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>;
    using PhoneVoicemail = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::PhoneVoicemail>;
    using VoipCallCoordinator = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::VoipCallCoordinator>;
    using VoipPhoneCall = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::CallAnswerEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::CallRejectEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::CallStateChangeEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::MuteChangeEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCall>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallBlocking>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStore>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallStore>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallVideoCapabilitiesManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneCallsResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneDialOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneLine>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneLineCellularDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneLineConfiguration>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneLineDialResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneLineTransportDevice>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcher>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::PhoneVoicemail>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::VoipCallCoordinator>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::VoipPhoneCall>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
