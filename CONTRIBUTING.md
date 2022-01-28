
## Prerequisites

- [Python](https://www.python.org/downloads/) >= 3.7
- [Nuget](https://www.nuget.org/downloads)

## Get the code

    git clone https://github.com/pywinrt/python-winsdk
    cd python-winsdk

## Create a debug build

Note: this requires that `python_d.exe` is installed.

    ./build.ps1

## Build the package

    py -m pip install build
    py -m build

## Update the generated files

Note: the `cppwint` and `pywinrt` directories are generated and should not be
manually edited.

    ./generate.ps1
