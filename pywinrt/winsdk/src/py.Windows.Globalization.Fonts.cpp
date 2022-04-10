// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#include "pybase.h"
#include "py.Windows.Globalization.Fonts.h"

PyTypeObject* py::winrt_type<winrt::Windows::Globalization::Fonts::LanguageFont>::python_type;
PyTypeObject* py::winrt_type<winrt::Windows::Globalization::Fonts::LanguageFontGroup>::python_type;

namespace py::cpp::Windows::Globalization::Fonts
{
    // ----- LanguageFont class --------------------
    constexpr const char* const _type_name_LanguageFont = "LanguageFont";

    static PyObject* _new_LanguageFont(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        py::set_invalid_activation_error(_type_name_LanguageFont);
        return nullptr;
    }

    static void _dealloc_LanguageFont(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* LanguageFont_get_FontFamily(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.FontFamily());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFont_get_FontStretch(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.FontStretch());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFont_get_FontStyle(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.FontStyle());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFont_get_FontWeight(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.FontWeight());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFont_get_ScaleFactor(py::wrapper::Windows::Globalization::Fonts::LanguageFont* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ScaleFactor());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_LanguageFont(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Globalization::Fonts::LanguageFont>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_LanguageFont[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_LanguageFont), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_LanguageFont[] = {
        { "font_family", reinterpret_cast<getter>(LanguageFont_get_FontFamily), nullptr, nullptr, nullptr },
        { "font_stretch", reinterpret_cast<getter>(LanguageFont_get_FontStretch), nullptr, nullptr, nullptr },
        { "font_style", reinterpret_cast<getter>(LanguageFont_get_FontStyle), nullptr, nullptr, nullptr },
        { "font_weight", reinterpret_cast<getter>(LanguageFont_get_FontWeight), nullptr, nullptr, nullptr },
        { "scale_factor", reinterpret_cast<getter>(LanguageFont_get_ScaleFactor), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_LanguageFont[] = 
    {
        { Py_tp_new, _new_LanguageFont },
        { Py_tp_dealloc, _dealloc_LanguageFont },
        { Py_tp_methods, _methods_LanguageFont },
        { Py_tp_getset, _getset_LanguageFont },
        { },
    };

    static PyType_Spec _type_spec_LanguageFont =
    {
        "_winsdk_Windows_Globalization_Fonts.LanguageFont",
        sizeof(py::wrapper::Windows::Globalization::Fonts::LanguageFont),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_LanguageFont
    };

    // ----- LanguageFontGroup class --------------------
    constexpr const char* const _type_name_LanguageFontGroup = "LanguageFontGroup";

    static PyObject* _new_LanguageFontGroup(PyTypeObject* type, PyObject* args, PyObject* kwds) noexcept
    {
        if (kwds != nullptr)
        {
            py::set_invalid_kwd_args_error();
            return nullptr;
        }

        Py_ssize_t arg_count = PyTuple_Size(args);
        if (arg_count == 1)
        {
            try
            {
                auto param0 = py::convert_to<winrt::hstring>(args, 0);

                winrt::Windows::Globalization::Fonts::LanguageFontGroup instance{ param0 };
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

    static void _dealloc_LanguageFontGroup(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self)
    {
        auto hash_value = std::hash<winrt::Windows::Foundation::IInspectable>{}(self->obj);
        py::wrapped_instance(hash_value, nullptr);
        self->obj = nullptr;
    }

    static PyObject* LanguageFontGroup_get_DocumentAlternate1Font(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DocumentAlternate1Font());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_DocumentAlternate2Font(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DocumentAlternate2Font());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_DocumentHeadingFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.DocumentHeadingFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_FixedWidthTextFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.FixedWidthTextFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_ModernDocumentFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.ModernDocumentFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_TraditionalDocumentFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.TraditionalDocumentFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UICaptionFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UICaptionFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UIHeadingFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UIHeadingFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UINotificationHeadingFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UINotificationHeadingFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UITextFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UITextFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* LanguageFontGroup_get_UITitleFont(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup* self, void* /*unused*/) noexcept
    {
        try
        {
            return py::convert(self->obj.UITitleFont());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyObject* _from_LanguageFontGroup(PyObject* /*unused*/, PyObject* arg) noexcept
    {
        try
        {
            auto return_value = py::convert_to<winrt::Windows::Foundation::IInspectable>(arg);
            return py::convert(return_value.as<winrt::Windows::Globalization::Fonts::LanguageFontGroup>());
        }
        catch (...)
        {
            py::to_PyErr();
            return nullptr;
        }
    }

    static PyMethodDef _methods_LanguageFontGroup[] = {
        { "_from", reinterpret_cast<PyCFunction>(_from_LanguageFontGroup), METH_O | METH_STATIC, nullptr },
        { }
    };

    static PyGetSetDef _getset_LanguageFontGroup[] = {
        { "document_alternate1_font", reinterpret_cast<getter>(LanguageFontGroup_get_DocumentAlternate1Font), nullptr, nullptr, nullptr },
        { "document_alternate2_font", reinterpret_cast<getter>(LanguageFontGroup_get_DocumentAlternate2Font), nullptr, nullptr, nullptr },
        { "document_heading_font", reinterpret_cast<getter>(LanguageFontGroup_get_DocumentHeadingFont), nullptr, nullptr, nullptr },
        { "fixed_width_text_font", reinterpret_cast<getter>(LanguageFontGroup_get_FixedWidthTextFont), nullptr, nullptr, nullptr },
        { "modern_document_font", reinterpret_cast<getter>(LanguageFontGroup_get_ModernDocumentFont), nullptr, nullptr, nullptr },
        { "traditional_document_font", reinterpret_cast<getter>(LanguageFontGroup_get_TraditionalDocumentFont), nullptr, nullptr, nullptr },
        { "u_i_caption_font", reinterpret_cast<getter>(LanguageFontGroup_get_UICaptionFont), nullptr, nullptr, nullptr },
        { "u_i_heading_font", reinterpret_cast<getter>(LanguageFontGroup_get_UIHeadingFont), nullptr, nullptr, nullptr },
        { "u_i_notification_heading_font", reinterpret_cast<getter>(LanguageFontGroup_get_UINotificationHeadingFont), nullptr, nullptr, nullptr },
        { "u_i_text_font", reinterpret_cast<getter>(LanguageFontGroup_get_UITextFont), nullptr, nullptr, nullptr },
        { "u_i_title_font", reinterpret_cast<getter>(LanguageFontGroup_get_UITitleFont), nullptr, nullptr, nullptr },
        { }
    };

    static PyType_Slot _type_slots_LanguageFontGroup[] = 
    {
        { Py_tp_new, _new_LanguageFontGroup },
        { Py_tp_dealloc, _dealloc_LanguageFontGroup },
        { Py_tp_methods, _methods_LanguageFontGroup },
        { Py_tp_getset, _getset_LanguageFontGroup },
        { },
    };

    static PyType_Spec _type_spec_LanguageFontGroup =
    {
        "_winsdk_Windows_Globalization_Fonts.LanguageFontGroup",
        sizeof(py::wrapper::Windows::Globalization::Fonts::LanguageFontGroup),
        0,
        Py_TPFLAGS_DEFAULT,
        _type_slots_LanguageFontGroup
    };

    // ----- Windows.Globalization.Fonts Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };

            py::winrt_type<winrt::Windows::Globalization::Fonts::LanguageFont>::python_type = py::register_python_type(module, _type_name_LanguageFont, &_type_spec_LanguageFont, bases.get());
            py::winrt_type<winrt::Windows::Globalization::Fonts::LanguageFontGroup>::python_type = py::register_python_type(module, _type_name_LanguageFontGroup, &_type_spec_LanguageFontGroup, bases.get());

            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Globalization.Fonts");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Globalization_Fonts",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Globalization::Fonts

PyMODINIT_FUNC
PyInit__winsdk_Windows_Globalization_Fonts (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Globalization::Fonts::module_def);
}
