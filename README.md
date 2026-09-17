# C++/WinRT Plus

[![CI Tests](https://github.com/YexuanXiao/cppwinrtplus/actions/workflows/ci.yml/badge.svg)](https://github.com/YexuanXiao/cppwinrtplus/actions/workflows/ci.yml)

C++/WinRT Plus is a community-driven evolution of the original C++/WinRT project. This independent initiative is neither affiliated with nor sponsored by Microsoft. Our mission is to address long-standing issues in C++/WinRT and deliver meaningful improvements to the developer experience. While the project introduces some breaking changes, we provide a simple and smooth migration path. You can continue using it just as you would with C++/WinRT.

We're deeply grateful to the original authors of C++/WinRT for their groundbreaking work, which gave the C++ community first-class access to the Windows Runtime.

With development on the original project slowing, we believe it's time for the community to take the lead. C++/WinRT Plus builds on that strong foundation—preserving what works while addressing the issues that matter most to daily users. Join us in shaping the future of Windows Runtime development in C++.

## How to use

You can install the package directly via NuGet with the ID YexuanXiao.CppWinRTPlus.

## Roadmap

The current plans for C++/WinRT Plus can be viewed in the issue list. C++/WinRT Plus currently has many ambitious improvements, so your help is greatly needed!

## Changelog

Since the C++/WinRT mainline has accepted our module implementation, C++/WinRT Plus is now rebased onto the C++/WinRT 3.0 mainline to maintain compatibility.

All the changes listed here only show the differences from the C++/WinRT mainline, and once the C++/WinRT Plus commits are merged upstream, they will be removed.

2026/09/17:

1. C++/WinRT Plus can now work with our VSIX extension to provide visualization for WinRT types in third-party NuGet packages (such as WindowsAppSDK).
2. Fixed the issue where XamlMetadataProvider.cpp still requires the pch.h even when it is disabled.
3. Optimized the performance of winrt::to_string using C++23's new resize_and_overwrite function.

2026/03/24: Support using lambdas with explicit object parameter as delegates to resolve the issue where the captured lifetime may be shorter than the lifetime of the coroutine frame.

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

## Testing
This repository uses the [Catch2](https://github.com/catchorg/Catch2) testing framework.
- From a Visual Studio command line, you should run `build_tests_all.cmd` to build and run the tests. To Debug the tests, you can debug the associated `_build\$(arch)\$(flavor)\<test>.exe` under the debugger of your choice.
- Optionally, you can install the [Catch2Adapter](https://marketplace.visualstudio.com/items?itemName=JohnnyHendriks.ext01) to run the tests from Visual Studio.