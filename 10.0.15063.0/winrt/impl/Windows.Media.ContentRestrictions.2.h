// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Media.ContentRestrictions.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions {

struct WINRT_EBO ContentRestrictionsBrowsePolicy :
    Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy
{
    ContentRestrictionsBrowsePolicy(std::nullptr_t) noexcept {}
};

struct WINRT_EBO RatedContentDescription :
    Windows::Media::ContentRestrictions::IRatedContentDescription
{
    RatedContentDescription(std::nullptr_t) noexcept {}
    RatedContentDescription(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category);
};

struct WINRT_EBO RatedContentRestrictions :
    Windows::Media::ContentRestrictions::IRatedContentRestrictions
{
    RatedContentRestrictions(std::nullptr_t) noexcept {}
    RatedContentRestrictions();
    RatedContentRestrictions(uint32_t maxAgeRating);
};

}
