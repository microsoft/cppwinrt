#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct Weak : implements<Weak, IStringable>
    {
        hstring ToString()
        {
            return L"Weak";
        }
    };

    struct WeakNonAgile : implements<WeakNonAgile, IStringable, non_agile>
    {
        hstring ToString()
        {
            return L"WeakNonAgile";
        }
    };

    struct NoWeak : implements<NoWeak, ::IUnknown>
    {
    };

    struct Factory : implements<Factory, IActivationFactory>
    {
        IInspectable ActivateInstance()
        {
            return nullptr;
        }
    };

    struct NoWeakRef : implements<NoWeakRef, IStringable, no_weak_ref>
    {
        hstring ToString()
        {
            return L"NoWeakRef";
        }
    };

    struct WeakNoModuleLock : implements<WeakNoModuleLock, IStringable, no_module_lock>
    {
        hstring ToString()
        {
            return L"WeakNoModuleLock";
        }
    };
}

TEST_CASE("weak,source")
{
    SECTION("resolved")
    {
        IStringable a = make<Weak>();

        weak_ref<IStringable> w = a;
        IStringable b = w.get();
        REQUIRE(b.ToString() == L"Weak");

        // still one outstanding reference
        b = nullptr;
        b = w.get();
        REQUIRE(b != nullptr);

        // no outstanding references
        a = nullptr;
        b = nullptr;
        b = w.get();
        REQUIRE(b == nullptr);
    }

    SECTION("unresolved")
    {
        // default construct
        weak_ref<IStringable> w;

        w = make<Weak>(); // reference is lost right here
        IStringable b = w.get();
        REQUIRE(b == nullptr);
    }

    SECTION("empty")
    {
        weak_ref<IStringable> w;

        IStringable b = w.get();
        REQUIRE(b == nullptr);
    }

    SECTION("make_weak")
    {
        IStringable a = make<Weak>();
        auto w = make_weak(a);
        IStringable b = w.get();
        REQUIRE(b.ToString() == L"Weak");
    }

    // Verify that deduction guides work.
    static_assert(std::is_same_v<weak_ref<IStringable>, decltype(weak_ref(IStringable()))>);
    static_assert(std::is_same_v<weak_ref<Uri>, decltype(weak_ref(std::declval<Uri>()))>);
    static_assert(std::is_same_v<weak_ref<::IPersist>, decltype(weak_ref(com_ptr<::IPersist>()))>);
    static_assert(std::is_same_v<weak_ref<::IPersist>, decltype(make_weak(com_ptr<::IPersist>()))>);
}

TEST_CASE("weak,nullptr")
{
    IStringable a = nullptr;

    {
        weak_ref<IStringable> w = make_weak(a);
        REQUIRE(!w);
    }

    {
        weak_ref<IStringable> w(a);
        REQUIRE(!w);
    }
}

TEST_CASE("weak,QI")
{
    SECTION("weak")
    {
        IStringable object = make<Weak>();
        REQUIRE(object.try_as<Windows::Foundation::IInspectable>());
        REQUIRE(object.try_as<winrt::impl::IWeakReferenceSource>());
        REQUIRE(!object.try_as<winrt::impl::IWeakReference>());

        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
        REQUIRE(!source.try_as<winrt::impl::IWeakReference>());
        REQUIRE(source.try_as<winrt::impl::IWeakReferenceSource>());
        REQUIRE(object.as<::IUnknown>() == source.as<::IUnknown>());
        REQUIRE(object.as<Windows::Foundation::IInspectable>() == source.as<Windows::Foundation::IInspectable>());

        com_ptr<winrt::impl::IWeakReference> ref;
        REQUIRE(S_OK == source->GetWeakReference(ref.put()));
        REQUIRE(!ref.try_as<winrt::impl::IWeakReferenceSource>());
        REQUIRE(!ref.try_as<Windows::Foundation::IInspectable>());
        REQUIRE(ref.as<winrt::impl::IWeakReference>() == ref);
        REQUIRE(ref.as<::IUnknown>() != object.as<::IUnknown>());
    }

    SECTION("no-weak")
    {
        com_ptr<::IUnknown> object = make<NoWeak>();
        REQUIRE(!object.try_as<Windows::Foundation::IInspectable>());
        REQUIRE(!object.try_as<winrt::impl::IWeakReferenceSource>());
        REQUIRE(!object.try_as<winrt::impl::IWeakReference>());
    }

    SECTION("factory")
    {
        IActivationFactory object = make<Factory>();
        REQUIRE(object.try_as<Windows::Foundation::IInspectable>());
        REQUIRE(object.try_as<winrt::impl::IWeakReferenceSource>());
    }

    SECTION("no_weak_ref")
    {
        IStringable object = make<NoWeakRef>();
        REQUIRE(object.try_as<Windows::Foundation::IInspectable>());
        REQUIRE(!object.try_as<winrt::impl::IWeakReferenceSource>());
    }
}

TEST_CASE("weak,lifetime")
{
    {
        IStringable object = make<Weak>();
    }
    {
        IStringable object = make<Weak>();
        object.as<winrt::impl::IWeakReferenceSource>();
    }
    {
        IStringable object = make<Weak>();
        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
    }
    {
        IStringable object = make<Weak>();
        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
        com_ptr<winrt::impl::IWeakReference> ref;
        check_hresult(source->GetWeakReference(ref.put()));
    }
    {
        IStringable object = make<Weak>();
        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
        com_ptr<winrt::impl::IWeakReference> ref;
        check_hresult(source->GetWeakReference(ref.put()));
        IStringable object2;
        check_hresult(ref->Resolve(guid_of<IStringable>(), put_abi(object2)));
        REQUIRE(object == object2);
    }
    {
        IStringable object = make<Weak>();
        com_ptr<winrt::impl::IWeakReference> ref;
        check_hresult(object.as<winrt::impl::IWeakReferenceSource>()->GetWeakReference(ref.put()));
        IStringable object2;
        check_hresult(ref->Resolve(guid_of<IStringable>(), put_abi(object2)));
        REQUIRE(object == object2);
    }
    {
        IStringable object = make<Weak>();
        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
        object = nullptr;
        com_ptr<winrt::impl::IWeakReference> ref;
        check_hresult(source->GetWeakReference(ref.put()));
        check_hresult(ref->Resolve(guid_of<IStringable>(), put_abi(object)));
        REQUIRE(object.ToString() == L"Weak");
    }
    {
        IStringable object = make<Weak>();
        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
        com_ptr<winrt::impl::IWeakReference> ref;
        check_hresult(source->GetWeakReference(ref.put()));
        source = nullptr;
        IStringable object2;
        check_hresult(ref->Resolve(guid_of<IStringable>(), put_abi(object2)));
        REQUIRE(object.ToString() == L"Weak");
    }
    {
        IStringable object = make<Weak>();
        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
        object = nullptr;
        com_ptr<winrt::impl::IWeakReference> ref;
        check_hresult(source->GetWeakReference(ref.put()));
        source = nullptr;
        check_hresult(ref->Resolve(guid_of<IStringable>(), put_abi(object)));
        REQUIRE(object == nullptr);
    }

    {
        IStringable object = make<Weak>();
        weak_ref<IStringable> ref = object;
        REQUIRE(ref.get() == object);
    }
    {
        IStringable object = make<Weak>();
        weak_ref<IStringable> ref = object;
        object = nullptr;
        REQUIRE(ref.get() == nullptr);
    }
    {
        weak_ref<IStringable> ref = make<Weak>();
        REQUIRE(ref.get() == nullptr);
    }
    {
        IStringable object = make<Weak>();
        auto ref = make_weak(object);
        REQUIRE(ref.get() == object);
    }
    {
        IStringable object = make<Weak>();
        auto ref = make_weak(object);
        object = nullptr;
        REQUIRE(ref.get() == nullptr);
    }

    {
        IStringable object = make<Weak>();
        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
        com_ptr<winrt::impl::IWeakReference> ref;
        check_hresult(source->GetWeakReference(ref.put()));

        REQUIRE(object.try_as<IAgileObject>());
        REQUIRE(ref.try_as<IAgileObject>());
        REQUIRE(object.as<IAgileObject>() == source.as<IAgileObject>());
        REQUIRE(object.as<IAgileObject>() != ref.as<IAgileObject>());
    }

    {
        IStringable object = make<WeakNonAgile>();
        com_ptr<winrt::impl::IWeakReferenceSource> source = object.as<winrt::impl::IWeakReferenceSource>();
        com_ptr<winrt::impl::IWeakReference> ref;
        check_hresult(source->GetWeakReference(ref.put()));

        REQUIRE(!object.try_as<IAgileObject>());
        REQUIRE(!ref.try_as<IAgileObject>());
    }
}

TEST_CASE("weak,comparison")
{
    IStringable objectA = make<Weak>();
    IStringable objectB = make<Weak>();
    weak_ref<IStringable> refA1 = objectA;
    weak_ref<IStringable> refA2 = refA1;
    weak_ref<IStringable> refB = objectB;
    weak_ref<IStringable> refNothing = nullptr;

    REQUIRE(refA1 == refA2);
    REQUIRE(!(refA1 != refA2));
    REQUIRE(refA1 != refB);
    REQUIRE(!(refA1 == refB));
    REQUIRE(refA1 != refNothing);
    REQUIRE(!(refA1 == refNothing));
    REQUIRE(refA1 != nullptr);
    REQUIRE(nullptr != refA1);
    REQUIRE(refNothing == nullptr);
    REQUIRE(nullptr == refNothing);

    // Comparisons are against the weak reference itself,
    // not the thing it refers to.
    objectA = nullptr;
    objectB = nullptr;

    REQUIRE(refA1 == refA2);
    REQUIRE(refA1 != refB);
    REQUIRE(refA1 != refNothing);
}

TEST_CASE("weak,module_lock")
{
    uint32_t object_count = get_module_lock();

    IStringable a = make<Weak>();

    // Strong reference counts as an object.
    REQUIRE(get_module_lock() == object_count + 1);

    weak_ref<IStringable> w = a;
    a = nullptr;

    // Weak reference should still count as an object.
    REQUIRE(get_module_lock() == object_count + 1);
}

TEST_CASE("weak,no_module_lock")
{
    uint32_t object_count = get_module_lock();

    IStringable a = make<WeakNoModuleLock>();

    REQUIRE(get_module_lock() == object_count);

    weak_ref<IStringable> w = a;
    a = nullptr;

    // Weak reference to no-module-lock object is also no-module-lock.
    REQUIRE(get_module_lock() == object_count);
}

