// WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.4

#include "pybase.h"
#include "py.Windows.Media.Render.h"


namespace py::cpp::Windows::Media::Render
{
    // ----- Windows.Media.Render Initialization --------------------
    static int module_exec(PyObject* module) noexcept
    {
        try
        {
            py::pyobj_handle bases { PyTuple_Pack(1, py::winrt_type<py::Object>::python_type) };


            return 0;
        }
        catch (...)
        {
            py::to_PyErr();
            return -1;
        }
    }

    static PyModuleDef_Slot module_slots[] = {{Py_mod_exec, module_exec}, {}};

    PyDoc_STRVAR(module_doc, "Windows.Media.Render");

    static PyModuleDef module_def
        = {PyModuleDef_HEAD_INIT,
           "_winsdk_Windows_Media_Render",
           module_doc,
           0,
           nullptr,
           module_slots,
           nullptr,
           nullptr,
           nullptr};
} // py::cpp::Windows::Media::Render

PyMODINIT_FUNC
PyInit__winsdk_Windows_Media_Render (void) noexcept
{
    return PyModuleDef_Init(&py::cpp::Windows::Media::Render::module_def);
}
