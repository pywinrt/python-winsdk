// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Printing.h")
#include "py.Windows.Graphics.Printing.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Graphics.Printing.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.Devices.Scanners.h>

namespace py::proj::Windows::Devices::Scanners
{}

namespace py::impl::Windows::Devices::Scanners
{}

namespace py::wrapper::Windows::Devices::Scanners
{
    using ImageScanner = py::winrt_wrapper<winrt::Windows::Devices::Scanners::ImageScanner>;
    using ImageScannerAutoConfiguration = py::winrt_wrapper<winrt::Windows::Devices::Scanners::ImageScannerAutoConfiguration>;
    using ImageScannerFeederConfiguration = py::winrt_wrapper<winrt::Windows::Devices::Scanners::ImageScannerFeederConfiguration>;
    using ImageScannerFlatbedConfiguration = py::winrt_wrapper<winrt::Windows::Devices::Scanners::ImageScannerFlatbedConfiguration>;
    using ImageScannerPreviewResult = py::winrt_wrapper<winrt::Windows::Devices::Scanners::ImageScannerPreviewResult>;
    using ImageScannerScanResult = py::winrt_wrapper<winrt::Windows::Devices::Scanners::ImageScannerScanResult>;
    using IImageScannerFormatConfiguration = py::winrt_wrapper<winrt::Windows::Devices::Scanners::IImageScannerFormatConfiguration>;
    using IImageScannerSourceConfiguration = py::winrt_wrapper<winrt::Windows::Devices::Scanners::IImageScannerSourceConfiguration>;
    using ImageScannerResolution = py::winrt_struct_wrapper<winrt::Windows::Devices::Scanners::ImageScannerResolution>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Scanners::ImageScannerAutoCroppingMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Scanners::ImageScannerColorMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Scanners::ImageScannerFormat> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Scanners::ImageScannerScanSource> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Devices::Scanners::ImageScannerResolution> = "T{f:dpi_x:f:dpi_y:}";


    template<>
    struct py_type<winrt::Windows::Devices::Scanners::ImageScannerAutoCroppingMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Scanners::ImageScannerColorMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Scanners::ImageScannerFormat>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Devices::Scanners::ImageScannerScanSource>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::ImageScanner>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::ImageScannerAutoConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::ImageScannerFeederConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::ImageScannerFlatbedConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::ImageScannerPreviewResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::ImageScannerScanResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::IImageScannerFormatConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::IImageScannerSourceConfiguration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Devices::Scanners::ImageScannerResolution>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Devices::Scanners::ImageScannerResolution>
    {
        static PyObject* convert(winrt::Windows::Devices::Scanners::ImageScannerResolution instance) noexcept;
        static winrt::Windows::Devices::Scanners::ImageScannerResolution convert_to(PyObject* obj);
    };

}
