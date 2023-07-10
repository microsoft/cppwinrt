#include "pch.h"
#include "catch.hpp"

//
// These tests cover the production of the three core interfaces namely IUnknown, IInspectable, and IActivationFactory.
// Tests ensure that the ABI surface lines up on the consumer and producer sides and this is mainly done simply by calling
// the various inteface methods.
//

using namespace winrt;
using namespace Windows::Foundation;

//
// IUnknown - tests the most basic support of producing implementations.
//

struct produce_IUnknown : implements<produce_IUnknown, ::IUnknown>
{
    bool & m_destroyed;
    produce_IUnknown(bool & destroyed) : m_destroyed(destroyed) { m_destroyed = false; }
    ~produce_IUnknown() { m_destroyed = true; }
};

TEST_CASE("produce_IUnknown")
{
    bool destroyed = false;
    com_ptr<::IUnknown> p = make<produce_IUnknown>(destroyed);

    {
        // Basic query works for IUnknown.

        com_ptr<Windows::Foundation::IUnknown> qi;
        REQUIRE(S_OK == p->QueryInterface(guid_of<Windows::Foundation::IUnknown>(), qi.put_void()));
        REQUIRE(qi);
    }
    {
        // Query for unsupported interface is rejected.

        com_ptr<Windows::Foundation::IInspectable> qi;
        REQUIRE(E_NOINTERFACE == p->QueryInterface(guid_of<Windows::Foundation::IInspectable>(), qi.put_void()));
        REQUIRE(!qi);
    }
    {
        // C++/WinRT won't let you call AddRef and Release so we confirm they work
        // by retrieving a raw pointer to IUnknown here.

        ::IUnknown * raw = get_abi(p);
        raw->AddRef();
        raw->Release();
    }

    REQUIRE(!destroyed);
    p = nullptr;
    REQUIRE(destroyed);
}

// Unprojected (ABI) interfaces can be implemented.

struct produce_IUnknown_ABI : implements<produce_IUnknown_ABI, ::IUnknown>
{
    bool & m_destroyed;
    produce_IUnknown_ABI(bool & destroyed) : m_destroyed(destroyed) { m_destroyed = false; }
    ~produce_IUnknown_ABI() { m_destroyed = true; }
};

TEST_CASE("produce_IUnknown_ABI")
{
    bool destroyed = false;
    com_ptr<::IUnknown> p = make<produce_IUnknown_ABI>(destroyed);

    REQUIRE(!destroyed);
    p = nullptr;
    REQUIRE(destroyed);
}

//
// IInspectable - tests support for producing implementations with just IInspectable.
//

struct produce_IInspectable : implements<produce_IInspectable, Windows::Foundation::IInspectable>
{
    bool & m_destroyed;
    produce_IInspectable(bool & destroyed) : m_destroyed(destroyed) { m_destroyed = false; }
    ~produce_IInspectable() { m_destroyed = true; }
};

TEST_CASE("produce_IInspectable")
{
    bool destroyed = false;
    Windows::Foundation::IInspectable p = make<produce_IInspectable>(destroyed);

    {
        // Basic query works for IUnknown.

        com_ptr<Windows::Foundation::IUnknown> qi;
        REQUIRE(S_OK == get_unknown(p)->QueryInterface(guid_of<Windows::Foundation::IUnknown>(), qi.put_void()));
        REQUIRE(qi);
    }
    {
        // Query works for IInspectable.

        com_ptr<Windows::Foundation::IInspectable> qi;
        REQUIRE(S_OK == get_unknown(p)->QueryInterface(guid_of<Windows::Foundation::IInspectable>(), qi.put_void()));
        REQUIRE(qi);
    }
    {
        // Query for unsupported interface is rejected.

        com_ptr<IActivationFactory> qi;
        REQUIRE(E_NOINTERFACE == get_unknown(p)->QueryInterface(guid_of<IActivationFactory>(), qi.put_void()));
        REQUIRE(!qi);
    }

    REQUIRE(!destroyed);
    p = nullptr;
    REQUIRE(destroyed);
}

// RuntimeClassName may optionally be implemented with the projection.

struct produce_IInspectable_No_RuntimeClassName : implements<produce_IInspectable_No_RuntimeClassName, Windows::Foundation::IInspectable>
{
};

struct produce_IInspectable_RuntimeClassName : implements<produce_IInspectable_RuntimeClassName, Windows::Foundation::IInspectable>
{
    hstring GetRuntimeClassName()
    {
        return L"produce_IInspectable_RuntimeClassName";
    }
};

TEST_CASE("produce_IInspectable_RuntimeClassName")
{
    Windows::Foundation::IInspectable without = make<produce_IInspectable_No_RuntimeClassName>();
    REQUIRE(get_class_name(without) == L"");

    Windows::Foundation::IInspectable with = make<produce_IInspectable_RuntimeClassName>();
    REQUIRE(get_class_name(with) == L"produce_IInspectable_RuntimeClassName");
}

//
// IActivationFactory
//

struct produce_IActivationFactory_Instance : implements<produce_IActivationFactory_Instance, IStringable>
{
    hstring ToString()
    {
        return L"produce_IActivationFactory_Instance";
    }
};

namespace
{
    bool factory_destroyed{};
}

struct produce_IActivationFactory : implements<produce_IActivationFactory, IActivationFactory>
{
    produce_IActivationFactory() = default;
    ~produce_IActivationFactory() { factory_destroyed = true; }

    Windows::Foundation::IInspectable ActivateInstance()
    {
        return make<produce_IActivationFactory_Instance>();
    }
};

TEST_CASE("produce_IActivationFactory")
{
    IActivationFactory p = make<produce_IActivationFactory>();

    IStringable i = p.ActivateInstance<IStringable>();
    REQUIRE(i.ToString() == L"produce_IActivationFactory_Instance");

    REQUIRE(!factory_destroyed);
    p = nullptr;
    REQUIRE(factory_destroyed);
}
