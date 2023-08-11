// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Lights.h")
#include "py.Windows.Devices.Lights.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.Devices.Lights.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.UI.h>

#include <winrt/Windows.Devices.Lights.Effects.h>

namespace py::proj::Windows::Devices::Lights::Effects
{}

namespace py::impl::Windows::Devices::Lights::Effects
{}

namespace py::wrapper::Windows::Devices::Lights::Effects
{
    using LampArrayBitmapEffect = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect>;
    using LampArrayBitmapRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs>;
    using LampArrayBlinkEffect = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::LampArrayBlinkEffect>;
    using LampArrayColorRampEffect = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::LampArrayColorRampEffect>;
    using LampArrayCustomEffect = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect>;
    using LampArrayEffectPlaylist = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist>;
    using LampArraySolidEffect = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::LampArraySolidEffect>;
    using LampArrayUpdateRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs>;
    using ILampArrayEffect = py::winrt_wrapper<winrt::Windows::Devices::Lights::Effects::ILampArrayEffect>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Lights::Effects::LampArrayEffectStartMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode> = "i";


    template<>
    struct py_type<winrt::Windows::Devices::Lights::Effects::LampArrayEffectCompletionBehavior>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Lights::Effects::LampArrayEffectStartMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Lights::Effects::LampArrayRepetitionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::LampArrayBitmapRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::LampArrayBlinkEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::LampArrayColorRampEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::LampArrayCustomEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::LampArrayEffectPlaylist>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::LampArraySolidEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::LampArrayUpdateRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Lights::Effects::ILampArrayEffect>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
