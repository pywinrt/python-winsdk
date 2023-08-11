// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Appointments.h")
#include "py.Windows.ApplicationModel.Appointments.h"
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

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.ApplicationModel.Appointments.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Security.Cryptography.Certificates.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.h>

#include <winrt/Windows.ApplicationModel.Email.h>

namespace py::proj::Windows::ApplicationModel::Email
{}

namespace py::impl::Windows::ApplicationModel::Email
{}

namespace py::wrapper::Windows::ApplicationModel::Email
{
    using EmailAttachment = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailAttachment>;
    using EmailConversation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailConversation>;
    using EmailConversationBatch = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailConversationBatch>;
    using EmailConversationReader = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailConversationReader>;
    using EmailFolder = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailFolder>;
    using EmailIrmInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailIrmInfo>;
    using EmailIrmTemplate = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailIrmTemplate>;
    using EmailItemCounts = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailItemCounts>;
    using EmailMailbox = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailbox>;
    using EmailMailboxAction = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxAction>;
    using EmailMailboxAutoReply = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReply>;
    using EmailMailboxAutoReplySettings = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>;
    using EmailMailboxCapabilities = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxCapabilities>;
    using EmailMailboxChange = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxChange>;
    using EmailMailboxChangeReader = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeReader>;
    using EmailMailboxChangeTracker = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeTracker>;
    using EmailMailboxChangedDeferral = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxChangedDeferral>;
    using EmailMailboxChangedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>;
    using EmailMailboxCreateFolderResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>;
    using EmailMailboxPolicies = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxPolicies>;
    using EmailMailboxSyncManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMailboxSyncManager>;
    using EmailManager = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailManager>;
    using EmailManagerForUser = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailManagerForUser>;
    using EmailMeetingInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMeetingInfo>;
    using EmailMessage = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMessage>;
    using EmailMessageBatch = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMessageBatch>;
    using EmailMessageReader = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailMessageReader>;
    using EmailQueryOptions = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailQueryOptions>;
    using EmailQueryTextSearch = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailQueryTextSearch>;
    using EmailRecipient = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailRecipient>;
    using EmailRecipientResolutionResult = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailRecipientResolutionResult>;
    using EmailStore = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailStore>;
    using EmailStoreNotificationTriggerDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailAttachmentDownloadState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailBatchStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailFlagState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailImportance> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxActionKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMailboxSyncStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMeetingResponseType> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMessageBodyKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMessageDownloadState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMessageResponseKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailMessageSmimeKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailQueryKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailQuerySearchFields> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailQuerySearchScope> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailQuerySortDirection> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailQuerySortProperty> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailRecipientResolutionStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailSpecialFolderKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::Email::EmailStoreAccessType> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailAttachmentDownloadState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailBatchStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailFlagState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailImportance>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxActionKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMailboxSyncStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMeetingResponseType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMessageBodyKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMessageDownloadState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMessageResponseKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailMessageSmimeKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailQueryKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailQuerySearchFields>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailQuerySearchScope>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailQuerySortDirection>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailQuerySortProperty>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailRecipientResolutionStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailSpecialFolderKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::Email::EmailStoreAccessType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailAttachment>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailConversation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailConversationBatch>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailConversationReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailFolder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailIrmInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailIrmTemplate>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailItemCounts>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailbox>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxAction>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReply>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxChange>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxChangeTracker>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxChangedDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxPolicies>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMailboxSyncManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailManagerForUser>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMeetingInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMessage>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMessageBatch>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailMessageReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailQueryOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailQueryTextSearch>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailRecipient>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailRecipientResolutionResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailStore>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
