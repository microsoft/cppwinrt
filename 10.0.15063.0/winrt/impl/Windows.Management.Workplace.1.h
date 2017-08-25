// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Management.Workplace.0.h"

WINRT_EXPORT namespace winrt::Windows::Management::Workplace {

struct WINRT_EBO IMdmAllowPolicyStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmAllowPolicyStatics>
{
    IMdmAllowPolicyStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMdmPolicyStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmPolicyStatics2>
{
    IMdmPolicyStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWorkplaceSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWorkplaceSettingsStatics>
{
    IWorkplaceSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

}
