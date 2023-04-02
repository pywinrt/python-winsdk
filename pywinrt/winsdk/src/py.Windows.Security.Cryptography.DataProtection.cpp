// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.Security.Cryptography.DataProtection.h"


namespace py::cpp::Windows::Security::Cryptography::DataProtection
{
    struct module_state
    {
        PyTypeObject* type_DataProtectionProvider;
    };

    // ----- DataProtectionProvider class --------------------
    constexpr const char* const type_name_DataProtectionProvider = "DataProtectionProvider";

    static PyObject* _new_DataProtectionProvider(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        auto arg_count = PyTuple_Size(args);
        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider instance{ param0 };
                return py::wrap(instance, type);
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 0)
        {
            try
            {
                winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider instance{  };
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

    static void _dealloc_DataProtectionProvider(py::wrapper::Windows::Security::Cryptography::DataProtection::DataProtectionProvider* self) noexcept
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

    static PyObject* DataProtectionProvider_ProtectAsync(py::wrapper::Windows::Security::Cryptography::DataProtection::DataProtectionProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Cryptography.DataProtection.DataProtectionProvider", L"ProtectAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 0);

                return py::convert(self->obj.ProtectAsync(param0));
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

    static PyObject* DataProtectionProvider_ProtectStreamAsync(py::wrapper::Windows::Security::Cryptography::DataProtection::DataProtectionProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Cryptography.DataProtection.DataProtectionProvider", L"ProtectStreamAsync", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IInputStream>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Storage::Streams::IOutputStream>(args, 1);

                return py::convert(self->obj.ProtectStreamAsync(param0, param1));
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

    static PyObject* DataProtectionProvider_UnprotectAsync(py::wrapper::Windows::Security::Cryptography::DataProtection::DataProtectionProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Cryptography.DataProtection.DataProtectionProvider", L"UnprotectAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IBuffer>(args, 0);

                return py::convert(self->obj.UnprotectAsync(param0));
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

    static PyObject* DataProtectionProvider_UnprotectStreamAsync(py::wrapper::Windows::Security::Cryptography::DataProtection::DataProtectionProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Security.Cryptography.DataProtection.DataProtectionProvider", L"UnprotectStreamAsync", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Storage::Streams::IInputStream>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Storage::Streams::IOutputStream>(args, 1);

                return py::convert(self->obj.UnprotectStreamAsync(param0, param1));
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

    static PyObject* _assign_array_DataProtectionProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_DataProtectionProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DataProtectionProvider[] = {
        { "protect_async", reinterpret_cast<PyCFunction>(DataProtectionProvider_ProtectAsync), METH_VARARGS, nullptr },
        { "protect_stream_async", reinterpret_cast<PyCFunction>(DataProtectionProvider_ProtectStreamAsync), METH_VARARGS, nullptr },
        { "unprotect_async", reinterpret_cast<PyCFunction>(DataProtectionProvider_UnprotectAsync), METH_VARARGS, nullptr },
        { "unprotect_stream_async", reinterpret_cast<PyCFunction>(DataProtectionProvider_UnprotectStreamAsync), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_DataProtectionProvider, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DataProtectionProvider), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DataProtectionProvider[] = {
        { }
    };

    static PyType_Slot _type_slots_DataProtectionProvider[] = 
    {
        { Py_tp_new, _new_DataProtectionProvider },
        { Py_tp_dealloc, _dealloc_DataProtectionProvider },
        { Py_tp_methods, _methods_DataProtectionProvider },
        { Py_tp_getset, _getset_DataProtectionProvider },
        { },
    };

    static PyType_Spec type_spec_DataProtectionProvider =
    {
        "_winsdk_Windows_Security_Cryptography_DataProtection.DataProtectionProvider",
        sizeof(py::wrapper::Windows::Security::Cryptography::DataProtection::DataProtectionProvider),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DataProtectionProvider
    };

    // ----- Windows.Security.Cryptography.DataProtection Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Security::Cryptography::DataProtection");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_DataProtectionProvider);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_DataProtectionProvider);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Security_Cryptography_DataProtection",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Security::Cryptography::DataProtection

PyMODINIT_FUNC PyInit__winsdk_Windows_Security_Cryptography_DataProtection(void) noexcept
{
    using namespace py::cpp::Windows::Security::Cryptography::DataProtection;

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

    state->type_DataProtectionProvider = py::register_python_type(module.get(), type_name_DataProtectionProvider, &type_spec_DataProtectionProvider, bases.get(), nullptr);
    if (!state->type_DataProtectionProvider)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Security::Cryptography::DataProtection;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Security::Cryptography::DataProtection");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DataProtectionProvider;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Security::Cryptography::DataProtection::DataProtectionProvider is not registered");
        return nullptr;
    }

    return python_type;
}
