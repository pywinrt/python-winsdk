// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#include "pybase.h"
#include "py.Windows.Embedded.DeviceLockdown.h"


namespace py::cpp::Windows::Embedded::DeviceLockdown
{
    struct module_state
    {
        PyTypeObject* type_DeviceLockdownProfile;
        PyTypeObject* type_DeviceLockdownProfileInformation;
    };

    // ----- DeviceLockdownProfile class --------------------
    constexpr const char* const type_name_DeviceLockdownProfile = "DeviceLockdownProfile";

    static PyObject* _new_DeviceLockdownProfile(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_DeviceLockdownProfile);
        return nullptr;
    }

    static PyObject* DeviceLockdownProfile_ApplyLockdownProfileAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile::ApplyLockdownProfileAsync(param0));
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

    static PyObject* DeviceLockdownProfile_GetCurrentLockdownProfile(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile::GetCurrentLockdownProfile());
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

    static PyObject* DeviceLockdownProfile_GetLockdownProfileInformation(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile::GetLockdownProfileInformation(param0));
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

    static PyObject* DeviceLockdownProfile_GetSupportedLockdownProfiles(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile::GetSupportedLockdownProfiles());
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

    static PyMethodDef _methods_DeviceLockdownProfile[] = {
        { "apply_lockdown_profile_async", reinterpret_cast<PyCFunction>(DeviceLockdownProfile_ApplyLockdownProfileAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_current_lockdown_profile", reinterpret_cast<PyCFunction>(DeviceLockdownProfile_GetCurrentLockdownProfile), METH_VARARGS | METH_STATIC, nullptr },
        { "get_lockdown_profile_information", reinterpret_cast<PyCFunction>(DeviceLockdownProfile_GetLockdownProfileInformation), METH_VARARGS | METH_STATIC, nullptr },
        { "get_supported_lockdown_profiles", reinterpret_cast<PyCFunction>(DeviceLockdownProfile_GetSupportedLockdownProfiles), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DeviceLockdownProfile[] = {
        { }
    };

    static PyType_Slot _type_slots_DeviceLockdownProfile[] = 
    {
        { Py_tp_new, _new_DeviceLockdownProfile },
        { Py_tp_methods, _methods_DeviceLockdownProfile },
        { Py_tp_getset, _getset_DeviceLockdownProfile },
        { },
    };

    static PyType_Spec type_spec_DeviceLockdownProfile =
    {
        "_winsdk_Windows_Embedded_DeviceLockdown.DeviceLockdownProfile",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DeviceLockdownProfile
    };

    // ----- DeviceLockdownProfileInformation class --------------------
    constexpr const char* const type_name_DeviceLockdownProfileInformation = "DeviceLockdownProfileInformation";

    static PyObject* _new_DeviceLockdownProfileInformation(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_DeviceLockdownProfileInformation);
        return nullptr;
    }

    static void _dealloc_DeviceLockdownProfileInformation(py::wrapper::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation* self)
    {
        auto tp = Py_TYPE(self);
        self->obj = nullptr;
        tp->tp_free(self);
        Py_DECREF(tp);
    }

    static PyObject* DeviceLockdownProfileInformation_get_Name(py::wrapper::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Name());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_DeviceLockdownProfileInformation(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DeviceLockdownProfileInformation[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_DeviceLockdownProfileInformation), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DeviceLockdownProfileInformation[] = {
        { "name", reinterpret_cast<getter>(DeviceLockdownProfileInformation_get_Name), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DeviceLockdownProfileInformation[] = 
    {
        { Py_tp_new, _new_DeviceLockdownProfileInformation },
        { Py_tp_dealloc, _dealloc_DeviceLockdownProfileInformation },
        { Py_tp_methods, _methods_DeviceLockdownProfileInformation },
        { Py_tp_getset, _getset_DeviceLockdownProfileInformation },
        { },
    };

    static PyType_Spec type_spec_DeviceLockdownProfileInformation =
    {
        "_winsdk_Windows_Embedded_DeviceLockdown.DeviceLockdownProfileInformation",
        sizeof(py::wrapper::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DeviceLockdownProfileInformation
    };

    // ----- Windows.Embedded.DeviceLockdown Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Embedded::DeviceLockdown");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_DeviceLockdownProfile);
        Py_VISIT(state->type_DeviceLockdownProfileInformation);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_DeviceLockdownProfile);
        Py_CLEAR(state->type_DeviceLockdownProfileInformation);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Embedded_DeviceLockdown",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Embedded::DeviceLockdown

PyMODINIT_FUNC PyInit__winsdk_Windows_Embedded_DeviceLockdown(void) noexcept
{
    using namespace py::cpp::Windows::Embedded::DeviceLockdown;

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

    py::pyobj_handle bases{PyTuple_Pack(1, object_type)};

    if (!bases)
    {
        return nullptr;
    }

    py::pyobj_handle collections_abc_module{PyImport_ImportModule("collections.abc")};

    if (!collections_abc_module)
    {
        return nullptr;
    }

    py::pyobj_handle sequence_type{PyObject_GetAttrString(collections_abc_module.get(), "Sequence")};

    if (!sequence_type)
    {
        return nullptr;
    }

    py::pyobj_handle sequence_bases{PyTuple_Pack(2, object_type, sequence_type.get())};

    if (!sequence_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_sequence_type{PyObject_GetAttrString(collections_abc_module.get(), "MutableSequence")};

    if (!mutable_sequence_type)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_sequence_bases{PyTuple_Pack(2, object_type, mutable_sequence_type.get())};

    if (!mutable_sequence_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mapping_type{PyObject_GetAttrString(collections_abc_module.get(), "Mapping")};

    if (!mapping_type)
    {
        return nullptr;
    }

    py::pyobj_handle mapping_bases{PyTuple_Pack(2, object_type, mapping_type.get())};

    if (!mapping_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_mapping_type{PyObject_GetAttrString(collections_abc_module.get(), "MutableMapping")};

    if (!mutable_mapping_type)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_mapping_bases{PyTuple_Pack(2, object_type, mutable_mapping_type.get())};

    if (!mutable_mapping_bases)
    {
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module.get()));
    assert(state);

    state->type_DeviceLockdownProfile = py::register_python_type(module.get(), type_name_DeviceLockdownProfile, &type_spec_DeviceLockdownProfile, nullptr);
    if (!state->type_DeviceLockdownProfile)
    {
        return nullptr;
    }

    Py_INCREF(state->type_DeviceLockdownProfile);

    state->type_DeviceLockdownProfileInformation = py::register_python_type(module.get(), type_name_DeviceLockdownProfileInformation, &type_spec_DeviceLockdownProfileInformation, bases.get());
    if (!state->type_DeviceLockdownProfileInformation)
    {
        return nullptr;
    }

    Py_INCREF(state->type_DeviceLockdownProfileInformation);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Embedded::DeviceLockdown;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Embedded::DeviceLockdown");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DeviceLockdownProfile;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Embedded::DeviceLockdown;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Embedded::DeviceLockdown");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DeviceLockdownProfileInformation;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation is not registered");
        return nullptr;
    }

    return python_type;
}