// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Printing.h")
#include "py.Windows.Graphics.Printing.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Graphics.Printing.OptionDetails.h>

namespace py::proj::Windows::Graphics::Printing::OptionDetails
{}

namespace py::impl::Windows::Graphics::Printing::OptionDetails
{}

namespace py::wrapper::Windows::Graphics::Printing::OptionDetails
{
    using PrintBindingOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails>;
    using PrintBorderingOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails>;
    using PrintCollationOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails>;
    using PrintColorModeOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails>;
    using PrintCopiesOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails>;
    using PrintCustomItemDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails>;
    using PrintCustomItemListOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails>;
    using PrintCustomTextOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails>;
    using PrintCustomToggleOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails>;
    using PrintDuplexOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails>;
    using PrintHolePunchOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails>;
    using PrintMediaSizeOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails>;
    using PrintMediaTypeOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails>;
    using PrintOrientationOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails>;
    using PrintPageRangeOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintPageRangeOptionDetails>;
    using PrintQualityOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails>;
    using PrintStapleOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails>;
    using PrintTaskOptionChangedEventArgs = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs>;
    using PrintTaskOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails>;
    using IPrintCustomOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>;
    using IPrintItemListOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>;
    using IPrintNumberOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>;
    using IPrintOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>;
    using IPrintTextOptionDetails = py::winrt_wrapper<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintPageRangeOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
