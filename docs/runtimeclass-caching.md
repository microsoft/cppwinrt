# Runtimeclass Interface Caching

## What changed

Projected runtimeclass types that have secondary interfaces (e.g., `PropertySet`,
`StringMap`, `Uri`) now cache resolved interface pointers instead of calling
`QueryInterface` on every method call. The projected type's in-memory layout changed
from a single `void*` (the default interface pointer) to a struct containing the
default pointer plus per-interface cache slots backed by self-resolving ASM thunks.

This feature is opt-in via the `-flatten_classes` flag to cppwinrt.exe, or by setting
`$(CppWinRTFlattenClasses)` to `true` in MSBuild projects using the C++/WinRT NuGet package.

## Impact on consumers

**None.** The API surface is identical. Existing code that uses projected runtimeclass
types compiles and runs without modification. The change is purely in the generated
type layout and internal dispatch mechanism.

## Which types are affected

A runtimeclass is cached if all of the following are true:
- The `-flatten_classes` flag is passed to cppwinrt.exe
- It has a default interface (not a static-only class)
- It is not marked `[FastAbi]`
- It has no base class (not composable)
- It has at least one secondary interface
- Its default interface is not an async type (`IAsyncAction`, `IAsyncOperation<T>`, etc.)

Examples: `PropertySet`, `StringMap`, `Uri`, `XmlDocument`, `Package`.

Types that remain unchanged: single-interface runtimeclasses (e.g., `Deferral` if it
only had `IDeferral`), composable types, `[FastAbi]` types, static classes, all
interfaces, delegates, and structs.

## Generated code: before and after

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
    impl::thunked_runtimeclass<IDisplayInformation,
        IDisplayInformation2, IDisplayInformation3,
        IDisplayInformation4, IDisplayInformation5>,
    impl::require<DisplayInformation,
        IDisplayInformation, IDisplayInformation2,
        IDisplayInformation3, IDisplayInformation4,
        IDisplayInformation5>
{
    DisplayInformation(std::nullptr_t) noexcept : thunked_runtimeclass(nullptr) {}
    DisplayInformation(void* ptr, take_ownership_from_abi_t) noexcept
        : thunked_runtimeclass(ptr, take_ownership_from_abi) {}
    static auto GetForCurrentView();
    // ...statics...
};
```

`sizeof(DisplayInformation) == 112` (header 16 + 4 × 24 cache/thunk pairs).

## Dispatch comparison

Consider:

```cpp
auto info = DisplayInformation::GetForCurrentView();
auto dpi = info.LogicalDpi();               // IDisplayInformation (default)
auto rawDpi = info.RawDpiX();               // IDisplayInformation (default)
auto brightness = info.ScreenBrightness();  // IDisplayInformation4 (secondary)
auto hz = info.RefreshRate();               // IDisplayInformation5 (secondary)
```

`LogicalDpi` and `RawDpiX` are on the default interface `IDisplayInformation` — these
dispatch directly through `default_cache` in both old and new code (no QI in either
case).

`ScreenBrightness` is on `IDisplayInformation4` and `RefreshRate` is on
`IDisplayInformation5` — secondary interfaces. These go through
`consume_general<IDisplayInformation4, DisplayInformation>`.

### Old dispatch (per call to a secondary interface)

```
consume_general is called with Derive=DisplayInformation, Base=IDisplayInformation4.
Derive != Base, so:
  1. try_as_with_reason<IDisplayInformation4>(info)  →  QueryInterface + AddRef
  2. *(abi_t<IDisplayInformation4>**)&result          →  load vtable from QI result
  3. (abi->*mptr)(args...)                            →  call ScreenBrightness via vtable
  4. ~com_ref()                                       →  Release on the QI result
```

Every call does QI + Release — two interlocked refcount operations and a COM
apartment check, even though the same object always returns the same interface.

### New dispatch (per call to a secondary interface)

```
consume_general is called with Derive=DisplayInformation, Base=IDisplayInformation4.
has_thunked_interface_v<DisplayInformation, IDisplayInformation4> is true, so:
  1. d->thunk_cache_slot<IDisplayInformation4>()   →  address of cache slot (compile-time offset)
  2. *(abi_t<IDisplayInformation4>**)(&slot)        →  load pointer from cache slot
  3. (abi->*mptr)(args...)                          →  call ScreenBrightness via vtable
```

No QI, no Release, no refcount traffic. The cache slot holds either a thunk (first
call) or the real interface pointer (all subsequent calls).

## The proxy-replacement mechanism

Each cache slot is initialized to point at an `interface_thunk` — a 16-byte struct
that masquerades as a COM object. Its vtable points to a shared table of 256 ASM
stubs.

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
winrt_cached_thunk_stub_N:
    mov  eax, N                ; vtable slot index
    jmp  CachedResolveAndDispatch ; save registers, call resolve, tail-jump
```

`CachedResolveAndDispatch` calls `winrt_cached_resolve_thunk(thunk*)`, which:

1. Reads `thunk->payload` to find the default interface pointer and the IID
2. Calls `QueryInterface(iid, &real)`
3. Atomically replaces the cache slot: `cache.compare_exchange(&thunk, real)`
4. Returns the real interface pointer

The stub then tail-jumps to `real_vtable[slot_index]`, completing the original
method call with the real COM object.

### All subsequent calls

The cache slot now holds the real `IMap*` pointer. The vtable dispatch goes directly
to the real COM object's vtable — zero overhead vs a raw interface call.

### Why this is safe

**Thread safety.** Two threads racing to resolve the same slot both QI successfully.
The winner's `compare_exchange` stores the real pointer; the loser's CAS fails, it
Releases its duplicate result and uses the winner's pointer. All reads after
resolution are `memory_order_acquire` loads — standard lock-free pattern.

**Lifetime safety.** The thunk's IUnknown slots are no-ops: `QueryInterface` returns
`E_NOINTERFACE`, `AddRef` and `Release` return 1. This means:

- **Destructor** can unconditionally Release every cache slot. Thunk → no-op Release.
  Real pointer → normal Release. No "is it a thunk?" check needed.
- **Copy** AddRefs the default interface and re-initializes fresh thunks in the
  destination (lazy re-resolve on first use).
- **Move** steals the default pointer and all cache slots wholesale, then
  re-initializes thunks in the source.

**ABI compatibility.** The thunk is layout-compatible with a COM object (`void**`
pointing to a vtable). Any code that reads `*(void**)&cache_slot` gets a valid
vtable pointer — either the thunk's or the real object's. The `consume_general`
hot path doesn't distinguish between them.

**Produce stubs.** WinRT component produce stubs (server-side ABI implementations)
receive `void*` parameters and forward them to the C++ implementation as projected
types. The old code used `*reinterpret_cast<T const*>(&param)` to view the `void*`
as `T const&` — valid when `sizeof(T) == sizeof(void*)`. With thunked types being
larger, this overreads the stack. The fix: `produce_borrowed_ref<T>` constructs a
proper thunked wrapper from the `void*` (via `T{nullptr}` + `attach_abi`) and
detaches on destruction to prevent Release. This is only emitted for `class_type`
parameters; interface and delegate types remain pointer-sized and use the zero-cost
reinterpret pattern.

## Summary of changes from the prior model

| Aspect | Before | After |
|--------|--------|-------|
| Runtimeclass base class | Default interface (e.g., `IDisplayInformation`) | `impl::thunked_runtimeclass<IDefault, I...>` |
| `sizeof(DisplayInformation)` | 8 bytes | 112 bytes (N=4 secondaries) |
| Secondary interface call | QI + vtable call + Release (per call) | Cache slot load + vtable call (per call) |
| First secondary call cost | QI + Release | QI + atomic CAS (one-time) |
| Subsequent call cost | QI + Release | Direct vtable dispatch (zero overhead) |
| Refcount operations per call | 2 (AddRef in QI, Release after) | 0 |
| Thread safety | N/A (stateless) | Lock-free compare-exchange on resolve |
| Consumer API changes | — | None |
