# YexuanXiao.CppWinRTPlus NuGet Package

Please read the [repository](https://github.com/YexuanXiao/cppwinrtplus)'s README.md for usage instructions.

## Changelog

Since the C++/WinRT mainline has accepted our module implementation, C++/WinRT Plus is now rebased onto the C++/WinRT 3.0 mainline to maintain compatibility.

All the changes listed here only show the differences from the C++/WinRT mainline, and once the C++/WinRT Plus commits are merged upstream, they will be removed.

2026/09/17:

1. C++/WinRT Plus can now work with our VSIX extension to provide visualization for WinRT types in third-party NuGet packages (such as WindowsAppSDK).
2. Fixed the issue where XamlMetadataProvider.cpp still requires the pch.h even when it is disabled.
3. Optimized the performance of winrt::to_string using C++23's new resize_and_overwrite function.

2026/03/24: Support using lambdas with explicit object parameter as delegates to resolve the issue where the captured lifetime may be shorter than the lifetime of the coroutine frame.

## Overview

Please visit [Microsoft.Windows.CppWinRT](https://www.nuget.org/packages/Microsoft.Windows.CppWinRT/) for official Microsoft-signed builds of the NuGet package.  See also the [C++/WinRT](https://aka.ms/cppwinrt/vsix/) VSIX, which provides C++/WinRT project templates and debug visualization.

To add build support for C++/WinRT vcxproj projects, add a reference to the Microsoft.Windows.CppWinRT NuGet package.  This customizes your project's build rules to automatically generate C++/WinRT projection headers, enabling you to both consume and produce Windows Runtime classes.

C++/WinRT detects Windows metadata required by the project, from:

* Platform winmd files in the SDK (both MSI and NuGet)
* NuGet package references containing winmd files
* Other project references producing winmd files
* Raw winmd file references
* Interface definition language (IDL) files in the project

For any winmd file discovered above, C++/WinRT creates reference (consuming) projection headers.  Client code can simply #include these headers, which are created in the generated files directory (see below).

For any IDL file contained in the project, C++/WinRT creates component (producing) projection headers.  In addition, C++/WinRT generates templates and skeleton implementations for each runtime class, under the generated files directory.

## Details

C++/WinRT configures build rules for the following tools:

* C++ compiler
* C++/WinRT compiler
* MdMerge utility
* Midlrt utility
* Xaml compiler

It sets the following project properties and item metadata:

| Property | Value | Description |
|-|-|-|
| [PreferredToolArchitecture](https://learn.microsoft.com/en-us/cpp/build/reference/msbuild-visual-cpp-overview?view=msvc-180) | x64 | Enables the compiler to use more memory |
| CanReferenceWinRT | true | Enables native project references (e.g., to WinMD files) |
| GeneratedFilesDir | *$(IntDir)Generated Files\ | Sets the folder for C++/WinRT generated source files |
| XamlLanguage | CppWinRT | Directs the Xaml compiler to generate C++/WinRT code |
| ClCompile.CompileAsWinRT | *false | Enables ISO C++ compilation (disables C++/CX) |
| ClCompile.LanguageStandard | *stdcpp20 | Enables C++20 language features |
| ClCompile.AdditionalOptions | /bigobj | Enables support for large object files |
| ClCompile.AdditionalIncludeDirectories | GeneratedFilesDir | Adds $(GeneratedFilesDir) to the C++ include dirs |
| Link.AdditionalDependencies | WindowsApp.lib | Umbrella library for Windows Runtime imports |
| Midl.AdditionalOptions | /reference ... | Enables faster compilation with winmd references (versus idl imports) |
| Midl.EnableWindowsRuntime | true | Enables Windows Runtime semantics |
| Midl.MetadataFileName | Unmerged\%(Filename).winmd | Generates unmerged metadata in a temporary location |
| Midl.GenerateClientFiles, GenerateServerFiles, GenerateStublessProxies, GenerateTypeLibrary, HeaderFileName, DllDataFileName, InterfaceIdentifierFileName, ProxyFileName, TypeLibraryName | \*nul, \*None, \*false | Disable unnecessary output |

\*If not already set

## Generated Files

The generated files directory created by C++/WinRT contains two subfolders:

* sources: runtime class skeleton implementations
* winrt: reference projection headers

## Customizing

C++/WinRT behavior can be customized with these project properties:

| Property | Value | Description |
|-|-|-|
| CppWinRTLibs | *true \| false | Enables the Link item metadata settings above |
| CppWinRTModernIDL | *true \| false | Enables the Midl item metadata settings above |
| CppWinRTVerbosity | low \| *normal \| high | Sets the [importance](https://learn.microsoft.com/en-us/visualstudio/msbuild/message-task?view=visualstudio) of C++/WinRT build messages (see below) |
| CppWinRTNamespaceMergeDepth | *1 | Sets the depth of namespace merging (Xaml apps require 1) |
| CppWinRTRootNamespaceAutoMerge | true \| *false | Sets the namespace merge depth to be the length of the root namespace |
| CppWinRTMergeNoValidate | true \| *false | Disables mdmerge validation |
| CppWinRTUsePrefixes | *true \| false | Uses a dotted prefix namespace convention (versus a nested folder convention) |
| CppWinRTUseModules | true \| *false | Generate C++ modules (ixx) for each namespaces |
| CppWinRTPath | ...\cppwinrt.exe | NuGet package-relative path to cppwinrt.exe, for custom build rule invocation |
| CppWinRTParameters | "" | Custom cppwinrt.exe command-line parameters (be sure to append to existing) |
| CppWinRTFastAbi | true \| *false | Enables Fast ABI feature for both consuming and producing projections |
| CppWinRTOptimized | true \| *false | Enables component projection [optimization features](https://kennykerr.ca/2019/06/07/cppwinrt-optimizing-components/) |
| CppWinRTGenerateWindowsMetadata | true \| *false | Indicates whether this project produces Windows Metadata |
| CppWinRTEnableDefaultPrivateFalse | true \| *false | Indicates whether this project uses C++/WinRT optimized default for copying binaries to the output directory |

\*Default value

To customize common C++/WinRT project properties:

* right-click the project node
* expand the Common Properties item
* select the C++/WinRT property page

## Exclude what you don't want

You can prevent unnecessary namespaces from being generated, such as, by adding a CppWinRT.config file to the solution directory. Since some modules are very large, this can effectively reduce compilation time.

The format of the configuration file is:

```xml
<?xml version="1.0" encoding="utf-8"?>
<configuration>
    <include>
        <prefix>Windows.Foundation</prefix>
    </include>
    <exclude>
        <prefix>Windows.UI.Xaml</prefix>
        <prefix>Windows.ApplicationModel.Store</prefix>
    </exclude>
</configuration>
```

It is equivalent to passing `-config <path\` to cppwinrt.exe, which combines the `-include` and `-exclude` options.

Note that namespace exclusion occurs at a very early stage of the build process, so a clean build needs to be performed for it to take effect.

It's suggest excluding Windows.UI.Xaml and Windows.ApplicationModel.Store, as the latter depends on the former. By excluding Windows.UI.Xaml, the BMI size can be reduced by one-third.

## Using C++ modules

When writing a module, you should ensure that any third-party library includes are placed before `export module`. All module tutorials will teach this.

When consuming a module, you need to ensure that all third-party includes are placed before `import`. For details on how to consume XAML modules, refer to the explanation below.

## Make XAML modular

XAML components written with C++/WinRT typically have two files: `Class.xaml.h` and `Class.xaml.cpp`. To make them modular, rewrite `Class.xaml.h` as follows:  

```cpp
#pragma once

#include "Class.g.h"

namespace winrt::Project::implementation
{
    // Implementation code
}

namespace winrt::Project::factory_implementation
{
    // Implementation code
}
```

Then, rewrite `ClassName.xaml.cpp` as follows:  

```cpp
#define WINRT_CONSUME_MODULE

// Due to current limitations in the XAML Compiler implementation, you need to import all XAML dependencies before including ClassName.xaml.h
import Microsoft.UI.Xaml.Markup;

// Here, you need to import all dependencies of the Class's interface

#include "Class.xaml.h"
#if __has_include("Detail.g.cpp")
#include "Detail.g.cpp"
#endif

namespace winrt::Project::implementation
{
    // Implementation code
}
```

Additionally, you can disbale pch for `Class.xaml.cpp`.  

Note that `App.xaml.h` has a special form. You also need to add the following right before `#include "App.xaml.h"`:  

```cpp
#define COM_NO_WINDOWS_H
#define __unknwn_h__
#define __RPC_H__
#define __RPCNDR_H__
#define _INC_WINAPIFAMILY
#define _INC_WINDOWS
#define _INC_SDKDDKVER

#define _FUNCTIONAL_
#define _VECTOR_
#define _MAP_
#define _MUTEX_
```

You can refer to [this example](https://github.com/YexuanXiao/Authenticator/tree/module) to modularize your project.

## InitializeComponent

In older versions of C++/WinRT, Xaml objects called InitializeComponent from constructors. This can lead to memory corruption if InitializeComponent throws an exception.

```cpp
void MainPage::MainPage()
{
    // This pattern should no longer be used
    InitializeComponent();
}
```

C++/WinRT now calls InitializeComponent automatically and safely, after object construction. Explicit calls to InitializeComponent from constructors in existing code should now be removed. Multiple calls to InitializeComponent are idempotent.

If a Xaml object needs to access a Xaml property during initialization, it should override InitializeComponent:

```cpp
void MainPage::InitializeComponent()
{
    // Call base InitializeComponent() to register with the Xaml runtime
    MainPageT::InitializeComponent();
    // Can now access Xaml properties
    MyButton().Content(box_value(L"Click"));
}
```

A non-Xaml object can also participate in two-phase construction by defining an InitializeComponent method.

```cpp
void MyComponent::InitializeComponent()
{
    // Execute initialization logic that may throw 
}
```

***[Windows|Microsoft]::UI::Xaml::Markup::ComponentConnectorT***

A consequence of calling InitializeComponent outside construction is that Xaml runtime callbacks to IComponentConnector::Connect and IComponentConnector2::GetBindingConnector are now dispatched to the most derived implementations. Previously, these calls were dispatched directly to the class under construction, as the vtable had yet to be initialized. For objects with markup that derive from composable base classes with markup, this is a breaking change. Derived classes must now implement IComponentConnector::Connect and IComponentConnector2::GetBindingConnector by explicitly calling into the base class. The ComponentConnectorT template provides a correct implementation for these interfaces:

```cpp
struct DerivedPage : winrt::Windows::UI::Xaml::Markup::ComponentConnectorT<DerivedPageT<DerivedPage>>
```

If overriding DerivedPage::InitializeComponent, ComponentConnectorT::InitializeComponent should be called instead of DerivedPageT::InitializeComponent:

```cpp
void DerivedPage::InitializeComponent()
{
    // Call base InitializeComponent() to register with the Xaml runtime
    ComponentConnectorT::InitializeComponent();
    // Can now access Xaml properties from base or derived class
    MyBaseButton().Content(box_value(L"Click"));
}
```

## Troubleshooting

The msbuild verbosity level maps to msbuild message importance as follows:

| Verbosity | Importance |
|-|-|
| q[uiet] | n/a |
| m[inimal] | high |
| n[ormal] | normal+ |
| d[etailed], diag[nostic] | low+ |

For example, if the verbosity is set to minimal, then only messages with high importance are generated.  However, if the verbosity is set to diagnostic, then all messages are generated.

The default importance of C++/WinRT build messages is 'normal', but this can be overridden with the CppWinRTVerbosity property to enable throttling of C++/WinRT messages independent of the overall verbosity level.

Example:
> msbuild project.vcxproj /verbosity:minimal /property:CppWinRTVerbosity=high ...

For more complex analysis of build errors, the [MSBuild Binary and Structured Log Viewer](http://msbuildlog.com/) is highly recommended.

## Building, Testing

Be sure to get the latest nuget.exe from [nuget.org](https://www.nuget.org/downloads) and place it in your path.

Build the package by running [build_nuget.cmd](../build_nuget.cmd) from a developer environment command line. For testing pass a version number that is much higher than your currently installed, like:

```
c:\repos\cppwinrt> .\build_nuget.cmd 5.0.0.0
```

Add the cppwinrt repo directory as a nuget source location and update your projects' references to point at it, update project references, then rebuild a test/sample project.
