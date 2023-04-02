// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.System.Profile.SystemManufacturers.h"


namespace py::cpp::Windows::System::Profile::SystemManufacturers
{
    struct module_state
    {
        PyTypeObject* type_OemSupportInfo;
        PyTypeObject* type_SmbiosInformation;
        PyTypeObject* type_SystemSupportDeviceInfo;
        PyTypeObject* type_SystemSupportInfo;
    };

    // ----- OemSupportInfo class --------------------
    constexpr const char* const type_name_OemSupportInfo = "OemSupportInfo";

    static PyObject* _new_OemSupportInfo(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_OemSupportInfo);
        return nullptr;
    }

    static void _dealloc_OemSupportInfo(py::wrapper::Windows::System::Profile::SystemManufacturers::OemSupportInfo* self) noexcept
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

    static PyObject* OemSupportInfo_get_SupportAppLink(py::wrapper::Windows::System::Profile::SystemManufacturers::OemSupportInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.OemSupportInfo", L"SupportAppLink"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SupportAppLink());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* OemSupportInfo_get_SupportLink(py::wrapper::Windows::System::Profile::SystemManufacturers::OemSupportInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.OemSupportInfo", L"SupportLink"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SupportLink());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* OemSupportInfo_get_SupportProvider(py::wrapper::Windows::System::Profile::SystemManufacturers::OemSupportInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.OemSupportInfo", L"SupportProvider"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SupportProvider());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_OemSupportInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_OemSupportInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_OemSupportInfo[] = {
        { "_assign_array_", _assign_array_OemSupportInfo, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_OemSupportInfo), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_OemSupportInfo[] = {
        { "support_app_link", reinterpret_cast<getter>(OemSupportInfo_get_SupportAppLink), nullptr, nullptr, nullptr },
        { "support_link", reinterpret_cast<getter>(OemSupportInfo_get_SupportLink), nullptr, nullptr, nullptr },
        { "support_provider", reinterpret_cast<getter>(OemSupportInfo_get_SupportProvider), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_OemSupportInfo[] = 
    {
        { Py_tp_new, _new_OemSupportInfo },
        { Py_tp_dealloc, _dealloc_OemSupportInfo },
        { Py_tp_methods, _methods_OemSupportInfo },
        { Py_tp_getset, _getset_OemSupportInfo },
        { },
    };

    static PyType_Spec type_spec_OemSupportInfo =
    {
        "_winsdk_Windows_System_Profile_SystemManufacturers.OemSupportInfo",
        sizeof(py::wrapper::Windows::System::Profile::SystemManufacturers::OemSupportInfo),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_OemSupportInfo
    };

    // ----- SmbiosInformation class --------------------
    constexpr const char* const type_name_SmbiosInformation = "SmbiosInformation";

    static PyObject* _new_SmbiosInformation(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_SmbiosInformation);
        return nullptr;
    }

    static PyObject* SmbiosInformation_get_SerialNumber(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SmbiosInformation", L"SerialNumber"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation::SerialNumber());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_SmbiosInformation[] = {
        { }
    };

    static PyGetSetDef _getset_SmbiosInformation[] = {
        { }
    };

    static PyType_Slot _type_slots_SmbiosInformation[] = 
    {
        { Py_tp_new, _new_SmbiosInformation },
        { Py_tp_methods, _methods_SmbiosInformation },
        { Py_tp_getset, _getset_SmbiosInformation },
        { },
    };

    static PyType_Spec type_spec_SmbiosInformation =
    {
        "_winsdk_Windows_System_Profile_SystemManufacturers.SmbiosInformation",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_SmbiosInformation
    };

    static PyGetSetDef getset_SmbiosInformation_Meta[] = {
        { "serial_number", reinterpret_cast<getter>(SmbiosInformation_get_SerialNumber), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_SmbiosInformation_Meta[] = 
    {
        { Py_tp_base, &PyType_Type },
        { Py_tp_getset, getset_SmbiosInformation_Meta },
        { }
    };

    static PyType_Spec type_spec_SmbiosInformation_Meta =
    {
        "_winsdk_Windows_System_Profile_SystemManufacturers.SmbiosInformation_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_SmbiosInformation_Meta
    };

    // ----- SystemSupportDeviceInfo class --------------------
    constexpr const char* const type_name_SystemSupportDeviceInfo = "SystemSupportDeviceInfo";

    static PyObject* _new_SystemSupportDeviceInfo(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_SystemSupportDeviceInfo);
        return nullptr;
    }

    static void _dealloc_SystemSupportDeviceInfo(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo* self) noexcept
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

    static PyObject* SystemSupportDeviceInfo_get_FriendlyName(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo", L"FriendlyName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.FriendlyName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemSupportDeviceInfo_get_OperatingSystem(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo", L"OperatingSystem"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.OperatingSystem());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemSupportDeviceInfo_get_SystemFirmwareVersion(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo", L"SystemFirmwareVersion"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SystemFirmwareVersion());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemSupportDeviceInfo_get_SystemHardwareVersion(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo", L"SystemHardwareVersion"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SystemHardwareVersion());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemSupportDeviceInfo_get_SystemManufacturer(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo", L"SystemManufacturer"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SystemManufacturer());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemSupportDeviceInfo_get_SystemProductName(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo", L"SystemProductName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SystemProductName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemSupportDeviceInfo_get_SystemSku(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo", L"SystemSku"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SystemSku());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_SystemSupportDeviceInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_SystemSupportDeviceInfo(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_SystemSupportDeviceInfo[] = {
        { "_assign_array_", _assign_array_SystemSupportDeviceInfo, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_SystemSupportDeviceInfo), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_SystemSupportDeviceInfo[] = {
        { "friendly_name", reinterpret_cast<getter>(SystemSupportDeviceInfo_get_FriendlyName), nullptr, nullptr, nullptr },
        { "operating_system", reinterpret_cast<getter>(SystemSupportDeviceInfo_get_OperatingSystem), nullptr, nullptr, nullptr },
        { "system_firmware_version", reinterpret_cast<getter>(SystemSupportDeviceInfo_get_SystemFirmwareVersion), nullptr, nullptr, nullptr },
        { "system_hardware_version", reinterpret_cast<getter>(SystemSupportDeviceInfo_get_SystemHardwareVersion), nullptr, nullptr, nullptr },
        { "system_manufacturer", reinterpret_cast<getter>(SystemSupportDeviceInfo_get_SystemManufacturer), nullptr, nullptr, nullptr },
        { "system_product_name", reinterpret_cast<getter>(SystemSupportDeviceInfo_get_SystemProductName), nullptr, nullptr, nullptr },
        { "system_sku", reinterpret_cast<getter>(SystemSupportDeviceInfo_get_SystemSku), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_SystemSupportDeviceInfo[] = 
    {
        { Py_tp_new, _new_SystemSupportDeviceInfo },
        { Py_tp_dealloc, _dealloc_SystemSupportDeviceInfo },
        { Py_tp_methods, _methods_SystemSupportDeviceInfo },
        { Py_tp_getset, _getset_SystemSupportDeviceInfo },
        { },
    };

    static PyType_Spec type_spec_SystemSupportDeviceInfo =
    {
        "_winsdk_Windows_System_Profile_SystemManufacturers.SystemSupportDeviceInfo",
        sizeof(py::wrapper::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_SystemSupportDeviceInfo
    };

    // ----- SystemSupportInfo class --------------------
    constexpr const char* const type_name_SystemSupportInfo = "SystemSupportInfo";

    static PyObject* _new_SystemSupportInfo(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_SystemSupportInfo);
        return nullptr;
    }

    static PyObject* SystemSupportInfo_get_LocalSystemEdition(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportInfo", L"LocalSystemEdition"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo::LocalSystemEdition());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemSupportInfo_get_OemSupportInfo(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportInfo", L"OemSupportInfo"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo::OemSupportInfo());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SystemSupportInfo_get_LocalDeviceInfo(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Profile.SystemManufacturers.SystemSupportInfo", L"LocalDeviceInfo"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo::LocalDeviceInfo());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_SystemSupportInfo[] = {
        { }
    };

    static PyGetSetDef _getset_SystemSupportInfo[] = {
        { }
    };

    static PyType_Slot _type_slots_SystemSupportInfo[] = 
    {
        { Py_tp_new, _new_SystemSupportInfo },
        { Py_tp_methods, _methods_SystemSupportInfo },
        { Py_tp_getset, _getset_SystemSupportInfo },
        { },
    };

    static PyType_Spec type_spec_SystemSupportInfo =
    {
        "_winsdk_Windows_System_Profile_SystemManufacturers.SystemSupportInfo",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_SystemSupportInfo
    };

    static PyGetSetDef getset_SystemSupportInfo_Meta[] = {
        { "local_system_edition", reinterpret_cast<getter>(SystemSupportInfo_get_LocalSystemEdition), nullptr, nullptr, nullptr },
        { "oem_support_info", reinterpret_cast<getter>(SystemSupportInfo_get_OemSupportInfo), nullptr, nullptr, nullptr },
        { "local_device_info", reinterpret_cast<getter>(SystemSupportInfo_get_LocalDeviceInfo), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_SystemSupportInfo_Meta[] = 
    {
        { Py_tp_base, &PyType_Type },
        { Py_tp_getset, getset_SystemSupportInfo_Meta },
        { }
    };

    static PyType_Spec type_spec_SystemSupportInfo_Meta =
    {
        "_winsdk_Windows_System_Profile_SystemManufacturers.SystemSupportInfo_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_SystemSupportInfo_Meta
    };

    // ----- Windows.System.Profile.SystemManufacturers Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::System::Profile::SystemManufacturers");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_OemSupportInfo);
        Py_VISIT(state->type_SmbiosInformation);
        Py_VISIT(state->type_SystemSupportDeviceInfo);
        Py_VISIT(state->type_SystemSupportInfo);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_OemSupportInfo);
        Py_CLEAR(state->type_SmbiosInformation);
        Py_CLEAR(state->type_SystemSupportDeviceInfo);
        Py_CLEAR(state->type_SystemSupportInfo);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_System_Profile_SystemManufacturers",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::System::Profile::SystemManufacturers

PyMODINIT_FUNC PyInit__winsdk_Windows_System_Profile_SystemManufacturers(void) noexcept
{
    using namespace py::cpp::Windows::System::Profile::SystemManufacturers;

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

    state->type_OemSupportInfo = py::register_python_type(module.get(), type_name_OemSupportInfo, &type_spec_OemSupportInfo, bases.get(), nullptr);
    if (!state->type_OemSupportInfo)
    {
        return nullptr;
    }

    py::pyobj_handle type_SmbiosInformation_Meta{PyType_FromSpec(&type_spec_SmbiosInformation_Meta)};
    if (!type_SmbiosInformation_Meta)
    {
        return nullptr;
    }

    state->type_SmbiosInformation = py::register_python_type(module.get(), type_name_SmbiosInformation, &type_spec_SmbiosInformation, nullptr, reinterpret_cast<PyTypeObject*>(type_SmbiosInformation_Meta.get()));
    if (!state->type_SmbiosInformation)
    {
        return nullptr;
    }

    state->type_SystemSupportDeviceInfo = py::register_python_type(module.get(), type_name_SystemSupportDeviceInfo, &type_spec_SystemSupportDeviceInfo, bases.get(), nullptr);
    if (!state->type_SystemSupportDeviceInfo)
    {
        return nullptr;
    }

    py::pyobj_handle type_SystemSupportInfo_Meta{PyType_FromSpec(&type_spec_SystemSupportInfo_Meta)};
    if (!type_SystemSupportInfo_Meta)
    {
        return nullptr;
    }

    state->type_SystemSupportInfo = py::register_python_type(module.get(), type_name_SystemSupportInfo, &type_spec_SystemSupportInfo, nullptr, reinterpret_cast<PyTypeObject*>(type_SystemSupportInfo_Meta.get()));
    if (!state->type_SystemSupportInfo)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Profile::SystemManufacturers;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Profile::SystemManufacturers");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_OemSupportInfo;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Profile::SystemManufacturers;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Profile::SystemManufacturers");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SmbiosInformation;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Profile::SystemManufacturers;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Profile::SystemManufacturers");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemSupportDeviceInfo;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Profile::SystemManufacturers::SystemSupportDeviceInfo is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Profile::SystemManufacturers;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Profile::SystemManufacturers");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_SystemSupportInfo;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo is not registered");
        return nullptr;
    }

    return python_type;
}
