# Fast ABI

## Overview

Fast ABI is an opt-in projection mode for WinRT runtime classes that are marked with `FastAbiAttribute` and projected
with `cppwinrt -fastabi`. When enabled, C++/WinRT changes how eligible runtime-class members are surfaced and called so
that calls to selected interfaces can go through the default interface's ABI directly instead of repeatedly using
`QueryInterface`.

The key idea is:

- The runtime class keeps its normal default interface.
- C++/WinRT appends extra ABI entries to that default interface for a selected set of additional interfaces.
- For derived runtime classes, C++/WinRT also appends base-class accessors so callers can reach the base runtime class
  fast path without `QueryInterface`.
- On the producer side, C++/WinRT generates tear-off forwarders for those extra interfaces.

This improves call overhead in the cases the feature is designed for:

- Default activation can avoid the usual `IInspectable` to default-interface `QueryInterface` step for fast-ABI classes.
- Calls to eligible secondary interfaces can avoid `QueryInterface` and the matching `Release`.
- Calls to eligible base-class interfaces on derived runtime classes can avoid `QueryInterface` as well.

The feature is intentionally selective. In the current implementation, only exclusive, non-overridable interfaces
participate in the fast region for a given runtime class. Non-exclusive interfaces continue to use the normal WinRT/COM
calling pattern.

What does not change:

- The projected runtime-class API that clients write against stays the same.
- The feature is opt-in. If the metadata is not marked or the projection is not generated with `-fastabi`, C++/WinRT
  uses the normal ABI.
- Interfaces that are not eligible for promotion still use `QueryInterface`.

Current test coverage in this repo exercises the main guarantees:

- `test/test_fast/Simple.cpp` verifies fast activation and confirms the default-interface `QueryInterface` is avoided
  for a fast-ABI class.
- `test/test_fast/Nomadic.cpp` verifies the promoted interface ordering in the default-interface vtable.
- `test/test_fast/Composition.cpp` verifies that calls across default, secondary, and base-class fast interfaces avoid
  the expected `QueryInterface` traffic, while a non-exclusive interface still uses the normal path.
- `test/test_fast_fwd/FastForwarderTests.cpp` verifies the low-level forwarder machinery, including primitive, string,
  GUID, struct, large-argument, and lifetime behavior.
- `test/test_fast_fwd/main.cpp` verifies the generated `WINRT_FAST_ABI_SIZE` is precise for the test payload.
- `test/test_component_fast/Simple.cpp` verifies that `WINRT_FAST_ABI_SIZE` can be overridden upward with `/D` and still
  participates in the link-time mismatch check.

In this repo, the feature appears under a few closely related names:

- `-fastabi` is the `cppwinrt` command-line switch.
- `CppWinRTFastAbi` is the NuGet/MSBuild property.
- `Windows.Foundation.Metadata.FastAbiAttribute` is the metadata marker on a runtime class.
- `fast_abi_forwarder` and `make_fast_abi_forwarder` are the generated/runtime support types used to expose extra
  interfaces without the normal `QueryInterface` path.

## How to use

At a minimum, Fast ABI requires both of these:

1. The runtime class must be marked with `Windows.Foundation.Metadata.FastAbiAttribute` in metadata.
2. The projection must be generated with Fast ABI enabled.

For manual `cppwinrt` invocation, enable it with:

```text
cppwinrt ... -fastabi
```

For NuGet/MSBuild-based projects, enable it with:

```xml
<PropertyGroup>
  <CppWinRTFastAbi>true</CppWinRTFastAbi>
</PropertyGroup>
```

In the NuGet targets, that property does two important things:

- Appends `-fastabi` to the `cppwinrt` invocation.
- Links `cppwinrt_fast_forwarder.lib` into the project.

Generated component projections also emit `winrt/fast_forward.h`. That header contains the forwarder type, the thunk
declarations, and the `WINRT_FAST_ABI_SIZE` contract used to size the generated fast vtables.

Special considerations:

- Fast ABI is projection-time behavior. Both producers and consumers need Fast ABI enabled in their generated code to
  get the fast path for marked classes.
- The feature only applies to runtime classes marked with `FastAbiAttribute`. Turning on `-fastabi` does not change
  unrelated classes.
- The generated `WINRT_FAST_ABI_SIZE` is a minimum required size for the projection set being built. You may override it
  upward, but not below the generated minimum.
- `winrt/fast_forward.h` uses `#pragma detect_mismatch("WINRT_FAST_ABI_SIZE", ...)` so inconsistent translation units
  fail at link time instead of silently producing incompatible layouts.
- If you are wiring this up manually rather than through the NuGet targets, you must make sure the generated
  `winrt/fast_forward.h` is visible to the component sources and that `cppwinrt_fast_forwarder.lib` is linked.

## For Components

For a component author, Fast ABI changes the generated implementation scaffolding more than it changes handwritten code.

When a runtime class is marked for Fast ABI and projected with `-fastabi`, C++/WinRT:

- Computes the ordered set of eligible interfaces for the class.
- Extends the default-interface ABI with fast-call entries for those interfaces.
- Generates tear-off handling for non-default fast interfaces.
- Generates base-class accessors for derived runtime classes so base fast interfaces remain reachable without
  `QueryInterface`.

In practice, this means the generated component base uses two different strategies for additional interfaces:

- Eligible fast interfaces are not exposed through the usual `QueryInterface`-driven pattern alone.
- Instead, `query_interface_tearoff` can manufacture a `fast_abi_forwarder` that forwards calls into the owning runtime
  class at a known slot offset.

That forwarder is a normal COM object from the caller's perspective:

- It has its own `QueryInterface`, `AddRef`, and `Release`.
- It holds a reference on the owning object.
- Calls for the forwarded interface dispatch through the generated thunk table into the owner.

What the component can expect:

- Handwritten implementation methods do not need a separate code path for Fast ABI. The generated projection adapts the
  ABI shape around the same implementation methods.
- Derived fast-ABI classes preserve fast access to eligible base-class members. The
  `CompositionObject`/`Visual`/`SpriteVisual` test coverage exists specifically to validate that inheritance case.
- Non-exclusive interfaces still behave normally. In the composition tests, `IClosable` continues to use
  `QueryInterface`.

What to watch for:

- Eligibility is narrower than "all implemented interfaces". The current implementation promotes exclusive,
  non-overridable interfaces into the fast region and leaves the rest on the normal path.
- Interface ordering is significant. The generator sorts fast interfaces using the runtime class contract history and
  interface introduction version. `test/test_fast/Nomadic.cpp` validates that ordering.
- `WINRT_FAST_ABI_SIZE` is part of the binary contract for the generated fast-forwarder table. If you override it,
  increase it only.
- Component sources that use the generated fast scaffolding must see `winrt/fast_forward.h`. In the repo tests, the fast
  component PCH includes that header explicitly.

### Eligibility

There is not a separate handwritten implementation pattern a component author must follow to become "Fast ABI
compliant." The important requirement is that the component's metadata and generated projection must describe a runtime
class shape that C++/WinRT can legally lower into the fast form.

In the current implementation, that means:

- The runtime class itself must be marked with `Windows.Foundation.Metadata.FastAbiAttribute`.
- The runtime class must have a default interface, because Fast ABI extends the default-interface ABI.
- The component projection must be generated with `-fastabi` so C++/WinRT actually emits the fast ABI and tear-off
  machinery.
- Only eligible interfaces are promoted into the fast region. Today that means interfaces that are exclusive to the
  runtime class, not inherited from a base runtime class as promoted interfaces on that class, and not overridable.

What a component author does not need to do:

- You do not need to write separate fast and slow method bodies.
- You do not need to manually implement the forwarders or thunk dispatch.
- You do not need to manually reorder interface methods in C++ code.

What still matters in practice is metadata design:

- If an interface is non-exclusive, it will stay on the normal `QueryInterface` path.
- If an interface is overridable, it will stay on the normal path.
- If the class is not marked with `FastAbiAttribute`, clients cannot manufacture a fast projection for it after the
  fact, because the fast ABI slots are part of the component's projected binary shape.

So the component author's job is mostly declarative: mark the runtime class, expose the intended interface structure in
metadata, and generate the component with Fast ABI enabled. If those preconditions hold, the generated scaffolding does
the rest.

### Validation and Samples

The component-side tests in this repo cover:

- Simple fast activation and diagnostics in `test/test_fast/Simple.cpp`.
- Contract-history ordering in `test/test_fast/Nomadic.cpp`.
- Inheritance and composition behavior in `test/test_fast/Composition.cpp`.
- Generated fast-forwarder sizing and override behavior in `test/test_fast_fwd/main.cpp` and
  `test/test_component_fast/Simple.cpp`.

## For Clients

For a client, the point of Fast ABI is that the call sites usually do not change.

You still write projected C++/WinRT code such as:

```cpp
Compositor compositor;
SpriteVisual visual = compositor.CreateSpriteVisual();
visual.StartAnimationGroup();
visual.Offset(123);
visual.Shadow();
```

What changes is how those projected members are implemented under the hood.

With a normal projection, calling a runtime-class member that lives on a secondary interface often means:

1. `QueryInterface` to find that interface.
2. Call the method.
3. `Release` the temporary interface.

With a Fast ABI projection for a marked class, C++/WinRT can instead:

1. Stay on the default interface pointer.
2. Jump directly to the extra fast-ABI slot for the method.

For derived runtime classes, the same idea extends to eligible base-class members through generated base accessors.

What the client can expect:

- The projected runtime-class surface remains the same.
- Calls to promoted interfaces avoid repeated `QueryInterface`/`Release` traffic.
- Default activation of a fast-ABI class avoids the usual conversion step from `ActivateInstance`'s `IInspectable`
  result to the default interface.
- Calls to non-eligible interfaces still use the normal path.

The composition test is the clearest example in this repo. It validates that Fast ABI avoids all of the expected
`QueryInterface` calls for:

- A base-class interface method.
- A secondary interface on the same runtime class.
- A derived-class interface.
- Passing another fast-ABI runtime class instance as a parameter where the slow path would also require
  `QueryInterface`.

It also validates the boundary of the feature: the non-exclusive `IClosable` call still goes through the normal ABI
path.

At the low level, `test/test_fast_fwd/FastForwarderTests.cpp` also verifies the forwarder contract itself:

- property getters and setters forward correctly,
- strings, GUIDs, and structs marshal correctly,
- a large mixed integer/floating-point signature survives register spilling correctly,
- and the owner object's lifetime remains valid until the last forwarder reference is released.

As a client, you generally should not need to create `fast_abi_forwarder` objects manually. They are the mechanism the
generated projection uses to expose the fast path, not a new surface area that typical client code should build around.

### Eligibility

Fast ABI eligibility is controlled by the component, not by the client alone.

That is a consequence of how the feature is implemented. The fast path is not just an alternate client-side calling
strategy over the ordinary WinRT ABI. It depends on extra ABI entries being emitted into the runtime class's default
interface, plus matching producer-side support for forwarders and base accessors.

Because of that, a client cannot take an arbitrary WinRT component and decide to "be fast" locally. If the component did
not declare `FastAbiAttribute` and was not projected/generated with Fast ABI support, the extra fast slots and forwarder
support do not exist in the binary contract the client sees.

Concretely, the client needs the component to declare Fast ABI for three reasons:

- The generator only builds the fast-class cache for runtime classes marked with `FastAbiAttribute`.
- The generated consumer projection only emits fast-path members for default interfaces that map back to one of those
  marked runtime classes.
- The producer projection must emit the matching tear-off and forwarding support so the client's fast calls land on a
  real implementation.

This is why enabling `CppWinRTFastAbi` in a client project is necessary but not sufficient:

- It enables the client projection to use Fast ABI when the component supports it.
- It does not retrofit Fast ABI onto components whose metadata and generated ABI were produced without it.

In short, Fast ABI is a shared contract between producer metadata, producer projection, and consumer projection. The
component has to opt in first; the client can only take advantage of that existing contract.
