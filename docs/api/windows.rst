===============================
:mod:`winsdk.windows` namespace
===============================

The :mod:`winsdk.windows` package contains the automatically generate bindings
for the Windows SDK.

Since most of the code is generated, there currently aren't Python API docs.
You can use https://learn.microsoft.com/en-us/uwp/api/ instead, keeping in mind
the Python naming conventions and other rules mentioned in :doc:`../types` section.

.. tip:: The ``winsdk`` package includes type hints so you can use those if
    you are unsure of a return type or a parameter type.

.. todo:: We could consider using https://github.com/MicrosoftDocs/winrt-api to autogenerate Python docs.

---------------
Interop modules
---------------

There are also special ``interop`` modules that provide extra functionality
to bridge between WinRT and other interfaces.

.. toctree::
   :maxdepth: 2

   windows/graphics.capture.interop
