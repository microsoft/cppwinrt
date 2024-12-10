#include <crtdbg.h>
#include "pch.h"

#define CATCH_CONFIG_RUNNER

// Force reportFatal to be available on mingw-w64
#define CATCH_CONFIG_WINDOWS_SEH

#include "catch.hpp"

int main(int argc, char* argv[])
{
    using namespace winrt;

    init_apartment();
    std::set_terminate(
        []
        {
            reportFatal("Abnormal termination");
            ExitProcess(1);
        });
    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
    (void)_CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDERR);
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
    (void)_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);
    SetThreadUILanguage(MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US));
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

CATCH_TRANSLATE_EXCEPTION(winrt::hresult_error const& e)
{
    return to_string(e.message());
}
