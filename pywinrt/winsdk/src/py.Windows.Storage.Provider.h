// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

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

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#if __has_include("py.Windows.UI.h")
#include "py.Windows.UI.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.UI.h>

#include <winrt/Windows.Storage.Provider.h>

namespace py::proj::Windows::Storage::Provider
{}

namespace py::impl::Windows::Storage::Provider
{}

namespace py::wrapper::Windows::Storage::Provider
{
    using CachedFileUpdater = py::winrt_wrapper<winrt::Windows::Storage::Provider::CachedFileUpdater>;
    using CachedFileUpdaterUI = py::winrt_wrapper<winrt::Windows::Storage::Provider::CachedFileUpdaterUI>;
    using FileUpdateRequest = py::winrt_wrapper<winrt::Windows::Storage::Provider::FileUpdateRequest>;
    using FileUpdateRequestDeferral = py::winrt_wrapper<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral>;
    using FileUpdateRequestedEventArgs = py::winrt_wrapper<winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs>;
    using StorageProviderFileTypeInfo = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderFileTypeInfo>;
    using StorageProviderGetContentInfoForPathResult = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult>;
    using StorageProviderGetPathForContentUriResult = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderGetPathForContentUriResult>;
    using StorageProviderItemProperties = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderItemProperties>;
    using StorageProviderItemProperty = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderItemProperty>;
    using StorageProviderItemPropertyDefinition = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderItemPropertyDefinition>;
    using StorageProviderMoreInfoUI = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderMoreInfoUI>;
    using StorageProviderQuotaUI = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderQuotaUI>;
    using StorageProviderStatusUI = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderStatusUI>;
    using StorageProviderSyncRootInfo = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderSyncRootInfo>;
    using StorageProviderSyncRootManager = py::winrt_wrapper<winrt::Windows::Storage::Provider::StorageProviderSyncRootManager>;
    using IStorageProviderItemPropertySource = py::winrt_wrapper<winrt::Windows::Storage::Provider::IStorageProviderItemPropertySource>;
    using IStorageProviderPropertyCapabilities = py::winrt_wrapper<winrt::Windows::Storage::Provider::IStorageProviderPropertyCapabilities>;
    using IStorageProviderStatusUISource = py::winrt_wrapper<winrt::Windows::Storage::Provider::IStorageProviderStatusUISource>;
    using IStorageProviderStatusUISourceFactory = py::winrt_wrapper<winrt::Windows::Storage::Provider::IStorageProviderStatusUISourceFactory>;
    using IStorageProviderUICommand = py::winrt_wrapper<winrt::Windows::Storage::Provider::IStorageProviderUICommand>;
    using IStorageProviderUriSource = py::winrt_wrapper<winrt::Windows::Storage::Provider::IStorageProviderUriSource>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::CachedFileOptions> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::CachedFileTarget> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::FileUpdateStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::ReadActivationMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderHardlinkPolicy> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderHydrationPolicy> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderHydrationPolicyModifier> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderInSyncPolicy> = "I";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderPopulationPolicy> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderProtectionMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderUICommandState> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::StorageProviderUriSourceStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::UIStatus> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::Storage::Provider::WriteActivationMode> = "i";


    template<>
    struct py_type<winrt::Windows::Storage::Provider::CachedFileOptions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::CachedFileTarget>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::FileUpdateStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::ReadActivationMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderHardlinkPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderHydrationPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderInSyncPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderPopulationPolicy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderProtectionMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderUICommandState>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::StorageProviderUriSourceStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::UIStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Storage::Provider::WriteActivationMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::CachedFileUpdater>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::CachedFileUpdaterUI>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::FileUpdateRequest>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderFileTypeInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderGetPathForContentUriResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderItemProperties>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderItemProperty>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderItemPropertyDefinition>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderMoreInfoUI>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderQuotaUI>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderStatusUI>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderSyncRootInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::StorageProviderSyncRootManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::IStorageProviderStatusUISource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::IStorageProviderStatusUISourceFactory>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::IStorageProviderUICommand>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Storage::Provider::IStorageProviderUriSource>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
