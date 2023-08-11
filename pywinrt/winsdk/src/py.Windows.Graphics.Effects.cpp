// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#include "pybase.h"
#include "py.Windows.Graphics.Effects.h"


namespace py::cpp::Windows::Graphics::Effects
{
    struct module_state
    {
        PyTypeObject* type_IGraphicsEffect;
        PyTypeObject* type_IGraphicsEffectSource;
    };

    // ----- IGraphicsEffect interface --------------------
    static constexpr const char* const type_name_IGraphicsEffect = "IGraphicsEffect";

    static PyObject* _new_IGraphicsEffect(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */) noexcept
    {
        py::set_invalid_activation_error(type_name_IGraphicsEffect);
        return nullptr;
    }

    static void _dealloc_IGraphicsEffect(py::wrapper::Windows::Graphics::Effects::IGraphicsEffect* self) noexcept
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

    static PyObject* IGraphicsEffect_get_Name(py::wrapper::Windows::Graphics::Effects::IGraphicsEffect* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Graphics.Effects.IGraphicsEffect", L"Name"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Name());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int IGraphicsEffect_put_Name(py::wrapper::Windows::Graphics::Effects::IGraphicsEffect* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Graphics.Effects.IGraphicsEffect", L"Name"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return -1;
        }

        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_AttributeError, "can't delete attribute");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.Name(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _assign_array_IGraphicsEffect(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Graphics::Effects::IGraphicsEffect>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_IGraphicsEffect(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Graphics::Effects::IGraphicsEffect>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IGraphicsEffect[] = {
        { "_assign_array_", _assign_array_IGraphicsEffect, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IGraphicsEffect), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IGraphicsEffect[] = {
        { "name", reinterpret_cast<getter>(IGraphicsEffect_get_Name), reinterpret_cast<setter>(IGraphicsEffect_put_Name), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_IGraphicsEffect[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_IGraphicsEffect) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_IGraphicsEffect) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_IGraphicsEffect) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_IGraphicsEffect) },
        { },
    };

    static PyType_Spec type_spec_IGraphicsEffect =
    {
        "_winsdk_Windows_Graphics_Effects.IGraphicsEffect",
        sizeof(py::wrapper::Windows::Graphics::Effects::IGraphicsEffect),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IGraphicsEffect
    };

    // ----- IGraphicsEffectSource interface --------------------
    static constexpr const char* const type_name_IGraphicsEffectSource = "IGraphicsEffectSource";

    static PyObject* _new_IGraphicsEffectSource(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */) noexcept
    {
        py::set_invalid_activation_error(type_name_IGraphicsEffectSource);
        return nullptr;
    }

    static void _dealloc_IGraphicsEffectSource(py::wrapper::Windows::Graphics::Effects::IGraphicsEffectSource* self) noexcept
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

    static PyObject* _assign_array_IGraphicsEffectSource(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Graphics::Effects::IGraphicsEffectSource>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_IGraphicsEffectSource(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Graphics::Effects::IGraphicsEffectSource>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IGraphicsEffectSource[] = {
        { "_assign_array_", _assign_array_IGraphicsEffectSource, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IGraphicsEffectSource), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IGraphicsEffectSource[] = {
        { }
    };

    static PyType_Slot _type_slots_IGraphicsEffectSource[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_IGraphicsEffectSource) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_IGraphicsEffectSource) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_IGraphicsEffectSource) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_IGraphicsEffectSource) },
        { },
    };

    static PyType_Spec type_spec_IGraphicsEffectSource =
    {
        "_winsdk_Windows_Graphics_Effects.IGraphicsEffectSource",
        sizeof(py::wrapper::Windows::Graphics::Effects::IGraphicsEffectSource),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IGraphicsEffectSource
    };

    // ----- Windows.Graphics.Effects Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Graphics::Effects");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_IGraphicsEffect);
        Py_VISIT(state->type_IGraphicsEffectSource);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_IGraphicsEffect);
        Py_CLEAR(state->type_IGraphicsEffectSource);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Graphics_Effects",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Graphics::Effects

PyMODINIT_FUNC PyInit__winsdk_Windows_Graphics_Effects(void) noexcept
{
    using namespace py::cpp::Windows::Graphics::Effects;

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

    state->type_IGraphicsEffect = py::register_python_type(module.get(), type_name_IGraphicsEffect, &type_spec_IGraphicsEffect, object_bases.get(), nullptr);
    if (!state->type_IGraphicsEffect)
    {
        return nullptr;
    }

    state->type_IGraphicsEffectSource = py::register_python_type(module.get(), type_name_IGraphicsEffectSource, &type_spec_IGraphicsEffectSource, object_bases.get(), nullptr);
    if (!state->type_IGraphicsEffectSource)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Graphics::Effects::IGraphicsEffect>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::Effects;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::Effects");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IGraphicsEffect;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::Effects::IGraphicsEffect is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Graphics::Effects::IGraphicsEffectSource>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Graphics::Effects;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Graphics::Effects");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IGraphicsEffectSource;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Graphics::Effects::IGraphicsEffectSource is not registered");
        return nullptr;
    }

    return python_type;
}
