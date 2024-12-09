#include "pch.h"
#include "winrt/base.h"

bool __stdcall winrt_can_unload_now() noexcept
{
    if (winrt::get_module_lock())
    {
        return false;
    }

    winrt::clear_factory_cache();
    return true;
}

void* __stdcall TestStaticLibrary5_get_activation_factory(std::wstring_view const& name);
void* __stdcall TestStaticLibrary6_get_activation_factory(std::wstring_view const& name);

void* __stdcall winrt_get_activation_factory(std::wstring_view const& name)
{
    void* factory = TestStaticLibrary5_get_activation_factory(name);
    if (factory)
    {
        return factory;
    }
    factory = TestStaticLibrary6_get_activation_factory(name);
    if (factory)
    {
        return factory;
    }

    return nullptr;
}

int32_t __stdcall WINRT_CanUnloadNow() noexcept
{
#ifdef _WRL_MODULE_H_
    if (!::Microsoft::WRL::Module<::Microsoft::WRL::InProc>::GetModule().Terminate())
    {
        return 1;
    }
#endif

    return winrt_can_unload_now() ? 0 : 1;
}

int32_t __stdcall WINRT_GetActivationFactory(void* classId, void** factory) noexcept
try
{
    std::wstring_view const name{ *reinterpret_cast<winrt::hstring*>(&classId) };
    *factory = winrt_get_activation_factory(name);

    if (*factory)
    {
        return 0;
    }

#ifdef _WRL_MODULE_H_
    return ::Microsoft::WRL::Module<::Microsoft::WRL::InProc>::GetModule().GetActivationFactory(
        static_cast<HSTRING>(classId), reinterpret_cast<::IActivationFactory**>(factory));
#else
    return winrt::hresult_class_not_available(name).to_abi();
#endif
}
catch (...)
{
    return winrt::to_hresult();
}
