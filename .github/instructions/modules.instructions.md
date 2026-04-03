---
applyTo: "strings/**,cppwinrt/**,nuget/**,test/test_cpp20_module_winrt/**,test/test_cpp23_module_winrt/**,test/test_cpp20_module/**,test/test_component_module/**,test/nuget/TestModule*/**"
---

# C++20 Module Code Generation

## When Modifying strings/*.h Files

These files are embedded as string literals by the prebuild step. They are NOT
normal headers:

1. Changes require rebuilding prebuild → cppwinrt → regenerating projection
2. The natvis project includes these files directly via its pch.h — add any new
   files there too
3. `WINRT_EXPORT` prefixes `namespace winrt` (public) AND `namespace winrt::impl`
   (for component template specialization). Both expansions are needed.
4. `base_module_macros.h` is the single source of truth for macros shared between
   module and header modes. Don't duplicate definitions — use `#ifndef` guards.

## Module-Aware Component Code Generation (WINRT_MODULE macro)

Generated component files use `#ifdef WINRT_MODULE` guards to support both
module and header modes. No special cppwinrt.exe flag is needed — the
`WINRT_MODULE` preprocessor macro is set at the project level by the NuGet
targets (or manually for non-NuGet projects).

### module.g.cpp
- Keeps `#include "pch.h"` (PCH is compatible with modules)
- `#ifdef WINRT_MODULE`: uses `import winrt;` (and conditional `import std;`)
- `#else`: uses `#include "winrt/base.h"`

### .g.h (component base template)
- `#ifdef WINRT_MODULE`: emits `#include "winrt/base_macros.h"` for macros,
  conditional `import std;`, `import winrt;`, `#define WINRT_IMPL_SKIP_INCLUDES`
- Always includes component's own headers (which skip SDK deps via the guard)

### .g.cpp (factory + optimized constructors)
- Always emits the `winrt_make_*` factory function
- Constructor/static overrides are guarded by `#ifndef WINRT_MODULE`
  (they come from the projection header via the module in module mode)

## WINRT_IMPL_SKIP_INCLUDES

Generated namespace headers guard cross-namespace `#include` dependencies with:
```cpp
#ifndef WINRT_IMPL_SKIP_INCLUDES
#include "winrt/base.h"
#endif
```

- Cross-namespace dependencies (other namespaces' impl headers): GUARDED
  (`write_depends_guarded` / `write_root_include_guarded`)
- Self-namespace dependencies (own impl headers): NOT guarded
  (`write_depends` / `write_root_include`)
- base.h include in version assert: GUARDED with base_macros.h fallback

## Test Project Architecture

- `test_module_winrt` — Static lib that builds winrt.ixx. Generates projection
  to its own "Generated Files" directory. Other module projects reference its
  IFC and OBJ.
- `test_cpp20_module` — Consumer test app. References test_module_winrt's IFC/OBJ.
  Uses PCH for non-winrt headers (catch.hpp, Windows.h).
- `test_component_module` — Component DLL. References test_module_winrt's IFC/OBJ.
  Has its own MIDL/cppwinrt steps for component projection.

All module test projects use v143 toolset. `import std;` requires `BuildStlModules=true`
and either v145 toolset or `/std:c++latest` on v143.

## NuGet Module Integration (test/nuget/)

The NuGet targets split module support into two properties:

- `CppWinRTModuleBuild=true` — Project generates the SDK projection and compiles
  winrt.ixx. Exports IFC/OBJ/include paths via `CppWinRTGetModuleOutputs` target.
- `CppWinRTModuleConsume=true` — Project consumes a pre-built module from a
  `ProjectReference` to a builder. `CppWinRTResolveModuleReferences` target
  resolves paths via `MSBuild` task calling `CppWinRTGetModuleOutputs` on refs.

Both properties define `WINRT_MODULE` so generated component files use `import winrt;`.
`CppWinRTModuleConsume` auto-sets `CppWinRTEnablePlatformProjection=false`.

### NuGet Module Test Projects

- `test/nuget/TestModuleBuilder` — StaticLib, `CppWinRTModuleBuild=true`. Builds
  the shared winrt module. No source files — NuGet targets add winrt.ixx.
- `test/nuget/TestModuleConsumerApp` — Console app, `CppWinRTModuleConsume=true`.
  References TestModuleBuilder. Uses `import std; import winrt;`.
- `test/nuget/TestModuleComponent` — DLL with IDL, `CppWinRTModuleConsume=true`.
  References TestModuleBuilder. Component .g.h files use `import winrt;`.
- `test/nuget/TestModuleSingleProject` — Console app, `CppWinRTModuleBuild=true`.
  Builds and consumes module in one project (no separate builder).
