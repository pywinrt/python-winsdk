// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#include "pybase.h"
#include "py.Windows.ApplicationModel.Preview.Holographic.h"

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview>::python_type;

namespace py::cpp::Windows::ApplicationModel::Preview::Holographic
{
    // ----- HolographicApplicationPreview class --------------------
    constexpr const char* const _type_name_HolographicApplicationPreview = "HolographicApplicationPreview";

    static PyObject* _new_HolographicApplicationPreview(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_HolographicApplicationPreview);
        return nullptr;
    }

    static PyObject* HolographicApplicationPreview_IsCurrentViewPresentedOnHolographicDisplay(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview::IsCurrentViewPresentedOnHolographicDisplay());
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* HolographicApplicationPreview_IsHolographicActivation(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>(args, 0);

                return py::convert(winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview::IsHolographicActivation(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyMethodDef _methods_HolographicApplicationPreview[] = {
        { "is_current_view_presented_on_holographic_display", reinterpret_cast<PyCFunction>(HolographicApplicationPreview_IsCurrentViewPresentedOnHolographicDisplay), METH_VARARGS | METH_STATIC, nullptr },
        { "is_holographic_activation", reinterpret_cast<PyCFunction>(HolographicApplicationPreview_IsHolographicActivation), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_HolographicApplicationPreview[] = {
        { }
    };

    static PyType_Slot _type_slots_HolographicApplicationPreview[] = 
    {
        { Py_tp_new, _new_HolographicApplicationPreview },
        { Py_tp_methods, _methods_HolographicApplicationPreview },
        { Py_tp_getset, _getset_HolographicApplicationPreview },
        { },
    };

    static PyType_Spec _type_spec_HolographicApplicationPreview =
    {
        "_winsdk_Windows_ApplicationModel_Preview_Holographic.HolographicApplicationPreview",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_HolographicApplicationPreview
    };

    // ----- HolographicKeyboardPlacementOverridePreview class --------------------
    constexpr const char* const _type_name_HolographicKeyboardPlacementOverridePreview = "HolographicKeyboardPlacementOverridePreview";

    static PyObject* _new_HolographicKeyboardPlacementOverridePreview(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_HolographicKeyboardPlacementOverridePreview);
        return nullptr;
    }

    static void _dealloc_HolographicKeyboardPlacementOverridePreview(py::wrapper::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* HolographicKeyboardPlacementOverridePreview_GetForCurrentView(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview::GetForCurrentView());
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* HolographicKeyboardPlacementOverridePreview_ResetPlacementOverride(py::wrapper::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.ResetPlacementOverride();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* HolographicKeyboardPlacementOverridePreview_SetPlacementOverride(py::wrapper::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Numerics::float3>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Foundation::Numerics::float3>(args, 2);

                self->obj.SetPlacementOverride(param0, param1, param2);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 4)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Perception::Spatial::SpatialCoordinateSystem>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Numerics::float3>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Foundation::Numerics::float3>(args, 2);
                auto param3 = py::convert_to<winrt::Windows::Foundation::Numerics::float2>(args, 3);

                self->obj.SetPlacementOverride(param0, param1, param2, param3);
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else
        {
            py::set_invalid_arg_count_error(arg_count);
            return nullptr;
        }
    }

    static PyObject* _from_HolographicKeyboardPlacementOverridePreview(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_HolographicKeyboardPlacementOverridePreview[] = {
        { "get_for_current_view", reinterpret_cast<PyCFunction>(HolographicKeyboardPlacementOverridePreview_GetForCurrentView), METH_VARARGS | METH_STATIC, nullptr },
        { "reset_placement_override", reinterpret_cast<PyCFunction>(HolographicKeyboardPlacementOverridePreview_ResetPlacementOverride), METH_VARARGS, nullptr },
        { "set_placement_override", reinterpret_cast<PyCFunction>(HolographicKeyboardPlacementOverridePreview_SetPlacementOverride), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_HolographicKeyboardPlacementOverridePreview), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_HolographicKeyboardPlacementOverridePreview[] = {
        { }
    };

    static PyType_Slot _type_slots_HolographicKeyboardPlacementOverridePreview[] = 
    {
        { Py_tp_new, _new_HolographicKeyboardPlacementOverridePreview },
        { Py_tp_dealloc, _dealloc_HolographicKeyboardPlacementOverridePreview },
        { Py_tp_methods, _methods_HolographicKeyboardPlacementOverridePreview },
        { Py_tp_getset, _getset_HolographicKeyboardPlacementOverridePreview },
        { },
    };

    static PyType_Spec _type_spec_HolographicKeyboardPlacementOverridePreview =
    {
        "_winsdk_Windows_ApplicationModel_Preview_Holographic.HolographicKeyboardPlacementOverridePreview",
        sizeof(py::wrapper::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_HolographicKeyboardPlacementOverridePreview
    };

    // ----- Windows.ApplicationModel.Preview.Holographic Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview>::python_type = py::register_python_type(module, _type_name_HolographicApplicationPreview, &_type_spec_HolographicApplicationPreview, nullptr);
            py::winrt_type<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicKeyboardPlacementOverridePreview>::python_type = py::register_python_type(module, _type_name_HolographicKeyboardPlacementOverridePreview, &_type_spec_HolographicKeyboardPlacementOverridePreview, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.ApplicationModel.Preview.Holographic");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_Preview_Holographic",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::ApplicationModel::Preview::Holographic

PyMODINIT_FUNC
PyInit__winsdk_Windows_ApplicationModel_Preview_Holographic (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::ApplicationModel::Preview::Holographic::module_def);
}
