// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.Storage.Streams.h>

namespace py::proj::Windows::Storage::Streams
{}

namespace py::impl::Windows::Storage::Streams
{}

namespace py::wrapper::Windows::Storage::Streams
{
    using Buffer = py::winrt_wrapper<winrt::Windows::Storage::Streams::Buffer>;
    using DataReader = py::winrt_wrapper<winrt::Windows::Storage::Streams::DataReader>;
    using DataReaderLoadOperation = py::winrt_wrapper<winrt::Windows::Storage::Streams::DataReaderLoadOperation>;
    using DataWriter = py::winrt_wrapper<winrt::Windows::Storage::Streams::DataWriter>;
    using DataWriterStoreOperation = py::winrt_wrapper<winrt::Windows::Storage::Streams::DataWriterStoreOperation>;
    using FileInputStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::FileInputStream>;
    using FileOutputStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::FileOutputStream>;
    using FileRandomAccessStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::FileRandomAccessStream>;
    using InMemoryRandomAccessStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream>;
    using InputStreamOverStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::InputStreamOverStream>;
    using OutputStreamOverStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::OutputStreamOverStream>;
    using RandomAccessStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::RandomAccessStream>;
    using RandomAccessStreamOverStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::RandomAccessStreamOverStream>;
    using RandomAccessStreamReference = py::winrt_wrapper<winrt::Windows::Storage::Streams::RandomAccessStreamReference>;
    using IBuffer = py::winrt_wrapper<winrt::Windows::Storage::Streams::IBuffer>;
    using IContentTypeProvider = py::winrt_wrapper<winrt::Windows::Storage::Streams::IContentTypeProvider>;
    using IDataReader = py::winrt_wrapper<winrt::Windows::Storage::Streams::IDataReader>;
    using IDataWriter = py::winrt_wrapper<winrt::Windows::Storage::Streams::IDataWriter>;
    using IInputStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::IInputStream>;
    using IInputStreamReference = py::winrt_wrapper<winrt::Windows::Storage::Streams::IInputStreamReference>;
    using IOutputStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::IOutputStream>;
    using IPropertySetSerializer = py::winrt_wrapper<winrt::Windows::Storage::Streams::IPropertySetSerializer>;
    using IRandomAccessStream = py::winrt_wrapper<winrt::Windows::Storage::Streams::IRandomAccessStream>;
    using IRandomAccessStreamReference = py::winrt_wrapper<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>;
    using IRandomAccessStreamWithContentType = py::winrt_wrapper<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::Buffer>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::DataReader>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::DataReaderLoadOperation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::DataWriter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::DataWriterStoreOperation>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::FileInputStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::FileOutputStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::FileRandomAccessStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::InputStreamOverStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::OutputStreamOverStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::RandomAccessStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::RandomAccessStreamOverStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::RandomAccessStreamReference>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IBuffer>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IContentTypeProvider>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IDataReader>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IDataWriter>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IInputStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IInputStreamReference>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IOutputStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IPropertySetSerializer>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IRandomAccessStream>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
