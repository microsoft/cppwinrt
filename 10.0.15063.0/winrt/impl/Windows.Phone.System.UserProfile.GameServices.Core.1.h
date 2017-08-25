// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Phone.System.UserProfile.GameServices.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::System::UserProfile::GameServices::Core {

struct WINRT_EBO IGameService :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameService>
{
    IGameService(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameService2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameService2>
{
    IGameService2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGameServicePropertyCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameServicePropertyCollection>
{
    IGameServicePropertyCollection(std::nullptr_t = nullptr) noexcept {}
};

}
