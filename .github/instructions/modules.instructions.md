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
  conditional `import std;`, `import winrt;`
- Always includes component's own headers. Platform deps are skipped by
  per-namespace `WINRT_MODULE_NS_*` guards; component cross-namespace deps
  are included normally.

### .g.cpp (factory + optimized constructors)
- Always emits the `winrt_make_*` factory function
- Constructor/static overrides are guarded by `#ifndef WINRT_MODULE`
  (they come from the projection header via the module in module mode)

## Macro Scoping

Two project-level macros and one set of per-namespace macros control behavior:

- `WINRT_BUILD_MODULE` — Defined by cppwinrt inside winrt.ixx's global module
  fragment. Controls base.h skip in version assert. Does NOT include
  `winrt_module_namespaces.h` (inside the ixx, all deps must resolve).
  Never set by users or NuGet targets.
- `WINRT_MODULE` — Defined project-wide by NuGet targets. Controls .g.h/.g.cpp
  behavior, version assert base.h skip, AND triggers inclusion of
  `winrt_module_namespaces.h` for per-namespace guards.
- `WINRT_MODULE_NS_*` — Per-namespace macros (e.g. `WINRT_MODULE_NS_Windows_Foundation`)
  defined in the generated `winrt_module_namespaces.h`. Each cross-namespace
  `#include` dep is guarded by `#ifndef WINRT_MODULE_NS_<namespace>`. Only
  namespaces in the module are skipped; component and other deps always resolve.

## Per-Namespace Include Guards

Generated namespace headers use per-namespace guards for cross-namespace deps:
```cpp
#ifndef WINRT_MODULE_NS_Windows_Foundation
#include "winrt/impl/Windows.Foundation.0.h"
#endif
```

The version assert at the top of each namespace header:
```cpp
#if defined(WINRT_BUILD_MODULE) || defined(WINRT_MODULE)
#include "winrt/base_macros.h"
#endif
#if defined(WINRT_MODULE) && !defined(WINRT_BUILD_MODULE)
#include "winrt/winrt_module_namespaces.h"
#endif
#if !defined(WINRT_BUILD_MODULE) && !defined(WINRT_MODULE)
#include "winrt/base.h"
#endif
```

- Cross-namespace dependencies: GUARDED by `WINRT_MODULE_NS_*`
  (`write_depends_guarded` / `write_root_include_guarded`)
- Self-namespace dependencies: NOT guarded
  (`write_depends` / `write_root_include`)
- base.h include: GUARDED by `WINRT_BUILD_MODULE || WINRT_MODULE`

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
