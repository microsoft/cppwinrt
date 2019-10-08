#include "pch.h"
#include "catch.hpp"

//
// These tests confirm the COM identity and other behaviours for agile implementations.
//

using namespace winrt;
using namespace Windows::Foundation;

struct TestAgile : implements<TestAgile, IClosable>
{
    bool & m_destroyed;
    TestAgile(bool & destroyed) : m_destroyed(destroyed) { m_destroyed = false; }
    ~TestAgile() { m_destroyed = true; }

    void Close() {}
};

struct TestNonAgile : implements<TestNonAgile, non_agile, IClosable>
{
    void Close() {}
};

TEST_CASE("TestAgile")
{
    using Windows::Foundation::IUnknown;
    using Windows::Foundation::IInspectable;

    bool destroyed = false;

    {
        IInspectable object = make<TestAgile>(destroyed);

        // Confirm agility:

        object.as<IAgileObject>();

        // Confirm legacy agility:

        com_ptr<IMarshal> marshal = object.as<IMarshal>();

        // Confirm tear-off identity:

        IUnknown object_identity = object.as<IUnknown>();
        IUnknown marshal_identity = marshal.as<IUnknown>();

        REQUIRE(object_identity == marshal_identity);

        REQUIRE(!destroyed);
    }

    // Confirm tear-off does not leak reference:

    REQUIRE(destroyed);
}

TEST_CASE("TestNonAgile")
{
    using Windows::Foundation::IInspectable;

    IInspectable object = make<TestNonAgile>();

    // Does not implement IAgileObject:

    REQUIRE_THROWS_AS(object.as<IAgileObject>(), hresult_no_interface);

    // Does not implement IMarshal:

    REQUIRE_THROWS_AS(object.as<IMarshal>(), hresult_no_interface);
}

TEST_CASE("TestMarshalTearoffLifetime")
{
    using Windows::Foundation::IUnknown;
    using Windows::Foundation::IInspectable;

    bool destroyed = false;

    IInspectable object = make<TestAgile>(destroyed);
    com_ptr<IMarshal> marshal = object.as<IMarshal>();
    object = nullptr;
    REQUIRE(!destroyed);

    // Confirm agility (back to object):

    marshal.as<IAgileObject>();

    // QI on tearoff itself:

    com_ptr<IMarshal> marshal2 = marshal.as<IMarshal>();
    REQUIRE(marshal == marshal2);
    marshal2 = nullptr;

    REQUIRE(!destroyed);
    // Confirm tear-off does not leak reference:
    marshal = nullptr;
    REQUIRE(destroyed);
}

TEST_CASE("TestAgileDelegate")
{
    using Windows::Foundation::IUnknown;
    using Windows::Foundation::IInspectable;

    IUnknown object = Windows::UI::Xaml::CreateDefaultValueCallback([] { return nullptr; });
    com_ptr<IMarshal> marshal = object.as<IMarshal>();
    object = nullptr;

    // Confirm agility (back to object):

    marshal.as<IAgileObject>();

    // QI on tearoff itself:

    com_ptr<IMarshal> marshal2 = marshal.as<IMarshal>();
    REQUIRE(marshal == marshal2);
}

TEST_CASE("TestAgileWeakReference")
{
    using Windows::Foundation::IUnknown;
    using Windows::Foundation::IInspectable;

    bool destroyed = false;
    IClosable object = make<TestAgile>(destroyed);
    com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();

    // Clear object but source keeps object alive
    object = nullptr;
    source.as<IMarshal>();

    com_ptr<winrt::impl::IWeakReference> ref;
    check_hresult(source->GetWeakReference(ref.put()));

    // Drop the source object
    REQUIRE(S_OK == ref->Resolve(guid_of<IClosable>(), put_abi(object)));
    REQUIRE(object != nullptr);
    source = nullptr;
    REQUIRE(!destroyed);
    object = nullptr;
    REQUIRE(destroyed);
    REQUIRE(S_OK == ref->Resolve(guid_of<IClosable>(), put_abi(object)));
    REQUIRE(object == nullptr);

    // Marshaling support on weak ref
    com_ptr<IMarshal> marshal = ref.as<IMarshal>();
    ref = nullptr;

    // Confirm agility (back to object):
    marshal.as<IAgileObject>();

    // QI on tearoff itself:

    com_ptr<IMarshal> marshal2 = marshal.as<IMarshal>();
    REQUIRE(marshal == marshal2);
}
