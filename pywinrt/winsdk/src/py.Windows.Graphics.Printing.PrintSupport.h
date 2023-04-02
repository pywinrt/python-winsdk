// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.ApplicationModel.h")
#include "py.Windows.ApplicationModel.h"
#endif

#if __has_include("py.Windows.ApplicationModel.Activation.h")
#include "py.Windows.ApplicationModel.Activation.h"
#endif

#if __has_include("py.Windows.Data.Xml.Dom.h")
#include "py.Windows.Data.Xml.Dom.h"
#endif

#if __has_include("py.Windows.Devices.Printers.h")
#include "py.Windows.Devices.Printers.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Printing.PrintTicket.h")
#include "py.Windows.Graphics.Printing.PrintTicket.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#if __has_include("py.Windows.UI.Shell.h")
#include "py.Windows.UI.Shell.h"
#endif

#include <winrt/Windows.Graphics.Printing.PrintSupport.h>

namespace py::proj::Windows::Graphics::Printing::PrintSupport
{}

namespace py::impl::Windows::Graphics::Printing::PrintSupport
{}

namespace py::wrapper::Windows::Graphics::Printing::PrintSupport
{
    using PrintSupportExtensionSession = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>;
    using PrintSupportExtensionTriggerDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>;
    using PrintSupportPrintDeviceCapabilitiesChangedEventArgs = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>;
    using PrintSupportPrintDeviceCapabilitiesUpdatePolicy = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesUpdatePolicy>;
    using PrintSupportPrintTicketElement = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketElement>;
    using PrintSupportPrintTicketValidationRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>;
    using PrintSupportPrinterSelectedEventArgs = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrinterSelectedEventArgs>;
    using PrintSupportSessionInfo = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>;
    using PrintSupportSettingsActivatedEventArgs = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>;
    using PrintSupportSettingsUISession = py::winrt_wrapper<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus> = "i";


    template<>
    struct py_type<winrt::Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesUpdatePolicy>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketElement>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportPrinterSelectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
