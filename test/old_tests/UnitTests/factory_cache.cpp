#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;

namespace
{
    void clear_static_lifetime_store()
    {
        auto factory = get_activation_factory<impl::IStaticLifetime>(L"Windows.ApplicationModel.Core.CoreApplication");
        Windows::Foundation::IUnknown collection;
        check_hresult(factory->GetCollection(put_abi(collection)));
        auto map = collection.as<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>>();
        map.Clear();
    }
}

TEST_CASE("factory_cache")
{
    // Manually clear the static lifetime store bound to the MTA

    clear_static_lifetime_store();

    // Clear the cache

    clear_factory_cache();
    CoFreeUnusedLibrariesEx(0, 0);

    // Cache some factories

    auto a = get_activation_factory<Component::Errors>();
    auto b = get_activation_factory<Component::Events>();

    // Make sure they're cached

    REQUIRE(a == get_activation_factory<Component::Errors>());
    REQUIRE(b == get_activation_factory<Component::Events>());

    // Clear the cache again

    clear_factory_cache();

    // Make sure 'Errors' is unique

    REQUIRE(a != get_activation_factory<Component::Errors>());

    // 'Events' remains because it uses static_lifetime

    REQUIRE(b == get_activation_factory<Component::Events>());

    // Clear the factory cache *AND* the static lifetime store

    clear_factory_cache();
    clear_static_lifetime_store();

    // Make sure 'Events' is unique

    REQUIRE(b != get_activation_factory<Component::Events>());
}
