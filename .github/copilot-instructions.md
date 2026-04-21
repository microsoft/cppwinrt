# C++/WinRT Repository - Copilot Instructions

## Project Overview

C++/WinRT is a C++ language projection for Windows Runtime APIs. The `cppwinrt.exe`
code generator reads WinRT metadata (.winmd) and produces C++ headers and a C++20
module interface unit (winrt.ixx).

## Repository Structure

- `cppwinrt/` — The code generator source (cppwinrt.exe)
- `strings/` — Handwritten C++ fragments embedded into generated output by the prebuild step
- `prebuild/` — Embeds strings/*.h content into strings.h/strings.cpp as string literals
- `nuget/` — NuGet package files (props, targets, rules) for customer integration
- `natvis/` — Debugger visualizer (directly includes strings/*.h, not generated output)
- `test/` — Test projects
- `_build/` — Build output
- `docs/` — Documentation including modules.md and modules-internals.md

## Build System

- Uses MSBuild with Visual Studio. Build from a VS Developer PowerShell.
- `Directory.Build.Props` sets shared properties (toolset, output paths, language standard).
- `$(OutDir)` = `$(SolutionDir)_build\$(Platform)\$(Configuration)\`
- `$(IntDir)` = `$(SolutionDir)_build\$(Platform)\$(Configuration)\temp\$(ProjectName)\`
- The prebuild step must run before cppwinrt can compile (it generates strings.h/strings.cpp).

### Key Build Commands

```powershell
# Build just the code generator
msbuild cppwinrt.sln /t:cppwinrt /p:Configuration=Debug /p:Platform=x64 /v:minimal

# Build a test project (pass SolutionDir for path resolution)
msbuild test\test_cpp20\test_cpp20.vcxproj /p:Configuration=Debug /p:Platform=x64 /p:SolutionDir=d:\Repos\GitHub\cppwinrt\

# Generate SDK projection
.\_build\x64\Debug\cppwinrt.exe -in sdk -out .\_build\x64\Debug\
```

## Code Generator Architecture

### String Fragment System

The `strings/base_*.h` files are NOT headers that get #included at build time.
They are embedded as string literals by the prebuild step into `strings.cpp`.
The code generator writes them into generated output files (base.h, winrt.ixx, etc.).

When modifying strings/*.h files:
1. Rebuild `prebuild` and then `cppwinrt` to pick up changes
2. Regenerate the projection (`cppwinrt.exe -in sdk -out ...`)
3. Then rebuild test projects

### Text Writer System

- `text_writer.h` — Base writer with `%` placeholder substitution
- `type_writers.h` — The `writer` class with `write_root_include`, `write_depends`, etc.
- `code_writers.h` — High-level writers: `write_module_guard`, `write_version_assert`, `write_open_file_guard`, etc.
- `file_writers.h` — File-level orchestration: `write_base_h`, `write_namespace_h`, etc.
- `component_writers.h` — Component stub generation: `write_module_g_cpp`, `write_component_g_h`, etc.

### Generated File Layers (per namespace)

- `.0.h` — Forward declarations, enums, ABI, consume structs, template specializations
- `.1.h` — Interface type definitions
- `.2.h` — Class/struct/delegate type definitions
- Main `.h` — Consume definitions, produce implementations, std::hash specializations

## C++20 Modules

See `docs/modules.md` for user-facing documentation and `docs/modules-internals.md`
for maintainer details.

### Key Design Decisions

- `winrt::impl` is exported from the module so component headers can specialize
  templates (`category`, `abi`, `guid_v`, etc.) after `import winrt;`
- `base_includes.h` has platform headers only; `base_std_includes.h` has std library
  headers. The ixx global module fragment uses both as raw #includes. base.h uses
  the std includes conditionally (import std vs #include).
- `base_module_macros.h` provides macros that don't cross module boundaries
  (WINRT_EXPORT, WINRT_IMPL_EMPTY_BASES, etc.). It's the single source of truth;
  `base_macros.h` has `#ifndef` fallbacks for direct consumers like natvis.
- Generated component files (`.g.h`, `module.g.cpp`) use `import winrt;` when
  `-module` flag is passed. `import std;` is conditional on `WINRT_IMPORT_STD`.
- The natvis project includes strings/*.h directly — any new strings/ files must
  be added to natvis/pch.h too.

### Common Pitfalls

- `<intrin.h>` transitively includes STL headers on newer MSVC. Can't use
  `import std;` in the ixx purview because it conflicts with these transitive includes.
- `#pragma once` prevents re-inclusion but macros from included headers DO persist
  from the global module fragment into the purview.
- PCH + conditional compilation: `#include "pch.h"` must be the FIRST non-comment
  line in a file. It cannot be inside `#ifdef` blocks.
- `PlatformToolset` in `Directory.Build.Props` overrides per-project settings in
  the Globals PropertyGroup. To override, set it in Configuration PropertyGroups.
- `WINRT_EXPORT` must be defined before any code that uses it. When strings/ files
  are included directly (natvis), `base_module_macros.h` must come before `base_macros.h`.
- `extern "C++"` is needed on exported `__declspec(selectany)` variables
  (`winrt_to_hresult_handler` etc.) to prevent module linkage.
