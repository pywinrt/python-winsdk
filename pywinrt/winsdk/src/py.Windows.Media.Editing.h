// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

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

#if __has_include("py.Windows.Media.Core.h")
#include "py.Windows.Media.Core.h"
#endif

#if __has_include("py.Windows.Media.Effects.h")
#include "py.Windows.Media.Effects.h"
#endif

#if __has_include("py.Windows.Media.MediaProperties.h")
#include "py.Windows.Media.MediaProperties.h"
#endif

#if __has_include("py.Windows.Media.Transcoding.h")
#include "py.Windows.Media.Transcoding.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.Media.Editing.h>

namespace py::proj::Windows::Media::Editing
{}

namespace py::impl::Windows::Media::Editing
{}

namespace py::wrapper::Windows::Media::Editing
{
    using BackgroundAudioTrack = py::winrt_wrapper<winrt::Windows::Media::Editing::BackgroundAudioTrack>;
    using EmbeddedAudioTrack = py::winrt_wrapper<winrt::Windows::Media::Editing::EmbeddedAudioTrack>;
    using MediaClip = py::winrt_wrapper<winrt::Windows::Media::Editing::MediaClip>;
    using MediaComposition = py::winrt_wrapper<winrt::Windows::Media::Editing::MediaComposition>;
    using MediaOverlay = py::winrt_wrapper<winrt::Windows::Media::Editing::MediaOverlay>;
    using MediaOverlayLayer = py::winrt_wrapper<winrt::Windows::Media::Editing::MediaOverlayLayer>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Media::Editing::BackgroundAudioTrack>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Editing::EmbeddedAudioTrack>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Editing::MediaClip>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Editing::MediaComposition>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Editing::MediaOverlay>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Editing::MediaOverlayLayer>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
