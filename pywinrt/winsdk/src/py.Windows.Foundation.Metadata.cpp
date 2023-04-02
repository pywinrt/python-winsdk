// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.Foundation.Metadata.h"


namespace py::cpp::Windows::Foundation::Metadata
{
    struct module_state
    {
        PyObject* type_AttributeTargets;
        PyObject* type_CompositionType;
        PyObject* type_DeprecationType;
        PyObject* type_FeatureStage;
        PyObject* type_GCPressureAmount;
        PyObject* type_MarshalingType;
        PyObject* type_Platform;
        PyObject* type_ThreadingModel;
        PyTypeObject* type_ApiInformation;
    };

    static PyObject* register_AttributeTargets(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_AttributeTargets)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_AttributeTargets = type;
        Py_INCREF(state->type_AttributeTargets);


        Py_RETURN_NONE;
    }

    static PyObject* register_CompositionType(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_CompositionType)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_CompositionType = type;
        Py_INCREF(state->type_CompositionType);


        Py_RETURN_NONE;
    }

    static PyObject* register_DeprecationType(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_DeprecationType)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_DeprecationType = type;
        Py_INCREF(state->type_DeprecationType);


        Py_RETURN_NONE;
    }

    static PyObject* register_FeatureStage(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_FeatureStage)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_FeatureStage = type;
        Py_INCREF(state->type_FeatureStage);


        Py_RETURN_NONE;
    }

    static PyObject* register_GCPressureAmount(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_GCPressureAmount)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_GCPressureAmount = type;
        Py_INCREF(state->type_GCPressureAmount);


        Py_RETURN_NONE;
    }

    static PyObject* register_MarshalingType(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_MarshalingType)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_MarshalingType = type;
        Py_INCREF(state->type_MarshalingType);


        Py_RETURN_NONE;
    }

    static PyObject* register_Platform(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_Platform)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_Platform = type;
        Py_INCREF(state->type_Platform);


        Py_RETURN_NONE;
    }

    static PyObject* register_ThreadingModel(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ThreadingModel)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ThreadingModel = type;
        Py_INCREF(state->type_ThreadingModel);


        Py_RETURN_NONE;
    }

    // ----- ApiInformation class --------------------
    constexpr const char* const type_name_ApiInformation = "ApiInformation";

    static PyObject* _new_ApiInformation(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ApiInformation);
        return nullptr;
    }

    static PyObject* ApiInformation_IsApiContractPresent(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsApiContractPresent", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<uint16_t>(args, 1);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsApiContractPresent", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<uint16_t>(args, 1);
                auto param2 = py::convert_to<uint16_t>(args, 2);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsApiContractPresent(param0, param1, param2));
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

    static PyObject* ApiInformation_IsEnumNamedValuePresent(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsEnumNamedValuePresent", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsEnumNamedValuePresent(param0, param1));
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

    static PyObject* ApiInformation_IsEventPresent(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsEventPresent", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(param0, param1));
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

    static PyObject* ApiInformation_IsMethodPresent(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsMethodPresent", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsMethodPresent", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);
                auto param2 = py::convert_to<uint32_t>(args, 2);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(param0, param1, param2));
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

    static PyObject* ApiInformation_IsPropertyPresent(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsPropertyPresent", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(param0, param1));
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

    static PyObject* ApiInformation_IsReadOnlyPropertyPresent(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsReadOnlyPropertyPresent", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsReadOnlyPropertyPresent(param0, param1));
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

    static PyObject* ApiInformation_IsTypePresent(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsTypePresent", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsTypePresent(param0));
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

    static PyObject* ApiInformation_IsWriteablePropertyPresent(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Foundation.Metadata.ApiInformation", L"IsWriteablePropertyPresent", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);

                return py::convert(winrt::Windows::Foundation::Metadata::ApiInformation::IsWriteablePropertyPresent(param0, param1));
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

    static PyMethodDef _methods_ApiInformation[] = {
        { "is_api_contract_present", reinterpret_cast<PyCFunction>(ApiInformation_IsApiContractPresent), METH_VARARGS | METH_STATIC, nullptr },
        { "is_enum_named_value_present", reinterpret_cast<PyCFunction>(ApiInformation_IsEnumNamedValuePresent), METH_VARARGS | METH_STATIC, nullptr },
        { "is_event_present", reinterpret_cast<PyCFunction>(ApiInformation_IsEventPresent), METH_VARARGS | METH_STATIC, nullptr },
        { "is_method_present", reinterpret_cast<PyCFunction>(ApiInformation_IsMethodPresent), METH_VARARGS | METH_STATIC, nullptr },
        { "is_property_present", reinterpret_cast<PyCFunction>(ApiInformation_IsPropertyPresent), METH_VARARGS | METH_STATIC, nullptr },
        { "is_read_only_property_present", reinterpret_cast<PyCFunction>(ApiInformation_IsReadOnlyPropertyPresent), METH_VARARGS | METH_STATIC, nullptr },
        { "is_type_present", reinterpret_cast<PyCFunction>(ApiInformation_IsTypePresent), METH_VARARGS | METH_STATIC, nullptr },
        { "is_writeable_property_present", reinterpret_cast<PyCFunction>(ApiInformation_IsWriteablePropertyPresent), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ApiInformation[] = {
        { }
    };

    static PyType_Slot _type_slots_ApiInformation[] = 
    {
        { Py_tp_new, _new_ApiInformation },
        { Py_tp_methods, _methods_ApiInformation },
        { Py_tp_getset, _getset_ApiInformation },
        { },
    };

    static PyType_Spec type_spec_ApiInformation =
    {
        "_winsdk_Windows_Foundation_Metadata.ApiInformation",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ApiInformation
    };

    // ----- Windows.Foundation.Metadata Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Foundation::Metadata");

    static PyMethodDef module_methods[] = {
        {"_register_AttributeTargets", register_AttributeTargets, METH_O, "registers type"},
        {"_register_CompositionType", register_CompositionType, METH_O, "registers type"},
        {"_register_DeprecationType", register_DeprecationType, METH_O, "registers type"},
        {"_register_FeatureStage", register_FeatureStage, METH_O, "registers type"},
        {"_register_GCPressureAmount", register_GCPressureAmount, METH_O, "registers type"},
        {"_register_MarshalingType", register_MarshalingType, METH_O, "registers type"},
        {"_register_Platform", register_Platform, METH_O, "registers type"},
        {"_register_ThreadingModel", register_ThreadingModel, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_AttributeTargets);
        Py_VISIT(state->type_CompositionType);
        Py_VISIT(state->type_DeprecationType);
        Py_VISIT(state->type_FeatureStage);
        Py_VISIT(state->type_GCPressureAmount);
        Py_VISIT(state->type_MarshalingType);
        Py_VISIT(state->type_Platform);
        Py_VISIT(state->type_ThreadingModel);
        Py_VISIT(state->type_ApiInformation);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_AttributeTargets);
        Py_CLEAR(state->type_CompositionType);
        Py_CLEAR(state->type_DeprecationType);
        Py_CLEAR(state->type_FeatureStage);
        Py_CLEAR(state->type_GCPressureAmount);
        Py_CLEAR(state->type_MarshalingType);
        Py_CLEAR(state->type_Platform);
        Py_CLEAR(state->type_ThreadingModel);
        Py_CLEAR(state->type_ApiInformation);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Foundation_Metadata",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Foundation::Metadata

PyMODINIT_FUNC PyInit__winsdk_Windows_Foundation_Metadata(void) noexcept
{
    using namespace py::cpp::Windows::Foundation::Metadata;

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

    state->type_ApiInformation = py::register_python_type(module.get(), type_name_ApiInformation, &type_spec_ApiInformation, nullptr, nullptr);
    if (!state->type_ApiInformation)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Foundation::Metadata::AttributeTargets>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_AttributeTargets;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::AttributeTargets is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Foundation::Metadata::CompositionType>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_CompositionType;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::CompositionType is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Foundation::Metadata::DeprecationType>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DeprecationType;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::DeprecationType is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Foundation::Metadata::FeatureStage>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_FeatureStage;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::FeatureStage is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Foundation::Metadata::GCPressureAmount>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_GCPressureAmount;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::GCPressureAmount is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Foundation::Metadata::MarshalingType>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_MarshalingType;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::MarshalingType is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Foundation::Metadata::Platform>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_Platform;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::Platform is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Foundation::Metadata::ThreadingModel>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ThreadingModel;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::ThreadingModel is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Foundation::Metadata::ApiInformation>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Foundation::Metadata;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Foundation::Metadata");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ApiInformation;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Foundation::Metadata::ApiInformation is not registered");
        return nullptr;
    }

    return python_type;
}
