// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Globalization.0.h"
#include "winrt/impl/Windows.Services.Maps.0.h"
#include "winrt/impl/Windows.Services.Maps.LocalSearch.0.h"

WINRT_EXPORT namespace winrt::Windows::Services::Maps::LocalSearch {

struct WINRT_EBO ILocalCategoriesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalCategoriesStatics>
{
    ILocalCategoriesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocalLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocation>
{
    ILocalLocation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocalLocation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocation2>
{
    ILocalLocation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocalLocationFinderResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocationFinderResult>
{
    ILocalLocationFinderResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocalLocationFinderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocationFinderStatics>
{
    ILocalLocationFinderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocalLocationHoursOfOperationItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocationHoursOfOperationItem>
{
    ILocalLocationHoursOfOperationItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILocalLocationRatingInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILocalLocationRatingInfo>
{
    ILocalLocationRatingInfo(std::nullptr_t = nullptr) noexcept {}
};

}
