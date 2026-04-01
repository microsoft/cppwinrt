# C++/WinRT Code Generator Internals: Module Support

This document is for maintainers of the cppwinrt code generator. It explains the
internal mechanisms that enable C++20 module support, the design decisions behind
them, and the interactions between the various moving pieces.

## Table of Contents

- [File Generation Pipeline](#file-generation-pipeline)
- [winrt.ixx Generation](#winrtixx-generation)
- [Split Standard Library Includes](#split-standard-library-includes)
- [base_macros.h: Why Macros Need Special Handling](#base_macrosh-why-macros-need-special-handling)
- [WINRT_IMPL_SKIP_INCLUDES: Guarded Cross-Namespace Includes](#winrt_impl_skip_includes-guarded-cross-namespace-includes)
- [WINRT_EXPORT on Extern Handlers](#winrt_export-on-extern-handlers)
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
ixx.write(strings::base_includes);                // platform includes (intrin.h, version, directxmath)
ixx.write(strings::base_std_includes);            // standard library #includes
ixx.write("\nexport module winrt;\n#define WINRT_EXPORT export\n\n");

for (auto ns : namespaces)
    ixx.write("#include \"winrt/NS.h\"\n");       // all namespace headers

ixx.flush_to_file("winrt/winrt.ixx");
```

Key points:
- `strings::base_includes` contains platform-specific headers (`<intrin.h>`,
  `<version>`, `<directxmath.h>`) — NOT standard library headers.
- `strings::base_std_includes` contains all standard library `#include`
  directives (`<algorithm>`, `<string>`, etc.). These are always written
  as raw `#include`s in the global module fragment where `import` is prohibited.
- `WINRT_EXPORT` is defined as `export` inside the module purview.
- The namespace headers are `#include`d inside the module purview, making all
  their content (types, template specializations) part of the module.

## Split Standard Library Includes

**Problem**: The C++ standard prohibits `import` declarations in the global
module fragment (the section between `module;` and `export module winrt;`).
The ixx needs raw `#include` directives there, but `base.h` consumers may
want `import std;` instead.

**Solution**: The standard library includes are split into a separate file:

| File | Content | Used by |
|------|---------|--------|
| `strings/base_includes.h` | Platform headers: `<intrin.h>`, `<version>`, `<directxmath.h>` | Both ixx and base.h |
| `strings/base_std_includes.h` | Standard library: `<algorithm>`, `<string>`, `<coroutine>`, etc. | ixx (always), base.h (conditional) |

In `write_base_h()`, the std includes are written conditionally:

```cpp
w.write(strings::base_includes);        // platform includes (always)
w.write(R"(
#if defined(__cpp_lib_modules) && defined(WINRT_IMPORT_STD)
import std;
#else
)");
w.write(strings::base_std_includes);    // std includes (fallback)
w.write(R"(#endif
)");
```

In the ixx writer, both are written unconditionally as raw includes:

```cpp
ixx.write(strings::base_includes);      // platform
ixx.write(strings::base_std_includes);  // std (always #include in GMF)
```

This eliminates the need for any guard macros like `WINRT_IMPL_GLOBAL_MODULE_FRAGMENT`.

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

**Generated by**: `write_base_macros_h()` in `file_writers.h`, using content from
`strings/base_module_macros.h`

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

## WINRT_EXPORT on Extern Handlers

**Source**: `strings/base_extern.h`

The global function pointer variables used for error handling customization
(`winrt_to_hresult_handler`, `winrt_to_message_handler`,
`winrt_throw_hresult_handler`, `winrt_activation_handler`) are prefixed with
`WINRT_EXPORT`:

```cpp
WINRT_EXPORT __declspec(selectany) std::int32_t(__stdcall* winrt_to_hresult_handler)(...) noexcept {};
WINRT_EXPORT __declspec(selectany) winrt::hstring(__stdcall* winrt_to_message_handler)(...) {};
// etc.
```

This ensures correct linkage when mixing modules and non-modules translation
units in the same DLL/EXE. Without `WINRT_EXPORT`, the module-compiled TUs
and the header-compiled TUs would see these as separate symbols, leading to
one side's customizations being invisible to the other.

## The -module Flag: Component Code Generation

**Source**: `settings.h` (`component_module`), `main.cpp` (arg parsing)

When `-module` is passed to cppwinrt.exe, the following changes apply to
generated component files:

### module.g.cpp

**Source**: `write_module_g_cpp()` in `component_writers.h`

| Header mode | Module mode |
|-------------|-------------|
| `#include "pch.h"` | `#include "pch.h"` (preserved) |
| `#include "winrt/base.h"` | `#ifdef WINRT_IMPORT_STD` / `import std;` / `#endif` + `import winrt;` |

### Toaster.g.h (component base template)

**Source**: `write_component_g_h()` in `file_writers.h`

| Header mode | Module mode |
|-------------|-------------|
| `#include "winrt/test_component.h"` etc. | `#include "winrt/base_macros.h"` + conditional `import std;` + `import winrt;` + `#define WINRT_IMPL_SKIP_INCLUDES` + component headers |

### Toaster.g.cpp (factory + optional optimized constructors)

**Source**: `write_component_g_cpp()` in `component_writers.h`

| Header mode | Module mode |
|-------------|-------------|
| `winrt_make_*` + constructor/static overrides | `winrt_make_*` only |

In module mode, the constructor and static method definitions are omitted from
`.g.cpp` because they're already available from the component's projection
header (included by the `.g.h` after `import winrt;`). The `winrt_make_*`
factory function is always emitted since it's needed by `module.g.cpp` for
activation lookup.

## Exported `winrt::impl` Namespace

**The key insight**: Component projection headers (`.0.h` files) specialize
templates like `category<>`, `abi<>`, `guid_v<>` from `winrt::impl` namespace.
For these specializations to work after `import winrt;`, the primary templates
must be exported from the module.

**The solution**: All `namespace winrt::impl` blocks in the `strings/base_*.h`
files and the generated namespace headers use `WINRT_EXPORT namespace winrt::impl`.
In module mode, `WINRT_EXPORT` expands to `export`, making the `impl` templates
part of the module's public interface. In header mode, `WINRT_EXPORT` is empty,
so there's no change to the existing behavior.

This allows component projection headers to be `#include`d separately after
`import winrt;` — they can specialize the exported `impl` templates without
needing to be folded into `winrt.ixx`.

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

**Source**: `strings/base_includes.h`, `strings/base_std_includes.h`,
`file_writers.h` (`write_base_h`)

The standard library includes are split into two files:

- **`strings/base_includes.h`**: Platform headers (`<intrin.h>`, `<version>`,
  `<directxmath.h>`). Always written as `#include`.
- **`strings/base_std_includes.h`**: Standard library headers (`<algorithm>`,
  `<string>`, `<coroutine>`, etc.).

In `write_base_h()`, the std includes are conditional:

```cpp
// In generated base.h:
#if defined(__cpp_lib_modules) && defined(WINRT_IMPORT_STD)
import std;
#else
#include <algorithm>
#include <array>
... // 25+ individual includes
#endif
```

In the ixx global module fragment, both files are written as raw `#include`s
with no conditional — `import` is not permitted there.

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
| `strings/base_includes.h` | Platform includes (`<intrin.h>`, `<version>`, `<directxmath.h>`) |
| `strings/base_std_includes.h` | Standard library includes (`<algorithm>`, `<string>`, `<coroutine>`, etc.) |
| `strings/base_macros.h` | `WINRT_EXPORT` definition, `windowsnumerics.impl.h` suppress |
| `strings/base_module_macros.h` | Lightweight macros for module consumers (`WINRT_EXPORT`, `WINRT_IMPL_EMPTY_BASES`, etc.) |
| `strings/base_extern.h` | `WINRT_EXPORT`-decorated extern handler variables |

### Key NuGet targets

| Target | File | Role |
|--------|------|------|
| `CppWinRTAddModuleSource` | `Microsoft.Windows.CppWinRT.targets` | Adds ixx to compilation, defines `WINRT_IMPORT_STD` |
| `CppWinRTMakeProjections` | `Microsoft.Windows.CppWinRT.targets` | Orchestrates platform/reference/component projection generation |
| `CppWinRTMakeComponentProjection` | `Microsoft.Windows.CppWinRT.targets` | Runs cppwinrt.exe for component stubs (passes `-module` via `CppWinRTParameters`) |

### Macro flow diagram

```
User sets CppWinRTModule=true + BuildStlModules=true
    │
    ├── NuGet targets define WINRT_IMPORT_STD on all ClCompile items
    ├── NuGet targets pass -module to cppwinrt.exe
    │
    ▼
winrt.ixx compilation:
    module;
    <intrin.h, version, directxmath.h>         ← platform includes (base_includes)
    <algorithm, array, string, coroutine, ...> ← std library includes (base_std_includes)
    export module winrt;
    #define WINRT_EXPORT export
    #include "winrt/base.h"                    ← base.h (pragma once)
    #include "winrt/Windows.Foundation.h"      ← SDK types + specializations
    ...                                        ← winrt::impl is exported

Consumer .cpp compilation:
    #include "pch.h"                           ← PCH (no winrt/ headers)
    import std;                                ← std module (optional, needs BuildStlModules)
    import winrt;                              ← winrt module (SDK types + exported impl)

Component .g.h:
    #include "winrt/base_macros.h"             ← macros only (WINRT_EXPORT etc.)
    #ifdef WINRT_IMPORT_STD
    import std;                                ← conditional on WINRT_IMPORT_STD
    #endif
    import winrt;                              ← SDK types + exported impl templates
    #define WINRT_IMPL_SKIP_INCLUDES           ← skip SDK #include deps
    #include "winrt/MyComponent.h"             ← component projection (specializes impl)

module.g.cpp compilation:
    #include "pch.h"                           ← PCH preserved
    #ifdef WINRT_IMPORT_STD / import std;      ← conditional
    import winrt;                              ← from -module code gen
    void* winrt_make_MyComponent_Toaster()     ← factory function
    bool __stdcall ..._can_unload_now()        ← DLL entry points
```
