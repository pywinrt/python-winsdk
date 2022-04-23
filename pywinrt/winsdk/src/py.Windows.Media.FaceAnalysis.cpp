// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#include "pybase.h"
#include "py.Windows.Media.FaceAnalysis.h"

PyTypeObject* py::winrt_type<winrt::Windows::Media::FaceAnalysis::DetectedFace>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Media::FaceAnalysis::FaceDetector>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Media::FaceAnalysis::FaceTracker>::python_type;

namespace py::cpp::Windows::Media::FaceAnalysis
{
    // ----- DetectedFace class --------------------
    constexpr const char* const _type_name_DetectedFace = "DetectedFace";

    static PyObject* _new_DetectedFace(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_DetectedFace);
        return nullptr;
    }

    static void _dealloc_DetectedFace(py::wrapper::Windows::Media::FaceAnalysis::DetectedFace* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* DetectedFace_get_FaceBox(py::wrapper::Windows::Media::FaceAnalysis::DetectedFace* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.FaceBox());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_DetectedFace(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Media::FaceAnalysis::DetectedFace>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_DetectedFace[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_DetectedFace), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DetectedFace[] = {
        { "face_box", reinterpret_cast<getter>(DetectedFace_get_FaceBox), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DetectedFace[] = 
    {
        { Py_tp_new, _new_DetectedFace },
        { Py_tp_dealloc, _dealloc_DetectedFace },
        { Py_tp_methods, _methods_DetectedFace },
        { Py_tp_getset, _getset_DetectedFace },
        { },
    };

    static PyType_Spec _type_spec_DetectedFace =
    {
        "_winsdk_Windows_Media_FaceAnalysis.DetectedFace",
        sizeof(py::wrapper::Windows::Media::FaceAnalysis::DetectedFace),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DetectedFace
    };

    // ----- FaceDetector class --------------------
    constexpr const char* const _type_name_FaceDetector = "FaceDetector";

    static PyObject* _new_FaceDetector(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_FaceDetector);
        return nullptr;
    }

    static void _dealloc_FaceDetector(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* FaceDetector_CreateAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Media::FaceAnalysis::FaceDetector::CreateAsync());
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

    static PyObject* FaceDetector_DetectFacesAsync(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::SoftwareBitmap>(args, 0);

                return py::convert(self->obj.DetectFacesAsync(param0));
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
                auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::SoftwareBitmap>(args, 0);
                auto param1 = py::convert_to<winrt::Windows::Graphics::Imaging::BitmapBounds>(args, 1);

                return py::convert(self->obj.DetectFacesAsync(param0, param1));
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

    static PyObject* FaceDetector_GetSupportedBitmapPixelFormats(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Media::FaceAnalysis::FaceDetector::GetSupportedBitmapPixelFormats());
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

    static PyObject* FaceDetector_IsBitmapPixelFormatSupported(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::BitmapPixelFormat>(args, 0);

                return py::convert(winrt::Windows::Media::FaceAnalysis::FaceDetector::IsBitmapPixelFormatSupported(param0));
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

    static PyObject* FaceDetector_get_MinDetectableFaceSize(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MinDetectableFaceSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int FaceDetector_put_MinDetectableFaceSize(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::BitmapSize>(arg);

            self->obj.MinDetectableFaceSize(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* FaceDetector_get_MaxDetectableFaceSize(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxDetectableFaceSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int FaceDetector_put_MaxDetectableFaceSize(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::BitmapSize>(arg);

            self->obj.MaxDetectableFaceSize(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* FaceDetector_get_IsSupported(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::FaceAnalysis::FaceDetector::IsSupported());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_FaceDetector(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Media::FaceAnalysis::FaceDetector>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_FaceDetector[] = {
        { "create_async", reinterpret_cast<PyCFunction>(FaceDetector_CreateAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "detect_faces_async", reinterpret_cast<PyCFunction>(FaceDetector_DetectFacesAsync), METH_VARARGS, nullptr },
        { "get_supported_bitmap_pixel_formats", reinterpret_cast<PyCFunction>(FaceDetector_GetSupportedBitmapPixelFormats), METH_VARARGS | METH_STATIC, nullptr },
        { "is_bitmap_pixel_format_supported", reinterpret_cast<PyCFunction>(FaceDetector_IsBitmapPixelFormatSupported), METH_VARARGS | METH_STATIC, nullptr },
        { "get_is_supported", reinterpret_cast<PyCFunction>(FaceDetector_get_IsSupported), METH_NOARGS | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_FaceDetector), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_FaceDetector[] = {
        { "min_detectable_face_size", reinterpret_cast<getter>(FaceDetector_get_MinDetectableFaceSize), reinterpret_cast<setter>(FaceDetector_put_MinDetectableFaceSize), nullptr, nullptr },
        { "max_detectable_face_size", reinterpret_cast<getter>(FaceDetector_get_MaxDetectableFaceSize), reinterpret_cast<setter>(FaceDetector_put_MaxDetectableFaceSize), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_FaceDetector[] = 
    {
        { Py_tp_new, _new_FaceDetector },
        { Py_tp_dealloc, _dealloc_FaceDetector },
        { Py_tp_methods, _methods_FaceDetector },
        { Py_tp_getset, _getset_FaceDetector },
        { },
    };

    static PyType_Spec _type_spec_FaceDetector =
    {
        "_winsdk_Windows_Media_FaceAnalysis.FaceDetector",
        sizeof(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_FaceDetector
    };

    // ----- FaceTracker class --------------------
    constexpr const char* const _type_name_FaceTracker = "FaceTracker";

    static PyObject* _new_FaceTracker(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_FaceTracker);
        return nullptr;
    }

    static void _dealloc_FaceTracker(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* FaceTracker_CreateAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Media::FaceAnalysis::FaceTracker::CreateAsync());
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

    static PyObject* FaceTracker_GetSupportedBitmapPixelFormats(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            try
            {
                return py::convert(winrt::Windows::Media::FaceAnalysis::FaceTracker::GetSupportedBitmapPixelFormats());
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

    static PyObject* FaceTracker_IsBitmapPixelFormatSupported(PyObject* /*unused*/, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::BitmapPixelFormat>(args, 0);

                return py::convert(winrt::Windows::Media::FaceAnalysis::FaceTracker::IsBitmapPixelFormatSupported(param0));
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

    static PyObject* FaceTracker_ProcessNextFrameAsync(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker* self, PyObject* args) noexcept
    {
        Py_ssize_t arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::Windows::Media::VideoFrame>(args, 0);

                return py::convert(self->obj.ProcessNextFrameAsync(param0));
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

    static PyObject* FaceTracker_get_MinDetectableFaceSize(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MinDetectableFaceSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int FaceTracker_put_MinDetectableFaceSize(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::BitmapSize>(arg);

            self->obj.MinDetectableFaceSize(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* FaceTracker_get_MaxDetectableFaceSize(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.MaxDetectableFaceSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static int FaceTracker_put_MaxDetectableFaceSize(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker* self, PyObject* arg, void* /*unused*/) noexcept
    {
        if (arg == nullptr)
        {
            PyErr_SetString(PyExc_TypeError, "property delete not supported");
            return -1;
        }

        try
        {
            auto param0 = py::convert_to<winrt::Windows::Graphics::Imaging::BitmapSize>(arg);

            self->obj.MaxDetectableFaceSize(param0);
            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyObject* FaceTracker_get_IsSupported(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::FaceAnalysis::FaceTracker::IsSupported());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_FaceTracker(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Media::FaceAnalysis::FaceTracker>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_FaceTracker[] = {
        { "create_async", reinterpret_cast<PyCFunction>(FaceTracker_CreateAsync), METH_VARARGS | METH_STATIC, nullptr },
        { "get_supported_bitmap_pixel_formats", reinterpret_cast<PyCFunction>(FaceTracker_GetSupportedBitmapPixelFormats), METH_VARARGS | METH_STATIC, nullptr },
        { "is_bitmap_pixel_format_supported", reinterpret_cast<PyCFunction>(FaceTracker_IsBitmapPixelFormatSupported), METH_VARARGS | METH_STATIC, nullptr },
        { "process_next_frame_async", reinterpret_cast<PyCFunction>(FaceTracker_ProcessNextFrameAsync), METH_VARARGS, nullptr },
        { "get_is_supported", reinterpret_cast<PyCFunction>(FaceTracker_get_IsSupported), METH_NOARGS | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_FaceTracker), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_FaceTracker[] = {
        { "min_detectable_face_size", reinterpret_cast<getter>(FaceTracker_get_MinDetectableFaceSize), reinterpret_cast<setter>(FaceTracker_put_MinDetectableFaceSize), nullptr, nullptr },
        { "max_detectable_face_size", reinterpret_cast<getter>(FaceTracker_get_MaxDetectableFaceSize), reinterpret_cast<setter>(FaceTracker_put_MaxDetectableFaceSize), nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_FaceTracker[] = 
    {
        { Py_tp_new, _new_FaceTracker },
        { Py_tp_dealloc, _dealloc_FaceTracker },
        { Py_tp_methods, _methods_FaceTracker },
        { Py_tp_getset, _getset_FaceTracker },
        { },
    };

    static PyType_Spec _type_spec_FaceTracker =
    {
        "_winsdk_Windows_Media_FaceAnalysis.FaceTracker",
        sizeof(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_FaceTracker
    };

    // ----- Windows.Media.FaceAnalysis Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Media::FaceAnalysis::DetectedFace>::python_type = py::register_python_type(module, _type_name_DetectedFace, &_type_spec_DetectedFace, bases.get());
            py::winrt_type<winrt::Windows::Media::FaceAnalysis::FaceDetector>::python_type = py::register_python_type(module, _type_name_FaceDetector, &_type_spec_FaceDetector, bases.get());
            py::winrt_type<winrt::Windows::Media::FaceAnalysis::FaceTracker>::python_type = py::register_python_type(module, _type_name_FaceTracker, &_type_spec_FaceTracker, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Media.FaceAnalysis");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Media_FaceAnalysis",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Media::FaceAnalysis

PyMODINIT_FUNC
PyInit__winsdk_Windows_Media_FaceAnalysis (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Media::FaceAnalysis::module_def);
}
