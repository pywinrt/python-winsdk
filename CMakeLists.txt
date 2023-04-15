cmake_minimum_required(VERSION 3.24)
cmake_policy(SET CMP0091 NEW)
project(winsdk LANGUAGES CXX)

file(GLOB sources "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/${CMAKE_PROJECT_NAME}/src/*.cpp")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

if (MSVC)
    # TODO: re-enable /GL and /LTCG when we get a bigger build machine
    add_compile_options(/bigobj /GR- /permissive- /MP)

    string(REGEX REPLACE "/GR" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    # TODO: re-enable /GL and /LTCG when we get a bigger build machine
    # string(APPEND CMAKE_MODULE_LINKER_FLAGS " /LTCG:STATUS")

    if (CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL "19.20.27404.0")
        string(APPEND CMAKE_CXX_FLAGS " /d2FH4")
    endif()
else()
    add_compile_options(-Werror)

    if (MINGW)
        add_definitions(-D_WIN32_WINNT=_WIN32_WINNT_WIN10)
        # fixes "file too big"
        add_compile_options(-Wa,-mbig-obj)   
    endif()
endif()

find_package(Python3 REQUIRED COMPONENTS Development.Module)

Python3_add_library (_winrt MODULE ${sources})
set_target_properties(_winrt PROPERTIES LIBRARY_OUTPUT_NAME_DEBUG _winrt_d)
target_precompile_headers(_winrt PRIVATE ${headers})
target_include_directories(_winrt PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/cppwinrt" "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/${CMAKE_PROJECT_NAME}/src")

# speed up builds by precompiling commonly used headers
target_precompile_headers(_winrt PRIVATE
    "pywinrt/winsdk/src/py.Windows.Foundation.h"
    "pywinrt/winsdk/src/py.Windows.Storage.Streams.h"
)
# needed because including windows.h affects winrt
set_property(SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/winsdk/src/runtime.cpp" PROPERTY SKIP_PRECOMPILE_HEADERS ON)
# needed because including Shobjidl.h affects winrt
set_property(SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/winsdk/src/_winrt.cpp" PROPERTY SKIP_PRECOMPILE_HEADERS ON)
# needed because including unknwn.h affects winrt
set_property(SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/pywinrt/winsdk/src/py.Windows.Graphics.Capture.Interop.cpp" PROPERTY SKIP_PRECOMPILE_HEADERS ON)

install(TARGETS _winrt DESTINATION "pywinrt/${CMAKE_PROJECT_NAME}")
