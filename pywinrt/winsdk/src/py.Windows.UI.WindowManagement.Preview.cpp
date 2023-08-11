// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#include "pybase.h"
#include "py.Windows.UI.WindowManagement.Preview.h"


namespace py::cpp::Windows::UI::WindowManagement::Preview
{
    struct module_state
    {
        PyTypeObject* type_WindowManagementPreview;
    };

    // ----- WindowManagementPreview class --------------------
    static constexpr const char* const type_name_WindowManagementPreview = "WindowManagementPreview";

    static PyObject* _new_WindowManagementPreview(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_WindowManagementPreview);
        return nullptr;
    }

    static void _dealloc_WindowManagementPreview(py::wrapper::Windows::UI::WindowManagement::Preview::WindowManagementPreview* self) noexcept
    {
        auto tp = Py_TYPE(self);

        if (PyType_IS_GC(tp))
        {
            PyObject_GC_UnTrack(self);
        }

        std::destroy_at(&self->obj);
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* WindowManagementPreview_SetPreferredMinSize(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.UI.WindowManagement.Preview.WindowManagementPreview", L"SetPreferredMinSize", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::UI::WindowManagement::AppWindow>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Size>(args, 1);

                winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview::SetPreferredMinSize(param0, param1);
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

    static PyObject* _assign_array_WindowManagementPreview(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_WindowManagementPreview(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WindowManagementPreview[] = {
        { "set_preferred_min_size", reinterpret_cast<PyCFunction>(WindowManagementPreview_SetPreferredMinSize), METH_VARARGS | METH_STATIC, nullptr },
        { "_assign_array_", _assign_array_WindowManagementPreview, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_WindowManagementPreview), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WindowManagementPreview[] = {
        { }
    };

    static PyType_Slot _type_slots_WindowManagementPreview[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_WindowManagementPreview) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_WindowManagementPreview) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_WindowManagementPreview) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_WindowManagementPreview) },
        { },
    };

    static PyType_Spec type_spec_WindowManagementPreview =
    {
        "_winsdk_Windows_UI_WindowManagement_Preview.WindowManagementPreview",
        sizeof(py::wrapper::Windows::UI::WindowManagement::Preview::WindowManagementPreview),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WindowManagementPreview
    };

    // ----- Windows.UI.WindowManagement.Preview Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::UI::WindowManagement::Preview");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_WindowManagementPreview);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_WindowManagementPreview);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_UI_WindowManagement_Preview",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::UI::WindowManagement::Preview

PyMODINIT_FUNC PyInit__winsdk_Windows_UI_WindowManagement_Preview(void) noexcept
{
    using namespace py::cpp::Windows::UI::WindowManagement::Preview;

    py::pyobj_handle module{PyModule_Create(&module_def)};

    if (!module)
    {
        return nullptr;
    }

    auto object_type = py::get_python_type<py::Object>();
    if (!object_type)
    {
        return nullptr;
    }

    py::pyobj_handle object_bases{PyTuple_Pack(1, object_type)};

    if (!object_bases)
    {
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module.get()));
    assert(state);

    state->type_WindowManagementPreview = py::register_python_type(module.get(), type_name_WindowManagementPreview, &type_spec_WindowManagementPreview, object_bases.get(), nullptr);
    if (!state->type_WindowManagementPreview)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview>::get_python_type() noexcept {
    using namespace py::cpp::Windows::UI::WindowManagement::Preview;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::UI::WindowManagement::Preview");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WindowManagementPreview;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview is not registered");
        return nullptr;
    }

    return python_type;
}
