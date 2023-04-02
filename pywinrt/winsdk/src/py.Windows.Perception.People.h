// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Numerics.h")
#include "py.Windows.Foundation.Numerics.h"
#endif

#if __has_include("py.Windows.Perception.h")
#include "py.Windows.Perception.h"
#endif

#if __has_include("py.Windows.Perception.Spatial.h")
#include "py.Windows.Perception.Spatial.h"
#endif

#if __has_include("py.Windows.UI.Input.h")
#include "py.Windows.UI.Input.h"
#endif

#if __has_include("py.Windows.UI.Input.Spatial.h")
#include "py.Windows.UI.Input.Spatial.h"
#endif

#include <winrt/Windows.Perception.People.h>

namespace py::proj::Windows::Perception::People
{}

namespace py::impl::Windows::Perception::People
{}

namespace py::wrapper::Windows::Perception::People
{
    using EyesPose = py::winrt_wrapper<winrt::Windows::Perception::People::EyesPose>;
    using HandMeshObserver = py::winrt_wrapper<winrt::Windows::Perception::People::HandMeshObserver>;
    using HandMeshVertexState = py::winrt_wrapper<winrt::Windows::Perception::People::HandMeshVertexState>;
    using HandPose = py::winrt_wrapper<winrt::Windows::Perception::People::HandPose>;
    using HeadPose = py::winrt_wrapper<winrt::Windows::Perception::People::HeadPose>;
    using HandMeshVertex = py::winrt_struct_wrapper<winrt::Windows::Perception::People::HandMeshVertex>;
    using JointPose = py::winrt_struct_wrapper<winrt::Windows::Perception::People::JointPose>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Perception::People::HandJointKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Perception::People::JointPoseAccuracy> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Perception::People::HandMeshVertex> = "T{T{f:x:f:y:f:z:}:position:T{f:x:f:y:f:z:}:normal:}";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Perception::People::JointPose> = "T{T{f:x:f:y:f:z:f:w:}:orientation:T{f:x:f:y:f:z:}:position:f:radius:i:accuracy:}";


    template<>
    struct py_type<winrt::Windows::Perception::People::HandJointKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Perception::People::JointPoseAccuracy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::People::EyesPose>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::People::HandMeshObserver>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::People::HandMeshVertexState>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::People::HandPose>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::People::HeadPose>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::People::HandMeshVertex>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Perception::People::JointPose>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
    template<>
    struct converter<winrt::Windows::Perception::People::HandMeshVertex>
    {
        static PyObject* convert(winrt::Windows::Perception::People::HandMeshVertex instance) noexcept;
        static winrt::Windows::Perception::People::HandMeshVertex convert_to(PyObject* obj);
    };

    template<>
    struct converter<winrt::Windows::Perception::People::JointPose>
    {
        static PyObject* convert(winrt::Windows::Perception::People::JointPose instance) noexcept;
        static winrt::Windows::Perception::People::JointPose convert_to(PyObject* obj);
    };

}
