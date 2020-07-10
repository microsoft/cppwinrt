#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

TEST_CASE("LookupAs")
{
    auto m = single_threaded_map<hstring, Windows::Foundation::IInspectable>();
    m.Insert(L"uri", Uri(L"http://kennykerr.ca"));
    m.Insert(L"enum", box_value(AsyncStatus::Completed));
    m.Insert(L"underlying_type", box_value(static_cast<int32_t>(AsyncStatus::Error)));
    m.Insert(L"guid", box_value(guid_of<Uri>()));
    m.Insert(L"hstring", box_value(L"Test"));
    m.Insert(L"nullptr", nullptr);

    // Good LookupAs

    REQUIRE(m.LookupAs<Uri>(L"uri").Domain() == L"kennykerr.ca");
    REQUIRE(m.LookupAs<IStringable>(L"uri").ToString() == L"http://kennykerr.ca/");
    REQUIRE(m.LookupAs<AsyncStatus>(L"enum") == AsyncStatus::Completed);
    REQUIRE(m.LookupAs<AsyncStatus>(L"underlying_type") == AsyncStatus::Error);
    REQUIRE(m.LookupAs<guid>(L"guid") == guid_of<Uri>());
    REQUIRE(m.LookupAs<GUID>(L"guid") == static_cast<GUID>(guid_of<Uri>()));
    REQUIRE(m.LookupAs<hstring>(L"hstring") == L"Test");

    // LookupAs edge cases

    REQUIRE_THROWS_AS(m.LookupAs<bool>(L"INVALID"), hresult_out_of_bounds);
    REQUIRE(m.LookupAs<Uri>(L"nullptr") == nullptr);
    REQUIRE_THROWS_AS(m.LookupAs<bool>(L"nullptr"), hresult_no_interface);

    // Bad LookupAs

    REQUIRE_THROWS_AS(m.LookupAs<bool>(L"uri"), hresult_no_interface);
    REQUIRE_THROWS_AS(m.LookupAs<IClosable>(L"uri"), hresult_no_interface);
    REQUIRE_THROWS_AS(m.LookupAs<AsyncStatus>(L"uri"), hresult_no_interface);
    REQUIRE_THROWS_AS(m.LookupAs<guid>(L"uri"), hresult_no_interface);
    REQUIRE_THROWS_AS(m.LookupAs<GUID>(L"uri"), hresult_no_interface);

    // Good TryLookupAs (these tests don't need `.value()` for comparison but it
    // helps to assert that those variants return std::optional)

    REQUIRE(m.TryLookupAs<Uri>(L"uri").Domain() == L"kennykerr.ca");
    REQUIRE(m.TryLookupAs<IStringable>(L"uri").ToString() == L"http://kennykerr.ca/");
    REQUIRE(m.TryLookupAs<AsyncStatus>(L"enum").value() == AsyncStatus::Completed);
    REQUIRE(m.TryLookupAs<AsyncStatus>(L"underlying_type").value() == AsyncStatus::Error);
    REQUIRE(m.TryLookupAs<guid>(L"guid").value() == guid_of<Uri>());
    REQUIRE(m.TryLookupAs<GUID>(L"guid").value() == static_cast<GUID>(guid_of<Uri>()));
    REQUIRE(m.TryLookupAs<hstring>(L"hstring").value() == L"Test");

    // TryLookupAs edge cases

    REQUIRE_FALSE(m.TryLookupAs<bool>(L"INVALID").has_value());
    REQUIRE(m.TryLookupAs<Uri>(L"nullptr") == nullptr);
    REQUIRE_FALSE(m.TryLookupAs<bool>(L"nullptr").has_value());

    // Bad TryLookupAs

    REQUIRE(m.TryLookupAs<IClosable>(L"uri") == nullptr);
    REQUIRE_FALSE(m.TryLookupAs<bool>(L"uri").has_value());
    REQUIRE_FALSE(m.TryLookupAs<AsyncStatus>(L"uri").has_value());
    REQUIRE_FALSE(m.TryLookupAs<guid>(L"uri").has_value());
    REQUIRE_FALSE(m.TryLookupAs<GUID>(L"uri").has_value());
    REQUIRE_FALSE(m.TryLookupAs<hstring>(L"uri").has_value());

    // ValueSet (just making these helpers work inherited)

    ValueSet vs;
    vs.Insert(L"key", box_value(L"value"));
    REQUIRE(vs.LookupAs<hstring>(L"key") == L"value");
    REQUIRE(vs.TryLookupAs<hstring>(L"key") == L"value");
}
