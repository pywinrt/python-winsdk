// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.UI.UIAutomation.h")
#include "py.Windows.UI.UIAutomation.h"
#endif

#include <winrt/Windows.UI.UIAutomation.Core.h>

namespace py::proj::Windows::UI::UIAutomation::Core
{}

namespace py::impl::Windows::UI::UIAutomation::Core
{}

namespace py::wrapper::Windows::UI::UIAutomation::Core
{
    using AutomationRemoteOperationResult = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult>;
    using CoreAutomationRegistrar = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRegistrar>;
    using CoreAutomationRemoteOperation = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation>;
    using CoreAutomationRemoteOperationContext = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperationContext>;
    using RemoteAutomationClientSession = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession>;
    using RemoteAutomationConnectionRequestedEventArgs = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationConnectionRequestedEventArgs>;
    using RemoteAutomationDisconnectedEventArgs = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationDisconnectedEventArgs>;
    using RemoteAutomationServer = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationServer>;
    using RemoteAutomationWindow = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationWindow>;
    using ICoreAutomationConnectionBoundObjectProvider = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationConnectionBoundObjectProvider>;
    using ICoreAutomationRemoteOperationExtensionProvider = py::winrt_wrapper<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationExtensionProvider>;
    using AutomationAnnotationTypeRegistration = py::winrt_struct_wrapper<winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration>;
    using AutomationRemoteOperationOperandId = py::winrt_struct_wrapper<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration> = "T{i:local_id:}";

    template<>
    constexpr const char* buffer_format<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId> = "T{i:value:}";


    template<>
    struct py_type<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRegistrar>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::CoreAutomationRemoteOperationContext>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationClientSession>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationConnectionRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationDisconnectedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationServer>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::RemoteAutomationWindow>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationConnectionBoundObjectProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::ICoreAutomationRemoteOperationExtensionProvider>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration>
    {
        static PyObject* convert(winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration instance) noexcept;
        static winrt::Windows::UI::UIAutomation::Core::AutomationAnnotationTypeRegistration convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId>
    {
        static PyObject* convert(winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId instance) noexcept;
        static winrt::Windows::UI::UIAutomation::Core::AutomationRemoteOperationOperandId convert_to(PyObject* obj);
    };

}
