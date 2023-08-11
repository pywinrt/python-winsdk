// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#include "pybase.h"
#include "py.Windows.System.Power.Diagnostics.h"


namespace py::cpp::Windows::System::Power::Diagnostics
{
    struct module_state
    {
        PyTypeObject* type_BackgroundEnergyDiagnostics;
        PyTypeObject* type_ForegroundEnergyDiagnostics;
    };

    // ----- BackgroundEnergyDiagnostics class --------------------
    static constexpr const char* const type_name_BackgroundEnergyDiagnostics = "BackgroundEnergyDiagnostics";

    static PyObject* _new_BackgroundEnergyDiagnostics(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_BackgroundEnergyDiagnostics);
        return nullptr;
    }

    static PyObject* BackgroundEnergyDiagnostics_ComputeTotalEnergyUsage(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics", L"ComputeTotalEnergyUsage", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics::ComputeTotalEnergyUsage());
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

    static PyObject* BackgroundEnergyDiagnostics_ResetTotalEnergyUsage(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics", L"ResetTotalEnergyUsage", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics::ResetTotalEnergyUsage();
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

    static PyObject* BackgroundEnergyDiagnostics_get_DeviceSpecificConversionFactor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics", L"DeviceSpecificConversionFactor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics::DeviceSpecificConversionFactor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_BackgroundEnergyDiagnostics[] = {
        { "compute_total_energy_usage", reinterpret_cast<PyCFunction>(BackgroundEnergyDiagnostics_ComputeTotalEnergyUsage), METH_VARARGS | METH_STATIC, nullptr },
        { "reset_total_energy_usage", reinterpret_cast<PyCFunction>(BackgroundEnergyDiagnostics_ResetTotalEnergyUsage), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_BackgroundEnergyDiagnostics[] = {
        { }
    };

    static PyType_Slot _type_slots_BackgroundEnergyDiagnostics[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_BackgroundEnergyDiagnostics) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_BackgroundEnergyDiagnostics) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_BackgroundEnergyDiagnostics) },
        { },
    };

    static PyType_Spec type_spec_BackgroundEnergyDiagnostics =
    {
        "_winsdk_Windows_System_Power_Diagnostics.BackgroundEnergyDiagnostics",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_BackgroundEnergyDiagnostics
    };

    static PyGetSetDef getset_BackgroundEnergyDiagnostics_Meta[] = {
        { "device_specific_conversion_factor", reinterpret_cast<getter>(BackgroundEnergyDiagnostics_get_DeviceSpecificConversionFactor), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_BackgroundEnergyDiagnostics_Meta[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_BackgroundEnergyDiagnostics_Meta) },
        { }
    };

    static PyType_Spec type_spec_BackgroundEnergyDiagnostics_Meta =
    {
        "_winsdk_Windows_System_Power_Diagnostics.BackgroundEnergyDiagnostics_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_BackgroundEnergyDiagnostics_Meta
    };

    // ----- ForegroundEnergyDiagnostics class --------------------
    static constexpr const char* const type_name_ForegroundEnergyDiagnostics = "ForegroundEnergyDiagnostics";

    static PyObject* _new_ForegroundEnergyDiagnostics(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ForegroundEnergyDiagnostics);
        return nullptr;
    }

    static PyObject* ForegroundEnergyDiagnostics_ComputeTotalEnergyUsage(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics", L"ComputeTotalEnergyUsage", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics::ComputeTotalEnergyUsage());
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

    static PyObject* ForegroundEnergyDiagnostics_ResetTotalEnergyUsage(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics", L"ResetTotalEnergyUsage", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics::ResetTotalEnergyUsage();
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

    static PyObject* ForegroundEnergyDiagnostics_get_DeviceSpecificConversionFactor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics", L"DeviceSpecificConversionFactor"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics::DeviceSpecificConversionFactor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ForegroundEnergyDiagnostics[] = {
        { "compute_total_energy_usage", reinterpret_cast<PyCFunction>(ForegroundEnergyDiagnostics_ComputeTotalEnergyUsage), METH_VARARGS | METH_STATIC, nullptr },
        { "reset_total_energy_usage", reinterpret_cast<PyCFunction>(ForegroundEnergyDiagnostics_ResetTotalEnergyUsage), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ForegroundEnergyDiagnostics[] = {
        { }
    };

    static PyType_Slot _type_slots_ForegroundEnergyDiagnostics[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_ForegroundEnergyDiagnostics) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_ForegroundEnergyDiagnostics) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_ForegroundEnergyDiagnostics) },
        { },
    };

    static PyType_Spec type_spec_ForegroundEnergyDiagnostics =
    {
        "_winsdk_Windows_System_Power_Diagnostics.ForegroundEnergyDiagnostics",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ForegroundEnergyDiagnostics
    };

    static PyGetSetDef getset_ForegroundEnergyDiagnostics_Meta[] = {
        { "device_specific_conversion_factor", reinterpret_cast<getter>(ForegroundEnergyDiagnostics_get_DeviceSpecificConversionFactor), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_ForegroundEnergyDiagnostics_Meta[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_ForegroundEnergyDiagnostics_Meta) },
        { }
    };

    static PyType_Spec type_spec_ForegroundEnergyDiagnostics_Meta =
    {
        "_winsdk_Windows_System_Power_Diagnostics.ForegroundEnergyDiagnostics_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_ForegroundEnergyDiagnostics_Meta
    };

    // ----- Windows.System.Power.Diagnostics Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::System::Power::Diagnostics");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_BackgroundEnergyDiagnostics);
        Py_VISIT(state->type_ForegroundEnergyDiagnostics);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_BackgroundEnergyDiagnostics);
        Py_CLEAR(state->type_ForegroundEnergyDiagnostics);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_System_Power_Diagnostics",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::System::Power::Diagnostics

PyMODINIT_FUNC PyInit__winsdk_Windows_System_Power_Diagnostics(void) noexcept
{
    using namespace py::cpp::Windows::System::Power::Diagnostics;

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

    py::pyobj_handle type_BackgroundEnergyDiagnostics_Meta{PyType_FromSpec(&type_spec_BackgroundEnergyDiagnostics_Meta)};
    if (!type_BackgroundEnergyDiagnostics_Meta)
    {
        return nullptr;
    }

    state->type_BackgroundEnergyDiagnostics = py::register_python_type(module.get(), type_name_BackgroundEnergyDiagnostics, &type_spec_BackgroundEnergyDiagnostics, object_bases.get(), reinterpret_cast<PyTypeObject*>(type_BackgroundEnergyDiagnostics_Meta.get()));
    if (!state->type_BackgroundEnergyDiagnostics)
    {
        return nullptr;
    }

    py::pyobj_handle type_ForegroundEnergyDiagnostics_Meta{PyType_FromSpec(&type_spec_ForegroundEnergyDiagnostics_Meta)};
    if (!type_ForegroundEnergyDiagnostics_Meta)
    {
        return nullptr;
    }

    state->type_ForegroundEnergyDiagnostics = py::register_python_type(module.get(), type_name_ForegroundEnergyDiagnostics, &type_spec_ForegroundEnergyDiagnostics, object_bases.get(), reinterpret_cast<PyTypeObject*>(type_ForegroundEnergyDiagnostics_Meta.get()));
    if (!state->type_ForegroundEnergyDiagnostics)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Power::Diagnostics;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Power::Diagnostics");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_BackgroundEnergyDiagnostics;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Power::Diagnostics;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Power::Diagnostics");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ForegroundEnergyDiagnostics;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics is not registered");
        return nullptr;
    }

    return python_type;
}
