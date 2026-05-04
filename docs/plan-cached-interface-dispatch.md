# Plan: Thunk-Based Interface Caching for Runtimeclasses

## Goal

Eliminate per-call `QueryInterface`/`Release` overhead when calling non-default interface
methods on projected runtimeclasses. Today every call to e.g. `PropertySet::Insert()` does a
QI for `IMap`, a vtable call, and a Release. The new design uses ASM thunk stubs that
masquerade as COM objects and self-resolve on first vtable call, so the QI cost is paid
once per interface per object, with zero per-call overhead afterward.

## Approach: Thunk-based dispatch via `require_one` conversion operators

The runtimeclass **does not inherit from its default interface**. Instead it inherits from
`impl::thunked_runtimeclass<IDefault, I...>`, which holds:

- An `atomic<void*> default_cache` (the default interface pointer)
- Per-secondary-interface `CacheAndThunk` pairs (cache slot + `InterfaceThunk`)

Each `InterfaceThunk` is 16 bytes with a vtable pointer into a shared table of 256
architecture-specific ASM stubs. On first method call through any interface, the stub
calls `winrt_fast_resolve_thunk()` which QIs the default interface, atomically replaces
the cache slot with the real pointer, and tail-jumps to the real method. All subsequent
calls dispatch directly — the thunk is never touched again.

The `require_one<D, I>::operator I()` conversion operator is changed to return a
**reference to the cache slot** (reinterpreted as `I const&`) instead of doing a QI.
The cache slot holds either the thunk (self-resolving) or the already-resolved real
interface. This means `consume_general` sees `D != Base`, calls `operator I()`, gets
back an interface reference, and the existing `*(abi_t<Base>**)&result` aliasing works
correctly — the cache slot is `sizeof(void*)`.

**Key:** `consume_general` does NOT need to change. The thunk is transparent to it.
The `require_one` conversion operator is the only hook point.

---

## Hazard Audit

### P0: `get_abi(IUnknown const&)` and friends — `*(void**)(&object)`

**Location:** `strings/base_windows.h` lines 338–375

```cpp
inline void* get_abi(IUnknown const& object) noexcept { return *(void**)(&object); }
inline void** put_abi(IUnknown& object) noexcept { ... reinterpret_cast<void**>(&object); }
inline void* detach_abi(IUnknown& object) noexcept { ... *(void**)(&object); ... }
inline void attach_abi(IUnknown& object, void* value) noexcept { ... }
```

These take `IUnknown const&`/`IUnknown&`. Any runtimeclass (which derives from its default
interface, which derives from `IUnknown`) can bind to these references. They assume the
object's first `sizeof(void*)` bytes are the raw COM pointer — true today because
runtimeclasses inherit directly from their default interface, which IS `sizeof(void*)`.

**In the thunk design the runtimeclass no longer inherits from IUnknown.** It inherits from
`impl::thunked_runtimeclass<IDefault, I...>`, whose first data member is
`ThunkedRuntimeClassHeader` (containing `iid_table` then `default_cache`). So
`*(void**)(&object)` would read the `iid_table` pointer, not the COM interface pointer.

**Mitigation:** Detect thunked types via a trait and delegate to a member accessor.
The base `get_abi`/`put_abi`/`detach_abi`/`attach_abi` overloads in `base_windows.h` are
replaced with trait-dispatching versions:

```cpp
inline void* get_abi(IUnknown const& object) noexcept
{
    if constexpr (has_thunked_cache_v<std::remove_cvref_t<decltype(object)>>)
        return object.get_default_abi();
    else
        return *(void**)(&object);
}
```

However, these are non-template functions taking `IUnknown const&` — `if constexpr` cannot
be used. Instead, add **new overloads** that win via ADL:

```cpp
// In the generated namespace (same as the runtimeclass):
inline void* get_abi(PropertySet const& object) noexcept
{
    return object.get_default_abi();
}
```

This is per-class but trivial (one-liner forwarding to the base class method). The code
generator already stamps out constructors per-class, so this is minimal additional output.

Alternatively, use a single **constrained template** in `winrt::impl` that matches any
thunked type:

```cpp
template <typename T>
    requires (has_thunked_cache_v<T>)
void* get_abi(T const& object) noexcept
{
    return object.get_default_abi();
}
```

This is a single definition covering all thunked types. It's more constrained than
`get_abi(IUnknown const&)` and wins overload resolution. Same pattern for `put_abi`,
`detach_abi`, `attach_abi`. **No per-class generation needed.**

### P0: `write_abi_args` — `*(void**)(&param)` for `object_type` IN params

**Location:** `cppwinrt/code_writers.h` line 645

```cpp
case param_category::object_type:
case param_category::string_type:
    w.write("*(void**)(&%)", param_name);
    break;
```

`param_category::object_type` includes `class_type` (runtimeclasses), `interface_type`,
and `delegate_type`. WinRT metadata **can** have method parameters typed as runtimeclasses
(e.g. a method taking `PropertySet` not `IPropertySet`).

**Recommendation:** Replace `*(void**)(&param)` with `get_abi(param)` for `object_type`.
The constrained template overload for thunked types handles runtimeclasses; the existing
`IUnknown const&` overload handles interfaces and delegates. No SFINAE issues — `get_abi`
is a non-template overload for `IUnknown const&`, and the `requires` template is strictly
more constrained.

### P0: `bind_out<T>::operator void**()` — `(void**)(&object)`

**Location:** `strings/base_string.h` lines 511–544

```cpp
operator void** () const noexcept
{
    object = nullptr;
    return (void**)(&object);
}
```

Used for OUT params of `object_type`. The COM method writes a raw pointer into `*result`.
If `T` is a runtimeclass, `&object` points to the full runtimeclass, and writing a single
`void*` into it would only overwrite the first word.

**Analysis:** OUT params in WinRT ABI are always interface-typed (the ABI signature uses
the interface, not the runtimeclass). The code generator resolves the OUT param type to
the interface before generating `bind_out`. So `T` in `bind_out<T>` is always an interface
type for COM out-params.

**However:** The `operator R*()` overload does `reinterpret_cast<R*>(&object)`. If `object`
is a runtimeclass and `R` is `abi_t<Interface>`, this aliases incorrectly.

**Recommendation:** Add a `static_assert` in `bind_out` that `sizeof(T) == sizeof(void*)`
to catch any future misuse. The current code is safe but fragile.

### P1: Coroutine `when_any` — `*(unknown_abi**)&sender`

**Location:** `strings/base_coroutine_foundation.h` lines 863–865

**Analysis:** `T` is constrained to async interface types (`IAsyncAction`,
`IAsyncOperation<R>`, etc.) by `static_assert(has_category_v<T>)`. These are always
interface types, never runtimeclasses. **SAFE — no change needed.**

### P1: `WINRT_IMPL_SHIM` macro

**Location:** `strings/base_macros.h` line 16

```cpp
(*(abi_t<__VA_ARGS__>**)&static_cast<__VA_ARGS__ const&>(static_cast<D const&>(*this)))
```

The `static_cast<InterfaceType const&>(static_cast<D const&>(*this))` slices to the
interface base class reference, which is `sizeof(void*)`. The `*(abi_t<>**)&` then reads
the ABI pointer from the interface. **SAFE** — the intermediate reference is to the
interface base, not the runtimeclass.

### P1: `consume_general` `D == Base` branch

**Location:** `strings/base_windows.h` lines 470, 488, 506

```cpp
auto const _winrt_abi_type = *(abi_t<Base>**)d;
```

Only entered when `Derive == Base`, meaning `d` is a pointer to the interface type itself.
**SAFE.**

---

## Runtimeclass Categories

### Cacheable (thunked)

Non-composable, non-fastabi, non-static runtimeclasses with ≥1 secondary interface.
Examples: `PropertySet`, `StringMap`, `StorageFile`, `MediaCapture`.

Includes types with generic default interfaces (`StringMap` defaults to
`IMap<hstring, hstring>`, not a named interface). The `get_default_interface()` in the
code generator returns `coded_index<TypeDefOrRef>` which handles both cases uniformly.

### Excluded (initial implementation)

| Category | Reason |
|----------|--------|
| Composable runtimeclasses | Complex base class chains, `impl::base<>`, override machinery |
| Fast ABI runtimeclasses | Already optimized, `[FastAbi]` attribute, separate code path |
| Static-only runtimeclasses | No instances (`write_static_class`) |
| Single-interface runtimeclasses | No secondaries to cache (e.g. `Deferral`) |
| Async types | `IAsyncAction` etc. are interfaces, not runtimeclasses |
| Component-authored types | Use `implements<>`, not the projected runtimeclass |

---

## Thunk-Based Design

### Architecture overview

The prototype is in `jonwis.github.io/code/cppwinrt-proj/thunk_experiment.h`.

```
ThunkedRuntimeClass<IPropertySet, IMap, IIterable, IObservableMap> layout:

┌─ ThunkedRuntimeClassHeader (16 bytes) ─────────────────────────┐
│ iid_table:       guid const* const*  → static iids array       │
│ default_cache:   atomic<void*>       → IPropertySet ABI ptr    │
├─ pairs[0]: CacheAndThunkTagged (24 bytes) ─────────────────────┤
│ cache:  atomic<void*>  → initially &thunk, then real IMap*     │
│ thunk:  InterfaceThunk → { vtable → g_thunk_vtable, payload }  │
├─ pairs[1]: CacheAndThunkTagged (24 bytes) ─────────────────────┤
│ cache:  atomic<void*>  → initially &thunk, then real IIterable*│
│ thunk:  InterfaceThunk → { vtable → g_thunk_vtable, payload }  │
├─ pairs[2]: CacheAndThunkTagged (24 bytes) ─────────────────────┤
│ cache:  atomic<void*>  → IObservableMap*                       │
│ thunk:  InterfaceThunk → { vtable → g_thunk_vtable, payload }  │
└────────────────────────────────────────────────────────────────┘

Total: 16 + 3×24 = 88 bytes (N=3, tagged mode)
```

Each `InterfaceThunk` (16 bytes) masquerades as a COM object. Its vtable points to a
shared table of 256 ASM stubs. Each stub (10 bytes on x64):

```asm
winrt_fast_thunk_stub_N:
    mov eax, N              ; slot index
    jmp common_thunk_dispatch
```

`common_thunk_dispatch` (~60 bytes, shared):
1. Saves caller's `rdx`/`r8`/`r9` in shadow space
2. Calls `winrt_fast_resolve_thunk(rcx)` — rcx is `InterfaceThunk*`
3. `resolve()` atomically replaces the cache slot with the real interface via QI
4. Loads `real_vtable[slot_index]`, tail-jumps to the real method

After resolution, the cache slot holds the real COM pointer directly. All subsequent
calls dispatch through the real vtable — zero overhead.

### How `require_one::operator I()` changes

Today (`base_meta.h` line 162):

```cpp
template <typename D, typename I>
struct require_one : consume_t<D, I>
{
    operator I() const noexcept
    {
        return static_cast<D const*>(this)->template try_as<I>();
    }
};
```

Returns by value — QIs every time.

**After:** For thunked types, `operator I const&()` returns a reference to the cache slot:

```cpp
template <typename D, typename I>
struct require_one : consume_t<D, I>
{
    operator I() const noexcept
    {
        if constexpr (has_thunked_cache_v<D>)
        {
            // Return ref to cache slot — holds thunk (self-resolving) or real pointer.
            // The thunk transparently QIs on first vtable call.
            return *reinterpret_cast<I const*>(
                &static_cast<D const*>(this)->template thunk_cache_slot<I>());
        }
        else
        {
            return static_cast<D const*>(this)->template try_as<I>();
        }
    }
};
```

The cache slot is `atomic<void*>` — `sizeof(void*)` — so the reinterpret to `I const*`
is valid (projected interfaces are `sizeof(void*)`). The slot either holds:
- The `InterfaceThunk*` (on first access) — looks like a COM object, self-resolves
- The real interface pointer (after first resolution)

Either way, calling a method through the returned reference does a vtable dispatch.
On the thunk path, the ASM stub fires `resolve()` which does the QI once.

### `consume_general` — NO changes needed

With the thunk approach, `consume_general` is unchanged. Here's why:

When `D != Base` (runtimeclass calling a non-default interface method):
1. `consume_general` calls `try_as_with_reason<Base>(d, code)`
2. This calls `d->try_as_with_reason<Base>(code)` — the member function
3. For a thunked type, this delegates to `ThunkedRuntimeClassBase::try_as_with_reason`
   which returns a ref-counted com_ref from the default interface's QI

But wait — this is the *old* path through `consume_general`. The *actual* hot path goes
through the consume methods which are CRTP mixins on `consume_t<D, I>`:

```cpp
// Generated consume method (typical):
template <typename D, typename... I>
auto consume_IMap<D, I...>::Insert(...) const
{
    consume_general<IMap<K,V>, D>(static_cast<D const*>(this), &abi_t<IMap>::Insert, ...);
}
```

When `D == IMap<K,V>` (calling directly on the interface), the `D == Base` branch fires.

When `D == PropertySet` (calling through the runtimeclass), `D != Base`, so it goes to
the QI branch... but this IS what we want to intercept.

**Actually:** The consume methods are mixed in via `require_one<D, I> : consume_t<D, I>`.
When a user calls `ps.Insert(...)`, C++ resolves `Insert` through the CRTP inheritance:
`PropertySet` → `require_one<PropertySet, IMap>` → `consume_t<PropertySet, IMap>` → `Insert`.
Inside `Insert`, `D = PropertySet`, `Base = IMap`. The `consume_general` call QIs.

**The thunk intercept point is NOT in `consume_general`.** It's in `require_one::operator I()`.
When the user writes:

```cpp
IMap<hstring, IInspectable> map = ps;  // conversion
```

...that goes through `require_one::operator I()` which returns the cached/thunked reference.
But `consume_general` doesn't use `operator I()` — it calls `try_as_with_reason` directly.

**Therefore:** To avoid per-call QI in `consume_general`, we need either:
1. Change `consume_general`'s `D != Base` branch to check for thunked cache (3-way split)
2. Or generate forwarding methods that cast `*this` to the interface via `operator I const&()`
   and call the method there, making `D == Base` in the consume method

Option 2 (forwarding methods) is what the prototype does. Option 1 is a minimal change to
`consume_general`. Let's use **option 1** — a three-way branch in `consume_general`:

```cpp
template <typename Base, typename Derive, typename MemberPointer, typename ...Args>
void consume_general(Derive const* d, MemberPointer mptr, Args&&... args)
{
    if constexpr (std::is_same_v<Derive, Base>)
    {
        // D is the interface itself — direct dispatch
        auto const abi = *(abi_t<Base>**)d;
        check_hresult((abi->*mptr)(std::forward<Args>(args)...));
    }
    else if constexpr (has_thunked_interface_v<Derive, Base>)
    {
        // D is a thunked runtimeclass with a cache slot for Base.
        // The cache slot holds either a self-resolving thunk or the real pointer.
        // Either way, dereference gives a valid ABI vtable pointer.
        auto const abi = *(abi_t<Base>**)(&d->template thunk_cache_slot<Base>());
        check_hresult((abi->*mptr)(std::forward<Args>(args)...));
    }
    else
    {
        // D is a runtimeclass without a cache for Base — full QI.
        hresult code;
        auto const result = try_as_with_reason<Base>(d, code);
        check_hresult(code);
        auto const abi = *(abi_t<Base>**)&result;
        check_hresult((abi->*mptr)(std::forward<Args>(args)...));
    }
}
```

The thunk branch reads the cache slot (an `atomic<void*>`) as an ABI pointer. If the slot
still holds the thunk, the vtable dispatch goes through the ASM stub which resolves it.
If already resolved, it's a direct vtable call. **No `if(null)` check at the call site.**
The thunk IS the null-state handler, encoded in the ASM.

Same three-way split for `consume_noexcept` and `consume_noexcept_remove_overload`.

### Trait: `has_thunked_interface_v<D, I>`

Uses `type_index` to check if `I` is in the secondary interface list at compile time:

```cpp
template <typename D, typename I, typename = void>
inline constexpr bool has_thunked_interface_v = false;

// Specialized by the thunked_runtimeclass template itself:
// No per-class generation needed — the base class template provides this.
```

Inside `thunked_runtimeclass<IDefault, I...>`:

```cpp
template<typename Q>
static constexpr bool has_interface = (std::is_same_v<Q, I> || ...);

// thunk_cache_slot returns atomic<void*>& for the interface's cache slot
template<typename Q>
std::atomic<void*> const& thunk_cache_slot() const
{
    constexpr size_t idx = type_index<Q, I...>::value;
    return pairs[idx].cache;
}
```

The `has_thunked_interface_v` specialization comes from the base class:

```cpp
template <typename IDefault, typename... I, typename Q>
inline constexpr bool has_thunked_interface_v<
    thunked_runtimeclass<IDefault, I...>, Q> =
    (std::is_same_v<Q, I> || ...);
```

But `consume_general` receives `Derive = PropertySet`, not
`Derive = thunked_runtimeclass<...>`. So we need the runtimeclass to expose the trait.
Two options:

**Option A:** Each thunked runtimeclass inherits a marker:
```cpp
using thunked_interfaces = std::tuple<IMap<...>, IIterable<...>, IObservableMap<...>>;
```

Then `has_thunked_interface_v` detects the `thunked_interfaces` member type and checks
if `Q` is in the tuple via fold expression. **No explicit specializations needed.**

**Option B:** The code generator emits one specialization per runtimeclass:
```cpp
template<> inline constexpr bool has_thunked_cache_v<PropertySet> = true;
```

And `thunk_cache_slot<I>()` is inherited from the base class.

**Recommendation:** Option A — a `thunked_interfaces` type alias in the base, detected
by the trait. Zero per-class trait generation.

```cpp
template <typename T, typename I, typename = void>
inline constexpr bool has_thunked_interface_v = false;

template <typename T, typename I>
inline constexpr bool has_thunked_interface_v<T, I,
    std::void_t<typename T::thunked_interfaces>> =
    tuple_contains_v<I, typename T::thunked_interfaces>;
```

### `thunk_cache_slot<I>()` accessor

Defined in `thunked_runtimeclass<IDefault, I...>`:

```cpp
template<typename Q>
std::atomic<void*> const& thunk_cache_slot() const
{
    constexpr size_t idx = type_index<Q, I...>::value;
    static_assert(idx < sizeof...(I), "Interface not in thunked list");
    return pairs[idx].cache;
}
```

`type_index` is the compile-time index-of-type helper (already in the prototype).

### ABI overloads via constrained template

Instead of generating per-class `get_abi`/`put_abi`/`detach_abi`/`attach_abi`, use
a single constrained template that matches any thunked type:

```cpp
// In winrt::impl or winrt namespace:
template <typename T>
    requires (requires { typename T::thunked_interfaces; })
void* get_abi(T const& object) noexcept
{
    return object.get_default_abi();
}

template <typename T>
    requires (requires { typename T::thunked_interfaces; })
void** put_abi(T& object) noexcept
{
    object.clear_thunked();
    return object.put_default_abi();
}

template <typename T>
    requires (requires { typename T::thunked_interfaces; })
void* detach_abi(T& object) noexcept
{
    return object.detach_default_abi();
}

template <typename T>
    requires (requires { typename T::thunked_interfaces; })
void attach_abi(T& object, void* value) noexcept
{
    object.attach_default_abi(value);
}
```

These are more constrained than `get_abi(IUnknown const&)` and win overload resolution.
**One definition covers all thunked runtimeclasses.** The `get_default_abi()`,
`put_default_abi()`, etc. methods are on `ThunkedRuntimeClassBase`.

### `write_abi_args` change

Replace `*(void**)(&param)` with `get_abi(param)` for `object_type` IN params:

```cpp
case param_category::object_type:
    w.write("get_abi(%)", param_name);
    break;
case param_category::string_type:
    w.write("*(void**)(&%)", param_name);  // hstring stays as-is
    break;
```

Dispatches through overload resolution:
- Thunked runtimeclass → constrained template → `get_default_abi()`
- Interface type → `get_abi(IUnknown const&)` → `*(void**)(&object)` (unchanged)
- `param::` wrappers → their own `get_abi` overloads (unchanged)

### `bind_out` safety

Add a `static_assert` for defense:

```cpp
operator void** () const noexcept
{
    static_assert(sizeof(T) == sizeof(void*),
        "bind_out requires sizeof(T) == sizeof(void*); use put_abi() for larger types");
    // ... existing code
}
```

OUT params in WinRT ABI are always interface-typed, so this should never fire.

---

## Runtimeclass generated shape

### Before (current):

```cpp
struct WINRT_IMPL_EMPTY_BASES PropertySet : IPropertySet,
    impl::require<PropertySet, IMap<hstring, IInspectable>,
        IIterable<IKeyValuePair<hstring, IInspectable>>,
        IObservableMap<hstring, IInspectable>>
{
    PropertySet(std::nullptr_t) noexcept {}
    PropertySet(void* ptr, take_ownership_from_abi_t) noexcept
        : IPropertySet(ptr, take_ownership_from_abi) {}
    PropertySet();
};
```

`sizeof(PropertySet) == sizeof(void*)`. Secondary interfaces QI'd on every method call.

### After (thunked):

```cpp
struct WINRT_IMPL_EMPTY_BASES PropertySet :
    impl::thunked_runtimeclass<IPropertySet,
        IMap<hstring, IInspectable>,
        IIterable<IKeyValuePair<hstring, IInspectable>>,
        IObservableMap<hstring, IInspectable>>,
    impl::require<PropertySet,
        IMap<hstring, IInspectable>,
        IIterable<IKeyValuePair<hstring, IInspectable>>,
        IObservableMap<hstring, IInspectable>>
{
    PropertySet(std::nullptr_t) noexcept : thunked_runtimeclass(nullptr) {}
    PropertySet(void* ptr, take_ownership_from_abi_t) noexcept
        : thunked_runtimeclass(ptr) {}
    PropertySet();

    // Copy/move provided by thunked_runtimeclass base
};
```

`sizeof(PropertySet) == 88 bytes` (header 16 + 3×24 pairs, tagged mode).
The `require<>` CRTP still provides `consume_t` methods. `consume_general` uses the
thunk branch for known interfaces, QI fallback for unknown ones.

The `thunked_interfaces` type alias is provided by the base class:
```cpp
using thunked_interfaces = std::tuple<IMap<...>, IIterable<...>, IObservableMap<...>>;
```

### StringMap (generic default interface):

```cpp
struct WINRT_IMPL_EMPTY_BASES StringMap :
    impl::thunked_runtimeclass<IMap<hstring, hstring>,
        IIterable<IKeyValuePair<hstring, hstring>>,
        IObservableMap<hstring, hstring>>,
    impl::require<StringMap,
        IIterable<IKeyValuePair<hstring, hstring>>,
        IObservableMap<hstring, hstring>>
{
    StringMap(std::nullptr_t) noexcept : thunked_runtimeclass(nullptr) {}
    StringMap(void* ptr, take_ownership_from_abi_t) noexcept
        : thunked_runtimeclass(ptr) {}
    StringMap();
};
```

Works identically — `IMap<hstring, hstring>` is the default interface. `get_default_abi()`
returns `default_cache` which holds the `IMap` ABI pointer.

---

## ASM stubs

### Shared across all thunked types

| File | Architecture | Size |
|------|-------------|------|
| `strings/thunk_stubs_x64.asm` | x64 (MASM) | ~4.7 KB |
| `strings/thunk_stubs_x86.asm` | x86 (MASM) | ~2.9 KB |
| `strings/thunk_stubs_arm64.asm` | ARM64 (armasm64) | ~4.2 KB |
| `strings/thunk_stubs_arm64ec.asm` | ARM64EC (armasm64) | ~4.2 KB |

256 stubs × 10 bytes each + common dispatch + vtable array. Adding a new thunked type
costs zero additional binary — only per-instance storage.

### Extern declarations

```cpp
extern "C" void* winrt_fast_resolve_thunk(InterfaceThunk const* thunk);
extern "C" const void* winrt_fast_thunk_vtable[256];
```

`winrt_fast_resolve_thunk` is a one-line `extern "C"` function that calls
`InterfaceThunk::resolve()` — the static member function that does QI + atomic swap.

### Build integration

The ASM files compile into a static library (`cppwinrt_thunks` or similar) that links
into any binary using thunked runtimeclasses. The NuGet package includes pre-compiled
`.obj` files per architecture.

---

## Thread safety

`InterfaceThunk::resolve()` uses `compare_exchange_strong` on the cache slot:
- Two threads racing to resolve the same interface both QI successfully
- The loser's `compare_exchange` fails; it releases its result and uses the winner's pointer
- No locks, no spinwaits

After resolution, the cache slot holds a raw pointer and all reads are `memory_order_acquire`
loads — standard lock-free pattern.

---

## Implementation Plan

### Phase 1: Runtime infrastructure (`strings/`)

1. **`base_thunked_runtimeclass.h`** — new file containing:
   - `ThunkedRuntimeClassHeader` (iid_table + default_cache)
   - `InterfaceThunk` (16 bytes, resolve() logic)
   - `CacheAndThunkTagged` / `CacheAndThunkFull` pair types
   - `ThunkedRuntimeClassBase` (clear, attach, copy, move — non-template)
   - `thunked_runtimeclass<IDefault, I...>` typed template
   - `type_index<T, Types...>` compile-time helper
   - `has_thunked_interface_v` trait via `thunked_interfaces` detection
   - `get_default_abi()`, `put_default_abi()`, `detach_default_abi()`, `attach_default_abi()`

2. **Constrained ABI overloads** (`base_thunked_runtimeclass.h` or `base_windows.h`):
   - `get_abi(T const&)` with `requires thunked_interfaces`
   - `put_abi(T&)` with same constraint
   - `detach_abi(T&)` / `attach_abi(T&, void*)`

3. **Modify `consume_general`** (`base_windows.h`):
   - Add `has_thunked_interface_v<Derive, Base>` branch
   - Same for `consume_noexcept` and `consume_noexcept_remove_overload`
   - Cache slot read → ABI pointer → vtable call (thunk self-resolves if needed)

4. **ASM stubs** — copy from prototype, adjust symbol names:
   - `strings/thunk_stubs_x64.asm`
   - `strings/thunk_stubs_x86.asm`
   - `strings/thunk_stubs_arm64.asm`
   - `strings/thunk_stubs_arm64ec.asm`

5. **`bind_out` static_assert** (`base_string.h`)

### Phase 2: Code generator (`cppwinrt/`)

6. **`write_abi_args`** (`code_writers.h`):
   - `*(void**)(&param)` → `get_abi(param)` for `object_type` IN params

7. **`write_slow_class`** (`code_writers.h`):
   - For cacheable types: inherit from `impl::thunked_runtimeclass<IDefault, I...>`
     instead of the default interface directly
   - Keep `impl::require<>` inheritance for consume CRTP methods
   - Generate constructors that delegate to `thunked_runtimeclass`
   - No explicit forwarding methods needed (consume_general handles dispatch)

8. **`write_default_interface`** / `default_interface` trait:
   - Must still work — `thunked_runtimeclass<IDefault, ...>` stores `IDefault` in
     the template args; the trait maps `PropertySet → IPropertySet`

9. **Build system** (`CMakeLists.txt`):
   - New `cppwinrt_thunks` static library target for ASM stubs
   - Per-architecture assembly rules

### Phase 3: Validation

10. **All existing tests must pass unchanged.** The `require<>` CRTP still provides the
    same consume methods. `consume_general` adds a faster path but falls back to QI for
    unknown interfaces. ABI overloads maintain the same contract.

11. **New tests:**
    - Thunk resolution correctness (first call QIs, subsequent calls skip)
    - Copy semantics (fresh thunks, lazy re-resolve)
    - Move semantics (steal default + reinit thunks)
    - Thread safety (8+ threads racing to resolve same interface)
    - `get_abi`/`put_abi`/`detach_abi`/`attach_abi` on thunked types
    - Types with generic default interface (StringMap)
    - Types with many secondaries (>8 → full mode with explicit IID storage)

---

## Risks

| Risk | Mitigation |
|------|-----------|
| Per-instance size increase (88 bytes for N=3 vs 8 bytes) | QI elimination justifies it; hot types benefit most |
| ASM stubs per architecture | 4 files, ~4 KB each, shared across all types |
| MinGW/Clang: no MASM | GAS equivalents needed; could also use inline asm or C trampoline fallback |
| `requires` clause needs C++20 | cppwinrt already requires C++20 for coroutines |
| 256-slot vtable limit | WinRT interfaces rarely exceed ~30 methods; `static_assert` in codegen |
| `consume_general` branch prediction | `if constexpr` — resolved at compile time, zero runtime cost |

---

## Open questions

1. **NuGet packaging:** ASM stubs need compilation. Options: pre-compiled `.obj` per arch
   in the NuGet, or MSBuild targets that assemble from source.

2. **`operator=(nullptr)`:** Must clear default + all cache slots, release resolved ones.
   The prototype's `clear()` handles this.

3. **Interaction with `base<>` / composable types:** Deferred to a future phase.

4. **`WINRT_IMPL_SHIM` macro:** Currently only used in hand-written map Lookup/Remove
   overloads. In a thunked type, `static_cast<IMap const&>(*this)` hits
   `require_one::operator I()` which returns the thunked/cached reference. The
   `*(abi_t<>**)&` then reads the cache slot. **Should work** — but needs testing.

---

## Tooling: Build & Validate

### Scripts

| Script | Purpose |
|--------|---------|
| `scripts/build_and_test.ps1` | Single-invocation parallel build + test runner |
| `scripts/run_cppwinrt.ps1` | Run `cppwinrt.exe` to regenerate projection headers |

### `scripts/build_and_test.ps1`

Replaces `build_test_all.cmd` for development use. Builds all test targets in a single
`msbuild /m /v:m` invocation — MSBuild resolves the `.sln` `ProjectDependencies`
(prebuild → cppwinrt → components → tests) and parallelizes across the graph.

```
.\scripts\build_and_test.ps1                        # build + test (x64 Release)
.\scripts\build_and_test.ps1 -BuildOnly             # compile-check only
.\scripts\build_and_test.ps1 -BuildOnly -BinLog     # compile-check + binary log
.\scripts\build_and_test.ps1 -Platform x86          # x86 build + test
```

- **`-BuildOnly`** — skips test execution (for compile-check iterations).
- **`-BinLog`** — produces `_build\build.binlog` for structured error analysis.
- Build output is tee'd to `_build\build_output.log`.
- Test results go to `_build\<Platform>\<Configuration>\<test>_results.txt`.

### `scripts/run_cppwinrt.ps1`

Runs the locally-built `cppwinrt.exe` to generate projection headers. Output goes under
`build/` to avoid polluting source directories.

```
.\scripts\run_cppwinrt.ps1                                           # default: build\projection\x64\Release
.\scripts\run_cppwinrt.ps1 -OutputDir build\projection\custom        # custom output
```

Use this when you need to inspect generated headers after changing `strings/` or
`cppwinrt/code_writers.h`. The output directory is always under `build/` (which is
gitignored).

### Agent workflow for build-fix iterations

When making changes to `strings/` or `cppwinrt/` files:

1. **Make the code change** (edit `strings/*.h`, `cppwinrt/code_writers.h`, etc.)

2. **Run the build** via terminal in async mode:
   ```
   .\scripts\build_and_test.ps1 -BuildOnly -BinLog
   ```
   Do **NOT** poll or sleep waiting for the build. Run it async and wait for the terminal
   completion notification.

3. **On build failure**, dispatch a sub-agent to analyze errors:
   - Use `Explore` or a lower-powered agent (e.g. `GPT-5.3-Codex`) to read the build log
     at `_build\build_output.log`.
   - The agent should extract all `error C####` lines, group by file, and produce a
     structured report:
     ```
     ## Build Error Report
     ### strings/base_windows.h
     - Line 505: C2039 'thunk_cache_slot' is not a member of 'PropertySet'
     - Line 510: C2672 no matching overloaded function found
     ```
   - If a `-BinLog` was produced, the agent can use `binlog_lm_errors` to get structured
     error data instead of parsing text.

4. **Review the error report** and fix. Repeat from step 1.

5. **On build success**, run full tests:
   ```
   .\scripts\build_and_test.ps1
   ```
   Again, do NOT poll. Wait for terminal notification.

6. **On test failure**, read `_build\x64\Release\<test>_results.txt` for the failing test's
   Catch2 output.

7. **To inspect generated headers**, run:
   ```
   .\scripts\run_cppwinrt.ps1
   ```
   Then examine files under `build\projection\x64\Release\`.

### Rules for the build-fix loop

- **NEVER modify existing test source files.** All changes must be drop-in compatible.
  If a test fails, the fix is in `strings/` or `cppwinrt/` — never in `test/`.
- **NEVER poll** waiting for build or test completion. Use async terminal execution and
  wait for the completion notification.
- **Use sub-agents for error triage.** The build log can be 100K+ lines. Don't try to
  read it manually. Dispatch a sub-agent with: "Read `_build\build_output.log`, extract
  all `error` lines, group by source file, and return a structured report."
- **Prefer `-BuildOnly`** for compile-check iterations. Only run tests after a clean build.
- **Use `-BinLog`** when errors are ambiguous. The binary log has full dependency and
  evaluation traces.
- **cppwinrt.exe output** must go under `build/` — never into `strings/` or source trees.
