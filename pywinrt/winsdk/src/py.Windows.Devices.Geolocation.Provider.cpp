// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.Devices.Geolocation.Provider.h"


namespace py::cpp::Windows::Devices::Geolocation::Provider
{
    struct module_state
    {
        PyObject* type_LocationOverrideStatus;
        PyTypeObject* type_GeolocationProvider;
    };

    static PyObject* register_LocationOverrideStatus(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_LocationOverrideStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_LocationOverrideStatus = type;
        Py_INCREF(state->type_LocationOverrideStatus);


        Py_RETURN_NONE;
    }

    // ----- GeolocationProvider class --------------------
    constexpr const char* const type_name_GeolocationProvider = "GeolocationProvider";

    static PyObject* _new_GeolocationProvider(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        auto arg_count = PyTuple_Size(args);
        if (arg_count == 0)
        {
            try
            {
                winrt::Windows::Devices::Geolocation::Provider::GeolocationProvider instance{  };
                return py::wrap(instance, type);
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

    static void _dealloc_GeolocationProvider(py::wrapper::Windows::Devices::Geolocation::Provider::GeolocationProvider* self) noexcept
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

    static PyObject* GeolocationProvider_ClearOverridePosition(py::wrapper::Windows::Devices::Geolocation::Provider::GeolocationProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Geolocation.Provider.GeolocationProvider", L"ClearOverridePosition", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.ClearOverridePosition();
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

    static PyObject* GeolocationProvider_SetOverridePosition(py::wrapper::Windows::Devices::Geolocation::Provider::GeolocationProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Geolocation.Provider.GeolocationProvider", L"SetOverridePosition", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Geolocation::BasicGeoposition>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::Geolocation::PositionSource>(args, 1);
                auto param2 = py::convert_to<double>(args, 2);

                return py::convert(self->obj.SetOverridePosition(param0, param1, param2));
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

    static PyObject* GeolocationProvider_get_IsOverridden(py::wrapper::Windows::Devices::Geolocation::Provider::GeolocationProvider* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Geolocation.Provider.GeolocationProvider", L"IsOverridden"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.IsOverridden());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* GeolocationProvider_add_IsOverriddenChanged(py::wrapper::Windows::Devices::Geolocation::Provider::GeolocationProvider* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Devices.Geolocation.Provider.GeolocationProvider", L"IsOverriddenChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.IsOverriddenChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* GeolocationProvider_remove_IsOverriddenChanged(py::wrapper::Windows::Devices::Geolocation::Provider::GeolocationProvider* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Devices.Geolocation.Provider.GeolocationProvider", L"IsOverriddenChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.IsOverriddenChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_GeolocationProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Devices::Geolocation::Provider::GeolocationProvider>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_GeolocationProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Geolocation::Provider::GeolocationProvider>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_GeolocationProvider[] = {
        { "clear_override_position", reinterpret_cast<PyCFunction>(GeolocationProvider_ClearOverridePosition), METH_VARARGS, nullptr },
        { "set_override_position", reinterpret_cast<PyCFunction>(GeolocationProvider_SetOverridePosition), METH_VARARGS, nullptr },
        { "add_is_overridden_changed", reinterpret_cast<PyCFunction>(GeolocationProvider_add_IsOverriddenChanged), METH_O, nullptr },
        { "remove_is_overridden_changed", reinterpret_cast<PyCFunction>(GeolocationProvider_remove_IsOverriddenChanged), METH_O, nullptr },
        { "_assign_array_", _assign_array_GeolocationProvider, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_GeolocationProvider), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_GeolocationProvider[] = {
        { "is_overridden", reinterpret_cast<getter>(GeolocationProvider_get_IsOverridden), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_GeolocationProvider[] = 
    {
        { Py_tp_new, _new_GeolocationProvider },
        { Py_tp_dealloc, _dealloc_GeolocationProvider },
        { Py_tp_methods, _methods_GeolocationProvider },
        { Py_tp_getset, _getset_GeolocationProvider },
        { },
    };

    static PyType_Spec type_spec_GeolocationProvider =
    {
        "_winsdk_Windows_Devices_Geolocation_Provider.GeolocationProvider",
        sizeof(py::wrapper::Windows::Devices::Geolocation::Provider::GeolocationProvider),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_GeolocationProvider
    };

    // ----- Windows.Devices.Geolocation.Provider Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Geolocation::Provider");

    static PyMethodDef module_methods[] = {
        {"_register_LocationOverrideStatus", register_LocationOverrideStatus, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_LocationOverrideStatus);
        Py_VISIT(state->type_GeolocationProvider);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_LocationOverrideStatus);
        Py_CLEAR(state->type_GeolocationProvider);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Geolocation_Provider",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Geolocation::Provider

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Geolocation_Provider(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Geolocation::Provider;

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

    state->type_GeolocationProvider = py::register_python_type(module.get(), type_name_GeolocationProvider, &type_spec_GeolocationProvider, bases.get(), nullptr);
    if (!state->type_GeolocationProvider)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Devices::Geolocation::Provider::LocationOverrideStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Geolocation::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Geolocation::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_LocationOverrideStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Geolocation::Provider::LocationOverrideStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Geolocation::Provider::GeolocationProvider>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Geolocation::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Geolocation::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_GeolocationProvider;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Geolocation::Provider::GeolocationProvider is not registered");
        return nullptr;
    }

    return python_type;
}
