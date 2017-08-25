// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.CommunicationBlocking.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::CommunicationBlocking {

struct WINRT_EBO ICommunicationBlockingAccessManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommunicationBlockingAccessManagerStatics>
{
    ICommunicationBlockingAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICommunicationBlockingAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommunicationBlockingAppManagerStatics>
{
    ICommunicationBlockingAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICommunicationBlockingAppManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICommunicationBlockingAppManagerStatics2>,
    impl::require<ICommunicationBlockingAppManagerStatics2, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
{
    ICommunicationBlockingAppManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
