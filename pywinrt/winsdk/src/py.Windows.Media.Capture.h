// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

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

#if __has_include("py.Windows.Graphics.DirectX.Direct3D11.h")
#include "py.Windows.Graphics.DirectX.Direct3D11.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Media.h")
#include "py.Windows.Media.h"
#endif

#if __has_include("py.Windows.Media.Capture.Core.h")
#include "py.Windows.Media.Capture.Core.h"
#endif

#if __has_include("py.Windows.Media.Capture.Frames.h")
#include "py.Windows.Media.Capture.Frames.h"
#endif

#if __has_include("py.Windows.Media.Core.h")
#include "py.Windows.Media.Core.h"
#endif

#if __has_include("py.Windows.Media.Devices.h")
#include "py.Windows.Media.Devices.h"
#endif

#if __has_include("py.Windows.Media.Effects.h")
#include "py.Windows.Media.Effects.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Security.Authentication.Web.h")
#include "py.Windows.Security.Authentication.Web.h"
#endif

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.WindowManagement.h")
#include "py.Windows.UI.WindowManagement.h"
#endif

#include <winrt/Windows.Media.Capture.h>

namespace py::proj::Windows::Media::Capture
{}

namespace py::impl::Windows::Media::Capture
{
    struct MediaCaptureFailedEventHandler
    {
        static winrt::Windows::Media::Capture::MediaCaptureFailedEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };

    struct RecordLimitationExceededEventHandler
    {
        static winrt::Windows::Media::Capture::RecordLimitationExceededEventHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };

                if (!args) {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }

                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_error();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::Media::Capture
{
    using AdvancedCapturedPhoto = py::winrt_wrapper<winrt::Windows::Media::Capture::AdvancedCapturedPhoto>;
    using AdvancedPhotoCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::AdvancedPhotoCapture>;
    using AppBroadcastBackgroundService = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastBackgroundService>;
    using AppBroadcastBackgroundServiceSignInInfo = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>;
    using AppBroadcastBackgroundServiceStreamInfo = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>;
    using AppBroadcastCameraCaptureStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>;
    using AppBroadcastGlobalSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastGlobalSettings>;
    using AppBroadcastHeartbeatRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>;
    using AppBroadcastManager = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastManager>;
    using AppBroadcastMicrophoneCaptureStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>;
    using AppBroadcastPlugIn = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastPlugIn>;
    using AppBroadcastPlugInManager = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastPlugInManager>;
    using AppBroadcastPlugInStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>;
    using AppBroadcastPreview = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastPreview>;
    using AppBroadcastPreviewStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>;
    using AppBroadcastPreviewStreamReader = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamReader>;
    using AppBroadcastPreviewStreamVideoFrame = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>;
    using AppBroadcastPreviewStreamVideoHeader = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>;
    using AppBroadcastProviderSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastProviderSettings>;
    using AppBroadcastServices = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastServices>;
    using AppBroadcastSignInStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>;
    using AppBroadcastState = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastState>;
    using AppBroadcastStreamAudioFrame = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastStreamAudioFrame>;
    using AppBroadcastStreamAudioHeader = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastStreamAudioHeader>;
    using AppBroadcastStreamReader = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastStreamReader>;
    using AppBroadcastStreamStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>;
    using AppBroadcastStreamVideoFrame = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastStreamVideoFrame>;
    using AppBroadcastStreamVideoHeader = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastStreamVideoHeader>;
    using AppBroadcastTriggerDetails = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastTriggerDetails>;
    using AppBroadcastViewerCountChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>;
    using AppCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCapture>;
    using AppCaptureAlternateShortcutKeys = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureAlternateShortcutKeys>;
    using AppCaptureDurationGeneratedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>;
    using AppCaptureFileGeneratedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>;
    using AppCaptureManager = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureManager>;
    using AppCaptureMetadataWriter = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureMetadataWriter>;
    using AppCaptureMicrophoneCaptureStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>;
    using AppCaptureRecordOperation = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureRecordOperation>;
    using AppCaptureRecordingStateChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>;
    using AppCaptureServices = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureServices>;
    using AppCaptureSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureSettings>;
    using AppCaptureState = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCaptureState>;
    using CameraCaptureUI = py::winrt_wrapper<winrt::Windows::Media::Capture::CameraCaptureUI>;
    using CameraCaptureUIPhotoCaptureSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>;
    using CameraCaptureUIVideoCaptureSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>;
    using CameraOptionsUI = py::winrt_wrapper<winrt::Windows::Media::Capture::CameraOptionsUI>;
    using CapturedFrame = py::winrt_wrapper<winrt::Windows::Media::Capture::CapturedFrame>;
    using CapturedFrameControlValues = py::winrt_wrapper<winrt::Windows::Media::Capture::CapturedFrameControlValues>;
    using CapturedPhoto = py::winrt_wrapper<winrt::Windows::Media::Capture::CapturedPhoto>;
    using GameBarServices = py::winrt_wrapper<winrt::Windows::Media::Capture::GameBarServices>;
    using GameBarServicesCommandEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::GameBarServicesCommandEventArgs>;
    using GameBarServicesManager = py::winrt_wrapper<winrt::Windows::Media::Capture::GameBarServicesManager>;
    using GameBarServicesManagerGameBarServicesCreatedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>;
    using GameBarServicesTargetInfo = py::winrt_wrapper<winrt::Windows::Media::Capture::GameBarServicesTargetInfo>;
    using LowLagMediaRecording = py::winrt_wrapper<winrt::Windows::Media::Capture::LowLagMediaRecording>;
    using LowLagPhotoCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::LowLagPhotoCapture>;
    using LowLagPhotoSequenceCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture>;
    using MediaCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCapture>;
    using MediaCaptureDeviceExclusiveControlStatusChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>;
    using MediaCaptureFailedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs>;
    using MediaCaptureFocusChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>;
    using MediaCaptureInitializationSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureInitializationSettings>;
    using MediaCapturePauseResult = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCapturePauseResult>;
    using MediaCaptureRelativePanelWatcher = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureRelativePanelWatcher>;
    using MediaCaptureSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureSettings>;
    using MediaCaptureStopResult = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureStopResult>;
    using MediaCaptureVideoProfile = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureVideoProfile>;
    using MediaCaptureVideoProfileMediaDescription = py::winrt_wrapper<winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>;
    using OptionalReferencePhotoCapturedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>;
    using PhotoCapturedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::PhotoCapturedEventArgs>;
    using PhotoConfirmationCapturedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>;
    using ScreenCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::ScreenCapture>;
    using SourceSuspensionChangedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::SourceSuspensionChangedEventArgs>;
    using VideoStreamConfiguration = py::winrt_wrapper<winrt::Windows::Media::Capture::VideoStreamConfiguration>;
    using WhiteBalanceGain = py::winrt_struct_wrapper<winrt::Windows::Media::Capture::WhiteBalanceGain>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastCameraCaptureState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastCameraOverlayLocation> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastCameraOverlaySize> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastCaptureTargetType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastExitBroadcastModeReason> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastPlugInState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastPreviewState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastSignInResult> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastSignInState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastStreamState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastTerminationReason> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppCaptureMetadataPriority> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppCaptureRecordingState> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::CameraCaptureUIMaxVideoResolution> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::CameraCaptureUIMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::CameraCaptureUIPhotoFormat> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::CameraCaptureUIVideoFormat> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::ForegroundActivationArgument> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::GameBarCommand> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::GameBarCommandOrigin> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::GameBarServicesDisplayMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::GameBarTargetCapturePolicy> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::KnownVideoProfile> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlReleaseMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::MediaCaptureMemoryPreference> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::MediaCaptureSharingMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::MediaCaptureThermalStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::MediaCategory> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::MediaStreamType> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::PhotoCaptureSource> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::PowerlineFrequency> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::StreamingCaptureMode> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::VideoDeviceCharacteristic> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::VideoRotation> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Media::Capture::WhiteBalanceGain> = "T{d:r:d:g:d:b:}";


    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastCameraCaptureState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastCameraOverlayLocation>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastCameraOverlaySize>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastCaptureTargetType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastExitBroadcastModeReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastPlugInState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastPreviewState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastSignInResult>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastSignInState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastStreamState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastTerminationReason>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppCaptureMetadataPriority>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppCaptureRecordingState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::CameraCaptureUIMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::CameraCaptureUIPhotoFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::CameraCaptureUIVideoFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::ForegroundActivationArgument>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::GameBarCommand>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::GameBarCommandOrigin>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::GameBarServicesDisplayMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::GameBarTargetCapturePolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::KnownVideoProfile>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlReleaseMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::MediaCaptureMemoryPreference>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::MediaCaptureSharingMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::MediaCaptureThermalStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::MediaCategory>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::MediaStreamType>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::PhotoCaptureSource>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::PowerlineFrequency>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::StreamingCaptureMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::VideoDeviceCharacteristic>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Media::Capture::VideoRotation>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AdvancedCapturedPhoto>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AdvancedPhotoCapture>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastBackgroundService>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastGlobalSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastPlugIn>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastPlugInManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastPreview>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastProviderSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastServices>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastState>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastStreamAudioFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastStreamAudioHeader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastStreamReader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastStreamVideoFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastStreamVideoHeader>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCapture>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureAlternateShortcutKeys>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureFileGeneratedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureMetadataWriter>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureRecordOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureServices>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCaptureState>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CameraCaptureUI>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CameraOptionsUI>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CapturedFrame>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CapturedFrameControlValues>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CapturedPhoto>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::GameBarServices>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::GameBarServicesCommandEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::GameBarServicesManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::GameBarServicesTargetInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::LowLagMediaRecording>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::LowLagPhotoCapture>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCapture>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureInitializationSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCapturePauseResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureRelativePanelWatcher>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureSettings>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureStopResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureVideoProfile>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::PhotoCapturedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::ScreenCapture>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::SourceSuspensionChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::VideoStreamConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::WhiteBalanceGain>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template <>
    struct delegate_python_type<winrt::Windows::Media::Capture::MediaCaptureFailedEventHandler>
    {
        using type = py::impl::Windows::Media::Capture::MediaCaptureFailedEventHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::Media::Capture::RecordLimitationExceededEventHandler>
    {
        using type = py::impl::Windows::Media::Capture::RecordLimitationExceededEventHandler;
    };

    template<>
    struct converter<winrt::Windows::Media::Capture::WhiteBalanceGain>
    {
        static PyObject* convert(winrt::Windows::Media::Capture::WhiteBalanceGain instance) noexcept;
        static winrt::Windows::Media::Capture::WhiteBalanceGain convert_to(PyObject* obj);
    };

}
