# C++/WinRT Consume Mixins: Design & Measurements

This document describes how projected types expose their methods and conversions after replacing the CRTP consume
templates (`impl::consume_t<D, I>`, `impl::require<D, I...>`, `impl::base<D, B...>`) with non-template *consume
mixins*. It records the goals, the design, the alternatives that were measured, the results across build scenarios,
compatibility notes, future work, and a proposed PR staging plan. It is intended for cppwinrt maintainers and
contributors.

## Summary

Consuming the projection no longer stamps out a specialization of every consume template for every type that inherits
it. Each interface instead gets a few plain structs (templated only on the interface's own generic parameters) that are
shared by every type requiring the interface. Object layout and the public surface of projected types are unchanged,
behavior differs only by one fewer `QueryInterface` call in one case, and name collisions remain ambiguous exactly as
before (see [Compatibility](#compatibility)).

Windows SDK projection, MSVC 14.51 (VS 2026), C++17, median of 3 runs:

| | master | consume mixins | change |
|-|-|-|-|
| Blank App PCH, Debug: time / size / peak memory | 22.4 s / 1,130 MB / 1,229 MB | 17.8 s / 798 MB / 895 MB | -20% / -29% / -27% |
| Blank App PCH, Release `/O2 /GL`: time / size + `pch.obj` / peak memory | 21.2 s / 1,118 + 135 MB / 1,138 MB | 16.6 s / 785 + 102 MB / 811 MB | -22% / -29% / -29% |
| `Windows.UI.Xaml.Controls.h` TU, Debug | 17.5 s / 991 MB peak | 12.9 s / 696 MB peak | -26% / -30% |
| C++20 modules, Blank App import closure (67 modules), Debug: IFC bytes / critical path / peak memory | 229 MB / 58-59 s / 1,230 MB | 176 MB / 51-52 s / 1,034 MB | -23% / -12% / -16% |
| clang-cl 22, Blank App PCH: time / size / peak memory | 11.0 s / 163 MB / 1,454 MB | 9.2 s / 112 MB / 853 MB | -17% / -31% / -41% |

No new warnings (MSVC `/Wall` x64 and x86, `/analyze`, clang `-Wall -Wextra`), identical runtime behavior under MSVC
and clang, and no runtime regressions (see [Results](#results)).

## Motivation

### Priorities

Large XAML projects build several projects in parallel, each with a precompiled header that includes the XAML
headers. The goals of this work, in priority order:

1. **Bytes written to disk.** PCHs (and module IFCs) of a gigabyte or more cost time to write and read and exhaust disk
   space in constrained build environments.
2. **Wall-clock time.** The PCH is usually the first item in a project, builds single-threaded, and blocks the rest of
   the project. Cumulative per-TU time also matters.
3. **Peak memory.** Parallel builds (`msbuild /m`, `cl /MP`) run out of memory, so customers limit parallelism, which
   makes builds slower.

Constraints: no degradation of app runtime behavior or performance; preserve the semantics of projected types
(automatic `QueryInterface` only when needed, implicit conversions to required interfaces and base classes, ambiguous
name collisions remain ambiguous with an actionable error, headers compile even when they contain ambiguous members);
prefer readability and usability over small savings. Disruptive changes are acceptable for savings of hundreds of
megabytes, not for kilobytes.

### The cost of CRTP consume templates

Before this change, `consume_X<D>` held the methods of interface `X`, and a type `D` that exposes `X` derived from
`consume_X<D>`. `D` decided at compile time whether a call needed a `QueryInterface`:

```cpp
template <typename D> struct consume_Windows_UI_Xaml_IDependencyObject2
{
    auto RegisterPropertyChangedCallback(DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const;
    ...
};

template <typename D> auto consume_Windows_UI_Xaml_IDependencyObject2<D>::RegisterPropertyChangedCallback(...) const
{
    std::int64_t result{};
    consume_general<IDependencyObject2, D>(static_cast<D const*>(this), &abi_t<IDependencyObject2>::RegisterPropertyChangedCallback, ...);
    return result;
}

struct FrameworkElement : IFrameworkElement,
    impl::base<FrameworkElement, UIElement, DependencyObject>,
    impl::require<FrameworkElement, IFrameworkElement2, ..., IDependencyObject, IDependencyObject2>
```

`impl::require<D, I...>` derives from `require_one<D, I>` (a conversion operator) and `consume_X<D>` for each `I`, so
every class instantiates every consume template it exposes, with all of their member declarations. `DependencyObject`,
`UIElement`, `FrameworkElement`, `Control`, `Button`, ... each instantiate their own `consume_..._IDependencyObject2<D>`,
`require_one<D, IDependencyObject2>`, and so on, although all of them do the same thing.

`/d1reportTime` of a translation unit that only includes `Windows.UI.Xaml.Controls.h` (15.3 s of front-end time):

| | instantiations | exclusive time |
|-|-|-|
| `consume_X<D>` | 15,809 | 2.63 s |
| `require_one<D, I>` | 8,401 | 0.82 s |
| `require<D, I...>`, `base<D, B...>`, `base_one<D, B>` | 3,639 | 0.52 s |

The `QueryInterface` path itself (`consume_general`, `try_as_with_reason`) was a minor cost (508 `consume_general`
instantiations, 0.14 s): class template members are only instantiated when called.

## Design

### Consume mixins

Each interface `X` gets up to three non-template structs in `impl::` (templated only on `X`'s own generic parameters),
and each class `C` that can be derived from gets one:

| struct | contents | inherited by |
|-|-|-|
| `direct_X` | `X`'s methods, which call `X`'s ABI directly | `X` only |
| `require_X` | `operator X()`, plus forwarders that query for `X` and call `direct_X` | every interface and class that requires `X` |
| `overrides_X` | default implementations of an overridable `X` | composable implementation types (`XxxT<D>`) |
| `base_C` | `operator C()` | classes that derive from `C` |

Generated code (abridged):

```cpp
// impl/Windows.UI.Xaml.0.h
struct direct_Windows_UI_Xaml_IDependencyObject2
{
    auto RegisterPropertyChangedCallback(DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const;
    auto UnregisterPropertyChangedCallback(DependencyProperty const& dp, std::int64_t token) const;
};
struct require_Windows_UI_Xaml_IDependencyObject2
{
    operator IDependencyObject2() const noexcept;
    auto RegisterPropertyChangedCallback(DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const;
    auto UnregisterPropertyChangedCallback(DependencyProperty const& dp, std::int64_t token) const;
};
struct base_Windows_UI_Xaml_DependencyObject
{
    operator DependencyObject() const noexcept;
};

// impl/Windows.UI.Xaml.1.h
struct WINRT_IMPL_EMPTY_BASES IDependencyObject2 : IInspectable, impl::direct_Windows_UI_Xaml_IDependencyObject2 { ... };

// impl/Windows.UI.Xaml.2.h
struct WINRT_IMPL_EMPTY_BASES DependencyObject : IDependencyObject, impl::require_Windows_UI_Xaml_IDependencyObject2 { ... };
struct WINRT_IMPL_EMPTY_BASES FrameworkElement : IFrameworkElement,
    impl::base_Windows_UI_Xaml_UIElement, impl::base_Windows_UI_Xaml_DependencyObject,
    impl::require_Windows_UI_Xaml_IFrameworkElement2, ..., impl::require_Windows_UI_Xaml_IDependencyObject2 { ... };

// Windows.UI.Xaml.h
inline auto direct_Windows_UI_Xaml_IDependencyObject2::RegisterPropertyChangedCallback(...) const
{
    std::int64_t result{};
    check_abi((*(abi_t<IDependencyObject2>**)this)->RegisterPropertyChangedCallback(*(void**)(&dp), *(void**)(&callback), &result));
    return result;
}
inline auto require_Windows_UI_Xaml_IDependencyObject2::RegisterPropertyChangedCallback(...) const
{
    return IDependencyObject2{ impl::as_abi<IDependencyObject2>(*(void* const*)this, impl::guid_v<IDependencyObject2>), take_ownership_from_abi }
        .direct_Windows_UI_Xaml_IDependencyObject2::RegisterPropertyChangedCallback(dp, callback);
}
```

A class inherits its default interface (which inherits `direct_X`), so default-interface calls go straight to the ABI
with no query, as before. Calls through any other interface go through the shared `require_X` forwarder, which queries
once per call, as `consume_general` did. The definitions of the conversion operators follow the types they produce:
`require_X::operator X()` in `.1.h`, `base_C::operator C()` in `.2.h`.

### How a mixin finds the object

The mixins are empty and are bases of the projected object, so they sit at offset 0 and read the object's ABI pointer as
`*(void* const*)this`. This relies on:

- `WINRT_IMPL_EMPTY_BASES` (`__declspec(empty_bases)`) on MSVC and clang-cl, and the empty base optimization on the
  Itanium ABI, which places distinct empty bases at offset 0;
- every mixin type appearing at most once among a type's bases: require lists (including those of fast ABI classes)
  exclude interfaces that are already reached through the default interface.

Projected objects remain one pointer in size.

### Which interfaces get mixins

`get_consume_usage` decides from metadata, without whole-program knowledge:

- an interface that is not `exclusiveto` a class, or that another interface requires, gets `require_X`;
- an exclusive interface gets `require_X` if its class implements it as a non-default instance interface (including
  protected interfaces), or if it is the default interface of a class that can be derived from;
- statics and factory interfaces get no mixins;
- an overridable interface gets `overrides_X`;
- classes with a default interface that are not sealed get `base_C`.

Emitting a mixin for every interface instead adds about 15% to the header cost of the XAML closure (see
[Mixin scope](#mixin-scope)).

### Name collisions stay ambiguous

Every source of a member name is a separate base at the same level: `direct_X` for the interface's own methods and one
`require_R` per required interface. Unqualified calls that are ambiguous today are still ambiguous, with the same kind
of error (`C2385` for an ambiguous lookup, or `C2668` where cppwinrt's using-declarations merge the overload sets), and
headers with ambiguous members still compile. The using-declarations now name the mixins
(`using impl::require_..._IFoo::Method;`), and so do the errors.

Two rules keep this exact:

- nothing that declares interface methods is layered: a derived scope would hide a base member with the same signature,
  silently preferring one;
- candidates are all non-templates, except the `auto_revoke` overloads, which are member templates on both sides
  (`template <typename R = E_revoker>` in `direct_X`, `template <typename W = X>` in `require_X`), because overload
  resolution prefers a non-template over a template.

A conformance suite (12 placements of a colliding member, same and different signatures) gives the same result as
master: every same-signature call is rejected. The only true ambiguity in the Windows SDK,
`Windows.UI.Xaml.Controls.Maps.MapControl::Style()`, is still rejected (`C2668`, ambiguous between `IMapControl` and
`IFrameworkElement`).

### Iteration and other members cppwinrt adds

- `begin()`/`end()` for `IIterable<T>` and `IBindableIterable` are member templates
  (`template <typename D = Self> auto begin() const`) on every interface, class, and composable `XxxT<D>` whose require
  list includes an iterable, so `fast_iterator` is still chosen from the most derived type when it has `GetAt`.
- The iterator operators of `IIterator<T>` are members of `IIterator<T>`; those of `IBindableIterator` are declared on
  it and defined in `base_xaml_typename.h`.
- `IMap`/`IMapView` `TryLookup`/`TryRemove` call the ABI directly in `direct_X` and forward through a query in
  `require_X`.
- The `IAsync*` `get()`, `get_unchecked()`, and `wait_for()` are defined for `direct_X` in
  `base_coroutine_foundation.h`, which also defines their `require_X` forwarders.
- `IBuffer`/`IMemoryBufferReference` `data()` reinterpret the object as `IUnknown`.

### Composable implementation types

`XxxT<D>` (and component types deriving from a composable class in another component) used `impl::require<D, ...>`,
`protected impl::require<D, ...>`, `impl::base<D, ...>`, and `IFooOverridesT<D>`. Their mixins must reach the composed
inner object, not `this`. The class's mixins are gathered into one named, non-template aggregate:

```cpp
struct WINRT_IMPL_EMPTY_BASES composable_Windows_UI_Xaml_Controls_Button :
    require_Windows_UI_Xaml_Controls_IButton, ..., // public requires
    base_Windows_UI_Xaml_Controls_Button, base_Windows_UI_Xaml_Controls_Primitives_ButtonBase, ...,
    overrides_Windows_UI_Xaml_Controls_IContentControlOverrides, ...,
    protected require_Windows_UI_Xaml_Controls_IControlProtected, ...
{
};

template <typename D, typename... Interfaces>
struct ButtonT : implements<D, impl::composing_mixins<impl::composable_Windows_UI_Xaml_Controls_Button>,
    IContentControlOverrides, ..., composing, Interfaces...>
```

`root_implements_composing_outer<true, M>` derives from the shared non-template core `<true, void>` (which holds
`m_inner` and `try_as`) and from `M`, so the mixins share `m_inner`'s address. Object layout is unchanged. Component
`_base` types that derive from an external composable class pass `impl::composing_mixins<impl::composable_Base>` the
same way. `IFooOverridesT<D>` is still generated for source compatibility but is no longer used by `XxxT<D>`.

MSVC ignores `__declspec(empty_bases)` on a partial specialization unless the primary template declares it too; the
primary `root_implements_composing_outer` therefore carries `WINRT_IMPL_EMPTY_BASES`.

### QueryInterface helpers and `WINRT_DIAGNOSTICS`

`base_error.h` adds `check_abi` (calls `check_hresult` only on failure, without a source-location argument per method
body) and `try_as_abi`/`as_abi` (null-safe `QueryInterface` given an ABI pointer and an IID). The forwarders call
`impl::as_abi<X>(p, impl::guid_v<X>)`: a template on `X` whose instantiation only records `name_of<X>()` for
`WINRT_DIAGNOSTICS` and forwards to the non-template helper, so diagnostics count queries by name exactly as before.
Making these helpers non-template would save about 10 MB of the Blank App PCH, which is not worth the loss of readable
diagnostics.

## Alternatives considered

### Synthetic benchmark

Designs were first compared on a synthetic header that reproduces the shape of the `Windows.UI.Xaml.Controls.h`
closure (62 namespaces) on the real `base.h`. C++latest, Debug, 3-run medians:

| design | header TU | PCH | usage TU (`/Yu`) |
|-|-|-|-|
| A: master | 13.4 s | 819 MB | 0.87 s |
| A2: `require_one` folded into `consume` | 12.9 s | 789 MB | 0.81 s |
| B1: deducing `this` (`template <typename D> auto M(this D const&)`), keeping `require` | 10.7 s | 720 MB | 0.84 s |
| B2: deducing `this`, no `require_one` | 9.7 s | 656 MB | 0.91 s |
| C1-C3: layered "other interfaces" / "default interface" structs, with forwarders (C2) and interface methods (C3) as member templates compiled only when used | 9.7-11.8 s | 632-680 MB | 0.28-0.47 s |
| C4 / C4e: C3 with empty mixins, so a class can derive from its default interface (C4e: interface methods are ordinary functions) | 8.9 / 9.6 s | 597 / 557 MB | 0.43 / 0.35 s |

Deducing `this` removes the class template instantiations but still instantiates every member template per calling type
when used, and calling code gets no faster. The layered designs were much faster, so later rounds refined them (C++17,
Debug, 3-run medians):

| design | header TU | PCH | peak memory | usage TU |
|-|-|-|-|-|
| A | 11.2 s | 729 MB | 813 MB | 0.78 s |
| C4 / C4e | 7.4 / 7.9 s | 513 / 470 MB | 545 / 514 MB | 0.41 / 0.33 s |
| C5 / C5e: C4/C4e with fewer template instantiations (non-template QI helper, plain method bodies, named ABI structs) | 7.2 / 7.2 s | 505 / 454 MB | 533 / 490 MB | 0.35 / 0.31 s |
| C6 / C6e: flat (no layering), with forwarders (and, in C6, interface methods) as member templates compiled only when used | 7.3 / 7.4 s | 515 / 463 MB | 547 / 499 MB | 0.36 / 0.32 s |
| **C6n**: flat, no member templates except `auto_revoke` | 7.4 s | **440 MB** | **476 MB** | **0.30 s** |

Deferring bodies with member templates did not pay off: C6 is no faster than C6n, its PCH is 17% larger, and calling
code is slower, because the templates are stored in the PCH and instantiated again by every TU that calls them. Naming
interface ids with literal GUIDs or named constants instead of `guid_v<I>` gave no gain.

### Collision semantics

The layered designs (C4, C5, C5e) silently picked one candidate in 8 to 11 of the 12 same-signature placements of the
conformance suite (a member declared in a derived layer hides a base member with the same signature, even through
using-declarations), and C6e in 4. C6 and C6n reject all 12, like master. C6n was chosen: it preserves the semantics and
has the smallest PCH and peak memory.

### Composable implementation types

| option | outcome |
|-|-|
| a non-owning pointer to the inner object in every implementation type | rejected: changes object layout |
| I0: keep CRTP consume templates only for `XxxT<D>` | consumers pay about +19% header time to parse both designs |
| I1: mixin aggregate overlaid on `m_inner` | layout unchanged; long `implements<>` symbols, +29% authoring `.obj` |
| I1t / I1o: keyed by class; overridable defaults as `overrides_X` mixins | shorter symbols; protected interfaces hidden behind a trait |
| **I1n**: one named aggregate `composable_C` per composable class | readable, short diagnostics, no per-class template instantiation |

Synthetic, C++17 Debug: header TU A 11.9 s, I0 9.8 s, I1o 8.3 s; I1n vs I1o: header 8.19 vs 8.31 s, PCH 494 vs 501 MB.

### Mixin scope

Emitting mixins only for the interfaces the closure actually requires (not knowable when generating one namespace):
header 7.6 s / PCH 440 MB. The metadata rules above: 8.0 s / 453 MB. A mixin for every interface: 9.2 s / 491 MB.

### QueryInterface helper: template vs non-template

On the real projection, with the forwarders' `as_abi` calls written three ways (12,734 call sites):

| | Controls.h PCH | Blank App PCH | Blank App PCH peak memory |
|-|-|-|-|
| non-template `impl::as_abi(p, impl::guid_v<X>)`, diagnostics keyed by IID | 622.3 MB | 787.8 MB | 882 MB |
| **`impl::as_abi<X>(p, impl::guid_v<X>)`**, diagnostics keyed by name | 630.8 MB | 798.2 MB | 895 MB |
| `impl::as_abi<X>(p)` with `guid_of<X>()` inside | 640.1 MB | 803.8 MB | 903 MB |

Build time differs by at most 0.1-0.3 s.

## Results

Windows SDK metadata (`cppwinrt -in local`), MSVC 14.51.36231 (VS 2026), clang-cl 22.1.3, AMD EPYC with 16 logical
processors and 64 GB. Median of 3 runs unless noted; peak memory is the peak commit of the compiler process (for clang
PCH builds, of the compiler child process).

### MSVC, Debug (`/Od /MDd`), C++17

| | master | consume mixins | change |
|-|-|-|-|
| TU including `Windows.UI.Xaml.Controls.h` | 17.5 s, 991 MB peak | 12.9 s, 696 MB peak | -26% / -30% |
| PCH of `Windows.UI.Xaml.Controls.h` | 17.4 s, 906 MB, 1,022 MB peak | 13.1 s, 631 MB, 723 MB peak | -25% / -30% / -29% |
| Blank App PCH | 22.4 s, 1,130 MB, 1,229 MB peak | 17.8 s, 798 MB, 895 MB peak | -20% / -29% / -27% |
| code-behind TU (`/Yu`) | 0.92 s, 2.5 MB `.obj` | 0.75 s, 2.2 MB | -18% |
| 1 custom control (`/Yu`) | 0.54 s | 0.41 s | -24% |
| 10 mixed / 10 `Button`-derived controls (`/Yu`) | 1.79 / 1.77 s, 7.8 / 8.6 MB | 1.17 / 1.12 s, 5.8 / 6.2 MB | -35% / -37% |
| `/Yu` peak memory (maps the PCH) | 1.1 GB | 0.8 GB | -29% |

### MSVC, Release (`/O2 /Oi /GL /Gy /MD`), C++17

The Blank App PCH, the code-behind and 20 custom controls with `/Yu`, and an LTCG link of them:

| | master | consume mixins | change |
|-|-|-|-|
| Blank App PCH | 21.2 s, 1,118 MB, 1,138 MB peak | 16.6 s, 785 MB, 811 MB peak | -22% / -30% / -29% |
| `pch.obj` (LTCG IL) | 134.6 MB | 102.1 MB | -24% |
| code-behind / 10 mixed / 10 `Button` controls (`/Yu`) | 2.01 / 1.59 / 1.56 s | 1.73 / 0.98 / 0.93 s | -14% / -38% / -40% |
| link `/LTCG` | 4.4 s (32.6 s CPU), 519 MB | 3.3 s (23.5 s CPU), 447 MB | -25% |
| linked exe | 868 KB | 513 KB | -41% |

The exe shrinks because with master every custom control instantiates its own copy of the consume code it calls, which
identical COMDAT folding often cannot merge; the mixins' forwarders are shared.

### C++20 modules

The import closure of the Blank App namespaces (67 modules: 35 with declarations, including the `Windows.UI.Xaml` and
`Windows.ApplicationModel` cycle modules, and 32 re-export stubs), built one at a time in dependency order, Debug,
`/std:c++latest`, 2 runs:

| | master | consume mixins | change |
|-|-|-|-|
| IFC bytes | 228.8 MB | 176.2 MB | -23% |
| serial build / critical path | 69-70 s / 58-59 s | 62-63 s / 51-52 s | -10% / -12% |
| max peak memory | 1,230 MB | 1,034 MB | -16% |
| `winrt.Windows.UI.Xaml` (14 namespaces) | 24.2 s, 86.3 MB IFC | 19.1 s, 69.7 MB | -21% / -19% |
| `winrt.Windows.ApplicationModel` | 20.5 s, 92.1 MB IFC | 17.7 s, 67.2 MB | -14% / -27% |
| code-behind TU importing the modules | 3.42 s, 310 MB | 2.96 s, 283 MB | -13% |
| 10 `Button` controls importing the modules | 2.52 s, 251 MB | 1.84 s, 219 MB | -27% |

Module object files grow from 7.5 to 10.0 MB, probably because the non-template inline definitions in a module's
purview are compiled into its object file.

### clang-cl 22, Debug, C++17

| | master | consume mixins | change |
|-|-|-|-|
| TU including `Windows.UI.Xaml.Controls.h` | 6.45 s, 699 MB | 5.52 s, 442 MB | -14% / -37% |
| PCH of `Windows.UI.Xaml.Controls.h` | 9.0 s, 138 MB, 1,011 MB peak | 7.1 s, 88 MB, 733 MB peak | -20% / -36% / -28% |
| Blank App PCH | 11.0 s, 163 MB, 1,454 MB peak | 9.2 s, 112 MB, 853 MB peak | -17% / -31% / -41% |
| code-behind / 10 mixed / 10 `Button` controls (`/Yu`) | 1.53 / 1.96 / 2.03 s | 1.33 / 1.52 / 1.58 s | -13% / -22% / -22% |

### Runtime

Release (`/O2 /GL`, LTCG), in-process objects, nanoseconds per operation, median of 3 interleaved rounds:

| | master | consume mixins |
|-|-|-|
| default-interface call | 33.0 | 32.9 |
| call through a required interface (query, call, release) | 14.6 | 14.7 |
| generic required-interface call (`IMap::Size`) | 24.8 | 24.1 |
| conversion to a required interface | 10.4 | 10.6 |
| event add and remove through a required interface | 1,796 | 1,787 |
| `auto_revoke` registration through a required interface | 1,886 | 1,858 |
| `auto_revoke` registration through the interface itself | 1,833 | 1,829 |

Forwarded calls compile to fewer instructions (38 instead of 48 at `/O2`). `auto_revoke` through a required interface
makes one fewer `QueryInterface` call: master queried once to register and again to convert the class to the interface
for the revoker; `require_X` queries once and builds the revoker from that interface.

### Where the time goes now

`/d1reportTime` of the `Windows.UI.Xaml.Controls.h` TU (10.8 s of front-end time; 15.3 s with master):

| | entries | exclusive time |
|-|-|-|
| class member functions (constructors, statics) | 9,173 | 1.27 s |
| factory helpers for statics and constructors (`call_factory`, ...) | 2,323 | 0.93 s |
| `direct_X` method bodies | 5,071 | 0.82 s |
| `require_X` forwarders | 3,689 | 0.63 s |
| lambdas (closures and their `operator()`) | 4,804 | 0.44 s |
| `as_abi<X>`/`try_as_abi<X>` | 1,920 | 0.04 s |

## Validation

- All 341 namespace headers compile on their own at `/W4` in C++17 and C++20 with no warnings.
- `build_test_all.cmd x64 Release` (all 15 builds, including natvis and the NuGet module tests) and
  `test_cpp20_module` pass; all tests pass except `test_old`'s privilege test, which fails the same way on master in a
  non-elevated shell.
- Warnings, using the recipe of #1620 (`/Wall` with its `/wd` list) on #1620's repro, a runtime test, the code-behind and
  authoring TUs, and one TU including all 341 headers: identical warning sets to master on x64 (8,317 locations) and x86
  (8,326); `/analyze` identical (no analyzer findings); clang identical (8,850 locations, almost all
  `-Wnon-virtual-dtor`, tracked by #1620/#1623).
- A runtime test on real objects (collections, `PropertySet`, `ValueSet`, `StringMap`, JSON, `Uri`, streams, async,
  events, iterators, errors, in-process `QueryInterface` counts) produces identical output to master under MSVC and
  clang. With `WINRT_DIAGNOSTICS`, the query counts by name are identical except for the `auto_revoke` case above.
- The composable tests (`old_tests/UnitTests/Composable.cpp`: overrides, protected members, overridable defaults,
  derived classes) pass with MSVC (in `test_old`) and with clang-cl against the generated projection.

## Compatibility

- **Public surface.** Projected interfaces and classes have the same members, conversions, and constructors. Member
  function pointers to projected methods still work (the methods are not templates).
- **ABI and layout.** Unchanged: projected objects are one pointer; implementation types keep their size.
- **Internals.** `impl::consume`, `impl::consume_t`, `impl::require`, `impl::require_one`, `impl::base`,
  `impl::base_one`, `impl::consume_general`, `impl::consume_noexcept`, `impl::consume_noexcept_remove_overload`, and
  `WINRT_IMPL_SHIM` are removed; code that names them (such as `test/old_tests/UnitTests/casts.cpp`) must use the new
  names.
- **Behavior.** `auto_revoke` through a required interface makes one fewer `QueryInterface` call.
- **Implementation types.** Names declared by `implements<>` (`QueryInterface`, `AddRef`, `Release`, `GetIids`, ...)
  now hide same-named projected methods in `XxxT<D>` instead of being ambiguous with them, because the mixins are bases
  of `root_implements`. No composable class in the Windows SDK has such a method (`Release` exists only on sealed
  classes); a component could.
- **Modules.** Module structure is unchanged. A consumer that names a type from a module it does not import
  (`winrt::Windows::UI::Color` with only the XAML modules imported) happened to compile against the new modules but not
  master's; this is not a supported pattern either way.
- **Generated files** are 2.6% larger on disk (62.5 vs 60.9 MB), mostly forwarder definitions.

## Future work

- **Factory lease for statics and constructors.** Every runtime class static and constructor passes its own lambda to
  `impl::call_factory`, instantiating the factory cache's slow path per method (2,323 helper instantiations and 1,605
  lambda types in the Controls.h TU). A prototype replaces them with a temporary `impl::factory_lease<C, I>` per call
  (`impl::factory_lease<Grid, IGridStatics>().get().GetRow(element)`), holding the cache guard or, for factories that
  are not agile, an owning reference. It saves 2.0 s of the Blank App PCH (-11%) and 1.6 s of the Controls.h TU (-13%),
  but only 20 MB of PCH (-2.6%) and 2.5% peak memory. Runtime is within 1%, with 1-5 more instructions on the fast path
  than today. It touches concurrency-sensitive code and is independent of the consume mixins, so it would be its own
  change.
- **Lazy consume bodies (not promising).** `direct_X` and `require_X` members are non-template inline functions, so their
  bodies are compiled whether or not they are called (about 2 s of the Controls.h TU, including their class
  definitions), whereas master's consume members were only instantiated when called. Making them member templates again
  was measured in the synthetic benchmark (C6 vs C6n): no faster, a 17% larger PCH, and slower calling code. It would
  also be source-breaking for code that takes `&IFoo::Method`.
- **Small items.** `base_C::operator C()` uses `guid_of<C>()`, one function template instantiation per class that can be
  derived from; it could use the default interface's `impl::guid_v<I>` directly (well under 1%).
- **Nested aggregates.** `composable_C` could derive from its base class's aggregate instead of listing every mixin, as
  long as no mixin appears twice.

## PR staging plan

The branch's first code commit (`WINRT_DIAGNOSTICS` keyed by IID) and its last (restoring name-keyed diagnostics)
cancel out and should be dropped, folding the templated helpers into the first PR:

1. **QueryInterface helpers and `composing_mixins`** (`strings/base_error.h`, `strings/base_implements.h`). Additive;
   no generated-code change, so reviewable on its own.
2. **Consume mixins in the generator** (`cppwinrt/code_writers.h`, `component_writers.h`, `file_writers.h`; the strings
   whose definitions move with the generated code: `base_collections.h`, `base_coroutine_foundation.h`,
   `base_xaml_typename.h`; `test/old_tests/UnitTests/casts.cpp`; this document). This has to be one change: removing the
   CRTP bases from classes also requires moving `XxxT<D>` and component bases, or else generating both shapes in the
   interim.
3. **Remove the CRTP consume machinery** (`strings/base_meta.h`, `base_windows.h`, `base_macros.h`).

Size: generator +563/-407 lines (mostly `code_writers.h`), strings +199/-147, tests +2/-2.

Validation still to do before opening PRs: the v143 (VS 2022) toolset; ARM64 and full x86 test runs; GCC/MinGW (the
Itanium ABI layout assumptions); the WinUI 3 (`Microsoft.UI.Xaml`) projection, both for correctness and to confirm the
gains.
