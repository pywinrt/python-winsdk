// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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

#if __has_include("py.Windows.Security.Credentials.h")
#include "py.Windows.Security.Credentials.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
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
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
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
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::Media::Capture
{
    using AdvancedCapturedPhoto = py::winrt_wrapper<winrt::Windows::Media::Capture::AdvancedCapturedPhoto>;
    using AdvancedPhotoCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::AdvancedPhotoCapture>;
    using AppCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::AppCapture>;
    using CameraCaptureUI = py::winrt_wrapper<winrt::Windows::Media::Capture::CameraCaptureUI>;
    using CameraCaptureUIPhotoCaptureSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>;
    using CameraCaptureUIVideoCaptureSettings = py::winrt_wrapper<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>;
    using CapturedFrame = py::winrt_wrapper<winrt::Windows::Media::Capture::CapturedFrame>;
    using CapturedFrameControlValues = py::winrt_wrapper<winrt::Windows::Media::Capture::CapturedFrameControlValues>;
    using CapturedPhoto = py::winrt_wrapper<winrt::Windows::Media::Capture::CapturedPhoto>;
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
    using VideoStreamConfiguration = py::winrt_wrapper<winrt::Windows::Media::Capture::VideoStreamConfiguration>;
    using WhiteBalanceGain = py::winrt_struct_wrapper<winrt::Windows::Media::Capture::WhiteBalanceGain>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AdvancedCapturedPhoto>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AdvancedPhotoCapture>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::AppCapture>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CameraCaptureUI>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CapturedFrame>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CapturedFrameControlValues>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::CapturedPhoto>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::LowLagMediaRecording>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::LowLagPhotoCapture>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCapture>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureInitializationSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCapturePauseResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureRelativePanelWatcher>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureStopResult>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureVideoProfile>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::PhotoCapturedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::VideoStreamConfiguration>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::WhiteBalanceGain>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
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
