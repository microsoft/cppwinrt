# C++/WinRT C++20 Modules Guide

## Overview

C++/WinRT can generate per-namespace C++20 named modules (`.ixx` files) alongside the traditional projection headers. This allows you to write:

```cpp
import winrt.Windows.Foundation;
```

instead of:

```cpp
#include <winrt/Windows.Foundation.h>
```

Benefits include:

- **Smaller intermediate artifacts.** The IFC representation of a C++/WinRT projection is significantly smaller than the equivalent precompiled header (PCH).
- **Shared compilation across projects.** PCHs eliminate redundant parsing *within* a project, but each project rebuilds its own PCH. Module IFCs can be built once in a shared module builder project and consumed by all dependent projects, eliminating redundant work across the entire solution.
- **Better isolation.** Module imports don't leak macros into the importing translation unit.

> **Real-world experience:** The guidance in this document was hardened against a prototype conversion of the Windows Terminal codebase (~250 files across 15+ projects) from textual `#include`s to module imports.

## Prerequisites

- **MSVC v145 toolset** (Visual Studio 2026) or later with C++20 module support
- **C++/WinRT 3.x** NuGet package with `CppWinRTBuildModule` support
- `/std:c++20` or later (`/std:c++latest` recommended for `import std;`)
- `BuildStlModules=true` for `import std;` support

## Three Fundamental Constraints

These three rules drive almost every pattern in this guide. Understanding them up front makes the rest of the document much easier to follow:

1. **`import` in a PCH breaks the compiler.** MSVC cannot handle module `import` declarations inside a precompiled header — it produces internal compiler errors (ICE). All module imports must live outside the PCH.

2. **Include-then-import is safe, but has a cost.** MSVC handles the case where you `#include` a header and then `import` the same content. For STL headers this is a reasonable workaround (the compilation cost is modest), but C++/WinRT projection headers can be extremely expensive to parse textually. Include-then-import with winrt headers defeats the build-cost improvements of adopting modules, so it should be avoided where possible.

3. **Import-then-include is not supported.** When a module has already been imported, `#include`-ing a header that declares the same types causes errors — the compiler sees conflicting declarations. C++/WinRT provides a workaround: defining `WINRT_IMPORT_MODULE` before including a winrt header causes the header to be (mostly) a no-op, defining only its include-guard macro. This makes it safe to include winrt headers *after* importing modules, which is essential for lighting up header-guard-based features in libraries like WIL, and for interoperating with external code that includes winrt headers out of your control (e.g. the XAML compiler). STL headers do not have an equivalent workaround, but can fall back on the "generally safe" include-then-import pattern.

The patterns throughout this guide are direct consequences of these constraints:

- The PCH is stripped of all winrt content.
- A separate "module preamble" header centralizes imports.
- Wrapper headers define `WINRT_IMPORT_MODULE` before including winrt headers.
- STL headers are sometimes pre-included in the PCH, but only as a workaround.

## Quick Start — Single Project

For a small project that builds and consumes its own modules:

1. Set `CppWinRTBuildModule` to `true` in your project:
   ```xml
   <PropertyGroup>
     <CppWinRTBuildModule>true</CppWinRTBuildModule>
   </PropertyGroup>
   ```

2. Optionally limit which namespaces get modules:
   ```xml
   <PropertyGroup>
     <CppWinRTModuleInclude>Windows.Foundation;Windows.Storage</CppWinRTModuleInclude>
   </PropertyGroup>
   ```

   By default, C++/WinRT generates and builds `.ixx` files for **every** namespace reachable from your WinMD inputs — for a typical Windows SDK projection, that's hundreds of namespaces and can add upwards of a minute to your build. If build speed matters, prune the set with `CppWinRTModuleInclude` (or `CppWinRTModuleExclude`) so that only the namespaces you actually `import` are produced. See [Understanding the Include and Exclude Filters](#understanding-the-include-and-exclude-filters) for the full discussion.

3. Enable `BuildStlModules` for `import std;` support:
   ```xml
   <ClCompile>
     <BuildStlModules>true</BuildStlModules>
   </ClCompile>
   ```

4. In your `.cpp` files:
   ```cpp
   import winrt.Windows.Foundation;

   int main() {
       winrt::init_apartment();
       winrt::Windows::Foundation::Uri uri(L"https://example.com");
   }
   ```

For a single vcxproj — or a handful of projects that don't share many namespaces — this is all you need. A dedicated module builder is only worth the overhead when multiple projects need the same platform and third-party WinRT modules.

## Architecture — Module Builder (Recommended for Multi-Project Solutions)

For solutions with multiple projects, the recommended approach is a dedicated **module builder** project that builds the shared IFC files once, consumed by all other projects. This avoids each project redundantly compiling the same module interfaces.

### The Module Builder Project

Create a dedicated static library project whose sole purpose is to build the shared platform module IFC files. This project has no source files of its own — the C++/WinRT NuGet targets generate `.ixx` files automatically.

```xml
<PropertyGroup>
  <ConfigurationType>StaticLibrary</ConfigurationType>
  <CppWinRTBuildModule>true</CppWinRTBuildModule>
  <BuildStlModules>true</BuildStlModules>
</PropertyGroup>
```

Key configuration:

- **`CppWinRTBuildModule=true`** generates per-namespace `.ixx` module interface files.
- **`BuildStlModules=true`** is required because the generated `.ixx` files use `import std;`.
- **`WINRT_ENABLE_LEGACY_COM`** — define this preprocessor macro if your project uses classic COM interfaces (`IUnknown`, `IInspectable`). It causes `<unknwn.h>` and `<inspectable.h>` to be included within the `winrt_base` module.
- **PCH**: don't bother. The module builder can use a PCH, but there is little benefit — its content is almost entirely C++/WinRT headers, and most non-C++/WinRT headers are only used once in `winrt_base`.

### Consumer Project Configuration

Each project that uses modules needs:

```xml
<PropertyGroup>
  <CppWinRTBuildModule>true</CppWinRTBuildModule>
  <CppWinRTModuleInclude>MyCompany.MyComponent</CppWinRTModuleInclude>
  <CppWinRTModuleExclude>Microsoft.UI;Microsoft.Web</CppWinRTModuleExclude>
</PropertyGroup>
<ItemGroup>
  <ProjectReference Include="..\ModuleBuilder\ModuleBuilder.vcxproj">
    <CppWinRTConsumeModule>true</CppWinRTConsumeModule>
  </ProjectReference>
</ItemGroup>
```

- **`CppWinRTBuildModule=true`** is required on consumers too. It enables the C++/WinRT targets to generate `.ixx` module interface files for the project's own component namespaces (filtered by `CppWinRTModuleInclude` / `CppWinRTModuleExclude`) and wires up module consumption from referenced projects.
- **`CppWinRTConsumeModule=true`** on the `ProjectReference` tells the build system to use the builder's pre-built platform IFCs instead of compiling platform `.ixx` files again, and skip generating platform `.ixx` files in the consumer's own projection.

### Adding Third-Party WinMDs to the Module Builder

If your project uses third-party WinRT components (e.g., WinUI/MUX, WebView2), build their modules in the shared builder by adding their WinMDs as platform inputs:

```xml
<Target Name="AddThirdPartyWinMDs"
        BeforeTargets="GetCppWinRTPlatformWinMDInputs"
        DependsOnTargets="ResolveAssemblyReferences">
  <ItemGroup>
    <CppWinRTPlatformWinMDReferences Include="path\to\Microsoft.UI.Xaml.winmd" />
    <CppWinRTPlatformWinMDReferences Include="path\to\Microsoft.Web.WebView2.Core.winmd" />
  </ItemGroup>
</Target>
```

**Important:** Add these WinMDs as `CppWinRTPlatformWinMDReferences`, **not** as NuGet `<Reference>` items. In practice, adding third-party WinMDs via NuGet `<Reference>` items on the module builder has been observed to cause empty path errors in the reference projection step. Adding them directly as `CppWinRTPlatformWinMDReferences` feeds them into the platform projection, which is the correct pipeline for a module builder project.

### Component DLLs

WinRT component projects can also use modules. Set `CppWinRTBuildModule=true` and all three projections (platform, reference, component) will generate `.ixx` files.

```xml
<PropertyGroup>
  <CppWinRTBuildModule>true</CppWinRTBuildModule>
  <CppWinRTModuleInclude>MyComponent</CppWinRTModuleInclude>
</PropertyGroup>
<ItemGroup>
  <ProjectReference Include="..\ModuleBuilder\ModuleBuilder.vcxproj">
    <CppWinRTConsumeModule>true</CppWinRTConsumeModule>
  </ProjectReference>
</ItemGroup>
```

If project A references a component DLL from project B, project A builds its own reference projection modules from B's `.winmd`:

```cpp
// These modules are built locally from the component's .winmd
import winrt.MyComponent;

auto obj = winrt::MyComponent::MyClass();
```

## MSBuild Properties

| Property | Default | Description |
|-|-|-|
| `CppWinRTBuildModule` | `false` | Generate `.ixx` module interface units from projections |
| `CppWinRTModuleInclude` | (all) | Semicolon-delimited namespace prefixes to include in module generation |
| `CppWinRTModuleExclude` | (none) | Semicolon-delimited namespace prefixes to exclude from module generation |

| `ProjectReference` Metadata | Default | Description |
|-|-|-|
| `CppWinRTConsumeModule` | `false` | Consume pre-built platform module IFCs from this project reference |

### Understanding the Include and Exclude Filters

These filters control which C++/WinRT module `.ixx` files are generated from WinMD inputs. They only affect modules produced by the C++/WinRT NuGet targets from `.winmd` files — hand-authored modules or modules unrelated to WinRT are not affected.

- **`CppWinRTModuleInclude`** — semicolon-separated namespace prefixes. Only matching namespaces will have `.ixx` files generated. Without this, *all* namespaces from the project's WinMD inputs are candidates.
- **`CppWinRTModuleExclude`** — semicolon-separated namespace prefixes to suppress `.ixx` generation for. **Import statements are still generated** in the modules that remain; only the `.ixx` file creation is suppressed.

#### Why Filter at All?

There are three distinct reasons to set these filters. Most non-trivial projects will hit more than one:

1. **Build performance.** By default, enabling `CppWinRTBuildModule=true` generates and compiles `.ixx` files for *every* namespace reachable from your WinMD inputs. For a typical Windows SDK projection that's hundreds of namespaces, and the IFC compilation step can easily add upwards of a minute to a clean build. Use `CppWinRTModuleInclude` to narrow generation to namespaces you (or your consumers) actually `import`, or `CppWinRTModuleExclude` to drop large subtrees you don't use (e.g., `Windows.Devices`, `Windows.Media`). For a dedicated module builder project that other projects consume, this is typically the dominant reason to filter.

2. **Avoiding ambiguous IFC errors (C7684).** An IFC is ambiguous when the same module name resolves to two different `.ifc` files — typically one built locally and one from a referenced project. See [When to Set an Exclude for Ambiguity](#when-to-set-an-exclude-for-ambiguity) below.

3. **Avoiding modules with unsatisfied dependencies.** Filtering to a subset of namespaces does *not* prune the `import` statements those modules emit for their dependencies — so a generated module whose dependencies fall outside your filter will fail to compile. See [Module Filtering and Transitive Dependencies](#module-filtering-and-transitive-dependencies) below.

#### When to Set an Exclude for Ambiguity

Exclude a namespace when its IFC is already provided by a project you reference:

| Scenario | Action |
|----------|--------|
| You reference a **static library** with `CppWinRTBuildModule=true` | Exclude namespaces that static lib produces (its IFCs propagate via `AdditionalBMIDirectories`) |
| You reference a **DLL** with `CppWinRTBuildModule=true` | **No exclude needed** — DLL IFCs don't propagate by default |
| The **module builder** produces a namespace (e.g., `Microsoft.UI`) | Exclude it — the module builder's IFCs propagate via `CppWinRTConsumeModule` |

Example — a project that references both the module builder (which provides `Microsoft.UI.*`) and a `TerminalCore` static library (which provides `Microsoft.Terminal.Core`):

```xml
<CppWinRTModuleInclude>Microsoft.Terminal</CppWinRTModuleInclude>
<CppWinRTModuleExclude>Microsoft.Terminal.Core;Microsoft.UI;Microsoft.Web</CppWinRTModuleExclude>
```

### Module Filtering and Transitive Dependencies

`CppWinRTModuleInclude` and `CppWinRTModuleExclude` control which namespace `.ixx` files are **generated**, but they do not suppress `import` statements for dependencies. If namespace A is included in the filter and depends on namespace B, the generated `winrt.A.ixx` will contain `import winrt.B;` even if B is excluded from the filter. This is by design — the module for B must exist *somewhere* (either from the same project or from a referenced project).

Implications:

- **Transitive closure must be satisfied.** If you filter to a subset of namespaces, any dependencies that fall outside the filter must be available from another source (e.g., a module builder project referenced via `CppWinRTConsumeModule`, or MSBuild's automatic `ReferencedModuleBMIs` from a static library reference). Otherwise, compilation will fail with "could not find module" errors.

- **Use `CppWinRTModuleExclude` to avoid generating modules that have unsatisfied dependencies.** For example, `Windows.Foundation.Diagnostics` depends on `Windows.Storage`. If you filter to `CppWinRTModuleInclude=Windows.Foundation`, the Diagnostics `.ixx` will be generated (it matches the prefix) but will fail to compile because `winrt.Windows.Storage` doesn't exist. Add `CppWinRTModuleExclude=Windows.Foundation.Diagnostics` to prevent this.

- **In multi-project scenarios with static libraries, use `CppWinRTModuleExclude` to avoid duplicate modules.** MSBuild automatically propagates all module IFCs from static library references to consuming projects (via the `AllProjectBMIsArePublic` property, which defaults to `true` for static libraries). If project A is a static library that builds modules for namespace X, and project B references A, then B already has A's IFCs available. If B also has `CppWinRTBuildModule=true`, its reference projection will generate a second `winrt.X.ixx`, causing an ambiguous module error. Set `CppWinRTModuleExclude=X` on project B to prevent this. B's own `.ixx` files will still emit `import winrt.X;`, which resolves to A's IFC via MSBuild's automatic propagation. Note: this issue does not affect DLL references — MSBuild does not propagate module IFCs from DLLs by default.

## Module Names

| Module | Contents |
|-|-|
| `winrt_base` | Core C++/WinRT types (`hstring`, `com_ptr`, `IUnknown`, etc.) — re-exported by all namespace modules |
| `winrt_numerics` | `Windows::Foundation::Numerics` types — re-exported by `winrt_base` |
| `winrt.<Namespace>` | Per-namespace projection (e.g., `winrt.Windows.Foundation`) |

## Converting an Existing Project: Step by Step

### 1. Strip winrt from the PCH

Module `import` declarations inside a precompiled header cause compiler ICEs. All C++/WinRT content must be moved out of the PCH and into the module preamble header (see next step).

Remove the following from your PCH:

- `#include <winrt/*.h>` — all winrt projection headers
- `#include <wil/cppwinrt.h>` and `<wil/cppwinrt_helpers.h>`
- Any header that depends on C++/WinRT types, **including headers that conditionally enable behavior based on C++/WinRT header guards.** For example, `wil/cppwinrt_helpers.h` checks for `WINRT_Windows_UI_Core_H` and uses types from `Windows.UI.Core` when defined — this header must move out of the PCH.

**Keep** in the PCH:

- Platform SDK headers (`<windows.h>`, `<Unknwn.h>`, etc.)
- Non-winrt third-party headers

**STL headers and `import std;`** — STL headers are safe to include *before* `import std;` (include-then-import works). Problems arise when STL headers are included *after* `import std;`, which can cause redefinition warnings (C4348, C5028). In most cases it is preferable to use `import std;` instead of putting STL headers in the PCH. However, if you depend on libraries that internally `#include` STL headers *after* modules have been imported, you may need to pre-include the offending STL headers in the PCH to make the later inclusion inert:

```cpp
// Pre-include STL headers that other libraries include after import std;
#include <variant>
#include <latch>
```

Ideally, the offending library code would also adopt `import std;`, but that's not always immediately practical.

### 2. Create a Module Preamble Header

A module preamble header centralizes the module imports and library setup that are shared across a project's source files. It is not strictly required — you could add imports directly to each `.cpp` file — but it speeds up migration significantly and becomes necessary if you need to deal with generated files outside your control (see [XAML Projects](#xaml-projects)).

Create a preamble header in each project that contains the module imports commonly used across that project:

```cpp
// ModulePreamble.h (or whatever name you prefer)
#pragma once

#define WINRT_IMPORT_MODULE

// Import the C++/WinRT namespaces used across this project
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;
import winrt.Windows.System;
// ... other namespaces your project needs

// Component modules
import winrt.MyCompany.MyComponent;
```

Importing modules is cheap, so don't hesitate to list every namespace the project uses. You can add library wrapper headers and other setup to this file as needed (see next section).

Include the preamble in each `.cpp` file after the PCH:

```cpp
#include "pch.h"
#include "ModulePreamble.h"
// ... rest of the file
```

### 3. Wrap Library Headers That Depend on C++/WinRT Types

Libraries like WIL use `#ifdef WINRT_Windows_Foundation_H` guards to conditionally enable winrt-dependent features. With modules, those header guards are never defined because the winrt headers are never textually included. To light up this behavior, define the appropriate header guards before including the library header — or, equivalently, include the now-inert winrt headers under `WINRT_IMPORT_MODULE`, which defines the guards as a side effect.

You can do this directly in the module preamble:

```cpp
// In your module preamble header
import winrt.Windows.Foundation;
#define WINRT_IMPORT_MODULE
#define WINRT_Windows_Foundation_H  // Lights up WIL's Foundation support
#include <wil/cppwinrt.h>
```

If you include the library from many places, you can author a **wrapper header** that bundles the imports, guard definitions, and library include together:

```cpp
// wil_cppwinrt_module.h
#pragma once

import winrt_base;
import winrt.Windows.Foundation;
import winrt.Windows.Foundation.Collections;

#define WINRT_IMPORT_MODULE
// Define header guards to light up WIL's conditional winrt features.
// You can either define the guards directly, or include the now-inert
// winrt headers (which define the guards as a side effect):
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <wil/cppwinrt.h>
#include <wil/cppwinrt_helpers.h>
```

Include this wrapper in your module preamble as needed. Re-importing modules and re-defining header guards is harmless, so there's no issue with including the wrapper from multiple places.

This pattern applies to any library that conditionally uses winrt types based on header include guards.

### 4. Update the vcxproj

```xml
<!-- Add to your PropertyGroup -->
<CppWinRTBuildModule>true</CppWinRTBuildModule>
<CppWinRTModuleInclude>MyCompany.MyComponent</CppWinRTModuleInclude>
<CppWinRTModuleExclude>Microsoft.UI;Microsoft.Web</CppWinRTModuleExclude>

<!-- Add ProjectReference to the module builder, if using -->
<ProjectReference Include="path\to\CppWinRTModule.vcxproj">
  <CppWinRTConsumeModule>true</CppWinRTConsumeModule>
</ProjectReference>
```

### 5. Add Solution Build Dependency

If using `.slnx` or `.sln`, add a build dependency to ensure the module builder, if using, compiles first:

```xml
<BuildDependency Project="path/to/CppWinRTModule.vcxproj" />
```

## Special Cases

### XAML Projects

XAML projects have a two-pass compilation model that complicates module adoption. The XAML compiler generates source files (`XamlTypeInfo.g.cpp`, `XamlTypeInfo.Impl.g.cpp`, `XamlMetaDataProvider.cpp`) that use winrt types but don't know about modules.

The solution is to inject `ModulePreamble.h` via the `/FI` (forced include) compiler flag on these generated files, using MSBuild targets:

```xml
<!-- Inject module imports into XAML-generated source files -->
<Target Name="InjectModuleImportsIntoXamlGenerated"
        AfterTargets="ComputeXamlGeneratedCompileInputs"
        BeforeTargets="ClCompile">
  <ItemGroup>
    <ClCompile Update="@(ClCompile)"
               Condition="'%(Filename)' == 'XamlTypeInfo.g'
                       or '%(Filename)' == 'XamlTypeInfo.Impl.g'
                       or '%(Filename)' == 'XamlMetaDataProvider'
                       or '%(Filename)' == 'XamlLibMetadataProvider.g'">
      <PrecompiledHeader>NotUsing</PrecompiledHeader>
      <ForcedIncludeFiles>$(MSBuildProjectDirectory)\ModulePreamble.h</ForcedIncludeFiles>
    </ClCompile>
  </ItemGroup>
</Target>
```

For static library projects, the XAML build system has a second compilation pass (`CompileXamlGeneratedFiles`) that runs after `ClCompile` but before `Lib`. For DLLs and EXEs, the same targets run after the build compile phase. In either case, you need a second target to ensure the `/FI` metadata is applied before `CompileXamlGeneratedFiles`:

```xml
<Target Name="InjectModuleImportsIntoXamlGeneratedPass2"
        AfterTargets="ComputeXamlGeneratedCompileInputs"
        BeforeTargets="CompileXamlGeneratedFiles">
  <ItemGroup>
    <ClCompile Update="@(ClCompile)"
               Condition="...same condition...">
      <PrecompiledHeader>NotUsing</PrecompiledHeader>
      <ForcedIncludeFiles>$(MSBuildProjectDirectory)\ModulePreamble.h</ForcedIncludeFiles>
    </ClCompile>
  </ItemGroup>
</Target>
```

**Critical MSBuild detail:** Use `<ClCompile Update="@(ClCompile)" Condition="...">`, not just `<ClCompile Condition="...">`. Without `Update`, MSBuild adds new items instead of modifying metadata on existing ones.

**Why the preamble header needs `#include "pch.h"` for XAML:** When used as `/FI`, the preamble header is processed *before* the generated file's own `#include "pch.h"`. Adding `#include "pch.h"` at the top of the preamble ensures platform headers are available. For regular `.cpp` files that already include pch.h before the preamble, it's a `#pragma once` no-op. If your project doesn't use the `/FI` approach for XAML, you don't need pch.h in the preamble.

#### Understanding the XAML Build Order

The XAML build targets schedule `MarkupCompilePass2` and `CompileXamlGeneratedFiles` differently depending on project type:

- **Static libraries** (`AfterClCompileTargets`): Pass2 runs after `ClCompile`, before `Lib`
- **DLLs/EXEs** (`AfterBuildCompileTargets`): Pass2 runs after the build compile phase, before `Link`

In both cases, the order is:

1. **MarkupCompilePass1** (before `ClCompile`): Generates `.xaml.g.h` declarations
2. **ClCompile**: Compiles your source files
3. **MarkupCompilePass2**: Generates `.xaml.g.hpp` implementations
4. **CompileXamlGeneratedFiles**: Compiles `XamlTypeInfo.g.cpp` (which `#include`s the `.xaml.g.hpp` files)

The XAML-generated items (`XamlTypeInfo.g.cpp`, etc.) are added to `ClCompile` by the `ComputeXamlGeneratedCompileInputs` target, which is why the `/FI` target uses `AfterTargets="ComputeXamlGeneratedCompileInputs"`.

### Headers with Conditional winrt Conversions

If you have utility types (like a `color` struct) with conversion operators gated behind winrt header guards:

```cpp
#ifdef WINRT_Windows_UI_H
    operator winrt::Windows::UI::Color() const { ... }
#endif
```

These guards must be defined **before** the header is first included (`#pragma once` means it won't be processed again). Create a dedicated wrapper that imports the module, sets the guard, then re-includes the header:

```cpp
// color_module.h
#pragma once
import winrt.Windows.UI;
#define WINRT_IMPORT_MODULE
#include <winrt/Windows.UI.h>  // Sets WINRT_Windows_UI_H
#include <my/color.h>          // Now sees the guard, enables converters
```

Include this wrapper in your `ModulePreamble.h` **before** any other header that might include the guarded file.

### Win32 Macro Conflicts

Some Win32 macros (e.g., `GetObject` from `wingdi.h`) conflict with WinRT method names. With headers, the macro was applied to both the projection types and the call site. With modules, the WinRT types don't have the macro applied (they were compiled in the module without the macro), but your source file still has the macro defined. Use:

```cpp
#pragma push_macro("GetObject")
#undef GetObject
// ... code using winrt types with GetObject method
#pragma pop_macro("GetObject")
```

## Caution: Module Reuse Across Projects

Pre-built IFCs (via `CppWinRTConsumeModule`) should only be shared when the builder and consumer use the same compilation context. In particular:

- **Component modules are project-private.** A component projection built with `CppWinRTOptimized=true` generates modules that bypass activation factories for in-component type instantiation (`-opt`). If a consuming project accidentally imports these modules instead of building its own reference projection, the consumer will attempt direct instantiation across DLL boundaries, resulting in linker errors or incorrect behavior. Each project should build its own modules from the component's `.winmd` — do not tag component `ProjectReference`s with `CppWinRTConsumeModule`.

- **`CppWinRTConsumeModule` is intended for platform module builders only.** The builder project is a dedicated static library whose sole purpose is compiling platform SDK modules. Its compilation flags (no `-opt`, no `-comp`) produce modules safe for any consumer. Only tag this builder's `ProjectReference` with `CppWinRTConsumeModule=true`.

- **Module filter scope matters.** `CppWinRTModuleInclude` / `CppWinRTModuleExclude` applies to all three projections (platform, reference, component). If you set `CppWinRTModuleInclude=MyComponent`, only `MyComponent` namespaces will get `.ixx` files — platform and reference namespace modules will not be generated. Make sure your filter includes all namespaces you intend to import as modules, or use `CppWinRTConsumeModule` to get platform modules from a builder that was configured with the appropriate filter.

- **Compilation settings must be compatible between builder and consumer.** Module IFCs encode assumptions about the compilation environment. While the compiler may not always diagnose mismatches, the following differences between the module builder and consumer may cause subtle or hard-to-diagnose issues:
  - **Debug vs Release** — mixing Debug and Release configurations can produce mismatched code generation, iterator debugging levels, and runtime library selections.
  - **Preprocessor definitions** — definitions that affect type layout, conditional compilation, or feature flags should match between builder and consumer.
  - **Struct alignment / packing** — different `/Zp` settings between projects can change struct layout, causing silent ABI mismatches.
  - **Language standard** — while C++20 and later are generally compatible, mixing `/std:c++20` and `/std:c++23` and/or `/std:c++latest` can affect type definitions if language features differ.

  As a general rule, the module builder project should try to use the same configuration, preprocessor definitions, and compiler options as its consumers.

## Limitations

- Module IFCs are not compatible across toolset versions. All projects must use the same toolset.
- Cyclic namespace dependencies (e.g., `Windows.Foundation` ↔ `Windows.Foundation.Collections`) are handled automatically via SCC consolidation, but the resulting module name is chosen alphabetically. Adding new APIs could change SCC groupings.

## Common Errors and Solutions

| Error | Cause | Solution |
|-------|-------|----------|
| **C2230**: could not find module `winrt.X` | Missing import or the module IFC wasn't built | Add the import; verify the module builder or consumer produces it; check `CppWinRTModuleInclude` |
| **C7684**: ambiguous resolution to IFC | Same module built by multiple projects visible to the consumer | Add the namespace to `CppWinRTModuleExclude` |
| **C4348**: redefinition of default parameter | STL header included after `import std;` | Pre-include the STL header in the PCH (e.g., `#include <variant>`) |
| **C5028**: alignment specified in prior declaration | Same root cause as C4348 | Pre-include the STL header (e.g., `#include <latch>`) |
| **C4430 / C2039**: missing type / not a member | Type not visible because module not imported | Add the missing `import winrt.Namespace;` to ModulePreamble |
| **LNK2019**: unresolved external for `InitializeComponent` | XAML-generated code compiled without module imports | Ensure the `/FI` targets are present and use `Update="@(ClCompile)"` |
| **LNK2005**: symbol already defined | XAML-generated file compiled both directly and via a wrapper | Use the `/FI` injection approach instead of wrapper `.cpp` files |
| Redefinition errors when mixing `#include` and `import` | Same namespace included textually after being imported | Define `WINRT_IMPORT_MODULE` before the winrt header, or remove the `#include` |
| **"could not find module 'winrt.X'"** in cross-project consumer | Builder's `IntDir` not visible to consumer | Verify `ProjectReference` to the builder has `CppWinRTConsumeModule=true` |
| Linker errors for component constructors | Importing a component's internal module instead of building your own reference projection | Remove explicit `/reference` flags for component IFCs and ensure your project has `CppWinRTBuildModule=true` so it builds reference projection modules from the component's `.winmd` |

## Tips

- **Clean build after configuration changes.** Stale IFC files from previous builds cause confusing ambiguity errors. Clean the intermediate directory when changing module include/exclude filters.
- **Start from leaf projects.** Convert projects with no WinRT component dependencies first (e.g., utility libraries), then work up the dependency graph.
- **One project at a time.** Each conversion may surface new missing imports or exclude requirements. Building incrementally makes errors easier to diagnose.
- **Watch for transitive IFC propagation.** Static library IFCs become visible to all consumers in the reference chain. This is correct behavior but requires `CppWinRTModuleExclude` entries in consumers.
- **`CppWinRTModuleInclude` is usually needed.** Without it, projects with `CppWinRTModuleExclude` may not generate any `.ixx` files at all. Specify the namespace prefix for your component (e.g., `Microsoft.Terminal`).
- **DLL wrapper projects typically need no changes.** If you have a pattern of "static lib + thin DLL wrapper", the DLL wrapper usually just links the lib and doesn't need module conversion.

## Approaches Tried and Abandoned

For posterity, these patterns were attempted during the Terminal prototype but proved problematic. Avoid them.

### Wrapper `.module.cpp` files for XAML-generated code

The idea was to create wrapper `.cpp` files that would `#include` the XAML-generated files after setting up module imports, then remove the original generated items from `ClCompile` and replace them with the wrappers.

**Why it failed:** The XAML build system generates files across two compilation passes. `XamlTypeInfo.g.cpp` `#include`s `.xaml.g.hpp` files that don't exist until Pass2, but the wrapper needed to compile during the first `ClCompile` pass. `__has_include` guards to make wrappers compile empty initially and recompile later proved unreliable — `CompileXamlGeneratedFiles` is a separate compilation step, and the wrapper items weren't correctly routed through it.

**The `/FI` approach works** because it modifies the compiler flags on the *existing* generated items rather than replacing them, working with the XAML build system's two-pass compilation.

### `AllProjectBMIsArePublic=false` on static libraries

The idea was to prevent IFC propagation from static libraries by setting `AllProjectBMIsArePublic=false`, hiding the static lib's IFCs from consumers.

**Why we moved away:** This fights against the intended VC++ build model. If a project consumes a static library, it should also consume that library's IFC files. Using different IFCs for the same types risks ODR violations. The `CppWinRTModuleExclude` approach is better — the consumer avoids building duplicate IFCs while still consuming the producer's IFCs.

### Moving wrapper items into MSBuild targets

The idea was to add wrapper `.cpp` `ClCompile` items inside a `<Target>` (dynamically) instead of a static `<ItemGroup>`, so they'd only enter `ClCompile` after generated files existed.

**Why it failed:** Items added inside targets don't get the same metadata processing (module dependency scanning, IFC reference resolution) as items in static `ItemGroup`s. The compiler couldn't find any modules.
