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

Modules provide faster builds through pre-compiled module interfaces (IFCs) and better isolation of macro and declaration scopes.

## Quick Start — Single Project

For a project that builds and consumes its own modules:

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

## Quick Start — Multi-Project (Recommended)

For larger solutions, compile platform modules once in a dedicated "builder" static library, and share the pre-built IFCs with other projects.

### Module Builder (static library)

```xml
<PropertyGroup>
  <ConfigurationType>StaticLibrary</ConfigurationType>
  <CppWinRTBuildModule>true</CppWinRTBuildModule>
  <CppWinRTModuleInclude>Windows.Foundation</CppWinRTModuleInclude>
</PropertyGroup>
```

### Consumer (exe or dll)

```xml
<PropertyGroup>
  <CppWinRTBuildModule>true</CppWinRTBuildModule>
</PropertyGroup>
<ItemGroup>
  <ProjectReference Include="..\ModuleBuilder\ModuleBuilder.vcxproj">
    <CppWinRTConsumeModule>true</CppWinRTConsumeModule>
  </ProjectReference>
</ItemGroup>
```

The `CppWinRTConsumeModule` metadata on the ProjectReference tells the build system to:
- Use the builder's pre-built platform IFCs instead of compiling platform `.ixx` files again
- Skip generating platform `.ixx` files in the consumer's own projection

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

### Consuming Components from Other Projects

If project A references a component DLL from project B, project A builds its own reference projection modules from B's `.winmd`:

```cpp
// These modules are built locally from the component's .winmd
import winrt.MyComponent;

auto obj = winrt::MyComponent::MyClass();
```

## MSBuild Properties

| Property | Default | Description |
|-|-|-|
| `CppWinRTBuildModule` | false | Generate `.ixx` module interface units from projections |
| `CppWinRTModuleInclude` | (all) | Semicolon-delimited namespace prefixes to include in module generation |
| `CppWinRTModuleExclude` | (none) | Semicolon-delimited namespace prefixes to exclude from module generation |

| ProjectReference Metadata | Default | Description |
|-|-|-|
| `CppWinRTConsumeModule` | false | Consume pre-built platform module IFCs from this project reference |

## Module Filtering and Transitive Dependencies

`CppWinRTModuleInclude` and `CppWinRTModuleExclude` control which namespace `.ixx` files are **generated**, but they do not suppress `import` statements for dependencies. If namespace A is included in the filter and depends on namespace B, the generated `winrt.A.ixx` will contain `import winrt.B;` even if B is excluded from the filter. This is by design — the module for B must exist *somewhere* (either from the same project or from a referenced project).

This has important implications:

- **Transitive closure must be satisfied.** If you filter to a subset of namespaces, any dependencies that fall outside the filter must be available from another source (e.g., a module builder project referenced via `CppWinRTConsumeModule`, or MSBuild's automatic `ReferencedModuleBMIs` from a static library reference). Otherwise, compilation will fail with "could not find module" errors.

- **Use `CppWinRTModuleExclude` to avoid generating modules that have unsatisfied dependencies.** For example, `Windows.Foundation.Diagnostics` depends on `Windows.Storage`. If you filter to `CppWinRTModuleInclude=Windows.Foundation`, the Diagnostics `.ixx` will be generated (it matches the prefix) but will fail to compile because `winrt.Windows.Storage` doesn't exist. Add `CppWinRTModuleExclude=Windows.Foundation.Diagnostics` to prevent this.

- **In multi-project scenarios with static libraries, use `CppWinRTModuleExclude` to avoid duplicate modules.** MSBuild automatically propagates all module IFCs from static library references to consuming projects (via the `AllProjectBMIsArePublic` property, which defaults to `true` for static libraries). If project A is a static library that builds modules for namespace X, and project B references A, then B already has A's IFCs available. If B also has `CppWinRTBuildModule=true`, its reference projection will generate a second `winrt.X.ixx`, causing an ambiguous module error. Set `CppWinRTModuleExclude=X` on project B to prevent this. B's own `.ixx` files will still emit `import winrt.X;`, which resolves to A's IFC via MSBuild's automatic propagation. Note: this issue does not affect DLL references — MSBuild does not propagate module IFCs from DLLs by default.

## Module Names

| Module | Contents |
|-|-|
| `winrt_base` | Core C++/WinRT types (`hstring`, `com_ptr`, `IUnknown`, etc.) — re-exported by all namespace modules |
| `winrt_numerics` | `Windows::Foundation::Numerics` types — re-exported by `winrt_base` |
| `winrt.<Namespace>` | Per-namespace projection (e.g., `winrt.Windows.Foundation`) |

## Requirements

- MSVC v145 toolset (Visual Studio 2026) or later recommended
- C++20 or later (`/std:c++20` or newer)
- `BuildStlModules=true` for `import std;` support

## Limitations

- Module IFCs are not compatible across toolset versions. All projects must use the same toolset.
- Cyclic namespace dependencies (e.g., `Windows.Foundation` ↔ `Windows.Foundation.Collections`) are handled automatically via SCC consolidation, but the resulting module name is chosen alphabetically. Adding new APIs could change SCC groupings.

## Caution: Module Reuse Across Projects

Pre-built IFCs (via `CppWinRTConsumeModule`) should only be shared when the builder and consumer use the same compilation context. In particular:

- **Component modules are project-private.** A component projection built with `CppWinRTOptimized=true` generates modules that bypass activation factories for in-component type instantiation (`-opt`). If a consuming project accidentally imports these modules instead of building its own reference projection, the consumer will attempt direct instantiation across DLL boundaries, resulting in linker errors or incorrect behavior. Each project should build its own modules from the component's `.winmd` — do not tag component ProjectReferences with `CppWinRTConsumeModule`.

- **`CppWinRTConsumeModule` is intended for platform module builders only.** The builder project is a dedicated static library whose sole purpose is compiling platform SDK modules. Its compilation flags (no `-opt`, no `-comp`) produce modules safe for any consumer. Only tag this builder's ProjectReference with `CppWinRTConsumeModule=true`.

- **Module filter scope matters.** `CppWinRTModuleInclude` / `CppWinRTModuleExclude` applies to all three projections (platform, reference, component). If you set `CppWinRTModuleInclude=MyComponent`, only `MyComponent` namespaces will get `.ixx` files — platform and reference namespace modules will not be generated. Make sure your filter includes all namespaces you intend to import as modules, or use `CppWinRTConsumeModule` to get platform modules from a builder that was configured with the appropriate filter.

- **Compilation settings must be compatible between builder and consumer.** Module IFCs encode assumptions about the compilation environment. While the compiler may not always diagnose mismatches, the following differences between the module builder and consumer may cause subtle or hard-to-diagnose issues:
  - **Debug vs Release** — Mixing Debug and Release configurations can produce mismatched code generation, iterator debugging levels, and runtime library selections.
  - **Preprocessor definitions** — Definitions that affect type layout, conditional compilation, or feature flags should match between builder and consumer.
  - **Struct alignment / packing** — Different `/Zp` settings between projects can change struct layout, causing silent ABI mismatches.
  - **Language standard** — While C++20 and later are generally compatible, mixing `/std:c++20` and `/std:c++23` and/or `/std:c++latest` if there are language features that affect type definitions.

  As a general rule, the module builder project try to use the same configuration, preprocessor definitions, and compiler options as its consumers.

## Troubleshooting

**"could not find module 'winrt.X'"** — Ensure the `.ixx` was generated (check `$(GeneratedFilesDir)winrt\`) and that `CppWinRTBuildModule=true` is set. For cross-project references, verify the consuming project's `ProjectReference` to the builder has `CppWinRTConsumeModule=true`, and that the builder's `IntDir` is accessible via `/ifcSearchDir`.

**Linker errors for component constructors** — You may be importing a component's internal module instead of building your own reference projection. Remove explicit `/reference` flags for component IFCs and ensure your project has `CppWinRTBuildModule=true` so it builds reference projection modules from the component's `.winmd`.

**Redefinition errors** — Don't mix `#include` and `import` for the same namespace in the same translation unit. Use `import` consistently.
