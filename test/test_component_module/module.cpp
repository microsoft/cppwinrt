#include "pch.h"

#ifdef WINRT_IMPORT_STD
import std;
#endif
import winrt;

bool __stdcall test_module_can_unload_now() noexcept;
void* __stdcall test_module_get_activation_factory(std::wstring_view const& name);

std::int32_t __stdcall DllCanUnloadNow() noexcept
{
    return test_module_can_unload_now() ? 0 : 1;
}

std::int32_t __stdcall DllGetActivationFactory(void* classId, void** factory) noexcept
{
    try
    {
        std::wstring_view const name{ *reinterpret_cast<winrt::hstring*>(&classId) };
        *factory = test_module_get_activation_factory(name);

        if (*factory)
        {
            return 0;
        }

        return winrt::hresult_class_not_available(name).to_abi();
    }
    catch (...)
    {
        return winrt::to_hresult();
    }
}
