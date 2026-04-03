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

**Problem**: Inside generated `.g.h` files, after `import winrt;`, the
component's own projection headers are included. Those headers have
cross-namespace `#include` deps for platform SDK types (e.g.,
`Windows.Foundation`) that are already available from the module. Re-including
platform headers works (MSVC handles the re-declarations gracefully), but
skipping them in this narrow scope avoids redundant processing.

**Solution**: Generated `.g.h` files set `WINRT_IMPL_SKIP_INCLUDES` locally
(under `#ifdef WINRT_MODULE`) before including the component's own headers.
Generated namespace headers wrap their cross-namespace deps with guards:

```cpp
// In generated Windows.Foundation.h:
#ifndef WINRT_IMPL_SKIP_INCLUDES
#include "winrt/base.h"
#endif
// ... (cross-namespace deps guarded)
#include "winrt/impl/Windows.Foundation.2.h"   // self-namespace: NOT guarded
```

**Critical scoping**: `WINRT_IMPL_SKIP_INCLUDES` is NOT defined project-wide.
It is only defined locally inside `.g.h` files. This ensures that consumer
source files can `#include <winrt/MyComponent.Widgets.h>` after `import winrt;`
and the cross-namespace deps between component namespaces resolve normally.

**WINRT_MODULE vs WINRT_IMPL_SKIP_INCLUDES in the version assert**: The version
assert at the top of every namespace header checks `WINRT_BUILD_MODULE`,
`WINRT_MODULE`, or `WINRT_IMPL_SKIP_INCLUDES` to decide whether to skip
`#include "base.h"` and use `base_macros.h` instead. This three-way check
covers: (a) inside winrt.ixx, (b) consumer source files, (c) inside .g.h files.

**WINRT_BUILD_MODULE in winrt.ixx**: The ixx defines `WINRT_BUILD_MODULE`
and `#undef`s `WINRT_IMPL_SKIP_INCLUDES` in its global module fragment. This
ensures the version assert uses `base_macros.h` (since base.h is already
explicitly included), but cross-namespace deps are included normally so
namespace headers can reference each other's types inside the ixx.

**Implementation**: `write_root_include_guarded()` in `type_writers.h` wraps the
`#include` with `#ifndef WINRT_IMPL_SKIP_INCLUDES`. Used by:
- `write_depends_guarded()` for cross-namespace impl includes
- `write_parent_depends()` for parent namespace includes

`write_version_assert()` in `code_writers.h` checks `WINRT_BUILD_MODULE ||
WINRT_MODULE || WINRT_IMPL_SKIP_INCLUDES` for the base.h skip.

The component's own impl headers are always included (via `write_depends()`,
unguarded) since they contain the component-specific type definitions.

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

## The WINRT_MODULE Macro: Component Code Generation

**Source**: `component_writers.h` (`write_module_g_cpp`, `write_component_g_cpp`),
`file_writers.h` (`write_component_g_h`)

Module-aware component code generation is controlled entirely by the
`WINRT_MODULE` preprocessor macro, defined at the project level (by the NuGet
targets or manually). The code generator always emits both code paths with
`#ifdef WINRT_MODULE` guards — no special cppwinrt.exe flags are needed.

### module.g.cpp

**Source**: `write_module_g_cpp()` in `component_writers.h`

The generated code uses `#ifdef WINRT_MODULE` to select between import and include:

```cpp
#ifdef WINRT_MODULE
#ifdef WINRT_IMPORT_STD
import std;
#endif
import winrt;
#else
#include "winrt/base.h"
#endif
```

### Toaster.g.h (component base template)

**Source**: `write_component_g_h()` in `file_writers.h`

```cpp
#ifdef WINRT_MODULE
#include "winrt/base_macros.h"
#ifdef WINRT_IMPORT_STD
import std;
#endif
import winrt;
#define WINRT_IMPL_SKIP_INCLUDES
#endif
#include "winrt/test_component.h"  // always emitted
```

When `WINRT_MODULE` is defined, `WINRT_IMPL_SKIP_INCLUDES` causes the component
headers to skip cross-namespace platform `#include` deps (already in the module).
When not defined, the headers pull in `base.h` transitively as normal.

### Toaster.g.cpp (factory + optional optimized constructors)

**Source**: `write_component_g_cpp()` in `component_writers.h`

```cpp
void* winrt_make_MyComponent_Toaster() { ... }  // always emitted

WINRT_EXPORT namespace winrt::MyComponent
{
#ifndef WINRT_MODULE
    Toaster::Toaster() : Toaster(make<impl::Toaster>()) {}
    // ... other constructors/statics
#endif
}
```

The constructor/static overrides are guarded by `#ifndef WINRT_MODULE` because
they're already available from the component's projection header (included by
the `.g.h` after `import winrt;`). The `winrt_make_*` factory function is
always emitted since it's needed by `module.g.cpp` for activation lookup.

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
- Defined automatically by NuGet targets when `CppWinRTModuleBuild` or
  `CppWinRTModuleConsume` is true and
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
| `CppWinRTBuildModule` | `Microsoft.Windows.CppWinRT.targets` | Adds ixx to compilation, defines `WINRT_MODULE` and `WINRT_IMPORT_STD` |
| `CppWinRTGetModuleOutputs` | `Microsoft.Windows.CppWinRT.targets` | Exports IFC/OBJ/GeneratedFilesDir for consuming projects |
| `CppWinRTResolveModuleReferences` | `Microsoft.Windows.CppWinRT.targets` | Resolves IFC/OBJ from ProjectReferences, defines `WINRT_MODULE` and `WINRT_IMPORT_STD` |
| `CppWinRTMakeProjections` | `Microsoft.Windows.CppWinRT.targets` | Orchestrates platform/reference/component projection generation |
| `CppWinRTMakeComponentProjection` | `Microsoft.Windows.CppWinRT.targets` | Runs cppwinrt.exe for component stubs |

### Macro flow diagram

```
User sets CppWinRTModuleBuild=true (or CppWinRTModuleConsume=true) + BuildStlModules=true
    │
    ├── NuGet targets define WINRT_MODULE on all ClCompile items
    ├── NuGet targets define WINRT_IMPORT_STD on all ClCompile items
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

Component .g.h (WINRT_MODULE defined by NuGet targets):
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
