// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#include <winrt/Windows.Foundation.h>

#include <winrt/Windows.ApplicationModel.Calls.Background.h>

namespace py::proj::Windows::ApplicationModel::Calls::Background
{}

namespace py::impl::Windows::ApplicationModel::Calls::Background
{}

namespace py::wrapper::Windows::ApplicationModel::Calls::Background
{
    using PhoneCallBlockedTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>;
    using PhoneCallOriginDataRequestTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>;
    using PhoneIncomingCallDismissedTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails>;
    using PhoneIncomingCallNotificationTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallNotificationTriggerDetails>;
    using PhoneLineChangedTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>;
    using PhoneNewVoicemailMessageTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineProperties> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineProperties>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneTriggerType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneIncomingCallNotificationTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
