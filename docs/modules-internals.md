# C++/WinRT Code Generator Internals: Module Support

This document is for maintainers of the cppwinrt code generator. It explains the
internal mechanisms that enable C++20 module support, the design decisions behind
them, and the interactions between the various moving pieces.

## Table of Contents

- [File Generation Pipeline](#file-generation-pipeline)
- [winrt.ixx Generation](#winrtixx-generation)
- [Split Standard Library Includes](#split-standard-library-includes)
- [base_macros.h: Why Macros Need Special Handling](#base_macrosh-why-macros-need-special-handling)
- [Per-Namespace Include Guards (WINRT_MODULE_NS_*)](#per-namespace-include-guards-winrt_module_ns)
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
| `strings/base_std_includes.h` | Standard library: `<algorithm>`, `<string>`, `<coroutine>`, etc. | ixx (GMF), base.h (always) |

In `write_base_h()`, both platform and STL includes are always written textually.
`import std;` is NOT used in base.h because platform headers (`<intrin.h>`) 
transitively include STL headers, making a subsequent `import std;` unsafe.
Instead, `import std;` is emitted directly in `winrt.ixx` (module purview),
generated `.g.h`, and `module.g.cpp` — places where it can be safely ordered
before any textual includes.

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

## Per-Namespace Include Guards (WINRT_MODULE_NS_*)

**Problem**: After `import winrt;`, consumers textually `#include` component
and reference projection headers. Those headers have cross-namespace `#include`
deps. Platform namespace deps (already in the module) must be skipped to avoid
MSVC redeclaration errors on `inline constexpr` variable template specializations
like `name_v`. But component-to-component cross-namespace deps must NOT be
skipped, or multi-namespace components break.

**Solution**: cppwinrt generates `winrt/winrt_module_namespaces.h` alongside
`winrt.ixx`. This header defines one macro per namespace in the module:

```cpp
// Generated winrt/winrt_module_namespaces.h:
#pragma once
#define WINRT_MODULE_NS_Windows_Foundation
#define WINRT_MODULE_NS_Windows_Foundation_Collections
// ... one per namespace in the module
```

Generated namespace headers use per-namespace guards for cross-namespace deps:

```cpp
// In generated TestModuleComponent.h:
#ifndef WINRT_MODULE_NS_Windows_Foundation
#include "winrt/impl/Windows.Foundation.2.h"
#endif
#include "winrt/impl/TestModuleComponent.Widgets.2.h"  // NOT guarded (not in module)
#include "winrt/impl/TestModuleComponent.2.h"          // self-namespace: never guarded
```

When `WINRT_MODULE` is defined (project-wide), the module guard at the top of
each namespace header auto-imports the winrt module (guarded by
`WINRT_MODULE_IMPORTED` so it only happens once per TU), and includes
`winrt_module_namespaces.h` to make `WINRT_MODULE_NS_*` macros available for
cross-namespace guards. When `WINRT_BUILD_MODULE` is defined (inside winrt.ixx),
`winrt_module_namespaces.h` is NOT included, so all cross-namespace deps resolve
normally — the ixx needs them to build the module. When neither macro is defined,
namespace headers use traditional `#include "winrt/base.h"` behavior.

**Implementation**: `write_root_include_guarded()` in `type_writers.h` extracts
the namespace from the include path and emits `#ifndef WINRT_MODULE_NS_<ns>`.
Used by:
- `write_depends_guarded()` for cross-namespace impl includes
- `write_parent_depends()` for parent namespace includes

`write_module_guard()` and `write_version_assert()` in `code_writers.h`:
```cpp
#if defined(WINRT_BUILD_MODULE)
#include "winrt/base_macros.h"
#elif defined(WINRT_MODULE)
#include "winrt/base_macros.h"
#include "winrt/winrt_module_namespaces.h"
#ifndef WINRT_MODULE_IMPORTED
#define WINRT_MODULE_IMPORTED
import winrt;
#endif
#else
#include "winrt/base.h"
#endif
```

**winrt_module_namespaces.h generation**: In `main.cpp`, emitted alongside
`winrt.ixx` when `settings.base` is true and `settings.component` is false.
This prevents component projections (which may also use `-base`) from generating
a stale version that would mask the module builder's file on the include path.

**Module namespace filtering** (`-module_filter`): When specified, only matching
namespaces are included in `winrt.ixx` and `winrt_module_namespaces.h`. All
namespace headers are still generated for textual inclusion. This is implemented
via `settings.ixx_filter` (built from `-module_filter` args in `build_filters`).
The NuGet property `CppWinRTModuleFilter` passes this to cppwinrt.exe.

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
#include "winrt/test_component.h"  // always emitted
```

The `.g.h` simply includes the component's own namespace headers. No
`WINRT_MODULE`-specific logic is needed in the `.g.h` itself — the module
guard inside each namespace header handles base type resolution, auto-importing
the winrt module when `WINRT_MODULE` is defined. Platform namespace deps are
skipped by `WINRT_MODULE_NS_*` guards; component cross-namespace deps are
included normally. When `WINRT_MODULE` is not defined, the headers pull in
`base.h` transitively.

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

In `write_base_h()`, STL includes are always textual:

```cpp
// In generated base.h:
#ifndef WINRT_IMPL_INCLUDES_HANDLED
<intrin.h, version, directxmath.h>         // platform includes
<algorithm, array, string, coroutine, ...> // STL includes (always textual)
#endif
```

`import std;` is NOT placed in base.h. Platform headers (`<intrin.h>`) transitively
include STL headers, making a subsequent `import std;` in the same header unsafe.
Instead, `import std;` is emitted in specific TU-level locations where it can be
safely ordered before any textual includes:

- **`winrt.ixx`** — in the module purview, after the global module fragment
  (which has the textual STL/platform includes), conditional on `WINRT_IMPORT_STD`
- **`module.g.cpp`** — before `import winrt;`, conditional on `WINRT_IMPORT_STD`
- **`.g.h`** — before `import winrt;`, conditional on `WINRT_IMPORT_STD`

`WINRT_IMPORT_STD` is:
- Defined automatically by NuGet targets when `CppWinRTModuleBuild` or
  `CppWinRTModuleConsume` is true and `BuildStlModules=true`
- Can be defined manually by users as a preprocessor definition

## Code Paths Reference

### Key source files

| File | Responsibility |
|------|---------------|
| `main.cpp` | CLI parsing, ixx generation, orchestration |
| `file_writers.h` | File-level writers: `write_base_h`, `write_base_macros_h`, `write_component_g_h`, `write_namespace_h` |
| `component_writers.h` | Component template writers: `write_module_g_cpp`, `write_component_g_cpp` |
| `code_writers.h` | Low-level writers: `write_module_guard`, `write_version_assert`, `write_parent_depends`, `write_open_file_guard` |
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
winrt.ixx compilation (WINRT_BUILD_MODULE defined in global module fragment):
    module;
    #define WINRT_BUILD_MODULE
    <intrin.h, version, directxmath.h>         ← platform includes (base_includes)
    <algorithm, array, string, coroutine, ...> ← std library includes (base_std_includes)
    export module winrt;
    #define WINRT_EXPORT export
    #include "winrt/base.h"                    ← base.h (explicit include)
    #include "winrt/Windows.Foundation.h"      ← SDK types + specializations
    ...                                        ← winrt::impl is exported
    Also generates: winrt/winrt_module_namespaces.h (per-namespace macros)

Consumer .cpp compilation (WINRT_MODULE defined by NuGet targets):
    #include "pch.h"                           ← PCH (no winrt/ headers)
    import std;                                ← std module (optional, needs BuildStlModules)
    import winrt;                              ← winrt module (SDK types + exported impl)
    #include "winrt/MyComponent.h"             ← reference projection header
      → module guard includes winrt_module_namespaces.h (via WINRT_MODULE)
      → platform deps guarded by WINRT_MODULE_NS_* (skipped)
      → component cross-namespace deps NOT guarded (included normally)

Component .g.h (WINRT_MODULE defined by NuGet targets):
    #include "winrt/MyComponent.h"             ← component projection (specializes impl)
      → module guard auto-imports winrt, loads winrt_module_namespaces.h
      → platform deps skipped by WINRT_MODULE_NS_* guards
      → cross-namespace component deps included normally

module.g.cpp compilation:
    #include "pch.h"                           ← PCH preserved
    #ifdef WINRT_IMPORT_STD / import std;      ← conditional
    import winrt;                              ← module import
    void* winrt_make_MyComponent_Toaster()     ← factory function
    bool __stdcall ..._can_unload_now()        ← DLL entry points
```
