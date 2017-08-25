// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.System.Profile.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::System::Profile {

struct WINRT_EBO [[deprecated("Use Windows.System.Profile.IRetailInfoStatics instead.")]] IRetailModeStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRetailModeStatics>
{
    IRetailModeStatics(std::nullptr_t = nullptr) noexcept {}
};

}
