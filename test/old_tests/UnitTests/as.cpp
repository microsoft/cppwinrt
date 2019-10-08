#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::UI::Composition;

namespace
{
    struct Thing : implements<Thing, IStringable, IClosable>
    {
        hstring ToString()
        {
            return {};
        }

        void Close()
        {
        }
    };

    // This is to ensure that com_ptr knows how to QueryInterface an object that doesn't inherit from IUnknown.
    struct Stringable_non_agile : implements<Stringable_non_agile, IStringable, non_agile>
    {
        hstring ToString()
        {
            return hstring{ L"Stringable_non_agile" };
        }
    };
    static_assert(!std::is_base_of_v<::IUnknown, Stringable_non_agile>);
}

TEST_CASE("as<T>")
{
    IStringable s = make<Thing>();

    com_ptr<::IUnknown> u = s.as<::IUnknown>();

    IClosable c = u.as<IClosable>();

    REQUIRE_THROWS_AS(u.as<::IDispatch>(), hresult_no_interface);

    REQUIRE_THROWS_AS(u.as<IPropertyValue>(), hresult_no_interface);

    REQUIRE(s == c);
}

TEST_CASE("try_as<T>")
{
    IStringable s = make<Thing>();

    com_ptr<::IUnknown> u = s.try_as<::IUnknown>();
    REQUIRE(u);

    IClosable c = u.try_as<IClosable>();
    REQUIRE(s == c);

    com_ptr<::IDispatch> d = s.try_as<::IDispatch>();
    REQUIRE(!d);

    IPropertyValue pv = s.try_as<IPropertyValue>();
    REQUIRE(!pv);
}

TEST_CASE("as(T)")
{
    IStringable s = make<Thing>();

    com_ptr<::IUnknown> u;
    s.as(u);

    IClosable c;
    u.as(c);

    com_ptr<::IDispatch> d;
    REQUIRE_THROWS_AS(u.as(d), hresult_no_interface);

    IPropertyValue pv;
    REQUIRE_THROWS_AS(u.as(pv), hresult_no_interface);

    REQUIRE(s == c);
}

TEST_CASE("try_as(T)")
{
    IStringable s = make<Thing>();

    com_ptr<::IUnknown> u;
    s.try_as(u);
    REQUIRE(u);

    IClosable c;
    u.try_as(c);
    REQUIRE(s == c);

    com_ptr<::IDispatch> d;
    s.try_as(d);
    REQUIRE(!d);

    IPropertyValue pv;
    s.try_as(pv);
    REQUIRE(!pv);
}

TEST_CASE("as, non-IUnknown")
{
    constexpr auto test_string = L"Stringable_non_agile";
    com_ptr<Stringable_non_agile> obj = make_self<Stringable_non_agile>();

    REQUIRE(obj->ToString() == test_string);
    REQUIRE(obj.as<IStringable>().ToString() == test_string);

    auto obj_IStringable = obj.try_as<IStringable>();
    REQUIRE(obj_IStringable != nullptr);
    REQUIRE(obj_IStringable.ToString() == test_string);
}

TEST_CASE("as empty")
{
    Uri uri{ nullptr };

    IStringable stringable = uri.as<IStringable>();
    REQUIRE(stringable == nullptr);
}

TEST_CASE("try_as empty")
{
    Uri uri{ nullptr };

    IStringable stringable = uri.try_as<IStringable>();
    REQUIRE(stringable == nullptr);
}

TEST_CASE("require empty")
{
    Uri uri{ nullptr };

    IStringable stringable = uri;
    REQUIRE(stringable == nullptr);
}

TEST_CASE("base empty")
{
    SpriteVisual sprite{ nullptr };

    Visual visual = sprite;
    REQUIRE(visual == nullptr);
}
