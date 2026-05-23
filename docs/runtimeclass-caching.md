# Runtimeclass Interface Caching

Runtimeclass Interface Caching reduces the runtime cost of calling methods of C++/WinRT projected objects that are
members on a secondary non-default interface, without updating the component metadata or implementation.

## Overview

This is an opt-in projection optimization for projected WinRT runtimeclasses that expose secondary interfaces. Instead
of resolving a secondary interface with `QueryInterface` on every call, the projection lazily resolves that interface
once and caches the resulting pointer for subsequent calls.

The target scenario is a client consuming stable platform runtimeclasses such as `PropertySet`, `StringMap`, `Uri`,
`XmlDocument`, and `Package`, where repeated calls through secondary interfaces are common and repeated `QI`/`Release`
traffic is pure overhead.

This does not change WinRT metadata, component implementation, or the projected source-level API. It does change the
generated C++/WinRT runtimeclass representation and the dispatch path used for eligible secondary-interface calls.

## Results

Testing against two real-world binaries (x64 Release, LTCG, ICF, `/Ox /Os`) revealed
a fundamental tradeoff that makes this optimization **not viable in its current form**
for general-purpose adoption.

A Lottie animation library (generated Composition API code, transient object usage)
showed a **4.77% size reduction** with flattening enabled — the cached dispatch
eliminates per-call QI/Release overhead and `param_ref<T>` avoids temporary construction
on cross-type method calls.

However, a large XAML-based WinRT component (Contoso.dll, ~9.4 MB) showed a **9.38%
size increase** (+882 KB). The root cause: every runtimeclass stored as a member field
carries a full array of cache slots. A `Button` with ~20 secondary interfaces costs
~480 bytes of storage per instance, plus constructor code to initialize each slot.
XAML applications store many controls as fields, and the cumulative cost of the
enlarged types and their initialization dominates any savings from cached dispatch.

**This experiment is not viable until a solution for the large per-instance storage
cost is resolved.** Potential directions include:

- **Indirected cache storage**: Store cache slots in a separate heap allocation
  (e.g., `std::shared_ptr<cache_block>`) so the projected type remains pointer-sized.
  First access to any secondary interface allocates the cache block lazily.
- **Selective flattening**: Only flatten types that are commonly used transiently
  (e.g., collections, Composition objects) rather than all runtimeclasses.
- **Per-type opt-in**: Allow developers to specify which types to flatten via a
  configuration file passed to cppwinrt, rather than a global switch.

## Why This Exists

In the existing projection model, calling a runtimeclass member that lives on a secondary interface pays the full COM
interface-resolution cost every time:

1. `QueryInterface` for the secondary interface
2. call through the resolved vtable
3. `Release` the temporary interface pointer

For many platform runtimeclasses, that resolution is deterministic for the lifetime of the object. Repeating it on every
call adds refcount traffic, COM apartment checks, and call overhead without adding useful semantics.

Runtimeclass Interface Caching turns that into a first-call penalty and a subsequent-call fast path:

- First secondary-interface call: `QI` once, atomically install the result in a cache slot.
- Subsequent calls: direct vtable dispatch through the cached pointer.

## How to Enable It

This feature is opt-in via the `-flatten_classes` flag to cppwinrt.exe, or by setting `$(CppWinRTFlattenClasses)` to
`true` in MSBuild projects using the C++/WinRT NuGet package.

## When It Applies

A runtimeclass is cached if all of the following are true:

- The `-flatten_classes` flag is passed to cppwinrt.exe
- It has a default interface with which to anchor the cache
- It is not marked `[FastAbi]`, since those types follow the separate Fast ABI projection path
- It has at least one secondary interface
- Its default interface is not an async type (`IAsyncAction`, `IAsyncOperation<T>`, etc.)

Examples: `PropertySet`, `StringMap`, `Uri`, `XmlDocument`, `Package`, `Windows.UI.Xaml.Shapes::Path`.

Types that remain unchanged: single-interface runtimeclasses, `[FastAbi]` types, static classes, all
interfaces, delegates, and structs.

Composable runtimeclasses are supported. The projected type still uses flat storage, but it also preserves the
projected base-class chaining surface via `impl::base<>`, so client code can continue converting to base runtimeclasses
while base/default interface dispatch participates in the flat cache.

## What Changes for Clients

At the source level, nothing changes. Existing code that uses projected runtimeclass types should compile and run
without modification.

What does change is the generated C++ type:

- The projected runtimeclass no longer stores a single `void*` default-interface pointer.
- It stores the default pointer plus per-interface cache slots.
- `sizeof(T)` grows with the number of cached secondary interfaces.

This is a projection-only structural change. It is not a WinRT metadata contract change.

The most important compatibility note is ABI helper usage:

> **Note**: Apps that relied on `reinterpret_cast<void**>(&runtimeClass)` direct conversion to/from ABI types must be
> changed to use the built-in `winrt::get_abi(runtimeClass)` methods instead, or risk runtime corruption.

## Runtime Behavior

Default-interface calls are unchanged. Secondary-interface calls change from repeated resolution to lazy one-time
resolution plus cached dispatch.

Consider:

```cpp
auto info = DisplayInformation::GetForCurrentView();
auto dpi = info.LogicalDpi();               // IDisplayInformation (default)
auto rawDpi = info.RawDpiX();               // IDisplayInformation (default)
auto rawHeight = info.ScreenHeightInRawPixels(); // IDisplayInformation4 (secondary)
auto rawWidth = info.ScreenWidthInRawPixels();   // IDisplayInformation4 (secondary)
```

`LogicalDpi` and `RawDpiX` are on the default interface `IDisplayInformation`, so they continue to dispatch directly
through the default pointer in both models.

`ScreenHeightInRawPixels` and `ScreenWidthInRawPixels` are both on `IDisplayInformation4`, so both calls go through
`consume_general<IDisplayInformation4, DisplayInformation>`.

### Old dispatch

```
consume_general is called with Derive=DisplayInformation, Base=IDisplayInformation4.
Derive != Base, so:
  1. try_as_with_reason<IDisplayInformation4>(info)  →  QueryInterface + AddRef
  2. *(abi_t<IDisplayInformation4>**)&result          →  load vtable from QI result
  3. (abi->*mptr)(args...)                            →  call ScreenHeightInRawPixels via vtable
  4. ~com_ref()                                       →  Release on the QI result

consume_general is called again with Derive=DisplayInformation, Base=IDisplayInformation4.
Derive != Base, so:
  1. try_as_with_reason<IDisplayInformation4>(info)  →  QueryInterface + AddRef
  2. *(abi_t<IDisplayInformation4>**)&result          →  load vtable from QI result
  3. (abi->*mptr)(args...)                            →  call ScreenWidthInRawPixels via vtable
  4. ~com_ref()                                       →  Release on the QI result
```

The two secondary-interface calls each perform their own `QI` + `Release`, even though they are calling through the same
secondary interface back-to-back.

### New dispatch

```
consume_general is called with Derive=DisplayInformation, Base=IDisplayInformation4.
has_flat_interface_v<DisplayInformation, IDisplayInformation4> is true, so:
  1. d->thunk_cache_slot<IDisplayInformation4>()   →  address of cache slot (compile-time offset)
  2. slot.load(memory_order_acquire)               →  atomic load of cached pointer
  3. static_cast<abi_t<...>*>(loaded_ptr)          →  cast to ABI type
  4. (abi->*mptr)(args...)                         →  call ScreenHeightInRawPixels via vtable

consume_general is called again with Derive=DisplayInformation, Base=IDisplayInformation4.
has_flat_interface_v<DisplayInformation, IDisplayInformation4> is true, so:
  1. d->thunk_cache_slot<IDisplayInformation4>()   →  address of cache slot (compile-time offset)
  2. slot.load(memory_order_acquire)               →  atomic load of cached pointer
  3. static_cast<abi_t<...>*>(loaded_ptr)          →  cast to ABI type
  4. (abi->*mptr)(args...)                         →  call ScreenWidthInRawPixels via vtable
```

From the client's point of view, both calls follow the same projected code path: load the cached interface pointer and
call the vtable method. Internally, the cache slot holds a thunk on first use and the resolved interface pointer after
resolution. That means the first call pays the resolution cost, while the second is a direct call through the already
resolved `IDisplayInformation4` pointer, with no `QueryInterface` or `Release` on either visible call path.

## Compile-Time Structural Change

The main compile-time change is the projected class representation.

### Old: `DisplayInformation` (master)

```cpp
struct DisplayInformation : IDisplayInformation,
    impl::require<DisplayInformation,
        IDisplayInformation2, IDisplayInformation3,
        IDisplayInformation4, IDisplayInformation5>
{
    DisplayInformation(std::nullptr_t) noexcept {}
    DisplayInformation(void* ptr, take_ownership_from_abi_t) noexcept
        : IDisplayInformation(ptr, take_ownership_from_abi) {}
    static auto GetForCurrentView();
    // ...statics...
};
```

`sizeof(DisplayInformation) == 8` (one `void*` — the `IDisplayInformation` COM pointer).

### New: `DisplayInformation` (this branch)

```cpp
struct DisplayInformation :
    impl::flat_runtimeclass<IDisplayInformation,
        IDisplayInformation2, IDisplayInformation3,
        IDisplayInformation4, IDisplayInformation5>,
    impl::require<DisplayInformation,
        IDisplayInformation, IDisplayInformation2,
        IDisplayInformation3, IDisplayInformation4,
        IDisplayInformation5>
{
    DisplayInformation(std::nullptr_t) noexcept : flat_runtimeclass(nullptr) {}
    DisplayInformation(void* ptr, take_ownership_from_abi_t) noexcept
        : flat_runtimeclass(ptr, take_ownership_from_abi) {}
    static auto GetForCurrentView();
    // ...statics...
};
```

`sizeof(DisplayInformation) == 112` (header 16 + 4 × 24 cache/thunk pairs).

Cached runtimeclasses are no longer pointer-sized wrappers over the default interface and instead gain structured
storage objects carrying the default pointer plus lazy caches for selected secondary interfaces.

## Mechanism

Each cache slot is initialized to point at an `interface_thunk` — a 16-byte struct that masquerades as a COM object. Its
vtable points to a shared table of 256 ASM stubs.

```
cache_and_thunk layout:

┌─ cache: atomic<void*> ──── initially points to ──┐
├─ thunk: interface_thunk ◄────────────────────────┘
│    vtable → g_thunk_vtable[256]
│    payload → (header pointer + interface index)
└──────────────────────────────────────────────
```

### First call through a cache slot

The cache holds a pointer to the thunk. The vtable dispatch enters the ASM stub:

```asm
winrt_flat_thunk_stub_N:
    mov  eax, N                ; vtable slot index
    jmp  FlatResolveAndDispatch ; save registers, call resolve, tail-jump
```

`FlatResolveAndDispatch` calls `winrt_flat_resolve_thunk(thunk*)`, which:

1. Reads `thunk->payload` to find the default interface pointer and the IID
2. Calls `QueryInterface(iid, &real)`
3. Atomically replaces the cache slot: `cache.compare_exchange(&thunk, real)`
4. Returns the real interface pointer

The stub then tail-jumps to `real_vtable[slot_index]`, completing the original method call with the real COM object.

### Subsequent calls

After updating the cache slot with the real interface pointer, future calls dispatch directly onto that interface's
vtable. There is no further `QueryInterface` or `Release` on that path.

## Correctness and Safety

**Thread safety.** Two threads racing to resolve the same slot both QI successfully. The winner's `compare_exchange`
stores the real pointer; the loser's CAS fails, it Releases its duplicate result and uses the winner's pointer. All
reads after resolution are `memory_order_acquire` loads — standard lock-free pattern.

**Lifetime safety.** The thunk's IUnknown slots (QI, AddRef, Release) resolve the thunk and
forward to the real interface, just like method slots. This means an unresolved thunk behaves
as a proper COM object — callers can safely AddRef, Release, or QI a thunk pointer, which is
required for `param_ref<T>` to pass thunk pointers as ABI parameters.

- **Destructor** can unconditionally Release every cache slot. Thunk → no-op Release. Real pointer → normal Release. No
  "is it a thunk?" check needed.
- **Copy** AddRefs the default interface and re-initializes fresh thunks in the destination (lazy re-resolve on first
  use).
- **Move** steals the default pointer and all cache slots wholesale, then re-initializes thunks in the source.

**ABI compatibility.** The thunk is layout-compatible with a COM object (`void**` pointing to a vtable). Any code that
reads `*(void**)&cache_slot` gets a valid vtable pointer — either the thunk's or the real object's. The
`consume_general` hot path doesn't distinguish between them.

**Produce stubs.** WinRT component produce stubs (server-side ABI implementations) receive `void*` parameters and
forward them to the C++ implementation as projected types. The old code used `*reinterpret_cast<T const*>(&param)` to
view the `void*` as `T const&` — valid when `sizeof(T) == sizeof(void*)`. With flat types being larger, this
overreads the stack. The fix: `produce_borrowed_ref<T>` constructs a proper flat wrapper from the `void*` (via
`T{nullptr}` + `attach_abi`) and passes `static_cast<T const&>(...)` to the implementation method. This is only
emitted for `class_type` parameters; interface and delegate types remain pointer-sized and use the zero-cost
reinterpret pattern.

**`param_ref<T>` for IN parameters.** Consume methods for IN runtimeclass parameters accept `impl::param_ref<T>`
instead of `T const&` when flat runtimeclasses are enabled. This avoids constructing full flat runtimeclass temporaries
when passing derived types to methods expecting base types. Three conversion paths are selected at compile time:
zero-cost cache slot read for flat-to-flat conversions, zero-cost `static_cast` for non-composable implementation
types, and AddRef-based conversion for composable implementation types (the only path with destructor cost).

## Limitations and Non-Goals

- No `[FastAbi]` runtimeclasses. Those already follow a separate optimized projection path.
- No static-only classes. There is no instance to cache.
- No single-interface runtimeclasses. There is no secondary interface to resolve.
- No async-default-interface runtimeclasses. These have separate semantics and are intentionally excluded.
- No component-authored implementation types. This feature is about projected runtimeclasses, not `implements<>`
  producer types.

## Summary of changes from the prior model

| Aspect                       | Before                                          | After                                        |
| ---------------------------- | ----------------------------------------------- | -------------------------------------------- |
| Runtimeclass base class      | Default interface (e.g., `IDisplayInformation`) | `impl::flat_runtimeclass<IDefault, I...>` |
| `sizeof(DisplayInformation)` | 8 bytes                                         | 112 bytes (N=4 secondaries)                  |
| Secondary interface call     | QI + vtable call + Release (per call)           | Cache slot load + vtable call (per call)     |
| First secondary call cost    | QI + Release                                    | QI + atomic CAS (one-time)                   |
| Subsequent call cost         | QI + Release                                    | Direct vtable dispatch (zero overhead)       |
| Refcount operations per call | 2 (AddRef in QI, Release after)                 | 0                                            |
| Thread safety                | N/A (stateless)                                 | Lock-free compare-exchange on resolve        |
| Consumer API changes         | —                                               | None                                         |
