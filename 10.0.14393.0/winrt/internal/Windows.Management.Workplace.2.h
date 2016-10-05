// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.Workplace.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Workplace {

template <typename D>
struct WINRT_EBO impl_IMdmAllowPolicyStatics
{
    bool IsBrowserAllowed() const;
    bool IsCameraAllowed() const;
    bool IsMicrosoftAccountAllowed() const;
    bool IsStoreAllowed() const;
};

template <typename D>
struct WINRT_EBO impl_IMdmPolicyStatics2
{
    Windows::Management::Workplace::MessagingSyncPolicy GetMessagingSyncPolicy() const;
};

template <typename D>
struct WINRT_EBO impl_IWorkplaceSettingsStatics
{
    bool IsMicrosoftAccountOptional() const;
};

struct IMdmAllowPolicyStatics :
    Windows::IInspectable,
    impl::consume<IMdmAllowPolicyStatics>
{
    IMdmAllowPolicyStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMdmAllowPolicyStatics>(m_ptr); }
};

struct IMdmPolicyStatics2 :
    Windows::IInspectable,
    impl::consume<IMdmPolicyStatics2>
{
    IMdmPolicyStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMdmPolicyStatics2>(m_ptr); }
};

struct IWorkplaceSettingsStatics :
    Windows::IInspectable,
    impl::consume<IWorkplaceSettingsStatics>
{
    IWorkplaceSettingsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWorkplaceSettingsStatics>(m_ptr); }
};

}

}
