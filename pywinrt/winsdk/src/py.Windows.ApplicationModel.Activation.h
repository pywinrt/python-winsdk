// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.Appointments.AppointmentsProvider.h")
#include "py.Windows.ApplicationModel.Appointments.AppointmentsProvider.h"
#endif

#if __has_include("py.Windows.ApplicationModel.Background.h")
#include "py.Windows.ApplicationModel.Background.h"
#endif

#if __has_include("py.Windows.ApplicationModel.Contacts.h")
#include "py.Windows.ApplicationModel.Contacts.h"
#endif

#if __has_include("py.Windows.ApplicationModel.DataTransfer.ShareTarget.h")
#include "py.Windows.ApplicationModel.DataTransfer.ShareTarget.h"
#endif

#if __has_include("py.Windows.ApplicationModel.Search.h")
#include "py.Windows.ApplicationModel.Search.h"
#endif

#if __has_include("py.Windows.ApplicationModel.UserDataAccounts.Provider.h")
#include "py.Windows.ApplicationModel.UserDataAccounts.Provider.h"
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

#if __has_include("py.Windows.Media.SpeechRecognition.h")
#include "py.Windows.Media.SpeechRecognition.h"
#endif

#if __has_include("py.Windows.Security.Authentication.Web.h")
#include "py.Windows.Security.Authentication.Web.h"
#endif

#if __has_include("py.Windows.Security.Authentication.Web.Provider.h")
#include "py.Windows.Security.Authentication.Web.Provider.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Pickers.Provider.h")
#include "py.Windows.Storage.Pickers.Provider.h"
#endif

#if __has_include("py.Windows.Storage.Provider.h")
#include "py.Windows.Storage.Provider.h"
#endif

#if __has_include("py.Windows.Storage.Search.h")
#include "py.Windows.Storage.Search.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.Notifications.h")
#include "py.Windows.UI.Notifications.h"
#endif

#if __has_include("py.Windows.UI.ViewManagement.h")
#include "py.Windows.UI.ViewManagement.h"
#endif

#include <winrt/Windows.ApplicationModel.Activation.h>

namespace py::proj::Windows::ApplicationModel::Activation
{}

namespace py::impl::Windows::ApplicationModel::Activation
{}

namespace py::wrapper::Windows::ApplicationModel::Activation
{
    using AppointmentsProviderAddAppointmentActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs>;
    using AppointmentsProviderRemoveAppointmentActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs>;
    using AppointmentsProviderReplaceAppointmentActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs>;
    using AppointmentsProviderShowAppointmentDetailsActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs>;
    using AppointmentsProviderShowTimeFrameActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs>;
    using BackgroundActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs>;
    using BarcodeScannerPreviewActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs>;
    using CachedFileUpdaterActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs>;
    using CommandLineActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::CommandLineActivatedEventArgs>;
    using CommandLineActivationOperation = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::CommandLineActivationOperation>;
    using ContactPanelActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs>;
    using DeviceActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::DeviceActivatedEventArgs>;
    using DevicePairingActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs>;
    using DialReceiverActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs>;
    using FileActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs>;
    using FileOpenPickerActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs>;
    using FileOpenPickerContinuationEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs>;
    using FileSavePickerActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs>;
    using FileSavePickerContinuationEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs>;
    using FolderPickerContinuationEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs>;
    using LaunchActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs>;
    using LockScreenActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs>;
    using LockScreenComponentActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs>;
    using PhoneCallActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::PhoneCallActivatedEventArgs>;
    using PickerReturnedActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs>;
    using ProtocolActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs>;
    using ProtocolForResultsActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs>;
    using RestrictedLaunchActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs>;
    using SearchActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs>;
    using ShareTargetActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs>;
    using SplashScreen = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::SplashScreen>;
    using StartupTaskActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::StartupTaskActivatedEventArgs>;
    using TileActivatedInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::TileActivatedInfo>;
    using ToastNotificationActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs>;
    using UserDataAccountProviderActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs>;
    using VoiceCommandActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs>;
    using WebAccountProviderActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs>;
    using WebAuthenticationBrokerContinuationEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs>;
    using IActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>;
    using IActivatedEventArgsWithUser = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>;
    using IApplicationViewActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>;
    using IAppointmentsProviderActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>;
    using IAppointmentsProviderAddAppointmentActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>;
    using IAppointmentsProviderRemoveAppointmentActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>;
    using IAppointmentsProviderReplaceAppointmentActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>;
    using IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>;
    using IAppointmentsProviderShowTimeFrameActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>;
    using IBackgroundActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>;
    using IBarcodeScannerPreviewActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs>;
    using ICachedFileUpdaterActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>;
    using ICommandLineActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs>;
    using IContactPanelActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>;
    using IContinuationActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>;
    using IDeviceActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>;
    using IDevicePairingActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>;
    using IDialReceiverActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>;
    using IFileActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs>;
    using IFileActivatedEventArgsWithCallerPackageFamilyName = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>;
    using IFileActivatedEventArgsWithNeighboringFiles = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>;
    using IFileOpenPickerActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>;
    using IFileOpenPickerActivatedEventArgs2 = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>;
    using IFileOpenPickerContinuationEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>;
    using IFileSavePickerActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>;
    using IFileSavePickerActivatedEventArgs2 = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>;
    using IFileSavePickerContinuationEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>;
    using IFolderPickerContinuationEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>;
    using ILaunchActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>;
    using ILaunchActivatedEventArgs2 = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>;
    using ILockScreenActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>;
    using IPhoneCallActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IPhoneCallActivatedEventArgs>;
    using IPickerReturnedActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>;
    using IPrelaunchActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>;
    using IProtocolActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>;
    using IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>;
    using IProtocolForResultsActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>;
    using IRestrictedLaunchActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>;
    using ISearchActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>;
    using ISearchActivatedEventArgsWithLinguisticDetails = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>;
    using IShareTargetActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>;
    using IStartupTaskActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>;
    using IToastNotificationActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>;
    using IUserDataAccountProviderActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>;
    using IViewSwitcherProvider = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider>;
    using IVoiceCommandActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>;
    using IWebAccountProviderActivatedEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>;
    using IWebAuthenticationBrokerContinuationEventArgs = py::winrt_wrapper<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderAddAppointmentActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderRemoveAppointmentActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderReplaceAppointmentActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowAppointmentDetailsActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::AppointmentsProviderShowTimeFrameActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::BackgroundActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::BarcodeScannerPreviewActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::CachedFileUpdaterActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::CommandLineActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::CommandLineActivationOperation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ContactPanelActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::DeviceActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::DevicePairingActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::DialReceiverActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::FileActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::FileOpenPickerActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::FileOpenPickerContinuationEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::FileSavePickerActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::FileSavePickerContinuationEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::FolderPickerContinuationEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::LaunchActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::LockScreenActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::LockScreenComponentActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::PhoneCallActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::PickerReturnedActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ProtocolActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ProtocolForResultsActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::RestrictedLaunchActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::SearchActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ShareTargetActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::SplashScreen>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::StartupTaskActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::TileActivatedInfo>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ToastNotificationActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::UserDataAccountProviderActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::VoiceCommandActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::WebAccountProviderActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::WebAuthenticationBrokerContinuationEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IPhoneCallActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IViewSwitcherProvider>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
