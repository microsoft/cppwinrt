#include "pch.h"
#include "winrt/test_component.Delegates.h"

//
// These tests confirm the COM identity and other behaviours for agile implementations.
//

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct TestAgile : implements<TestAgile, IClosable>
    {
        bool& m_destroyed;
        TestAgile(bool& destroyed) : m_destroyed(destroyed) { m_destroyed = false; }
        ~TestAgile() { m_destroyed = true; }

        void Close() {}
    };

    struct TestNonAgile : implements<TestNonAgile, non_agile, IClosable>
    {
        void Close() {}
    };
}

TEST_CASE("agility")
{
    using Windows::Foundation::IUnknown;
    using Windows::Foundation::IInspectable;

    // Test agility
    {
        bool destroyed = false;

        {
            IInspectable object = make<TestAgile>(destroyed);

            // Confirm agility
            object.as<IAgileObject>();

            // Confirm legacy agility
            com_ptr<IMarshal> marshal = object.as<IMarshal>();

            // Confirm tear-off identity
            IUnknown object_identity = object.as<IUnknown>();
            IUnknown marshal_identity = marshal.as<IUnknown>();

            REQUIRE(object_identity == marshal_identity);
            REQUIRE(!destroyed);
        }

        // Confirm tear-off does not leak reference
        REQUIRE(destroyed);
    }

    // Test non-agility
    {
        IInspectable object = make<TestNonAgile>();

        // Does not implement IAgileObject
        REQUIRE_THROWS_AS(object.as<IAgileObject>(), hresult_no_interface);

        // Does not implement IMarshal
        REQUIRE_THROWS_AS(object.as<IMarshal>(), hresult_no_interface);
    }

    // Test IMarshal tearoff lifetime
    {
        bool destroyed = false;

        IInspectable object = make<TestAgile>(destroyed);
        com_ptr<IMarshal> marshal = object.as<IMarshal>();
        object = nullptr;
        REQUIRE(!destroyed);

        // Confirm agility (back to object)
        marshal.as<IAgileObject>();

        // QI on tearoff itself
        com_ptr<IMarshal> marshal2 = marshal.as<IMarshal>();
        REQUIRE(marshal == marshal2);
        marshal2 = nullptr;

        // Confirm tear-off does not leak reference
        REQUIRE(!destroyed);
        marshal = nullptr;
        REQUIRE(destroyed);
    }

    // Test agile delegate
    {
        IUnknown object = test_component::Delegates::AgileDelegate([] {});
        com_ptr<IMarshal> marshal = object.as<IMarshal>();
        object = nullptr;

        // Confirm agility (back to object)
        marshal.as<IAgileObject>();

        // QI on tearoff itself
        com_ptr<IMarshal> marshal2 = marshal.as<IMarshal>();
        REQUIRE(marshal == marshal2);
    }

    // Test agile weak reference
    {
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

        // QI on tearoff itself
        com_ptr<IMarshal> marshal2 = marshal.as<IMarshal>();
        REQUIRE(marshal == marshal2);
    }
}
