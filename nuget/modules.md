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

## Module Names

| Module | Contents |
|-|-|
| `winrt_base` | Core C++/WinRT types (`hstring`, `com_ptr`, `IUnknown`, etc.) — re-exported by all namespace modules |
| `winrt_numerics` | `Windows::Foundation::Numerics` types — re-exported by `winrt_base` |
| `winrt.<Namespace>` | Per-namespace projection (e.g., `winrt.Windows.Foundation`) |

## Requirements

- MSVC v145 toolset (Visual Studio 2026) or later recommended
- C++20 or later (`/std:c++20` or `/std:c++latest`)
- `BuildStlModules=true` for `import std;` support

## Limitations

- Component modules (built with `-opt`) contain optimizations only valid inside the originating DLL. They should not be shared across projects.
- Module IFCs are not compatible across toolset versions. All projects must use the same toolset.
- Cyclic namespace dependencies (e.g., `Windows.Foundation` ↔ `Windows.Foundation.Collections`) are handled automatically via SCC consolidation, but the resulting module name is chosen alphabetically. Adding new APIs could change SCC groupings.

## Troubleshooting

**"could not find module 'winrt.X'"** — Ensure the `.ixx` was generated (check `$(GeneratedFilesDir)winrt\`) and that `CppWinRTBuildModule=true` is set. For cross-project references, verify the consuming project's `ProjectReference` to the builder has `CppWinRTConsumeModule=true`, and that the builder's `IntDir` is accessible via `/ifcSearchDir`.

**Linker errors for component constructors** — You may be importing a component's internal module instead of building your own reference projection. Remove explicit `/reference` flags for component IFCs and ensure your project has `CppWinRTBuildModule=true` so it builds reference projection modules from the component's `.winmd`.

**Redefinition errors** — Don't mix `#include` and `import` for the same namespace in the same translation unit. Use `import` consistently.
