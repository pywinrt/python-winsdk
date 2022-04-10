// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

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

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#if __has_include("py.Windows.UI.Composition.h")
#include "py.Windows.UI.Composition.h"
#endif

#if __has_include("py.Windows.UI.Input.h")
#include "py.Windows.UI.Input.h"
#endif

#include <winrt/Windows.UI.Core.h>

namespace py::proj::Windows::UI::Core
{}

namespace py::impl::Windows::UI::Core
{
    struct DispatchedHandler
    {
        static winrt::Windows::UI::Core::DispatchedHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)]()
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle args{ nullptr };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
                }
            };
        };
    };

    struct IdleDispatchedHandler
    {
        static winrt::Windows::UI::Core::IdleDispatchedHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };

                py::pyobj_handle args{ PyTuple_Pack(1, py_param0.get()) };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::UI::Core
{
    using AcceleratorKeyEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::AcceleratorKeyEventArgs>;
    using AutomationProviderRequestedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs>;
    using BackRequestedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::BackRequestedEventArgs>;
    using CharacterReceivedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::CharacterReceivedEventArgs>;
    using ClosestInteractiveBoundsRequestedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>;
    using CoreAcceleratorKeys = py::winrt_wrapper<winrt::Windows::UI::Core::CoreAcceleratorKeys>;
    using CoreComponentInputSource = py::winrt_wrapper<winrt::Windows::UI::Core::CoreComponentInputSource>;
    using CoreCursor = py::winrt_wrapper<winrt::Windows::UI::Core::CoreCursor>;
    using CoreDispatcher = py::winrt_wrapper<winrt::Windows::UI::Core::CoreDispatcher>;
    using CoreIndependentInputSource = py::winrt_wrapper<winrt::Windows::UI::Core::CoreIndependentInputSource>;
    using CoreIndependentInputSourceController = py::winrt_wrapper<winrt::Windows::UI::Core::CoreIndependentInputSourceController>;
    using CoreWindow = py::winrt_wrapper<winrt::Windows::UI::Core::CoreWindow>;
    using CoreWindowEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::CoreWindowEventArgs>;
    using CoreWindowResizeManager = py::winrt_wrapper<winrt::Windows::UI::Core::CoreWindowResizeManager>;
    using IdleDispatchedHandlerArgs = py::winrt_wrapper<winrt::Windows::UI::Core::IdleDispatchedHandlerArgs>;
    using InputEnabledEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::InputEnabledEventArgs>;
    using KeyEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::KeyEventArgs>;
    using PointerEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::PointerEventArgs>;
    using SystemNavigationManager = py::winrt_wrapper<winrt::Windows::UI::Core::SystemNavigationManager>;
    using TouchHitTestingEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::TouchHitTestingEventArgs>;
    using VisibilityChangedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::VisibilityChangedEventArgs>;
    using WindowActivatedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::WindowActivatedEventArgs>;
    using WindowSizeChangedEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::WindowSizeChangedEventArgs>;
    using ICoreAcceleratorKeys = py::winrt_wrapper<winrt::Windows::UI::Core::ICoreAcceleratorKeys>;
    using ICoreInputSourceBase = py::winrt_wrapper<winrt::Windows::UI::Core::ICoreInputSourceBase>;
    using ICorePointerInputSource = py::winrt_wrapper<winrt::Windows::UI::Core::ICorePointerInputSource>;
    using ICorePointerInputSource2 = py::winrt_wrapper<winrt::Windows::UI::Core::ICorePointerInputSource2>;
    using ICorePointerRedirector = py::winrt_wrapper<winrt::Windows::UI::Core::ICorePointerRedirector>;
    using ICoreWindow = py::winrt_wrapper<winrt::Windows::UI::Core::ICoreWindow>;
    using ICoreWindowEventArgs = py::winrt_wrapper<winrt::Windows::UI::Core::ICoreWindowEventArgs>;
    using IInitializeWithCoreWindow = py::winrt_wrapper<winrt::Windows::UI::Core::IInitializeWithCoreWindow>;
    using CorePhysicalKeyStatus = py::winrt_struct_wrapper<winrt::Windows::UI::Core::CorePhysicalKeyStatus>;
    using CoreProximityEvaluation = py::winrt_struct_wrapper<winrt::Windows::UI::Core::CoreProximityEvaluation>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::UI::Core::AcceleratorKeyEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::AutomationProviderRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::BackRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CharacterReceivedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::ClosestInteractiveBoundsRequestedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreAcceleratorKeys>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreComponentInputSource>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreCursor>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreDispatcher>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreIndependentInputSource>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreIndependentInputSourceController>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreWindow>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreWindowEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreWindowResizeManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::IdleDispatchedHandlerArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::InputEnabledEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::KeyEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::PointerEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::SystemNavigationManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::TouchHitTestingEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::VisibilityChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::WindowActivatedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::WindowSizeChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::ICoreAcceleratorKeys>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::ICoreInputSourceBase>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::ICorePointerInputSource>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::ICorePointerInputSource2>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::ICorePointerRedirector>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::ICoreWindow>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::ICoreWindowEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::IInitializeWithCoreWindow>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CorePhysicalKeyStatus>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::UI::Core::CoreProximityEvaluation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template <>
    struct delegate_python_type<winrt::Windows::UI::Core::DispatchedHandler>
    {
        using type = py::impl::Windows::UI::Core::DispatchedHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::UI::Core::IdleDispatchedHandler>
    {
        using type = py::impl::Windows::UI::Core::IdleDispatchedHandler;
    };

    template<>
    struct converter<winrt::Windows::UI::Core::CorePhysicalKeyStatus>
    {
        static PyObject* convert(winrt::Windows::UI::Core::CorePhysicalKeyStatus instance) noexcept;
        static winrt::Windows::UI::Core::CorePhysicalKeyStatus convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::UI::Core::CoreProximityEvaluation>
    {
        static PyObject* convert(winrt::Windows::UI::Core::CoreProximityEvaluation instance) noexcept;
        static winrt::Windows::UI::Core::CoreProximityEvaluation convert_to(PyObject* obj);
    };

}
