// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Services.Maps.1.h"
#include "winrt/impl/Windows.Services.Maps.LocalSearch.1.h"

WINRT_EXPORT namespace winrt::Windows::Services::Maps::LocalSearch {

struct LocalCategories
{
    LocalCategories() = delete;
    static hstring BankAndCreditUnions();
    static hstring EatDrink();
    static hstring Hospitals();
    static hstring HotelsAndMotels();
    static hstring All();
    static hstring Parking();
    static hstring SeeDo();
    static hstring Shop();
};

struct WINRT_EBO LocalLocation :
    Windows::Services::Maps::LocalSearch::ILocalLocation,
    impl::require<LocalLocation, Windows::Services::Maps::LocalSearch::ILocalLocation2>
{
    LocalLocation(std::nullptr_t) noexcept {}
};

struct LocalLocationFinder
{
    LocalLocationFinder() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> FindLocalLocationsAsync(param::hstring const& searchTerm, Windows::Devices::Geolocation::Geocircle const& searchArea, param::hstring const& localCategory, uint32_t maxResults);
};

struct WINRT_EBO LocalLocationFinderResult :
    Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult
{
    LocalLocationFinderResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LocalLocationHoursOfOperationItem :
    Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem
{
    LocalLocationHoursOfOperationItem(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LocalLocationRatingInfo :
    Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo
{
    LocalLocationRatingInfo(std::nullptr_t) noexcept {}
};

}
