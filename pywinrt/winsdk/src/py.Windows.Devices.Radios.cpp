// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#include "pybase.h"
#include "py.Windows.Devices.Radios.h"

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Radios::Radio>::python_type;

namespace py::cpp::Windows::Devices::Radios
{
    // ----- Radio class --------------------
    constexpr const char* const _type_name_Radio = "Radio";

    static PyObject* _new_Radio(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_Radio);
        return nullptr;
    }

    static void _dealloc_Radio(py::wrapper::Windows::Devices::Radios::Radio* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* Radio_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Radios::Radio::FromIdAsync(param0));
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

    static PyObject* Radio_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::Radios::Radio::GetDeviceSelector());
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

    static PyObject* Radio_GetRadiosAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::Radios::Radio::GetRadiosAsync());
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

    static PyObject* Radio_RequestAccessAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::Radios::Radio::RequestAccessAsync());
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

    static PyObject* Radio_SetStateAsync(py::wrapper::Windows::Devices::Radios::Radio* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Radios::RadioState>(args, 0);

                return py::convert(self->obj.SetStateAsync(param0));
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

    static PyObject* Radio_get_Kind(py::wrapper::Windows::Devices::Radios::Radio* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Kind());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* Radio_get_Name(py::wrapper::Windows::Devices::Radios::Radio* self, void* /*unused*/) noexcept
    {
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

    static PyObject* Radio_get_State(py::wrapper::Windows::Devices::Radios::Radio* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.State());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* Radio_add_StateChanged(py::wrapper::Windows::Devices::Radios::Radio* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Radios::Radio, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.StateChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* Radio_remove_StateChanged(py::wrapper::Windows::Devices::Radios::Radio* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.StateChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_Radio(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Radios::Radio>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_Radio[] = {
        { "from_id_async", reinterpret_cast<PyCFunction>(Radio_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(Radio_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "get_radios_async", reinterpret_cast<PyCFunction>(Radio_GetRadiosAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "request_access_async", reinterpret_cast<PyCFunction>(Radio_RequestAccessAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "set_state_async", reinterpret_cast<PyCFunction>(Radio_SetStateAsync), METH_VARARGS, nullptr },
        { "add_state_changed", reinterpret_cast<PyCFunction>(Radio_add_StateChanged), METH_O, nullptr },
        { "remove_state_changed", reinterpret_cast<PyCFunction>(Radio_remove_StateChanged), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_Radio), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_Radio[] = {
        { "kind", reinterpret_cast<getter>(Radio_get_Kind), nullptr, nullptr, nullptr },
        { "name", reinterpret_cast<getter>(Radio_get_Name), nullptr, nullptr, nullptr },
        { "state", reinterpret_cast<getter>(Radio_get_State), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_Radio[] = 
    {
        { Py_tp_new, _new_Radio },
        { Py_tp_dealloc, _dealloc_Radio },
        { Py_tp_methods, _methods_Radio },
        { Py_tp_getset, _getset_Radio },
        { },
    };

    static PyType_Spec _type_spec_Radio =
    {
        "_winsdk_Windows_Devices_Radios.Radio",
        sizeof(py::wrapper::Windows::Devices::Radios::Radio),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_Radio
    };

    // ----- Windows.Devices.Radios Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Devices::Radios::Radio>::python_type = py::register_python_type(module, _type_name_Radio, &_type_spec_Radio, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Devices.Radios");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Radios",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Devices::Radios

PyMODINIT_FUNC
PyInit__winsdk_Windows_Devices_Radios (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Devices::Radios::module_def);
}
