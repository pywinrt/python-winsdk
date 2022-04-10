// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.3

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.Globalization.h")
#include "py.Windows.Globalization.h"
#endif

#if __has_include("py.Windows.Storage.h")
#include "py.Windows.Storage.h"
#endif

#if __has_include("py.Windows.System.h")
#include "py.Windows.System.h"
#endif

#include <winrt/Windows.System.UserProfile.h>

namespace py::proj::Windows::System::UserProfile
{}

namespace py::impl::Windows::System::UserProfile
{}

namespace py::wrapper::Windows::System::UserProfile
{
    using AdvertisingManager = py::winrt_wrapper<winrt::Windows::System::UserProfile::AdvertisingManager>;
    using AdvertisingManagerForUser = py::winrt_wrapper<winrt::Windows::System::UserProfile::AdvertisingManagerForUser>;
    using AssignedAccessSettings = py::winrt_wrapper<winrt::Windows::System::UserProfile::AssignedAccessSettings>;
    using DiagnosticsSettings = py::winrt_wrapper<winrt::Windows::System::UserProfile::DiagnosticsSettings>;
    using FirstSignInSettings = py::winrt_wrapper<winrt::Windows::System::UserProfile::FirstSignInSettings>;
    using GlobalizationPreferences = py::winrt_wrapper<winrt::Windows::System::UserProfile::GlobalizationPreferences>;
    using GlobalizationPreferencesForUser = py::winrt_wrapper<winrt::Windows::System::UserProfile::GlobalizationPreferencesForUser>;
    using UserProfilePersonalizationSettings = py::winrt_wrapper<winrt::Windows::System::UserProfile::UserProfilePersonalizationSettings>;
}

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::System::UserProfile::AdvertisingManager>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::UserProfile::AdvertisingManagerForUser>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::UserProfile::AssignedAccessSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::UserProfile::DiagnosticsSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::UserProfile::FirstSignInSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::UserProfile::GlobalizationPreferences>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::UserProfile::GlobalizationPreferencesForUser>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

    template<>
    struct winrt_type<winrt::Windows::System::UserProfile::UserProfilePersonalizationSettings>
    {
        static PyTypeObject* python_type;
        static PyTypeObject* get_python_type() { return python_type; }
    };

}
