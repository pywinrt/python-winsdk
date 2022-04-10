// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Media.Capture.h")
#include "py.Windows.Media.Capture.h"
#endif

#include <winrt/Windows.Media.Capture.Core.h>

namespace py::proj::Windows::Media::Capture::Core
{}

namespace py::impl::Windows::Media::Capture::Core
{}

namespace py::wrapper::Windows::Media::Capture::Core
{
    using VariablePhotoCapturedEventArgs = py::winrt_wrapper<winrt::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>;
    using VariablePhotoSequenceCapture = py::winrt_wrapper<winrt::Windows::Media::Capture::Core::VariablePhotoSequenceCapture>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Media::Capture::Core::VariablePhotoCapturedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Capture::Core::VariablePhotoSequenceCapture>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
