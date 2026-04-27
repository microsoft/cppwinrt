# C++/WinRT Per-Namespace Modules: Design & Internals

This document describes the design and implementation of per-namespace C++20 module support in C++/WinRT. It is intended for cppwinrt maintainers and contributors.

## Architecture Overview

The module system generates one C++20 named module per WinRT namespace. Each module encapsulates the same content as the traditional header files but exports declarations via `WINRT_EXPORT` in module purview.

```
┌─────────────────────────────────────────────────────────────────┐
│  winrt_numerics.ixx  ──  export module winrt_numerics;          │
│  winrt_base.ixx      ──  export module winrt_base;              │
│                          export import winrt_numerics;           │
│  winrt.Windows.Foundation.ixx                                   │
│                      ──  export module winrt.Windows.Foundation; │
│                          import std; export import winrt_base;   │
│                          import winrt.Windows.Foundation.Collections; │
│                          #include "winrt/impl/Windows.Foundation.0.h" │
│                          ...                                    │
│                          #include "winrt/Windows.Foundation.h"  │
└─────────────────────────────────────────────────────────────────┘
```

## Key Design Decisions

### Unconditional Guards

Module guards (`WINRT_IMPL_BUILD_MODULE`, `WINRT_IMPORT_MODULE`) are emitted unconditionally in generated projection headers — they are always present regardless of whether `-modules` was passed to cppwinrt.exe. The `-modules` flag controls `.ixx` generation and whether generated component files (`module.g.cpp`, stub `.cpp`) use module imports. This means:

- Projection headers generated without `-modules` still work correctly when later compiled inside a module interface unit
- No regeneration of projection headers needed when switching between header and module consumption

### WINRT_EXPORT Macro

`WINRT_EXPORT` is defined in `macros.h` (generated as `winrt/macros.h`):
- When `WINRT_IMPL_BUILD_MODULE` is defined (inside `.ixx` compilation): `export extern "C++"`
- Otherwise (header mode): empty

All `namespace winrt::impl` and `namespace std` blocks use `WINRT_EXPORT` so they export correctly from modules. The `extern "C++"` wrapping enables include-before-import compatibility (same technique as MSVC STL).

### Per-Namespace vs Monolithic

Unlike the v1 approach (single `import winrt;`), v2 generates one module per namespace. This provides:

- **Finer granularity**: Import only what you need
- **Better parallelism**: Independent modules compile in parallel
- **Component module support**: Component namespaces get their own modules

The trade-off is handling dependency cycles between namespaces (see SCC below).

This is enforced via the MSBuild `CppWinRTConsumeModule` metadata on ProjectReference — it only points at the platform module builder, not at component projects.

## Code Generator Pipeline

### Entry Point: `main.cpp`

1. **Namespace enumeration**: First pass determines which namespaces are module-eligible using `module_filter` (from `-module_include`/`-module_exclude`)

2. **Header generation**: Standard header generation with optional dependency collection. When `-modules` is active and a namespace is in the module, `write_namespace_*_h()` functions populate `ns_deps` sets via the `deps_ptr` parameter

3. **Dependency graph construction**: After all headers are generated, `ns_deps_map` contains the full namespace dependency graph

4. **SCC detection**: Tarjan's algorithm (`find_sccs()`) identifies strongly-connected components

5. **Module generation**: For each SCC:
   - Size 1: `write_namespace_ixx()` — standalone module
   - Size > 1: `write_namespace_scc_owner_ixx()` for the owner (alphabetically first) + `write_namespace_reexport_ixx()` for others

### CLI Options

| Flag | Description |
|-|-|
| `-modules` | Enable `.ixx` generation |
| `-module_include <ns>...` | Only generate modules for these namespace prefixes |
| `-module_exclude <ns>...` | Skip these namespace prefixes |

The `module_filter` is populated from these flags and checked against ALL cache namespaces (not just the projection filter). This is important for component builds where the platform namespaces are not being projected but their modules exist from a prior builder invocation.

### Generated Files

| File | When Generated | Purpose |
|-|-|-|
| `winrt/macros.h` | Always with `-base` | Macros for module builds (WINRT_EXPORT, etc.) |
| `winrt/winrt_base.ixx` | `-modules -base` | Core types module |
| `winrt/winrt_numerics.ixx` | `-modules -base` | Numerics module |
| `winrt/winrt.<ns>.ixx` | `-modules` | Per-namespace module |

## SCC (Strongly Connected Components)

### The Problem

WinRT namespaces have cyclic dependencies. For example:
- `Windows.Foundation` depends on `Windows.Foundation.Collections` (via `IVector`, `IMap`, etc.)
- `Windows.Foundation.Collections` depends on `Windows.Foundation` (via `IAsyncOperation`, `Uri`, etc.)

C++20 modules cannot have circular imports. If module A imports module B, then module B cannot import module A.

### The Solution: SCC Consolidation

Tarjan's algorithm identifies groups of namespaces that form dependency cycles. These groups (SCCs) are consolidated:

1. **Owner selection**: The alphabetically first namespace in the SCC becomes the "owner"
2. **Owner module**: Contains ALL declarations from ALL SCC namespaces. Forward-declares all types first, then includes headers in phase order (all `*.0.h`, then `*.1.h`, then `*.2.h`, then public headers)
3. **Re-export stubs**: Other SCC members get thin `.ixx` files that just re-export the owner module

This means `import winrt.Windows.Foundation;` and `import winrt.Windows.Foundation.Collections;` both work — they resolve to the same underlying module.

### Example Generated Files

**Owner** (`winrt.Windows.Foundation.ixx`):
```cpp
module;
#define WINRT_IMPL_BUILD_MODULE
#include "winrt/macros.h"
// ...

// This module is an SCC owner (cycle breaker). The following namespaces
// form a dependency cycle and are consolidated into this single module:
//   - Windows.Foundation
//   - Windows.Foundation.Collections
// Other SCC namespaces are emitted as re-export stubs.

export module winrt.Windows.Foundation;

import std;
export import winrt_base;

// Forward declarations for all SCC namespaces...
// #include all impl headers in phase order...
```

**Re-export stub** (`winrt.Windows.Foundation.Collections.ixx`):
```cpp
// NOTE: This module does not define declarations of its own.
// It re-exports all declarations from the 'winrt.Windows.Foundation' module.
export module winrt.Windows.Foundation.Collections;
export import winrt.Windows.Foundation;
```

## MSBuild Integration

### Targets Flow

```
CppWinRTResolveModuleReferences  (resolves IFC paths from ProjectReference metadata)
    ↓
CppWinRTMakePlatformProjection   (generates headers + .ixx for platform types)
CppWinRTMakeReferenceProjection  (generates headers + .ixx for referenced WinMDs)
CppWinRTMakeComponentProjection  (generates headers + .ixx for component types)
    ↓
CppWinRTAddModuleInterfaces      (discovers .ixx files, adds to ClCompile items)
    ↓
FixupCLCompileOptions            (MSVC module dependency scanner processes .ixx)
    ↓
ClCompile                        (compiles .ixx → .ifc + .obj)
```

### Key Properties

- `CppWinRTBuildModule`: Enables `-modules` for all three projections (platform, reference, component), causing `.ixx` generation and compilation.
- `CppWinRTConsumeModule` (ProjectReference metadata): Per-reference opt-in for IFC consumption. When set, suppresses `-modules` on the platform projection so the consumer uses pre-built IFCs from the referenced project instead of generating its own.
- `_CppWinRTConsumesPlatformModules`: Internal property set by `CppWinRTResolveModuleReferences` when any ProjectReference has `CppWinRTConsumeModule=true`. Controls whether the platform projection receives `-modules`.

### Cross-Project IFC Resolution

MSVC's module dependency scanner uses `/ifcSearchDir` for within-project module resolution. For cross-project modules, the scanner generates explicit `/reference "module.name=path.ifc"` entries based on the dependency scan results. The `/ifcSearchDir` pointing to the builder's `$(IntDir)` allows the scanner to find the pre-built IFCs.

## Dependency Collection

During header generation, when `-modules` is active, each `write_namespace_*_h()` function receives a `deps_ptr` parameter. The writer's `w.depends` map is inspected to find referenced namespaces. Only namespaces that:
1. Exist in the cache
2. Have projected types
3. Are in the module namespace set (or set is empty)

are added to the dependency set. Self-references are excluded. The union of dependencies from all four header files (`*.0.h`, `*.1.h`, `*.2.h`, `<ns>.h`) gives the complete dependency set for a namespace module.

## Testing

### test/test_cpp20_module/ (in-repo)

Standalone test built by the main solution. Uses a PreBuildEvent to run cppwinrt.exe with `-modules -base -module_include "Windows.Foundation"`. Tests URI, events, collections, and coroutines.

### test/nuget/ (NuGet integration)

Multi-project solution:
- **TestModuleBuilder**: Static library that pre-builds platform modules
- **TestModuleComponent1**: Component DLL (Greeter class), consumes builder's modules
- **TestModuleComponent2**: Component DLL (GreeterGroup), depends on Component1
- **TestModuleConsumerApp**: Console app, consumes builder + both components
- **TestModuleApp**: Single-project that builds and consumes its own modules
