#include "pch.h"

bool __stdcall test_can_unload_now() noexcept;
void* __stdcall test_get_activation_factory(std::wstring_view const& name);

int32_t __stdcall DllCanUnloadNow() noexcept
{
    return test_can_unload_now() ? 0 : 1;
}

int32_t __stdcall DllGetActivationFactory(void* classId, void** factory) noexcept
{
    try
    {
        uint32_t length{};
        wchar_t const* const buffer = WINRT_WindowsGetStringRawBuffer(classId, &length);
        std::wstring_view const name{ buffer, length };

        *factory = test_get_activation_factory(name);

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
