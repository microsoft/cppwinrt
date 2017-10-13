// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

struct WINRT_EBO IOemSupportInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOemSupportInfo>
{
    IOemSupportInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmbiosInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmbiosInformationStatics>
{
    ISmbiosInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemSupportInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemSupportInfoStatics>
{
    ISystemSupportInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

}
