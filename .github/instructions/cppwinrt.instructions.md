# C++/WinRT Codebase — Agent Instructions

## Repository Structure

- `cppwinrt/` — The cppwinrt.exe code generator (C++ source)
  - `main.cpp` — CLI parsing, namespace iteration, SCC detection, .ixx orchestration
  - `file_writers.h` — All file generation functions (headers, .ixx modules, component stubs)
  - `code_writers.h` — Code-level writing utilities (guards, namespace wrappers, type writers)
  - `type_writers.h` — Type formatting (ABI signatures, names, GUIDs)
  - `component_writers.h` — Component authoring code generation
  - `helpers.h` — Metadata reading helpers
  - `settings.h` — Global settings populated from CLI args
  - `text_writer.h` — Core text writer infrastructure
- `strings/` — String literal `.h` files embedded by the prebuild step. Changes require: delete prebuild.exe → rebuild solution
- `nuget/` — MSBuild targets, props, and NuGet packaging
  - `Microsoft.Windows.CppWinRT.targets` — Main MSBuild integration (projections, module support)
- `test/` — Test projects
  - `test/test_cpp20_module/` — Standalone module test (in main solution)
  - `test/nuget/` — NuGet integration tests (multi-project module chain)
- `docs/` — Documentation
- `natvis/` — Visual Studio debug visualizer (includes strings/*.h in its pch.h — add new files there too)

## Build Process

- Use VS Developer Shell for correct toolset environment
- `cmake --build build --config Release --target cppwinrt` for cppwinrt.exe (or MSBuild: `msbuild cppwinrt\cppwinrt.vcxproj /p:Configuration=Release /p:Platform=x64`)
- NuGet tests: `msbuild test\nuget\NuGetTest.sln /p:Configuration=Release /p:Platform=x64`
- Module test projects require v145 toolset (VS 2026). Directory.Build.Props sets v143 by default — override with `<PlatformToolset>v145</PlatformToolset>` in Configuration PropertyGroup

## Key Patterns

### Prebuild Embedding
The `strings/*.h` files are embedded as string literals by the prebuild step. If you modify any `strings/*.h` file, you must delete `prebuild.exe` and rebuild the entire solution for changes to take effect.

### Module Guard Macros
- `WINRT_IMPL_BUILD_MODULE` — Defined in .ixx global fragment. Makes `WINRT_EXPORT` expand to `export extern "C++"` and suppresses `#include` of dependencies
- `WINRT_IMPORT_MODULE` — Defined by consumers who import modules. Makes namespace headers and base.h no-op (types come from module import)
- `WINRT_EXPORT` — Empty in header mode, `export extern "C++"` in module mode. Defined in `winrt/base_macros.h`
- `WINRT_IMPL_STD_EXPORT` — Empty in header mode, `extern "C++"` (without export) in module mode. Used for `namespace std` specializations

### Generated Header Structure
Each namespace produces four header files:
- `impl/<ns>.0.h` — Forward declarations, ABIs, GUIDs, categories
- `impl/<ns>.1.h` — Interface definitions
- `impl/<ns>.2.h` — Delegates, structs, class implementations
- `<ns>.h` — Public API surface (consume definitions, class wrappers, operators)

### Dependency Collection
When generating headers with `-modules`, writer.depends is inspected after each header to build a namespace dependency graph. This graph drives SCC detection and module import lists.

## Common Gotchas

- Module IFCs are NOT compatible across toolset versions — always clean rebuild when switching
- PCH and modules can coexist but PCH should NOT include winrt headers when using modules
- `/ifcSearchDir` works for the module dependency scanner to find IFCs, but cross-component modules may need explicit `/reference "name=path.ifc"` flags
- `import std;` requires `BuildStlModules=true`
- `strings/base_macros.h` is the single source of truth for shared macros (generated as `winrt/base_macros.h`). New macros go in `base_macros.h` only
- When adding, removing, or heavily refactoring `strings/*.h` files, always rebuild the natvis project (`natvis/cppwinrtvisualizer.sln`) to verify — it includes strings/*.h directly in its pch.h
