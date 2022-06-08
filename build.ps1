# This file is useful for creating a debug build.
# Normally scikit-build will be used instead.

param (
    [Parameter(Mandatory=$false)]
    [string]$buildType = "Debug",

    [Parameter(Mandatory=$false)]
    [string]$pythonVersion = "3.9"
)

$repoRootPath = (get-item $PSScriptRoot).FullName
$sourcePath = "$PSScriptRoot"
$buildPath = "$repoRootPath\_build\$env:VSCMD_ARG_TGT_ARCH-$buildType"
$packagePath = "$sourcePath\pywinrt"

cmake -S $sourcePath "-B$buildPath" -GNinja "-DCMAKE_BUILD_TYPE=$buildType" -DCMAKE_C_COMPILER=cl -DCMAKE_CXX_COMPILER=cl "-DPYTHON_VERSION_STRING=$pythonVersion"
cmake --build $buildPath -- -v -j 4

Copy-Item "$buildPath\*.pyd" "$packagePath\winsdk\"
