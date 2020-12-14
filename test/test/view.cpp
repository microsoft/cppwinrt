#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation::Collections;

TEST_CASE("VectorGetView")
{
    IVector<int> c = single_threaded_vector<int>({ 1,2,3 });
    IVectorView<int> v = c.GetView();
    REQUIRE(c != v); // Not the same COM identity
    REQUIRE(c.try_as<IVectorView<int>>() == nullptr);
    REQUIRE(v.try_as<IVector<int>>() == nullptr);

    REQUIRE(c.Size() == v.Size());
    REQUIRE(c.GetAt(0) == v.GetAt(0));
    REQUIRE(c.GetAt(1) == v.GetAt(1));
    REQUIRE(c.GetAt(2) == v.GetAt(2));
}

TEST_CASE("MapGetView")
{
    IMap<int, hstring> c = single_threaded_map<int, hstring>();
    c.Insert(1, L"one");
    c.Insert(2, L"two");
    c.Insert(3, L"three");

    IMapView<int, hstring> v = c.GetView();
    REQUIRE(c != v); // Not the same COM identity
    REQUIRE(c.try_as<IMapView<int, hstring>>() == nullptr);
    REQUIRE(v.try_as<IMap<int, hstring>>() == nullptr);

    REQUIRE(c != v);
    REQUIRE(c.Size() == v.Size());
    REQUIRE(c.Lookup(1) == v.Lookup(1));
    REQUIRE(c.Lookup(2) == v.Lookup(2));
    REQUIRE(c.Lookup(3) == v.Lookup(3));
}
