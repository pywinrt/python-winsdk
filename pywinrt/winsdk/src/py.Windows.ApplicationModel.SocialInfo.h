// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.10

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Graphics.Imaging.h")
#include "py.Windows.Graphics.Imaging.h"
#endif

#if __has_include("py.Windows.Storage.Streams.h")
#include "py.Windows.Storage.Streams.h"
#endif

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Graphics.Imaging.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Windows.ApplicationModel.SocialInfo.h>

namespace py::proj::Windows::ApplicationModel::SocialInfo
{}

namespace py::impl::Windows::ApplicationModel::SocialInfo
{}

namespace py::wrapper::Windows::ApplicationModel::SocialInfo
{
    using SocialFeedChildItem = py::winrt_wrapper<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>;
    using SocialFeedContent = py::winrt_wrapper<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedContent>;
    using SocialFeedItem = py::winrt_wrapper<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItem>;
    using SocialFeedSharedItem = py::winrt_wrapper<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>;
    using SocialItemThumbnail = py::winrt_wrapper<winrt::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>;
    using SocialUserInfo = py::winrt_wrapper<winrt::Windows::ApplicationModel::SocialInfo::SocialUserInfo>;
}

namespace py
{
    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedKind> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode> = "i";

    template<>
    inline constexpr const char* buffer_format<winrt::Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle> = "i";


    template<>
    struct py_type<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedUpdateMode>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedContent>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::ApplicationModel::SocialInfo::SocialUserInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
