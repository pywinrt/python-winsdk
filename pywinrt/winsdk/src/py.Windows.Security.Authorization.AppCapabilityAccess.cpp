// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#include "pybase.h"
#include "py.Windows.Security.Authorization.AppCapabilityAccess.h"

PyTypeObject* py::winrt_type<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>::python_type;

namespace py::cpp::Windows::Security::Authorization::AppCapabilityAccess
{
    // ----- AppCapability class --------------------
    constexpr const char* const _type_name_AppCapability = "AppCapability";

    static PyObject* _new_AppCapability(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_AppCapability);
        return nullptr;
    }

    static void _dealloc_AppCapability(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* AppCapability_CheckAccess(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.CheckAccess());
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

    static PyObject* AppCapability_Create(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability::Create(param0));
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

    static PyObject* AppCapability_CreateWithProcessIdForUser(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::User>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);
                auto param2 = py::convert_to<uint32_t>(args, 2);

                return py::convert(winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability::CreateWithProcessIdForUser(param0, param1, param2));
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

    static PyObject* AppCapability_RequestAccessAsync(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.RequestAccessAsync());
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

    static PyObject* AppCapability_RequestAccessForCapabilitiesAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 0);

                return py::convert(winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability::RequestAccessForCapabilitiesAsync(param0));
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

    static PyObject* AppCapability_RequestAccessForCapabilitiesForUserAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::System::User>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 1);

                return py::convert(winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability::RequestAccessForCapabilitiesForUserAsync(param0, param1));
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

    static PyObject* AppCapability_get_CapabilityName(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.CapabilityName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* AppCapability_get_User(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.User());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* AppCapability_add_AccessChanged(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability, winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>>(arg);

            return py::convert(self->obj.AccessChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* AppCapability_remove_AccessChanged(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.AccessChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_AppCapability(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_AppCapability[] = {
        { "check_access", reinterpret_cast<PyCFunction>(AppCapability_CheckAccess), METH_VARARGS, nullptr },
        { "create", reinterpret_cast<PyCFunction>(AppCapability_Create), METH_VARARGS | METH_STATIC, nullptr },
        { "create_with_process_id_for_user", reinterpret_cast<PyCFunction>(AppCapability_CreateWithProcessIdForUser), METH_VARARGS | METH_STATIC, nullptr },
        { "request_access_async", reinterpret_cast<PyCFunction>(AppCapability_RequestAccessAsync), METH_VARARGS, nullptr },
        { "request_access_for_capabilities_async", reinterpret_cast<PyCFunction>(AppCapability_RequestAccessForCapabilitiesAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "request_access_for_capabilities_for_user_async", reinterpret_cast<PyCFunction>(AppCapability_RequestAccessForCapabilitiesForUserAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "add_access_changed", reinterpret_cast<PyCFunction>(AppCapability_add_AccessChanged), METH_O, nullptr },
        { "remove_access_changed", reinterpret_cast<PyCFunction>(AppCapability_remove_AccessChanged), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_AppCapability), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_AppCapability[] = {
        { "capability_name", reinterpret_cast<getter>(AppCapability_get_CapabilityName), nullptr, nullptr, nullptr },
        { "user", reinterpret_cast<getter>(AppCapability_get_User), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_AppCapability[] = 
    {
        { Py_tp_new, _new_AppCapability },
        { Py_tp_dealloc, _dealloc_AppCapability },
        { Py_tp_methods, _methods_AppCapability },
        { Py_tp_getset, _getset_AppCapability },
        { },
    };

    static PyType_Spec _type_spec_AppCapability =
    {
        "_winsdk_Windows_Security_Authorization_AppCapabilityAccess.AppCapability",
        sizeof(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapability),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_AppCapability
    };

    // ----- AppCapabilityAccessChangedEventArgs class --------------------
    constexpr const char* const _type_name_AppCapabilityAccessChangedEventArgs = "AppCapabilityAccessChangedEventArgs";

    static PyObject* _new_AppCapabilityAccessChangedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_AppCapabilityAccessChangedEventArgs);
        return nullptr;
    }

    static void _dealloc_AppCapabilityAccessChangedEventArgs(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* _from_AppCapabilityAccessChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_AppCapabilityAccessChangedEventArgs[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_AppCapabilityAccessChangedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_AppCapabilityAccessChangedEventArgs[] = {
        { }
    };

    static PyType_Slot _type_slots_AppCapabilityAccessChangedEventArgs[] = 
    {
        { Py_tp_new, _new_AppCapabilityAccessChangedEventArgs },
        { Py_tp_dealloc, _dealloc_AppCapabilityAccessChangedEventArgs },
        { Py_tp_methods, _methods_AppCapabilityAccessChangedEventArgs },
        { Py_tp_getset, _getset_AppCapabilityAccessChangedEventArgs },
        { },
    };

    static PyType_Spec _type_spec_AppCapabilityAccessChangedEventArgs =
    {
        "_winsdk_Windows_Security_Authorization_AppCapabilityAccess.AppCapabilityAccessChangedEventArgs",
        sizeof(py::wrapper::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_AppCapabilityAccessChangedEventArgs
    };

    // ----- Windows.Security.Authorization.AppCapabilityAccess Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapability>::python_type = py::register_python_type(module, _type_name_AppCapability, &_type_spec_AppCapability, bases.get());
            py::winrt_type<winrt::Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessChangedEventArgs>::python_type = py::register_python_type(module, _type_name_AppCapabilityAccessChangedEventArgs, &_type_spec_AppCapabilityAccessChangedEventArgs, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Security.Authorization.AppCapabilityAccess");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Security_Authorization_AppCapabilityAccess",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Security::Authorization::AppCapabilityAccess

PyMODINIT_FUNC
PyInit__winsdk_Windows_Security_Authorization_AppCapabilityAccess (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Security::Authorization::AppCapabilityAccess::module_def);
}
