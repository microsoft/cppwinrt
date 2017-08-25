// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Services.TargetedContent.1.h"

WINRT_EXPORT namespace winrt::Windows::Services::TargetedContent {

struct WINRT_EBO TargetedContentAction :
    Windows::Services::TargetedContent::ITargetedContentAction
{
    TargetedContentAction(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentAvailabilityChangedEventArgs :
    Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs
{
    TargetedContentAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentChangedEventArgs :
    Windows::Services::TargetedContent::ITargetedContentChangedEventArgs
{
    TargetedContentChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentCollection :
    Windows::Services::TargetedContent::ITargetedContentCollection
{
    TargetedContentCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentContainer :
    Windows::Services::TargetedContent::ITargetedContentContainer
{
    TargetedContentContainer(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> GetAsync(param::hstring const& contentId);
};

struct WINRT_EBO TargetedContentFile :
    Windows::Storage::Streams::IRandomAccessStreamReference
{
    TargetedContentFile(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentImage :
    Windows::Services::TargetedContent::ITargetedContentImage
{
    TargetedContentImage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentItem :
    Windows::Services::TargetedContent::ITargetedContentItem
{
    TargetedContentItem(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentItemState :
    Windows::Services::TargetedContent::ITargetedContentItemState
{
    TargetedContentItemState(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentObject :
    Windows::Services::TargetedContent::ITargetedContentObject
{
    TargetedContentObject(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentStateChangedEventArgs :
    Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs
{
    TargetedContentStateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentSubscription :
    Windows::Services::TargetedContent::ITargetedContentSubscription
{
    TargetedContentSubscription(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> GetAsync(param::hstring const& subscriptionId);
    static Windows::Services::TargetedContent::TargetedContentSubscriptionOptions GetOptions(param::hstring const& subscriptionId);
};

struct WINRT_EBO TargetedContentSubscriptionOptions :
    Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions
{
    TargetedContentSubscriptionOptions(std::nullptr_t) noexcept {}
};

struct WINRT_EBO TargetedContentValue :
    Windows::Services::TargetedContent::ITargetedContentValue
{
    TargetedContentValue(std::nullptr_t) noexcept {}
};

}
