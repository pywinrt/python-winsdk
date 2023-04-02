// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#include "pybase.h"
#include "py.Windows.Devices.Pwm.h"


namespace py::cpp::Windows::Devices::Pwm
{
    struct module_state
    {
        PyObject* type_PwmPulsePolarity;
        PyTypeObject* type_PwmController;
        PyTypeObject* type_PwmPin;
    };

    static PyObject* register_PwmPulsePolarity(PyObject* module, PyObject* type) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
        assert(state);

        if (state->type_PwmPulsePolarity)
        {
            PyErr_SetString(PyExc_RuntimeError, "type has already been registered");
            return nullptr;
        }

        if (!PyType_Check(type))
        {
            PyErr_SetString(PyExc_TypeError, "argument is not a type");
            return nullptr;
        }

        state->type_PwmPulsePolarity = type;
        Py_INCREF(state->type_PwmPulsePolarity);


        Py_RETURN_NONE;
    }

    // ----- PwmController class --------------------
    constexpr const char* const type_name_PwmController = "PwmController";

    static PyObject* _new_PwmController(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_PwmController);
        return nullptr;
    }

    static void _dealloc_PwmController(py::wrapper::Windows::Devices::Pwm::PwmController* self) noexcept
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

    static PyObject* PwmController_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmController", L"FromIdAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Pwm::PwmController::FromIdAsync(param0));
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

    static PyObject* PwmController_GetControllersAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmController", L"GetControllersAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Pwm::Provider::IPwmProvider>(args, 0);

                return py::convert(winrt::Windows::Devices::Pwm::PwmController::GetControllersAsync(param0));
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

    static PyObject* PwmController_GetDefaultAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmController", L"GetDefaultAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Devices::Pwm::PwmController::GetDefaultAsync());
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

    static PyObject* PwmController_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmController", L"GetDeviceSelector", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(winrt::Windows::Devices::Pwm::PwmController::GetDeviceSelector());
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmController", L"GetDeviceSelector", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Pwm::PwmController::GetDeviceSelector(param0));
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

    static PyObject* PwmController_OpenPin(py::wrapper::Windows::Devices::Pwm::PwmController* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmController", L"OpenPin", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<int32_t>(args, 0);

                return py::convert(self->obj.OpenPin(param0));
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

    static PyObject* PwmController_SetDesiredFrequency(py::wrapper::Windows::Devices::Pwm::PwmController* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmController", L"SetDesiredFrequency", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<double>(args, 0);

                return py::convert(self->obj.SetDesiredFrequency(param0));
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

    static PyObject* PwmController_get_ActualFrequency(py::wrapper::Windows::Devices::Pwm::PwmController* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Pwm.PwmController", L"ActualFrequency"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.ActualFrequency());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PwmController_get_MaxFrequency(py::wrapper::Windows::Devices::Pwm::PwmController* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Pwm.PwmController", L"MaxFrequency"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.MaxFrequency());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PwmController_get_MinFrequency(py::wrapper::Windows::Devices::Pwm::PwmController* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Pwm.PwmController", L"MinFrequency"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.MinFrequency());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PwmController_get_PinCount(py::wrapper::Windows::Devices::Pwm::PwmController* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Pwm.PwmController", L"PinCount"))
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

    static PyObject* _assign_array_PwmController(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Devices::Pwm::PwmController>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_PwmController(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Pwm::PwmController>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PwmController[] = {
        { "from_id_async", reinterpret_cast<PyCFunction>(PwmController_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_controllers_async", reinterpret_cast<PyCFunction>(PwmController_GetControllersAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_default_async", reinterpret_cast<PyCFunction>(PwmController_GetDefaultAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(PwmController_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "open_pin", reinterpret_cast<PyCFunction>(PwmController_OpenPin), METH_VARARGS, nullptr },
        { "set_desired_frequency", reinterpret_cast<PyCFunction>(PwmController_SetDesiredFrequency), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_PwmController, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PwmController), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PwmController[] = {
        { "actual_frequency", reinterpret_cast<getter>(PwmController_get_ActualFrequency), nullptr, nullptr, nullptr },
        { "max_frequency", reinterpret_cast<getter>(PwmController_get_MaxFrequency), nullptr, nullptr, nullptr },
        { "min_frequency", reinterpret_cast<getter>(PwmController_get_MinFrequency), nullptr, nullptr, nullptr },
        { "pin_count", reinterpret_cast<getter>(PwmController_get_PinCount), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PwmController[] = 
    {
        { Py_tp_new, _new_PwmController },
        { Py_tp_dealloc, _dealloc_PwmController },
        { Py_tp_methods, _methods_PwmController },
        { Py_tp_getset, _getset_PwmController },
        { },
    };

    static PyType_Spec type_spec_PwmController =
    {
        "_winsdk_Windows_Devices_Pwm.PwmController",
        sizeof(py::wrapper::Windows::Devices::Pwm::PwmController),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PwmController
    };

    // ----- PwmPin class --------------------
    constexpr const char* const type_name_PwmPin = "PwmPin";

    static PyObject* _new_PwmPin(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_PwmPin);
        return nullptr;
    }

    static void _dealloc_PwmPin(py::wrapper::Windows::Devices::Pwm::PwmPin* self) noexcept
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

    static PyObject* PwmPin_Close(py::wrapper::Windows::Devices::Pwm::PwmPin* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmPin", L"Close", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                self->obj.Close();
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

    static PyObject* PwmPin_GetActiveDutyCyclePercentage(py::wrapper::Windows::Devices::Pwm::PwmPin* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmPin", L"GetActiveDutyCyclePercentage", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

            try
            {
                return py::convert(self->obj.GetActiveDutyCyclePercentage());
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

    static PyObject* PwmPin_SetActiveDutyCyclePercentage(py::wrapper::Windows::Devices::Pwm::PwmPin* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmPin", L"SetActiveDutyCyclePercentage", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

            try
            {
                auto param0 = py::convert_to<double>(args, 0);

                self->obj.SetActiveDutyCyclePercentage(param0);
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

    static PyObject* PwmPin_Start(py::wrapper::Windows::Devices::Pwm::PwmPin* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmPin", L"Start", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

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

    static PyObject* PwmPin_Stop(py::wrapper::Windows::Devices::Pwm::PwmPin* self, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Devices.Pwm.PwmPin", L"Stop", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

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

    static PyObject* PwmPin_get_Polarity(py::wrapper::Windows::Devices::Pwm::PwmPin* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Pwm.PwmPin", L"Polarity"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Polarity());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int PwmPin_put_Polarity(py::wrapper::Windows::Devices::Pwm::PwmPin* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Pwm.PwmPin", L"Polarity"))
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
            auto param0 = py::convert_to<winrt::Windows::Devices::Pwm::PwmPulsePolarity>(arg);

            self->obj.Polarity(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* PwmPin_get_Controller(py::wrapper::Windows::Devices::Pwm::PwmPin* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Pwm.PwmPin", L"Controller"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.Controller());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PwmPin_get_IsStarted(py::wrapper::Windows::Devices::Pwm::PwmPin* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Devices.Pwm.PwmPin", L"IsStarted"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

        try
        {
            return py::convert(self->obj.IsStarted());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _assign_array_PwmPin(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Devices::Pwm::PwmPin>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
    }

    static PyObject* _from_PwmPin(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Pwm::PwmPin>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _enter_PwmPin(py::wrapper::Windows::Devices::Pwm::PwmPin* self) noexcept
    {
        Py_INCREF(self);
        return reinterpret_cast<PyObject*>(self);
    }

    static PyObject* _exit_PwmPin(py::wrapper::Windows::Devices::Pwm::PwmPin* self) noexcept
    {
        try
        {
            self->obj.Close();
            Py_RETURN_FALSE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PwmPin[] = {
        { "close", reinterpret_cast<PyCFunction>(PwmPin_Close), METH_VARARGS, nullptr },
        { "get_active_duty_cycle_percentage", reinterpret_cast<PyCFunction>(PwmPin_GetActiveDutyCyclePercentage), METH_VARARGS, nullptr },
        { "set_active_duty_cycle_percentage", reinterpret_cast<PyCFunction>(PwmPin_SetActiveDutyCyclePercentage), METH_VARARGS, nullptr },
        { "start", reinterpret_cast<PyCFunction>(PwmPin_Start), METH_VARARGS, nullptr },
        { "stop", reinterpret_cast<PyCFunction>(PwmPin_Stop), METH_VARARGS, nullptr },
        { "_assign_array_", _assign_array_PwmPin, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PwmPin), METH_O | METH_STATIC, nullptr },
        { "__enter__", reinterpret_cast<PyCFunction>(_enter_PwmPin), METH_NOARGS, nullptr },
        { "__exit__",  reinterpret_cast<PyCFunction>(_exit_PwmPin), METH_VARARGS, nullptr },
        { }
    };

    static PyGetSetDef _getset_PwmPin[] = {
        { "polarity", reinterpret_cast<getter>(PwmPin_get_Polarity), reinterpret_cast<setter>(PwmPin_put_Polarity), nullptr, nullptr },
        { "controller", reinterpret_cast<getter>(PwmPin_get_Controller), nullptr, nullptr, nullptr },
        { "is_started", reinterpret_cast<getter>(PwmPin_get_IsStarted), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PwmPin[] = 
    {
        { Py_tp_new, _new_PwmPin },
        { Py_tp_dealloc, _dealloc_PwmPin },
        { Py_tp_methods, _methods_PwmPin },
        { Py_tp_getset, _getset_PwmPin },
        { },
    };

    static PyType_Spec type_spec_PwmPin =
    {
        "_winsdk_Windows_Devices_Pwm.PwmPin",
        sizeof(py::wrapper::Windows::Devices::Pwm::PwmPin),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PwmPin
    };

    // ----- Windows.Devices.Pwm Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Devices::Pwm");

    static PyMethodDef module_methods[] = {
        {"_register_PwmPulsePolarity", register_PwmPulsePolarity, METH_O, "registers type"},
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_PwmPulsePolarity);
        Py_VISIT(state->type_PwmController);
        Py_VISIT(state->type_PwmPin);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_PwmPulsePolarity);
        Py_CLEAR(state->type_PwmController);
        Py_CLEAR(state->type_PwmPin);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Pwm",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Devices::Pwm

PyMODINIT_FUNC PyInit__winsdk_Windows_Devices_Pwm(void) noexcept
{
    using namespace py::cpp::Windows::Devices::Pwm;

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

    py::pyobj_handle bases{PyTuple_Pack(1, object_type)};

    if (!bases)
    {
        return nullptr;
    }

    py::pyobj_handle collections_abc_module{PyImport_ImportModule("collections.abc")};

    if (!collections_abc_module)
    {
        return nullptr;
    }

    py::pyobj_handle sequence_type{PyObject_GetAttrString(collections_abc_module.get(), "Sequence")};

    if (!sequence_type)
    {
        return nullptr;
    }

    py::pyobj_handle sequence_bases{PyTuple_Pack(2, object_type, sequence_type.get())};

    if (!sequence_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_sequence_type{PyObject_GetAttrString(collections_abc_module.get(), "MutableSequence")};

    if (!mutable_sequence_type)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_sequence_bases{PyTuple_Pack(2, object_type, mutable_sequence_type.get())};

    if (!mutable_sequence_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mapping_type{PyObject_GetAttrString(collections_abc_module.get(), "Mapping")};

    if (!mapping_type)
    {
        return nullptr;
    }

    py::pyobj_handle mapping_bases{PyTuple_Pack(2, object_type, mapping_type.get())};

    if (!mapping_bases)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_mapping_type{PyObject_GetAttrString(collections_abc_module.get(), "MutableMapping")};

    if (!mutable_mapping_type)
    {
        return nullptr;
    }

    py::pyobj_handle mutable_mapping_bases{PyTuple_Pack(2, object_type, mutable_mapping_type.get())};

    if (!mutable_mapping_bases)
    {
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module.get()));
    assert(state);

    state->type_PwmController = py::register_python_type(module.get(), type_name_PwmController, &type_spec_PwmController, bases.get(), nullptr);
    if (!state->type_PwmController)
    {
        return nullptr;
    }

    state->type_PwmPin = py::register_python_type(module.get(), type_name_PwmPin, &type_spec_PwmPin, bases.get(), nullptr);
    if (!state->type_PwmPin)
    {
        return nullptr;
    }


    return module.detach();
}

PyObject* py::py_type<winrt::Windows::Devices::Pwm::PwmPulsePolarity>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Pwm;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Pwm");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PwmPulsePolarity;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Pwm::PwmPulsePolarity is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Pwm::PwmController>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Pwm;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Pwm");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PwmController;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Pwm::PwmController is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Pwm::PwmPin>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Devices::Pwm;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Devices::Pwm");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_PwmPin;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Devices::Pwm::PwmPin is not registered");
        return nullptr;
    }

    return python_type;
}
