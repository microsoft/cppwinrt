This test project is a WinRT component (DLL) that consumes a pre-built winrt
C++20 module from TestModuleBuilder.

It sets CppWinRTModuleConsume=true and has IDL files, which exercises the
component authoring workflow with modules:
- The NuGet targets pass -module to cppwinrt.exe
- Generated .g.h files use 'import winrt;' instead of #include directives
- The PCH does NOT include winrt/ headers (they come from the module)
- Component projection is still generated for the project's own types
