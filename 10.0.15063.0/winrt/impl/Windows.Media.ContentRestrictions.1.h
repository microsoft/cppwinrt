// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Media.ContentRestrictions.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions {

struct WINRT_EBO IContentRestrictionsBrowsePolicy :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContentRestrictionsBrowsePolicy>
{
    IContentRestrictionsBrowsePolicy(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRatedContentDescription :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRatedContentDescription>
{
    IRatedContentDescription(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRatedContentDescriptionFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRatedContentDescriptionFactory>
{
    IRatedContentDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRatedContentRestrictions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRatedContentRestrictions>
{
    IRatedContentRestrictions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRatedContentRestrictionsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRatedContentRestrictionsFactory>
{
    IRatedContentRestrictionsFactory(std::nullptr_t = nullptr) noexcept {}
};

}
