# C++/WinRT Modules — Agent Instructions

## Module Architecture (v2 — Per-Namespace)

Each WinRT namespace gets its own C++20 named module (`winrt.<Namespace>`). Base infrastructure is in `winrt_base` and `winrt_numerics`.

### Code Generator Flow

1. `-modules` flag enables .ixx generation in cppwinrt.exe
2. `-module_include`/`-module_exclude` filter which namespaces get modules
3. Headers are generated with dependency tracking (deps_ptr parameter)
4. Tarjan's SCC algorithm detects cyclic namespace groups
5. Standalone namespaces get individual .ixx; cyclic groups get consolidated SCC owner + re-export stubs

### MSBuild Flow

1. `CppWinRTBuildModule=true` adds `-modules` to cppwinrt.exe invocations
2. `CppWinRTAddModuleInterfaces` discovers `$(GeneratedFilesDir)winrt\*.ixx` and adds to ClCompile
3. `CppWinRTConsumeModule` metadata on ProjectReference controls per-reference IFC sharing
4. `CppWinRTResolveModuleReferences` calls `CppWinRTGetModuleOutputs` on tagged references
5. Platform projection suppresses `-modules` when consuming pre-built IFCs

### Critical Invariants

- Module guards are unconditional in codegen — `-modules` controls .ixx generation and component codegen (module.g.cpp, stub .cpp)
- SCC owner is alphabetically first namespace in the cycle
- All .ixx filenames use `winrt` prefix: `winrt.Windows.Foundation.ixx`, `winrt_base.ixx`
- Shared macros live in `strings/base_module.h` → generates `winrt/macros.h`. `base_macros.h` includes it via `#include "winrt/macros.h"`

### Testing Changes

After modifying cppwinrt.exe code:
1. Rebuild cppwinrt.exe: `msbuild cppwinrt\cppwinrt.vcxproj /p:Configuration=Release /p:Platform=x64`
2. Run standalone test: build `test_cpp20_module` in main solution
3. Run NuGet tests: `msbuild test\nuget\NuGetTest.sln /p:Configuration=Release /p:Platform=x64`

After modifying targets:
1. Clean NuGet test obj dirs
2. Build with `/v:normal` and check "Module providers:" diagnostic messages
3. Inspect `.rsp` files in `obj/` to verify correct `-modules` flag placement
