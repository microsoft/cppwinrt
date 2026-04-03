This test project consumes a pre-built winrt C++20 module from TestModuleBuilder.

It sets CppWinRTModuleConsume=true, which causes the NuGet targets to:
1. Resolve the IFC/OBJ from the TestModuleBuilder project reference
2. Add the IFC to AdditionalModuleDependencies
3. Add the OBJ to linker AdditionalDependencies
4. Add the builder's GeneratedFilesDir to AdditionalIncludeDirectories
5. Skip regenerating the platform projection (CppWinRTEnablePlatformProjection=false)

Source files use 'import winrt;' instead of #include directives.
