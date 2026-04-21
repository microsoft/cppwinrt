This test project both builds and consumes the winrt C++20 module in a single project.

It sets CppWinRTModuleBuild=true only (no CppWinRTModuleConsume), which causes
the NuGet targets to:
1. Generate the platform SDK projection headers
2. Compile winrt.ixx as a C++20 module interface unit
3. Make the module available for import within the same project

This validates the single-project scenario where there is no separate builder.
