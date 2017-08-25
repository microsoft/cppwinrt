// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Services.Maps.2.h"
#include "winrt/impl/Windows.Services.Maps.LocalSearch.2.h"
#include "winrt/Windows.Services.Maps.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>::BankAndCreditUnions() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics)->get_BankAndCreditUnions(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>::EatDrink() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics)->get_EatDrink(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>::Hospitals() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics)->get_Hospitals(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>::HotelsAndMotels() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics)->get_HotelsAndMotels(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>::All() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics)->get_All(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>::Parking() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics)->get_Parking(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>::SeeDo() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics)->get_SeeDo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalCategoriesStatics<D>::Shop() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics)->get_Shop(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::MapAddress consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>::Address() const
{
    Windows::Services::Maps::MapAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation)->get_Address(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>::Identifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation)->get_Identifier(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>::Point() const
{
    Windows::Devices::Geolocation::Geopoint value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation)->get_Point(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>::PhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalLocation<D>::DataAttribution() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation)->get_DataAttribution(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalLocation2<D>::Category() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation2)->get_Category(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo consume_Windows_Services_Maps_LocalSearch_ILocalLocation2<D>::RatingInfo() const
{
    Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation2)->get_RatingInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem> consume_Windows_Services_Maps_LocalSearch_ILocalLocation2<D>::HoursOfOperation() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocation2)->get_HoursOfOperation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult)->get_LocalLocations(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderResult<D>::Status() const
{
    Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> consume_Windows_Services_Maps_LocalSearch_ILocalLocationFinderStatics<D>::FindLocalLocationsAsync(param::hstring const& searchTerm, Windows::Devices::Geolocation::Geocircle const& searchArea, param::hstring const& localCategory, uint32_t maxResults) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics)->FindLocalLocationsAsync(get_abi(searchTerm), get_abi(searchArea), get_abi(localCategory), maxResults, put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::DayOfWeek consume_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem<D>::Day() const
{
    Windows::Globalization::DayOfWeek value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem)->get_Day(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem<D>::Start() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem)->get_Start(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Services_Maps_LocalSearch_ILocalLocationHoursOfOperationItem<D>::Span() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem)->get_Span(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo<D>::AggregateRating() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo)->get_AggregateRating(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo<D>::RatingCount() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo)->get_RatingCount(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_LocalSearch_ILocalLocationRatingInfo<D>::ProviderIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo)->get_ProviderIdentifier(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics> : produce_base<D, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
{
    HRESULT __stdcall get_BankAndCreditUnions(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BankAndCreditUnions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EatDrink(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EatDrink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hospitals(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hospitals());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HotelsAndMotels(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HotelsAndMotels());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_All(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().All());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parking(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parking());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SeeDo(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SeeDo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Shop(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Shop());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::LocalSearch::ILocalLocation> : produce_base<D, Windows::Services::Maps::LocalSearch::ILocalLocation>
{
    HRESULT __stdcall get_Address(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Identifier(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Identifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Point(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Point());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataAttribution(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DataAttribution());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::LocalSearch::ILocalLocation2> : produce_base<D, Windows::Services::Maps::LocalSearch::ILocalLocation2>
{
    HRESULT __stdcall get_Category(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RatingInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RatingInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HoursOfOperation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HoursOfOperation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult> : produce_base<D, Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult>
{
    HRESULT __stdcall get_LocalLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LocalLocations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics> : produce_base<D, Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>
{
    HRESULT __stdcall FindLocalLocationsAsync(HSTRING searchTerm, ::IUnknown* searchArea, HSTRING localCategory, uint32_t maxResults, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindLocalLocationsAsync(*reinterpret_cast<hstring const*>(&searchTerm), *reinterpret_cast<Windows::Devices::Geolocation::Geocircle const*>(&searchArea), *reinterpret_cast<hstring const*>(&localCategory), maxResults));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem> : produce_base<D, Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem>
{
    HRESULT __stdcall get_Day(abi_t<Windows::Globalization::DayOfWeek>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Day());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Start(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Start());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Span(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Span());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo> : produce_base<D, Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo>
{
    HRESULT __stdcall get_AggregateRating(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AggregateRating());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RatingCount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RatingCount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderIdentifier(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps::LocalSearch {

inline hstring LocalCategories::BankAndCreditUnions()
{
    return get_activation_factory<LocalCategories, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>().BankAndCreditUnions();
}

inline hstring LocalCategories::EatDrink()
{
    return get_activation_factory<LocalCategories, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>().EatDrink();
}

inline hstring LocalCategories::Hospitals()
{
    return get_activation_factory<LocalCategories, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>().Hospitals();
}

inline hstring LocalCategories::HotelsAndMotels()
{
    return get_activation_factory<LocalCategories, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>().HotelsAndMotels();
}

inline hstring LocalCategories::All()
{
    return get_activation_factory<LocalCategories, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>().All();
}

inline hstring LocalCategories::Parking()
{
    return get_activation_factory<LocalCategories, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>().Parking();
}

inline hstring LocalCategories::SeeDo()
{
    return get_activation_factory<LocalCategories, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>().SeeDo();
}

inline hstring LocalCategories::Shop()
{
    return get_activation_factory<LocalCategories, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>().Shop();
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> LocalLocationFinder::FindLocalLocationsAsync(param::hstring const& searchTerm, Windows::Devices::Geolocation::Geocircle const& searchArea, param::hstring const& localCategory, uint32_t maxResults)
{
    return get_activation_factory<LocalLocationFinder, Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics>().FindLocalLocationsAsync(searchTerm, searchArea, localCategory, maxResults);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::ILocalLocation2> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationFinderStatics> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::LocalCategories> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::LocalCategories> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::LocalLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::LocalLocation> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinder> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem> {};

template<> struct hash<winrt::Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo> {};

}

WINRT_WARNING_POP
