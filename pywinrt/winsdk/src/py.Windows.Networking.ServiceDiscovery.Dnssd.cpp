// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#include "pybase.h"
#include "py.Windows.Networking.ServiceDiscovery.Dnssd.h"

PyTypeObject* py::winrt_type<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>::python_type;

namespace py::cpp::Windows::Networking::ServiceDiscovery::Dnssd
{
    // ----- DnssdRegistrationResult class --------------------
    constexpr const char* const _type_name_DnssdRegistrationResult = "DnssdRegistrationResult";

    static PyObject* _new_DnssdRegistrationResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        Py_ssize_t arg_count = PyTuple_Size(args);
        if (arg_count == 0)
        {
            try
            {
                winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult instance{  };
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

    static void _dealloc_DnssdRegistrationResult(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* DnssdRegistrationResult_ToString(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.ToString());
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

    static PyObject* DnssdRegistrationResult_get_HasInstanceNameChanged(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.HasInstanceNameChanged());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DnssdRegistrationResult_get_IPAddress(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.IPAddress());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DnssdRegistrationResult_get_Status(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult* self, void* /*unused*/) noexcept
    {
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

    static PyObject* _from_DnssdRegistrationResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _str_DnssdRegistrationResult(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult* self) noexcept
    {
        try
        {
            return py::convert(self->obj.ToString());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DnssdRegistrationResult[] = {
        { "to_string", reinterpret_cast<PyCFunction>(DnssdRegistrationResult_ToString), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DnssdRegistrationResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DnssdRegistrationResult[] = {
        { "has_instance_name_changed", reinterpret_cast<getter>(DnssdRegistrationResult_get_HasInstanceNameChanged), nullptr, nullptr, nullptr },
        { "ip_address", reinterpret_cast<getter>(DnssdRegistrationResult_get_IPAddress), nullptr, nullptr, nullptr },
        { "status", reinterpret_cast<getter>(DnssdRegistrationResult_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DnssdRegistrationResult[] = 
    {
        { Py_tp_new, _new_DnssdRegistrationResult },
        { Py_tp_dealloc, _dealloc_DnssdRegistrationResult },
        { Py_tp_methods, _methods_DnssdRegistrationResult },
        { Py_tp_getset, _getset_DnssdRegistrationResult },
        { Py_tp_str, _str_DnssdRegistrationResult },
        { },
    };

    static PyType_Spec _type_spec_DnssdRegistrationResult =
    {
        "_winsdk_Windows_Networking_ServiceDiscovery_Dnssd.DnssdRegistrationResult",
        sizeof(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DnssdRegistrationResult
    };

    // ----- DnssdServiceInstance class --------------------
    constexpr const char* const _type_name_DnssdServiceInstance = "DnssdServiceInstance";

    static PyObject* _new_DnssdServiceInstance(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        Py_ssize_t arg_count = PyTuple_Size(args);
        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Networking::HostName>(args, 1);
                auto param2 = py::convert_to<uint16_t>(args, 2);

                winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance instance{ param0, param1, param2 };
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

    static void _dealloc_DnssdServiceInstance(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* DnssdServiceInstance_RegisterDatagramSocketAsync(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::Sockets::DatagramSocket>(args, 0);

                return py::convert(self->obj.RegisterDatagramSocketAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::Sockets::DatagramSocket>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Networking::Connectivity::NetworkAdapter>(args, 1);

                return py::convert(self->obj.RegisterDatagramSocketAsync(param0, param1));
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

    static PyObject* DnssdServiceInstance_RegisterStreamSocketListenerAsync(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::Sockets::StreamSocketListener>(args, 0);

                return py::convert(self->obj.RegisterStreamSocketListenerAsync(param0));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::Sockets::StreamSocketListener>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Networking::Connectivity::NetworkAdapter>(args, 1);

                return py::convert(self->obj.RegisterStreamSocketListenerAsync(param0, param1));
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

    static PyObject* DnssdServiceInstance_ToString(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.ToString());
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

    static PyObject* DnssdServiceInstance_get_Weight(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Weight());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int DnssdServiceInstance_put_Weight(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<uint16_t>(arg);

            self->obj.Weight(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* DnssdServiceInstance_get_Priority(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Priority());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int DnssdServiceInstance_put_Priority(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<uint16_t>(arg);

            self->obj.Priority(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* DnssdServiceInstance_get_Port(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Port());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int DnssdServiceInstance_put_Port(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<uint16_t>(arg);

            self->obj.Port(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* DnssdServiceInstance_get_HostName(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.HostName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int DnssdServiceInstance_put_HostName(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Networking::HostName>(arg);

            self->obj.HostName(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* DnssdServiceInstance_get_DnssdServiceInstanceName(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DnssdServiceInstanceName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int DnssdServiceInstance_put_DnssdServiceInstanceName(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.DnssdServiceInstanceName(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* DnssdServiceInstance_get_TextAttributes(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.TextAttributes());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_DnssdServiceInstance(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _str_DnssdServiceInstance(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance* self) noexcept
    {
        try
        {
            return py::convert(self->obj.ToString());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DnssdServiceInstance[] = {
        { "register_datagram_socket_async", reinterpret_cast<PyCFunction>(DnssdServiceInstance_RegisterDatagramSocketAsync), METH_VARARGS, nullptr },
        { "register_stream_socket_listener_async", reinterpret_cast<PyCFunction>(DnssdServiceInstance_RegisterStreamSocketListenerAsync), METH_VARARGS, nullptr },
        { "to_string", reinterpret_cast<PyCFunction>(DnssdServiceInstance_ToString), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DnssdServiceInstance), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DnssdServiceInstance[] = {
        { "weight", reinterpret_cast<getter>(DnssdServiceInstance_get_Weight), reinterpret_cast<setter>(DnssdServiceInstance_put_Weight), nullptr, nullptr },
        { "priority", reinterpret_cast<getter>(DnssdServiceInstance_get_Priority), reinterpret_cast<setter>(DnssdServiceInstance_put_Priority), nullptr, nullptr },
        { "port", reinterpret_cast<getter>(DnssdServiceInstance_get_Port), reinterpret_cast<setter>(DnssdServiceInstance_put_Port), nullptr, nullptr },
        { "host_name", reinterpret_cast<getter>(DnssdServiceInstance_get_HostName), reinterpret_cast<setter>(DnssdServiceInstance_put_HostName), nullptr, nullptr },
        { "dnssd_service_instance_name", reinterpret_cast<getter>(DnssdServiceInstance_get_DnssdServiceInstanceName), reinterpret_cast<setter>(DnssdServiceInstance_put_DnssdServiceInstanceName), nullptr, nullptr },
        { "text_attributes", reinterpret_cast<getter>(DnssdServiceInstance_get_TextAttributes), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DnssdServiceInstance[] = 
    {
        { Py_tp_new, _new_DnssdServiceInstance },
        { Py_tp_dealloc, _dealloc_DnssdServiceInstance },
        { Py_tp_methods, _methods_DnssdServiceInstance },
        { Py_tp_getset, _getset_DnssdServiceInstance },
        { Py_tp_str, _str_DnssdServiceInstance },
        { },
    };

    static PyType_Spec _type_spec_DnssdServiceInstance =
    {
        "_winsdk_Windows_Networking_ServiceDiscovery_Dnssd.DnssdServiceInstance",
        sizeof(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DnssdServiceInstance
    };

    // ----- DnssdServiceInstanceCollection class --------------------
    constexpr const char* const _type_name_DnssdServiceInstanceCollection = "DnssdServiceInstanceCollection";

    static PyObject* _new_DnssdServiceInstanceCollection(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_DnssdServiceInstanceCollection);
        return nullptr;
    }

    static void _dealloc_DnssdServiceInstanceCollection(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* DnssdServiceInstanceCollection_First(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.First());
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

    static PyObject* DnssdServiceInstanceCollection_GetAt(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<uint32_t>(args, 0);

                return py::convert(self->obj.GetAt(param0));
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

    static PyObject* DnssdServiceInstanceCollection_GetMany(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<uint32_t>(args, 0);
                auto param1_count = py::convert_to<winrt::com_array<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>::size_type>(args, 1);
                winrt::com_array<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance> param1 ( param1_count, py::empty_instance<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>::get() );

                auto return_value = self->obj.GetMany(param0, param1);

                py::pyobj_handle out_return_value{ py::convert(return_value) };
                if (!out_return_value)
                {
                    return nullptr;
                }
                py::pyobj_handle out1{ py::convert(param1) };
                if (!out1)
                {
                    return nullptr;
                }
                return PyTuple_Pack(2, out_return_value.get(), out1.get());
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

    static PyObject* DnssdServiceInstanceCollection_IndexOf(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>(args, 0);
                uint32_t param1 {  };

                auto return_value = self->obj.IndexOf(param0, param1);

                py::pyobj_handle out_return_value{ py::convert(return_value) };
                if (!out_return_value)
                {
                    return nullptr;
                }
                py::pyobj_handle out1{ py::convert(param1) };
                if (!out1)
                {
                    return nullptr;
                }
                return PyTuple_Pack(2, out_return_value.get(), out1.get());
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

    static PyObject* DnssdServiceInstanceCollection_get_Size(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Size());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_DnssdServiceInstanceCollection(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _iterator_DnssdServiceInstanceCollection(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self) noexcept
    {
        try
        {
            return py::convert(self->obj.First());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static Py_ssize_t _seq_length_DnssdServiceInstanceCollection(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self) noexcept
    {
        try
        {
            return static_cast<Py_ssize_t>(self->obj.Size());
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* _seq_item_DnssdServiceInstanceCollection(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection* self, Py_ssize_t i) noexcept
    {
        try
        {
            return py::convert(self->obj.GetAt(static_cast<uint32_t>(i)));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DnssdServiceInstanceCollection[] = {
        { "first", reinterpret_cast<PyCFunction>(DnssdServiceInstanceCollection_First), METH_VARARGS, nullptr },
        { "get_at", reinterpret_cast<PyCFunction>(DnssdServiceInstanceCollection_GetAt), METH_VARARGS, nullptr },
        { "get_many", reinterpret_cast<PyCFunction>(DnssdServiceInstanceCollection_GetMany), METH_VARARGS, nullptr },
        { "index_of", reinterpret_cast<PyCFunction>(DnssdServiceInstanceCollection_IndexOf), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DnssdServiceInstanceCollection), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DnssdServiceInstanceCollection[] = {
        { "size", reinterpret_cast<getter>(DnssdServiceInstanceCollection_get_Size), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DnssdServiceInstanceCollection[] = 
    {
        { Py_tp_new, _new_DnssdServiceInstanceCollection },
        { Py_tp_dealloc, _dealloc_DnssdServiceInstanceCollection },
        { Py_tp_methods, _methods_DnssdServiceInstanceCollection },
        { Py_tp_getset, _getset_DnssdServiceInstanceCollection },
        { Py_tp_iter, _iterator_DnssdServiceInstanceCollection },
        { Py_sq_length, _seq_length_DnssdServiceInstanceCollection },
        { Py_sq_item, _seq_item_DnssdServiceInstanceCollection },
        { },
    };

    static PyType_Spec _type_spec_DnssdServiceInstanceCollection =
    {
        "_winsdk_Windows_Networking_ServiceDiscovery_Dnssd.DnssdServiceInstanceCollection",
        sizeof(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DnssdServiceInstanceCollection
    };

    // ----- DnssdServiceWatcher class --------------------
    constexpr const char* const _type_name_DnssdServiceWatcher = "DnssdServiceWatcher";

    static PyObject* _new_DnssdServiceWatcher(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_DnssdServiceWatcher);
        return nullptr;
    }

    static void _dealloc_DnssdServiceWatcher(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* DnssdServiceWatcher_Start(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.Start();
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

    static PyObject* DnssdServiceWatcher_Stop(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.Stop();
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

    static PyObject* DnssdServiceWatcher_get_Status(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, void* /*unused*/) noexcept
    {
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

    static PyObject* DnssdServiceWatcher_add_Added(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>>(arg);

            return py::convert(self->obj.Added(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DnssdServiceWatcher_remove_Added(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.Added(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DnssdServiceWatcher_add_EnumerationCompleted(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.EnumerationCompleted(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DnssdServiceWatcher_remove_EnumerationCompleted(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.EnumerationCompleted(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DnssdServiceWatcher_add_Stopped(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.Stopped(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DnssdServiceWatcher_remove_Stopped(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.Stopped(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_DnssdServiceWatcher(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DnssdServiceWatcher[] = {
        { "start", reinterpret_cast<PyCFunction>(DnssdServiceWatcher_Start), METH_VARARGS, nullptr },
        { "stop", reinterpret_cast<PyCFunction>(DnssdServiceWatcher_Stop), METH_VARARGS, nullptr },
        { "add_added", reinterpret_cast<PyCFunction>(DnssdServiceWatcher_add_Added), METH_O, nullptr },
        { "remove_added", reinterpret_cast<PyCFunction>(DnssdServiceWatcher_remove_Added), METH_O, nullptr },
        { "add_enumeration_completed", reinterpret_cast<PyCFunction>(DnssdServiceWatcher_add_EnumerationCompleted), METH_O, nullptr },
        { "remove_enumeration_completed", reinterpret_cast<PyCFunction>(DnssdServiceWatcher_remove_EnumerationCompleted), METH_O, nullptr },
        { "add_stopped", reinterpret_cast<PyCFunction>(DnssdServiceWatcher_add_Stopped), METH_O, nullptr },
        { "remove_stopped", reinterpret_cast<PyCFunction>(DnssdServiceWatcher_remove_Stopped), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DnssdServiceWatcher), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DnssdServiceWatcher[] = {
        { "status", reinterpret_cast<getter>(DnssdServiceWatcher_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DnssdServiceWatcher[] = 
    {
        { Py_tp_new, _new_DnssdServiceWatcher },
        { Py_tp_dealloc, _dealloc_DnssdServiceWatcher },
        { Py_tp_methods, _methods_DnssdServiceWatcher },
        { Py_tp_getset, _getset_DnssdServiceWatcher },
        { },
    };

    static PyType_Spec _type_spec_DnssdServiceWatcher =
    {
        "_winsdk_Windows_Networking_ServiceDiscovery_Dnssd.DnssdServiceWatcher",
        sizeof(py::wrapper::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DnssdServiceWatcher
    };

    // ----- Windows.Networking.ServiceDiscovery.Dnssd Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdRegistrationResult>::python_type = py::register_python_type(module, _type_name_DnssdRegistrationResult, &_type_spec_DnssdRegistrationResult, bases.get());
            py::winrt_type<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstance>::python_type = py::register_python_type(module, _type_name_DnssdServiceInstance, &_type_spec_DnssdServiceInstance, bases.get());
            py::winrt_type<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceInstanceCollection>::python_type = py::register_python_type(module, _type_name_DnssdServiceInstanceCollection, &_type_spec_DnssdServiceInstanceCollection, bases.get());
            py::winrt_type<winrt::Windows::Networking::ServiceDiscovery::Dnssd::DnssdServiceWatcher>::python_type = py::register_python_type(module, _type_name_DnssdServiceWatcher, &_type_spec_DnssdServiceWatcher, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Networking.ServiceDiscovery.Dnssd");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Networking_ServiceDiscovery_Dnssd",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Networking::ServiceDiscovery::Dnssd

PyMODINIT_FUNC
PyInit__winsdk_Windows_Networking_ServiceDiscovery_Dnssd (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Networking::ServiceDiscovery::Dnssd::module_def);
}
