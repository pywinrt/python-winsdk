// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.5

#include "pybase.h"
#include "py.Windows.Phone.PersonalInformation.Provisioning.h"


namespace py::cpp::Windows::Phone::PersonalInformation::Provisioning
{
    struct module_state
    {
        PyTypeObject* type_ContactPartnerProvisioningManager;
        PyTypeObject* type_MessagePartnerProvisioningManager;
    };

    // ----- ContactPartnerProvisioningManager class --------------------
    constexpr const char* const type_name_ContactPartnerProvisioningManager = "ContactPartnerProvisioningManager";

    static PyObject* _new_ContactPartnerProvisioningManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ContactPartnerProvisioningManager);
        return nullptr;
    }

    static PyObject* ContactPartnerProvisioningManager_AssociateNetworkAccountAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Phone::PersonalInformation::ContactStore>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);
                auto param2 = py::convert_to<winrt::hstring>(args, 2);

                return py::convert(winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager::AssociateNetworkAccountAsync(param0, param1, param2));
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

    static PyObject* ContactPartnerProvisioningManager_AssociateSocialNetworkAccountAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Phone::PersonalInformation::ContactStore>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);
                auto param2 = py::convert_to<winrt::hstring>(args, 2);

                return py::convert(winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager::AssociateSocialNetworkAccountAsync(param0, param1, param2));
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

    static PyObject* ContactPartnerProvisioningManager_ImportVcardToSystemAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IInputStream>(args, 0);

                return py::convert(winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager::ImportVcardToSystemAsync(param0));
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

    static PyMethodDef _methods_ContactPartnerProvisioningManager[] = {
        { "associate_network_account_async", reinterpret_cast<PyCFunction>(ContactPartnerProvisioningManager_AssociateNetworkAccountAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "associate_social_network_account_async", reinterpret_cast<PyCFunction>(ContactPartnerProvisioningManager_AssociateSocialNetworkAccountAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "import_vcard_to_system_async", reinterpret_cast<PyCFunction>(ContactPartnerProvisioningManager_ImportVcardToSystemAsync), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ContactPartnerProvisioningManager[] = {
        { }
    };

    static PyType_Slot _type_slots_ContactPartnerProvisioningManager[] = 
    {
        { Py_tp_new, _new_ContactPartnerProvisioningManager },
        { Py_tp_methods, _methods_ContactPartnerProvisioningManager },
        { Py_tp_getset, _getset_ContactPartnerProvisioningManager },
        { },
    };

    static PyType_Spec type_spec_ContactPartnerProvisioningManager =
    {
        "_winsdk_Windows_Phone_PersonalInformation_Provisioning.ContactPartnerProvisioningManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ContactPartnerProvisioningManager
    };

    // ----- MessagePartnerProvisioningManager class --------------------
    constexpr const char* const type_name_MessagePartnerProvisioningManager = "MessagePartnerProvisioningManager";

    static PyObject* _new_MessagePartnerProvisioningManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_MessagePartnerProvisioningManager);
        return nullptr;
    }

    static PyObject* MessagePartnerProvisioningManager_ImportMmsToSystemAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 7)
        {
            try
            {
                auto param0 = py::convert_to<bool>(args, 0);
                auto param1 = py::convert_to<bool>(args, 1);
                auto param2 = py::convert_to<winrt::hstring>(args, 2);
                auto param3 = py::convert_to<winrt::hstring>(args, 3);
                auto param4 = py::convert_to<winrt::Windows::Foundation::Collections::IVectorView<winrt::hstring>>(args, 4);
                auto param5 = py::convert_to<winrt::Windows::Foundation::DateTime>(args, 5);
                auto param6 = py::convert_to<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, winrt::Windows::Foundation::IInspectable>>>(args, 6);

                return py::convert(winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager::ImportMmsToSystemAsync(param0, param1, param2, param3, param4, param5, param6));
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

    static PyObject* MessagePartnerProvisioningManager_ImportSmsToSystemAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 6)
        {
            try
            {
                auto param0 = py::convert_to<bool>(args, 0);
                auto param1 = py::convert_to<bool>(args, 1);
                auto param2 = py::convert_to<winrt::hstring>(args, 2);
                auto param3 = py::convert_to<winrt::hstring>(args, 3);
                auto param4 = py::convert_to<winrt::Windows::Foundation::Collections::IVectorView<winrt::hstring>>(args, 4);
                auto param5 = py::convert_to<winrt::Windows::Foundation::DateTime>(args, 5);

                return py::convert(winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager::ImportSmsToSystemAsync(param0, param1, param2, param3, param4, param5));
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

    static PyMethodDef _methods_MessagePartnerProvisioningManager[] = {
        { "import_mms_to_system_async", reinterpret_cast<PyCFunction>(MessagePartnerProvisioningManager_ImportMmsToSystemAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "import_sms_to_system_async", reinterpret_cast<PyCFunction>(MessagePartnerProvisioningManager_ImportSmsToSystemAsync), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_MessagePartnerProvisioningManager[] = {
        { }
    };

    static PyType_Slot _type_slots_MessagePartnerProvisioningManager[] = 
    {
        { Py_tp_new, _new_MessagePartnerProvisioningManager },
        { Py_tp_methods, _methods_MessagePartnerProvisioningManager },
        { Py_tp_getset, _getset_MessagePartnerProvisioningManager },
        { },
    };

    static PyType_Spec type_spec_MessagePartnerProvisioningManager =
    {
        "_winsdk_Windows_Phone_PersonalInformation_Provisioning.MessagePartnerProvisioningManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_MessagePartnerProvisioningManager
    };

    // ----- Windows.Phone.PersonalInformation.Provisioning Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Phone::PersonalInformation::Provisioning");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_ContactPartnerProvisioningManager);
        Py_VISIT(state->type_MessagePartnerProvisioningManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_ContactPartnerProvisioningManager);
        Py_CLEAR(state->type_MessagePartnerProvisioningManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Phone_PersonalInformation_Provisioning",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Phone::PersonalInformation::Provisioning

PyMODINIT_FUNC PyInit__winsdk_Windows_Phone_PersonalInformation_Provisioning(void) noexcept
{
    using namespace py::cpp::Windows::Phone::PersonalInformation::Provisioning;

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

    state->type_ContactPartnerProvisioningManager = py::register_python_type(module.get(), type_name_ContactPartnerProvisioningManager, &type_spec_ContactPartnerProvisioningManager, nullptr);
    if (!state->type_ContactPartnerProvisioningManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_ContactPartnerProvisioningManager);

    state->type_MessagePartnerProvisioningManager = py::register_python_type(module.get(), type_name_MessagePartnerProvisioningManager, &type_spec_MessagePartnerProvisioningManager, nullptr);
    if (!state->type_MessagePartnerProvisioningManager)
    {
        return nullptr;
    }

    Py_INCREF(state->type_MessagePartnerProvisioningManager);


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Phone::PersonalInformation::Provisioning;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Phone::PersonalInformation::Provisioning");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ContactPartnerProvisioningManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Phone::PersonalInformation::Provisioning::ContactPartnerProvisioningManager is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Phone::PersonalInformation::Provisioning;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Phone::PersonalInformation::Provisioning");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MessagePartnerProvisioningManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Phone::PersonalInformation::Provisioning::MessagePartnerProvisioningManager is not registered");
        return nullptr;
    }

    return python_type;
}