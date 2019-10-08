#include "pch.h"

extern "C"
{
    int32_t __stdcall OS_RoGetActivationFactory(void* classId, winrt::guid const& iid, void** factory) noexcept;
}

#ifdef _M_IX86
#pragma comment(linker, "/alternatename:_OS_RoGetActivationFactory@12=_RoGetActivationFactory@12")
#else
#pragma comment(linker, "/alternatename:OS_RoGetActivationFactory=RoGetActivationFactory")
#endif

bool starts_with(std::wstring_view value, std::wstring_view match) noexcept
{
    return 0 == value.compare(0, match.size(), match);
}

int32_t __stdcall WINRT_RoGetActivationFactory(void* classId, winrt::guid const& iid, void** factory) noexcept
{
    *factory = nullptr;
    std::wstring_view name{ WINRT_WindowsGetStringRawBuffer(classId, nullptr), WINRT_WindowsGetStringLen(classId) };
    HMODULE library{ nullptr };

    if (starts_with(name, L"Component."))
    {
        library = LoadLibraryW(L"Component.dll");
    }
    else if (starts_with(name, L"Composable."))
    {
        library = LoadLibraryW(L"Composable.dll");
    }
    else if (starts_with(name, L"Reflection."))
    {
        library = LoadLibraryW(L"Reflection.dll");
    }
    else
    {
        return OS_RoGetActivationFactory(classId, iid, factory);
    }

    if (!library)
    {
        return HRESULT_FROM_WIN32(GetLastError());
    }

    using DllGetActivationFactory = HRESULT __stdcall(void* classId, void** factory);
    auto call = reinterpret_cast<DllGetActivationFactory*>(GetProcAddress(library, "DllGetActivationFactory"));

    if (!call)
    {
        HRESULT const hr = HRESULT_FROM_WIN32(GetLastError());
        WINRT_VERIFY(FreeLibrary(library));
        return hr;
    }

    winrt::com_ptr<winrt::Windows::Foundation::IActivationFactory> activation_factory;
    HRESULT const hr = call(classId, activation_factory.put_void());

    if (FAILED(hr))
    {
        WINRT_VERIFY(FreeLibrary(library));
        return hr;
    }

    if (iid != winrt::guid_of<winrt::Windows::Foundation::IActivationFactory>())
    {
        return activation_factory->QueryInterface(iid, factory);
    }

    *factory = activation_factory.detach();
    return S_OK;
}

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
