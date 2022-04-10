// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#include "pybase.h"
#include "py.Windows.Data.Html.h"

PyTypeObject* py::winrt_type<winrt::Windows::Data::Html::HtmlUtilities>::python_type;

namespace py::cpp::Windows::Data::Html
{
    // ----- HtmlUtilities class --------------------
    constexpr const char* const _type_name_HtmlUtilities = "HtmlUtilities";

    static PyObject* _new_HtmlUtilities(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_HtmlUtilities);
        return nullptr;
    }

    static PyObject* HtmlUtilities_ConvertToText(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
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
        { Py_tp_new, _new_HtmlUtilities },
        { Py_tp_methods, _methods_HtmlUtilities },
        { Py_tp_getset, _getset_HtmlUtilities },
        { },
    };

    static PyType_Spec _type_spec_HtmlUtilities =
    {
        "_winsdk_Windows_Data_Html.HtmlUtilities",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_HtmlUtilities
    };

    // ----- Windows.Data.Html Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Data::Html::HtmlUtilities>::python_type = py::register_python_type(module, _type_name_HtmlUtilities, &_type_spec_HtmlUtilities, nullptr);

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Data.Html");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Data_Html",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Data::Html

PyMODINIT_FUNC
PyInit__winsdk_Windows_Data_Html (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Data::Html::module_def);
}
