// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Services.TargetedContent.0.h"

WINRT_EXPORT namespace winrt::Windows::Services::TargetedContent {

struct WINRT_EBO ITargetedContentAction :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentAction>
{
    ITargetedContentAction(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentAvailabilityChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentAvailabilityChangedEventArgs>
{
    ITargetedContentAvailabilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentChangedEventArgs>
{
    ITargetedContentChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentCollection :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentCollection>
{
    ITargetedContentCollection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentContainer :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentContainer>
{
    ITargetedContentContainer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentContainerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentContainerStatics>
{
    ITargetedContentContainerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentImage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentImage>,
    impl::require<ITargetedContentImage, Windows::Storage::Streams::IRandomAccessStreamReference>
{
    ITargetedContentImage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentItem>
{
    ITargetedContentItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentItemState :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentItemState>
{
    ITargetedContentItemState(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentObject>
{
    ITargetedContentObject(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentStateChangedEventArgs>
{
    ITargetedContentStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentSubscription :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentSubscription>
{
    ITargetedContentSubscription(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentSubscriptionOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentSubscriptionOptions>
{
    ITargetedContentSubscriptionOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentSubscriptionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentSubscriptionStatics>
{
    ITargetedContentSubscriptionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetedContentValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetedContentValue>
{
    ITargetedContentValue(std::nullptr_t = nullptr) noexcept {}
};

}
