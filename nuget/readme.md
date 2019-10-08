# Microsoft.Windows.CppWinRT NuGet Package

## Overview

Please visit [Microsoft.Windows.CppWinRT](https://www.nuget.org/packages/Microsoft.Windows.CppWinRT/) for official Microsoft-signed builds of the NuGet package.  See also the [C++/WinRT](https://aka.ms/cppwinrt/vsix/) VSIX, which provides C++/WinRT project templates and debug visualization.

To add build support for C++/WinRT vcxproj projects, add a reference to the Microsoft.Windows.CppWinRT NuGet package.  This customizes your project's build rules to automatically generate C++/WinRT projection headers, enabling you to both consume and produce Windows Runtime classes.

C++/WinRT detects Windows metadata referenced by the project, from:
* Platform winmd files in the SDK (both MSI and NuGet)
* NuGet packages containing winmd files
* Other projects producing winmd files
* Raw winmd files
* Interface definition language (IDL) files in the project 

For any winmd file referenced by the project, C++/WinRT creates reference (consuming) projection headers.  Client code can simply #include these headers, which are created in the generated files directory (see below).

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
| ClCompile.AdditionalOptions | /bigobj /await | Enables support for large object files and coroutines |
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
| CppWinRTUsePrefixes | *true \| false | Uses a dotted prefix namespace convention (versus a nested folder convention) |
| CppWinRTPath | ...\cppwinrt.exe | NuGet package-relative path to cppwinrt.exe, for custom build rule invocation |
| CppWinRTParameters | "" | Custom cppwinrt.exe command-line parameters (be sure to append to existing) |
| CppWinRTFastAbi | true \| *false | Enables Fast ABI feature for both consuming and producing projections |
| CppWinRTProjectLanguage | C++/CX \| *C++/WinRT | Selects the C++ dialect for the project.  C++/WinRT provides full projection support, C++/CX permits consuming projection headers. |
| CppWinRTOptimized | true \| *false | Enables component projection [optimization features](https://kennykerr.ca/2019/06/07/cppwinrt-optimizing-components/) |
\*Default value

To customize common C++/WinRT project properties: 
* right-click the project node
* expand the Common Properties item
* select the C++/WinRT property page

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

