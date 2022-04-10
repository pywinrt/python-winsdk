// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#include "pybase.h"
#include "py.Windows.ApplicationModel.DataTransfer.ShareTarget.h"

PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>::python_type;

namespace py::cpp::Windows::ApplicationModel::DataTransfer::ShareTarget
{
    // ----- QuickLink class --------------------
    constexpr const char* const _type_name_QuickLink = "QuickLink";

    static PyObject* _new_QuickLink(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
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
                winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink instance{  };
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

    static void _dealloc_QuickLink(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* QuickLink_get_Title(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Title());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int QuickLink_put_Title(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.Title(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* QuickLink_get_Thumbnail(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Thumbnail());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int QuickLink_put_Thumbnail(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Storage::Streams::RandomAccessStreamReference>(arg);

            self->obj.Thumbnail(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* QuickLink_get_Id(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Id());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int QuickLink_put_Id(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::hstring>(arg);

            self->obj.Id(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* QuickLink_get_SupportedDataFormats(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SupportedDataFormats());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* QuickLink_get_SupportedFileTypes(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.SupportedFileTypes());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_QuickLink(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_QuickLink[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_QuickLink), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_QuickLink[] = {
        { "title", reinterpret_cast<getter>(QuickLink_get_Title), reinterpret_cast<setter>(QuickLink_put_Title), nullptr, nullptr },
        { "thumbnail", reinterpret_cast<getter>(QuickLink_get_Thumbnail), reinterpret_cast<setter>(QuickLink_put_Thumbnail), nullptr, nullptr },
        { "id", reinterpret_cast<getter>(QuickLink_get_Id), reinterpret_cast<setter>(QuickLink_put_Id), nullptr, nullptr },
        { "supported_data_formats", reinterpret_cast<getter>(QuickLink_get_SupportedDataFormats), nullptr, nullptr, nullptr },
        { "supported_file_types", reinterpret_cast<getter>(QuickLink_get_SupportedFileTypes), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_QuickLink[] = 
    {
        { Py_tp_new, _new_QuickLink },
        { Py_tp_dealloc, _dealloc_QuickLink },
        { Py_tp_methods, _methods_QuickLink },
        { Py_tp_getset, _getset_QuickLink },
        { },
    };

    static PyType_Spec _type_spec_QuickLink =
    {
        "_winsdk_Windows_ApplicationModel_DataTransfer_ShareTarget.QuickLink",
        sizeof(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_QuickLink
    };

    // ----- ShareOperation class --------------------
    constexpr const char* const _type_name_ShareOperation = "ShareOperation";

    static PyObject* _new_ShareOperation(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_ShareOperation);
        return nullptr;
    }

    static void _dealloc_ShareOperation(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* ShareOperation_DismissUI(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.DismissUI();
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

    static PyObject* ShareOperation_RemoveThisQuickLink(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.RemoveThisQuickLink();
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

    static PyObject* ShareOperation_ReportCompleted(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.ReportCompleted();
                Py_RETURN_NONE;
            }
            catch (...)
            {
                py::to_PyErr();
                return nullptr;
            }
        }
        else if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>(args, 0);

                self->obj.ReportCompleted(param0);
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

    static PyObject* ShareOperation_ReportDataRetrieved(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.ReportDataRetrieved();
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

    static PyObject* ShareOperation_ReportError(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                self->obj.ReportError(param0);
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

    static PyObject* ShareOperation_ReportStarted(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.ReportStarted();
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

    static PyObject* ShareOperation_ReportSubmittedBackgroundTask(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                self->obj.ReportSubmittedBackgroundTask();
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

    static PyObject* ShareOperation_get_Data(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Data());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ShareOperation_get_QuickLinkId(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.QuickLinkId());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ShareOperation_get_Contacts(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Contacts());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_ShareOperation(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ShareOperation[] = {
        { "dismiss_u_i", reinterpret_cast<PyCFunction>(ShareOperation_DismissUI), METH_VARARGS, nullptr },
        { "remove_this_quick_link", reinterpret_cast<PyCFunction>(ShareOperation_RemoveThisQuickLink), METH_VARARGS, nullptr },
        { "report_completed", reinterpret_cast<PyCFunction>(ShareOperation_ReportCompleted), METH_VARARGS, nullptr },
        { "report_data_retrieved", reinterpret_cast<PyCFunction>(ShareOperation_ReportDataRetrieved), METH_VARARGS, nullptr },
        { "report_error", reinterpret_cast<PyCFunction>(ShareOperation_ReportError), METH_VARARGS, nullptr },
        { "report_started", reinterpret_cast<PyCFunction>(ShareOperation_ReportStarted), METH_VARARGS, nullptr },
        { "report_submitted_background_task", reinterpret_cast<PyCFunction>(ShareOperation_ReportSubmittedBackgroundTask), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_ShareOperation), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ShareOperation[] = {
        { "data", reinterpret_cast<getter>(ShareOperation_get_Data), nullptr, nullptr, nullptr },
        { "quick_link_id", reinterpret_cast<getter>(ShareOperation_get_QuickLinkId), nullptr, nullptr, nullptr },
        { "contacts", reinterpret_cast<getter>(ShareOperation_get_Contacts), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_ShareOperation[] = 
    {
        { Py_tp_new, _new_ShareOperation },
        { Py_tp_dealloc, _dealloc_ShareOperation },
        { Py_tp_methods, _methods_ShareOperation },
        { Py_tp_getset, _getset_ShareOperation },
        { },
    };

    static PyType_Spec _type_spec_ShareOperation =
    {
        "_winsdk_Windows_ApplicationModel_DataTransfer_ShareTarget.ShareOperation",
        sizeof(py::wrapper::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ShareOperation
    };

    // ----- Windows.ApplicationModel.DataTransfer.ShareTarget Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>::python_type = py::register_python_type(module, _type_name_QuickLink, &_type_spec_QuickLink, bases.get());
            py::winrt_type<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>::python_type = py::register_python_type(module, _type_name_ShareOperation, &_type_spec_ShareOperation, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.ApplicationModel.DataTransfer.ShareTarget");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_ApplicationModel_DataTransfer_ShareTarget",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::ApplicationModel::DataTransfer::ShareTarget

PyMODINIT_FUNC
PyInit__winsdk_Windows_ApplicationModel_DataTransfer_ShareTarget (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::ApplicationModel::DataTransfer::ShareTarget::module_def);
}
