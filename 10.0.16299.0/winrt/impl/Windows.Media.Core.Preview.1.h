// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Media.0.h"
#include "winrt/impl/Windows.Media.Core.Preview.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Core::Preview {

struct WINRT_EBO ISoundLevelBrokerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISoundLevelBrokerStatics>
{
    ISoundLevelBrokerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
