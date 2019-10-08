#include "pch.h"
#include "catch.hpp"
#include "winrt/Composable.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Composable;

using namespace std::string_view_literals;

namespace
{
    constexpr auto Base_VirtualMethod{ L"Base::VirtualMethod"sv };
    constexpr auto Base_OverridableMethod{ L"Base::OverridableMethod"sv };
    constexpr auto Base_OverridableVirtualMethod{ L"Base::OverridableVirtualMethod"sv };

    constexpr auto Derived_VirtualMethod{ L"Derived::VirtualMethod"sv };
    constexpr auto Derived_OverridableVirtualMethod{ L"Derived::OverridableVirtualMethod"sv };

    constexpr auto OverriddenBase_OverridableMethod{ L"OverriddenBase::OverridableMethod"sv };
    constexpr auto OverriddenBase_OverridableVirtualMethod{ L"OverriddenBase::OverridableVirtualMethod"sv };
}

TEST_CASE("Composable.Base")
{
    Base base;
    REQUIRE(base.VirtualMethod() == Base_VirtualMethod);
    REQUIRE(base.CallOverridableMethod() == Base_OverridableMethod);
    REQUIRE(base.CallOverridableVirtualMethod() == Base_OverridableVirtualMethod);
}

TEST_CASE("Composable.OverriddenBase")
{
    {
        struct OverriddenBase : BaseT<OverriddenBase>
        {
        };
        auto object = make<OverriddenBase>();
        REQUIRE(object.VirtualMethod() == Base_VirtualMethod);
        REQUIRE(object.CallOverridableMethod() == Base_OverridableMethod);
        REQUIRE(object.CallOverridableVirtualMethod() == Base_OverridableVirtualMethod);
    }
    {
        struct OverriddenBase : BaseT<OverriddenBase>
        {
            hstring OverridableMethod() const
            {
                return hstring(OverriddenBase_OverridableMethod);
            }

            hstring OverridableVirtualMethod() const
            {
                return hstring(OverriddenBase_OverridableVirtualMethod);
            }
        };
        auto object = make<OverriddenBase>();
        REQUIRE(object.VirtualMethod() == Base_VirtualMethod);
        REQUIRE(object.CallOverridableMethod() == OverriddenBase_OverridableMethod);
        REQUIRE(object.CallOverridableVirtualMethod() == OverriddenBase_OverridableVirtualMethod);
    }
    {
        const std::wstring OverridableMethodResult = std::wstring(OverriddenBase_OverridableMethod) + L"=>" + Base_OverridableMethod.data();
        const std::wstring OverridableVirtualMethodResult = std::wstring(OverriddenBase_OverridableVirtualMethod) + L"=>" + Base_OverridableVirtualMethod.data();

        struct OverriddenBase : BaseT<OverriddenBase>
        {
            hstring OverridableMethod() const
            {
                return OverriddenBase_OverridableMethod + L"=>" + BaseT<OverriddenBase>::OverridableMethod();
            }

            hstring OverridableVirtualMethod() const
            {
                return OverriddenBase_OverridableVirtualMethod + L"=>" + BaseT<OverriddenBase>::OverridableVirtualMethod();
            }
        };
        auto object = make<OverriddenBase>();
        REQUIRE(object.VirtualMethod() == Base_VirtualMethod);
        REQUIRE(object.CallOverridableMethod() == OverridableMethodResult);
        REQUIRE(object.CallOverridableVirtualMethod() == OverridableVirtualMethodResult);
    }
}

TEST_CASE("Composable.Derived")
{
    Derived obj{ L"Foo" };
    REQUIRE(obj.Name() == L"Foo");
    REQUIRE(obj.VirtualMethod() == Derived_VirtualMethod);
    REQUIRE(obj.CallOverridableMethod() == Base_OverridableMethod);
    REQUIRE(obj.CallOverridableVirtualMethod() == Derived_OverridableVirtualMethod);
}

namespace
{
    // Check for implicit conversions to base types/interfaces from unsealed projection types
    void CallIBase(Composable::IBase const&) {}
    void CallBase(Composable::Base const&) {}
    void CallIDerived(Composable::IDerived const&) {}
    void CallDerived(Composable::Derived const&) {}

    struct Foo : Composable::BaseT<Foo> {};

    void TestCalls(Foo const& obj)
    {
        CallIBase(obj);
        CallBase(obj);
    }

    struct Bar : Composable::DerivedT<Bar> {};

    void TestCalls(Bar const& obj)
    {
        CallIBase(obj);
        CallBase(obj);
        CallIDerived(obj);
        CallDerived(obj);
    }
}

TEST_CASE("Composable conversions")
{
    TestCalls(*make_self<Foo>());
    TestCalls(*make_self<Bar>());
}