// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#include "pybase.h"
#include "py.Windows.Media.ClosedCaptioning.h"

PyTypeObject* py::winrt_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties>::python_type;

namespace py::cpp::Windows::Media::ClosedCaptioning
{
    // ----- ClosedCaptionProperties class --------------------
    constexpr const char* const _type_name_ClosedCaptionProperties = "ClosedCaptionProperties";

    static PyObject* _new_ClosedCaptionProperties(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_ClosedCaptionProperties);
        return nullptr;
    }

    static PyObject* ClosedCaptionProperties_get_BackgroundColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::BackgroundColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_BackgroundOpacity(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::BackgroundOpacity());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_ComputedBackgroundColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::ComputedBackgroundColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_ComputedFontColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::ComputedFontColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_ComputedRegionColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::ComputedRegionColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontEffect(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontEffect());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontOpacity(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontOpacity());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontSize(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontSize());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_FontStyle(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::FontStyle());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_RegionColor(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::RegionColor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* ClosedCaptionProperties_get_RegionOpacity(PyObject* /*unused*/, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties::RegionOpacity());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_ClosedCaptionProperties[] = {
        { "get_background_color", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_BackgroundColor), METH_NOARGS | METH_STATIC, nullptr },
        { "get_background_opacity", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_BackgroundOpacity), METH_NOARGS | METH_STATIC, nullptr },
        { "get_computed_background_color", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_ComputedBackgroundColor), METH_NOARGS | METH_STATIC, nullptr },
        { "get_computed_font_color", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_ComputedFontColor), METH_NOARGS | METH_STATIC, nullptr },
        { "get_computed_region_color", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_ComputedRegionColor), METH_NOARGS | METH_STATIC, nullptr },
        { "get_font_color", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_FontColor), METH_NOARGS | METH_STATIC, nullptr },
        { "get_font_effect", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_FontEffect), METH_NOARGS | METH_STATIC, nullptr },
        { "get_font_opacity", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_FontOpacity), METH_NOARGS | METH_STATIC, nullptr },
        { "get_font_size", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_FontSize), METH_NOARGS | METH_STATIC, nullptr },
        { "get_font_style", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_FontStyle), METH_NOARGS | METH_STATIC, nullptr },
        { "get_region_color", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_RegionColor), METH_NOARGS | METH_STATIC, nullptr },
        { "get_region_opacity", reinterpret_cast<PyCFunction>(ClosedCaptionProperties_get_RegionOpacity), METH_NOARGS | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_ClosedCaptionProperties[] = {
        { }
    };

    static PyType_Slot _type_slots_ClosedCaptionProperties[] = 
    {
        { Py_tp_new, _new_ClosedCaptionProperties },
        { Py_tp_methods, _methods_ClosedCaptionProperties },
        { Py_tp_getset, _getset_ClosedCaptionProperties },
        { },
    };

    static PyType_Spec _type_spec_ClosedCaptionProperties =
    {
        "_winsdk_Windows_Media_ClosedCaptioning.ClosedCaptionProperties",
        0,
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_ClosedCaptionProperties
    };

    // ----- Windows.Media.ClosedCaptioning Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Media::ClosedCaptioning::ClosedCaptionProperties>::python_type = py::register_python_type(module, _type_name_ClosedCaptionProperties, &_type_spec_ClosedCaptionProperties, nullptr);

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Media.ClosedCaptioning");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Media_ClosedCaptioning",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Media::ClosedCaptioning

PyMODINIT_FUNC
PyInit__winsdk_Windows_Media_ClosedCaptioning (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Media::ClosedCaptioning::module_def);
}
