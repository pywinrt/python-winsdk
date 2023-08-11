// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#include "pybase.h"
#include "py.Windows.Devices.Gpio.Provider.h"


namespace py::cpp::Windows::Devices::Gpio::Provider
{
    struct module_state
    {
        PyObject* type_ProviderGpioPinDriveMode;
        PyObject* type_ProviderGpioPinEdge;
        PyObject* type_ProviderGpioPinValue;
        PyObject* type_ProviderGpioSharingMode;
        PyTypeObject* type_GpioPinProviderValueChangedEventArgs;
        PyTypeObject* type_IGpioControllerProvider;
        PyTypeObject* type_IGpioPinProvider;
        PyTypeObject* type_IGpioProvider;
    };

    static PyObject* register_ProviderGpioPinDriveMode(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ProviderGpioPinDriveMode)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ProviderGpioPinDriveMode = type;
        Py_INCREF(state->type_ProviderGpioPinDriveMode);


        Py_RETURN_NONE;
    }

    static PyObject* register_ProviderGpioPinEdge(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ProviderGpioPinEdge)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ProviderGpioPinEdge = type;
        Py_INCREF(state->type_ProviderGpioPinEdge);


        Py_RETURN_NONE;
    }

    static PyObject* register_ProviderGpioPinValue(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ProviderGpioPinValue)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ProviderGpioPinValue = type;
        Py_INCREF(state->type_ProviderGpioPinValue);


        Py_RETURN_NONE;
    }

    static PyObject* register_ProviderGpioSharingMode(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_ProviderGpioSharingMode)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_ProviderGpioSharingMode = type;
        Py_INCREF(state->type_ProviderGpioSharingMode);


        Py_RETURN_NONE;
    }

    // ----- GpioPinProviderValueChangedEventArgs class --------------------
    static constexpr const char* const type_name_GpioPinProviderValueChangedEventArgs = "GpioPinProviderValueChangedEventArgs";

    static PyObject* _new_GpioPinProviderValueChangedEventArgs(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        auto arg_count = PyTuple_Size(args);
        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinEdge>(args, 0);

                winrt::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs instance{ param0 };
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

    static void _dealloc_GpioPinProviderValueChangedEventArgs(py::wrapper::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs* self) noexcept
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

    static PyObject* GpioPinProviderValueChangedEventArgs_get_Edge(py::wrapper::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs", L"Edge"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Edge());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_GpioPinProviderValueChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_GpioPinProviderValueChangedEventArgs(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_GpioPinProviderValueChangedEventArgs[] = {
        { "_assign_array_", _assign_array_GpioPinProviderValueChangedEventArgs, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_GpioPinProviderValueChangedEventArgs), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_GpioPinProviderValueChangedEventArgs[] = {
        { "edge", reinterpret_cast<getter>(GpioPinProviderValueChangedEventArgs_get_Edge), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_GpioPinProviderValueChangedEventArgs[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_GpioPinProviderValueChangedEventArgs) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_GpioPinProviderValueChangedEventArgs) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_GpioPinProviderValueChangedEventArgs) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_GpioPinProviderValueChangedEventArgs) },
        { },
    };

    static PyType_Spec type_spec_GpioPinProviderValueChangedEventArgs =
    {
        "_winsdk_Windows_Devices_Gpio_Provider.GpioPinProviderValueChangedEventArgs",
        sizeof(py::wrapper::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_GpioPinProviderValueChangedEventArgs
    };

    // ----- IGpioControllerProvider interface --------------------
    static constexpr const char* const type_name_IGpioControllerProvider = "IGpioControllerProvider";

    static PyObject* _new_IGpioControllerProvider(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */) noexcept
    {
        py::set_invalid_activation_error(type_name_IGpioControllerProvider);
        return nullptr;
    }

    static void _dealloc_IGpioControllerProvider(py::wrapper::Windows::Devices::Gpio::Provider::IGpioControllerProvider* self) noexcept
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

    static PyObject* IGpioControllerProvider_OpenPinProvider(py::wrapper::Windows::Devices::Gpio::Provider::IGpioControllerProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Gpio.Provider.IGpioControllerProvider", L"OpenPinProvider", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Devices::Gpio::Provider::ProviderGpioSharingMode>(args, 1);

                return py::convert(self->obj.OpenPinProvider(param0, param1));
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

    static PyObject* IGpioControllerProvider_get_PinCount(py::wrapper::Windows::Devices::Gpio::Provider::IGpioControllerProvider* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Gpio.Provider.IGpioControllerProvider", L"PinCount"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.PinCount());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_IGpioControllerProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_IGpioControllerProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IGpioControllerProvider[] = {
        { "open_pin_provider", reinterpret_cast<PyCFunction>(IGpioControllerProvider_OpenPinProvider), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_IGpioControllerProvider, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IGpioControllerProvider), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IGpioControllerProvider[] = {
        { "pin_count", reinterpret_cast<getter>(IGpioControllerProvider_get_PinCount), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_IGpioControllerProvider[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_IGpioControllerProvider) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_IGpioControllerProvider) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_IGpioControllerProvider) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_IGpioControllerProvider) },
        { },
    };

    static PyType_Spec type_spec_IGpioControllerProvider =
    {
        "_winsdk_Windows_Devices_Gpio_Provider.IGpioControllerProvider",
        sizeof(py::wrapper::Windows::Devices::Gpio::Provider::IGpioControllerProvider),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IGpioControllerProvider
    };

    // ----- IGpioPinProvider interface --------------------
    static constexpr const char* const type_name_IGpioPinProvider = "IGpioPinProvider";

    static PyObject* _new_IGpioPinProvider(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */) noexcept
    {
        py::set_invalid_activation_error(type_name_IGpioPinProvider);
        return nullptr;
    }

    static void _dealloc_IGpioPinProvider(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self) noexcept
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

    static PyObject* IGpioPinProvider_GetDriveMode(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"GetDriveMode", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.GetDriveMode());
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

    static PyObject* IGpioPinProvider_IsDriveModeSupported(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"IsDriveModeSupported", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>(args, 0);

                return py::convert(self->obj.IsDriveModeSupported(param0));
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

    static PyObject* IGpioPinProvider_Read(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"Read", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.Read());
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

    static PyObject* IGpioPinProvider_SetDriveMode(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"SetDriveMode", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>(args, 0);

                self->obj.SetDriveMode(param0);
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

    static PyObject* IGpioPinProvider_Write(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"Write", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinValue>(args, 0);

                self->obj.Write(param0);
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

    static PyObject* IGpioPinProvider_get_DebounceTimeout(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"DebounceTimeout"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.DebounceTimeout());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int IGpioPinProvider_put_DebounceTimeout(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"DebounceTimeout"))
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
            auto param0 = py::convert_to<winrt::Windows::Foundation::TimeSpan>(arg);

            self->obj.DebounceTimeout(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* IGpioPinProvider_get_PinNumber(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"PinNumber"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.PinNumber());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IGpioPinProvider_get_SharingMode(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"SharingMode"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.SharingMode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IGpioPinProvider_add_ValueChanged(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"ValueChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Gpio::Provider::IGpioPinProvider, winrt::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>>(arg);

            return py::convert(self->obj.ValueChanged(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* IGpioPinProvider_remove_ValueChanged(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider* self, PyObject* arg) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsEventPresent(L"Windows.Devices.Gpio.Provider.IGpioPinProvider", L"ValueChanged"))
        {
            PyErr_SetString(PyExc_AttributeError, "event is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.ValueChanged(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_IGpioPinProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Devices::Gpio::Provider::IGpioPinProvider>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_IGpioPinProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Gpio::Provider::IGpioPinProvider>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IGpioPinProvider[] = {
        { "get_drive_mode", reinterpret_cast<PyCFunction>(IGpioPinProvider_GetDriveMode), METH_VARARGS, nullptr },
        { "is_drive_mode_supported", reinterpret_cast<PyCFunction>(IGpioPinProvider_IsDriveModeSupported), METH_VARARGS, nullptr },
        { "read", reinterpret_cast<PyCFunction>(IGpioPinProvider_Read), METH_VARARGS, nullptr },
        { "set_drive_mode", reinterpret_cast<PyCFunction>(IGpioPinProvider_SetDriveMode), METH_VARARGS, nullptr },
        { "write", reinterpret_cast<PyCFunction>(IGpioPinProvider_Write), METH_VARARGS, nullptr },
        { "add_value_changed", reinterpret_cast<PyCFunction>(IGpioPinProvider_add_ValueChanged), METH_O, nullptr },
        { "remove_value_changed", reinterpret_cast<PyCFunction>(IGpioPinProvider_remove_ValueChanged), METH_O, nullptr },
        { "_assign_array_", _assign_array_IGpioPinProvider, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IGpioPinProvider), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IGpioPinProvider[] = {
        { "debounce_timeout", reinterpret_cast<getter>(IGpioPinProvider_get_DebounceTimeout), reinterpret_cast<setter>(IGpioPinProvider_put_DebounceTimeout), nullptr, nullptr },
        { "pin_number", reinterpret_cast<getter>(IGpioPinProvider_get_PinNumber), nullptr, nullptr, nullptr },
        { "sharing_mode", reinterpret_cast<getter>(IGpioPinProvider_get_SharingMode), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_IGpioPinProvider[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_IGpioPinProvider) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_IGpioPinProvider) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_IGpioPinProvider) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_IGpioPinProvider) },
        { },
    };

    static PyType_Spec type_spec_IGpioPinProvider =
    {
        "_winsdk_Windows_Devices_Gpio_Provider.IGpioPinProvider",
        sizeof(py::wrapper::Windows::Devices::Gpio::Provider::IGpioPinProvider),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IGpioPinProvider
    };

    // ----- IGpioProvider interface --------------------
    static constexpr const char* const type_name_IGpioProvider = "IGpioProvider";

    static PyObject* _new_IGpioProvider(PyTypeObject* /* unused */, PyObject* /* unused */, PyObject* /* unused */) noexcept
    {
        py::set_invalid_activation_error(type_name_IGpioProvider);
        return nullptr;
    }

    static void _dealloc_IGpioProvider(py::wrapper::Windows::Devices::Gpio::Provider::IGpioProvider* self) noexcept
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

    static PyObject* IGpioProvider_GetControllers(py::wrapper::Windows::Devices::Gpio::Provider::IGpioProvider* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Gpio.Provider.IGpioProvider", L"GetControllers", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.GetControllers());
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

    static PyObject* _assign_array_IGpioProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Devices::Gpio::Provider::IGpioProvider>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_IGpioProvider(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Gpio::Provider::IGpioProvider>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_IGpioProvider[] = {
        { "get_controllers", reinterpret_cast<PyCFunction>(IGpioProvider_GetControllers), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_IGpioProvider, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_IGpioProvider), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_IGpioProvider[] = {
        { }
    };

    static PyType_Slot _type_slots_IGpioProvider[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_IGpioProvider) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_IGpioProvider) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_IGpioProvider) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_IGpioProvider) },
        { },
    };

    static PyType_Spec type_spec_IGpioProvider =
    {
        "_winsdk_Windows_Devices_Gpio_Provider.IGpioProvider",
        sizeof(py::wrapper::Windows::Devices::Gpio::Provider::IGpioProvider),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_IGpioProvider
    };

    // ----- Windows.Devices.Gpio.Provider Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Gpio::Provider");

    static PyMethodDef module_methods[] = {
        {"_register_ProviderGpioPinDriveMode", register_ProviderGpioPinDriveMode, METH_O, "registers type"},
        {"_register_ProviderGpioPinEdge", register_ProviderGpioPinEdge, METH_O, "registers type"},
        {"_register_ProviderGpioPinValue", register_ProviderGpioPinValue, METH_O, "registers type"},
        {"_register_ProviderGpioSharingMode", register_ProviderGpioSharingMode, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_ProviderGpioPinDriveMode);
        Py_VISIT(state->type_ProviderGpioPinEdge);
        Py_VISIT(state->type_ProviderGpioPinValue);
        Py_VISIT(state->type_ProviderGpioSharingMode);
        Py_VISIT(state->type_GpioPinProviderValueChangedEventArgs);
        Py_VISIT(state->type_IGpioControllerProvider);
        Py_VISIT(state->type_IGpioPinProvider);
        Py_VISIT(state->type_IGpioProvider);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_ProviderGpioPinDriveMode);
        Py_CLEAR(state->type_ProviderGpioPinEdge);
        Py_CLEAR(state->type_ProviderGpioPinValue);
        Py_CLEAR(state->type_ProviderGpioSharingMode);
        Py_CLEAR(state->type_GpioPinProviderValueChangedEventArgs);
        Py_CLEAR(state->type_IGpioControllerProvider);
        Py_CLEAR(state->type_IGpioPinProvider);
        Py_CLEAR(state->type_IGpioProvider);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Gpio_Provider",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Gpio::Provider

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Gpio_Provider(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

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

    state->type_GpioPinProviderValueChangedEventArgs = py::register_python_type(module.get(), type_name_GpioPinProviderValueChangedEventArgs, &type_spec_GpioPinProviderValueChangedEventArgs, object_bases.get(), nullptr);
    if (!state->type_GpioPinProviderValueChangedEventArgs)
    {
        return nullptr;
    }

    state->type_IGpioControllerProvider = py::register_python_type(module.get(), type_name_IGpioControllerProvider, &type_spec_IGpioControllerProvider, object_bases.get(), nullptr);
    if (!state->type_IGpioControllerProvider)
    {
        return nullptr;
    }

    state->type_IGpioPinProvider = py::register_python_type(module.get(), type_name_IGpioPinProvider, &type_spec_IGpioPinProvider, object_bases.get(), nullptr);
    if (!state->type_IGpioPinProvider)
    {
        return nullptr;
    }

    state->type_IGpioProvider = py::register_python_type(module.get(), type_name_IGpioProvider, &type_spec_IGpioProvider, object_bases.get(), nullptr);
    if (!state->type_IGpioProvider)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Gpio::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ProviderGpioPinDriveMode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinEdge>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Gpio::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ProviderGpioPinEdge;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinEdge is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinValue>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Gpio::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ProviderGpioPinValue;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Gpio::Provider::ProviderGpioPinValue is not registered");
        return nullptr;
    }

    return python_type;
}

PyObject* py::py_type<winrt::Windows::Devices::Gpio::Provider::ProviderGpioSharingMode>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Gpio::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_ProviderGpioSharingMode;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Gpio::Provider::ProviderGpioSharingMode is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Gpio::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_GpioPinProviderValueChangedEventArgs;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Gpio::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IGpioControllerProvider;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Gpio::Provider::IGpioPinProvider>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Gpio::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IGpioPinProvider;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Gpio::Provider::IGpioPinProvider is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Gpio::Provider::IGpioProvider>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Gpio::Provider;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Gpio::Provider");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_IGpioProvider;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Gpio::Provider::IGpioProvider is not registered");
        return nullptr;
    }

    return python_type;
}
