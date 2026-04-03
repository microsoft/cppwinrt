# C++20 Modules Support in C++/WinRT

## Overview

C++/WinRT can generate a C++20 named module (`winrt.ixx`) that allows consumers
to write `import winrt;` instead of using traditional `#include` directives and
precompiled headers. This can significantly improve build times and simplify the
developer experience.

## Quick Start

### Consuming the platform projection (app that calls WinRT APIs)

C++/WinRT module support uses two properties that separate building the module
from consuming it:

- **`CppWinRTModuleBuild`** — Generate the platform projection and compile
  `winrt.ixx` as a C++20 module interface unit. Set this on one project in your
  solution (typically a dedicated static library). Other projects reference this
  one to share the pre-built module.

- **`CppWinRTModuleConsume`** — Consume a pre-built winrt module from a
  `ProjectReference` that sets `CppWinRTModuleBuild`. The NuGet targets
  automatically resolve the module IFC, OBJ, and include paths.

For a single-project scenario (no shared builder), just set `CppWinRTModuleBuild`
on your project — it builds and consumes the module in-place.

#### Multi-project setup (recommended for solutions with multiple consumers)

**Builder project** (static library, no source files needed):

In Visual Studio:
- Right-click project > **Properties**
- **Configuration Properties > General > Configuration Type**: `Static Library (.lib)`
- **Configuration Properties > C/C++ > General > C++ Language Standard**: `ISO C++20 (/std:c++20)` or later
- **Configuration Properties > C++/WinRT > General > Build C++20 Module**: `Yes`

Or equivalently in your `.vcxproj`:

```xml
<PropertyGroup Label="Globals">
    <CppWinRTModuleBuild>true</CppWinRTModuleBuild>
</PropertyGroup>

<ItemDefinitionGroup>
    <ClCompile>
        <LanguageStandard>stdcpp20</LanguageStandard>
    </ClCompile>
</ItemDefinitionGroup>
```

**Consumer project** (app or component):

In Visual Studio:
- Right-click project > **Properties**
- **Configuration Properties > C/C++ > General > C++ Language Standard**: `ISO C++20 (/std:c++20)` or later
- **Configuration Properties > C++/WinRT > General > Consume C++20 Module**: `Yes`
- Add a **Project Reference** to the builder project

Or equivalently in your `.vcxproj`:

```xml
<PropertyGroup Label="Globals">
    <CppWinRTModuleConsume>true</CppWinRTModuleConsume>
</PropertyGroup>

<ItemDefinitionGroup>
    <ClCompile>
        <LanguageStandard>stdcpp20</LanguageStandard>
    </ClCompile>
</ItemDefinitionGroup>

<ItemGroup>
    <ProjectReference Include="..\ModuleBuilder\ModuleBuilder.vcxproj" />
</ItemGroup>
```

#### Single-project setup

In Visual Studio:
- Right-click project > **Properties**
- **Configuration Properties > C/C++ > General > C++ Language Standard**: `ISO C++20 (/std:c++20)` or later
- **Configuration Properties > C++/WinRT > General > Build C++20 Module**: `Yes`

Or equivalently in your `.vcxproj`:

```xml
<PropertyGroup Label="Globals">
    <CppWinRTModuleBuild>true</CppWinRTModuleBuild>
</PropertyGroup>

<ItemDefinitionGroup>
    <ClCompile>
        <LanguageStandard>stdcpp20</LanguageStandard>
    </ClCompile>
</ItemDefinitionGroup>
```

#### Optionally enabling `import std;`

`import winrt;` works independently of `import std;`. If you also want to use
`import std;`, enable it separately:

In Visual Studio:
- **Configuration Properties > C/C++ > General > Build ISO C++23 Standard Library Modules**: `Yes`

Or in your `.vcxproj`:

```xml
<ItemDefinitionGroup>
    <ClCompile>
        <BuildStlModules>true</BuildStlModules>
    </ClCompile>
</ItemDefinitionGroup>
```

> **Note**: On the v143 toolset (VS 2022), `import std;` requires
> `/std:c++latest` — set **C++ Language Standard** to `Preview` in the IDE.
> On the v145 toolset (VS 2026), `import std;` works with `/std:c++20`.

When `BuildStlModules` is enabled, the NuGet targets automatically define
`WINRT_IMPORT_STD` so that `base.h` uses `import std;` instead of individual
standard library `#include` directives.

Then in your source files:

```cpp
import std;    // optional — only if BuildStlModules is enabled
import winrt;

using namespace winrt;
using namespace winrt::Windows::Foundation;

int main()
{
    init_apartment();
    Uri uri(L"https://example.com");
    // ...
}
```

If you don't enable `import std;`, you'll need to `#include` standard library
headers you use (e.g., `<string>`, `<vector>`) or include them in your PCH.

### Component authoring (DLL with IDL)

Same C++/WinRT module properties as above (`CppWinRTModuleConsume=true` with a
`ProjectReference` to a builder, or `CppWinRTModuleBuild=true` for
single-project), then in your implementation files:

```cpp
// MyComponent.cpp
#include "pch.h"          // PCH is fine — just don't include winrt/ headers in it
import winrt;
#include "MyComponent.h"     // includes MyComponent.g.h
#include "MyComponent.g.cpp" // factory function only in module mode
```

The NuGet targets automatically:
1. Define `WINRT_MODULE` so generated `.g.h`/`.g.cpp` files use
   `import winrt;` instead of `#include` directives for platform types
2. Define `WINRT_IMPORT_STD` when `BuildStlModules` is enabled
3. Resolve the module IFC, OBJ, and include paths from the builder project
   (when `CppWinRTModuleConsume` is used)

## Requirements

- **Visual Studio 2022** (v143 toolset) or later
- **C++20 or later** language standard (`/std:c++20` or `/std:c++latest`)
- For `import std;` (optional, orthogonal to `import winrt;`):
  - **v143 toolset**: requires `/std:c++latest` + `BuildStlModules=true`
  - **v145 toolset** (VS 2026): works with `/std:c++20` + `BuildStlModules=true`
- **`BuildStlModules=true`** (optional) in `<ClCompile>` metadata enables the
  standard library module compilation. This is the "Build ISO C++23 Standard
  Library Modules" property in the Visual Studio IDE. Note: on v143, the STL
  modules infrastructure (`StdModulesSupported`) is only active when the language
  standard is C++23 or later, so setting this property with `/std:c++20` on v143
  has no effect.

## MSBuild Properties

| Property | Type | Default | Description |
|----------|------|---------|-------------|
| `CppWinRTModuleBuild` | bool | `false` | Generate the platform projection and compile `winrt.ixx` as a C++20 module interface unit. The compiled module IFC and OBJ are exported for consumption by projects that set `CppWinRTModuleConsume`. Defines `WINRT_MODULE` for generated component code. |
| `CppWinRTModuleConsume` | bool | `false` | Consume a pre-built winrt module from a `ProjectReference` that sets `CppWinRTModuleBuild`. Automatically resolves the IFC (for `AdditionalModuleDependencies`), OBJ (for linker `AdditionalDependencies`), and the builder's `GeneratedFilesDir` (for `AdditionalIncludeDirectories`). Skips regenerating the platform projection by default. Defines `WINRT_MODULE` for generated component code. |
| `BuildStlModules` | ClCompile metadata | `false` | Enables building `std.ixx`/`std.compat.ixx` so `import std;` works. This is orthogonal to `import winrt;` — you can use `import winrt;` without `import std;`. Set via **C/C++ > General > Build ISO C++23 Standard Library Modules** in the IDE, or `<BuildStlModules>true</BuildStlModules>` in `<ClCompile>` metadata. On v143, the underlying `StdModulesSupported` infrastructure requires `/std:c++latest`; on v145, `/std:c++20` suffices. |

When `CppWinRTModuleBuild` or `CppWinRTModuleConsume` is true, the NuGet targets also automatically:
- Define `WINRT_MODULE` so generated component files (`.g.h`, `.g.cpp`,
  `module.g.cpp`) use `import winrt;` instead of `#include` directives
- Define `WINRT_IMPORT_STD` as a preprocessor definition when `BuildStlModules`
  is enabled, so `base.h` uses `import std;` instead of individual `#include`s
- Define `WINRT_LEAN_AND_MEAN` on the `winrt.ixx` compilation unit (builder only)

## cppwinrt.exe Command-Line Options

| Option | Description |
|--------|-------------|
| `-input <spec>` | Windows metadata (.winmd) to include in projection |
| `-reference <spec>` | Windows metadata to reference from projection |
| `-output <path>` | Location of generated projection and component templates |
| `-component [<path>]` | Generate component templates, and optional implementation |
| `-name <name>` | Specify explicit name for component files |
| `-optimize` | Generate component projection with unified construction support |
| `-base` | Generate base.h unconditionally |
| `-prefix` | Use dotted namespace convention for component files |
| `-pch <name>` | Specify PCH file name (use `.` to disable) |
| `-library <prefix>` | Specify library prefix (defaults to `winrt`) |
| `-fastabi` | Enable Fast ABI support |
| `-verbose` | Show detailed progress information |
| `-overwrite` | Overwrite generated component files |

## Source File Patterns

### Include ordering rules

When using `import winrt;`, all `#include` directives must appear **before**
the `import` declarations. This is because textual `#include`s and module
`import`s can conflict if headers define types that the module also exports.

```cpp
// CORRECT: #includes before imports
#include "catch.hpp"    // third-party headers first
#include <winerror.h>   // Windows SDK headers (non-standard-library)

import std;             // standard library module
import winrt;           // C++/WinRT module

// Your code here...
```

### Consumer app (platform types only)

```cpp
import std;
import winrt;

using namespace winrt;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::Web::Syndication;

winrt::Windows::Foundation::IAsyncAction FetchFeedAsync()
{
    Uri uri(L"https://blogs.windows.com/feed");
    SyndicationClient client;
    auto feed = co_await client.RetrieveFeedAsync(uri);
    for (auto const& item : feed.Items())
    {
        std::wcout << item.Title().Text().c_str() << std::endl;
    }
}
```

### Component implementation

```cpp
// Toaster.cpp
import std;
import winrt;
#include "Toaster.h"      // your implementation header
#include "Toaster.g.cpp"  // generated factory function

namespace winrt::MyComponent::implementation
{
    void Toaster::MakeToast(hstring const& message)
    {
        // implementation...
    }
}
```

### Component implementation header

```cpp
// Toaster.h
#pragma once
#include "Toaster.g.h"  // generated base class template

namespace winrt::MyComponent::implementation
{
    struct Toaster : ToasterT<Toaster>
    {
        Toaster() = default;
        void MakeToast(hstring const& message);
    };
}

namespace winrt::MyComponent::factory_implementation
{
    struct Toaster : ToasterT<Toaster, implementation::Toaster> {};
}
```

## Preprocessor Macros Reference

### User-facing macros

| Macro | Purpose |
|-------|---------|
| `WINRT_IMPORT_STD` | When defined alongside `__cpp_lib_modules`, causes `base.h` to emit `import std;` instead of individual standard library `#include` directives. Automatically defined by the NuGet targets when `BuildStlModules` is enabled alongside `CppWinRTModuleBuild` or `CppWinRTModuleConsume`. |
| `WINRT_LEAN_AND_MEAN` | Suppresses `#include <ostream>` and `std::hash`/`std::formatter` specializations from generated headers. Reduces header weight. |
| `WINRT_MODULE` | When defined (project-wide), generated component files (`.g.h`, `.g.cpp`, `module.g.cpp`) use `import winrt;` instead of `#include` directives for platform types. Also causes generated namespace headers to skip `#include "base.h"` in their version assert (using `base_macros.h` instead), since base.h types are available from the module. Automatically defined by the NuGet targets when `CppWinRTModuleBuild` or `CppWinRTModuleConsume` is set. Can also be defined manually for non-NuGet projects. Does NOT suppress cross-namespace `#include` deps between component namespaces — only `WINRT_IMPL_SKIP_INCLUDES` (set locally in `.g.h` files) does that. |

### Internal implementation macros

These are used by the code generator and should not be set directly by users:

| Macro | Purpose |
|-------|--------|
| `WINRT_BUILD_MODULE` | Defined by cppwinrt in the winrt.ixx global module fragment. Tells namespace headers to use `base_macros.h` instead of `#include "base.h"` (since base.h is already included explicitly in the ixx). Also `#undef`s `WINRT_IMPL_SKIP_INCLUDES` so cross-namespace deps are included normally inside the ixx. |
| `WINRT_IMPL_SKIP_INCLUDES` | When defined, generated namespace headers skip their cross-namespace `#include` dependencies (e.g., `#include "winrt/impl/Windows.Foundation.2.h"`). Set locally inside generated `.g.h` files under `#ifdef WINRT_MODULE` — NOT defined project-wide. This ensures component-to-component cross-namespace deps still work while platform SDK deps (available from the module) are skipped in the narrow .g.h scope. |
| `WINRT_EXPORT` | Expands to `export` inside `winrt.ixx` (module purview), empty in header mode. Used on namespace declarations so types are properly exported from the module. Also applied to `winrt_to_hresult_handler` and related extern handler variables in `base_extern.h` for correct linkage when mixing modules and non-modules code in the same binary. Defined in `base_macros.h` (as empty) for use in generated component files that operate alongside the module. |
| `WINRT_IMPL_EMPTY_BASES` | MSVC `__declspec(empty_bases)` optimization. Defined in both `base.h` and `base_macros.h`. |
| `WINRT_IMPL_ABI_DECL` | Combines `WINRT_IMPL_NOVTABLE` and `WINRT_IMPL_PUBLIC` for ABI interface declarations. |
| `CPPWINRT_VERSION` | Version string for header compatibility checking. Defined in `base.h` and `base_macros.h`. |

## Architecture: How the Module is Built

### Generated file structure

```
winrt/
├── base.h              # Core C++/WinRT library (types, helpers, COM support)
├── base_macros.h       # Lightweight macro-only header for module consumers
├── winrt.ixx           # C++20 module interface unit
├── Windows.Foundation.h        # Platform namespace header (consume definitions)
├── impl/
│   ├── Windows.Foundation.0.h  # Forward decls, enums, ABI, consume structs
│   ├── Windows.Foundation.1.h  # Interface definitions
│   └── Windows.Foundation.2.h  # Class/struct/delegate definitions
├── test_component.h            # Component namespace header (if component)
└── impl/
    ├── test_component.0.h      # Component forward decls + template specializations
    ├── test_component.1.h      # Component interface definitions
    └── test_component.2.h      # Component class definitions
```

### winrt.ixx structure

```
module;                                     ← Global module fragment
#define WINRT_BUILD_MODULE                  ← Defined here, controls header behavior
#undef WINRT_IMPL_SKIP_INCLUDES            ← Ensure cross-namespace deps work inside ixx
<intrin.h, version, directxmath.h>          ← Platform includes (base_includes)
<algorithm, array, atomic, ...>             ← Standard library includes (base_std_includes)

export module winrt;                        ← Module purview begins
#define WINRT_EXPORT export
#include "winrt/base.h"                     ← Core library (explicit include)

#include "winrt/Windows.Foundation.h"       ← Platform namespace headers
#include "winrt/Windows.Foundation.Collections.h"
...                                         ← (all platform namespaces)
```

The `winrt::impl` namespace is exported alongside `winrt`, so component
projection headers can specialize `impl` templates (like `category`, `abi`,
`guid_v`) after `import winrt;` without needing to be folded into the ixx.

### How component and reference projection headers work with modules

The `winrt::impl` namespace is exported from the module, which means the
primary templates (`category`, `abi`, `guid_v`, `name_v`, `default_interface`,
`consume`) are visible to external code. Component projection headers
(`.0.h` files) specialize these templates for the component's types.

**Consumer experience**: After `import winrt;`, consumers can textually `#include`
reference and component projection headers. `WINRT_MODULE` (defined project-wide
by the NuGet targets) tells each namespace header to skip `#include "base.h"`
and use `base_macros.h` instead — base.h types are already available from the
module. Cross-namespace `#include` deps between component namespaces are NOT
skipped, so multi-namespace components work correctly:

```cpp
import winrt;                                     // platform types from module
#include <winrt/MyComponent.h>                    // root component namespace
#include <winrt/MyComponent.Widgets.h>            // sub-namespace — works!

auto widget = component.CreateWidget();           // returns MyComponent.Widgets.Widget
auto name = widget.Name();                        // calls method on cross-namespace type
```

Inside generated `.g.h` files, `WINRT_IMPL_SKIP_INCLUDES` is set locally (under
`#ifdef WINRT_MODULE`) to skip platform SDK deps that are already in the module.
This is scoped to just the `.g.h` — it does not affect other headers included
by consumer source files.

### Generated file differences when `WINRT_MODULE` is defined

Generated component files contain `#ifdef WINRT_MODULE` guards. The code generator
always emits both paths — the preprocessor selects at compile time:

| File | Without `WINRT_MODULE` | With `WINRT_MODULE` |
|------|------------------------|---------------------|
| `Toaster.g.h` | `#include "winrt/test_component.h"` (pulls in `base.h` transitively) | `#include "winrt/base_macros.h"` + `import winrt;` + `WINRT_IMPL_SKIP_INCLUDES` + component headers |
| `Toaster.g.cpp` | `winrt_make_*` + constructor/static overrides | `winrt_make_*` only (constructors guarded by `#ifndef WINRT_MODULE`) |
| `module.g.cpp` | `#include "winrt/base.h"` | `import winrt;` (`import std;` conditional on `WINRT_IMPORT_STD`) |

### base_macros.h

Macros are not exported across C++20 module boundaries. When a `.g.h` file does
`import winrt;`, macros like `WINRT_EXPORT`, `WINRT_IMPL_EMPTY_BASES`, and
`CPPWINRT_VERSION` are not available. The generated `base_macros.h` is a
lightweight textual header that provides just these macros. It is always safe to
`#include` alongside `import winrt;` because it contains only preprocessor
definitions — no type/function declarations that could conflict with the module.

## NuGet Targets Integration

### CppWinRTBuildModule target

Runs when `CppWinRTModuleBuild=true`. After the platform projection is generated:

1. **Adds** `winrt.ixx` as a `ClCompile` item with `PrecompiledHeader=NotUsing`
2. **Defines** `WINRT_MODULE` so generated component files use `import winrt;`
3. **Defines** `WINRT_IMPORT_STD` when `BuildStlModules=true` is detected

### CppWinRTGetModuleOutputs target

Defined in every project that imports CppWinRT.targets, but only returns data
when `CppWinRTModuleBuild=true`. Returns the IFC, OBJ, and GeneratedFilesDir
paths. Called by consuming projects via the `MSBuild` task on `ProjectReference`
items.

### CppWinRTResolveModuleReferences target

Runs when `CppWinRTModuleConsume=true`. After `ResolveProjectReferences`:

1. **Calls** `CppWinRTGetModuleOutputs` on each `ProjectReference`
2. **Adds** the resolved IFC to `AdditionalModuleDependencies`
3. **Adds** the resolved OBJ to linker `AdditionalDependencies`
4. **Adds** the builder's `GeneratedFilesDir` to `AdditionalIncludeDirectories`
5. **Defines** `WINRT_IMPORT_STD` when `BuildStlModules=true` is detected
6. **Errors** if no project references with `CppWinRTModuleBuild` are found
   component generation emits `import winrt;` in `.g.h` and `module.g.cpp`

## Known Limitations

1. **`import std;` requires C++23 or later on v143**: The v143 toolset (VS 2022)
   enables `StdModulesSupported` only when the language standard is C++23 or
   `/std:c++latest` (`CppLanguageStandardNumber >= 23`). The v145 toolset
   (VS 2026) relaxes this to C++20. On v143 with `/std:c++20`, `import std;`
   is not available — use `import winrt;` with textual `#include`s for standard
   library types.

2. **Include ordering**: Standard library `#include` directives and third-party
   headers must come before `import std;` and `import winrt;` to avoid
   redefinition errors.

3. **PCH compatibility**: The module interface unit (`winrt.ixx`) cannot use a
   precompiled header. Regular source files that `import winrt;` CAN use a PCH,
   but the PCH must not include any `winrt/` headers (e.g., `winrt/base.h`,
   `winrt/Windows.Foundation.h`) since those types come from the module. A PCH
   containing third-party headers, Windows SDK headers, or other project headers
   is fine.

4. **Standard library headers not included transitively**: When using traditional
   `#include "winrt/base.h"`, you implicitly get standard library headers like
   `<string>`, `<vector>`, `<coroutine>`, etc. With `import winrt;`, these are
   NOT automatically available. You must either:
   - `import std;` (if your toolset/language standard supports it), or
   - Explicitly `#include` the standard library headers you need, or
   - Include them in your PCH

5. **WINRT_LEAN_AND_MEAN for consumers**: Pure consumer apps (no component
   authoring) should define `WINRT_LEAN_AND_MEAN` to avoid pulling `<ostream>`
   and `produce<>` templates into the module. Component authors should NOT
   define it since they need `produce<>`.

6. **Exported `winrt::impl` namespace**: The `winrt::impl` namespace is exported
   from the module so that component projection headers can specialize `impl`
   templates (`category`, `abi`, `guid_v`, etc.) after `import winrt;`. This
   means component headers can be `#include`d separately without being folded
   into `winrt.ixx`. Inside generated `.g.h` files, `WINRT_IMPL_SKIP_INCLUDES`
   is set locally to skip platform `#include` dependencies that come from the
   module. Cross-namespace deps between component namespaces are not affected.
