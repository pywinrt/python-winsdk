// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#include "pybase.h"
#include "py.Windows.Data.Html.h"


namespace py::cpp::Windows::Data::Html
{
    struct module_state
    {
        PyTypeObject* type_HtmlUtilities;
    };

    // ----- HtmlUtilities class --------------------
    static constexpr const char* const type_name_HtmlUtilities = "HtmlUtilities";

    static PyObject* _new_HtmlUtilities(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_HtmlUtilities);
        return nullptr;
    }

    static PyObject* HtmlUtilities_ConvertToText(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Data.Html.HtmlUtilities", L"ConvertToText", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Data::Html::HtmlUtilities::ConvertToText(param0));
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

    static PyMethodDef _methods_HtmlUtilities[] = {
        { "convert_to_text", reinterpret_cast<PyCFunction>(HtmlUtilities_ConvertToText), METH_VARARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_HtmlUtilities[] = {
        { }
    };

    static PyType_Slot _type_slots_HtmlUtilities[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_HtmlUtilities) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_HtmlUtilities) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_HtmlUtilities) },
        { },
    };

    static PyType_Spec type_spec_HtmlUtilities =
    {
        "_winsdk_Windows_Data_Html.HtmlUtilities",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_HtmlUtilities
    };

    // ----- Windows.Data.Html Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Data::Html");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_HtmlUtilities);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_HtmlUtilities);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Data_Html",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Data::Html

PyMODINIT_FUNC PyInit__winsdk_Windows_Data_Html(void) noexcept
{
    using namespace py::cpp::Windows::Data::Html;

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

    state->type_HtmlUtilities = py::register_python_type(module.get(), type_name_HtmlUtilities, &type_spec_HtmlUtilities, object_bases.get(), nullptr);
    if (!state->type_HtmlUtilities)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Data::Html::HtmlUtilities>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Data::Html;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Data::Html");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_HtmlUtilities;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Data::Html::HtmlUtilities is not registered");
        return nullptr;
    }

    return python_type;
}
