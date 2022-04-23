// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#include "pybase.h"
#include "py.Windows.Media.Core.Preview.h"

PyTypeObject* py::winrt_type<winrt::Windows::Media::Core::Preview::SoundLevelBroker>::python_type;

namespace py::cpp::Windows::Media::Core::Preview
{
    // ----- SoundLevelBroker class --------------------
    constexpr const char* const _type_name_SoundLevelBroker = "SoundLevelBroker";

    static PyObject* _new_SoundLevelBroker(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_SoundLevelBroker);
        return nullptr;
    }

    static PyObject* SoundLevelBroker_get_SoundLevel(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::Core::Preview::SoundLevelBroker::SoundLevel());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SoundLevelBroker_add_SoundLevelChanged(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(winrt::Windows::Media::Core::Preview::SoundLevelBroker::SoundLevelChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* SoundLevelBroker_remove_SoundLevelChanged(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            winrt::Windows::Media::Core::Preview::SoundLevelBroker::SoundLevelChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_SoundLevelBroker[] = {
        { "get_sound_level", reinterpret_cast<PyCFunction>(SoundLevelBroker_get_SoundLevel), METH_NOARGS | METH_STATIC, nullptr },
        { "add_sound_level_changed", reinterpret_cast<PyCFunction>(SoundLevelBroker_add_SoundLevelChanged), METH_O | METH_STATIC, nullptr },
        { "remove_sound_level_changed", reinterpret_cast<PyCFunction>(SoundLevelBroker_remove_SoundLevelChanged), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_SoundLevelBroker[] = {
        { }
    };

    static PyType_Slot _type_slots_SoundLevelBroker[] = 
    {
        { Py_tp_new, _new_SoundLevelBroker },
        { Py_tp_methods, _methods_SoundLevelBroker },
        { Py_tp_getset, _getset_SoundLevelBroker },
        { },
    };

    static PyType_Spec _type_spec_SoundLevelBroker =
    {
        "_winsdk_Windows_Media_Core_Preview.SoundLevelBroker",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_SoundLevelBroker
    };

    // ----- Windows.Media.Core.Preview Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Media::Core::Preview::SoundLevelBroker>::python_type = py::register_python_type(module, _type_name_SoundLevelBroker, &_type_spec_SoundLevelBroker, nullptr);

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Media.Core.Preview");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Media_Core_Preview",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Media::Core::Preview

PyMODINIT_FUNC
PyInit__winsdk_Windows_Media_Core_Preview (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Media::Core::Preview::module_def);
}
