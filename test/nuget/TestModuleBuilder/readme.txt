This test project builds the winrt C++20 module (winrt.ixx) via the NuGet targets.

It sets CppWinRTModuleBuild=true, which causes the NuGet targets to:
1. Generate the platform SDK projection headers
2. Compile winrt.ixx as a C++20 module interface unit
3. Export the module IFC/OBJ paths via CppWinRTGetModuleOutputs

Other projects reference this one and set CppWinRTModuleConsume=true
to automatically pick up the IFC, OBJ, and include paths.
