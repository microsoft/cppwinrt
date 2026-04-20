<!-- PR description for https://github.com/microsoft/cppwinrt/pull/1556 -->
<!-- Full replacement for the PR body -->

## C++20 Module Support (`import winrt;`)

This PR adds C++20 named module support to C++/WinRT, allowing consumers to
write `import winrt;` instead of using `#include` directives and precompiled headers. In multi-project solutions, a shared module builder project compiles the platform projection once; consumer projects reference the pre-built module for significantly faster builds.

### Quick overview

Two new MSBuild properties control module support:

- `CppWinRTModuleBuild` — Generates the platform SDK projection and compiles `winrt.ixx`. Set on a dedicated static library project (the "module builder"), or on a standalone project for single-project scenarios.
- `CppWinRTModuleConsume` — Consumes a pre-built module from a `ProjectReference` to a builder. The NuGet targets automatically resolve the IFC, OBJ, and include paths.

```cpp
import winrt;
using namespace winrt::Windows::Foundation;

// Component types from a project reference (not in the module)
#include <winrt/MyComponent.h>
```

### Design choices

**Macro-driven, not flag-driven.** Module-aware behavior in generated component files (`.g.h`, `.g.cpp`, `module.g.cpp`) is controlled by `#ifdef WINRT_MODULE` guards emitted by the code generator. The NuGet targets define `WINRT_MODULE` as a preprocessor definition — no special cppwinrt.exe command-line flag is needed. This means the same generated files work in both module and header mode without regeneration.

**Boundary-based module guard.** Each namespace header contains a "module guard" — a preprocessor block that checks whether the header's own namespace is in the module (via `WINRT_MODULE_NS_<self>`). If it IS in the module, the TU is doing a traditional `#include` (not via import), so the header falls through to `#include "base.h"` and all cross-dep guards are bypassed. If it is NOT in the module (e.g., a component header), the TU must have already done `import winrt;`, so the header uses `base_macros.h` only and cross-dep guards skip module namespaces. This means the same headers work in both module and traditional header mode without regeneration.

**Per-namespace include guards with compound conditions.** After `import winrt;`, consumers textually `#include` reference/component projection headers. Platform namespace deps (already in the module) must be skipped to avoid MSVC redeclaration errors, but component cross-namespace deps must NOT be skipped. Cross-namespace `#include` deps use compound guards — `#if !defined(WINRT_MODULE_NS_<dep>) || defined(WINRT_MODULE_NS_<self>)` — so deps in the module are skipped only when the including header is NOT itself in the module.

**`extern "C++"` wrapping for include/import coexistence.** The winrt.ixx module purview wraps all `#include` directives in `extern "C++" { ... }`, and `namespace std` blocks use `WINRT_IMPL_EXTERN_CXX` (which expands to `extern "C++"` in the ixx, empty in header mode). This gives declarations external C++ linkage so MSVC can merge textually-included declarations with module-exported declarations. This is critical for real-world codebases where 3rd-party headers (e.g., WIL's cppwinrt.h) `#include` winrt headers before user code does `import winrt;`.

**Scoped `import std;`.** `import std;` is NOT placed inside `base.h` because platform headers (`<intrin.h>`) transitively include STL headers, making a subsequent `import std;` unsafe. Instead, `import std;` is emitted at the TU level — in `winrt.ixx` (module purview), `module.g.cpp`, and `.g.h` files — controlled by the `WINRT_IMPORT_STD` macro.

**Builder/consumer split.** `CppWinRTModuleBuild` and `CppWinRTModuleConsume` are separate properties because in multi-project solutions, only one project should compile the expensive `winrt.ixx`. The `CppWinRTGetModuleOutputs` / `CppWinRTResolveModuleReferences` targets handle cross-project IFC/OBJ resolution via MSBuild's `ProjectReference` infrastructure.

**`import std;` is orthogonal.** `import winrt;` works with C++20. `import std;` is optional and independently controlled by the existing `BuildStlModules` property. On v143 (VS 2022), `import std;` requires `/std:c++latest`; on v145 (VS 2026), `/std:c++20` suffices.

**Exported `winrt::impl` namespace.** The `winrt::impl` namespace is exported from the module alongside `winrt`. This is necessary because component projection headers specialize `impl` templates like `category<>`, `abi<>`, `guid_v<>`, and `name_v<>` for their types.

### What's in this PR

Code generator (`cppwinrt/`):

- Generated component `.g.h` files use `#ifdef WINRT_MODULE` to `import winrt;` (and optionally `import std;`) before including component namespace headers
- Generated `.g.cpp` and `module.g.cpp` use `#ifdef WINRT_MODULE` / `#ifndef WINRT_MODULE` for import vs include paths
- `winrt.ixx` wraps the module purview in `extern "C++" { ... }`, defines `WINRT_IMPL_EXTERN_CXX` as `extern "C++"`, and conditionally does `import std;`
- `winrt_module_namespaces.h` generated alongside `winrt.ixx` with per-namespace macros
- `write_module_guard()` — boundary-based: checks `WINRT_MODULE_NS_<self>` to decide between `base_macros.h` (import path) and `base.h` (traditional path)
- `write_root_include_guarded()` — compound guard: `!defined(NS_dep) || defined(NS_self)` for cross-namespace deps
- `WINRT_IMPL_EXTERN_CXX` applied to all `namespace std` blocks for module linkage compatibility
- Generated headers include inline comments explaining the module guard and cross-namespace guards
- `import std;` removed from `base.h` — only emitted in ixx/module.g.cpp/.g.h

NuGet targets (`nuget/`):

- `CppWinRTBuildModule` target — adds `winrt.ixx` to compilation, defines `WINRT_MODULE` and `WINRT_IMPORT_STD`
- `CppWinRTGetModuleOutputs` target — exports IFC/OBJ/GeneratedFilesDir for consumers
- `CppWinRTResolveModuleReferences` target — resolves module from `ProjectReference` items
- `CppWinRTModuleBuild` / `CppWinRTModuleConsume` properties in `CppWinrtRules.Project.xml`

NuGet test projects (`test/nuget/`):

- `TestModuleBuilder` — static lib, builds the module
- `TestModuleConsumerApp` — console app consuming the module + a component reference (multi-namespace, cross-namespace struct fields, platform type returns)
- `TestModuleComponent` — DLL with IDL, two namespaces, cross-namespace value type field, platform `Uri` return type
- `TestModuleSingleProject` — single project that builds and consumes its own module
- All module test projects include `include_test.cpp` — regression tests for include-with-WINRT_MODULE

Repo test projects (`test/`):

- `test_cpp20_module` / `test_cpp20_module_winrt` — C++20 module consumer/builder (no `import std;`)
- `test_cpp23_module` / `test_cpp23_module_winrt` — C++23 module consumer/builder (with `import std;`)
- `test_component_module` — component DLL with modules
- `include_before_import_test.cpp` — verifies `#include` before `import winrt;` works (extern "C++" coexistence)
- `test_cpp20_module` added to CI test matrix (all architectures, MSVC only)
- NuGet test consumer apps run as CI validation steps (fail on missing exe)

Documentation (`docs/`):

- `modules.md` — user-facing guide (Quick Start, properties, macros, architecture)
- `modules-internals.md` — maintainer guide (codegen pipeline, macro flow, extern "C++", boundary-based guards)
- `nuget/readme.md` — C++20 Modules section
- `.github/instructions/modules.instructions.md` — AI assistant instructions

### Key macros

| Macro | Scope | Purpose |
|-------|-------|---------|
| `WINRT_MODULE` | Project-wide | Controls `.g.h`/`.g.cpp`/`module.g.cpp` behavior; activates boundary-based module guard in namespace headers |
| `WINRT_BUILD_MODULE` | winrt.ixx only | Set in ixx global module fragment; uses `base_macros.h` only |
| `WINRT_MODULE_NS_*` | winrt_module_namespaces.h | Per-namespace macros. Module guard and cross-dep guards use compound conditions |
| `WINRT_IMPL_EXTERN_CXX` | winrt.ixx purview | `extern "C++"` in module, empty in header mode. Applied to `namespace std` blocks |
| `WINRT_IMPORT_STD` | Project-wide (optional) | Enables `import std;` in winrt.ixx, `.g.h`, and `module.g.cpp`. Does NOT affect base.h |

### Current limitations

- The winrt module contains only platform SDK namespaces. NuGet WinMD references can be folded in via `CppWinRTSDKReferences` property on the builder project.
- `import std;` requires `/std:c++latest` on v143 toolset.
- `import std;` is NOT used inside `base.h` — platform headers transitively include STL headers first. Instead, `import std;` is at the TU level.
- Including a namespace header that IS in the module works — the module guard falls through to traditional `#include "base.h"` behavior.
- Including winrt headers BEFORE `import winrt;` works thanks to `extern "C++"` wrapping.

### Future directions

- Investigate whether large WinMD references (e.g., WinUI) could be folded into the module via a dedicated `CppWinRTModuleInput` item group.
- Evaluate build time impact across real-world solutions.

### Documentation

See [docs/modules.md](docs/modules.md) for the full user guide and [docs/modules-internals.md](docs/modules-internals.md) for code generation internals.

### Acknowledgements

Credit to @sylveon and @YexuanXiao for the trailblazing they've done in their forks, as well as their early feedback while this was in draft. Also @zadjii-msft and @Scottj1s for their earlier attempts and showing the potential build improvements.
