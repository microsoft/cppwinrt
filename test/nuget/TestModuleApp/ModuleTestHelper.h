#pragma once
#include "ModuleTestHelper.g.h"

namespace winrt::TestModuleApp::implementation
{
    struct ModuleTestHelper : ModuleTestHelperT<ModuleTestHelper>
    {
        ModuleTestHelper() = default;

        Windows::Foundation::Uri CreateUri(hstring const& url)
        {
            return Windows::Foundation::Uri(url);
        }

        Windows::Foundation::IAsyncOperation<hstring> GetStringAsync()
        {
            co_return L"hello from module";
        }
    };
}

namespace winrt::TestModuleApp::factory_implementation
{
    struct ModuleTestHelper : ModuleTestHelperT<ModuleTestHelper, implementation::ModuleTestHelper>
    {
    };
}
