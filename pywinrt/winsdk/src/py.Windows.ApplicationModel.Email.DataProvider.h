// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Email.h")
#include "py.Windows.ApplicationModel.Email.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Security.Cryptography.Certificates.h")
#include "py.Windows.Security.Cryptography.Certificates.h"
#endif

#include <winrt/Windows.ApplicationModel.Email.DataProvider.h>

namespace py::proj::Windows::ApplicationModel::Email::DataProvider
{}

namespace py::impl::Windows::ApplicationModel::Email::DataProvider
{}

namespace py::wrapper::Windows::ApplicationModel::Email::DataProvider
{
    using EmailDataProviderConnection = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection>;
    using EmailDataProviderTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderTriggerDetails>;
    using EmailMailboxCreateFolderRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest>;
    using EmailMailboxCreateFolderRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs>;
    using EmailMailboxDeleteFolderRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest>;
    using EmailMailboxDeleteFolderRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs>;
    using EmailMailboxDownloadAttachmentRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest>;
    using EmailMailboxDownloadAttachmentRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs>;
    using EmailMailboxDownloadMessageRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest>;
    using EmailMailboxDownloadMessageRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs>;
    using EmailMailboxEmptyFolderRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest>;
    using EmailMailboxEmptyFolderRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs>;
    using EmailMailboxForwardMeetingRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest>;
    using EmailMailboxForwardMeetingRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs>;
    using EmailMailboxGetAutoReplySettingsRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest>;
    using EmailMailboxGetAutoReplySettingsRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs>;
    using EmailMailboxMoveFolderRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest>;
    using EmailMailboxMoveFolderRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs>;
    using EmailMailboxProposeNewTimeForMeetingRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest>;
    using EmailMailboxProposeNewTimeForMeetingRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs>;
    using EmailMailboxResolveRecipientsRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest>;
    using EmailMailboxResolveRecipientsRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs>;
    using EmailMailboxServerSearchReadBatchRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest>;
    using EmailMailboxServerSearchReadBatchRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs>;
    using EmailMailboxSetAutoReplySettingsRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest>;
    using EmailMailboxSetAutoReplySettingsRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs>;
    using EmailMailboxSyncManagerSyncRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest>;
    using EmailMailboxSyncManagerSyncRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs>;
    using EmailMailboxUpdateMeetingResponseRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest>;
    using EmailMailboxUpdateMeetingResponseRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs>;
    using EmailMailboxValidateCertificatesRequest = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest>;
    using EmailMailboxValidateCertificatesRequestEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderTriggerDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequest>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
