// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.Devices.Portable.h"


namespace py::cpp::Windows::Devices::Portable
{
    struct module_state
    {
        PyObject* type_ServiceDeviceType;
        PyTypeObject* type_ServiceDevice;
        PyTypeObject* type_StorageDevice;
    };

    static PyObject* register_ServiceDeviceType(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ServiceDeviceType)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ServiceDeviceType = type;
        Py_INCREF(state->type_ServiceDeviceType);


        Py_RETURN_NONE;
    }

    // ----- ServiceDevice class --------------------
    constexpr const char* const type_name_ServiceDevice = "ServiceDevice";

    static PyObject* _new_ServiceDevice(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ServiceDevice);
        return nullptr;
    }

    static PyObject* ServiceDevice_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Portable.ServiceDevice", L"GetDeviceSelector", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Portable::ServiceDeviceType>(args, 0);

                return py::convert(winrt::Windows::Devices::Portable::ServiceDevice::GetDeviceSelector(param0));
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

    static PyObject* ServiceDevice_GetDeviceSelectorFromServiceId(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Portable.ServiceDevice", L"GetDeviceSelectorFromServiceId", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::guid>(args, 0);

                return py::convert(winrt::Windows::Devices::Portable::ServiceDevice::GetDeviceSelectorFromServiceId(param0));
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

    static PyMethodDef _methods_ServiceDevice[] = {
        { "get_device_selector", reinterpret_cast<PyCFunction>(ServiceDevice_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector_from_service_id", reinterpret_cast<PyCFunction>(ServiceDevice_GetDeviceSelectorFromServiceId), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ServiceDevice[] = {
        { }
    };

    static PyType_Slot _type_slots_ServiceDevice[] = 
    {
        { Py_tp_new, _new_ServiceDevice },
        { Py_tp_methods, _methods_ServiceDevice },
        { Py_tp_getset, _getset_ServiceDevice },
        { },
    };

    static PyType_Spec type_spec_ServiceDevice =
    {
        "_winsdk_Windows_Devices_Portable.ServiceDevice",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ServiceDevice
    };

    // ----- StorageDevice class --------------------
    constexpr const char* const type_name_StorageDevice = "StorageDevice";

    static PyObject* _new_StorageDevice(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_StorageDevice);
        return nullptr;
    }

    static PyObject* StorageDevice_FromId(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Portable.StorageDevice", L"FromId", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Portable::StorageDevice::FromId(param0));
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

    static PyObject* StorageDevice_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Portable.StorageDevice", L"GetDeviceSelector", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Devices::Portable::StorageDevice::GetDeviceSelector());
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

    static PyMethodDef _methods_StorageDevice[] = {
        { "from_id", reinterpret_cast<PyCFunction>(StorageDevice_FromId), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(StorageDevice_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_StorageDevice[] = {
        { }
    };

    static PyType_Slot _type_slots_StorageDevice[] = 
    {
        { Py_tp_new, _new_StorageDevice },
        { Py_tp_methods, _methods_StorageDevice },
        { Py_tp_getset, _getset_StorageDevice },
        { },
    };

    static PyType_Spec type_spec_StorageDevice =
    {
        "_winsdk_Windows_Devices_Portable.StorageDevice",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_StorageDevice
    };

    // ----- Windows.Devices.Portable Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Portable");

    static PyMethodDef module_methods[] = {
        {"_register_ServiceDeviceType", register_ServiceDeviceType, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_ServiceDeviceType);
        Py_VISIT(state->type_ServiceDevice);
        Py_VISIT(state->type_StorageDevice);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_ServiceDeviceType);
        Py_CLEAR(state->type_ServiceDevice);
        Py_CLEAR(state->type_StorageDevice);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Portable",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Portable

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Portable(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Portable;

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

    state->type_ServiceDevice = py::register_python_type(module.get(), type_name_ServiceDevice, &type_spec_ServiceDevice, nullptr, nullptr);
    if (!state->type_ServiceDevice)
    {
        return nullptr;
    }

    state->type_StorageDevice = py::register_python_type(module.get(), type_name_StorageDevice, &type_spec_StorageDevice, nullptr, nullptr);
    if (!state->type_StorageDevice)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Devices::Portable::ServiceDeviceType>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Portable;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Portable");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ServiceDeviceType;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Portable::ServiceDeviceType is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Portable::ServiceDevice>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Portable;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Portable");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ServiceDevice;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Portable::ServiceDevice is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Portable::StorageDevice>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Portable;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Portable");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_StorageDevice;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Portable::StorageDevice is not registered");
        return nullptr;
    }

    return python_type;
}
