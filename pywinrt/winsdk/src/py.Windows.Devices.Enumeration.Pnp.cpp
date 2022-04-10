// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#include "pybase.h"
#include "py.Windows.Devices.Enumeration.Pnp.h"

PyTypeObject* py::winrt_type<winrt::Windows::Devices::Enumeration::Pnp::PnpObject>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectCollection>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>::python_type;

namespace py::cpp::Windows::Devices::Enumeration::Pnp
{
    // ----- PnpObject class --------------------
    constexpr const char* const _type_name_PnpObject = "PnpObject";

    static PyObject* _new_PnpObject(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_PnpObject);
        return nullptr;
    }

    static void _dealloc_PnpObject(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObject* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* PnpObject_CreateFromIdAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 3)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType>(args, 0);
                auto param1 = py::convert_to<winrt::hstring>(args, 1);
                auto param2 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 2);

                return py::convert(winrt::Windows::Devices::Enumeration::Pnp::PnpObject::CreateFromIdAsync(param0, param1, param2));
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

    static PyObject* PnpObject_CreateWatcher(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 1);

                return py::convert(winrt::Windows::Devices::Enumeration::Pnp::PnpObject::CreateWatcher(param0, param1));
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
                auto param0 = py::convert_to<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 1);
                auto param2 = py::convert_to<winrt::hstring>(args, 2);

                return py::convert(winrt::Windows::Devices::Enumeration::Pnp::PnpObject::CreateWatcher(param0, param1, param2));
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

    static PyObject* PnpObject_FindAllAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 1);

                return py::convert(winrt::Windows::Devices::Enumeration::Pnp::PnpObject::FindAllAsync(param0, param1));
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
                auto param0 = py::convert_to<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectType>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Foundation::Collections::IIterable<winrt::hstring>>(args, 1);
                auto param2 = py::convert_to<winrt::hstring>(args, 2);

                return py::convert(winrt::Windows::Devices::Enumeration::Pnp::PnpObject::FindAllAsync(param0, param1, param2));
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

    static PyObject* PnpObject_Update(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObject* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>(args, 0);

                self->obj.Update(param0);
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

    static PyObject* PnpObject_get_Id(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObject* self, void* /*unused*/) noexcept
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

    static PyObject* PnpObject_get_Properties(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObject* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Properties());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PnpObject_get_Type(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObject* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Type());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_PnpObject(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Enumeration::Pnp::PnpObject>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PnpObject[] = {
        { "create_from_id_async", reinterpret_cast<PyCFunction>(PnpObject_CreateFromIdAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "create_watcher", reinterpret_cast<PyCFunction>(PnpObject_CreateWatcher), METH_VARARGS | METH_STATIC, nullptr },
        { "find_all_async", reinterpret_cast<PyCFunction>(PnpObject_FindAllAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "update", reinterpret_cast<PyCFunction>(PnpObject_Update), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PnpObject), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PnpObject[] = {
        { "id", reinterpret_cast<getter>(PnpObject_get_Id), nullptr, nullptr, nullptr },
        { "properties", reinterpret_cast<getter>(PnpObject_get_Properties), nullptr, nullptr, nullptr },
        { "type", reinterpret_cast<getter>(PnpObject_get_Type), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PnpObject[] = 
    {
        { Py_tp_new, _new_PnpObject },
        { Py_tp_dealloc, _dealloc_PnpObject },
        { Py_tp_methods, _methods_PnpObject },
        { Py_tp_getset, _getset_PnpObject },
        { },
    };

    static PyType_Spec _type_spec_PnpObject =
    {
        "_winsdk_Windows_Devices_Enumeration_Pnp.PnpObject",
        sizeof(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObject),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PnpObject
    };

    // ----- PnpObjectCollection class --------------------
    constexpr const char* const _type_name_PnpObjectCollection = "PnpObjectCollection";

    static PyObject* _new_PnpObjectCollection(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_PnpObjectCollection);
        return nullptr;
    }

    static void _dealloc_PnpObjectCollection(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* PnpObjectCollection_First(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self, PyObject* args) noexcept
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

    static PyObject* PnpObjectCollection_GetAt(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self, PyObject* args) noexcept
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

    static PyObject* PnpObjectCollection_GetMany(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 2)
        {
            try
            {
                auto param0 = py::convert_to<uint32_t>(args, 0);
                auto param1_count = py::convert_to<winrt::com_array<winrt::Windows::Devices::Enumeration::Pnp::PnpObject>::size_type>(args, 1);
                winrt::com_array<winrt::Windows::Devices::Enumeration::Pnp::PnpObject> param1 ( param1_count, py::empty_instance<winrt::Windows::Devices::Enumeration::Pnp::PnpObject>::get() );

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

    static PyObject* PnpObjectCollection_IndexOf(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Devices::Enumeration::Pnp::PnpObject>(args, 0);
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

    static PyObject* PnpObjectCollection_get_Size(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self, void* /*unused*/) noexcept
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

    static PyObject* _from_PnpObjectCollection(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectCollection>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _iterator_PnpObjectCollection(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self) noexcept
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

    static Py_ssize_t _seq_length_PnpObjectCollection(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self) noexcept
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

    static PyObject* _seq_item_PnpObjectCollection(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection* self, Py_ssize_t i) noexcept
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

    static PyMethodDef _methods_PnpObjectCollection[] = {
        { "first", reinterpret_cast<PyCFunction>(PnpObjectCollection_First), METH_VARARGS, nullptr },
        { "get_at", reinterpret_cast<PyCFunction>(PnpObjectCollection_GetAt), METH_VARARGS, nullptr },
        { "get_many", reinterpret_cast<PyCFunction>(PnpObjectCollection_GetMany), METH_VARARGS, nullptr },
        { "index_of", reinterpret_cast<PyCFunction>(PnpObjectCollection_IndexOf), METH_VARARGS, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PnpObjectCollection), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PnpObjectCollection[] = {
        { "size", reinterpret_cast<getter>(PnpObjectCollection_get_Size), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PnpObjectCollection[] = 
    {
        { Py_tp_new, _new_PnpObjectCollection },
        { Py_tp_dealloc, _dealloc_PnpObjectCollection },
        { Py_tp_methods, _methods_PnpObjectCollection },
        { Py_tp_getset, _getset_PnpObjectCollection },
        { Py_tp_iter, _iterator_PnpObjectCollection },
        { Py_sq_length, _seq_length_PnpObjectCollection },
        { Py_sq_item, _seq_item_PnpObjectCollection },
        { },
    };

    static PyType_Spec _type_spec_PnpObjectCollection =
    {
        "_winsdk_Windows_Devices_Enumeration_Pnp.PnpObjectCollection",
        sizeof(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectCollection),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PnpObjectCollection
    };

    // ----- PnpObjectUpdate class --------------------
    constexpr const char* const _type_name_PnpObjectUpdate = "PnpObjectUpdate";

    static PyObject* _new_PnpObjectUpdate(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_PnpObjectUpdate);
        return nullptr;
    }

    static void _dealloc_PnpObjectUpdate(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* PnpObjectUpdate_get_Id(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate* self, void* /*unused*/) noexcept
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

    static PyObject* PnpObjectUpdate_get_Properties(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Properties());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PnpObjectUpdate_get_Type(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.Type());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_PnpObjectUpdate(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PnpObjectUpdate[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_PnpObjectUpdate), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PnpObjectUpdate[] = {
        { "id", reinterpret_cast<getter>(PnpObjectUpdate_get_Id), nullptr, nullptr, nullptr },
        { "properties", reinterpret_cast<getter>(PnpObjectUpdate_get_Properties), nullptr, nullptr, nullptr },
        { "type", reinterpret_cast<getter>(PnpObjectUpdate_get_Type), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PnpObjectUpdate[] = 
    {
        { Py_tp_new, _new_PnpObjectUpdate },
        { Py_tp_dealloc, _dealloc_PnpObjectUpdate },
        { Py_tp_methods, _methods_PnpObjectUpdate },
        { Py_tp_getset, _getset_PnpObjectUpdate },
        { },
    };

    static PyType_Spec _type_spec_PnpObjectUpdate =
    {
        "_winsdk_Windows_Devices_Enumeration_Pnp.PnpObjectUpdate",
        sizeof(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PnpObjectUpdate
    };

    // ----- PnpObjectWatcher class --------------------
    constexpr const char* const _type_name_PnpObjectWatcher = "PnpObjectWatcher";

    static PyObject* _new_PnpObjectWatcher(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_PnpObjectWatcher);
        return nullptr;
    }

    static void _dealloc_PnpObjectWatcher(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* PnpObjectWatcher_Start(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* args) noexcept
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

    static PyObject* PnpObjectWatcher_Stop(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* args) noexcept
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

    static PyObject* PnpObjectWatcher_get_Status(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, void* /*unused*/) noexcept
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

    static PyObject* PnpObjectWatcher_add_Added(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, winrt::Windows::Devices::Enumeration::Pnp::PnpObject>>(arg);

            return py::convert(self->obj.Added(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PnpObjectWatcher_remove_Added(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
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

    static PyObject* PnpObjectWatcher_add_EnumerationCompleted(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.EnumerationCompleted(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PnpObjectWatcher_remove_EnumerationCompleted(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
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

    static PyObject* PnpObjectWatcher_add_Removed(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>>(arg);

            return py::convert(self->obj.Removed(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PnpObjectWatcher_remove_Removed(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.Removed(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PnpObjectWatcher_add_Stopped(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, winrt::Windows::Foundation::IInspectable>>(arg);

            return py::convert(self->obj.Stopped(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PnpObjectWatcher_remove_Stopped(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
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

    static PyObject* PnpObjectWatcher_add_Updated(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>>(arg);

            return py::convert(self->obj.Updated(param0));
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* PnpObjectWatcher_remove_Updated(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher* self, PyObject* arg) noexcept
    {
        try
        {
            auto param0 = py::convert_to<winrt::event_token>(arg);

            self->obj.Updated(param0);
            Py_RETURN_NONE;
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_PnpObjectWatcher(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_PnpObjectWatcher[] = {
        { "start", reinterpret_cast<PyCFunction>(PnpObjectWatcher_Start), METH_VARARGS, nullptr },
        { "stop", reinterpret_cast<PyCFunction>(PnpObjectWatcher_Stop), METH_VARARGS, nullptr },
        { "add_added", reinterpret_cast<PyCFunction>(PnpObjectWatcher_add_Added), METH_O, nullptr },
        { "remove_added", reinterpret_cast<PyCFunction>(PnpObjectWatcher_remove_Added), METH_O, nullptr },
        { "add_enumeration_completed", reinterpret_cast<PyCFunction>(PnpObjectWatcher_add_EnumerationCompleted), METH_O, nullptr },
        { "remove_enumeration_completed", reinterpret_cast<PyCFunction>(PnpObjectWatcher_remove_EnumerationCompleted), METH_O, nullptr },
        { "add_removed", reinterpret_cast<PyCFunction>(PnpObjectWatcher_add_Removed), METH_O, nullptr },
        { "remove_removed", reinterpret_cast<PyCFunction>(PnpObjectWatcher_remove_Removed), METH_O, nullptr },
        { "add_stopped", reinterpret_cast<PyCFunction>(PnpObjectWatcher_add_Stopped), METH_O, nullptr },
        { "remove_stopped", reinterpret_cast<PyCFunction>(PnpObjectWatcher_remove_Stopped), METH_O, nullptr },
        { "add_updated", reinterpret_cast<PyCFunction>(PnpObjectWatcher_add_Updated), METH_O, nullptr },
        { "remove_updated", reinterpret_cast<PyCFunction>(PnpObjectWatcher_remove_Updated), METH_O, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_PnpObjectWatcher), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_PnpObjectWatcher[] = {
        { "status", reinterpret_cast<getter>(PnpObjectWatcher_get_Status), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_PnpObjectWatcher[] = 
    {
        { Py_tp_new, _new_PnpObjectWatcher },
        { Py_tp_dealloc, _dealloc_PnpObjectWatcher },
        { Py_tp_methods, _methods_PnpObjectWatcher },
        { Py_tp_getset, _getset_PnpObjectWatcher },
        { },
    };

    static PyType_Spec _type_spec_PnpObjectWatcher =
    {
        "_winsdk_Windows_Devices_Enumeration_Pnp.PnpObjectWatcher",
        sizeof(py::wrapper::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_PnpObjectWatcher
    };

    // ----- Windows.Devices.Enumeration.Pnp Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Devices::Enumeration::Pnp::PnpObject>::python_type = py::register_python_type(module, _type_name_PnpObject, &_type_spec_PnpObject, bases.get());
            py::winrt_type<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectCollection>::python_type = py::register_python_type(module, _type_name_PnpObjectCollection, &_type_spec_PnpObjectCollection, bases.get());
            py::winrt_type<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>::python_type = py::register_python_type(module, _type_name_PnpObjectUpdate, &_type_spec_PnpObjectUpdate, bases.get());
            py::winrt_type<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>::python_type = py::register_python_type(module, _type_name_PnpObjectWatcher, &_type_spec_PnpObjectWatcher, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Devices.Enumeration.Pnp");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Devices_Enumeration_Pnp",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Devices::Enumeration::Pnp

PyMODINIT_FUNC
PyInit__winsdk_Windows_Devices_Enumeration_Pnp (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Devices::Enumeration::Pnp::module_def);
}
