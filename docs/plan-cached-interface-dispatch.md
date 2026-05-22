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

### Obstacle 2 Implementation: Pointer-Math Slot Index (Completed)

**Problem:** The tagged payload encoded `header_ptr | (index << 1) | 1` which limited
the index to 3 bits (0-7). Types with >8 secondary interfaces fell back to "full mode"
(`cache_and_thunk_full`, 32 bytes per slot instead of 24), wasting 8 bytes per slot and
adding a branch in `resolve()`.

**Solution chosen:** Option 2 — compute index from pointer math. Since all `cache_and_thunk_tagged`
elements are in a contiguous array at a known offset from the header, `resolve()` computes:
```
index = (this - header - sizeof(header) - thunk_offset_in_pair) / pair_stride
```
This removes the index from the payload entirely. Payload is now just `header_ptr | 1`.

**Changes made:**
- `strings/base_thunked_runtimeclass.h`:
  - Added standalone constants `thunk_pair_thunk_offset` (8) and `thunk_pair_stride` (24)
  - `interface_thunk::descriptor()` — uses pointer math instead of bit-extracted index
  - `interface_thunk::resolve()` — simplified, no tagged/full branching
  - `init_pair_tagged()` — no longer encodes index in payload
  - Removed `cache_and_thunk_full` struct and `init_pair_full()` entirely
  - `cache_and_thunk_t<bool>` now always resolves to `cache_and_thunk_tagged`
  - `attach_impl()` — always uses tagged init path
  - `cached_thunk_tagged_slot_count` raised to 1024 (no practical limit)
- `test/test_cachedrtc/thunked_dispatch.cpp`:
  - Updated static_assert: Package now uses tagged mode (all types do)

**Binary size impact (Lottie sample, x64 Release, LTCG+ICF+/Ox):**
- Before: no-flatten 251.5 KB, flatten 259.5 KB (+8 KB, 3.18%)
- After:  no-flatten 251.5 KB, flatten 255.0 KB (+3.5 KB, 1.39%)
- Improvement: -4.5 KB per DLL from eliminating full-mode overhead

### Obstacle 2 Implementation: Lightweight Base-Class Conversions

**Problem:** When passing a derived thunked type (e.g., `SpotLight`) to a method
expecting a base type (e.g., `CompositionLight const&`), C++ invokes
`base_one<SpotLight, CompositionLight>::operator CompositionLight()` which calls
`try_as<CompositionLight>()`. This constructs a full temporary `CompositionLight`
with all cache slots initialized (QI + attach_impl for every secondary interface),
only to immediately extract `*(void**)(&obj)` (the default ABI pointer) and destroy
the temporary. The cache slot initialization + teardown is pure waste.

**Solution:** Specialize `base_one` for thunked-to-thunked conversions. When both D
and I have `thunked_interfaces`, the conversion skips cache slot initialization:
1. QI from source's default ABI to target's default interface
2. Construct `I{ nullptr }` (zero-initialized pairs, no attach_impl)
3. Write the QI result directly into `result.put_default_abi()`
4. Return — destructor safely skips null cache entries

**Implementation details:**
- `base_one::operator I()` declaration moved to `strings/base_meta.h` (forward-declared only)
- Definition deferred to `strings/base_thunked_runtimeclass.h` where `unknown_abi` and
  `guid_of` are available
- Uses `if constexpr (has_thunked_cache_v<D> && has_thunked_cache_v<I>)` to select path
- Non-thunked types fall through to the original `try_as<I>()` path unchanged
