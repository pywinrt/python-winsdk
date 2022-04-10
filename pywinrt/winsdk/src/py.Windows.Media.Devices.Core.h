// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Perception.Spatial.h")
#include "py.Windows.Perception.Spatial.h"
#endif

#include <winrt/Windows.Media.Devices.Core.h>

namespace py::proj::Windows::Media::Devices::Core
{}

namespace py::impl::Windows::Media::Devices::Core
{}

namespace py::wrapper::Windows::Media::Devices::Core
{
    using CameraIntrinsics = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::CameraIntrinsics>;
    using DepthCorrelatedCoordinateMapper = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper>;
    using FrameControlCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameControlCapabilities>;
    using FrameController = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameController>;
    using FrameExposureCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameExposureCapabilities>;
    using FrameExposureCompensationCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameExposureCompensationCapabilities>;
    using FrameExposureCompensationControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameExposureCompensationControl>;
    using FrameExposureControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameExposureControl>;
    using FrameFlashCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameFlashCapabilities>;
    using FrameFlashControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameFlashControl>;
    using FrameFocusCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameFocusCapabilities>;
    using FrameFocusControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameFocusControl>;
    using FrameIsoSpeedCapabilities = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameIsoSpeedCapabilities>;
    using FrameIsoSpeedControl = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::FrameIsoSpeedControl>;
    using VariablePhotoSequenceController = py::winrt_wrapper<winrt::Windows::Media::Devices::Core::VariablePhotoSequenceController>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::CameraIntrinsics>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameControlCapabilities>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameController>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameExposureCapabilities>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameExposureCompensationCapabilities>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameExposureCompensationControl>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameExposureControl>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameFlashCapabilities>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameFlashControl>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameFocusCapabilities>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameFocusControl>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameIsoSpeedCapabilities>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::FrameIsoSpeedControl>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Devices::Core::VariablePhotoSequenceController>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
