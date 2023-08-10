# The C++/WinRT language projection

C++/WinRT is an entirely standard C++ language projection for Windows Runtime (WinRT) APIs, implemented as a header-file-based library, and designed to provide you with first-class access to the modern Windows API. With C++/WinRT, you can author and consume Windows Runtime APIs using any standards-compliant C++17 compiler.

* Documentation: https://aka.ms/cppwinrt
* NuGet package: http://aka.ms/cppwinrt/nuget
* Visual Studio extension: http://aka.ms/cppwinrt/vsix
* Wikipedia: https://en.wikipedia.org/wiki/C++/WinRT

# Building C++/WinRT

Don't build C++/WinRT yourself - just download the latest version here: https://aka.ms/cppwinrt/nuget

## Working on the compiler

If you really want to build it yourself, the simplest way to do so is to run the `build_test_all.cmd` script in the root directory. Developers needing to work on the C++/WinRT compiler itself should go through the following steps to arrive at an efficient inner loop:

* Open a dev command prompt pointing at the root of the repo.
* Open the `cppwinrt.sln` solution.
* Rebuild the x64 Release configuration of the `cppwinrt` project only. Do not attempt to build anything else just yet.
* Run `build_projection.cmd` in the dev command prompt.
* Switch to the x64 Debug configuration in Visual Studio and build all projects as needed.

## Comparing Outputs

Comparing the output of the prior release and your current changes will help show the impact of any updates. Starting from
a dev command prompt at the root of the repo _after_ following the above build instructions:

* Run `build_projection.cmd` in the dev command prompt
* Run `build_prior_projection.cmd` in the dev command prompt as well
* Run `prepare_versionless_diffs.cmd` which removes version stamps on both current and prior projection
* Use a directory-level differencing tool to compare `_build\$(arch)\$(flavor)\winrt` and `_reference\$(arch)\$(flavor)\winrt`
