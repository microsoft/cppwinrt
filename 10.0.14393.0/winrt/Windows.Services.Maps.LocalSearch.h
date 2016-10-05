// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Services.Maps.3.h"
#include "internal/Windows.Devices.Geolocation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Globalization.3.h"
#include "internal/Windows.Services.Maps.LocalSearch.3.h"
#include "Windows.Services.Maps.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics> : produce_base<D, Windows::Services::Maps::LocalSearch::ILocalCategoriesStatics>
{
    HRESULT __stdcall get_BankAndCreditUnions(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BankAndCreditUnions());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EatDrink(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EatDrink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hospitals(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hospitals());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HotelsAndMotels(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HotelsAndMotels());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_All(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().All());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parking(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parking());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SeeDo(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SeeDo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Shop(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Shop());
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
    HRESULT __stdcall get_Address(abi_arg_out<Windows::Services::Maps::IMapAddress> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Identifier(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Identifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Point(abi_arg_out<Windows::Devices::Geolocation::IGeopoint> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Point());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataAttribution(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataAttribution());
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
    HRESULT __stdcall get_Category(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RatingInfo(abi_arg_out<Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RatingInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HoursOfOperation(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HoursOfOperation());
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
    HRESULT __stdcall get_LocalLocations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalLocations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
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
    HRESULT __stdcall abi_FindLocalLocationsAsync(abi_arg_in<hstring> searchTerm, abi_arg_in<Windows::Devices::Geolocation::IGeocircle> searchArea, abi_arg_in<hstring> localCategory, uint32_t maxResults, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindLocalLocationsAsync(*reinterpret_cast<const hstring *>(&searchTerm), *reinterpret_cast<const Windows::Devices::Geolocation::Geocircle *>(&searchArea), *reinterpret_cast<const hstring *>(&localCategory), maxResults));
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
    HRESULT __stdcall get_Day(Windows::Globalization::DayOfWeek * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Day());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Start(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Start());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Span(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Span());
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
    HRESULT __stdcall get_AggregateRating(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AggregateRating());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RatingCount(abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RatingCount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderIdentifier(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProviderIdentifier());
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

namespace Windows::Services::Maps::LocalSearch {

template <typename D> Windows::Services::Maps::MapAddress impl_ILocalLocation<D>::Address() const
{
    Windows::Services::Maps::MapAddress value { nullptr };
    check_hresult(static_cast<const ILocalLocation &>(static_cast<const D &>(*this))->get_Address(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalLocation<D>::Identifier() const
{
    hstring value;
    check_hresult(static_cast<const ILocalLocation &>(static_cast<const D &>(*this))->get_Identifier(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalLocation<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const ILocalLocation &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalLocation<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const ILocalLocation &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Devices::Geolocation::Geopoint impl_ILocalLocation<D>::Point() const
{
    Windows::Devices::Geolocation::Geopoint value { nullptr };
    check_hresult(static_cast<const ILocalLocation &>(static_cast<const D &>(*this))->get_Point(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalLocation<D>::PhoneNumber() const
{
    hstring value;
    check_hresult(static_cast<const ILocalLocation &>(static_cast<const D &>(*this))->get_PhoneNumber(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalLocation<D>::DataAttribution() const
{
    hstring value;
    check_hresult(static_cast<const ILocalLocation &>(static_cast<const D &>(*this))->get_DataAttribution(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> impl_ILocalLocationFinderResult<D>::LocalLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation> value;
    check_hresult(static_cast<const ILocalLocationFinderResult &>(static_cast<const D &>(*this))->get_LocalLocations(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus impl_ILocalLocationFinderResult<D>::Status() const
{
    Windows::Services::Maps::LocalSearch::LocalLocationFinderStatus value {};
    check_hresult(static_cast<const ILocalLocationFinderResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> impl_ILocalLocationFinderStatics<D>::FindLocalLocationsAsync(hstring_ref searchTerm, const Windows::Devices::Geolocation::Geocircle & searchArea, hstring_ref localCategory, uint32_t maxResults) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> result;
    check_hresult(static_cast<const ILocalLocationFinderStatics &>(static_cast<const D &>(*this))->abi_FindLocalLocationsAsync(get(searchTerm), get(searchArea), get(localCategory), maxResults, put(result)));
    return result;
}

template <typename D> hstring impl_ILocalCategoriesStatics<D>::BankAndCreditUnions() const
{
    hstring value;
    check_hresult(static_cast<const ILocalCategoriesStatics &>(static_cast<const D &>(*this))->get_BankAndCreditUnions(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalCategoriesStatics<D>::EatDrink() const
{
    hstring value;
    check_hresult(static_cast<const ILocalCategoriesStatics &>(static_cast<const D &>(*this))->get_EatDrink(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalCategoriesStatics<D>::Hospitals() const
{
    hstring value;
    check_hresult(static_cast<const ILocalCategoriesStatics &>(static_cast<const D &>(*this))->get_Hospitals(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalCategoriesStatics<D>::HotelsAndMotels() const
{
    hstring value;
    check_hresult(static_cast<const ILocalCategoriesStatics &>(static_cast<const D &>(*this))->get_HotelsAndMotels(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalCategoriesStatics<D>::All() const
{
    hstring value;
    check_hresult(static_cast<const ILocalCategoriesStatics &>(static_cast<const D &>(*this))->get_All(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalCategoriesStatics<D>::Parking() const
{
    hstring value;
    check_hresult(static_cast<const ILocalCategoriesStatics &>(static_cast<const D &>(*this))->get_Parking(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalCategoriesStatics<D>::SeeDo() const
{
    hstring value;
    check_hresult(static_cast<const ILocalCategoriesStatics &>(static_cast<const D &>(*this))->get_SeeDo(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalCategoriesStatics<D>::Shop() const
{
    hstring value;
    check_hresult(static_cast<const ILocalCategoriesStatics &>(static_cast<const D &>(*this))->get_Shop(put(value)));
    return value;
}

template <typename D> Windows::Globalization::DayOfWeek impl_ILocalLocationHoursOfOperationItem<D>::Day() const
{
    Windows::Globalization::DayOfWeek value {};
    check_hresult(static_cast<const ILocalLocationHoursOfOperationItem &>(static_cast<const D &>(*this))->get_Day(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ILocalLocationHoursOfOperationItem<D>::Start() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ILocalLocationHoursOfOperationItem &>(static_cast<const D &>(*this))->get_Start(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ILocalLocationHoursOfOperationItem<D>::Span() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ILocalLocationHoursOfOperationItem &>(static_cast<const D &>(*this))->get_Span(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_ILocalLocationRatingInfo<D>::AggregateRating() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const ILocalLocationRatingInfo &>(static_cast<const D &>(*this))->get_AggregateRating(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_ILocalLocationRatingInfo<D>::RatingCount() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(static_cast<const ILocalLocationRatingInfo &>(static_cast<const D &>(*this))->get_RatingCount(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalLocationRatingInfo<D>::ProviderIdentifier() const
{
    hstring value;
    check_hresult(static_cast<const ILocalLocationRatingInfo &>(static_cast<const D &>(*this))->get_ProviderIdentifier(put(value)));
    return value;
}

template <typename D> hstring impl_ILocalLocation2<D>::Category() const
{
    hstring value;
    check_hresult(static_cast<const ILocalLocation2 &>(static_cast<const D &>(*this))->get_Category(put(value)));
    return value;
}

template <typename D> Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo impl_ILocalLocation2<D>::RatingInfo() const
{
    Windows::Services::Maps::LocalSearch::LocalLocationRatingInfo value { nullptr };
    check_hresult(static_cast<const ILocalLocation2 &>(static_cast<const D &>(*this))->get_RatingInfo(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem> impl_ILocalLocation2<D>::HoursOfOperation() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocationHoursOfOperationItem> value;
    check_hresult(static_cast<const ILocalLocation2 &>(static_cast<const D &>(*this))->get_HoursOfOperation(put(value)));
    return value;
}

inline hstring LocalCategories::BankAndCreditUnions()
{
    return get_activation_factory<LocalCategories, ILocalCategoriesStatics>().BankAndCreditUnions();
}

inline hstring LocalCategories::EatDrink()
{
    return get_activation_factory<LocalCategories, ILocalCategoriesStatics>().EatDrink();
}

inline hstring LocalCategories::Hospitals()
{
    return get_activation_factory<LocalCategories, ILocalCategoriesStatics>().Hospitals();
}

inline hstring LocalCategories::HotelsAndMotels()
{
    return get_activation_factory<LocalCategories, ILocalCategoriesStatics>().HotelsAndMotels();
}

inline hstring LocalCategories::All()
{
    return get_activation_factory<LocalCategories, ILocalCategoriesStatics>().All();
}

inline hstring LocalCategories::Parking()
{
    return get_activation_factory<LocalCategories, ILocalCategoriesStatics>().Parking();
}

inline hstring LocalCategories::SeeDo()
{
    return get_activation_factory<LocalCategories, ILocalCategoriesStatics>().SeeDo();
}

inline hstring LocalCategories::Shop()
{
    return get_activation_factory<LocalCategories, ILocalCategoriesStatics>().Shop();
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::LocalSearch::LocalLocationFinderResult> LocalLocationFinder::FindLocalLocationsAsync(hstring_ref searchTerm, const Windows::Devices::Geolocation::Geocircle & searchArea, hstring_ref localCategory, uint32_t maxResults)
{
    return get_activation_factory<LocalLocationFinder, ILocalLocationFinderStatics>().FindLocalLocationsAsync(searchTerm, searchArea, localCategory, maxResults);
}

}

}
