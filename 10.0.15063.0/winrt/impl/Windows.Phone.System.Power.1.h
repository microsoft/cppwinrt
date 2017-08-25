// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.System.Power.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::System::Power {

struct WINRT_EBO IPowerManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPowerManagerStatics>
{
    IPowerManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPowerManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPowerManagerStatics2>
{
    IPowerManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
