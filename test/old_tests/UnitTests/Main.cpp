#include "pch.h"

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int main(int argc, char * argv[])
{
    using namespace winrt;

    init_apartment();
    std::set_terminate([]{ ExitProcess(1); });
    int const result = Catch::Session().run(argc, argv);

    // Completely unnecessary in an app, but useful for testing clear_factory_cache behavior.
    //
    // Normally, we can simply tear down the MTA, which causes the CoreApplication to be
    // torn down as well as any static_lifetime factories. That however prevents us from
    // testing clear_factory_cache. Instead, we forcefully clear out the CoreApplication
    // cache to release any static_lifetime factories so that we can check destructors run
    // and clear_factory_cache works.

    {
        auto factory = get_activation_factory<impl::IStaticLifetime>(L"Windows.ApplicationModel.Core.CoreApplication");
        Windows::Foundation::IUnknown collection;
        check_hresult(factory->GetCollection(put_abi(collection)));
        auto map = collection.as<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>>();
        map.Clear();
    }

    clear_factory_cache();
    uninit_apartment();
    return result;
}
