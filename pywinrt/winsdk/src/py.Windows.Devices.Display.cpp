// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#include "pybase.h"
#include "py.Windows.Devices.Display.h"

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Display::DisplayMonitor>::python_type;

namespace py::cpp::Windows::Devices::Display
{
    // ----- DisplayMonitor class --------------------
    constexpr const char* const _type_name_DisplayMonitor = "DisplayMonitor";

    static PyObject* _new_DisplayMonitor(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_DisplayMonitor);
        return nullptr;
    }

    static void _dealloc_DisplayMonitor(py::wrapper::Windows::Devices::Display::DisplayMonitor* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* DisplayMonitor_FromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Display::DisplayMonitor::FromIdAsync(param0));
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

    static PyObject* DisplayMonitor_FromInterfaceIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                return py::convert(winrt::Windows::Devices::Display::DisplayMonitor::FromInterfaceIdAsync(param0));
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

    static PyObject* DisplayMonitor_GetDescriptor(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Display::DisplayMonitorDescriptorKind>(args, 0);

                return py::convert(self->obj.GetDescriptor(param0));
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

    static PyObject* DisplayMonitor_GetDeviceSelector(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Devices::Display::DisplayMonitor::GetDeviceSelector());
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

    static PyObject* DisplayMonitor_get_BluePrimary(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.BluePrimary());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_ConnectionKind(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ConnectionKind());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_DeviceId(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
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

    static PyObject* DisplayMonitor_get_DisplayAdapterDeviceId(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayAdapterDeviceId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_DisplayAdapterId(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayAdapterId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_DisplayAdapterTargetId(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayAdapterTargetId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_DisplayName(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DisplayName());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_GreenPrimary(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.GreenPrimary());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_MaxAverageFullFrameLuminanceInNits(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxAverageFullFrameLuminanceInNits());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_MaxLuminanceInNits(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxLuminanceInNits());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_MinLuminanceInNits(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MinLuminanceInNits());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_NativeResolutionInRawPixels(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.NativeResolutionInRawPixels());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_PhysicalConnector(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.PhysicalConnector());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_PhysicalSizeInInches(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.PhysicalSizeInInches());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_RawDpiX(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RawDpiX());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_RawDpiY(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RawDpiY());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_RedPrimary(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.RedPrimary());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_UsageKind(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UsageKind());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_WhitePoint(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.WhitePoint());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* DisplayMonitor_get_IsDolbyVisionSupportedInHdrMode(py::wrapper::Windows::Devices::Display::DisplayMonitor* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.IsDolbyVisionSupportedInHdrMode());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_DisplayMonitor(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Display::DisplayMonitor>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DisplayMonitor[] = {
        { "from_id_async", reinterpret_cast<PyCFunction>(DisplayMonitor_FromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "from_interface_id_async", reinterpret_cast<PyCFunction>(DisplayMonitor_FromInterfaceIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_descriptor", reinterpret_cast<PyCFunction>(DisplayMonitor_GetDescriptor), METH_VARARGS, nullptr },
        { "get_device_selector", reinterpret_cast<PyCFunction>(DisplayMonitor_GetDeviceSelector), METH_VARARGS | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DisplayMonitor), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DisplayMonitor[] = {
        { "blue_primary", reinterpret_cast<getter>(DisplayMonitor_get_BluePrimary), nullptr, nullptr, nullptr },
        { "connection_kind", reinterpret_cast<getter>(DisplayMonitor_get_ConnectionKind), nullptr, nullptr, nullptr },
        { "device_id", reinterpret_cast<getter>(DisplayMonitor_get_DeviceId), nullptr, nullptr, nullptr },
        { "display_adapter_device_id", reinterpret_cast<getter>(DisplayMonitor_get_DisplayAdapterDeviceId), nullptr, nullptr, nullptr },
        { "display_adapter_id", reinterpret_cast<getter>(DisplayMonitor_get_DisplayAdapterId), nullptr, nullptr, nullptr },
        { "display_adapter_target_id", reinterpret_cast<getter>(DisplayMonitor_get_DisplayAdapterTargetId), nullptr, nullptr, nullptr },
        { "display_name", reinterpret_cast<getter>(DisplayMonitor_get_DisplayName), nullptr, nullptr, nullptr },
        { "green_primary", reinterpret_cast<getter>(DisplayMonitor_get_GreenPrimary), nullptr, nullptr, nullptr },
        { "max_average_full_frame_luminance_in_nits", reinterpret_cast<getter>(DisplayMonitor_get_MaxAverageFullFrameLuminanceInNits), nullptr, nullptr, nullptr },
        { "max_luminance_in_nits", reinterpret_cast<getter>(DisplayMonitor_get_MaxLuminanceInNits), nullptr, nullptr, nullptr },
        { "min_luminance_in_nits", reinterpret_cast<getter>(DisplayMonitor_get_MinLuminanceInNits), nullptr, nullptr, nullptr },
        { "native_resolution_in_raw_pixels", reinterpret_cast<getter>(DisplayMonitor_get_NativeResolutionInRawPixels), nullptr, nullptr, nullptr },
        { "physical_connector", reinterpret_cast<getter>(DisplayMonitor_get_PhysicalConnector), nullptr, nullptr, nullptr },
        { "physical_size_in_inches", reinterpret_cast<getter>(DisplayMonitor_get_PhysicalSizeInInches), nullptr, nullptr, nullptr },
        { "raw_dpi_x", reinterpret_cast<getter>(DisplayMonitor_get_RawDpiX), nullptr, nullptr, nullptr },
        { "raw_dpi_y", reinterpret_cast<getter>(DisplayMonitor_get_RawDpiY), nullptr, nullptr, nullptr },
        { "red_primary", reinterpret_cast<getter>(DisplayMonitor_get_RedPrimary), nullptr, nullptr, nullptr },
        { "usage_kind", reinterpret_cast<getter>(DisplayMonitor_get_UsageKind), nullptr, nullptr, nullptr },
        { "white_point", reinterpret_cast<getter>(DisplayMonitor_get_WhitePoint), nullptr, nullptr, nullptr },
        { "is_dolby_vision_supported_in_hdr_mode", reinterpret_cast<getter>(DisplayMonitor_get_IsDolbyVisionSupportedInHdrMode), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DisplayMonitor[] = 
    {
        { Py_tp_new, _new_DisplayMonitor },
        { Py_tp_dealloc, _dealloc_DisplayMonitor },
        { Py_tp_methods, _methods_DisplayMonitor },
        { Py_tp_getset, _getset_DisplayMonitor },
        { },
    };

    static PyType_Spec _type_spec_DisplayMonitor =
    {
        "_winsdk_Windows_Devices_Display.DisplayMonitor",
        sizeof(py::wrapper::Windows::Devices::Display::DisplayMonitor),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DisplayMonitor
    };

    // ----- Windows.Devices.Display Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Devices::Display::DisplayMonitor>::python_type = py::register_python_type(module, _type_name_DisplayMonitor, &_type_spec_DisplayMonitor, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Devices.Display");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Display",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Devices::Display

PyMODINIT_FUNC
PyInit__winsdk_Windows_Devices_Display (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Devices::Display::module_def);
}
