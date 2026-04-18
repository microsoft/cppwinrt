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
- Always includes component's own namespace headers. The module guard inside
  each namespace header auto-imports the winrt module (guarded by
  `WINRT_MODULE_IMPORTED`) and loads `winrt_module_namespaces.h`. No
  WINRT_MODULE-specific logic is needed in the .g.h itself.
- Platform deps are skipped by per-namespace `WINRT_MODULE_NS_*` guards;
  component cross-namespace deps are included normally.

### .g.cpp (factory + optimized constructors)
- Always emits the `winrt_make_*` factory function
- Constructor/static overrides are guarded by `#ifndef WINRT_MODULE`
  (they come from the projection header via the module in module mode)

## Macro Scoping

Two project-level macros and per-namespace macros control behavior:

- `WINRT_BUILD_MODULE` — Defined by cppwinrt inside winrt.ixx's global module
  fragment. Tells the module guard to use `base_macros.h` only. Does NOT include
  `winrt_module_namespaces.h` (inside the ixx, all deps must resolve).
  Never set by users or NuGet targets.
- `WINRT_MODULE` — Defined project-wide by NuGet targets. Activates the
  boundary-based module guard in namespace headers. Also controls .g.h/.g.cpp
  behavior: whether to use `import winrt;` vs `#include`. The module guard
  checks `WINRT_MODULE_NS_<self>` to decide: if the header's own namespace is
  in the module, traditional `#include "base.h"` is used; if not, the TU must
  have already imported winrt, and `base_macros.h` is used instead.
- `WINRT_IMPORT_STD` — Defined project-wide by NuGet targets when
  `BuildStlModules` is enabled. Enables `import std;` in winrt.ixx (module
  purview), `.g.h`, and `module.g.cpp`. Does NOT affect base.h — `import std;`
  inside base.h is unsafe because platform headers transitively include STL
  headers first.
- `WINRT_MODULE_NS_*` — Per-namespace macros (e.g. `WINRT_MODULE_NS_Windows_Foundation`)
  defined in the generated `winrt_module_namespaces.h`. Cross-namespace deps
  use compound guards: `!defined(NS_dep) || defined(NS_self)`.
  This skips module deps only when the including header is NOT itself in the module.

## Per-Namespace Include Guards

Generated namespace headers use compound guards for cross-namespace deps:
```cpp
#if !defined(WINRT_MODULE_NS_Windows_Foundation_Collections) || defined(WINRT_MODULE_NS_Windows_Foundation)
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#endif
```

The module guard at the top of each namespace header (e.g. Windows.Foundation):
```cpp
#if defined(WINRT_MODULE) && !defined(WINRT_BUILD_MODULE)
#include "winrt/winrt_module_namespaces.h"
#endif
#if defined(WINRT_BUILD_MODULE)
#include "winrt/base_macros.h"
#elif defined(WINRT_MODULE) && !defined(WINRT_MODULE_NS_Windows_Foundation)
#include "winrt/base_macros.h"
#else
#include "winrt/base.h"
#endif
```

- Cross-namespace dependencies: GUARDED by compound `WINRT_MODULE_NS_*` condition
  (`write_depends_guarded` / `write_root_include_guarded`)
- Self-namespace dependencies: NOT guarded
  (`write_depends` / `write_root_include`)
- base.h include: Skipped when `WINRT_BUILD_MODULE` or when namespace not in module

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

## Module Namespace Filtering (-module_filter)

The `-module_filter` cppwinrt.exe arg controls which namespaces go into
`winrt.ixx` and `winrt_module_namespaces.h`. All namespace headers are still
generated for textual inclusion — only the module contents are filtered.

- NuGet property: `CppWinRTModuleFilter` (space-separated prefixes)
- cppwinrt.exe arg: `-module_filter <prefix>` (can be repeated)
- Implementation: `settings.ixx_filter` in `main.cpp`/`settings.h`
- The repo test builders use `-module_filter Windows.Foundation` to speed up
  the inner loop (5 namespaces instead of 339).

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
