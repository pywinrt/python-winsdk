// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.h>

#include <winrt/Windows.Media.AppRecording.h>

namespace py::proj::Windows::Media::AppRecording
{}

namespace py::impl::Windows::Media::AppRecording
{}

namespace py::wrapper::Windows::Media::AppRecording
{
    using AppRecordingManager = py::winrt_wrapper<winrt::Windows::Media::AppRecording::AppRecordingManager>;
    using AppRecordingResult = py::winrt_wrapper<winrt::Windows::Media::AppRecording::AppRecordingResult>;
    using AppRecordingSaveScreenshotResult = py::winrt_wrapper<winrt::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>;
    using AppRecordingSavedScreenshotInfo = py::winrt_wrapper<winrt::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>;
    using AppRecordingStatus = py::winrt_wrapper<winrt::Windows::Media::AppRecording::AppRecordingStatus>;
    using AppRecordingStatusDetails = py::winrt_wrapper<winrt::Windows::Media::AppRecording::AppRecordingStatusDetails>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Media::AppRecording::AppRecordingSaveScreenshotOption> = "i";


    template<>
    struct py_type<winrt::Windows::Media::AppRecording::AppRecordingSaveScreenshotOption>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::AppRecording::AppRecordingManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::AppRecording::AppRecordingResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::AppRecording::AppRecordingSaveScreenshotResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::AppRecording::AppRecordingSavedScreenshotInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::AppRecording::AppRecordingStatus>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::AppRecording::AppRecordingStatusDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
