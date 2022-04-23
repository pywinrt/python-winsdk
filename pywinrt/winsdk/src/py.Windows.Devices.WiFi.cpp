// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#include "pybase.h"
#include "py.Windows.Devices.WiFi.h"

PyTypeObject* py::winrt_type<winrt::Windows::Devices::WiFi::WiFiAdapter>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::WiFi::WiFiConnectionResult>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::WiFi::WiFiNetworkReport>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult>::python_type;

namespace py::cpp::Windows::Devices::WiFi
{
    // ----- WiFiAdapter class --------------------
    constexpr const char* const _type_name_WiFiAdapter = "WiFiAdapter";

    static PyObject* _new_WiFiAdapter(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_WiFiAdapter);
        return nullptr;
    }

    static void _dealloc_WiFiAdapter(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* WiFiAdapter_ConnectAsync(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiReconnectionKind>(args, 1);

                return py::convert(self->obj.ConnectAsync(param0, param1));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiReconnectionKind>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Security::Credentials::PasswordCredential>(args, 2);

                return py::convert(self->obj.ConnectAsync(param0, param1, param2));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 4)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiReconnectionKind>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Security::Credentials::PasswordCredential>(args, 2);
                auto param3 = py::convert_to<winrt::hstring>(args, 3);

                return py::convert(self->obj.ConnectAsync(param0, param1, param2, param3));
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 5)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiReconnectionKind>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Security::Credentials::PasswordCredential>(args, 2);
                auto param3 = py::convert_to<winrt::hstring>(args, 3);
                auto param4 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiConnectionMethod>(args, 4);

                return py::convert(self->obj.ConnectAsync(param0, param1, param2, param3, param4));
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

    static PyObject* WiFiAdapter_Disconnect(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.Disconnect();
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

    static PyObject* WiFiAdapter_FindAllAdaptersAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::WiFi::WiFiAdapter::FindAllAdaptersAsync());
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

    static PyObject* WiFiAdapter_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::WiFi::WiFiAdapter::FromIdAsync(param0));
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

    static PyObject* WiFiAdapter_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::WiFi::WiFiAdapter::GetDeviceSelector());
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

    static PyObject* WiFiAdapter_GetWpsConfigurationAsync(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>(args, 0);

                return py::convert(self->obj.GetWpsConfigurationAsync(param0));
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

    static PyObject* WiFiAdapter_RequestAccessAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::WiFi::WiFiAdapter::RequestAccessAsync());
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

    static PyObject* WiFiAdapter_ScanAsync(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.ScanAsync());
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

    static PyObject* WiFiAdapter_get_NetworkAdapter(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.NetworkAdapter());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAdapter_get_NetworkReport(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.NetworkReport());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAdapter_add_AvailableNetworksChanged(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::WiFi::WiFiAdapter, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.AvailableNetworksChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAdapter_remove_AvailableNetworksChanged(py::wrapper::Windows::Devices::WiFi::WiFiAdapter* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.AvailableNetworksChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_WiFiAdapter(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::WiFi::WiFiAdapter>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WiFiAdapter[] = {
        { "connect_async", reinterpret_cast<PyCFunction>(WiFiAdapter_ConnectAsync), METH_VARARGS, nullptr },
        { "disconnect", reinterpret_cast<PyCFunction>(WiFiAdapter_Disconnect), METH_VARARGS, nullptr },
        { "find_all_adapters_async", reinterpret_cast<PyCFunction>(WiFiAdapter_FindAllAdaptersAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "from_id_async", reinterpret_cast<PyCFunction>(WiFiAdapter_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(WiFiAdapter_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "get_wps_configuration_async", reinterpret_cast<PyCFunction>(WiFiAdapter_GetWpsConfigurationAsync), METH_VARARGS, nullptr },
        { "request_access_async", reinterpret_cast<PyCFunction>(WiFiAdapter_RequestAccessAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "scan_async", reinterpret_cast<PyCFunction>(WiFiAdapter_ScanAsync), METH_VARARGS, nullptr },
        { "add_available_networks_changed", reinterpret_cast<PyCFunction>(WiFiAdapter_add_AvailableNetworksChanged), METH_O, nullptr },
        { "remove_available_networks_changed", reinterpret_cast<PyCFunction>(WiFiAdapter_remove_AvailableNetworksChanged), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_WiFiAdapter), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WiFiAdapter[] = {
        { "network_adapter", reinterpret_cast<getter>(WiFiAdapter_get_NetworkAdapter), nullptr, nullptr, nullptr },
        { "network_report", reinterpret_cast<getter>(WiFiAdapter_get_NetworkReport), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_WiFiAdapter[] = 
    {
        { Py_tp_new, _new_WiFiAdapter },
        { Py_tp_dealloc, _dealloc_WiFiAdapter },
        { Py_tp_methods, _methods_WiFiAdapter },
        { Py_tp_getset, _getset_WiFiAdapter },
        { },
    };

    static PyType_Spec _type_spec_WiFiAdapter =
    {
        "_winsdk_Windows_Devices_WiFi.WiFiAdapter",
        sizeof(py::wrapper::Windows::Devices::WiFi::WiFiAdapter),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WiFiAdapter
    };

    // ----- WiFiAvailableNetwork class --------------------
    constexpr const char* const _type_name_WiFiAvailableNetwork = "WiFiAvailableNetwork";

    static PyObject* _new_WiFiAvailableNetwork(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_WiFiAvailableNetwork);
        return nullptr;
    }

    static void _dealloc_WiFiAvailableNetwork(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* WiFiAvailableNetwork_get_BeaconInterval(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.BeaconInterval());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_Bssid(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Bssid());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_ChannelCenterFrequencyInKilohertz(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ChannelCenterFrequencyInKilohertz());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_IsWiFiDirect(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.IsWiFiDirect());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_NetworkKind(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.NetworkKind());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_NetworkRssiInDecibelMilliwatts(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.NetworkRssiInDecibelMilliwatts());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_PhyKind(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.PhyKind());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_SecuritySettings(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SecuritySettings());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_SignalBars(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SignalBars());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_Ssid(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Ssid());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiAvailableNetwork_get_Uptime(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Uptime());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_WiFiAvailableNetwork(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WiFiAvailableNetwork[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_WiFiAvailableNetwork), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WiFiAvailableNetwork[] = {
        { "beacon_interval", reinterpret_cast<getter>(WiFiAvailableNetwork_get_BeaconInterval), nullptr, nullptr, nullptr },
        { "bssid", reinterpret_cast<getter>(WiFiAvailableNetwork_get_Bssid), nullptr, nullptr, nullptr },
        { "channel_center_frequency_in_kilohertz", reinterpret_cast<getter>(WiFiAvailableNetwork_get_ChannelCenterFrequencyInKilohertz), nullptr, nullptr, nullptr },
        { "is_wi_fi_direct", reinterpret_cast<getter>(WiFiAvailableNetwork_get_IsWiFiDirect), nullptr, nullptr, nullptr },
        { "network_kind", reinterpret_cast<getter>(WiFiAvailableNetwork_get_NetworkKind), nullptr, nullptr, nullptr },
        { "network_rssi_in_decibel_milliwatts", reinterpret_cast<getter>(WiFiAvailableNetwork_get_NetworkRssiInDecibelMilliwatts), nullptr, nullptr, nullptr },
        { "phy_kind", reinterpret_cast<getter>(WiFiAvailableNetwork_get_PhyKind), nullptr, nullptr, nullptr },
        { "security_settings", reinterpret_cast<getter>(WiFiAvailableNetwork_get_SecuritySettings), nullptr, nullptr, nullptr },
        { "signal_bars", reinterpret_cast<getter>(WiFiAvailableNetwork_get_SignalBars), nullptr, nullptr, nullptr },
        { "ssid", reinterpret_cast<getter>(WiFiAvailableNetwork_get_Ssid), nullptr, nullptr, nullptr },
        { "uptime", reinterpret_cast<getter>(WiFiAvailableNetwork_get_Uptime), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_WiFiAvailableNetwork[] = 
    {
        { Py_tp_new, _new_WiFiAvailableNetwork },
        { Py_tp_dealloc, _dealloc_WiFiAvailableNetwork },
        { Py_tp_methods, _methods_WiFiAvailableNetwork },
        { Py_tp_getset, _getset_WiFiAvailableNetwork },
        { },
    };

    static PyType_Spec _type_spec_WiFiAvailableNetwork =
    {
        "_winsdk_Windows_Devices_WiFi.WiFiAvailableNetwork",
        sizeof(py::wrapper::Windows::Devices::WiFi::WiFiAvailableNetwork),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WiFiAvailableNetwork
    };

    // ----- WiFiConnectionResult class --------------------
    constexpr const char* const _type_name_WiFiConnectionResult = "WiFiConnectionResult";

    static PyObject* _new_WiFiConnectionResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_WiFiConnectionResult);
        return nullptr;
    }

    static void _dealloc_WiFiConnectionResult(py::wrapper::Windows::Devices::WiFi::WiFiConnectionResult* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* WiFiConnectionResult_get_ConnectionStatus(py::wrapper::Windows::Devices::WiFi::WiFiConnectionResult* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ConnectionStatus());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_WiFiConnectionResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::WiFi::WiFiConnectionResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WiFiConnectionResult[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_WiFiConnectionResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WiFiConnectionResult[] = {
        { "connection_status", reinterpret_cast<getter>(WiFiConnectionResult_get_ConnectionStatus), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_WiFiConnectionResult[] = 
    {
        { Py_tp_new, _new_WiFiConnectionResult },
        { Py_tp_dealloc, _dealloc_WiFiConnectionResult },
        { Py_tp_methods, _methods_WiFiConnectionResult },
        { Py_tp_getset, _getset_WiFiConnectionResult },
        { },
    };

    static PyType_Spec _type_spec_WiFiConnectionResult =
    {
        "_winsdk_Windows_Devices_WiFi.WiFiConnectionResult",
        sizeof(py::wrapper::Windows::Devices::WiFi::WiFiConnectionResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WiFiConnectionResult
    };

    // ----- WiFiNetworkReport class --------------------
    constexpr const char* const _type_name_WiFiNetworkReport = "WiFiNetworkReport";

    static PyObject* _new_WiFiNetworkReport(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_WiFiNetworkReport);
        return nullptr;
    }

    static void _dealloc_WiFiNetworkReport(py::wrapper::Windows::Devices::WiFi::WiFiNetworkReport* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* WiFiNetworkReport_get_AvailableNetworks(py::wrapper::Windows::Devices::WiFi::WiFiNetworkReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.AvailableNetworks());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* WiFiNetworkReport_get_Timestamp(py::wrapper::Windows::Devices::WiFi::WiFiNetworkReport* self, void* /*unused*/) noexcept
    {
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

    static PyObject* _from_WiFiNetworkReport(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::WiFi::WiFiNetworkReport>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WiFiNetworkReport[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_WiFiNetworkReport), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WiFiNetworkReport[] = {
        { "available_networks", reinterpret_cast<getter>(WiFiNetworkReport_get_AvailableNetworks), nullptr, nullptr, nullptr },
        { "timestamp", reinterpret_cast<getter>(WiFiNetworkReport_get_Timestamp), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_WiFiNetworkReport[] = 
    {
        { Py_tp_new, _new_WiFiNetworkReport },
        { Py_tp_dealloc, _dealloc_WiFiNetworkReport },
        { Py_tp_methods, _methods_WiFiNetworkReport },
        { Py_tp_getset, _getset_WiFiNetworkReport },
        { },
    };

    static PyType_Spec _type_spec_WiFiNetworkReport =
    {
        "_winsdk_Windows_Devices_WiFi.WiFiNetworkReport",
        sizeof(py::wrapper::Windows::Devices::WiFi::WiFiNetworkReport),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WiFiNetworkReport
    };

    // ----- WiFiWpsConfigurationResult class --------------------
    constexpr const char* const _type_name_WiFiWpsConfigurationResult = "WiFiWpsConfigurationResult";

    static PyObject* _new_WiFiWpsConfigurationResult(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_WiFiWpsConfigurationResult);
        return nullptr;
    }

    static void _dealloc_WiFiWpsConfigurationResult(py::wrapper::Windows::Devices::WiFi::WiFiWpsConfigurationResult* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* WiFiWpsConfigurationResult_get_Status(py::wrapper::Windows::Devices::WiFi::WiFiWpsConfigurationResult* self, void* /*unused*/) noexcept
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

    static PyObject* WiFiWpsConfigurationResult_get_SupportedWpsKinds(py::wrapper::Windows::Devices::WiFi::WiFiWpsConfigurationResult* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SupportedWpsKinds());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_WiFiWpsConfigurationResult(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_WiFiWpsConfigurationResult[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_WiFiWpsConfigurationResult), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_WiFiWpsConfigurationResult[] = {
        { "status", reinterpret_cast<getter>(WiFiWpsConfigurationResult_get_Status), nullptr, nullptr, nullptr },
        { "supported_wps_kinds", reinterpret_cast<getter>(WiFiWpsConfigurationResult_get_SupportedWpsKinds), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_WiFiWpsConfigurationResult[] = 
    {
        { Py_tp_new, _new_WiFiWpsConfigurationResult },
        { Py_tp_dealloc, _dealloc_WiFiWpsConfigurationResult },
        { Py_tp_methods, _methods_WiFiWpsConfigurationResult },
        { Py_tp_getset, _getset_WiFiWpsConfigurationResult },
        { },
    };

    static PyType_Spec _type_spec_WiFiWpsConfigurationResult =
    {
        "_winsdk_Windows_Devices_WiFi.WiFiWpsConfigurationResult",
        sizeof(py::wrapper::Windows::Devices::WiFi::WiFiWpsConfigurationResult),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_WiFiWpsConfigurationResult
    };

    // ----- Windows.Devices.WiFi Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Devices::WiFi::WiFiAdapter>::python_type = py::register_python_type(module, _type_name_WiFiAdapter, &_type_spec_WiFiAdapter, bases.get());
            py::winrt_type<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>::python_type = py::register_python_type(module, _type_name_WiFiAvailableNetwork, &_type_spec_WiFiAvailableNetwork, bases.get());
            py::winrt_type<winrt::Windows::Devices::WiFi::WiFiConnectionResult>::python_type = py::register_python_type(module, _type_name_WiFiConnectionResult, &_type_spec_WiFiConnectionResult, bases.get());
            py::winrt_type<winrt::Windows::Devices::WiFi::WiFiNetworkReport>::python_type = py::register_python_type(module, _type_name_WiFiNetworkReport, &_type_spec_WiFiNetworkReport, bases.get());
            py::winrt_type<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult>::python_type = py::register_python_type(module, _type_name_WiFiWpsConfigurationResult, &_type_spec_WiFiWpsConfigurationResult, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Devices.WiFi");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_WiFi",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Devices::WiFi

PyMODINIT_FUNC
PyInit__winsdk_Windows_Devices_WiFi (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Devices::WiFi::module_def);
}
