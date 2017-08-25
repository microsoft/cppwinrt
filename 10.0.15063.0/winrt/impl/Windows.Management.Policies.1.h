// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Management.Policies.0.h"

WINRT_EXPORT namespace winrt::Windows::Management::Policies {

struct WINRT_EBO INamedPolicyData :
    Windows::Foundation::IInspectable,
    impl::consume_t<INamedPolicyData>
{
    INamedPolicyData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INamedPolicyStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<INamedPolicyStatics>
{
    INamedPolicyStatics(std::nullptr_t = nullptr) noexcept {}
};

}
