// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.System.Threading.h"


namespace py::cpp::Windows::System::Threading
{
    struct module_state
    {
        PyObject* type_WorkItemOptions;
        PyObject* type_WorkItemPriority;
        PyTypeObject* type_ThreadPool;
        PyTypeObject* type_ThreadPoolTimer;
    };

    static PyObject* register_WorkItemOptions(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_WorkItemOptions)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_WorkItemOptions = type;
        Py_INCREF(state->type_WorkItemOptions);


        Py_RETURN_NONE;
    }

    static PyObject* register_WorkItemPriority(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_WorkItemPriority)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_WorkItemPriority = type;
        Py_INCREF(state->type_WorkItemPriority);


        Py_RETURN_NONE;
    }

    // ----- ThreadPool class --------------------
    constexpr const char* const type_name_ThreadPool = "ThreadPool";

    static PyObject* _new_ThreadPool(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ThreadPool);
        return nullptr;
    }

    static PyObject* ThreadPool_RunAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Threading.ThreadPool", L"RunAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::Threading::WorkItemHandler>(args, 0);

                return py::convert(winrt::Windows::System::Threading::ThreadPool::RunAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Threading.ThreadPool", L"RunAsync", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::Threading::WorkItemHandler>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::System::Threading::WorkItemPriority>(args, 1);

                return py::convert(winrt::Windows::System::Threading::ThreadPool::RunAsync(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Threading.ThreadPool", L"RunAsync", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::Threading::WorkItemHandler>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::System::Threading::WorkItemPriority>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::System::Threading::WorkItemOptions>(args, 2);

                return py::convert(winrt::Windows::System::Threading::ThreadPool::RunAsync(param0, param1, param2));
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

    static PyMethodDef _methods_ThreadPool[] = {
        { "run_async", reinterpret_cast<PyCFunction>(ThreadPool_RunAsync), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ThreadPool[] = {
        { }
    };

    static PyType_Slot _type_slots_ThreadPool[] = 
    {
        { Py_tp_new, _new_ThreadPool },
        { Py_tp_methods, _methods_ThreadPool },
        { Py_tp_getset, _getset_ThreadPool },
        { },
    };

    static PyType_Spec type_spec_ThreadPool =
    {
        "_winsdk_Windows_System_Threading.ThreadPool",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ThreadPool
    };

    // ----- ThreadPoolTimer class --------------------
    constexpr const char* const type_name_ThreadPoolTimer = "ThreadPoolTimer";

    static PyObject* _new_ThreadPoolTimer(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_ThreadPoolTimer);
        return nullptr;
    }

    static void _dealloc_ThreadPoolTimer(py::wrapper::Windows::System::Threading::ThreadPoolTimer* self) noexcept
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

    static PyObject* ThreadPoolTimer_Cancel(py::wrapper::Windows::System::Threading::ThreadPoolTimer* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Threading.ThreadPoolTimer", L"Cancel", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Cancel();
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

    static PyObject* ThreadPoolTimer_CreatePeriodicTimer(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Threading.ThreadPoolTimer", L"CreatePeriodicTimer", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::Threading::TimerElapsedHandler>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 1);

                return py::convert(winrt::Windows::System::Threading::ThreadPoolTimer::CreatePeriodicTimer(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Threading.ThreadPoolTimer", L"CreatePeriodicTimer", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::Threading::TimerElapsedHandler>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::System::Threading::TimerDestroyedHandler>(args, 2);

                return py::convert(winrt::Windows::System::Threading::ThreadPoolTimer::CreatePeriodicTimer(param0, param1, param2));
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

    static PyObject* ThreadPoolTimer_CreateTimer(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Threading.ThreadPoolTimer", L"CreateTimer", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::Threading::TimerElapsedHandler>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 1);

                return py::convert(winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.System.Threading.ThreadPoolTimer", L"CreateTimer", 3))
            {
                py::set_arg_count_version_error(3);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::Threading::TimerElapsedHandler>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::System::Threading::TimerDestroyedHandler>(args, 2);

                return py::convert(winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(param0, param1, param2));
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

    static PyObject* ThreadPoolTimer_get_Delay(py::wrapper::Windows::System::Threading::ThreadPoolTimer* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Threading.ThreadPoolTimer", L"Delay"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Delay());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ThreadPoolTimer_get_Period(py::wrapper::Windows::System::Threading::ThreadPoolTimer* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.System.Threading.ThreadPoolTimer", L"Period"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Period());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_ThreadPoolTimer(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::System::Threading::ThreadPoolTimer>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_ThreadPoolTimer(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::System::Threading::ThreadPoolTimer>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ThreadPoolTimer[] = {
        { "cancel", reinterpret_cast<PyCFunction>(ThreadPoolTimer_Cancel), METH_VARARGS, nullptr },
        { "create_periodic_timer", reinterpret_cast<PyCFunction>(ThreadPoolTimer_CreatePeriodicTimer), METH_VARARGS | METH_STATIC, nullptr },
        { "create_timer", reinterpret_cast<PyCFunction>(ThreadPoolTimer_CreateTimer), METH_VARARGS | METH_STATIC, nullptr },
        { "_assign_array_", _assign_array_ThreadPoolTimer, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_ThreadPoolTimer), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ThreadPoolTimer[] = {
        { "delay", reinterpret_cast<getter>(ThreadPoolTimer_get_Delay), nullptr, nullptr, nullptr },
        { "period", reinterpret_cast<getter>(ThreadPoolTimer_get_Period), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_ThreadPoolTimer[] = 
    {
        { Py_tp_new, _new_ThreadPoolTimer },
        { Py_tp_dealloc, _dealloc_ThreadPoolTimer },
        { Py_tp_methods, _methods_ThreadPoolTimer },
        { Py_tp_getset, _getset_ThreadPoolTimer },
        { },
    };

    static PyType_Spec type_spec_ThreadPoolTimer =
    {
        "_winsdk_Windows_System_Threading.ThreadPoolTimer",
        sizeof(py::wrapper::Windows::System::Threading::ThreadPoolTimer),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ThreadPoolTimer
    };

    // ----- Windows.System.Threading Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::System::Threading");

    static PyMethodDef module_methods[] = {
        {"_register_WorkItemOptions", register_WorkItemOptions, METH_O, "registers type"},
        {"_register_WorkItemPriority", register_WorkItemPriority, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_WorkItemOptions);
        Py_VISIT(state->type_WorkItemPriority);
        Py_VISIT(state->type_ThreadPool);
        Py_VISIT(state->type_ThreadPoolTimer);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_WorkItemOptions);
        Py_CLEAR(state->type_WorkItemPriority);
        Py_CLEAR(state->type_ThreadPool);
        Py_CLEAR(state->type_ThreadPoolTimer);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_System_Threading",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::System::Threading

PyMODINIT_FUNC PyInit__winsdk_Windows_System_Threading(void) noexcept
{
    using namespace py::cpp::Windows::System::Threading;

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

    state->type_ThreadPool = py::register_python_type(module.get(), type_name_ThreadPool, &type_spec_ThreadPool, nullptr, nullptr);
    if (!state->type_ThreadPool)
    {
        return nullptr;
    }

    state->type_ThreadPoolTimer = py::register_python_type(module.get(), type_name_ThreadPoolTimer, &type_spec_ThreadPoolTimer, bases.get(), nullptr);
    if (!state->type_ThreadPoolTimer)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::System::Threading::WorkItemOptions>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Threading;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Threading");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WorkItemOptions;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Threading::WorkItemOptions is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::System::Threading::WorkItemPriority>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Threading;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Threading");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_WorkItemPriority;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Threading::WorkItemPriority is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Threading::ThreadPool>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Threading;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Threading");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ThreadPool;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Threading::ThreadPool is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::System::Threading::ThreadPoolTimer>::get_python_type() noexcept {
    using namespace py::cpp::Windows::System::Threading;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::System::Threading");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ThreadPoolTimer;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::System::Threading::ThreadPoolTimer is not registered");
        return nullptr;
    }

    return python_type;
}
