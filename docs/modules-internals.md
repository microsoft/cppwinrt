# C++/WinRT Code Generator Internals: Module Support

This document is for maintainers of the cppwinrt code generator. It explains the
internal mechanisms that enable C++20 module support, the design decisions behind
them, and the interactions between the various moving pieces.

## Table of Contents

- [File Generation Pipeline](#file-generation-pipeline)
- [winrt.ixx Generation](#winrtixx-generation)
- [The Global Module Fragment Problem](#the-global-module-fragment-problem)
- [base_macros.h: Why Macros Need Special Handling](#base_macrosh-why-macros-need-special-handling)
- [WINRT_IMPL_SKIP_INCLUDES: Guarded Cross-Namespace Includes](#winrt_impl_skip_includes-guarded-cross-namespace-includes)
- [The -module Flag: Component Code Generation](#the--module-flag-component-code-generation)
- [The Combined-ixx Approach](#the-combined-ixx-approach)
- [The windowsnumerics.impl.h Warning](#the-windowsnumericsh-warning)
- [import std Integration](#import-std-integration)
- [Code Paths Reference](#code-paths-reference)

## File Generation Pipeline

The code generator produces these files (per namespace `NS`):

```
write_namespace_0_h(NS)  → winrt/impl/NS.0.h   (forward decls, enums, ABI, consume structs)
write_namespace_1_h(NS)  → winrt/impl/NS.1.h   (interface type definitions)
write_namespace_2_h(NS)  → winrt/impl/NS.2.h   (class/struct/delegate definitions)
write_namespace_h(NS)    → winrt/NS.h           (consume definitions, produce, std::hash)
write_base_h()           → winrt/base.h         (core library: types, COM, error handling, etc.)
write_base_macros_h()    → winrt/base_macros.h  (lightweight macro-only header for module mode)
```

For the ixx, `main.cpp` writes directly to a `writer ixx` object.

For component generation, additional files:
```
write_component_g_h(type)    → Generated Files/<type>.g.h      (implementation base template)
write_component_g_cpp(type)  → Generated Files/<type>.g.cpp    (factory function, opt constructors)
write_module_g_cpp(classes)  → Generated Files/module.g.cpp    (DLL activation factory)
```

## winrt.ixx Generation

**Source**: `main.cpp`, lines ~345-378

The ixx is built by writing directly to a `writer ixx` object:

```cpp
writer ixx;
write_preamble(ixx);
ixx.write("module;\n");                           // global module fragment
ixx.write("#define WINRT_IMPL_GLOBAL_MODULE_FRAGMENT\n");
ixx.write(strings::base_includes);                // standard library #includes
ixx.write("#undef WINRT_IMPL_GLOBAL_MODULE_FRAGMENT\n");
ixx.write("\nexport module winrt;\n#define WINRT_EXPORT export\n\n");

for (auto ns : namespaces)
    ixx.write("#include \"winrt/NS.h\"\n");       // all namespace headers

ixx.flush_to_file("winrt/winrt.ixx");
```

Key points:
- `strings::base_includes` is the *literal content* of `base_includes.h` (embedded
  at compile time by the prebuild step). It's not an `#include` directive — it's
  the raw text of the standard library includes.
- `WINRT_EXPORT` is defined as `export` inside the module purview. Every namespace
  declaration in the generated headers uses `WINRT_EXPORT namespace winrt::...` so
  types are properly exported.
- The namespace headers are `#include`d inside the module purview, making all their
  content (types, template specializations) part of the module.

## The Global Module Fragment Problem

**Problem**: The C++ standard prohibits `import` declarations in the global module
fragment (the section between `module;` and `export module winrt;`).

**Context**: `base_includes.h` conditionally emits `import std;` when
`WINRT_IMPORT_STD` is defined. If this triggers in the global module fragment,
compilation fails.

**Solution**: The ixx writer wraps the base_includes content with a guard macro:

```cpp
ixx.write("#define WINRT_IMPL_GLOBAL_MODULE_FRAGMENT\n");
ixx.write(strings::base_includes);    // import std; is suppressed
ixx.write("#undef WINRT_IMPL_GLOBAL_MODULE_FRAGMENT\n");
```

Inside `base_includes.h`:
```cpp
#if defined(__cpp_lib_modules) && defined(WINRT_IMPORT_STD) \
    && !defined(WINRT_IMPL_GLOBAL_MODULE_FRAGMENT)
import std;
#else
// ... individual #include directives
#endif
```

The three-way condition ensures `import std;` only fires when:
1. The compiler supports it (`__cpp_lib_modules`)
2. The user/build opted in (`WINRT_IMPORT_STD`)
3. We're not in the global module fragment (`!WINRT_IMPL_GLOBAL_MODULE_FRAGMENT`)

## base_macros.h: Why Macros Need Special Handling

**Problem**: C++20 modules do not export preprocessor macros. When consumer code
does `import winrt;`, macros like `WINRT_EXPORT`, `WINRT_IMPL_EMPTY_BASES`,
`CPPWINRT_VERSION`, and `WINRT_IMPL_ABI_DECL` are not available.

**Who needs them**: Generated component files (`.g.h`) reference these macros.
In header mode, they come from `#include "winrt/base.h"`. In module mode,
`base.h` is not `#include`d — its content comes from the module.

**Solution**: `base_macros.h` is a lightweight header containing ONLY the
preprocessor definitions needed by generated code. It's safe to `#include`
alongside `import winrt;` because it has no type declarations that could
conflict with module-exported symbols.

**Generated by**: `write_base_macros_h()` in `file_writers.h`

**Used by**: `.g.h` files in module mode:
```cpp
#include "winrt/base_macros.h"
import std;
import winrt;
// ... template code using WINRT_IMPL_EMPTY_BASES etc.
```

## WINRT_IMPL_SKIP_INCLUDES: Guarded Cross-Namespace Includes

**Problem**: When consuming component headers after `import winrt;`, the
component's namespace header chain includes SDK headers (e.g.,
`#include "winrt/impl/Windows.Foundation.2.h"`) that would conflict with
the module-imported versions.

**Solution**: Generated namespace headers wrap their cross-namespace `#include`
dependencies with `#ifndef WINRT_IMPL_SKIP_INCLUDES` guards:

```cpp
// In generated Windows.Foundation.h:
#ifndef WINRT_IMPL_SKIP_INCLUDES
#include "winrt/base.h"
#endif
// ... (base.h include guarded, cross-namespace deps guarded)
#include "winrt/impl/Windows.Foundation.2.h"   // self-namespace: NOT guarded
```

**Implementation**: `write_root_include_guarded()` in `type_writers.h` wraps the
`#include` with the guard. Used by:
- `write_version_assert()` for `base.h` include
- `write_depends_guarded()` for cross-namespace impl includes
- `write_parent_depends()` for parent namespace includes

The component's own impl headers are always included (via `write_depends()`,
unguarded) since they contain the component-specific type definitions.

**Note**: With the combined-ixx approach, `WINRT_IMPL_SKIP_INCLUDES` is not
needed for component authoring (the component types are in the module). It
remains useful for the scenario of consuming a component's projection header
separately after `import winrt;`, should MSVC add support for cross-module
template specialization in the future.

## The -module Flag: Component Code Generation

**Source**: `settings.h` (`component_module`), `main.cpp` (arg parsing)

When `-module` is passed to cppwinrt.exe, the following changes apply to
generated component files:

### module.g.cpp

**Source**: `write_module_g_cpp()` in `component_writers.h`

| Header mode | Module mode |
|-------------|-------------|
| `#include "pch.h"` | (omitted — pch cleared) |
| `#include "winrt/base.h"` | `import std;` + `import winrt;` |

### Toaster.g.h (component base template)

**Source**: `write_component_g_h()` in `file_writers.h`

| Header mode | Module mode |
|-------------|-------------|
| `#include "winrt/test_component.h"` etc. | `#include "winrt/base_macros.h"` + `import std;` + `import winrt;` |

### Toaster.g.cpp (factory + optional optimized constructors)

**Source**: `write_component_g_cpp()` in `component_writers.h`

| Header mode | Module mode |
|-------------|-------------|
| `winrt_make_*` + constructor/static overrides | `winrt_make_*` only |

In module mode, the constructor and static method definitions are omitted from
`.g.cpp` because they're already exported from the `winrt` module (via the
component's namespace header folded into `winrt.ixx`). The `winrt_make_*`
factory function is always emitted since it's needed by `module.g.cpp` for
activation lookup.

## The Combined-ixx Approach

**The key insight**: MSVC cannot specialize module-imported class templates from
textual `#include` code. The component's `.0.h` files specialize templates like
`category<>`, `abi<>`, `guid_v<>` from `winrt::impl` namespace.

**The solution**: Append the component's namespace header includes to the end of
`winrt.ixx`, so the specializations happen inside the module purview:

```
export module winrt;
#define WINRT_EXPORT export

#include "winrt/Windows.Foundation.h"
...
#include "winrt/Windows.Web.UI.Interop.h"
#include "winrt/test_component.h"          ← appended by build system
```

This is done by the NuGet targets (`CppWinRTAddModuleSource`) or manually in
the project's CustomBuildStep. The target scans `$(GeneratedFilesDir)winrt/` for
`.h` files not already in `winrt.ixx` and appends them.

## The windowsnumerics.impl.h Warning

**Source**: `base_macros.h` (strings)

The `<windowsnumerics.impl.h>` SDK header is intentionally included in the
module purview (not the global module fragment) because it defines the
`winrt::Windows::Foundation::Numerics` types using `WINRT_EXPORT`, which must
expand to `export` for the types to be exported from the module.

MSVC warning C5244 flags this as "appears erroneous." We suppress it with
`#pragma warning(suppress: 5244)` on the single line before the include,
matching the approach from the sylveon fork.

```cpp
#ifdef WINRT_IMPL_NUMERICS
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ WINRT_EXPORT namespace ...
// The include in the purview of a module is intentional.
#pragma warning(suppress: 5244)
#include <windowsnumerics.impl.h>
...
#endif
```

## import std Integration

**Source**: `base_includes.h`

The standard library `#include` directives in `base_includes.h` are conditionally
replaced with `import std;`. The conditions are:

```cpp
#if defined(__cpp_lib_modules) && defined(WINRT_IMPORT_STD) \
    && !defined(WINRT_IMPL_GLOBAL_MODULE_FRAGMENT)
import std;
#else
#include <algorithm>
#include <array>
... // 25+ individual includes
#endif
```

`WINRT_IMPORT_STD` is:
- Defined automatically by NuGet targets when `CppWinRTModule=true` and
  `BuildStlModules=true`
- Can be defined manually by users as a preprocessor definition

`__cpp_lib_modules` is defined in `<version>` by MSVC when the STL supports
modules. However, it does NOT guarantee `import std;` will work — that also
requires the build system to compile `std.ixx` (controlled by `BuildStlModules`).
This is why `WINRT_IMPORT_STD` is a separate opt-in: `__cpp_lib_modules` alone
would break existing users whose build systems don't compile the std module.

## Code Paths Reference

### Key source files

| File | Responsibility |
|------|---------------|
| `main.cpp` | CLI parsing, ixx generation, orchestration |
| `settings.h` | `component_module` flag storage |
| `file_writers.h` | File-level writers: `write_base_h`, `write_base_macros_h`, `write_component_g_h`, `write_namespace_h` |
| `component_writers.h` | Component template writers: `write_module_g_cpp`, `write_component_g_cpp` |
| `code_writers.h` | Low-level writers: `write_version_assert`, `write_parent_depends`, `write_open_file_guard` |
| `type_writers.h` | Writer class: `write_root_include`, `write_root_include_guarded`, `write_depends`, `write_depends_guarded` |
| `strings/base_includes.h` | Standard library includes / `import std;` conditional |
| `strings/base_macros.h` | `WINRT_EXPORT`, `windowsnumerics.impl.h` suppress |

### Key NuGet targets

| Target | File | Role |
|--------|------|------|
| `CppWinRTAddModuleSource` | `Microsoft.Windows.CppWinRT.targets` | Folds component headers into ixx, adds ixx to compilation, defines `WINRT_IMPORT_STD` |
| `CppWinRTMakeProjections` | `Microsoft.Windows.CppWinRT.targets` | Orchestrates platform/reference/component projection generation |
| `CppWinRTMakeComponentProjection` | `Microsoft.Windows.CppWinRT.targets` | Runs cppwinrt.exe for component stubs (passes `-module` via `CppWinRTParameters`) |

### Macro flow diagram

```
User sets CppWinRTModule=true + BuildStlModules=true
    │
    ├── NuGet targets define WINRT_IMPORT_STD on all ClCompile items
    ├── NuGet targets pass -module to cppwinrt.exe
    ├── NuGet targets append component headers to winrt.ixx
    │
    ▼
winrt.ixx compilation:
    module;
    #define WINRT_IMPL_GLOBAL_MODULE_FRAGMENT  ← blocks import std;
    <base_includes content>                     ← falls through to #include path
    #undef WINRT_IMPL_GLOBAL_MODULE_FRAGMENT
    export module winrt;
    #define WINRT_EXPORT export
    #include "winrt/base.h"                    ← WINRT_IMPORT_STD not checked (pragma once)
    #include "winrt/Windows.Foundation.h"      ← SDK types + specializations
    ...
    #include "winrt/MyComponent.h"             ← component specializations in purview

Consumer .cpp compilation:
    import std;                                ← std module (compiled by BuildStlModules)
    import winrt;                              ← winrt module (SDK + component types)
    #include "Toaster.h"
    └── #include "Toaster.g.h"
        └── #include "winrt/base_macros.h"     ← macros only (WINRT_EXPORT etc.)
        └── import std;                        ← harmless duplicate
        └── import winrt;                      ← harmless duplicate

module.g.cpp compilation:
    import std;                                ← from -module code gen
    import winrt;                              ← from -module code gen
    void* winrt_make_MyComponent_Toaster()     ← factory function
    bool __stdcall ..._can_unload_now()        ← DLL entry points
```
