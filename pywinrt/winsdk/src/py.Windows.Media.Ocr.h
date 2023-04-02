// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Globalization.h")
#include "py.Windows.Globalization.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#include <winrt/Windows.Media.Ocr.h>

namespace py::proj::Windows::Media::Ocr
{}

namespace py::impl::Windows::Media::Ocr
{}

namespace py::wrapper::Windows::Media::Ocr
{
    using OcrEngine = py::winrt_wrapper<winrt::Windows::Media::Ocr::OcrEngine>;
    using OcrLine = py::winrt_wrapper<winrt::Windows::Media::Ocr::OcrLine>;
    using OcrResult = py::winrt_wrapper<winrt::Windows::Media::Ocr::OcrResult>;
    using OcrWord = py::winrt_wrapper<winrt::Windows::Media::Ocr::OcrWord>;
}

namespace py
{

    template<>
    struct winrt_type<winrt::Windows::Media::Ocr::OcrEngine>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Ocr::OcrLine>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Ocr::OcrResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Media::Ocr::OcrWord>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
