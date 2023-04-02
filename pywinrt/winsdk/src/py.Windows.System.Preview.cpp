// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.System.Preview.h"


namespace py::cpp::Windows::System::Preview
{
    struct module_state
    {
        PyObject* type_HingeState;
        PyTypeObject* type_TwoPanelHingedDevicePosturePreview;
        PyTypeObject* type_TwoPanelHingedDevicePosturePreviewReading;
        PyTypeObject* type_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;
    };

    static PyObject* register_HingeState(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_HingeState)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_HingeState = type;
        Py_INCREF(state->type_HingeState);


        Py_RETURN_NONE;
    }

    // ----- TwoPanelHingedDevicePosturePreview class --------------------
    constexpr const char* const type_name_TwoPanelHingedDevicePosturePreview = "TwoPanelHingedDevicePosturePreview";

    static PyObject* _new_TwoPanelHingedDevicePosturePreview(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_TwoPanelHingedDevicePosturePreview);
        return nullptr;
    }

    static void _dealloc_TwoPanelHingedDevicePosturePreview(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreview* self) noexcept
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

    static PyObject* TwoPanelHingedDevicePosturePreview_GetCurrentPostureAsync(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreview* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreview", L"GetCurrentPostureAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.GetCurrentPostureAsync());
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

    static PyObject* TwoPanelHingedDevicePosturePreview_GetDefaultAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreview", L"GetDefaultAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreview::GetDefaultAsync());
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

    static PyObject* TwoPanelHingedDevicePosturePreview_add_PostureChanged(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreview* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreview", L"PostureChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreview, winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>>(arg);

            return py::convert(self->obj.PostureChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* TwoPanelHingedDevicePosturePreview_remove_PostureChanged(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreview* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreview", L"PostureChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.PostureChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_TwoPanelHingedDevicePosturePreview(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreview>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_TwoPanelHingedDevicePosturePreview(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreview>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_TwoPanelHingedDevicePosturePreview[] = {
        { "get_current_posture_async", reinterpret_cast<PyCFunction>(TwoPanelHingedDevicePosturePreview_GetCurrentPostureAsync), METH_VARARGS, nullptr },
        { "get_default_async", reinterpret_cast<PyCFunction>(TwoPanelHingedDevicePosturePreview_GetDefaultAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "add_posture_changed", reinterpret_cast<PyCFunction>(TwoPanelHingedDevicePosturePreview_add_PostureChanged), METH_O, nullptr },
        { "remove_posture_changed", reinterpret_cast<PyCFunction>(TwoPanelHingedDevicePosturePreview_remove_PostureChanged), METH_O, nullptr },
        { "_assign_array_", _assign_array_TwoPanelHingedDevicePosturePreview, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_TwoPanelHingedDevicePosturePreview), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_TwoPanelHingedDevicePosturePreview[] = {
        { }
    };

    static PyType_Slot _type_slots_TwoPanelHingedDevicePosturePreview[] = 
    {
        { Py_tp_new, _new_TwoPanelHingedDevicePosturePreview },
        { Py_tp_dealloc, _dealloc_TwoPanelHingedDevicePosturePreview },
        { Py_tp_methods, _methods_TwoPanelHingedDevicePosturePreview },
        { Py_tp_getset, _getset_TwoPanelHingedDevicePosturePreview },
        { },
    };

    static PyType_Spec type_spec_TwoPanelHingedDevicePosturePreview =
    {
        "_winsdk_Windows_System_Preview.TwoPanelHingedDevicePosturePreview",
        sizeof(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreview),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_TwoPanelHingedDevicePosturePreview
    };

    // ----- TwoPanelHingedDevicePosturePreviewReading class --------------------
    constexpr const char* const type_name_TwoPanelHingedDevicePosturePreviewReading = "TwoPanelHingedDevicePosturePreviewReading";

    static PyObject* _new_TwoPanelHingedDevicePosturePreviewReading(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_TwoPanelHingedDevicePosturePreviewReading);
        return nullptr;
    }

    static void _dealloc_TwoPanelHingedDevicePosturePreviewReading(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading* self) noexcept
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

    static PyObject* TwoPanelHingedDevicePosturePreviewReading_get_HingeState(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReading", L"HingeState"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.HingeState());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* TwoPanelHingedDevicePosturePreviewReading_get_Panel1Id(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReading", L"Panel1Id"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Panel1Id());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* TwoPanelHingedDevicePosturePreviewReading_get_Panel1Orientation(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReading", L"Panel1Orientation"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Panel1Orientation());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* TwoPanelHingedDevicePosturePreviewReading_get_Panel2Id(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReading", L"Panel2Id"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Panel2Id());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* TwoPanelHingedDevicePosturePreviewReading_get_Panel2Orientation(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReading", L"Panel2Orientation"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Panel2Orientation());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* TwoPanelHingedDevicePosturePreviewReading_get_Timestamp(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReading", L"Timestamp"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Timestamp());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_TwoPanelHingedDevicePosturePreviewReading(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_TwoPanelHingedDevicePosturePreviewReading(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_TwoPanelHingedDevicePosturePreviewReading[] = {
        { "_assign_array_", _assign_array_TwoPanelHingedDevicePosturePreviewReading, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_TwoPanelHingedDevicePosturePreviewReading), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_TwoPanelHingedDevicePosturePreviewReading[] = {
        { "hinge_state", reinterpret_cast<getter>(TwoPanelHingedDevicePosturePreviewReading_get_HingeState), nullptr, nullptr, nullptr },
        { "panel1_id", reinterpret_cast<getter>(TwoPanelHingedDevicePosturePreviewReading_get_Panel1Id), nullptr, nullptr, nullptr },
        { "panel1_orientation", reinterpret_cast<getter>(TwoPanelHingedDevicePosturePreviewReading_get_Panel1Orientation), nullptr, nullptr, nullptr },
        { "panel2_id", reinterpret_cast<getter>(TwoPanelHingedDevicePosturePreviewReading_get_Panel2Id), nullptr, nullptr, nullptr },
        { "panel2_orientation", reinterpret_cast<getter>(TwoPanelHingedDevicePosturePreviewReading_get_Panel2Orientation), nullptr, nullptr, nullptr },
        { "timestamp", reinterpret_cast<getter>(TwoPanelHingedDevicePosturePreviewReading_get_Timestamp), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_TwoPanelHingedDevicePosturePreviewReading[] = 
    {
        { Py_tp_new, _new_TwoPanelHingedDevicePosturePreviewReading },
        { Py_tp_dealloc, _dealloc_TwoPanelHingedDevicePosturePreviewReading },
        { Py_tp_methods, _methods_TwoPanelHingedDevicePosturePreviewReading },
        { Py_tp_getset, _getset_TwoPanelHingedDevicePosturePreviewReading },
        { },
    };

    static PyType_Spec type_spec_TwoPanelHingedDevicePosturePreviewReading =
    {
        "_winsdk_Windows_System_Preview.TwoPanelHingedDevicePosturePreviewReading",
        sizeof(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_TwoPanelHingedDevicePosturePreviewReading
    };

    // ----- TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs class --------------------
    constexpr const char* const type_name_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs = "TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs";

    static PyObject* _new_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs);
        return nullptr;
    }

    static void _dealloc_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs* self) noexcept
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

    static PyObject* TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs_get_Reading(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs", L"Reading"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Reading());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs[] = {
        { "_assign_array_", _assign_array_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs[] = {
        { "reading", reinterpret_cast<getter>(TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs_get_Reading), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs[] = 
    {
        { Py_tp_new, _new_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs },
        { Py_tp_dealloc, _dealloc_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs },
        { Py_tp_methods, _methods_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs },
        { Py_tp_getset, _getset_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs },
        { },
    };

    static PyType_Spec type_spec_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs =
    {
        "_winsdk_Windows_System_Preview.TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs",
        sizeof(py::wrapper::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs
    };

    // ----- Windows.System.Preview Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::System::Preview");

    static PyMethodDef module_methods[] = {
        {"_register_HingeState", register_HingeState, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_HingeState);
        Py_VISIT(state->type_TwoPanelHingedDevicePosturePreview);
        Py_VISIT(state->type_TwoPanelHingedDevicePosturePreviewReading);
        Py_VISIT(state->type_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_HingeState);
        Py_CLEAR(state->type_TwoPanelHingedDevicePosturePreview);
        Py_CLEAR(state->type_TwoPanelHingedDevicePosturePreviewReading);
        Py_CLEAR(state->type_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_System_Preview",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::System::Preview

PyMODINIT_FUNC PyInit__winsdk_Windows_System_Preview(void) noexcept
{
    using namespace py::cpp::Windows::System::Preview;

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

    state->type_TwoPanelHingedDevicePosturePreview = py::register_python_type(module.get(), type_name_TwoPanelHingedDevicePosturePreview, &type_spec_TwoPanelHingedDevicePosturePreview, bases.get(), nullptr);
    if (!state->type_TwoPanelHingedDevicePosturePreview)
    {
        return nullptr;
    }

    state->type_TwoPanelHingedDevicePosturePreviewReading = py::register_python_type(module.get(), type_name_TwoPanelHingedDevicePosturePreviewReading, &type_spec_TwoPanelHingedDevicePosturePreviewReading, bases.get(), nullptr);
    if (!state->type_TwoPanelHingedDevicePosturePreviewReading)
    {
        return nullptr;
    }

    state->type_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs = py::register_python_type(module.get(), type_name_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs, &type_spec_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs, bases.get(), nullptr);
    if (!state->type_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::System::Preview::HingeState>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Preview;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Preview");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_HingeState;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Preview::HingeState is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreview>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Preview;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Preview");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_TwoPanelHingedDevicePosturePreview;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreview is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Preview;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Preview");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_TwoPanelHingedDevicePosturePreviewReading;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReading is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Preview;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Preview");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Preview::TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}
