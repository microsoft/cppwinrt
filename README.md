# The C++/WinRT language projection

C++/WinRT is an entirely standard C++ language projection for Windows Runtime (WinRT) APIs, implemented as a header-file-based library, and designed to provide you with first-class access to the modern Windows API. With C++/WinRT, you can author and consume Windows Runtime APIs using any standards-compliant C++17 compiler.

* Documentation: https://aka.ms/cppwinrt
* NuGet package: http://aka.ms/cppwinrt/nuget
* Visual Studio extension: http://aka.ms/cppwinrt/vsix
* Wikipedia: https://en.wikipedia.org/wiki/C++/WinRT

# Building C++/WinRT

Don't build C++/WinRT yourself - just download the latest version here: https://aka.ms/cppwinrt/nuget

If you really want to build it yourself, the simplest way to do so is to run the `build_test_all.cmd` script in the root directory. Developers needing to work on the C++/WinRT compiler itself should go through the following steps to arrive at an efficient inner loop:

* Open a dev command prompt pointing at the root of the repo.
* Open the `cppwinrt.sln` solution.
* Build the x64 Release configuration of the `prebuild` and `cppwinrt` projects only. Do not attempt to build anything else just yet.
* Run `build_projection.cmd` in the dev command prompt.
* Switch to the x64 Debug configuration in Visual Studio and build all projects as needed.
