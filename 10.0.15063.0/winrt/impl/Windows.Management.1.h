// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Management.0.h"

WINRT_EXPORT namespace winrt::Windows::Management {

struct WINRT_EBO IMdmAlert :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmAlert>
{
    IMdmAlert(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMdmSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmSession>
{
    IMdmSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMdmSessionManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMdmSessionManagerStatics>
{
    IMdmSessionManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
