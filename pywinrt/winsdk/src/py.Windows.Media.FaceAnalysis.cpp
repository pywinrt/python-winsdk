// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#include "pybase.h"
#include "py.Windows.Media.FaceAnalysis.h"


namespace py::cpp::Windows::Media::FaceAnalysis
{
    struct module_state
    {
        PyTypeObject* type_DetectedFace;
        PyTypeObject* type_FaceDetector;
        PyTypeObject* type_FaceTracker;
    };

    // ----- DetectedFace class --------------------
    static constexpr const char* const type_name_DetectedFace = "DetectedFace";

    static PyObject* _new_DetectedFace(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_DetectedFace);
        return nullptr;
    }

    static void _dealloc_DetectedFace(py::wrapper::Windows::Media::FaceAnalysis::DetectedFace* self) noexcept
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

    static PyObject* DetectedFace_get_FaceBox(py::wrapper::Windows::Media::FaceAnalysis::DetectedFace* self, void* /*unused*/) noexcept
    {
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.DetectedFace", L"FaceBox"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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

    static PyObject* _assign_array_DetectedFace(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Media::FaceAnalysis::DetectedFace>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
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
        { "_assign_array_", _assign_array_DetectedFace, METH_O | METH_STATIC, nullptr },
        { "_from", reinterpret_cast<PyCFunction>(_from_DetectedFace), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_DetectedFace[] = {
        { "face_box", reinterpret_cast<getter>(DetectedFace_get_FaceBox), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_DetectedFace[] = 
    {
        { Py_tp_new, reinterpret_cast<void*>(_new_DetectedFace) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_DetectedFace) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_DetectedFace) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_DetectedFace) },
        { },
    };

    static PyType_Spec type_spec_DetectedFace =
    {
        "_winsdk_Windows_Media_FaceAnalysis.DetectedFace",
        sizeof(py::wrapper::Windows::Media::FaceAnalysis::DetectedFace),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_DetectedFace
    };

    // ----- FaceDetector class --------------------
    static constexpr const char* const type_name_FaceDetector = "FaceDetector";

    static PyObject* _new_FaceDetector(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_FaceDetector);
        return nullptr;
    }

    static void _dealloc_FaceDetector(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector* self) noexcept
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

    static PyObject* FaceDetector_CreateAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"CreateAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

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
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"DetectFacesAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

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
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"DetectFacesAsync", 2))
            {
                py::set_arg_count_version_error(2);
                return nullptr;
            }

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
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"GetSupportedBitmapPixelFormats", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

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
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"IsBitmapPixelFormatSupported", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"MinDetectableFaceSize"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"MinDetectableFaceSize"))
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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"MaxDetectableFaceSize"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"MaxDetectableFaceSize"))
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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceDetector", L"IsSupported"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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

    static PyObject* _assign_array_FaceDetector(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Media::FaceAnalysis::FaceDetector>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
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
        { "_assign_array_", _assign_array_FaceDetector, METH_O | METH_STATIC, nullptr },
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
        { Py_tp_new, reinterpret_cast<void*>(_new_FaceDetector) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_FaceDetector) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_FaceDetector) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_FaceDetector) },
        { },
    };

    static PyType_Spec type_spec_FaceDetector =
    {
        "_winsdk_Windows_Media_FaceAnalysis.FaceDetector",
        sizeof(py::wrapper::Windows::Media::FaceAnalysis::FaceDetector),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_FaceDetector
    };

    static PyGetSetDef getset_FaceDetector_Meta[] = {
        { "is_supported", reinterpret_cast<getter>(FaceDetector_get_IsSupported), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_FaceDetector_Meta[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_FaceDetector_Meta) },
        { }
    };

    static PyType_Spec type_spec_FaceDetector_Meta =
    {
        "_winsdk_Windows_Media_FaceAnalysis.FaceDetector_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_FaceDetector_Meta
    };

    // ----- FaceTracker class --------------------
    static constexpr const char* const type_name_FaceTracker = "FaceTracker";

    static PyObject* _new_FaceTracker(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(type_name_FaceTracker);
        return nullptr;
    }

    static void _dealloc_FaceTracker(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker* self) noexcept
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

    static PyObject* FaceTracker_CreateAsync(PyObject* /*unused*/, PyObject* args) noexcept
    {
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"CreateAsync", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

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
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 0)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"GetSupportedBitmapPixelFormats", 0))
            {
                py::set_arg_count_version_error(0);
                return nullptr;
            }

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
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"IsBitmapPixelFormatSupported", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

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
        auto arg_count = PyTuple_Size(args);

        if (arg_count == 1)
        {
            if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsMethodPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"ProcessNextFrameAsync", 1))
            {
                py::set_arg_count_version_error(1);
                return nullptr;
            }

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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"MinDetectableFaceSize"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"MinDetectableFaceSize"))
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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"MaxDetectableFaceSize"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"MaxDetectableFaceSize"))
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
        if (!winrt::Windows::Foundation::Metadata::ApiInformation::IsPropertyPresent(L"Windows.Media.FaceAnalysis.FaceTracker", L"IsSupported"))
        {
            PyErr_SetString(PyExc_AttributeError, "property is not available in this version of Windows");
            return nullptr;
        }

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

    static PyObject* _assign_array_FaceTracker(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        auto array = std::make_unique<py::ComArray<winrt::Windows::Media::FaceAnalysis::FaceTracker>>();
        if (!py::cpp::_winrt::Array_Assign(arg, std::move(array)))
        {
            return nullptr;
        }
        Py_RETURN_NONE;
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
        { "_assign_array_", _assign_array_FaceTracker, METH_O | METH_STATIC, nullptr },
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
        { Py_tp_new, reinterpret_cast<void*>(_new_FaceTracker) },
        { Py_tp_dealloc, reinterpret_cast<void*>(_dealloc_FaceTracker) },
        { Py_tp_methods, reinterpret_cast<void*>(_methods_FaceTracker) },
        { Py_tp_getset, reinterpret_cast<void*>(_getset_FaceTracker) },
        { },
    };

    static PyType_Spec type_spec_FaceTracker =
    {
        "_winsdk_Windows_Media_FaceAnalysis.FaceTracker",
        sizeof(py::wrapper::Windows::Media::FaceAnalysis::FaceTracker),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_FaceTracker
    };

    static PyGetSetDef getset_FaceTracker_Meta[] = {
        { "is_supported", reinterpret_cast<getter>(FaceTracker_get_IsSupported), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot type_slots_FaceTracker_Meta[] = 
    {
        { Py_tp_base, reinterpret_cast<void*>(&PyType_Type) },
        { Py_tp_getset, reinterpret_cast<void*>(getset_FaceTracker_Meta) },
        { }
    };

    static PyType_Spec type_spec_FaceTracker_Meta =
    {
        "_winsdk_Windows_Media_FaceAnalysis.FaceTracker_Meta",
        static_cast<int>(PyType_Type.tp_basicsize),
        static_cast<int>(PyType_Type.tp_itemsize),
        Py_TPFLAGS_DEFAULT,
        type_slots_FaceTracker_Meta
    };

    // ----- Windows.Media.FaceAnalysis Initialization --------------------
    PyDoc_STRVAR(module_doc, "Windows::Media::FaceAnalysis");

    static PyMethodDef module_methods[] = {
        {}};


    static int module_traverse(PyObject* module, visitproc visit, void* arg) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_VISIT(state->type_DetectedFace);
        Py_VISIT(state->type_FaceDetector);
        Py_VISIT(state->type_FaceTracker);

        return 0;
    }

    static int module_clear(PyObject* module) noexcept
    {
        auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));

        if (!state)
        {
            return 0;
        }

        Py_CLEAR(state->type_DetectedFace);
        Py_CLEAR(state->type_FaceDetector);
        Py_CLEAR(state->type_FaceTracker);

        return 0;
    }


    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Media_FaceAnalysis",
           module_doc,
           sizeof(module_state),
           module_methods,
           nullptr,
           module_traverse,
           module_clear,
           nullptr};

} // py::cpp::Windows::Media::FaceAnalysis

PyMODINIT_FUNC PyInit__winsdk_Windows_Media_FaceAnalysis(void) noexcept
{
    using namespace py::cpp::Windows::Media::FaceAnalysis;

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

    state->type_DetectedFace = py::register_python_type(module.get(), type_name_DetectedFace, &type_spec_DetectedFace, object_bases.get(), nullptr);
    if (!state->type_DetectedFace)
    {
        return nullptr;
    }

    py::pyobj_handle type_FaceDetector_Meta{PyType_FromSpec(&type_spec_FaceDetector_Meta)};
    if (!type_FaceDetector_Meta)
    {
        return nullptr;
    }

    state->type_FaceDetector = py::register_python_type(module.get(), type_name_FaceDetector, &type_spec_FaceDetector, object_bases.get(), reinterpret_cast<PyTypeObject*>(type_FaceDetector_Meta.get()));
    if (!state->type_FaceDetector)
    {
        return nullptr;
    }

    py::pyobj_handle type_FaceTracker_Meta{PyType_FromSpec(&type_spec_FaceTracker_Meta)};
    if (!type_FaceTracker_Meta)
    {
        return nullptr;
    }

    state->type_FaceTracker = py::register_python_type(module.get(), type_name_FaceTracker, &type_spec_FaceTracker, object_bases.get(), reinterpret_cast<PyTypeObject*>(type_FaceTracker_Meta.get()));
    if (!state->type_FaceTracker)
    {
        return nullptr;
    }


    return module.detach();
}

PyTypeObject* py::winrt_type<winrt::Windows::Media::FaceAnalysis::DetectedFace>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::FaceAnalysis;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::FaceAnalysis");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_DetectedFace;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::FaceAnalysis::DetectedFace is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Media::FaceAnalysis::FaceDetector>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::FaceAnalysis;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::FaceAnalysis");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_FaceDetector;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::FaceAnalysis::FaceDetector is not registered");
        return nullptr;
    }

    return python_type;
}

PyTypeObject* py::winrt_type<winrt::Windows::Media::FaceAnalysis::FaceTracker>::get_python_type() noexcept {
    using namespace py::cpp::Windows::Media::FaceAnalysis;

    PyObject* module = PyState_FindModule(&module_def);

    if (!module) {
        PyErr_SetString(PyExc_RuntimeError, "could not find module for Windows::Media::FaceAnalysis");
        return nullptr;
    }

    auto state = reinterpret_cast<module_state*>(PyModule_GetState(module));
    assert(state);

    auto python_type = state->type_FaceTracker;

    if (!python_type) {
        PyErr_SetString(PyExc_RuntimeError, "type winrt::Windows::Media::FaceAnalysis::FaceTracker is not registered");
        return nullptr;
    }

    return python_type;
}
