# C++/WinRT Consume Mixins: Design & Measurements

This document describes a change to the code that cppwinrt generates to give projected types their methods and
conversions: the CRTP *consume templates* (`impl::consume_t<D, I>`, `impl::require<D, I...>`, `impl::base<D, B...>`)
are replaced with non-template *consume mixins*. It records the goals, the generated code before and after for each part
of the design, the alternatives that were measured, the results across build scenarios, compatibility notes, future
work, and a proposed PR staging plan.

It is intended for cppwinrt maintainers and contributors. It assumes familiarity with using C++/WinRT, but not with the
generated headers: [Background](#background) introduces them, and each part of the [Design](#design) shows the generated
code before and after the change.

## Summary

Consuming the projection no longer stamps out a specialization of every consume template for every type that inherits
it. Each interface instead gets a few plain structs (templated only on the interface's own generic parameters) that are
shared by every type that exposes the interface. Object layout and the public surface of projected types are unchanged,
behavior differs only by one fewer `QueryInterface` call in one case, and name collisions remain ambiguous exactly as
before (see [Compatibility](#compatibility)).

Projection of the Windows platform metadata, MSVC 14.51 (VS 2026), C++17, median of 3 runs. The rows are defined in
[Measurement setup](#measurement-setup). In brief: the *Blank App PCH* is a precompiled header of the ten `winrt/`
headers that the `pch.h` of Visual Studio's *Blank App (C++/WinRT)* template includes, and the
*`Windows.UI.Xaml.Controls.h` TU* is a source file that includes only that header, compiled without a PCH.

| | master | consume mixins | change |
|-|-|-|-|
| Blank App PCH, Debug: time / size / peak memory | 22.4 s / 1,130 MB / 1,229 MB | 17.8 s / 798 MB / 895 MB | -20% / -29% / -27% |
| Blank App PCH, Release `/O2 /GL`: time / size + `pch.obj` / peak memory | 21.2 s / 1,118 + 135 MB / 1,138 MB | 16.6 s / 785 + 102 MB / 811 MB | -22% / -29% / -29% |
| `Windows.UI.Xaml.Controls.h` TU, Debug: time / peak memory | 17.5 s / 991 MB | 12.9 s / 696 MB | -26% / -30% |
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

## Background

### Projected types are smart pointers

Every projected interface and runtime class is a smart pointer the size of one pointer: it holds one COM interface
pointer, in the `m_ptr` member it inherits from `winrt::Windows::Foundation::IUnknown`. A projected interface such as
`IDependencyObject2` holds an `IDependencyObject2` pointer. A runtime class holds a pointer to its *default interface*
and derives from the projected default interface, so `DependencyObject` holds an `IDependencyObject` pointer:

```cpp
struct IUnknown { /* AddRef, Release, as, try_as, ... */ private: impl::unknown_abi* m_ptr{}; };
struct IInspectable : IUnknown { /* constructors */ };
struct IDependencyObject : IInspectable, /* IDependencyObject's methods */ { /* constructors */ };
struct DependencyObject : IDependencyObject, /* methods and conversions of its other interfaces */ { /* constructors, statics */ };
```

A method of the interface that `m_ptr` points to is called directly through that interface's vtable. A method of any
other interface that the object implements needs a `QueryInterface` call for that interface first, then the call, then
a `Release` of the pointer that `QueryInterface` returned.

### What a projected type exposes

- An **interface** has its own methods and those of the interfaces it *requires* in metadata (`IVectorView<T>`
  requires `IIterable<T>`), and converts implicitly to those interfaces.
- A **runtime class** has the methods of its default interface; of the other interfaces it implements
  (`DependencyObject` also implements `IDependencyObject2`); and of all interfaces of its base classes. `Button` has the
  members of `ButtonBase`, `ContentControl`, `Control`, `FrameworkElement`, `UIElement` and `DependencyObject`: 30
  interfaces in all. A class converts implicitly to each of those interfaces and to each of its base classes.

Calls through a class's default interface go straight to the ABI; all others query first. The generated code decides
which at compile time.

### Terms

| term | meaning |
|-|-|
| ABI | the COM-level form of an interface. `impl::abi_t<I>` is the struct of `I`'s vtable functions, which take ABI types and return an `HRESULT` |
| default interface | the interface a runtime class object points to, usually `IClassName` |
| required interface | an interface whose members a type exposes besides its own (or its default interface's): for an interface, the interfaces it requires; for a class, its other interfaces and the interfaces of its base classes |
| exclusive interface | an interface marked `[exclusiveto(C)]` in metadata, which only class `C` implements |
| statics and factory interfaces | exclusive interfaces implemented by a class's activation factory, for its static members (`IGridStatics`) and constructors (`IButtonFactory`) |
| composable class | a runtime class that is not sealed, so it can be derived from, as most XAML classes |
| implementation type | a C++ type written with `winrt::implements`. One that derives from a composable class uses the generated base `XxxT<D>`: `struct MyButton : ButtonT<MyButton>` |
| overridable interface | an interface of a composable class that a derived type can implement to override behavior (`IControlOverrides::OnApplyTemplate`) |
| protected interface | an interface of a composable class that only derived types can call (`IControlProtected::DefaultStyleKey`) |
| CRTP | the curiously recurring template pattern: a base class template takes the derived type as a parameter (`struct Foo : Base<Foo>`), so the base can `static_cast` itself to the derived type |

### Where the generated code lives

Each namespace gets four headers:

| header | contents |
|-|-|
| `impl/<ns>.0.h` | ABI declarations and the consume templates (now the consume mixins) |
| `impl/<ns>.1.h` | interface types |
| `impl/<ns>.2.h` | runtime classes, structs, and delegates |
| `<ns>.h` | method bodies, and the implementation-type bases `XxxT<D>` |

`winrt/Windows.UI.Xaml.Controls.h` includes the headers of 62 namespaces.

The samples below are copied from the generated headers, with namespace qualifications shortened (mostly
`winrt::Windows::UI::Xaml::` removed), long lines wrapped, and long lists abridged.

## Design

Each part shows the code before the change, what made it costly, and the code after.

### Interface methods: `consume_X<D>` becomes `direct_X`

**Before.** For each interface `X`, cppwinrt generated a class template `consume_X<D>` that holds `X`'s methods. `D`
is the type that exposes them: `X` itself, or a class or interface that requires `X`. A trait specialization
`impl::consume<X>` maps `X` to its template, so that `impl::consume_t<D, X>` names `consume_X<D>`. The interface type
derives from `consume_t<X>`, which is `consume_X<X>`:

```cpp
// impl/Windows.UI.Xaml.0.h
template <typename D>
struct consume_Windows_UI_Xaml_IDependencyObject2
{
    auto RegisterPropertyChangedCallback(DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const;
    auto UnregisterPropertyChangedCallback(DependencyProperty const& dp, std::int64_t token) const;
};
template <> struct consume<IDependencyObject2>
{
    template <typename D> using type = consume_Windows_UI_Xaml_IDependencyObject2<D>;
};

// impl/Windows.UI.Xaml.1.h
struct WINRT_IMPL_EMPTY_BASES IDependencyObject2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDependencyObject2>
{
    IDependencyObject2(std::nullptr_t = nullptr) noexcept {}
    IDependencyObject2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
};
```

Each method passes the object, cast to `D`, and the ABI function to `impl::consume_general`:

```cpp
// Windows.UI.Xaml.h
template <typename D> auto consume_Windows_UI_Xaml_IDependencyObject2<D>::RegisterPropertyChangedCallback(
    DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const
{
    std::int64_t result{};
    consume_general<IDependencyObject2, D>(static_cast<D const*>(this),
        &abi_t<IDependencyObject2>::RegisterPropertyChangedCallback, *(void**)(&dp), *(void**)(&callback), &result);
    return result;
}
```

`consume_general` (in `base_windows.h`) makes the choice at compile time. When `D` is `X`, the object points to `X`,
so it calls through `m_ptr`. Otherwise, it queries the object for `X`, throws if that fails, calls through the queried
pointer, and releases it:

```cpp
template <typename Base, typename Derive, typename MemberPointer, typename ...Args>
void consume_general(Derive const* d, MemberPointer mptr, Args&&... args)
{
    if constexpr (!std::is_same_v<Derive, Base>)
    {
        winrt::hresult _winrt_cast_result_code;
        auto const _winrt_casted_result = try_as_with_reason<Base, Derive const*>(d, _winrt_cast_result_code);
        check_hresult(_winrt_cast_result_code);
        auto const _winrt_abi_type = *(abi_t<Base>**)&_winrt_casted_result;
        check_hresult((_winrt_abi_type->*mptr)(std::forward<Args>(args)...));
    }
    else
    {
        auto const _winrt_abi_type = *(abi_t<Base>**)d;
        check_hresult((_winrt_abi_type->*mptr)(std::forward<Args>(args)...));
    }
}
```

`consume_noexcept` and `consume_noexcept_remove_overload` do the same for `noexcept` methods.

**Shortcomings.** `consume_X<D>` is instantiated for every type `D` that exposes `X` (see the next part), and each
instantiation declares all of `X`'s members. Yet the only thing that depends on `D` is the choice between calling
directly and querying first, which comes out the same for every `D` other than `X`. Member function bodies of a class
template are only instantiated when called, so the bodies were cheap (508 `consume_general` instantiations taking
0.14 s in the `Windows.UI.Xaml.Controls.h` TU). The class instantiations were not.

**After.** Each interface `X` gets a non-template struct `impl::direct_X` with `X`'s methods. Only `X` inherits it, so
its methods always call `X`'s ABI directly and have nothing to decide:

```cpp
// impl/Windows.UI.Xaml.0.h
struct direct_Windows_UI_Xaml_IDependencyObject2
{
    auto RegisterPropertyChangedCallback(DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const;
    auto UnregisterPropertyChangedCallback(DependencyProperty const& dp, std::int64_t token) const;
};

// impl/Windows.UI.Xaml.1.h
struct WINRT_IMPL_EMPTY_BASES IDependencyObject2 :
    Windows::Foundation::IInspectable,
    impl::direct_Windows_UI_Xaml_IDependencyObject2
{
    // constructors as before
};

// Windows.UI.Xaml.h
inline auto direct_Windows_UI_Xaml_IDependencyObject2::RegisterPropertyChangedCallback(
    DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const
{
    std::int64_t result{};
    check_abi((*(abi_t<IDependencyObject2>**)this)->RegisterPropertyChangedCallback(*(void**)(&dp), *(void**)(&callback), &result));
    return result;
}
```

`*(abi_t<X>**)this` reads the object's `m_ptr` (see [How a mixin finds the object](#how-a-mixin-finds-the-object)), and
`check_abi` throws if the call failed (see [QueryInterface helpers and error reporting](#queryinterface-helpers-and-error-reporting)).
Statics and constructors are unchanged: `Grid::GetRow` still calls
`impl::call_factory<Grid, IGridStatics>([&](IGridStatics const& f) { return f.GetRow(element); })`, where `f.GetRow` is
now `direct_..._IGridStatics::GetRow`.

### Required interfaces: `require_one<D, I>` becomes `require_X`

**Before.** A type `D` that requires interfaces `I...` derived from `impl::require<D, I...>` (in `base_meta.h`), which
derives from `require_one<D, I>` for each `I`. `require_one` provides the conversion to `I`, and `I`'s methods by
deriving from `consume_t<D, I>`; because `D` is not `I`, those methods take the query path of `consume_general`:

```cpp
template <typename D, typename I>
struct require_one : consume_t<D, I>
{
    operator I() const noexcept
    {
        return static_cast<D const*>(this)->template try_as<I>();
    }
};

template <typename D, typename... I>
struct WINRT_IMPL_EMPTY_BASES require : require_one<D, I>...
{};
```

**Shortcomings.** Every pair of a type and an interface it requires instantiates two class templates,
`require_one<D, I>` and `consume_X<D>`, which behave exactly like those of every other type that requires `X`: query
for `X`, then call. The XAML class hierarchy multiplies this. `FrameworkElement` requires 18 interfaces, and each of
the 141 classes in `Windows.UI.Xaml.Controls` that derive from it requires the same 18 again, plus its own (`Button`
requires 29). In the `Windows.UI.Xaml.Controls.h` TU, `/d1reportTime` (MSVC's front-end timing report) attributes this
much of the 15.3 s of front-end time to them:

| | instantiations | exclusive time |
|-|-|-|
| `consume_X<D>` | 15,809 | 2.63 s |
| `require_one<D, I>` | 8,401 | 0.82 s |
| `require<D, I...>`, `base<D, B...>`, `base_one<D, B>` | 3,639 | 0.52 s |

A PCH or module interface stores every one of these specializations, which is a large part of their size.

**After.** Each interface `X` that some type may require gets one non-template struct `impl::require_X`, shared by every
interface and class that requires `X`. It has the conversion to `X`, and a *forwarder* for each of `X`'s methods. A
forwarder queries the object for `X`, calls `direct_X`'s method on the result, and releases the result when that
temporary is destroyed:

```cpp
// impl/Windows.UI.Xaml.0.h
struct require_Windows_UI_Xaml_IDependencyObject2
{
    operator IDependencyObject2() const noexcept;
    auto RegisterPropertyChangedCallback(DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const;
    auto UnregisterPropertyChangedCallback(DependencyProperty const& dp, std::int64_t token) const;
};

// impl/Windows.UI.Xaml.1.h, after the interface types are complete
inline require_Windows_UI_Xaml_IDependencyObject2::operator IDependencyObject2() const noexcept
{
    return { impl::try_as_abi<IDependencyObject2>(*(void* const*)this, impl::guid_v<IDependencyObject2>), take_ownership_from_abi };
}

// Windows.UI.Xaml.h
inline auto require_Windows_UI_Xaml_IDependencyObject2::RegisterPropertyChangedCallback(
    DependencyProperty const& dp, DependencyPropertyChangedCallback const& callback) const
{
    return IDependencyObject2{ impl::as_abi<IDependencyObject2>(*(void* const*)this, impl::guid_v<IDependencyObject2>), take_ownership_from_abi }
        .direct_Windows_UI_Xaml_IDependencyObject2::RegisterPropertyChangedCallback(dp, callback);
}
```

The conversion uses `try_as_abi`, which returns null if the object doesn't implement `X`, as `try_as` did; the
forwarders use `as_abi`, which throws, as `consume_general` did. However many types require `X`, a TU compiles
`require_X` once.

### Base classes: `base_one<D, B>` becomes `base_C`

**Before.** A class `D` with base classes `B...` derived from `impl::base<D, B...>`, which derives from `base_one<D, B>`
for each `B` to provide the conversion to it:

```cpp
template <typename D, typename I>
struct base_one
{
    operator I() const noexcept
    {
        return static_cast<D const*>(this)->template try_as<I>();
    }
};

template <typename D, typename... I>
struct WINRT_IMPL_EMPTY_BASES base : base_one<D, I>...
{};
```

**Shortcomings.** As with `require_one`, there is one specialization per pair of class and base class, all doing the
same thing. `Button` has 6 base classes.

**After.** Each class `C` that can be derived from gets one non-template `impl::base_C`, shared by all classes derived
from `C`:

```cpp
// impl/Windows.UI.Xaml.0.h
struct base_Windows_UI_Xaml_DependencyObject
{
    operator DependencyObject() const noexcept;
};

// impl/Windows.UI.Xaml.2.h, after the classes are complete
inline base_Windows_UI_Xaml_DependencyObject::operator DependencyObject() const noexcept
{
    return { impl::try_as_abi<DependencyObject>(*(void* const*)this, guid_of<DependencyObject>()), take_ownership_from_abi };
}
```

`base_C` doesn't have the base class's methods. As before, a class lists the interfaces of its base classes among its
own required interfaces.

### A runtime class, before and after

Before:

```cpp
// impl/Windows.UI.Xaml.2.h
struct WINRT_IMPL_EMPTY_BASES DependencyObject : IDependencyObject,
    impl::require<DependencyObject, IDependencyObject2>
{
    DependencyObject(std::nullptr_t) noexcept {}
    DependencyObject(void* ptr, take_ownership_from_abi_t) noexcept : IDependencyObject(ptr, take_ownership_from_abi) {}
};
struct WINRT_IMPL_EMPTY_BASES FrameworkElement : IFrameworkElement,
    impl::base<FrameworkElement, UIElement, DependencyObject>,
    impl::require<FrameworkElement, IFrameworkElement2, IFrameworkElement3, /* 14 more */, IDependencyObject, IDependencyObject2>
{
    // constructors, statics
};
```

After:

```cpp
// impl/Windows.UI.Xaml.2.h
struct WINRT_IMPL_EMPTY_BASES DependencyObject : IDependencyObject,
    impl::require_Windows_UI_Xaml_IDependencyObject2
{
    // unchanged
};
struct WINRT_IMPL_EMPTY_BASES FrameworkElement : IFrameworkElement,
    impl::base_Windows_UI_Xaml_UIElement, impl::base_Windows_UI_Xaml_DependencyObject,
    impl::require_Windows_UI_Xaml_IFrameworkElement2, impl::require_Windows_UI_Xaml_IFrameworkElement3, /* 14 more */,
    impl::require_Windows_UI_Xaml_IDependencyObject, impl::require_Windows_UI_Xaml_IDependencyObject2
{
    // unchanged
};
```

The classes list the same interfaces and base classes, in the same order. With `FrameworkElement fe`:

| expression | before | after |
|-|-|-|
| `fe.Width()`, a method of the default interface `IFrameworkElement` | `consume_..._IFrameworkElement<IFrameworkElement>::Width`: direct call | `direct_..._IFrameworkElement::Width`: direct call |
| `fe.RegisterPropertyChangedCallback(dp, cb)`, a method of `IDependencyObject2` | `consume_..._IDependencyObject2<FrameworkElement>::RegisterPropertyChangedCallback`: query, call, release | `require_..._IDependencyObject2::RegisterPropertyChangedCallback`: query, call, release |
| `IDependencyObject2 i = fe;` | the conversion of `require_one<FrameworkElement, IDependencyObject2>`: query, null on failure | the conversion of `require_..._IDependencyObject2`: the same |
| `UIElement u = fe;` | the conversion of `base_one<FrameworkElement, UIElement>`: query for `UIElement`'s default interface | the conversion of `base_..._UIElement`: the same |
| `IFrameworkElement const& r = fe;` | derived-to-base reference, no query | the same |

### How a mixin finds the object

**Before.** The consume templates knew the type they were part of, and reached the object with
`static_cast<D const*>(this)`. The compiler adjusts the pointer for wherever the base class sits, so this didn't depend
on the object's layout. Every projected type already carried `WINRT_IMPL_EMPTY_BASES` (`__declspec(empty_bases)`), but
only to keep a type with many empty bases the size of one pointer: without it, MSVC applies the empty base optimization
to only one empty base, and the type grows with every other one.

**Why it changes.** Knowing `D` is exactly what requires a specialization per type.

**After.** The mixins are shared, so they don't know the type they are part of. They are empty base classes of the
projected object and read its pointer at their own address, `*(void* const*)this`, which is only correct if every mixin
is at offset 0, where `m_ptr` is. That holds because:

- `WINRT_IMPL_EMPTY_BASES` places all empty bases at offset 0 under the Microsoft C++ ABI, which MSVC and clang-cl (the
  compilers that cppwinrt's CI builds and tests the projection with) both use.
- C++ never places two base subobjects of the same type at the same address, so if a type had the same mixin twice,
  one of them would not be at offset 0. A class therefore lists only the interfaces that it doesn't already reach
  through its default interface, which inherits the mixins of those itself. Master already left those out of ordinary
  classes' lists; fast ABI classes now leave them out too.

Projected objects remain one pointer in size.

Compilers that use the Itanium C++ ABI instead, such as GCC and Clang targeting MinGW, would get no
`WINRT_IMPL_EMPTY_BASES` (it expands to nothing), but that ABI places empty bases at offset 0 unless two have the same
type, so the mixins would work there too. This is untested, as is all consumption of the projection with those
compilers: cppwinrt's CI only builds `cppwinrt.exe` itself with MinGW GCC, and the MinGW test jobs added in #1216 and
#1245 were removed in #1348.

### Which interfaces get mixins

**Before.** `consume_X<D>` was generated for every interface. A class template costs little until something
instantiates it, so templates of interfaces that nothing required were almost free.

**After.** The mixins are not templates, so every TU that includes a header fully compiles every mixin in it, and a PCH
stores them, whether or not anything uses them. The generator therefore emits mixins only where some type may need
them. It decides this from metadata, without knowing which headers a consumer will include:

- every interface gets `direct_X`, because its interface type inherits it;
- an interface gets `require_X` if it isn't exclusive to a class (anything may require it), if another interface
  requires it, or if its class implements it as anything but the default interface (including protected interfaces),
  or as the default interface of a class that can be derived from (derived classes require their base classes'
  default interfaces);
- statics and factory interfaces, which classes reach through `call_factory` rather than as required interfaces, get
  only `direct_X`, unless another interface requires them (`IFooStatics2` may require `IFooStatics`);
- an overridable interface gets `overrides_X` (see [Composable implementation types](#composable-implementation-types));
- a class that has a default interface and isn't sealed gets `base_C`.

Emitting `require_X` for every interface instead adds about 15% to the header cost of the XAML closure (see
[Mixin scope](#mixin-scope)).

### Name collisions stay ambiguous

**Before.** A class can receive members with the same name from several interfaces.
`Windows.UI.Xaml.Controls.Maps.MapControl` has `Style()` from its default interface `IMapControl` (returning a
`MapStyle`) and `Style()` from `IFrameworkElement` (returning a `Windows.UI.Xaml.Style`). All the consume templates were
sibling base classes, and when a name comes from more than one interface, cppwinrt adds using-declarations to merge the
overload sets:

```cpp
// impl/Windows.UI.Xaml.Controls.Maps.2.h
struct WINRT_IMPL_EMPTY_BASES MapControl : IMapControl,
    impl::base<MapControl, Control, FrameworkElement, UIElement, DependencyObject>,
    impl::require<MapControl, IMapControl2, /* ... */, IFrameworkElement, /* ... */>
{
    // ...
    using IMapControl::Style;
    using impl::consume_t<MapControl, IFrameworkElement>::Style;
};
```

Overloads with different parameters resolve normally (`map.Style(MapStyle::Road)`, `map.Style(style)`). A call that
matches more than one with the same signature is an error at the call site; the header itself compiles. MSVC reports:

```
error C2668: 'winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<D>::Style': ambiguous call to overloaded function
note: could be 'auto winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement<D>::Style(void) const'
note: or       'auto winrt::impl::consume_Windows_UI_Xaml_Controls_Maps_IMapControl<winrt::Windows::UI::Xaml::Controls::Maps::IMapControl>::Style(void) const'
note: while trying to match the argument list '()'
```

The developer disambiguates by converting explicitly, for example `static_cast<IMapControl const&>(map).Style()` or
`map.as<IFrameworkElement>().Style()`. This behavior must be kept: an ambiguous member must not silently prefer one
candidate, the header must compile when the member isn't called, and the error must be readable and actionable.

**After.** Every source of a member name is still a sibling base class at the same level: `direct_X` for the default
interface's methods (through `IMapControl`) and one `require_R` per required interface. The using-declarations name the
mixins, and the same call is rejected the same way:

```cpp
    using IMapControl::Style;
    using impl::require_Windows_UI_Xaml_IFrameworkElement::Style;
```

```
error C2668: 'winrt::impl::require_Windows_UI_Xaml_IFrameworkElement::Style': ambiguous call to overloaded function
note: could be 'winrt::Windows::UI::Xaml::Style winrt::impl::require_Windows_UI_Xaml_IFrameworkElement::Style(void) const'
note: or       'winrt::Windows::UI::Xaml::Controls::Maps::MapStyle winrt::impl::direct_Windows_UI_Xaml_Controls_Maps_IMapControl::Style(void) const'
note: while trying to match the argument list '()'
```

A name found in two bases without a using-declaration is still `C2385` (ambiguous access). Two rules keep this exact:

- Nothing that declares interface methods is layered. If one mixin derived from another, a member of the derived one
  would hide a base member with the same signature, silently preferring it.
- All candidates are non-templates, except the `auto_revoke` overloads, which are member templates on both sides (see
  [Events and auto_revoke](#events-and-auto_revoke)). Overload resolution prefers a non-template to an otherwise equal
  template, so mixing the two would silently pick one.

A conformance suite (12 placements of a colliding member, with the same and with different signatures) gives the same
results as master: every same-signature call is rejected. `MapControl::Style()` is the only such ambiguity in the
Windows platform projection.

### Events and `auto_revoke`

**Before.** For each event `E` of interface `X`, the consume template declared three overloads: register a handler,
register it with `auto_revoke` (returning an `E_revoker` that removes the handler when destroyed), and remove a handler
by token:

```cpp
// impl/Windows.UI.Xaml.0.h, in consume_Windows_UI_Xaml_IUIElement<D>
using PointerPressed_revoker = impl::event_revoker<IUIElement, &impl::abi_t<IUIElement>::remove_PointerPressed>;
[[nodiscard]] auto PointerPressed(auto_revoke_t, Input::PointerEventHandler const& handler) const;

// Windows.UI.Xaml.h
template <typename D> auto consume_Windows_UI_Xaml_IUIElement<D>::PointerPressed(Input::PointerEventHandler const& handler) const
{
    winrt::event_token token{};
    consume_general<IUIElement, D>(static_cast<D const*>(this), &abi_t<IUIElement>::add_PointerPressed, *(void**)(&handler), put_abi(token));
    return token;
}
template <typename D> auto consume_Windows_UI_Xaml_IUIElement<D>::PointerPressed(auto_revoke_t, Input::PointerEventHandler const& handler) const
{
    return impl::make_event_revoker<D, PointerPressed_revoker>(this, PointerPressed(handler));
}
template <typename D> auto consume_Windows_UI_Xaml_IUIElement<D>::PointerPressed(winrt::event_token const& token) const noexcept
{
    consume_noexcept_remove_overload<IUIElement, D>(static_cast<D const*>(this), &abi_t<IUIElement>::remove_PointerPressed, impl::bind_in(token));
}
```

`make_event_revoker` constructs the revoker from `static_cast<D const&>(*this)`, converting `D` to `IUIElement`. For a
class such as `Button`, that is a second query, after the one that `consume_general` made to register the handler.

**After.** `direct_X` registers and removes through the ABI, and its `auto_revoke` overload constructs the revoker from
the interface itself. `require_X` queries once and calls `direct_X`'s overloads on the result:

```cpp
// Windows.UI.Xaml.h
inline auto direct_Windows_UI_Xaml_IUIElement::PointerPressed(Input::PointerEventHandler const& handler) const
{
    winrt::event_token token{};
    check_abi((*(abi_t<IUIElement>**)this)->add_PointerPressed(*(void**)(&handler), put_abi(token)));
    return token;
}
template <typename R> auto direct_Windows_UI_Xaml_IUIElement::PointerPressed(auto_revoke_t, Input::PointerEventHandler const& handler) const
{
    return R{ static_cast<IUIElement const&>(*this), PointerPressed(handler) };
}
inline auto direct_Windows_UI_Xaml_IUIElement::PointerPressed(winrt::event_token const& token) const noexcept
{
    (*(abi_t<IUIElement>**)this)->remove_PointerPressed(impl::bind_in(token));
}

// impl/Windows.UI.Xaml.0.h, in require_Windows_UI_Xaml_IUIElement
template <typename W = IUIElement> [[nodiscard]] auto PointerPressed(auto_revoke_t, Input::PointerEventHandler const& handler) const
{
    return W{ impl::as_abi<IUIElement>(*(void* const*)this, impl::guid_v<IUIElement>), take_ownership_from_abi }.PointerPressed(auto_revoke, handler);
}
```

The `auto_revoke` overloads are member templates (`template <typename R = E_revoker>` in `direct_X`,
`template <typename W = X>` in `require_X`), so the revoker class `impl::event_revoker<X, &remove_E>`, one
specialization per event, is only instantiated for the events that a program revokes automatically, as with master.
Making both sides templates keeps collisions between them ambiguous. Registering with `auto_revoke` through a required
interface now queries once instead of twice; this is the only behavior change.

### Generic interfaces

**Before.** A generic interface's consume template took the interface's generic parameters after `D`, for example
`consume_Windows_Foundation_Collections_IVectorView<D, T>`, so it was instantiated for every pair of exposing type and
element type:

```cpp
// impl/Windows.Foundation.Collections.1.h
template <typename T>
struct WINRT_IMPL_EMPTY_BASES IVectorView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVectorView<T>>,
    impl::require<IVectorView<T>, IIterable<T>>
{
    // constructors
};
```

**After.** Generic mixins are templated only on the interface's generic parameters, so they are instantiated once per
element type, for all the types that expose them:

```cpp
// impl/Windows.Foundation.Collections.0.h
template <typename T>
struct direct_Windows_Foundation_Collections_IVectorView
{
    auto GetAt(std::uint32_t index) const;
    [[nodiscard]] auto Size() const;
    auto IndexOf(impl::param_type<T> const& value, std::uint32_t& index) const;
    auto GetMany(std::uint32_t startIndex, array_view<T> items) const;
};
template <typename T>
struct require_Windows_Foundation_Collections_IVectorView
{
    operator IVectorView<T>() const noexcept;
    // the same four methods, as forwarders
};

// impl/Windows.Foundation.Collections.1.h
template <typename T>
struct WINRT_IMPL_EMPTY_BASES IVectorView :
    Windows::Foundation::IInspectable,
    impl::direct_Windows_Foundation_Collections_IVectorView<T>,
    impl::require_Windows_Foundation_Collections_IIterable<T>
{
    // constructors, begin(), end()
};
```

Being templates, generic mixins are still compiled only for the element types that a program uses.

### Iteration: `begin()` and `end()`

**Before.** `consume_Windows_Foundation_Collections_IIterable<D, T>` declared `begin()` and `end()`, which passed
`static_cast<D const&>(*this)` to `impl::get_begin_iterator` and `impl::get_end_iterator`. Those return an index-based
`fast_iterator` when `D` has `GetAt` (a vector, a vector view, or a class implementing one), and an `IIterator<T>` from
`First()` otherwise. Since `D` was the type that requires the iterable, the most specific iterator was chosen.

**After.** The mixins don't know `D`, so `begin()` and `end()` are written into every interface, class, and composable
`XxxT<D>` that requires an iterable (`IIterable<T>` or `IBindableIterable`) other than through its default interface.
They are member templates whose parameter defaults to that type:

```cpp
// impl/Windows.Foundation.Collections.1.h, in IVectorView<T>
template <typename D = IVectorView> auto begin() const { return impl::get_begin_iterator(static_cast<D const&>(*this)); }
template <typename D = IVectorView> auto end() const { return impl::get_end_iterator(static_cast<D const&>(*this)); }
```

The template parameter lets the body, which needs the complete type, be written inside the class. A type's own
`begin()` and `end()` hide those of its bases, so a range-based `for` picks the same iterator as before.

### Async `get()`, `wait_for()`, and other members cppwinrt adds

cppwinrt adds members to some interfaces from code in `strings/`, rather than from metadata. Those followed the CRTP
pattern too, and now come in a `direct_X` and a `require_X` version. Before, in `base_coroutine_foundation.h`:

```cpp
template <typename D, typename TResult>
auto consume_Windows_Foundation_IAsyncOperation<D, TResult>::get() const
{
    return impl::wait_get(static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)));
}
```

After:

```cpp
template <typename TResult>
auto direct_Windows_Foundation_IAsyncOperation<TResult>::get() const
{
    return impl::wait_get(static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(*this));
}
template <typename TResult>
auto require_Windows_Foundation_IAsyncOperation<TResult>::get() const
{
    return Windows::Foundation::IAsyncOperation<TResult>{ impl::as_abi<Windows::Foundation::IAsyncOperation<TResult>>(
        *(void* const*)this, impl::guid_v<Windows::Foundation::IAsyncOperation<TResult>>), take_ownership_from_abi }.get();
}
```

The same applies to:

- `get_unchecked()` and `wait_for()` of the four `IAsync*` interfaces, in `base_coroutine_foundation.h`;
- `IMap`/`IMapView` `TryLookup` and `TryRemove`, which call the ABI directly in `direct_X` and forward through a query in
  `require_X`;
- `IBuffer::data()` and `IMemoryBufferReference::data()`, which reinterpret the object as `IUnknown` to query for the
  byte access interface.

The iterator operators of `IIterator<T>` are members of the `IIterator<T>` interface type itself, the only type used as
the iterator. Those of `IBindableIterator` are declared on it and defined in `base_xaml_typename.h`.

### Composable implementation types

**Before.** An implementation type that derives from a composable class, such as `struct MyButton : ButtonT<MyButton>`,
is a COM object of its own that aggregates an instance of the XAML class. `ButtonT`'s constructor asks the `Button`
factory for this *inner* object, which `root_implements_composing_outer` keeps in `m_inner`. `MyButton` has the class's
members, but no `m_ptr`: its calls must go to `m_inner`. `ButtonT<D>` provided the members with the same CRTP
templates, instantiated for `D`, the implementation type:

```cpp
// Windows.UI.Xaml.Controls.h
template <typename D, typename... Interfaces>
struct ButtonT :
    implements<D, IContentControlOverrides, IControlOverrides, /* 7 more overridable interfaces */, composing, Interfaces...>,
    impl::require<D, IButton, IButtonWithFlyout, Primitives::IButtonBase, /* 26 more */, IDependencyObject, IDependencyObject2>,
    protected impl::require<D, IControlProtected, IFrameworkElementProtected7>,
    impl::base<D, Button, Primitives::ButtonBase, ContentControl, Control, FrameworkElement, UIElement, DependencyObject>,
    IContentControlOverridesT<D>, IControlOverridesT<D>, /* 7 more */
{
    using composable = Button;
    friend impl::produce<D, IContentControlOverrides>;
    friend impl::consume_t<D, IControlProtected>;
    friend impl::require_one<D, IControlProtected>;
    // ... the same for the other overridable and protected interfaces
protected:
    ButtonT()
    {
        impl::call_factory<Button, IButtonFactory>([&](IButtonFactory const& f) { [[maybe_unused]] auto winrt_impl_discarded = f.CreateInstance(*this, this->m_inner); });
    }
};
```

With `D` being `MyButton`, `consume_general` queries the implementation type, which `root_implements_composing_outer`
routes to `m_inner`:

```cpp
// base_implements.h
template <>
struct WINRT_IMPL_EMPTY_BASES root_implements_composing_outer<true>
{
    template <typename Qi>
    auto try_as() const noexcept
    {
        return m_inner.try_as<Qi>();
    }
    // ... try_as_with_reason, used by consume_general, likewise queries m_inner
protected:
    static constexpr bool is_composing = true;
    Windows::Foundation::IInspectable m_inner;
};
```

`IXxxOverridesT<D>` holds the default implementations of the overridable methods, which call the base class's
implementation in the inner object; `MyButton::OnApplyTemplate` can call `ButtonT<MyButton>::OnApplyTemplate()`:

```cpp
template <typename D> auto IContentControlOverridesT<D>::OnContentChanged(IInspectable const& oldContent, IInspectable const& newContent) const
{
    return shim().template try_as<IContentControlOverrides>().OnContentChanged(oldContent, newContent);
}
```

The protected interfaces are protected bases, so only `MyButton` can call them; the friend declarations let the consume
templates cast to `D` through them.

**Shortcomings.** Every implementation type instantiates the whole set again. A `Button`-derived type instantiates
`require_one` and `consume_X` for 30 public and 2 protected interfaces, 7 `base_one`, and 9 `IXxxOverridesT`: about 80
class template specializations per custom control, in every TU that includes the control's definition.

**After.** A composable class's mixins are gathered into one named, non-template aggregate, generated once with the
class:

```cpp
// Windows.UI.Xaml.Controls.h
struct WINRT_IMPL_EMPTY_BASES composable_Windows_UI_Xaml_Controls_Button :
    require_Windows_UI_Xaml_Controls_IButton,           // the 30 public interfaces, including the class's default interface
    require_Windows_UI_Xaml_Controls_IButtonWithFlyout,
    /* ... */
    require_Windows_UI_Xaml_IDependencyObject2,
    base_Windows_UI_Xaml_Controls_Button,               // conversions to the class and its 6 base classes
    /* ... */
    base_Windows_UI_Xaml_DependencyObject,
    overrides_Windows_UI_Xaml_Controls_IContentControlOverrides,  // default implementations of the 9 overridable interfaces
    /* ... */
    protected require_Windows_UI_Xaml_Controls_IControlProtected, // the 2 protected interfaces
    protected require_Windows_UI_Xaml_IFrameworkElementProtected7
{
};

template <typename D, typename... Interfaces>
struct ButtonT :
    implements<D, impl::composing_mixins<impl::composable_Windows_UI_Xaml_Controls_Button>,
        IContentControlOverrides, IControlOverrides, /* 7 more */, composing, Interfaces...>
{
    using composable = Button;
    friend impl::produce<D, IContentControlOverrides>;
    // ... for the other overridable interfaces; none for the protected interfaces
protected:
    ButtonT()
    {
        // unchanged
    }
};
```

`impl::composing_mixins<M>` is a marker in the `implements` list, like `composing`. `root_implements` finds it, and its
composing base derives from `M`:

```cpp
// base_implements.h
template <typename Mixins>
struct WINRT_IMPL_EMPTY_BASES root_implements_composing_outer<true, Mixins> : root_implements_composing_outer<true, void>, Mixins
{
};
```

`root_implements_composing_outer<true, void>` is the former `<true>` specialization, whose only member is `m_inner`. `M`
is an empty base at the same address, so the mixins' `*(void* const*)this` reads `m_inner`, and the forwarders query
the inner object, as before. `overrides_X` replaces `IXxxOverridesT<D>`, with forwarders that call the inner object's
implementation:

```cpp
// Windows.UI.Xaml.Controls.h
inline auto overrides_Windows_UI_Xaml_Controls_IContentControlOverrides::OnContentChanged(
    IInspectable const& oldContent, IInspectable const& newContent) const
{
    return IContentControlOverrides{ impl::as_abi<IContentControlOverrides>(*(void* const*)this, impl::guid_v<IContentControlOverrides>), take_ownership_from_abi }
        .direct_Windows_UI_Xaml_Controls_IContentControlOverrides::OnContentChanged(oldContent, newContent);
}
```

The protected interfaces are protected bases of the aggregate, so derived types can call them and other code can't. No
friend declarations are needed, because the mixins don't cast to `D`. A component type that derives from a composable
class of another component passes `impl::composing_mixins<impl::composable_Base>` the same way. `IXxxOverridesT<D>` is
still generated for source compatibility, but `XxxT<D>` no longer uses it. Object layout is unchanged.

MSVC ignores `__declspec(empty_bases)` on a partial specialization unless the primary template declares it too, so the
primary `root_implements_composing_outer` carries `WINRT_IMPL_EMPTY_BASES`.

### QueryInterface helpers and error reporting

**Before.** `consume_general` queried with `try_as_with_reason<To, From>` and reported errors with `check_hresult`.
`check_hresult` has a default argument, `slim_source_location::current()` (declared in `base_meta.h`), which in C++20
records the file and line of its caller (and in Debug builds, the function name). Since its caller was
`consume_general`, an error from a projected method was reported at a location in `base.h`, not in the calling code.

**After.** `base_error.h` adds non-template helpers for the generated code:

```cpp
inline void check_abi(std::int32_t const result)
{
    if (result < 0)
    {
        check_hresult(result);
    }
}

inline void* try_as_abi(void* const ptr, guid const& id) noexcept; // QueryInterface; null if ptr is null or on failure
inline void* as_abi(void* const ptr, guid const& id);              // QueryInterface; null if ptr is null, throws on failure
```

The generated method bodies call `check_abi` rather than `check_hresult`, so that the thousands of inline bodies don't
each build a source location. Errors are reported at the location in `check_abi`, instead of the one in
`consume_general`.

### `WINRT_DIAGNOSTICS`

**Before.** With `WINRT_DIAGNOSTICS` defined, `try_as_with_reason` and the other query helpers counted every query by
the name of the queried interface (`get_diagnostics_info().add_query<To>()`), so an app can see what it queries and how
often.

**After.** The forwarders and conversions call thin templates on the queried interface, which count it by name and
forward to the non-template helpers:

```cpp
template <typename To>
void* as_abi(void* const ptr, guid const& id)
{
#ifdef WINRT_DIAGNOSTICS
    get_diagnostics_info().add_query<To>();
#endif

    return as_abi(ptr, id);
}
```

`try_as_abi<To>` is the same. The counts are identical to master's, except for the one fewer query of `auto_revoke`
through a required interface. Making these helpers non-template would save about 10 MB of the Blank App PCH, but
diagnostics could then only report interface IDs (see
[QueryInterface helper: template vs non-template](#queryinterface-helper-template-vs-non-template)).

## Alternatives considered

### Synthetic benchmark

To compare designs quickly without changing cppwinrt, a tool extracted the shape of the `Windows.UI.Xaml.Controls.h`
closure (62 namespaces: its classes, interfaces, methods, base classes, and required interfaces) from the generated
projection, and emitted it as a synthetic header in each design, on top of the real `base.h`. Three TUs were measured:
the *header TU* includes only the synthetic header; the *PCH* is that header compiled with `/Yc`; the *usage TU* is
compiled with `/Yu` against the PCH and calls methods, events (with `auto_revoke`), and conversions on 60 classes, with
the same source for every design.

The designs:

- **A**: master's design.
- **A2**: A with `require_one`'s conversion moved into `consume_X<D>`, so there is one class template per pair instead
  of two.
- **B1**: C++23 *deducing this*. `consume_X` becomes a plain struct whose methods are templates on the type of the
  object, `template <typename D> auto M(this D const& self, ...)`, and choose between calling directly and querying
  from `D`. `require<D, I...>` stays, for the conversions.
- **B2**: B1, with the conversions written with deducing this too, which removes `require_one`.
- **C1-C5**: per-class non-template structs, *layered* so that a derived class inherits its base class's structs.
  `C_other_interfaces` has the conversions and forwarders for `C`'s required interfaces. `C_default_interface` has the
  forwarders for `C`'s default interface and `operator C()`, for use by classes derived from `C`:

  ```cpp
  struct BaseType_other_interfaces { /* operator IBaseType2(), forwarders for IBaseType2's methods, ... */ };
  struct BaseType_default_interface : BaseType_other_interfaces { /* operator BaseType(), forwarders for IBaseType's methods */ };
  struct DerivedType_other_interfaces : BaseType_default_interface { /* IDerivedType2 ... */ };
  struct BaseType : /* IBaseType's methods, */ BaseType_other_interfaces { };
  struct DerivedType : /* IDerivedType's methods, */ DerivedType_other_interfaces { };
  ```

  C1 compiles the forwarders eagerly. C2 makes them member templates, compiled only when called, and C3 also the
  interfaces' own methods. In C1-C3 the layers hold the object pointer; C4 makes them empty mixins that read
  `*(void* const*)this`, so a class can derive from its default interface as before. C4e is C4 with the interface
  methods compiled eagerly. C5 and C5e reduce template instantiations further: a non-template query helper, method
  bodies that avoid helper templates, and non-template ABI structs. Spelling interface IDs as literal GUIDs or as named
  constants instead of `guid_v<I>` was tried too.
- **C6, C6e**: flat: one mixin per interface, all sibling bases, the shape of the final design. C6e compiles the
  forwarders only when used (member templates), and C6 also the interface methods.
- **C6n**: C6 with no member templates except `auto_revoke`. This is the final design.

C++latest, Debug, median of 3 runs:

| design | header TU | PCH | usage TU (`/Yu`) |
|-|-|-|-|
| A | 13.4 s | 819 MB | 0.87 s |
| A2 | 12.9 s | 789 MB | 0.81 s |
| B1 | 10.7 s | 720 MB | 0.84 s |
| B2 | 9.7 s | 656 MB | 0.91 s |
| C1-C3 | 9.7-11.8 s | 632-680 MB | 0.28-0.47 s |
| C4 / C4e | 8.9 / 9.6 s | 597 / 557 MB | 0.43 / 0.35 s |

Deducing `this` removes the class template instantiations, but still instantiates every member template for each
calling type when used, and calling code gets no faster. The layered designs were much faster, so later rounds refined
them. C++17, Debug, median of 3 runs:

| design | header TU | PCH | peak memory | usage TU |
|-|-|-|-|-|
| A | 11.2 s | 729 MB | 813 MB | 0.78 s |
| C4 / C4e | 7.4 / 7.9 s | 513 / 470 MB | 545 / 514 MB | 0.41 / 0.33 s |
| C5 / C5e | 7.2 / 7.2 s | 505 / 454 MB | 533 / 490 MB | 0.35 / 0.31 s |
| C6 / C6e | 7.3 / 7.4 s | 515 / 463 MB | 547 / 499 MB | 0.36 / 0.32 s |
| **C6n** | 7.4 s | **440 MB** | **476 MB** | **0.30 s** |

Compiling bodies only when used did not pay off. C6 is no faster than C6n, its PCH is 17% larger, and calling code is
slower, because the PCH stores the templates and every TU that calls them instantiates them again. Literal GUIDs or
named constants instead of `guid_v<I>` gave no gain.

### Collision semantics

The layered designs (C4, C5, C5e) silently picked one candidate in 8 to 11 of the 12 same-signature placements of the
conformance suite: a member declared in a more derived layer hides a base layer's member with the same signature, even
through using-declarations. C6e did so in 4, because its non-template interface methods beat its template forwarders.
C6 and C6n reject all 12, like master. C6n was chosen: it preserves the semantics, and has the smallest PCH and peak
memory.

### Implementation-type options

| option | outcome |
|-|-|
| keep a non-owning pointer to the inner object in every implementation type | rejected: changes object layout |
| I0: keep the CRTP consume templates only for `XxxT<D>` | consumers pay about +19% header time to parse both designs |
| I1: the mixins listed in `implements<>`, overlaid on `m_inner` | layout unchanged; long `implements<>` type names, +29% authoring `.obj` size |
| I1t / I1o: mixins looked up by class through a trait; overridable defaults as `overrides_X` mixins | shorter names; the protected interfaces hidden behind a trait |
| **I1n**: one named aggregate `composable_C` per composable class | short, readable names in diagnostics; no per-class template instantiation |

Synthetic, C++17 Debug: header TU A 11.9 s, I0 9.8 s, I1o 8.3 s; I1n vs I1o: header 8.19 vs 8.31 s, PCH 494 vs 501 MB.

### Mixin scope

Emitting mixins only for the interfaces the closure actually requires (not knowable when generating one namespace):
header 7.6 s, PCH 440 MB. The metadata rules of [Which interfaces get mixins](#which-interfaces-get-mixins): 8.0 s,
453 MB. A `require_X` for every interface: 9.2 s, 491 MB.

### QueryInterface helper: template vs non-template

On the real projection, with the forwarders' `as_abi` calls written three ways (12,734 call sites):

| | Controls.h PCH | Blank App PCH | Blank App PCH peak memory |
|-|-|-|-|
| non-template `impl::as_abi(p, impl::guid_v<X>)`, diagnostics keyed by IID | 622.3 MB | 787.8 MB | 882 MB |
| **`impl::as_abi<X>(p, impl::guid_v<X>)`**, diagnostics keyed by name | 630.8 MB | 798.2 MB | 895 MB |
| `impl::as_abi<X>(p)` with `guid_of<X>()` inside | 640.1 MB | 803.8 MB | 903 MB |

Build time differs by at most 0.1-0.3 s.

## Results

### Measurement setup

**Projection.** `cppwinrt -in local`, which reads the Windows metadata installed with the operating system
(`%windir%\System32\WinMetadata`, here Windows 11 build 26200), generated by master's and by this branch's
`cppwinrt.exe`. The XAML measured is UWP XAML (`Windows.UI.Xaml`).

**Toolchain and machine.** MSVC 14.51.36231 (VS 2026) and clang-cl 22.1.3 (the VS component), on an AMD EPYC with 16
logical processors and 64 GB.

**Compiler options.** Debug: `/c /nologo /std:c++17 /permissive- /EHsc /bigobj /Od /MDd /D_DEBUG`. Release:
`/O2 /Oi /GL /Gy /MD /DNDEBUG` in place of `/Od /MDd /D_DEBUG`. clang-cl: the Debug options without `/permissive-` and
`/bigobj`. Modules: `/std:c++latest`.

**Translation units.**

| name | source | compiled with |
|-|-|-|
| `Windows.UI.Xaml.Controls.h` TU | `#include <winrt/Windows.UI.Xaml.Controls.h>` | no PCH |
| PCH of `Windows.UI.Xaml.Controls.h` | a header containing only that include | `/Yc` |
| Blank App PCH | the `pch.h` below | `/Yc` |
| code-behind TU | 114 lines of typical XAML code-behind: builds a form from 11 controls (`StackPanel`, `TextBlock`, `TextBox`, `ToggleSwitch`, `Slider`, `ComboBox`, `ListView`, `Button`, `ContentDialog`, `Grid`, `ScrollViewer`) with property setters, a binding, event handlers (one with `auto_revoke`), collections and iteration, attached properties, and an async completion handler, then navigates a `Frame` | `/Yu` of the Blank App PCH |
| 1 custom control | `struct MyButton : ButtonT<MyButton>`: a constructor that calls 7 inherited members (including a protected one and an event), overrides of `MeasureOverride` and `OnApplyTemplate` that call the base implementations, and `make<MyButton>()` | `/Yu` |
| 10 mixed custom controls | ten such types deriving from `Page`, `UserControl`, `Control`, `ContentControl`, `Button`, `ListView`, `GridView`, `Panel`, `Grid`, and `StackPanel`, each calling members of its base classes | `/Yu` |
| 10 `Button`-derived controls | ten such types deriving from `Button` | `/Yu` |

The Blank App PCH's `pch.h`:

```cpp
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.ApplicationModel.Activation.h>
#include <winrt/Windows.UI.Xaml.h>
#include <winrt/Windows.UI.Xaml.Controls.h>
#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
#include <winrt/Windows.UI.Xaml.Data.h>
#include <winrt/Windows.UI.Xaml.Interop.h>
#include <winrt/Windows.UI.Xaml.Markup.h>
#include <winrt/Windows.UI.Xaml.Navigation.h>
```

These are the `winrt/` includes of the template's `pch.h`
(`vsix/ProjectTemplates/VC/Windows Universal/BlankApp/pch.h`). The template's `pch.h` also includes `windows.h`,
`unknwn.h`, `restrictederrorinfo.h`, and `hstring.h`, which were left out because they don't depend on the projection.
Measured together in one session, they add 1.0-1.4 s, 20-24 MB, and 22-41 MB of peak memory to both designs. With the
complete template `pch.h`: master 24.5 s, 1,153 MB, 1,270 MB peak; consume mixins 19.0 s, 818 MB, 917 MB peak
(-22% / -29% / -28%).

**Release link.** A `main.cpp` that references everything, the code-behind TU (which here also includes
`winrt/Windows.UI.Xaml.Media.h`, where a constructor it calls is defined), and the 20 custom controls (the 10 mixed and
the 10 `Button`-derived), compiled with `/Yu`, linked with `/LTCG /OPT:REF /OPT:ICF`.

**Modules.** The import closure of the ten Blank App namespaces: 67 modules (35 with declarations, including the cycle
modules for `Windows.UI.Xaml` and `Windows.ApplicationModel`, and 32 re-export stubs), compiled one at a time in
dependency order. The consumer TUs replace `#include "pch.h"` with `import std;`, imports of the ten modules, and
`import winrt.Windows.UI;`.

**Metrics.**

- *Time*: wall-clock time of the compiler process, median of 3 runs unless noted.
- *Size*: bytes written: the `.pch` (or `.ifc` for modules), and the `.obj` where noted.
- *Peak memory*: the peak commit charge (private bytes) of the compiler process, the highest of the runs. clang-cl
  builds a PCH in a child process, so for clang PCH builds it is the peak of the child process, measured with a job
  object.
- *`/d1reportTime`*: MSVC's front-end timing report. *Exclusive time* excludes nested work.

### MSVC, Debug (`/Od /MDd`), C++17

| | master | consume mixins | change |
|-|-|-|-|
| `Windows.UI.Xaml.Controls.h` TU | 17.5 s, 991 MB peak | 12.9 s, 696 MB peak | -26% / -30% |
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
| code-behind / 10 mixed / 10 `Button`-derived controls (`/Yu`) | 2.01 / 1.59 / 1.56 s | 1.73 / 0.98 / 0.93 s | -14% / -38% / -40% |
| link `/LTCG` | 4.4 s (32.6 s CPU), 519 MB | 3.3 s (23.5 s CPU), 447 MB | -25% |
| linked exe | 868 KB | 513 KB | -41% |

The exe shrinks because with master, every custom control instantiates its own copy of the consume code it calls,
which identical COMDAT folding often cannot merge; the mixins' forwarders are shared.

### C++20 modules

The module closure described in [Measurement setup](#measurement-setup), Debug, `/std:c++latest`, 2 runs:

| | master | consume mixins | change |
|-|-|-|-|
| IFC bytes | 228.8 MB | 176.2 MB | -23% |
| serial build / critical path | 69-70 s / 58-59 s | 62-63 s / 51-52 s | -10% / -12% |
| max peak memory | 1,230 MB | 1,034 MB | -16% |
| `winrt.Windows.UI.Xaml` (14 namespaces) | 24.2 s, 86.3 MB IFC | 19.1 s, 69.7 MB | -21% / -19% |
| `winrt.Windows.ApplicationModel` | 20.5 s, 92.1 MB IFC | 17.7 s, 67.2 MB | -14% / -27% |
| code-behind TU importing the modules | 3.42 s, 310 MB | 2.96 s, 283 MB | -13% |
| 10 `Button`-derived controls importing the modules | 2.52 s, 251 MB | 1.84 s, 219 MB | -27% |

Module object files grow from 7.5 to 10.0 MB, probably because the non-template inline definitions in a module's
purview are compiled into its object file.

### clang-cl 22, Debug, C++17

| | master | consume mixins | change |
|-|-|-|-|
| `Windows.UI.Xaml.Controls.h` TU | 6.45 s, 699 MB | 5.52 s, 442 MB | -14% / -37% |
| PCH of `Windows.UI.Xaml.Controls.h` | 9.0 s, 138 MB, 1,011 MB peak | 7.1 s, 88 MB, 733 MB peak | -20% / -36% / -28% |
| Blank App PCH | 11.0 s, 163 MB, 1,454 MB peak | 9.2 s, 112 MB, 853 MB peak | -17% / -31% / -41% |
| code-behind / 10 mixed / 10 `Button`-derived controls (`/Yu`) | 1.53 / 1.96 / 2.03 s | 1.33 / 1.52 / 1.58 s | -13% / -22% / -22% |

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
makes one fewer `QueryInterface` call (see [Events and auto_revoke](#events-and-auto_revoke)).

### Where the time goes now

`/d1reportTime` of the `Windows.UI.Xaml.Controls.h` TU: 10.8 s of front-end time, compared to 15.3 s with master
(whose breakdown is under [Required interfaces](#required-interfaces-require_oned-i-becomes-require_x)):

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
  of `root_implements`. No composable class in the Windows platform projection has such a method (`Release` exists only
  on sealed classes); a component could.
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

Validation still to do before opening PRs: the v143 (VS 2022) toolset; ARM64 and full x86 test runs; the WinUI 3
(`Microsoft.UI.Xaml`) projection, both for correctness and to confirm the gains; and the Windows SDK metadata
(`cppwinrt -in sdk`) that projects normally use, which is expected to give the same results as the OS metadata
measured here.
