// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Perception.People.0.h"

WINRT_EXPORT namespace winrt::Windows::Perception::People {

struct WINRT_EBO IHeadPose :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHeadPose>
{
    IHeadPose(std::nullptr_t = nullptr) noexcept {}
};

}
