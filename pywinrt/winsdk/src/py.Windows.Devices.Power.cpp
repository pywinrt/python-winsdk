// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#include "pybase.h"
#include "py.Windows.Devices.Power.h"

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Power::Battery>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Power::BatteryReport>::python_type;

namespace py::cpp::Windows::Devices::Power
{
    // ----- Battery class --------------------
    constexpr const char* const _type_name_Battery = "Battery";

    static PyObject* _new_Battery(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_Battery);
        return nullptr;
    }

    static void _dealloc_Battery(py::wrapper::Windows::Devices::Power::Battery* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* Battery_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Power::Battery::FromIdAsync(param0));
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

    static PyObject* Battery_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::Power::Battery::GetDeviceSelector());
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

    static PyObject* Battery_GetReport(py::wrapper::Windows::Devices::Power::Battery* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(self->obj.GetReport());
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

    static PyObject* Battery_get_DeviceId(py::wrapper::Windows::Devices::Power::Battery* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DeviceId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* Battery_get_AggregateBattery(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Devices::Power::Battery::AggregateBattery());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* Battery_add_ReportUpdated(py::wrapper::Windows::Devices::Power::Battery* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Power::Battery, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.ReportUpdated(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* Battery_remove_ReportUpdated(py::wrapper::Windows::Devices::Power::Battery* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.ReportUpdated(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_Battery(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Power::Battery>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_Battery[] = {
        { "from_id_async", reinterpret_cast<PyCFunction>(Battery_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(Battery_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "get_report", reinterpret_cast<PyCFunction>(Battery_GetReport), METH_VARARGS, nullptr },
        { "get_aggregate_battery", reinterpret_cast<PyCFunction>(Battery_get_AggregateBattery), METH_NOARGS | METH_STATIC, nullptr },
        { "add_report_updated", reinterpret_cast<PyCFunction>(Battery_add_ReportUpdated), METH_O, nullptr },
        { "remove_report_updated", reinterpret_cast<PyCFunction>(Battery_remove_ReportUpdated), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_Battery), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_Battery[] = {
        { "device_id", reinterpret_cast<getter>(Battery_get_DeviceId), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_Battery[] = 
    {
        { Py_tp_new, _new_Battery },
        { Py_tp_dealloc, _dealloc_Battery },
        { Py_tp_methods, _methods_Battery },
        { Py_tp_getset, _getset_Battery },
        { },
    };

    static PyType_Spec _type_spec_Battery =
    {
        "_winsdk_Windows_Devices_Power.Battery",
        sizeof(py::wrapper::Windows::Devices::Power::Battery),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_Battery
    };

    // ----- BatteryReport class --------------------
    constexpr const char* const _type_name_BatteryReport = "BatteryReport";

    static PyObject* _new_BatteryReport(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_BatteryReport);
        return nullptr;
    }

    static void _dealloc_BatteryReport(py::wrapper::Windows::Devices::Power::BatteryReport* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* BatteryReport_get_ChargeRateInMilliwatts(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ChargeRateInMilliwatts());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BatteryReport_get_DesignCapacityInMilliwattHours(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DesignCapacityInMilliwattHours());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BatteryReport_get_FullChargeCapacityInMilliwattHours(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.FullChargeCapacityInMilliwattHours());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BatteryReport_get_RemainingCapacityInMilliwattHours(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RemainingCapacityInMilliwattHours());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* BatteryReport_get_Status(py::wrapper::Windows::Devices::Power::BatteryReport* self, void* /*unused*/) noexcept
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

    static PyObject* _from_BatteryReport(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Power::BatteryReport>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_BatteryReport[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_BatteryReport), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_BatteryReport[] = {
        { "charge_rate_in_milliwatts", reinterpret_cast<getter>(BatteryReport_get_ChargeRateInMilliwatts), nullptr, nullptr, nullptr },
        { "design_capacity_in_milliwatt_hours", reinterpret_cast<getter>(BatteryReport_get_DesignCapacityInMilliwattHours), nullptr, nullptr, nullptr },
        { "full_charge_capacity_in_milliwatt_hours", reinterpret_cast<getter>(BatteryReport_get_FullChargeCapacityInMilliwattHours), nullptr, nullptr, nullptr },
        { "remaining_capacity_in_milliwatt_hours", reinterpret_cast<getter>(BatteryReport_get_RemainingCapacityInMilliwattHours), nullptr, nullptr, nullptr },
        { "status", reinterpret_cast<getter>(BatteryReport_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_BatteryReport[] = 
    {
        { Py_tp_new, _new_BatteryReport },
        { Py_tp_dealloc, _dealloc_BatteryReport },
        { Py_tp_methods, _methods_BatteryReport },
        { Py_tp_getset, _getset_BatteryReport },
        { },
    };

    static PyType_Spec _type_spec_BatteryReport =
    {
        "_winsdk_Windows_Devices_Power.BatteryReport",
        sizeof(py::wrapper::Windows::Devices::Power::BatteryReport),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_BatteryReport
    };

    // ----- Windows.Devices.Power Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Devices::Power::Battery>::python_type = py::register_python_type(module, _type_name_Battery, &_type_spec_Battery, bases.get());
            py::winrt_type<winrt::Windows::Devices::Power::BatteryReport>::python_type = py::register_python_type(module, _type_name_BatteryReport, &_type_spec_BatteryReport, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Devices.Power");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Power",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Devices::Power

PyMODINIT_FUNC
PyInit__winsdk_Windows_Devices_Power (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Devices::Power::module_def);
}
