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
* Choose a configuration (x64, x86, Release, Debug) and build projects as needed.

If you are working on an ARM64 specific issue from an x64 or x86 host, you will need to instead:

* Open the `cppwinrt.sln` solution
* Build the x86 version of the "cppwinrt" project first
* Switch to your preferred configuration and build the test binaries and run them in your test environment

## Comparing Outputs

Comparing the output of the prior release and your current changes will help show the impact of any updates. Starting from
a dev command prompt at the root of the repo _after_ following the above build instructions:

* Run `build_projection.cmd` in the dev command prompt
* Run `build_prior_projection.cmd` in the dev command prompt as well
* Run `prepare_versionless_diffs.cmd` which removes version stamps on both current and prior projection
* Use a directory-level differencing tool to compare `_build\$(arch)\$(flavor)\winrt` and `_reference\$(arch)\$(flavor)\winrt`

## Formatting

This project has adopted `clang-format` as the tool for formatting our code.
Please note that the `.clang-format` at the root of the repo is a copy from the internal Windows repo with few additions.
In general, please do not modify it.
If you find that a macro is causing bad formatting of code, you can add that macro to one of the corresponding arrays in the `.clang-format` file (e.g. `AttributeMacros`, etc.), format the code, and submit a PR.

> _NOTE: Different versions of `clang-format` may format the same code differently.
In an attempt to maintain consistency between changes, we've standardized on using the version of `clang-format` that ships with the latest version of Visual Studio.
If you have LLVM installed and added to your `PATH`, the version of `clang-format` that gets picked up by default may not be the one we expect.

Before submitting a PR to the cppwinrt repo we ask that you first run `clang-format` on your changes.
There is a CI check in place that will fail the build for your PR if you have not run `clang-format`.
`clang-format` will run automatically as part of `build_test_all.cmd`, so if you use that script this
should happen automatically.
