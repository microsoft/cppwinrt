// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.ApplicationModel.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::ApplicationModel {

struct WINRT_EBO IApplicationProfileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApplicationProfileStatics>
{
    IApplicationProfileStatics(std::nullptr_t = nullptr) noexcept {}
};

}
