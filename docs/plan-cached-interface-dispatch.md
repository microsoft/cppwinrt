# Plan: Thunk-Based Interface Caching for Runtimeclasses

**Status: Implementation complete.** All phases done, all tests pass. Gated behind
`-flatten_classes` CLI flag (MSBuild: `$(CppWinRTFlattenClasses)`).

## Rules

- **NEVER modify existing test source files.** Fixes go in `strings/` or `cppwinrt/`.
- **NEVER poll** waiting for builds. Use async terminal, wait for notification.
- **Use sub-agents for error triage.** Don't read 100K+ line build logs manually.
- **cppwinrt.exe output** must go under `build/` — never into source trees.
- **the compiler and linker are right**. Before you blame them for a runtime or compiler bug, you MUST prove they work.
- **debug to collect dump.** When there's a crash, debuggers are in c:\debuggers\cdb.exe for you to use. Dumps should go under build/ and not into the source tree.
- **disassemble with the debugger** Dumpbin does not work; use `c:\debuggers\cdb.exe -logo nul -z thefile.exe -c "uf binaryname!symbolname ; q"` - the space around the `;` is important. You can use `-c "x binaryname!*symbol*pattern ; q"` to get precise addresses of functions, then use that with `uf` instead if needed. Always use `-logo nul` to suppress the debugger banner.
- **reduce noisy output.** Use `-logo nul` with cdb, `/v:m` with msbuild, `-Verbosity quiet` with nuget. Pipe verbose output to log files and read only the relevant parts. Consider writing helper scripts under `scripts/` to wrap common operations with clean output.
- **commit at reasonable chunks.** Don't create lots of little commits, but don't create huge commits either. Commit when something is observed to work or when you want to experiment and use diffs.


## Goal

Eliminate per-call `QueryInterface`/`Release` overhead when calling non-default interface
methods on projected runtimeclasses. Today every call to e.g. `PropertySet::Insert()` does a
QI for `IMap`, a vtable call, and a Release. The new design uses ASM thunk stubs that
masquerade as COM objects and self-resolve on first vtable call, so the QI cost is paid
once per interface per object, with zero per-call overhead afterward.

Keep detailed notes on your progress in this file, in the section "Detailed Notes".

## Obstacle 1 - Not enough thunk-storage slots

Large types like `Windows.UI.Composition.ScalarKeyFrameAnimation` derive from many bases,
each of which may have been serviced multiple times, leading to a VERY large set of interfaces
to cache. The current implementation has a maximum count of 8 slots, due to reusing the lower
3 bits of the "parent pointer" address to know which index to use.

### Option 1 - Exclude some types from caches

Some interfaces are uncommonly used and thus don't need cache entries. Things like:

* `IStringable`
* `IClosable`

Those can be excluded from cache lists when producing them.

### Option 2 - Increase cache slot count

Currently, `interface_thunk::resolve` uses the `payload` field in the cached thunk instance
to contain both a pointer to its parent object and its index, in the lower 3 bits.

Instead, `::resolve` can use `this` to compute the offset in the parent thunk, using pointer
math. All cached thunks are structured in memory like:

* thunked_runtimeclass_header
    * default cache element content (pointer)
    * descriptor_table (pointer)
* thunked_runtimeclass_base (empty)
* thunked_runtimeclass
    * pairs (array of...)
        * cache_and_thunk_full [or] cache_and_thunk_tagged

... so if you know which thunk (the thunk's 'this' ptr) is being used, we could compute
the index into thunked_runtimeclass_header::pairs using a little math; the 'this' should
be within that range.  And since all the sizes and layouts are similar, there's no need
to store another pointer in the header!

## Obstacle 2 - Automatic downcasting of types

When calling a method like `XamlLight.CompositionLight(Composition.CompositionLight const& o)`
with a `Composition.SpotLight`, there is a "normal" C++ conversion from one to the other, but
is implemented as a full conversion from the cached SpotLight object to a cached CompositionLight,
only to be discarded immediately after the call.

### Option 1 - Define "param types" for references.

Define a `winrt::param::ref<>` template, and have projection methods be generated like:
`XamlLight.CompositionLight(winrt::param::ref<Composition::CompositionLight> light)`. That
`winrt::param::ref<Q>` knows that it _only_ needs to fetch the `SpotLight` for the default
interface of `ICompositionLight` for use in the call down to the ABI. The callsites in headers
still look like they're accepting CompositionLight, and the conversion is hidden.

## Detailed Notes

### Pointer-Math Slot Index (Completed)

Replaced the 3-bit index encoding in the thunk payload with pointer-math computation.
All types now use a single pair layout (`cache_and_thunk_tagged`, 24 bytes per slot)
with no practical limit on interface count. The old "full mode" (32 bytes/slot for
types with >8 interfaces) was eliminated entirely.

### Thunk IUnknown Stubs (Completed)

The ASM thunk vtable slots for QI/AddRef/Release now resolve and forward to the
real interface (via the same `FlatResolveAndDispatch` path as method slots), instead
of returning no-op values. This makes unresolved thunks behave as proper COM objects,
which is required for `param_ref<T>` to safely pass thunk pointers as ABI parameters.

### `param_ref<T>` for IN Parameters (Completed)

Consume methods for IN runtimeclass parameters now accept `impl::param_ref<T>` instead
of `T const&`. This avoids constructing full flat runtimeclass temporaries when passing
derived types to methods expecting base types. Three conversion paths, ordered by cost:

1. **Flat RTC → flat RTC** (zero cost): Reads the target interface directly from the
   source's cache slot. No QI, no temporary construction.
2. **Non-composable implementation type** (zero cost): `static_cast` through the
   `produce<>` inheritance chain to get the ABI interface pointer directly.
3. **Composable implementation type** (AddRef/Release): Converts to the projected type,
   extracts the ABI pointer, and AddRefs. Only this path sets `owned = true` in
   `param_ref`, triggering Release in the destructor.

### Binary Size Results

Two real-world binaries were tested, with all builds using x64 Release, LTCG, ICF,
and `/Ox /Os` optimization.

**Lottie animation library** (LottieSample.dll — generated C++/WinRT code that calls
Composition APIs intensively, creates objects transiently, rarely stores them as fields):

| Build | Size | Delta vs no-flatten |
|---|---|---|
| No flatten | 251.5 KB | — |
| Flatten | 239.5 KB | **-12 KB (-4.77%)** |

Flattening *reduced* binary size because the Lottie code creates many transient
Composition objects and calls methods on them without storing them. The `param_ref`
optimization eliminates temporary flat runtimeclass construction on cross-type method
calls, and the cache slot reads replace per-call QI/Release sequences.

**Contoso.dll** (large WinRT component with XAML UI — hundreds of XAML controls stored
as member fields, extensive use of composable types and data binding):

| Build | Size | Delta vs no-flatten |
|---|---|---|
| Old NuGet baseline | 9,427.5 KB | — |
| No flatten (new NuGet) | 9,410.0 KB | -17.5 KB |
| Flatten | 10,292.5 KB | **+882.5 KB (+9.38%)** vs no-flatten |

Flattening *increased* binary size substantially because:
- Each XAML control stored as a member field carries its full array of cache slots
  (e.g., a `Button` has ~20 secondary interfaces × 24 bytes = ~480 bytes per instance)
- Constructor code to initialize cache slot arrays for every member is significant
- Composable types (UIElement hierarchy) have deep interface chains, amplifying
  the per-instance and per-constructor overhead

### Implications

The flat runtimeclass optimization is most beneficial for code that:
- Creates objects transiently and calls methods on them (API-heavy code)
- Uses few stored runtimeclass member fields
- Calls methods on non-default interfaces repeatedly (e.g., collection operations)

It is least beneficial (and can increase size) for code that:
- Stores many runtimeclass instances as member fields (XAML UI code)
- Uses composable types extensively (UIElement, DependencyObject hierarchies)
- Has many constructors that must initialize large flat runtimeclass members
