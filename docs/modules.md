# C++20 Modules Support in C++/WinRT

## Overview

C++/WinRT can generate a C++20 named module (`winrt.ixx`) that allows consumers
to write `import winrt;` instead of using traditional `#include` directives and
precompiled headers. This can significantly improve build times and simplify the
developer experience.

## Quick Start

### Consuming the platform projection (app that calls WinRT APIs)

In Visual Studio, set the following in your project property pages:
- **C/C++ > General > C++ Language Standard**: `ISO C++20` or `Preview`
- **C/C++ > General > Build ISO C++23 Standard Library Modules**: `Yes`
- **C++/WinRT > General > C++20 Module**: `true`

Or equivalently, set these MSBuild properties in your `.vcxproj`:

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
#include "pch.h"          // PCH is fine — just don't include winrt/ headers in it
import winrt;
#include "MyComponent.h"     // includes MyComponent.g.h
#include "MyComponent.g.cpp" // factory function only in module mode
```

The NuGet targets automatically:
1. Pass `-module` to cppwinrt.exe so generated `.g.h`/`.g.cpp` files use
   `import winrt;` instead of `#include` directives for platform types
2. Generate component projection headers with `WINRT_IMPL_SKIP_INCLUDES` so
   they skip platform `#include` directives already available from the module
3. Define `WINRT_IMPORT_STD` when `BuildStlModules` is enabled

## Requirements

- **Visual Studio 2022** (v143 toolset) or later for `import winrt;`
- **C++20 or later** language standard (`/std:c++20` or `/std:c++latest`)
- For `import std;` alongside `import winrt;`:
  - **v143 toolset**: requires `/std:c++latest` (C++23 mode) + `BuildStlModules=true`
  - **v145 toolset** (VS 2026): works with `/std:c++20` + `BuildStlModules=true`
- **`BuildStlModules=true`** (optional) in `<ItemDefinitionGroup><ClCompile>`
  to enable the standard library module compilation for `import std;`

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
| `-module` | Generate component files (`.g.h`, `.g.cpp`, `module.g.cpp`) using `import winrt;` instead of `#include` directives for platform projection types. The `.g.h` files emit `import winrt;`, include the component's own projection headers with `WINRT_IMPL_SKIP_INCLUDES`, and `#include "winrt/base_macros.h"` for macros. The `.g.cpp` files emit only the `winrt_make_*` factory function (constructor/static optimizations are omitted since those definitions come from the component's projection header included after `import winrt;`). `import std;` is conditional on `WINRT_IMPORT_STD`. PCH includes are preserved. |

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
<intrin.h, version, directxmath.h>          ← Platform includes (base_includes)
<algorithm, array, atomic, ...>             ← Standard library includes (base_std_includes)

export module winrt;                        ← Module purview begins
#define WINRT_EXPORT export

#include "winrt/Windows.Foundation.h"       ← Platform namespace headers
#include "winrt/Windows.Foundation.Collections.h"
...                                         ← (all platform namespaces)
```

The `winrt::impl` namespace is exported alongside `winrt`, so component
projection headers can specialize `impl` templates (like `category`, `abi`,
`guid_v`) after `import winrt;` without needing to be folded into the ixx.

### How component projection works with modules

The `winrt::impl` namespace is exported from the module, which means the
primary templates (`category`, `abi`, `guid_v`, `name_v`, `default_interface`,
`consume`) are visible to external code. Component projection headers
(`.0.h` files) specialize these templates for the component's types.

When a component's `.g.h` does `import winrt;` and then includes the
component's projection header with `WINRT_IMPL_SKIP_INCLUDES`:
- Platform projection dependencies (`base.h`, `Windows.Foundation.h`, etc.) are
  skipped — they're already available from the module
- The component's own impl headers are included normally — they contain
  the template specializations that register the component's types
- The specializations succeed because the primary templates are exported
  from the module and visible to the textual include

### Generated file differences in module mode (`-module` flag)

| File | Header mode | Module mode (`-module`) |
|------|-------------|------------------------|
| `Toaster.g.h` | `#include "winrt/test_component.h"` | `#include "winrt/base_macros.h"` + `import winrt;` + component headers with `WINRT_IMPL_SKIP_INCLUDES` |
| `Toaster.g.cpp` | `winrt_make_*` + constructor/static overrides | `winrt_make_*` only (constructors come from projection header) |
| `module.g.cpp` | `#include "pch.h"` + `#include "winrt/base.h"` | `#include "pch.h"` + `import winrt;` (`import std;` conditional on `WINRT_IMPORT_STD`) |

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

1. **Adds** `winrt.ixx` as a `ClCompile` item with `PrecompiledHeader=NotUsing`
2. **Defines** `WINRT_IMPORT_STD` when `BuildStlModules=true` is detected
3. **Passes** `-module` to cppwinrt.exe via `$(CppWinRTParameters)` so
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
   into `winrt.ixx`. The `WINRT_IMPL_SKIP_INCLUDES` macro is used by generated
   `.g.h` files to skip platform `#include` dependencies that are already available
   from the module.
