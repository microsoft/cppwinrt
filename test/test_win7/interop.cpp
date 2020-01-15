#include "pch.h"
#include <inspectable.h>

struct __declspec(uuid("5040a5f4-796a-42ff-9f06-be89137a518f")) IBase : IUnknown
{
};

struct __declspec(uuid("529fed32-514f-4150-b1ba-15b47df700b7")) IDerived : IBase
{
};

struct __declspec(uuid("b81fb2a2-eab4-488a-96a7-434873c2c20b")) IMoreDerived : IDerived
{
};

namespace winrt
{
    template<> bool is_guid_of<IDerived>(guid const& id) noexcept
    {
        return is_guid_of<IDerived, IBase>(id);
    }

    template<> bool is_guid_of<IMoreDerived>(guid const& id) noexcept
    {
        return is_guid_of<IMoreDerived, IDerived, IBase>(id);
    }
}

using namespace winrt;

struct MyBase : implements<MyBase, IBase>
{
};

struct MyDerived : implements<MyDerived, IDerived>
{
};

struct MyMoreDerived : implements<MyMoreDerived, IMoreDerived, Windows::Foundation::IInspectable>
{
};

Windows::Foundation::IAsyncAction Async()
{
    co_return;
}

TEST_CASE("interop")
{
    {
        Windows::Foundation::IAsyncAction a = Async();
        com_ptr<::IInspectable> b = a.as<::IInspectable>();
        Windows::Foundation::IAsyncAction c = b.as<Windows::Foundation::IAsyncAction>();
        REQUIRE(a == c);
    }
    {
        com_ptr<IBase> a = make<MyBase>();
        REQUIRE(a);
        REQUIRE(a.try_as<IBase>() != nullptr);
        REQUIRE(a.try_as<IDerived>() == nullptr);
        REQUIRE(a.try_as<IMoreDerived>() == nullptr);
        REQUIRE(a.try_as<::IInspectable>() == nullptr);
    }
    {
        com_ptr<IDerived> a = make<MyDerived>();
        REQUIRE(a);
        REQUIRE(a.try_as<IBase>() != nullptr);
        REQUIRE(a.try_as<IDerived>() != nullptr);
        REQUIRE(a.try_as<IMoreDerived>() == nullptr);
        REQUIRE(a.try_as<::IInspectable>() == nullptr);
    }
    {
        com_ptr<IMoreDerived> a = make<MyMoreDerived>();
        REQUIRE(a);
        REQUIRE(a.try_as<IBase>() != nullptr);
        REQUIRE(a.try_as<IDerived>() != nullptr);
        REQUIRE(a.try_as<IMoreDerived>() != nullptr);
        REQUIRE(a.try_as<::IInspectable>() != nullptr);
    }
}
