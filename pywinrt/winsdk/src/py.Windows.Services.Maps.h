// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.8

#pragma once

#include "pybase.h"

#if __has_include("py.Windows.Devices.Geolocation.h")
#include "py.Windows.Devices.Geolocation.h"
#endif

#if __has_include("py.Windows.Foundation.h")
#include "py.Windows.Foundation.h"
#endif

#if __has_include("py.Windows.Foundation.Collections.h")
#include "py.Windows.Foundation.Collections.h"
#endif

#if __has_include("py.Windows.UI.Popups.h")
#include "py.Windows.UI.Popups.h"
#endif

#include <winrt/Windows.Services.Maps.h>

namespace py::proj::Windows::Services::Maps
{}

namespace py::impl::Windows::Services::Maps
{}

namespace py::wrapper::Windows::Services::Maps
{
    using EnhancedWaypoint = py::winrt_wrapper<winrt::Windows::Services::Maps::EnhancedWaypoint>;
    using ManeuverWarning = py::winrt_wrapper<winrt::Windows::Services::Maps::ManeuverWarning>;
    using MapAddress = py::winrt_wrapper<winrt::Windows::Services::Maps::MapAddress>;
    using MapLocation = py::winrt_wrapper<winrt::Windows::Services::Maps::MapLocation>;
    using MapLocationFinder = py::winrt_wrapper<winrt::Windows::Services::Maps::MapLocationFinder>;
    using MapLocationFinderResult = py::winrt_wrapper<winrt::Windows::Services::Maps::MapLocationFinderResult>;
    using MapManager = py::winrt_wrapper<winrt::Windows::Services::Maps::MapManager>;
    using MapRoute = py::winrt_wrapper<winrt::Windows::Services::Maps::MapRoute>;
    using MapRouteDrivingOptions = py::winrt_wrapper<winrt::Windows::Services::Maps::MapRouteDrivingOptions>;
    using MapRouteFinder = py::winrt_wrapper<winrt::Windows::Services::Maps::MapRouteFinder>;
    using MapRouteFinderResult = py::winrt_wrapper<winrt::Windows::Services::Maps::MapRouteFinderResult>;
    using MapRouteLeg = py::winrt_wrapper<winrt::Windows::Services::Maps::MapRouteLeg>;
    using MapRouteManeuver = py::winrt_wrapper<winrt::Windows::Services::Maps::MapRouteManeuver>;
    using MapService = py::winrt_wrapper<winrt::Windows::Services::Maps::MapService>;
    using PlaceInfo = py::winrt_wrapper<winrt::Windows::Services::Maps::PlaceInfo>;
    using PlaceInfoCreateOptions = py::winrt_wrapper<winrt::Windows::Services::Maps::PlaceInfoCreateOptions>;
}

namespace py
{
    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::ManeuverWarningKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::ManeuverWarningSeverity> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::MapLocationDesiredAccuracy> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::MapLocationFinderStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::MapManeuverNotices> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::MapRouteFinderStatus> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::MapRouteManeuverKind> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::MapRouteOptimization> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::MapRouteRestrictions> = "I";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::MapServiceDataUsagePreference> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::TrafficCongestion> = "i";

    template<>
    constexpr const char* buffer_format<winrt::Windows::Services::Maps::WaypointKind> = "i";


    template<>
    struct py_type<winrt::Windows::Services::Maps::ManeuverWarningKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::ManeuverWarningSeverity>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::MapLocationDesiredAccuracy>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::MapLocationFinderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::MapManeuverNotices>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::MapRouteFinderStatus>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::MapRouteManeuverKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::MapRouteOptimization>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::MapRouteRestrictions>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::MapServiceDataUsagePreference>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::TrafficCongestion>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct py_type<winrt::Windows::Services::Maps::WaypointKind>
    {
        static PyObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::EnhancedWaypoint>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::ManeuverWarning>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapAddress>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapLocation>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapLocationFinder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapLocationFinderResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapManager>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapRoute>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapRouteDrivingOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapRouteFinder>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapRouteFinderResult>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapRouteLeg>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapRouteManeuver>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::MapService>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::PlaceInfo>
    {
        static PyTypeObject* get_python_type() noexcept;
    };

    template<>
    struct winrt_type<winrt::Windows::Services::Maps::PlaceInfoCreateOptions>
    {
        static PyTypeObject* get_python_type() noexcept;
    };
}
