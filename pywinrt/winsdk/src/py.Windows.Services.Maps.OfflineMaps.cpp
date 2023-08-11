// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#include "pybase.h"
#include "py.Windows.Services.Maps.OfflineMaps.h"


namespace py::cpp::Windows::Services::Maps::OfflineMaps
{
    struct module_state
    {
        PyObject* type_OfflineMapPackageQueryStatus;
        PyObject* type_OfflineMapPackageStartDownloadStatus;
        PyObject* type_OfflineMapPackageStatus;
        PyTypeObject* type_OfflineMapPackage;
        PyTypeObject* type_OfflineMapPackageQueryResult;
        PyTypeObject* type_OfflineMapPackageStartDownloadResult;
    };

    static PyObject* register_OfflineMapPackageQueryStatus(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_OfflineMapPackageQueryStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_OfflineMapPackageQueryStatus = type;
        Py_INCREF(state->type_OfflineMapPackageQueryStatus);


        Py_RETURN_NONE;
    }

    static PyObject* register_OfflineMapPackageStartDownloadStatus(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_OfflineMapPackageStartDownloadStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_OfflineMapPackageStartDownloadStatus = type;
        Py_INCREF(state->type_OfflineMapPackageStartDownloadStatus);


        Py_RETURN_NONE;
    }

    static PyObject* register_OfflineMapPackageStatus(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_OfflineMapPackageStatus)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_OfflineMapPackageStatus = type;
        Py_INCREF(state->type_OfflineMapPackageStatus);


        Py_RETURN_NONE;
    }

    // ----- OfflineMapPackage class --------------------
    static constexpr const char* const type_name_OfflineMapPackage = "OfflineMapPackage";

    static PyObject* _new_OfflineMapPackage(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_OfflineMapPackage);
        return nullptr;
    }

    static void _dealloc_OfflineMapPackage(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage* self) noexcept
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

    static PyObject* OfflineMapPackage_FindPackagesAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"FindPackagesAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Geolocation::Geopoint>(args, 0);

                return py::convert(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage::FindPackagesAsync(param0));
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

    static PyObject* OfflineMapPackage_FindPackagesInBoundingBoxAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"FindPackagesInBoundingBoxAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Geolocation::GeoboundingBox>(args, 0);

                return py::convert(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage::FindPackagesInBoundingBoxAsync(param0));
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

    static PyObject* OfflineMapPackage_FindPackagesInGeocircleAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"FindPackagesInGeocircleAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Geolocation::Geocircle>(args, 0);

                return py::convert(winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage::FindPackagesInGeocircleAsync(param0));
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

    static PyObject* OfflineMapPackage_RequestStartDownloadAsync(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"RequestStartDownloadAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.RequestStartDownloadAsync());
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

    static PyObject* OfflineMapPackage_get_DisplayName(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"DisplayName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DisplayName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* OfflineMapPackage_get_EnclosingRegionName(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"EnclosingRegionName"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.EnclosingRegionName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* OfflineMapPackage_get_EstimatedSizeInBytes(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"EstimatedSizeInBytes"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.EstimatedSizeInBytes());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* OfflineMapPackage_get_Status(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"Status"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Status());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* OfflineMapPackage_add_StatusChanged(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"StatusChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.StatusChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* OfflineMapPackage_remove_StatusChanged(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackage", L"StatusChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.StatusChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_OfflineMapPackage(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_OfflineMapPackage(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_OfflineMapPackage[] = {
        { "find_packages_async", reinterpret_cast<PyCFunction>(OfflineMapPackage_FindPackagesAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "find_packages_in_bounding_box_async", reinterpret_cast<PyCFunction>(OfflineMapPackage_FindPackagesInBoundingBoxAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "find_packages_in_geocircle_async", reinterpret_cast<PyCFunction>(OfflineMapPackage_FindPackagesInGeocircleAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "request_start_download_async", reinterpret_cast<PyCFunction>(OfflineMapPackage_RequestStartDownloadAsync), METH_VARARGS, nullptr },
        { "add_status_changed", reinterpret_cast<PyCFunction>(OfflineMapPackage_add_StatusChanged), METH_O, nullptr },
        { "remove_status_changed", reinterpret_cast<PyCFunction>(OfflineMapPackage_remove_StatusChanged), METH_O, nullptr },
        { "_assign_array_", _assign_array_OfflineMapPackage, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_OfflineMapPackage), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_OfflineMapPackage[] = {
        { "display_name", reinterpret_cast<getter>(OfflineMapPackage_get_DisplayName), nullptr, nullptr, nullptr },
        { "enclosing_region_name", reinterpret_cast<getter>(OfflineMapPackage_get_EnclosingRegionName), nullptr, nullptr, nullptr },
        { "estimated_size_in_bytes", reinterpret_cast<getter>(OfflineMapPackage_get_EstimatedSizeInBytes), nullptr, nullptr, nullptr },
        { "status", reinterpret_cast<getter>(OfflineMapPackage_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_OfflineMapPackage[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_OfflineMapPackage) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_OfflineMapPackage) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_OfflineMapPackage) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_OfflineMapPackage) },
        { },
    };

    static PyType_Spec type_spec_OfflineMapPackage =
    {
        "_winsdk_Windows_Services_Maps_OfflineMaps.OfflineMapPackage",
        sizeof(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackage),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_OfflineMapPackage
    };

    // ----- OfflineMapPackageQueryResult class --------------------
    static constexpr const char* const type_name_OfflineMapPackageQueryResult = "OfflineMapPackageQueryResult";

    static PyObject* _new_OfflineMapPackageQueryResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_OfflineMapPackageQueryResult);
        return nullptr;
    }

    static void _dealloc_OfflineMapPackageQueryResult(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult* self) noexcept
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

    static PyObject* OfflineMapPackageQueryResult_get_Packages(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult", L"Packages"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Packages());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* OfflineMapPackageQueryResult_get_Status(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageQueryResult", L"Status"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Status());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_OfflineMapPackageQueryResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_OfflineMapPackageQueryResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_OfflineMapPackageQueryResult[] = {
        { "_assign_array_", _assign_array_OfflineMapPackageQueryResult, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_OfflineMapPackageQueryResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_OfflineMapPackageQueryResult[] = {
        { "packages", reinterpret_cast<getter>(OfflineMapPackageQueryResult_get_Packages), nullptr, nullptr, nullptr },
        { "status", reinterpret_cast<getter>(OfflineMapPackageQueryResult_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_OfflineMapPackageQueryResult[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_OfflineMapPackageQueryResult) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_OfflineMapPackageQueryResult) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_OfflineMapPackageQueryResult) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_OfflineMapPackageQueryResult) },
        { },
    };

    static PyType_Spec type_spec_OfflineMapPackageQueryResult =
    {
        "_winsdk_Windows_Services_Maps_OfflineMaps.OfflineMapPackageQueryResult",
        sizeof(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_OfflineMapPackageQueryResult
    };

    // ----- OfflineMapPackageStartDownloadResult class --------------------
    static constexpr const char* const type_name_OfflineMapPackageStartDownloadResult = "OfflineMapPackageStartDownloadResult";

    static PyObject* _new_OfflineMapPackageStartDownloadResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_OfflineMapPackageStartDownloadResult);
        return nullptr;
    }

    static void _dealloc_OfflineMapPackageStartDownloadResult(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult* self) noexcept
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

    static PyObject* OfflineMapPackageStartDownloadResult_get_Status(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Services.Maps.OfflineMaps.OfflineMapPackageStartDownloadResult", L"Status"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Status());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_OfflineMapPackageStartDownloadResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_OfflineMapPackageStartDownloadResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_OfflineMapPackageStartDownloadResult[] = {
        { "_assign_array_", _assign_array_OfflineMapPackageStartDownloadResult, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_OfflineMapPackageStartDownloadResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_OfflineMapPackageStartDownloadResult[] = {
        { "status", reinterpret_cast<getter>(OfflineMapPackageStartDownloadResult_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_OfflineMapPackageStartDownloadResult[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_OfflineMapPackageStartDownloadResult) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_OfflineMapPackageStartDownloadResult) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_OfflineMapPackageStartDownloadResult) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_OfflineMapPackageStartDownloadResult) },
        { },
    };

    static PyType_Spec type_spec_OfflineMapPackageStartDownloadResult =
    {
        "_winsdk_Windows_Services_Maps_OfflineMaps.OfflineMapPackageStartDownloadResult",
        sizeof(py::wrapper::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_OfflineMapPackageStartDownloadResult
    };

    // ----- Windows.Services.Maps.OfflineMaps Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Services::Maps::OfflineMaps");

    static PyMethodDef module_methods[] = {
        {"_register_OfflineMapPackageQueryStatus", register_OfflineMapPackageQueryStatus, METH_O, "registers type"},
        {"_register_OfflineMapPackageStartDownloadStatus", register_OfflineMapPackageStartDownloadStatus, METH_O, "registers type"},
        {"_register_OfflineMapPackageStatus", register_OfflineMapPackageStatus, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_OfflineMapPackageQueryStatus);
        Py_VISIT(state->type_OfflineMapPackageStartDownloadStatus);
        Py_VISIT(state->type_OfflineMapPackageStatus);
        Py_VISIT(state->type_OfflineMapPackage);
        Py_VISIT(state->type_OfflineMapPackageQueryResult);
        Py_VISIT(state->type_OfflineMapPackageStartDownloadResult);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_OfflineMapPackageQueryStatus);
        Py_CLEAR(state->type_OfflineMapPackageStartDownloadStatus);
        Py_CLEAR(state->type_OfflineMapPackageStatus);
        Py_CLEAR(state->type_OfflineMapPackage);
        Py_CLEAR(state->type_OfflineMapPackageQueryResult);
        Py_CLEAR(state->type_OfflineMapPackageStartDownloadResult);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Services_Maps_OfflineMaps",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Services::Maps::OfflineMaps

PyMODINIT_FUNC PyInit__winsdk_Windows_Services_Maps_OfflineMaps(void) noexcept
{
    using namespace py::cpp::Windows::Services::Maps::OfflineMaps;

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

    state->type_OfflineMapPackage = py::register_python_type(module.get(), type_name_OfflineMapPackage, &type_spec_OfflineMapPackage, object_bases.get(), nullptr);
    if (!state->type_OfflineMapPackage)
    {
        return nullptr;
    }

    state->type_OfflineMapPackageQueryResult = py::register_python_type(module.get(), type_name_OfflineMapPackageQueryResult, &type_spec_OfflineMapPackageQueryResult, object_bases.get(), nullptr);
    if (!state->type_OfflineMapPackageQueryResult)
    {
        return nullptr;
    }

    state->type_OfflineMapPackageStartDownloadResult = py::register_python_type(module.get(), type_name_OfflineMapPackageStartDownloadResult, &type_spec_OfflineMapPackageStartDownloadResult, object_bases.get(), nullptr);
    if (!state->type_OfflineMapPackageStartDownloadResult)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Maps::OfflineMaps;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Maps::OfflineMaps");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_OfflineMapPackageQueryStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Maps::OfflineMaps;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Maps::OfflineMaps");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_OfflineMapPackageStartDownloadStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Maps::OfflineMaps;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Maps::OfflineMaps");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_OfflineMapPackageStatus;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Maps::OfflineMaps;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Maps::OfflineMaps");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_OfflineMapPackage;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Maps::OfflineMaps;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Maps::OfflineMaps");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_OfflineMapPackageQueryResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Services::Maps::OfflineMaps;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Services::Maps::OfflineMaps");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_OfflineMapPackageStartDownloadResult;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult is not registered");
        return nullptr;
    }

    return python_type;
}
