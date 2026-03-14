#include <crtdbg.h>
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <windows.h>

// Defining WINRT_NO_MODULE_LOCK means that winrt::get_module_lock is not defined and calls to it are elided from C++/WinRT.
// This is an optimization for apps (executables) that don't implement something like DllCanUnloadNow.

#define WINRT_NO_MODULE_LOCK
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.System.Diagnostics.h"

namespace
{
    struct FastStringable : winrt::implements<FastStringable, winrt::Windows::Foundation::IStringable>
    {
        winrt::hstring ToString()
        {
            return L"FastStringable";
        }
    };
}

TEST_CASE("module_lock_none")
{
    REQUIRE(++winrt::get_module_lock() == 1);
    REQUIRE(++winrt::get_module_lock() == 1);

    REQUIRE(--winrt::get_module_lock() == 0);
    REQUIRE(--winrt::get_module_lock() == 0);

    // Validates that you can still construct an implementation without a module lock.

    winrt::make<FastStringable>();

    // Validates that clear_factory_cache is still callable, but has no effect.
    // Windows.System.Diagnostics is used because it is implemented in C++/WinRT that
    // unlike WRL, does not cache factories inside the implementation. Client-side
    // caching is far more effective.

    void* first = nullptr;
    void* second = nullptr;

    {
        auto factory = winrt::get_activation_factory<winrt::Windows::System::Diagnostics::SystemDiagnosticInfo>();
        first = winrt::get_abi(factory);
    }
    winrt::clear_factory_cache();

    {
        auto factory = winrt::get_activation_factory<winrt::Windows::System::Diagnostics::SystemDiagnosticInfo>();
        second = winrt::get_abi(factory);
    }
    winrt::clear_factory_cache();

    REQUIRE(first == second);

    // Validates that test_component_base is pinned by virtue of it defining WINRT_NO_MODULE_LOCK.

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wcast-function-type-mismatch"
#endif
    auto can_unload = reinterpret_cast<HRESULT(__stdcall*)()>(GetProcAddress(LoadLibraryA("test_component_base.dll"), "DllCanUnloadNow"));
    REQUIRE(can_unload() == S_FALSE);

    auto cannot_unload = reinterpret_cast<HRESULT(__stdcall*)()>(GetProcAddress(LoadLibraryA("test_component_derived.dll"), "DllCanUnloadNow"));
    REQUIRE(cannot_unload() == S_OK);
#ifdef __clang__
#pragma clang diagnostic pop
#endif
}

int main(int const argc, char** argv)
{
    std::set_terminate([] { reportFatal("Abnormal termination"); ExitProcess(1); });
    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
    (void)_CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDERR);
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
    (void)_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDERR);
    return Catch::Session().run(argc, argv);
}

CATCH_TRANSLATE_EXCEPTION(winrt::hresult_error const& e)
{
    return to_string(e.message());
}
