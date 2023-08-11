// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#include "pybase.h"
#include "py.Windows.ApplicationModel.CommunicationBlocking.h"


namespace py::cpp::Windows::ApplicationModel::CommunicationBlocking
{
    struct module_state
    {
        PyTypeObject* type_CommunicationBlockingAccessManager;
        PyTypeObject* type_CommunicationBlockingAppManager;
    };

    // ----- CommunicationBlockingAccessManager class --------------------
    static constexpr const char* const type_name_CommunicationBlockingAccessManager = "CommunicationBlockingAccessManager";

    static PyObject* _new_CommunicationBlockingAccessManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CommunicationBlockingAccessManager);
        return nullptr;
    }

    static PyObject* CommunicationBlockingAccessManager_IsBlockedNumberAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager", L"IsBlockedNumberAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager::IsBlockedNumberAsync(param0));
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

    static PyObject* CommunicationBlockingAccessManager_ShowBlockNumbersUI(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager", L"ShowBlockNumbersUI", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 0);

                return py::convert(winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager::ShowBlockNumbersUI(param0));
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

    static PyObject* CommunicationBlockingAccessManager_ShowBlockedCallsUI(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager", L"ShowBlockedCallsUI", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager::ShowBlockedCallsUI();
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

    static PyObject* CommunicationBlockingAccessManager_ShowBlockedMessagesUI(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager", L"ShowBlockedMessagesUI", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager::ShowBlockedMessagesUI();
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

    static PyObject* CommunicationBlockingAccessManager_ShowUnblockNumbersUI(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager", L"ShowUnblockNumbersUI", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 0);

                return py::convert(winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager::ShowUnblockNumbersUI(param0));
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

    static PyObject* CommunicationBlockingAccessManager_get_IsBlockingActive(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAccessManager", L"IsBlockingActive"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager::IsBlockingActive());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CommunicationBlockingAccessManager[] = {
        { "is_blocked_number_async", reinterpret_cast<PyCFunction>(CommunicationBlockingAccessManager_IsBlockedNumberAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "show_block_numbers_u_i", reinterpret_cast<PyCFunction>(CommunicationBlockingAccessManager_ShowBlockNumbersUI), METH_VARARGS | METH_STATIC, nullptr },
        { "show_blocked_calls_u_i", reinterpret_cast<PyCFunction>(CommunicationBlockingAccessManager_ShowBlockedCallsUI), METH_VARARGS | METH_STATIC, nullptr },
        { "show_blocked_messages_u_i", reinterpret_cast<PyCFunction>(CommunicationBlockingAccessManager_ShowBlockedMessagesUI), METH_VARARGS | METH_STATIC, nullptr },
        { "show_unblock_numbers_u_i", reinterpret_cast<PyCFunction>(CommunicationBlockingAccessManager_ShowUnblockNumbersUI), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CommunicationBlockingAccessManager[] = {
        { }
    };

    static PyType_Slot _type_slots_CommunicationBlockingAccessManager[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_CommunicationBlockingAccessManager) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_CommunicationBlockingAccessManager) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_CommunicationBlockingAccessManager) },
        { },
    };

    static PyType_Spec type_spec_CommunicationBlockingAccessManager =
    {
        "_winsdk_Windows_ApplicationModel_CommunicationBlocking.CommunicationBlockingAccessManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CommunicationBlockingAccessManager
    };

    static PyGetSetDef getset_CommunicationBlockingAccessManager_Meta[] = {
        { "is_blocking_active", reinterpret_cast<getter>(CommunicationBlockingAccessManager_get_IsBlockingActive), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_CommunicationBlockingAccessManager_Meta[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_CommunicationBlockingAccessManager_Meta) },
        { }
    };

    static PyType_Spec type_spec_CommunicationBlockingAccessManager_Meta =
    {
        "_winsdk_Windows_ApplicationModel_CommunicationBlocking.CommunicationBlockingAccessManager_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_CommunicationBlockingAccessManager_Meta
    };

    // ----- CommunicationBlockingAppManager class --------------------
    static constexpr const char* const type_name_CommunicationBlockingAppManager = "CommunicationBlockingAppManager";

    static PyObject* _new_CommunicationBlockingAppManager(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_CommunicationBlockingAppManager);
        return nullptr;
    }

    static PyObject* CommunicationBlockingAppManager_RequestSetAsActiveBlockingAppAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAppManager", L"RequestSetAsActiveBlockingAppAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager::RequestSetAsActiveBlockingAppAsync());
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

    static PyObject* CommunicationBlockingAppManager_ShowCommunicationBlockingSettingsUI(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAppManager", L"ShowCommunicationBlockingSettingsUI", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager::ShowCommunicationBlockingSettingsUI();
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

    static PyObject* CommunicationBlockingAppManager_get_IsCurrentAppActiveBlockingApp(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.ApplicationModel.CommunicationBlocking.CommunicationBlockingAppManager", L"IsCurrentAppActiveBlockingApp"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager::IsCurrentAppActiveBlockingApp());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_CommunicationBlockingAppManager[] = {
        { "request_set_as_active_blocking_app_async", reinterpret_cast<PyCFunction>(CommunicationBlockingAppManager_RequestSetAsActiveBlockingAppAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "show_communication_blocking_settings_u_i", reinterpret_cast<PyCFunction>(CommunicationBlockingAppManager_ShowCommunicationBlockingSettingsUI), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_CommunicationBlockingAppManager[] = {
        { }
    };

    static PyType_Slot _type_slots_CommunicationBlockingAppManager[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_CommunicationBlockingAppManager) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_CommunicationBlockingAppManager) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_CommunicationBlockingAppManager) },
        { },
    };

    static PyType_Spec type_spec_CommunicationBlockingAppManager =
    {
        "_winsdk_Windows_ApplicationModel_CommunicationBlocking.CommunicationBlockingAppManager",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_CommunicationBlockingAppManager
    };

    static PyGetSetDef getset_CommunicationBlockingAppManager_Meta[] = {
        { "is_current_app_active_blocking_app", reinterpret_cast<getter>(CommunicationBlockingAppManager_get_IsCurrentAppActiveBlockingApp), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_CommunicationBlockingAppManager_Meta[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_CommunicationBlockingAppManager_Meta) },
        { }
    };

    static PyType_Spec type_spec_CommunicationBlockingAppManager_Meta =
    {
        "_winsdk_Windows_ApplicationModel_CommunicationBlocking.CommunicationBlockingAppManager_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_CommunicationBlockingAppManager_Meta
    };

    // ----- Windows.ApplicationModel.CommunicationBlocking Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::ApplicationModel::CommunicationBlocking");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_CommunicationBlockingAccessManager);
        Py_VISIT(state->type_CommunicationBlockingAppManager);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_CommunicationBlockingAccessManager);
        Py_CLEAR(state->type_CommunicationBlockingAppManager);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_CommunicationBlocking",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::ApplicationModel::CommunicationBlocking

PyMODINIT_FUNC PyInit__winsdk_Windows_ApplicationModel_CommunicationBlocking(void) noexcept
{
    using namespace py::cpp::Windows::ApplicationModel::CommunicationBlocking;

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

    py::pyobj_handle type_CommunicationBlockingAccessManager_Meta{PyType_FromSpec(&type_spec_CommunicationBlockingAccessManager_Meta)};
    if (!type_CommunicationBlockingAccessManager_Meta)
    {
        return nullptr;
    }

    state->type_CommunicationBlockingAccessManager = py::register_python_type(module.get(), type_name_CommunicationBlockingAccessManager, &type_spec_CommunicationBlockingAccessManager, object_bases.get(), reinterpret_cast<PyTypeObject*>(type_CommunicationBlockingAccessManager_Meta.get()));
    if (!state->type_CommunicationBlockingAccessManager)
    {
        return nullptr;
    }

    py::pyobj_handle type_CommunicationBlockingAppManager_Meta{PyType_FromSpec(&type_spec_CommunicationBlockingAppManager_Meta)};
    if (!type_CommunicationBlockingAppManager_Meta)
    {
        return nullptr;
    }

    state->type_CommunicationBlockingAppManager = py::register_python_type(module.get(), type_name_CommunicationBlockingAppManager, &type_spec_CommunicationBlockingAppManager, object_bases.get(), reinterpret_cast<PyTypeObject*>(type_CommunicationBlockingAppManager_Meta.get()));
    if (!state->type_CommunicationBlockingAppManager)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::CommunicationBlocking;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::CommunicationBlocking");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CommunicationBlockingAccessManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager>::get_python_type() noexcept {
    using namespace py::cpp::Windows::ApplicationModel::CommunicationBlocking;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::ApplicationModel::CommunicationBlocking");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CommunicationBlockingAppManager;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager is not registered");
        return nullptr;
    }

    return python_type;
}
