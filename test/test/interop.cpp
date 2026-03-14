#include "pch.h"
#include <inspectable.h>

struct DECLSPEC_UUID("5040a5f4-796a-42ff-9f06-be89137a518f") IBase : IUnknown
{
};

struct DECLSPEC_UUID("529fed32-514f-4150-b1ba-15b47df700b7") IDerived : IBase
{
};

struct DECLSPEC_UUID("b81fb2a2-eab4-488a-96a7-434873c2c20b") IMoreDerived : IDerived
{
};

#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBase, 0x5040a5f4, 0x796a, 0x42ff, 0x9f, 0x06, 0xbe, 0x89, 0x13, 0x7a, 0x51, 0x8f)
__CRT_UUID_DECL(IDerived, 0x529fed32, 0x514f, 0x4150, 0xb1, 0xba, 0x15, 0xb4, 0x7d, 0xf7, 0x00, 0xb7)
__CRT_UUID_DECL(IMoreDerived, 0xb81fb2a2, 0xeab4, 0x488a, 0x96, 0xa7, 0x43, 0x48, 0x73, 0xc2, 0xc2, 0x0b)
#endif

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
