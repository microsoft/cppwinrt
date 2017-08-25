// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Provider {

struct WINRT_EBO IPhoneCallOrigin :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOrigin>
{
    IPhoneCallOrigin(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallOrigin2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOrigin2>,
    impl::require<IPhoneCallOrigin2, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
{
    IPhoneCallOrigin2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallOrigin3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOrigin3>,
    impl::require<IPhoneCallOrigin3, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
{
    IPhoneCallOrigin3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallOriginManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOriginManagerStatics>
{
    IPhoneCallOriginManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallOriginManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallOriginManagerStatics2>,
    impl::require<IPhoneCallOriginManagerStatics2, Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
{
    IPhoneCallOriginManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
