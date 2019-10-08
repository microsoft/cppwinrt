#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Component;

namespace
{
    struct Type : implements<Type, IStringable>
    {
        hstring ToString() { return L""; }

        ~Type()
        {
            ++Destroyed;
        }

        static inline int Destroyed{};
    };
}

TEST_CASE("smart_pointers_com_ptr")
{
    Type::Destroyed = 0;

    com_ptr<Type> t = make_self<Type>();
    REQUIRE(t);

    // Move constructor.
    com_ptr<Type> t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Move assign.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);
    t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Copy assign.
    t = t2;
    REQUIRE(t);
    REQUIRE(t2);
    REQUIRE(t == t2);

    // Copy assign to self.
    t = t;
    REQUIRE(t);
    REQUIRE(t2);
    REQUIRE(t == t2);

    // Move assign to self.
    t = std::move(t);
    REQUIRE(t);
    REQUIRE(t2);
    REQUIRE(t == t2);

    // Move assign where target has same value
    // should clear the source regardless.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);

    REQUIRE(Type::Destroyed == 0);
    t = nullptr;
    REQUIRE(Type::Destroyed == 1);
}

TEST_CASE("smart_pointers_projected")
{
    Type::Destroyed = 0;

    IStringable t = make<Type>();
    REQUIRE(t);

    // Move constructor.
    IStringable t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Move assign.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);
    t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Copy assign.
    t = t2;
    REQUIRE(t);
    REQUIRE(t2);
    REQUIRE(t == t2);

    // Copy assign to self.
    t = t;
    REQUIRE(t);
    REQUIRE(t2);
    REQUIRE(t == t2);

    // Move assign to self.
    t = std::move(t);
    REQUIRE(t);
    REQUIRE(t2);
    REQUIRE(t == t2);

    // Move assign where target has same value
    // should clear the source regardless.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);

    REQUIRE(Type::Destroyed == 0);
    t = nullptr;
    REQUIRE(Type::Destroyed == 1);
}

TEST_CASE("smart_pointers_weak_ref")
{
    Type::Destroyed = 0;

    IStringable strong = make<Type>();

    weak_ref<IStringable> t{ strong };
    REQUIRE(t);

    // Move constructor.
    weak_ref<IStringable> t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Move assign.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);
    t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Copy assign.
    t = t2;
    REQUIRE(t);
    REQUIRE(t2);

    // Copy assign to self.
    t = t;
    REQUIRE(t);
    REQUIRE(t2);

    // Move assign to self.
    t = std::move(t);
    REQUIRE(t);
    REQUIRE(t2);

    // Move assign where target has same value
    // should clear the source regardless.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);

    REQUIRE(Type::Destroyed == 0);
    strong = nullptr;
    REQUIRE(Type::Destroyed == 1);
}

TEST_CASE("smart_pointers_agile_ref")
{
    Type::Destroyed = 0;

    agile_ref<IStringable> t{ make<Type>() };
    REQUIRE(t);

    // Move constructor.
    agile_ref<IStringable> t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Move assign.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);
    t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Copy assign.
    t = t2;
    REQUIRE(t);
    REQUIRE(t2);

    // Copy assign to self.
    t = t;
    REQUIRE(t);
    REQUIRE(t2);

    // Move assign to self.
    t = std::move(t);
    REQUIRE(t);
    REQUIRE(t2);

    // Move assign where target has same value
    // should clear the source regardless.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);

    REQUIRE(Type::Destroyed == 0);
    t = nullptr;
    REQUIRE(Type::Destroyed == 1);
}

TEST_CASE("smart_pointers_event_revoker")
{
    auto v = single_threaded_observable_vector<int>();
    int handler{};

    event_revoker<IObservableVector<int>> t = v.VectorChanged(auto_revoke, [&](auto&&...)
    {
        ++handler;
    });
    REQUIRE(t);

    // Move constructor.
    event_revoker<IObservableVector<int>> t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Move assign.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);

    // Move assign to self.
    t = std::move(t);
    REQUIRE(t);
    REQUIRE(!t2);

    REQUIRE(handler == 0);
    v.Append(1);
    REQUIRE(handler == 1);
    v.Append(1);
    REQUIRE(handler == 2);

    // Move assign empty.
    REQUIRE(t);
    t = {};
    REQUIRE(!t);

    v.Append(1);
    v.Append(1);
    v.Append(1);
    REQUIRE(handler == 2);

    // rvalue assign.
    handler = 0;
    t = v.VectorChanged(auto_revoke, [&](auto&&...)
    {
        handler += 10;
    });
    v.Append(1);
    REQUIRE(handler == 10);

    // rvalue replace.
    handler = 0;
    t = v.VectorChanged(auto_revoke, [&](auto&&...)
    {
        handler += 10;
    });
    t = v.VectorChanged(auto_revoke, [&](auto&&...)
    {
        handler += 100;
    });
    v.Append(1);
    REQUIRE(handler == 100);
}


TEST_CASE("smart_pointers_factory_event_revoker")
{
    int handler{};

    factory_event_revoker<IEventsStatics> t = Events::StaticEvent(auto_revoke, [&](auto&&...)
    {
        ++handler;
    });
    REQUIRE(t);

    // Move constructor.
    factory_event_revoker<IEventsStatics> t2 = std::move(t);
    REQUIRE(!t);
    REQUIRE(t2);

    // Move assign.
    t = std::move(t2);
    REQUIRE(t);
    REQUIRE(!t2);

    // Move assign to self.
    t = std::move(t);
    REQUIRE(t);
    REQUIRE(!t2);

    REQUIRE(handler == 0);
    Events::RaiseStaticEvent(1);
    REQUIRE(handler == 1);
    Events::RaiseStaticEvent(1);
    REQUIRE(handler == 2);

    // Move assign empty.
    REQUIRE(t);
    t = {};
    REQUIRE(!t);

    Events::RaiseStaticEvent(1);
    Events::RaiseStaticEvent(1);
    Events::RaiseStaticEvent(1);
    REQUIRE(handler == 2);

    // rvalue assign.
    handler = 0;
    t = Events::StaticEvent(auto_revoke, [&](auto&&...)
    {
        handler += 10;
    });
    Events::RaiseStaticEvent(1);
    REQUIRE(handler == 10);

    // rvalue replace.
    handler = 0;
    t = Events::StaticEvent(auto_revoke, [&](auto&&...)
    {
        handler += 10;
    });
    t = Events::StaticEvent(auto_revoke, [&](auto&&...)
    {
        handler += 100;
    });
    Events::RaiseStaticEvent(1);
    REQUIRE(handler == 100);
}
