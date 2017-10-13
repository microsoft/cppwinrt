// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Shell.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities {

struct WINRT_EBO IUserActivity :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivity>
{
    IUserActivity(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserActivityAttribution :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivityAttribution>
{
    IUserActivityAttribution(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserActivityAttributionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivityAttributionFactory>
{
    IUserActivityAttributionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserActivityChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivityChannel>
{
    IUserActivityChannel(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserActivityChannelStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivityChannelStatics>
{
    IUserActivityChannelStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserActivityContentInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivityContentInfo>
{
    IUserActivityContentInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserActivityContentInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivityContentInfoStatics>
{
    IUserActivityContentInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserActivitySession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivitySession>,
    impl::require<IUserActivitySession, Windows::Foundation::IClosable>
{
    IUserActivitySession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserActivityVisualElements :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserActivityVisualElements>
{
    IUserActivityVisualElements(std::nullptr_t = nullptr) noexcept {}
};

}
