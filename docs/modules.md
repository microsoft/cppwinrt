# C++20 Modules Support in C++/WinRT

## Overview

C++/WinRT can generate a C++20 named module (`winrt.ixx`) that allows consumers
to write `import winrt;` instead of using traditional `#include` directives and
precompiled headers. This can significantly improve build times and simplify the
developer experience.

## Quick Start

### Pure SDK consumption (app that calls WinRT APIs)

Set these MSBuild properties in your `.vcxproj`:

```xml
<PropertyGroup Label="Globals">
    <CppWinRTModule>true</CppWinRTModule>
</PropertyGroup>

<ItemDefinitionGroup>
    <ClCompile>
        <BuildStlModules>true</BuildStlModules>
        <LanguageStandard>stdcpp20</LanguageStandard>
    </ClCompile>
</ItemDefinitionGroup>
```

Then in your source files:

```cpp
import std;
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

### Component authoring (DLL with IDL)

Same project properties as above, then in your implementation files:

```cpp
// MyComponent.cpp
import std;
import winrt;
#include "MyComponent.h"     // includes MyComponent.g.h
#include "MyComponent.g.cpp" // factory function only in module mode
```

The NuGet targets automatically:
1. Pass `-module` to cppwinrt.exe so generated `.g.h`/`.g.cpp` files use
   `import winrt;` instead of `#include` directives
2. Fold the component's projection headers into `winrt.ixx` so template
   specializations occur within the module purview
3. Define `WINRT_IMPORT_STD` when `BuildStlModules` is enabled

## Requirements

- **Visual Studio 2026** (v145 toolset) or later — the v180 MSBuild targets
  support `import std;` with C++20. Earlier toolsets (v143) require C++23 for
  `import std;` support.
- **C++20 or later** language standard (`/std:c++20` or `/std:c++latest`)
- **`BuildStlModules=true`** in `<ItemDefinitionGroup><ClCompile>` to enable
  the standard library module compilation

## MSBuild Properties

| Property | Type | Default | Description |
|----------|------|---------|-------------|
| `CppWinRTModule` | bool | `false` | Enable C++20 module mode. Adds `winrt.ixx` to compilation, folds component projections into the module, and passes `-module` to cppwinrt.exe for component generation. |
| `BuildStlModules` | ClCompile metadata | `false` | Enables building `std.ixx`/`std.compat.ixx` so `import std;` works. Set inside `<ItemDefinitionGroup><ClCompile>`. This is the same project property set by "Build ISO C++23 Standard Library Modules" (https://learn.microsoft.com/en-us/cpp/build/reference/c-cpp-prop-page?view=msvc-180#cc-language-properties)|

When `CppWinRTModule=true`, the NuGet targets also automatically:
- Define `WINRT_IMPORT_STD` as a preprocessor definition when `BuildStlModules`
  is enabled, so `base.h` uses `import std;` instead of individual `#include`s
- Define `WINRT_LEAN_AND_MEAN` on the `winrt.ixx` compilation unit

## cppwinrt.exe Command-Line Options

### Module-related options

| Option | Description |
|--------|-------------|
| `-module` | Generate component files (`.g.h`, `.g.cpp`, `module.g.cpp`) using `import winrt;` instead of `#include` directives. The `.g.h` files emit `import std;`, `import winrt;`, and `#include "winrt/base_macros.h"`. The `.g.cpp` files emit only the `winrt_make_*` factory function (constructor/static optimizations are omitted since those definitions come from the module). |

### Other commonly used options

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

### Consumer app (SDK types only)

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
| `WINRT_IMPORT_STD` | When defined alongside `__cpp_lib_modules`, causes `base.h` to emit `import std;` instead of individual standard library `#include` directives. Automatically defined by the NuGet targets when both `CppWinRTModule` and `BuildStlModules` are enabled. |
| `WINRT_LEAN_AND_MEAN` | Suppresses `#include <ostream>` and `std::hash`/`std::formatter` specializations from generated headers. Reduces header weight. |

### Internal implementation macros

These are used by the code generator and should not be set directly by users:

| Macro | Purpose |
|-------|---------|
| `WINRT_IMPL_SKIP_INCLUDES` | When defined, generated namespace headers skip their cross-namespace `#include` dependencies (e.g., `#include "winrt/base.h"`, `#include "winrt/impl/Windows.Foundation.2.h"`). Used when those dependencies are already available from the `winrt` module. The component's own impl headers are never skipped. |
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
├── Windows.Foundation.h        # SDK namespace header (consume definitions)
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
<intrin.h, version, directxmath.h>           ← Platform includes (base_includes)
<algorithm, array, atomic, ...>              ← Standard library includes (base_std_includes)

export module winrt;                        ← Module purview begins
#define WINRT_EXPORT export

#include "winrt/Windows.Foundation.h"       ← SDK namespace headers
#include "winrt/Windows.Foundation.Collections.h"
...                                         ← (all SDK namespaces)
#include "winrt/MyComponent.h"              ← Component headers (appended by build)
```

### Why component headers are folded into winrt.ixx

The component's `.0.h` impl headers contain explicit template specializations:

```cpp
// In test_component.0.h:
template <> struct category<winrt::test_component::IToaster>
    { using type = interface_category; };
template <> struct abi<winrt::test_component::IToaster>
    { struct type : inspectable_abi { ... }; };
template <> inline constexpr guid guid_v<winrt::test_component::IToaster>{ ... };
```

These specialize primary templates (`category`, `abi`, `guid_v`) defined in
`base.h`. If these specializations occur in textual code that imported the
primary templates from a module, MSVC currently reports:

```
error C3856: 'category': symbol is not a class template
```

By folding the component headers into `winrt.ixx`, the specializations happen
inside the same module purview as the primary templates, avoiding this issue
entirely.

### Generated file differences in module mode (`-module` flag)

| File | Header mode | Module mode (`-module`) |
|------|-------------|------------------------|
| `Toaster.g.h` | `#include "winrt/test_component.h"` | `#include "winrt/base_macros.h"` + `import std;` + `import winrt;` |
| `Toaster.g.cpp` | `winrt_make_*` + constructor/static overrides | `winrt_make_*` only (constructors come from module) |
| `module.g.cpp` | `#include "pch.h"` + `#include "winrt/base.h"` | `import std;` + `import winrt;` |

### base_macros.h

Macros are not exported across C++20 module boundaries. When a `.g.h` file does
`import winrt;`, macros like `WINRT_EXPORT`, `WINRT_IMPL_EMPTY_BASES`, and
`CPPWINRT_VERSION` are not available. The generated `base_macros.h` is a
lightweight textual header that provides just these macros. It is always safe to
`#include` alongside `import winrt;` because it contains only preprocessor
definitions — no type/function declarations that could conflict with the module.

## NuGet Targets Integration

The `CppWinRTAddModuleSource` target in `Microsoft.Windows.CppWinRT.targets`
performs these steps when `CppWinRTModule=true`:

1. **Scans** `$(GeneratedFilesDir)winrt/` for namespace headers (`.h` files)
   that are not already listed in `winrt.ixx`
2. **Appends** `#include` directives for those headers to the end of `winrt.ixx`
   (this folds component projection headers into the module)
3. **Adds** `winrt.ixx` as a `ClCompile` item with `PrecompiledHeader=NotUsing`
4. **Defines** `WINRT_IMPORT_STD` when `BuildStlModules=true` is detected

The `-module` flag is automatically appended to `$(CppWinRTParameters)` when
`CppWinRTModule=true`, so it flows to all cppwinrt.exe invocations including
the component projection generation.

## Known Limitations

1. **Toolset requirement**: The v145 toolset (VS 2026) or later is needed for
   `import std;` with C++20. Earlier toolsets define `__cpp_lib_modules` but
   their MSBuild targets only enable `StdModulesSupported` for C++23+.

2. **Include ordering**: Standard library `#include` directives and third-party
   headers must come before `import std;` and `import winrt;` to avoid
   redefinition errors.

3. **PCH compatibility**: The module interface unit (`winrt.ixx`) cannot use a
   precompiled header. Regular source files that `import winrt;` CAN use a PCH,
   but the PCH must not include any `winrt/` headers (e.g., `winrt/base.h`,
   `winrt/Windows.Foundation.h`) since those types come from the module. A PCH
   containing third-party headers, Windows SDK headers, or other project headers
   is fine.

4. **WINRT_LEAN_AND_MEAN for consumers**: Pure consumer apps (no component
   authoring) should define `WINRT_LEAN_AND_MEAN` to avoid pulling `<ostream>`
   and `produce<>` templates into the module. Component authors should NOT
   define it since they need `produce<>`.

5. **Cross-module template specialization**: Component projection headers
   (`.0.h` files) specialize templates like `winrt::impl::category`,
   `winrt::impl::abi`, `winrt::impl::guid_v`, etc. These templates are in the
   `winrt::impl` namespace, which is currently not exported from the module
   (it uses module linkage). When a textual `#include` of a component header
   tries to specialize these after `import winrt;`, the primary templates are
   not visible:
   ```
   error C3856: 'category': symbol is not a class template
   ```
   The combined-ixx approach (folding component headers into `winrt.ixx`)
   works around this by keeping specializations within the module purview,
   where the `impl` templates are directly visible. A future improvement could
   export the specific `impl` templates that need external specialization,
   which would allow component headers to be included separately after
   `import winrt;` without folding them into the module.
