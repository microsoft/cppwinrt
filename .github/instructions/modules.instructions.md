---
applyTo: "strings/**,cppwinrt/**,nuget/**,test/test_cpp20_module_winrt/**,test/test_cpp23_module_winrt/**,test/test_cpp20_module/**,test/test_component_module/**"
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

## Module-Aware Code Generation (-module flag)

When `settings.component_module` is true:

### module.g.cpp
- Keeps `#include "pch.h"` (PCH is compatible with modules)
- Replaces `#include "winrt/base.h"` with `import winrt;`
- `import std;` is conditional: `#ifdef WINRT_IMPORT_STD`

### .g.h (component base template)
- Emits `#include "winrt/base_macros.h"` for macros
- Emits conditional `import std;` + unconditional `import winrt;`
- Emits `#define WINRT_IMPL_SKIP_INCLUDES` then includes component's own headers
- Does NOT include platform namespace headers (they come from the module)

### .g.cpp (factory + optimized constructors)
- In module mode, emits ONLY the `winrt_make_*` factory function
- Constructor/static overrides are omitted (they come from the component's
  projection header, which is included by the .g.h after import winrt)

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
