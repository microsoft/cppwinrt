// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.SystemAccess.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess {

struct WINRT_EBO IDeviceAccountConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccountConfiguration>
{
    IDeviceAccountConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceAccountConfiguration2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceAccountConfiguration2>
{
    IDeviceAccountConfiguration2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountSystemAccessManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountSystemAccessManagerStatics>
{
    IUserDataAccountSystemAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataAccountSystemAccessManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataAccountSystemAccessManagerStatics2>
{
    IUserDataAccountSystemAccessManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
