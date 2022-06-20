# Microsoft.Windows.CppWinRT NuGet Package

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
| [PreferredToolArchitecture](https://docs.microsoft.com/en-us/cpp/build/msbuild-visual-cpp-overview?view=vs-2017) | x64 | Enables the compiler to use more memory |
| CanReferenceWinRT | true | Enables native project references (e.g., to WinMD files) |
| GeneratedFilesDir | *$(IntDir)Generated Files\ | Sets the folder for C++/WinRT generated source files |
| XamlLanguage | CppWinRT | Directs the Xaml compiler to generate C++/WinRT code |
| ClCompile.CompileAsWinRT | *false | Enables ISO C++ compilation (disables C++/CX) |
| ClCompile.LanguageStandard | *stdcpp17 | Enables C++17 language features |
| ClCompile.AdditionalOptions | /bigobj | Enables support for large object files |
| ClCompile.AdditionalIncludeDirectories | GeneratedFilesDir | Adds $(GeneratedFilesDir) to the C++ include dirs |
| Link.AdditionalDependencies | WindowsApp.lib | Umbrella library for Windows Runtime imports |
| Midl.AdditionalOptions | /reference ... | Enables faster compilation with winmd references (versus idl imports) |
| Midl.EnableWindowsRuntime | true | Enables Windows Runtime semantics |
| Midl.MetadataFileName | Unmerged\%(Filename).winmd | Generates unmerged metadata in a tempoary location |
| Midl.GenerateClientFiles, GenerateServerFiles, GenerateStublessProxies, GenerateTypeLibrary, HeaderFileName, DllDataFileName, InterfaceIdentifierFileName, ProxyFileName, TypeLibraryName | *nul, *None, *false | Disable unnecessary output |
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
| CppWinRTVerbosity | low \| *normal \| high | Sets the [importance](https://docs.microsoft.com/en-us/visualstudio/msbuild/message-task?view=vs-2017) of C++/WinRT build messages (see below) |
| CppWinRTNamespaceMergeDepth | *1 | Sets the depth of namespace merging (Xaml apps require 1) |
| CppWinRTRootNamespaceAutoMerge | true \| *false | Sets the namespace merge depth to be the length of the root namespace |
| CppWinRTMergeNoValidate | true \| *false | Disables mdmerge validation |
| CppWinRTUsePrefixes | *true \| false | Uses a dotted prefix namespace convention (versus a nested folder convention) |
| CppWinRTPath | ...\cppwinrt.exe | NuGet package-relative path to cppwinrt.exe, for custom build rule invocation |
| CppWinRTParameters | "" | Custom cppwinrt.exe command-line parameters (be sure to append to existing) |
| CppWinRTFastAbi | true \| *false | Enables Fast ABI feature for both consuming and producing projections |
| CppWinRTProjectLanguage | C++/CX \| *C++/WinRT | Selects the C++ dialect for the project.  C++/WinRT provides full projection support, C++/CX permits consuming projection headers. |
| CppWinRTOptimized | true \| *false | Enables component projection [optimization features](https://kennykerr.ca/2019/06/07/cppwinrt-optimizing-components/) |
| CppWinRTGenerateWindowsMetadata | true \| *false | Indicates whether this project produces Windows Metadata |
| CppWinRTEnableDefaultPrivateFalse | true \| *false | Indicates whether this project uses C++/WinRT optimized default for copying binaries to the output directory |
\*Default value

To customize common C++/WinRT project properties: 
* right-click the project node
* expand the Common Properties item
* select the C++/WinRT property page

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

A consequence of calling InitializeComponent outside construction is that Xaml runtime callbacks to IComponentConnector::Connect and IComponentConnector2::GetBindingConnector are now dispatched to the most derived implementations. Previously, these calls were dispatched directly to the class under construction, as the vtable had yet to be initialized. For objects with markup that derive from composable base classes with markup, this is a breaking change. Derived classes must now implement IComponentConnector::Connect and IComponentConnector2::GetBindingConnector by explicitly calling into the base class. The ComponentConnectorT template provides a correct implemenation for these interfaces:

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
> msbuild project.vcxproj /vebosity:minimal /property:CppWinRTVerbosity=high ...

For more complex analysis of build errors, the [MSBuild Binary and Structured Log Viewer](http://msbuildlog.com/) is highly recommended.

## Building, Testing

Be sure to get the latest nuget.exe from [nuget.org](https://www.nuget.org/downloads) and place it in your path.

Build the package by running [build_nuget.cmd](../build_nuget.cmd) from a developer environment command line. For testing pass a version number that is much higher than your currently installed, like:

```
c:\repos\cppwinrt> .\build_nuget.cmd 5.0.0.0
```

Add the cppwinrt repo directory as a nuget source location and update your projects' references to point at it, update project references, then rebuild a test/sample project.
