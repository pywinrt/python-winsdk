// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.UI.Text.Core.h")
#include "py.Windows.UI.Text.Core.h"
#endif

#include <winrt/Windows.Data.Text.h>

namespace py::proj::Windows::Data::Text
{}

namespace py::impl::Windows::Data::Text
{
    struct SelectableWordSegmentsTokenizingHandler
    {
        static winrt::Windows::Data::Text::SelectableWordSegmentsTokenizingHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
                }
            };
        };
    };

    struct WordSegmentsTokenizingHandler
    {
        static winrt::Windows::Data::Text::WordSegmentsTokenizingHandler get(PyObject* callable)
        {
            py::delegate_callable _delegate{ callable };

            return [delegate = std::move(_delegate)](auto param0, auto param1)
            {
                winrt::handle_type<py::gil_state_traits> gil_state{ PyGILState_Ensure() };

                py::pyobj_handle py_param0{ py::convert(param0) };
                py::pyobj_handle py_param1{ py::convert(param1) };

                py::pyobj_handle args{ PyTuple_Pack(2, py_param0.get(), py_param1.get()) };
                py::pyobj_handle return_value{ PyObject_CallObject(delegate.callable(), args.get()) };

                if (!return_value)
                {
                    PyErr_WriteUnraisable(delegate.callable());
                    throw winrt::hresult_invalid_argument();
                }
            };
        };
    };
}

namespace py::wrapper::Windows::Data::Text
{
    using AlternateWordForm = py::winrt_wrapper<winrt::Windows::Data::Text::AlternateWordForm>;
    using SelectableWordSegment = py::winrt_wrapper<winrt::Windows::Data::Text::SelectableWordSegment>;
    using SelectableWordsSegmenter = py::winrt_wrapper<winrt::Windows::Data::Text::SelectableWordsSegmenter>;
    using SemanticTextQuery = py::winrt_wrapper<winrt::Windows::Data::Text::SemanticTextQuery>;
    using TextConversionGenerator = py::winrt_wrapper<winrt::Windows::Data::Text::TextConversionGenerator>;
    using TextPhoneme = py::winrt_wrapper<winrt::Windows::Data::Text::TextPhoneme>;
    using TextPredictionGenerator = py::winrt_wrapper<winrt::Windows::Data::Text::TextPredictionGenerator>;
    using TextReverseConversionGenerator = py::winrt_wrapper<winrt::Windows::Data::Text::TextReverseConversionGenerator>;
    using UnicodeCharacters = py::winrt_wrapper<winrt::Windows::Data::Text::UnicodeCharacters>;
    using WordSegment = py::winrt_wrapper<winrt::Windows::Data::Text::WordSegment>;
    using WordsSegmenter = py::winrt_wrapper<winrt::Windows::Data::Text::WordsSegmenter>;
    using TextSegment = py::winrt_struct_wrapper<winrt::Windows::Data::Text::TextSegment>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Data::Text::AlternateWordForm>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::SelectableWordSegment>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::SelectableWordsSegmenter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::SemanticTextQuery>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::TextConversionGenerator>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::TextPhoneme>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::TextPredictionGenerator>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::TextReverseConversionGenerator>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::UnicodeCharacters>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::WordSegment>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::WordsSegmenter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Data::Text::TextSegment>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template <>
    struct delegate_python_type<winrt::Windows::Data::Text::SelectableWordSegmentsTokenizingHandler>
    {
        using type = py::impl::Windows::Data::Text::SelectableWordSegmentsTokenizingHandler;
    };

    template <>
    struct delegate_python_type<winrt::Windows::Data::Text::WordSegmentsTokenizingHandler>
    {
        using type = py::impl::Windows::Data::Text::WordSegmentsTokenizingHandler;
    };

    template<>
    struct converter<winrt::Windows::Data::Text::TextSegment>
    {
        static PyObject* convert(winrt::Windows::Data::Text::TextSegment instance) noexcept;
        static winrt::Windows::Data::Text::TextSegment convert_to(PyObject* obj);
    };

}
