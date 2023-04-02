// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.Globalization.h>

namespace py::proj::Windows::Globalization
{}

namespace py::impl::Windows::Globalization
{}

namespace py::wrapper::Windows::Globalization
{
    using ApplicationLanguages = py::winrt_wrapper<winrt::Windows::Globalization::ApplicationLanguages>;
    using Calendar = py::winrt_wrapper<winrt::Windows::Globalization::Calendar>;
    using CalendarIdentifiers = py::winrt_wrapper<winrt::Windows::Globalization::CalendarIdentifiers>;
    using ClockIdentifiers = py::winrt_wrapper<winrt::Windows::Globalization::ClockIdentifiers>;
    using CurrencyAmount = py::winrt_wrapper<winrt::Windows::Globalization::CurrencyAmount>;
    using CurrencyIdentifiers = py::winrt_wrapper<winrt::Windows::Globalization::CurrencyIdentifiers>;
    using GeographicRegion = py::winrt_wrapper<winrt::Windows::Globalization::GeographicRegion>;
    using JapanesePhoneme = py::winrt_wrapper<winrt::Windows::Globalization::JapanesePhoneme>;
    using JapanesePhoneticAnalyzer = py::winrt_wrapper<winrt::Windows::Globalization::JapanesePhoneticAnalyzer>;
    using Language = py::winrt_wrapper<winrt::Windows::Globalization::Language>;
    using NumeralSystemIdentifiers = py::winrt_wrapper<winrt::Windows::Globalization::NumeralSystemIdentifiers>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Globalization::DayOfWeek> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Globalization::LanguageLayoutDirection> = "i";


    template<>
    struct py_type<winrt::Windows::Globalization::DayOfWeek>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Globalization::LanguageLayoutDirection>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::ApplicationLanguages>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::Calendar>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::CalendarIdentifiers>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::ClockIdentifiers>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::CurrencyAmount>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::CurrencyIdentifiers>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::GeographicRegion>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::JapanesePhoneme>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::JapanesePhoneticAnalyzer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::Language>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Globalization::NumeralSystemIdentifiers>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
