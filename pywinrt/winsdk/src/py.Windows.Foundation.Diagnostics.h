// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#include <winrt/Windows.Foundation.Diagnostics.h>

namespace py::proj::Windows::Foundation::Diagnostics
{}

namespace py::impl::Windows::Foundation::Diagnostics
{}

namespace py::wrapper::Windows::Foundation::Diagnostics
{
    using AsyncCausalityTracer = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::AsyncCausalityTracer>;
    using ErrorDetails = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::ErrorDetails>;
    using FileLoggingSession = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::FileLoggingSession>;
    using LogFileGeneratedEventArgs = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>;
    using LoggingActivity = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::LoggingActivity>;
    using LoggingChannel = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::LoggingChannel>;
    using LoggingChannelOptions = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::LoggingChannelOptions>;
    using LoggingFields = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::LoggingFields>;
    using LoggingOptions = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::LoggingOptions>;
    using LoggingSession = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::LoggingSession>;
    using RuntimeBrokerErrorSettings = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>;
    using TracingStatusChangedEventArgs = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>;
    using IErrorReportingSettings = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::IErrorReportingSettings>;
    using IFileLoggingSession = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::IFileLoggingSession>;
    using ILoggingChannel = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::ILoggingChannel>;
    using ILoggingSession = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::ILoggingSession>;
    using ILoggingTarget = py::winrt_wrapper<winrt::Windows::Foundation::Diagnostics::ILoggingTarget>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::AsyncCausalityTracer>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::ErrorDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::FileLoggingSession>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::LoggingActivity>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::LoggingChannel>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::LoggingChannelOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::LoggingFields>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::LoggingOptions>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::LoggingSession>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::IErrorReportingSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::IFileLoggingSession>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::ILoggingChannel>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::ILoggingSession>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Foundation::Diagnostics::ILoggingTarget>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
