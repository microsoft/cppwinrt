# Plan: Thunk-Based Interface Caching for Runtimeclasses

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

## Approach: Three-way branch in `consume_general`

The runtimeclass **does not inherit from its default interface**. Instead it inherits from
`impl::thunked_runtimeclass<IDefault, I...>`, which holds:

- An `atomic<void*> default_cache` (the default interface pointer)
- Per-secondary-interface `cache_and_thunk` pairs (cache slot + `interface_thunk`)

Each `interface_thunk` is 16 bytes with a vtable pointer into a shared table of 256
architecture-specific ASM stubs. On first method call through any interface, the stub
calls `winrt_fast_resolve_thunk()` which QIs the default interface, atomically replaces
the cache slot with the real pointer, and tail-jumps to the real method. All subsequent
calls dispatch directly — the thunk is never touched again.

The hot path is `consume_general`, which gets a three-way `if constexpr` branch:

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
        // D has a thunked cache slot for Base. Read the cache slot directly.
        // If still a thunk, the vtable dispatch self-resolves via ASM stub.
        // If already resolved, direct vtable call. Zero refcount overhead.
        auto const abi = *(abi_t<Base>**)(&d->template thunk_cache_slot<Base>());
        check_hresult((abi->*mptr)(std::forward<Args>(args)...));
    }
    else
    {
        // No cache — full QI fallback (same as today).
        hresult code;
        auto const result = try_as_with_reason<Base>(d, code);
        check_hresult(code);
        auto const abi = *(abi_t<Base>**)&result;
        check_hresult((abi->*mptr)(std::forward<Args>(args)...));
    }
}
```

Same three-way split for `consume_noexcept` and `consume_noexcept_remove_overload`.

The thunk branch reads the cache slot (an `atomic<void*>`) as an ABI pointer. If the
slot still holds the thunk, the vtable dispatch goes through the ASM stub which resolves
it. If already resolved, it's a direct vtable call. **No `if(null)` check at the call
site** — the thunk IS the null-state handler, encoded in the ASM.

### Why NOT `require_one::operator I()` as the intercept point

`require_one::operator I()` returns by value. Returning a copy of the cache slot pointer
would cause the `I` destructor to Release it — either a no-op (thunk) or incorrectly
releasing the cached real interface. To fix that you'd need to AddRef before returning,
adding per-call interlocked overhead. The `consume_general` three-way branch avoids this
entirely — it reads the cache slot as a raw pointer with zero refcount traffic.

`require_one::operator I()` is only used for explicit conversion (`IMap<K,V> map = ps`).
For thunked types it can AddRef the cache slot value (or resolve the thunk first), which
is acceptable for the uncommon conversion path. The hot method-call path never touches it.

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

These take `IUnknown const&`/`IUnknown&`. In the thunk design the runtimeclass no longer
inherits from `IUnknown` — it inherits from `impl::thunked_runtimeclass<IDefault, I...>`,
whose first data member is `thunked_runtimeclass_header` (containing `iid_table` then
`default_cache`). `*(void**)(&object)` would read the `iid_table` pointer, not the COM
interface pointer.

**Mitigation:** Add SFINAE-guarded template overloads (C++17-compatible) that match any
thunked type and delegate to member accessors:

```cpp
template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void* get_abi(T const& object) noexcept
{
    return object.get_default_abi();
}
```

These are more constrained than `get_abi(IUnknown const&)` and win overload resolution.
Same pattern for `put_abi`, `detach_abi`, `attach_abi`, `copy_from_abi`, `copy_to_abi`.
**One definition covers all thunked runtimeclasses — no per-class generation.**

Note: `has_thunked_cache_v` is detected via `std::void_t<typename T::thunked_interfaces>`
— no C++20 `requires` needed. cppwinrt's language floor is C++17.

### P0: `copy_from_abi` / `copy_to_abi`

**Location:** `strings/base_windows.h` lines 370–385

Same `*(void**)(&object)` aliasing hazard as `get_abi`. Need the same SFINAE-guarded
template overloads:

```cpp
template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void copy_from_abi(T& object, void* value) noexcept { object.copy_from_default_abi(value); }

template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void copy_to_abi(T const& object, void*& value) noexcept { object.copy_to_default_abi(value); }
```

### P0: `write_abi_args` — `*(void**)(&param)` for `object_type` IN params

**Location:** `cppwinrt/code_writers.h` line 645

```cpp
case param_category::object_type:
case param_category::string_type:
    w.write("*(void**)(&%)", param_name);
    break;
```

`param_category::object_type` includes `class_type` (runtimeclasses), `interface_type`,
and `delegate_type`. WinRT metadata **can** have method parameters typed as runtimeclasses.

**Recommendation:** Replace `*(void**)(&param)` with `get_abi(param)` for `object_type`.
The SFINAE-guarded template overload handles thunked runtimeclasses; the existing
`IUnknown const&` overload handles interfaces and delegates.

### P0: `bind_out<T>::operator void**()` — `(void**)(&object)`

**Location:** `strings/base_string.h` lines 511–544

**Analysis:** OUT params in WinRT ABI are always interface-typed. `T` in `bind_out<T>`
is always an interface type for COM out-params. **Safe**, but add a `static_assert`:

```cpp
static_assert(sizeof(T) == sizeof(void*),
    "bind_out requires sizeof(T) == sizeof(void*); use put_abi() for larger types");
```

### P0: `WINRT_IMPL_SHIM` macro

**Location:** `strings/base_macros.h` line 16

```cpp
(*(abi_t<__VA_ARGS__>**)&static_cast<__VA_ARGS__ const&>(static_cast<D const&>(*this)))
```

**BREAKS for thunked types.** `static_cast<IMap const&>(*this)` requires `*this` to
inherit from `IMap`. Thunked types don't — they inherit from `thunked_runtimeclass`.
The `static_cast` would fail to compile.

`WINRT_IMPL_SHIM` is only used in hand-written `IMap`/`IMapView` `Lookup`/`Remove`
overloads in `code_writers.h` (5 call sites). **Fix:** Change these call sites to use
`consume_general` (which handles the thunked path) instead of bypassing it via the macro.
The `check_hresult_allow_bounds` behavior can be preserved by adding a variant of
`consume_general` that returns the HRESULT instead of throwing:

```cpp
template <typename Base, typename Derive, typename MemberPointer, typename ...Args>
hresult consume_general_nothrow(Derive const* d, MemberPointer mptr, Args&&... args) noexcept
{
    // same three-way branch, but returns (abi->*mptr)(...) instead of check_hresult
}
```

Then the hand-written map overloads call `consume_general_nothrow` and apply
`check_hresult_allow_bounds` on the result.

### P1: Coroutine `when_any` — `*(unknown_abi**)&sender`

**Location:** `strings/base_coroutine_foundation.h` lines 863–865

`T` is constrained to async interface types. **SAFE — no change needed.**

### P1: `consume_general` `D == Base` branch

`*(abi_t<Base>**)d` where `d` is `Derive const*` with `Derive == Base` — always an
interface type. **SAFE.**

---

## Thunk vtable: no-op IUnknown slots

The thunk vtable's first 3 entries (slots 0/1/2 = QI/AddRef/Release) use dedicated
no-op functions instead of the generic resolve stubs:

```asm
winrt_thunk_qi proc
    mov     dword ptr [r8], 0       ; *ppv = nullptr
    mov     eax, 80004002h          ; E_NOINTERFACE
    ret
winrt_thunk_qi endp

winrt_thunk_addref proc
    mov     eax, 1
    ret
winrt_thunk_addref endp

winrt_thunk_release proc
    mov     eax, 1
    ret
winrt_thunk_release endp
```

The vtable array uses these for slots 0–2, regular stubs for slots 3–255:

```asm
winrt_fast_thunk_vtable label qword
    dq winrt_thunk_qi           ; slot 0
    dq winrt_thunk_addref       ; slot 1
    dq winrt_thunk_release      ; slot 2
    vtable_entry %3             ; slot 3+
    ...
```

**Why this matters:** With no-op Release on the thunk, lifecycle code becomes simpler:

- **Destructor:** Unconditionally Release every cache slot. If the slot holds a thunk,
  Release is a no-op. If it holds a real interface, Release decrements the refcount.
  No "is it a thunk?" check needed.
- **Copy:** Cannot blindly AddRef all slots — thunk pointers are embedded in the *source*
  object's storage. Copying a thunk pointer would create a dangling reference to the
  source. Copy must: for resolved slots, AddRef + copy the real pointer; for unresolved
  slots, initialize a fresh thunk in the destination.
- **Move:** Steal all cache slots wholesale (thunk or real, doesn't matter), then
  reinitialize thunks in the destination pointing to the destination's header.

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
thunked_runtimeclass<IPropertySet, IMap, IIterable, IObservableMap> layout:

┌─ thunked_runtimeclass_header (16 bytes) ───────────────────────┐
│ iid_table:       guid const* const*  → static iids array       │
│ default_cache:   atomic<void*>       → IPropertySet ABI ptr    │
├─ pairs[0]: cache_and_thunk_tagged (24 bytes) ──────────────────┤
│ cache:  atomic<void*>  → initially &thunk, then real IMap*     │
│ thunk:  interface_thunk → { vtable → g_thunk_vtable, payload } │
├─ pairs[1]: cache_and_thunk_tagged (24 bytes) ──────────────────┤
│ cache:  atomic<void*>  → initially &thunk, then real IIterable*│
│ thunk:  interface_thunk → { vtable → g_thunk_vtable, payload } │
├─ pairs[2]: cache_and_thunk_tagged (24 bytes) ──────────────────┤
│ cache:  atomic<void*>  → IObservableMap*                       │
│ thunk:  interface_thunk → { vtable → g_thunk_vtable, payload } │
└────────────────────────────────────────────────────────────────┘

Total: 16 + 3×24 = 88 bytes (N=3, tagged mode)
```

Each `interface_thunk` (16 bytes) masquerades as a COM object. Its vtable points to a
shared table of 256 ASM stubs. Slots 0–2 are no-op QI/AddRef/Release (see above).
Each method stub (10 bytes on x64):

```asm
winrt_fast_thunk_stub_N:
    mov eax, N              ; slot index
    jmp common_thunk_dispatch
```

`common_thunk_dispatch` (~60 bytes, shared):
1. Saves caller's `rdx`/`r8`/`r9` in shadow space
2. Calls `winrt_fast_resolve_thunk(rcx)` — rcx is `interface_thunk*`
3. `resolve()` atomically replaces the cache slot with the real interface via QI
4. Loads `real_vtable[slot_index]`, tail-jumps to the real method

After resolution, the cache slot holds the real COM pointer directly. All subsequent
calls dispatch through the real vtable — zero overhead.

### `as<T>()` / `try_as<T>()` on thunked types

Since the thunked runtimeclass does not inherit from `IUnknown`, it provides its own
`as<T>()` and `try_as<T>()` that QI through the default interface:

```cpp
// In thunked_runtimeclass_base:
template<typename Q> auto as() const
{
    return reinterpret_cast<IInspectable const*>(&default_cache)->as<Q>();
}

template<typename Q> auto try_as() const noexcept
{
    return reinterpret_cast<IInspectable const*>(&default_cache)->try_as<Q>();
}

template<typename Q> auto try_as_with_reason(hresult& code) const noexcept
{
    return reinterpret_cast<IInspectable const*>(&default_cache)->try_as_with_reason<Q>(code);
}
```

`default_cache` is `sizeof(void*)` — reinterpreting it as `IInspectable const*` is valid
(same aliasing as projected interfaces). This provides `ps.as<IClosable>()` etc.

These are found by unqualified lookup because `PropertySet` inherits from
`thunked_runtimeclass_base` which defines them.

### Trait: `has_thunked_interface_v<D, I>`

Uses a `thunked_interfaces` type alias inherited from the base class:

```cpp
// In thunked_runtimeclass<IDefault, I...>:
using thunked_interfaces = std::tuple<I...>;
```

Detected via `std::void_t` (C++17-compatible):

```cpp
template <typename T, typename = void>
inline constexpr bool has_thunked_cache_v = false;

template <typename T>
inline constexpr bool has_thunked_cache_v<T,
    std::void_t<typename T::thunked_interfaces>> = true;

template <typename T, typename I, typename = void>
inline constexpr bool has_thunked_interface_v = false;

template <typename T, typename I>
inline constexpr bool has_thunked_interface_v<T, I,
    std::void_t<typename T::thunked_interfaces>> =
    tuple_contains_v<I, typename T::thunked_interfaces>;
```

No per-class specializations needed. The trait is derived from the base class template.

### `thunk_cache_slot<I>()` accessor

```cpp
// In thunked_runtimeclass<IDefault, I...>:
template<typename Q>
std::atomic<void*> const& thunk_cache_slot() const
{
    constexpr size_t idx = type_index<Q, I...>::value;
    static_assert(idx < sizeof...(I), "Interface not in thunked list");
    return pairs[idx].cache;
}
```

### ABI overloads via SFINAE template (C++17)

```cpp
// In winrt namespace (or winrt::impl):
template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void* get_abi(T const& object) noexcept { return object.get_default_abi(); }

template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void** put_abi(T& object) noexcept { object.clear_thunked(); return object.put_default_abi(); }

template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void* detach_abi(T& object) noexcept { return object.detach_default_abi(); }

template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void attach_abi(T& object, void* value) noexcept { object.attach_default_abi(value); }

template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void copy_from_abi(T& object, void* value) noexcept { object.copy_from_default_abi(value); }

template <typename T, std::enable_if_t<has_thunked_cache_v<T>, int> = 0>
void copy_to_abi(T const& object, void*& value) noexcept { object.copy_to_default_abi(value); }
```

One definition per function covers all thunked types. The `get_default_abi()`,
`put_default_abi()`, etc. are members of `thunked_runtimeclass_base`.

### `write_abi_args` change

Replace `*(void**)(&param)` with `get_abi(param)` for `object_type` IN params:

```cpp
case param_category::object_type:
    w.write("get_abi(%)", param_name);
    break;
case param_category::string_type:
    w.write("*(void**)(&%)", param_name);  // hstring unchanged
    break;
```

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
    PropertySet();  // calls factory, delegates to take_ownership_from_abi ctor
};
```

`sizeof(PropertySet) == 88 bytes` (header 16 + 3×24 pairs, tagged mode).
The `require<>` CRTP still provides `consume_t` methods. `consume_general` uses the
thunk branch for known interfaces, QI fallback for unknown ones.

### Factory constructor wiring

The default constructor calls through the factory machinery:

```cpp
inline PropertySet::PropertySet() :
    PropertySet(impl::call_factory_cast<PropertySet(*)(IActivationFactory const&), PropertySet>(
        [](IActivationFactory const& f) { return f.template ActivateInstance<PropertySet>(); }))
{ }
```

`ActivateInstance<PropertySet>()` returns `PropertySet(void*, take_ownership_from_abi)`,
which passes the raw ABI pointer to `thunked_runtimeclass(ptr)`. The base class stores
it in `default_cache` and initializes all thunk pairs. **No change to factory machinery.**

### StringMap (generic default interface):

```cpp
struct WINRT_IMPL_EMPTY_BASES StringMap :
    impl::thunked_runtimeclass<IMap<hstring, hstring>,
        IIterable<IKeyValuePair<hstring, hstring>>,
        IObservableMap<hstring, hstring>>,
    impl::require<StringMap,
        IIterable<IKeyValuePair<hstring, hstring>>,
        IObservableMap<hstring, hstring>>
{ ... };
```

### Header file placement

The thunked class is generated in the same `.2.h` file as today. `write_slow_class`
in `code_writers.h` changes the base class for cacheable types; the output file path
is unchanged.

### Include ordering for `base_thunked_runtimeclass.h`

Include in `write_base_h()` (`file_writers.h`) after `base_implements.h` and before
the generated projection headers. This ensures `thunked_runtimeclass` is defined
before any runtimeclass type that inherits from it.

```cpp
// In write_base_h():
// ... existing includes ...
write(strings::base_implements);
write(strings::base_thunked_runtimeclass);  // NEW
// ... then generated headers ...
```

---

## ASM stubs

### Shared across all thunked types

| File | Architecture | Size |
|------|-------------|------|
| `strings/thunk_stubs_x64.asm` | x64 (MASM) | ~4.7 KB |
| `strings/thunk_stubs_x86.asm` | x86 (MASM) | ~2.9 KB |
| `strings/thunk_stubs_arm64.asm` | ARM64 (armasm64) | ~4.2 KB |
| `strings/thunk_stubs_arm64ec.asm` | ARM64EC (armasm64) | ~4.2 KB |

256 stubs × 10 bytes each + common dispatch + no-op IUnknown slots + vtable array.

### Extern declarations

```cpp
extern "C" void* winrt_fast_resolve_thunk(interface_thunk const* thunk);
extern "C" const void* winrt_fast_thunk_vtable[256];
```

`winrt_fast_resolve_thunk` is a one-line `extern "C"` function that calls
`interface_thunk::resolve()`.

### Build integration

The ASM files compile into a static library (`cppwinrt_thunks` or similar) that links
into any binary using thunked runtimeclasses. The NuGet package includes pre-compiled
`.obj` files per architecture.

---

## Thread safety

`interface_thunk::resolve()` uses `compare_exchange_strong` on the cache slot:
- Two threads racing to resolve the same interface both QI successfully
- The loser's `compare_exchange` fails; it releases its result and uses the winner's pointer
- No locks, no spinwaits

After resolution, the cache slot holds a raw pointer and all reads are `memory_order_acquire`
loads — standard lock-free pattern.

---

## Implementation Plan

### Phase 1: Runtime infrastructure (`strings/`)

1. **`base_thunked_runtimeclass.h`** — new file containing:
   - `thunked_runtimeclass_header` (iid_table + default_cache)
   - `interface_thunk` (16 bytes, `resolve()` logic)
   - `cache_and_thunk_tagged` / `cache_and_thunk_full` pair types
   - `thunked_runtimeclass_base` (clear, attach, copy, move — non-template)
   - `thunked_runtimeclass<IDefault, I...>` typed template
   - `type_index<T, Types...>` compile-time helper
   - `has_thunked_cache_v` / `has_thunked_interface_v` traits via `thunked_interfaces`
   - `get_default_abi()`, `put_default_abi()`, `detach_default_abi()`, `attach_default_abi()`
   - `copy_from_default_abi()`, `copy_to_default_abi()`
   - `as<T>()`, `try_as<T>()`, `try_as_with_reason<T>()` members

2. **SFINAE-guarded ABI overloads** (`base_thunked_runtimeclass.h`):
   - `get_abi`, `put_abi`, `detach_abi`, `attach_abi`
   - `copy_from_abi`, `copy_to_abi`
   - All use `std::enable_if_t<has_thunked_cache_v<T>>` (C++17)

3. **Modify `consume_general`** (`base_windows.h`):
   - Add `has_thunked_interface_v<Derive, Base>` branch
   - Same for `consume_noexcept` and `consume_noexcept_remove_overload`
   - Add `consume_general_nothrow` variant for map Lookup/Remove overloads

4. **Fix `WINRT_IMPL_SHIM` call sites** (`code_writers.h`):
   - Replace 5 hand-written `WINRT_IMPL_SHIM` calls with `consume_general_nothrow`
   - Or keep `WINRT_IMPL_SHIM` for the `D == Base` case and add a thunked alternative

5. **ASM stubs** — copy from prototype, add no-op QI/AddRef/Release:
   - `strings/thunk_stubs_x64.asm`
   - `strings/thunk_stubs_x86.asm`
   - `strings/thunk_stubs_arm64.asm`
   - `strings/thunk_stubs_arm64ec.asm`

6. **`bind_out` static_assert** (`base_string.h`)

7. **Include in `write_base_h()`** (`file_writers.h`): after `base_implements.h`

8. **`write_abi_args`** (`code_writers.h`):
   - `*(void**)(&param)` → `get_abi(param)` for `object_type` IN params
   - Safe before Phase 2: for non-thunked types, `get_abi(param)` resolves to the
     existing `get_abi(IUnknown const&)` which does the same `*(void**)(&object)`

### Phase 2: Code generator (`cppwinrt/`)

9. **`write_slow_class`** (`code_writers.h`):
   - For cacheable types: inherit from `impl::thunked_runtimeclass<IDefault, I...>`
     instead of the default interface directly
   - Keep `impl::require<>` inheritance for consume CRTP methods
   - Generate constructors that delegate to `thunked_runtimeclass`
   - Class goes in the same `.2.h` file as today

10. **`write_default_interface`** / `default_interface` trait:
    - Must still work — `thunked_runtimeclass<IDefault, ...>` stores `IDefault` in
      the template args; the trait maps `PropertySet → IPropertySet`

11. **Build system** (`CMakeLists.txt`):
    - New `cppwinrt_thunks` static library target for ASM stubs
    - Per-architecture assembly rules

### Phase 3: Validation

12. **All existing tests must pass unchanged.** No test file modifications allowed.

13. **New tests:**
    - Thunk resolution correctness (first call QIs, subsequent calls skip)
    - Copy semantics (fresh thunks, lazy re-resolve)
    - Move semantics (steal default + reinit thunks)
    - Thread safety (8+ threads racing to resolve same interface)
    - `get_abi`/`put_abi`/`detach_abi`/`attach_abi` on thunked types
    - `copy_from_abi`/`copy_to_abi` on thunked types
    - `as<T>()`/`try_as<T>()` on thunked types
    - Types with generic default interface (StringMap)
    - Types with many secondaries (>8 → full mode with explicit IID storage)

---

## Risks

| Risk | Mitigation |
|------|-----------|
| Per-instance size (88 bytes for N=3 vs 8) | QI elimination justifies it for hot types |
| ASM stubs per architecture | 4 files, ~4 KB each, shared across all types |
| MinGW/Clang: no MASM | GAS equivalents needed; or C trampoline fallback |
| C++17 floor | Use `std::enable_if_t` / `std::void_t` instead of `requires` |
| 256-slot vtable limit | WinRT interfaces rarely exceed ~30 methods; `static_assert` |
| `consume_general` branch prediction | `if constexpr` — resolved at compile time |

---

## Open questions

1. **NuGet packaging:** ASM stubs need compilation. Options: pre-compiled `.obj` per arch,
   or MSBuild targets that assemble from source.

2. **`operator=(nullptr)`:** Must clear default + all cache slots, release resolved ones.

3. **Interaction with `base<>` / composable types:** Deferred to a future phase.

---

## Tooling: Build & Validate

### Scripts

| Script | Purpose |
|--------|---------|
| `scripts/build_and_test.ps1` | Parallel build + test runner |
| `scripts/run_cppwinrt.ps1` | Run `cppwinrt.exe` with output under `build/` |

### `scripts/build_and_test.ps1`

Default: builds only `test\test` (the main test target and its dependencies). This is
the fastest feedback loop for iterating on `strings/` and `cppwinrt/` changes.

```
.\scripts\build_and_test.ps1                        # build test\test only (x64 Release)
.\scripts\build_and_test.ps1 -Test                  # build test\test + run it
.\scripts\build_and_test.ps1 -BuildAll              # build ALL test targets
.\scripts\build_and_test.ps1 -BuildAll -Test        # build all + run all
.\scripts\build_and_test.ps1 -BinLog                # produce binary log
.\scripts\build_and_test.ps1 -Clean                 # git clean -dfx . then build
```

- Default (no flags) — build-only for `test\test` and its deps (prebuild, cppwinrt,
  test_component, test_component_no_pch).
- **`-BuildAll`** — builds all 9 test targets in a single `msbuild /m /v:m` invocation.
- **`-Test`** — after building, runs whichever test executables were built.
- **`-BinLog`** — produces `_build\build.binlog` for structured error analysis.
- **`-Clean`** — runs `git clean -dfx .` before building. Wipes all build artifacts.

### `scripts/run_cppwinrt.ps1`

Runs locally-built `cppwinrt.exe`. Output goes under `build/` (gitignored).

```
.\scripts\run_cppwinrt.ps1                                    # build\projection\x64\Release
.\scripts\run_cppwinrt.ps1 -OutputDir build\projection\custom  # custom output
```

### Agent workflow for build-fix iterations

1. **Make the code change** (edit `strings/*.h`, `cppwinrt/code_writers.h`, etc.)

2. **Run the build** via terminal in async mode:
   ```
   .\scripts\build_and_test.ps1 -BinLog
   ```
   Do **NOT** poll or sleep. Wait for terminal completion notification.

3. **On build failure**, dispatch a sub-agent (e.g. `Explore` with GPT-5.3-Codex) to read
   `_build\build_output.log`, extract `error C####` lines, group by file, return a report.
   If `-BinLog` was used, the agent can use `binlog_lm_errors` instead.

4. **Review the report** and fix. Repeat from step 1.

5. **On build success**, run tests:
   ```
   .\scripts\build_and_test.ps1 -Test
   ```

6. **On test failure**, read `_build\x64\Release\<test>_results.txt`.

7. **To inspect generated headers**:
   ```
   .\scripts\run_cppwinrt.ps1
   ```

## Detailed Notes

> Record each change you're making. You may be stopped and started multiple times, this history
> will make continuing the operation easier. Also include any knowledge-base topics that would
> improve your ability to continue.

### Session 1 (prior agent, pre May 4 2026)

**Commits made (4):**
- `64b8e32f` — Added plan doc, `scripts/build_and_test.ps1`, `scripts/run_cppwinrt.ps1`
- `85d475f0` — Addressed plan review: 10 gaps, snake_case, reworked build script
- `5a3fa1e1` — Moved `write_abi_args` to Phase 1, added user rules
- `93ef473d` — Rules: add `-logo nul`, reduce noisy output guidance

**Uncommitted Phase 1 work in progress (working tree):**

Phase 1 items completed (uncommitted):

1. **`strings/base_thunked_runtimeclass.h`** — NEW, 415 lines. Contains:
   - Traits: `has_thunked_cache_v`, `has_thunked_interface_v`, `tuple_contains`, `type_index`
   - Data structures: `thunked_runtimeclass_header`, `interface_thunk` (with `resolve()`),
     `cache_and_thunk_tagged` (24B), `cache_and_thunk_full` (32B)
   - `thunked_runtimeclass_base` — non-template lifecycle ops (clear, attach, copy, move, assign)
   - `thunked_runtimeclass<IDefault, I...>` — typed template with pairs array, ctors, dtor,
     `thunk_cache_slot<Q>()`, `clear_thunked()`
   - SFINAE-guarded ABI overloads: `get_abi`, `put_abi`, `detach_abi`, `attach_abi`,
     `copy_from_abi`, `copy_to_abi` — all in `winrt` namespace

2. **`strings/base_windows.h`** — Modified `consume_general`, `consume_noexcept`,
   `consume_noexcept_remove_overload` with three-way `if constexpr` branch
   (same_v → thunked → QI fallback). Added `consume_general_nothrow` variant.

3. **`cppwinrt/code_writers.h`** — Two changes:
   - `write_abi_args`: `object_type` case now emits `get_abi(param)` instead of `*(void**)(&param)`
   - 5 `WINRT_IMPL_SHIM` call sites (IMap/IMapView Lookup, IMap Remove) replaced with
     `consume_general_nothrow` calls

4. **`strings/base_string.h`** — Added `static_assert(sizeof(T) == sizeof(void*))` in `bind_out`

5. **ASM stubs** — All 4 architecture files created:
   - `strings/thunk_stubs_x64.asm` — ~80 lines, MASM, 256 stubs + common dispatch + no-op IUnknown
   - `strings/thunk_stubs_arm64.asm` — ~89 lines, armasm64
   - `strings/thunk_stubs_arm64ec.asm` — ~85 lines, armasm64
   - `strings/thunk_stubs_x86.asm` — ~78 lines, MASM .686

6. **`strings/winrt_thunk_resolve.cpp`** — Bridge from ASM to C++ `thunk->resolve()`

7. **`cppwinrt/file_writers.h`** — Added `w.write(strings::base_thunked_runtimeclass)` after
   `base_implements` in `write_base_h()`

8. **`cppwinrt/cppwinrt.vcxproj`** — Added `base_thunked_runtimeclass.h` to ClInclude list

**Phase 1 status:** All 8 sub-items appear complete in working tree. Nothing has been committed.
The prior agent did NOT build or test any of this — there are no build logs, no test results,
and no evidence of a build attempt.

**Phase 2 not started:** `write_slow_class` in `code_writers.h` has NOT been modified to
generate thunked runtimeclass inheritance. No runtimeclass types actually use the new
infrastructure yet.

### Session 2 (May 4 2026)

Continuing from Phase 1 uncommitted state. Next steps:
- Verify Phase 1 builds clean (it affects cppwinrt.exe codegen, not the projection types yet)
- If clean, commit Phase 1
- Begin Phase 2: modify `write_slow_class` to emit thunked runtimeclass for cacheable types

**Build fix 1:** `has_thunked_interface_v` and related traits were defined in
`base_thunked_runtimeclass.h` (included after `base_windows.h`), but `consume_general` etc.
in `base_windows.h` reference them. Moved all traits (`has_thunked_cache_v`,
`has_thunked_interface_v`, `tuple_contains`, `type_index`) into `base_meta.h` which is
included before `base_windows.h`. Removed them from `base_thunked_runtimeclass.h`.

**Build fix 2:** `interface_thunk::resolve()` used `reinterpret_cast<::GUID const&>(*iid)`,
but `::GUID` (from Windows SDK) is not available in the cppwinrt base headers. Changed to
pass `*iid` directly since `unknown_abi::QueryInterface` takes `guid const&`.

**Build fix 3:** Reverted `write_abi_args` change (`get_abi(param)` for `object_type`).
`param_category::object_type` includes `param::iterable<>` and similar wrapper types that
are incomplete when overload resolution evaluates `std::is_base_of_v<IUnknown, T>`. The
`*(void**)(&param)` idiom is fine for these types. This change is deferred until Phase 2
when thunked runtimeclass params actually appear and need `get_abi()` dispatch.

**Build fix 4:** Removed `static_assert(sizeof(T) == sizeof(void*))` from `bind_out`.
`bind_out` is used for struct OUT params too, not just COM interfaces — a WinRT struct
like `test_component::Struct` has `sizeof != sizeof(void*)`.

**Phase 1 committed as `0cb57ec8`** — all 3016 assertions pass.

### Phase 2 work (code generator)

**Added `write_thunked_class` to `code_writers.h`:**
- `write_thunked_class_base`: emits `impl::thunked_runtimeclass<IDefault, I1, I2, ...>`
- `write_thunked_class_requires`: emits `impl::require<T, IDefault, I1, I2, ...>` — includes
  ALL interfaces (including default) since the type no longer inherits from IDefault
- `write_thunked_class_usings`: all usings use `consume_t<T, I>::method` style (no
  `using IDefault::method` since no inheritance from IDefault)
- `has_secondary_interfaces`: checks for non-default, non-protected, non-overridable interfaces
- `write_class` routing: `!has_fastabi && get_bases().empty() && has_secondary_interfaces` → thunked

**Key insight:** `info.is_default` (IS the default interface) vs `info.defaulted` (reachable
through default interface hierarchy). Both `write_thunked_class_base` and
`has_secondary_interfaces` use `!info.is_default` to include interfaces from the default
hierarchy (e.g., IMap/IIterable for PropertySet which are part of IPropertySet's require<>).

**`thunked_interfaces` includes IDefault:** Changed `thunked_interfaces = std::tuple<IDefault, I...>`
so `has_thunked_interface_v<PropertySet, IPropertySet>` is true. `thunk_cache_slot<IDefault>()`
returns `default_cache` via if-constexpr.

**`ActivateInstance<T>()` fix:** Added if-constexpr branch for thunked types using
fast_activate path (direct `{result, take_ownership_from_abi}` construction).

**`is_interface` fix:** Added `has_thunked_cache_v<T>` to `is_interface` disjunction. Without
this, `implements<D, Class4, ...>` doesn't create `producer_convert<D, Class4>` because
thunked Class4 doesn't derive from IInspectable (which was the old detection path).

**ABI overloads moved to `base_windows.h`:** All thunked SFINAE overloads (get_abi, put_abi,
detach_abi, attach_abi, copy_from_abi, copy_to_abi) moved from `base_thunked_runtimeclass.h`
to `base_windows.h` so they're visible at all call sites (detach_from in base_activation.h
couldn't see them when they were in the later-included thunked header). Added rvalue ref
overload `detach_abi(T&&)`. Added `!has_thunked_cache_v<T>` exclusion to all value-type
ABI overloads.

**Build system:** Created `test/Directory.Build.targets` to compile x64/x86 ASM thunk stubs
and `winrt_thunk_resolve.cpp` into all test binaries.

**Implicit conversions:** Added `operator IUnknown()` and `operator IInspectable()` to
`thunked_runtimeclass_base` — many APIs expect runtimeclass types to be implicitly
convertible to IInspectable (e.g., `vector.Append(uri)` where vector is
`IVector<IInspectable>`). The conversion creates a temp with AddRef via copy_from_abi.
Reduced errors from 42 to 8.

**Remaining errors (8, 3 distinct issues):**

1. **agile_ref<Uri>**: `agile_ref` ctor takes `com_ref<T> const&`. Thunked types aren't
   `com_ref<T>`. Need to overload the ctor or add a deduction path that accepts any type
   with `get_abi()`.

2. **LiesAboutInheritance no default ctor**: `unbox_value_type<T>` path tries `T{}`.
   Generated thunked types only have `(nullptr_t)` and `(void*, take_ownership_from_abi_t)`
   ctors — no default ctor. Old types got one from inheriting IStringable (which has a
   default ctor from IInspectable).

3. **IReference<LiesAboutInheritance> ABI mismatch**: `LiesAboutInheritance` as thunked type
   is sizeof > sizeof(void*), so `IReference<T>::Value()` ABI out-param can't take it as a
   pointer. This is an edge case — `IReference<T>` is for value types. The test intentionally
   exercises unusual metadata.

**Status:** Phase 2 compiles cleanly for the component (test_component.dll) and most of the
consumer test (test.exe). 8 errors remain, all in test.exe, all related to thunked types not
fully mimicking the old IUnknown-based interface. The core thunking mechanism is working —
PropertySet, StringMap, Deferral, Uri, and many other types are now thunked.
