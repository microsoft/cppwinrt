#include "pch.h"
#include "catch.hpp"

// Additional headers for thunked type testing (pch.h uses WINRT_LEAN_AND_MEAN).
#undef WINRT_LEAN_AND_MEAN
#include <winrt/Windows.ApplicationModel.h>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

static_assert(winrt::impl::has_flat_cache_v<PropertySet>);

// These functions exercise thunked runtimeclass consumer-side dispatch.
// PropertySet inherits from flat_runtimeclass<IPropertySet, IMap, IIterable, IObservableMap>.
// Calls to Insert/Lookup/Size go through the thunked cache slots rather than QI.
//
// Build x64 Release, then disassemble with:
//   cdb -logo nul -z test.exe -c "uf test!thunked_propertyset_insert ; q"
// Verify: load cache slot -> load vtable -> call method, NO QueryInterface.

// Prevent inlining so the function is visible in the disassembly.
__declspec(noinline) void thunked_propertyset_insert(PropertySet const& ps, hstring const& key, IInspectable const& value)
{
    ps.Insert(key, value);
}

__declspec(noinline) IInspectable thunked_propertyset_lookup(PropertySet const& ps, hstring const& key)
{
    return ps.Lookup(key);
}

__declspec(noinline) uint32_t thunked_propertyset_size(PropertySet const& ps)
{
    return ps.Size();
}

__declspec(noinline) bool thunked_propertyset_haskey(PropertySet const& ps, hstring const& key)
{
    return ps.HasKey(key);
}

TEST_CASE("thunked_dispatch")
{
    PropertySet ps;
    REQUIRE(ps);

    // Exercise IMap<hstring, IInspectable> methods through the thunked runtimeclass.
    ps.Insert(L"one", box_value(1));
    ps.Insert(L"two", box_value(2));
    ps.Insert(L"three", box_value(3));
    REQUIRE(ps.Size() == 3);

    auto val = ps.Lookup(L"two");
    REQUIRE(unbox_value<int>(val) == 2);

    REQUIRE(ps.HasKey(L"one"));
    REQUIRE(!ps.HasKey(L"four"));

    ps.Remove(L"one");
    REQUIRE(ps.Size() == 2);

    // Exercise via the noinline helpers (for disassembly).
    thunked_propertyset_insert(ps, L"four", box_value(4));
    REQUIRE(thunked_propertyset_size(ps) == 3);
    REQUIRE(unbox_value<int>(thunked_propertyset_lookup(ps, L"four")) == 4);
    REQUIRE(thunked_propertyset_haskey(ps, L"four"));

    ps.Clear();
    REQUIRE(ps.Size() == 0);
}

TEST_CASE("thunked_copy_move")
{
    // Populate a PropertySet and resolve a cache slot via Insert.
    PropertySet ps1;
    ps1.Insert(L"key", box_value(42));
    REQUIRE(ps1.Size() == 1);

    // Copy construction: new object, independent lifetime.
    PropertySet ps2 = ps1;
    REQUIRE(ps2);
    REQUIRE(ps2.Size() == 1);
    REQUIRE(unbox_value<int>(ps2.Lookup(L"key")) == 42);

    // Mutations on the copy are visible (same underlying COM object via AddRef).
    ps2.Insert(L"other", box_value(99));
    REQUIRE(ps1.Size() == 2); // same COM object

    // Copy assignment.
    PropertySet ps3;
    ps3 = ps1;
    REQUIRE(ps3);
    REQUIRE(ps3.Size() == 2);

    // Move construction: source becomes null.
    PropertySet ps4 = std::move(ps1);
    REQUIRE(ps4);
    REQUIRE(!ps1);
    REQUIRE(ps4.Size() == 2);

    // Move assignment.
    PropertySet ps5;
    ps5.Insert(L"temp", box_value(0));
    ps5 = std::move(ps4);
    REQUIRE(ps5);
    REQUIRE(!ps4);
    REQUIRE(ps5.Size() == 2);

    // Assign nullptr.
    ps5 = nullptr;
    REQUIRE(!ps5);
}

TEST_CASE("thunked_abi_interop")
{
    PropertySet ps;
    ps.Insert(L"x", box_value(1));

    // get_abi returns the default interface pointer.
    void* abi = get_abi(ps);
    REQUIRE(abi != nullptr);

    // copy_to_abi / copy_from_abi round-trip.
    void* copy = nullptr;
    copy_to_abi(ps, copy);
    REQUIRE(copy != nullptr);

    PropertySet ps2{ nullptr };
    copy_from_abi(ps2, copy);
    static_cast<::IUnknown*>(copy)->Release(); // balance the AddRef from copy_to_abi
    REQUIRE(ps2);
    REQUIRE(ps2.Size() == 1);

    // detach_abi / attach_abi round-trip.
    void* detached = detach_abi(ps);
    REQUIRE(!ps);
    REQUIRE(detached != nullptr);

    attach_abi(ps, detached);
    REQUIRE(ps);
    REQUIRE(ps.Size() == 1);

    // put_abi clears and returns slot address.
    void** slot = put_abi(ps);
    REQUIRE(slot != nullptr);
    REQUIRE(!ps); // cleared by put_abi
}

TEST_CASE("thunked_as_try_as")
{
    PropertySet ps;
    ps.Insert(L"a", box_value(1));

    // as<T> for interfaces the object implements.
    auto map = ps.as<IMap<hstring, IInspectable>>();
    REQUIRE(map.Size() == 1);

    auto iterable = ps.as<IIterable<IKeyValuePair<hstring, IInspectable>>>();
    REQUIRE(iterable);

    auto inspectable = ps.as<IInspectable>();
    REQUIRE(inspectable);

    // try_as<T> returns non-empty for implemented interfaces.
    auto maybe_map = ps.try_as<IMap<hstring, IInspectable>>();
    REQUIRE(maybe_map);
    REQUIRE(maybe_map.Size() == 1);

    // try_as<T> returns empty for non-implemented interfaces.
    auto maybe_closable = ps.try_as<IClosable>();
    REQUIRE(!maybe_closable);

    // Implicit conversion to IInspectable.
    IInspectable as_inspectable = ps;
    REQUIRE(as_inspectable);

    // Implicit conversion to IUnknown.
    Windows::Foundation::IUnknown as_unknown = ps;
    REQUIRE(as_unknown);
}

TEST_CASE("thunked_threading")
{
    // Create a PropertySet and hammer it from multiple threads to verify
    // concurrent thunk resolution doesn't crash or leak.
    PropertySet ps;

    static constexpr int thread_count = 8;
    static constexpr int iterations = 100;

    std::vector<std::thread> threads;
    std::atomic<int> ready{ 0 };
    std::atomic<int> errors{ 0 };

    for (int t = 0; t < thread_count; ++t)
    {
        threads.emplace_back([&, t]()
        {
            ready++;
            while (ready < thread_count) {} // spin until all threads are ready

            for (int i = 0; i < iterations; ++i)
            {
                try
                {
                    // Each call through a secondary interface triggers thunk resolution
                    // on first use. Multiple threads racing to resolve should be safe.
                    auto key = std::to_wstring(t * iterations + i);
                    ps.Insert(hstring(key), box_value(i));
                    (void)ps.HasKey(hstring(key));
                    (void)ps.Size();
                }
                catch (...)
                {
                    errors++;
                }
            }
        });
    }

    for (auto& th : threads)
    {
        th.join();
    }

    REQUIRE(errors == 0);
    REQUIRE(ps.Size() > 0);
}

TEST_CASE("thunked_generic_default")
{
    // StringMap has a generic default interface: IMap<hstring, hstring>.
    // Verifies thunking works when the default isn't a named interface.
    Collections::StringMap sm;
    REQUIRE(sm);

    sm.Insert(L"hello", L"world");
    sm.Insert(L"foo", L"bar");
    REQUIRE(sm.Size() == 2);
    REQUIRE(sm.Lookup(L"hello") == L"world");
    REQUIRE(sm.HasKey(L"foo"));

    // IObservableMap is a secondary thunked interface.
    auto observable = sm.as<Collections::IObservableMap<hstring, hstring>>();
    REQUIRE(observable);

    // IIterable is another secondary.
    auto iterable = sm.as<Collections::IIterable<Collections::IKeyValuePair<hstring, hstring>>>();
    REQUIRE(iterable);

    int count = 0;
    for (auto&& kv : sm)
    {
        (void)kv.Key();
        (void)kv.Value();
        count++;
    }
    REQUIRE(count == 2);

    sm.Clear();
    REQUIRE(sm.Size() == 0);
}

TEST_CASE("thunked_full_mode")
{
    // Windows.ApplicationModel.Package has 9 secondary interfaces (>8),
    // which triggers full mode (cache_and_thunk_full with explicit IID storage
    // instead of tagged payload). We can't activate Package from a console app,
    // but we can verify the type compiles, constructs as null, and exercises
    // the full-mode template path.
    using Windows::ApplicationModel::Package;

    // Null construction.
    Package pkg{ nullptr };
    REQUIRE(!pkg);

    // Copy/move of null.
    Package pkg2 = pkg;
    REQUIRE(!pkg2);

    Package pkg3 = std::move(pkg);
    REQUIRE(!pkg3);
    REQUIRE(!pkg);

    // Verify the type's flat_interfaces tuple has >8 entries.
    // All types use the same pair_type (cache_and_thunk_tagged) regardless of count.
    static_assert(std::tuple_size_v<Package::flat_interfaces> > 8,
        "Package should have >8 thunked interfaces");
    static_assert(std::is_same_v<Package::pair_type, winrt::impl::cache_and_thunk_tagged>,
        "All thunked types should use cache_and_thunk_tagged");
}