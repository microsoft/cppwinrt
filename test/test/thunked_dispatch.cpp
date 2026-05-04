#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

// These functions exercise thunked runtimeclass consumer-side dispatch.
// PropertySet inherits from thunked_runtimeclass<IPropertySet, IMap, IIterable, IObservableMap>.
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
