// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Globalization.PhoneNumberFormatting.3.h"
#include "Windows.Globalization.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter> : produce_base<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
{
    HRESULT __stdcall abi_Format(abi_arg_in<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> number, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Format(*reinterpret_cast<const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo *>(&number)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FormatWithOutputFormat(abi_arg_in<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> number, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat numberFormat, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Format(*reinterpret_cast<const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo *>(&number), numberFormat));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FormatPartialString(abi_arg_in<hstring> number, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FormatPartialString(*reinterpret_cast<const hstring *>(&number)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FormatString(abi_arg_in<hstring> number, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FormatString(*reinterpret_cast<const hstring *>(&number)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FormatStringWithLeftToRightMarkers(abi_arg_in<hstring> number, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FormatStringWithLeftToRightMarkers(*reinterpret_cast<const hstring *>(&number)));
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
struct produce<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics> : produce_base<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>
{
    HRESULT __stdcall abi_TryCreate(abi_arg_in<hstring> regionCode, abi_arg_out<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter> phoneNumber) noexcept override
    {
        try
        {
            this->shim().TryCreate(*reinterpret_cast<const hstring *>(&regionCode), *phoneNumber);
            return S_OK;
        }
        catch (...)
        {
            *phoneNumber = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCountryCodeForRegion(abi_arg_in<hstring> regionCode, int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetCountryCodeForRegion(*reinterpret_cast<const hstring *>(&regionCode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNationalDirectDialingPrefixForRegion(abi_arg_in<hstring> regionCode, bool stripNonDigit, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetNationalDirectDialingPrefixForRegion(*reinterpret_cast<const hstring *>(&regionCode), stripNonDigit));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WrapWithLeftToRightMarkers(abi_arg_in<hstring> number, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().WrapWithLeftToRightMarkers(*reinterpret_cast<const hstring *>(&number)));
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
struct produce<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> : produce_base<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>
{
    HRESULT __stdcall get_CountryCode(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CountryCode());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall abi_GetLengthOfGeographicalAreaCode(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetLengthOfGeographicalAreaCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNationalSignificantNumber(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetNationalSignificantNumber());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLengthOfNationalDestinationCode(int32_t * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetLengthOfNationalDestinationCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PredictNumberKind(Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().PredictNumberKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetGeographicRegionCode(abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetGeographicRegionCode());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CheckNumberMatch(abi_arg_in<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> otherNumber, Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CheckNumberMatch(*reinterpret_cast<const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo *>(&otherNumber)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory> : produce_base<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<hstring> number, abi_arg_out<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(*reinterpret_cast<const hstring *>(&number)));
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
struct produce<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics> : produce_base<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>
{
    HRESULT __stdcall abi_TryParse(abi_arg_in<hstring> input, abi_arg_out<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> phoneNumber, Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *phoneNumber));
            return S_OK;
        }
        catch (...)
        {
            *phoneNumber = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryParseWithRegion(abi_arg_in<hstring> input, abi_arg_in<hstring> regionCode, abi_arg_out<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> phoneNumber, Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryParse(*reinterpret_cast<const hstring *>(&input), *reinterpret_cast<const hstring *>(&regionCode), *phoneNumber));
            return S_OK;
        }
        catch (...)
        {
            *phoneNumber = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Globalization::PhoneNumberFormatting {

template <typename D> int32_t impl_IPhoneNumberInfo<D>::CountryCode() const
{
    int32_t value {};
    check_hresult(static_cast<const IPhoneNumberInfo &>(static_cast<const D &>(*this))->get_CountryCode(&value));
    return value;
}

template <typename D> hstring impl_IPhoneNumberInfo<D>::PhoneNumber() const
{
    hstring value;
    check_hresult(static_cast<const IPhoneNumberInfo &>(static_cast<const D &>(*this))->get_PhoneNumber(put(value)));
    return value;
}

template <typename D> int32_t impl_IPhoneNumberInfo<D>::GetLengthOfGeographicalAreaCode() const
{
    int32_t result {};
    check_hresult(static_cast<const IPhoneNumberInfo &>(static_cast<const D &>(*this))->abi_GetLengthOfGeographicalAreaCode(&result));
    return result;
}

template <typename D> hstring impl_IPhoneNumberInfo<D>::GetNationalSignificantNumber() const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberInfo &>(static_cast<const D &>(*this))->abi_GetNationalSignificantNumber(put(result)));
    return result;
}

template <typename D> int32_t impl_IPhoneNumberInfo<D>::GetLengthOfNationalDestinationCode() const
{
    int32_t result {};
    check_hresult(static_cast<const IPhoneNumberInfo &>(static_cast<const D &>(*this))->abi_GetLengthOfNationalDestinationCode(&result));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind impl_IPhoneNumberInfo<D>::PredictNumberKind() const
{
    Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind result {};
    check_hresult(static_cast<const IPhoneNumberInfo &>(static_cast<const D &>(*this))->abi_PredictNumberKind(&result));
    return result;
}

template <typename D> hstring impl_IPhoneNumberInfo<D>::GetGeographicRegionCode() const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberInfo &>(static_cast<const D &>(*this))->abi_GetGeographicRegionCode(put(result)));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult impl_IPhoneNumberInfo<D>::CheckNumberMatch(const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & otherNumber) const
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult result {};
    check_hresult(static_cast<const IPhoneNumberInfo &>(static_cast<const D &>(*this))->abi_CheckNumberMatch(get(otherNumber), &result));
    return result;
}

template <typename D> hstring impl_IPhoneNumberFormatter<D>::Format(const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & number) const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberFormatter &>(static_cast<const D &>(*this))->abi_Format(get(number), put(result)));
    return result;
}

template <typename D> hstring impl_IPhoneNumberFormatter<D>::Format(const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & number, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat numberFormat) const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberFormatter &>(static_cast<const D &>(*this))->abi_FormatWithOutputFormat(get(number), numberFormat, put(result)));
    return result;
}

template <typename D> hstring impl_IPhoneNumberFormatter<D>::FormatPartialString(hstring_ref number) const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberFormatter &>(static_cast<const D &>(*this))->abi_FormatPartialString(get(number), put(result)));
    return result;
}

template <typename D> hstring impl_IPhoneNumberFormatter<D>::FormatString(hstring_ref number) const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberFormatter &>(static_cast<const D &>(*this))->abi_FormatString(get(number), put(result)));
    return result;
}

template <typename D> hstring impl_IPhoneNumberFormatter<D>::FormatStringWithLeftToRightMarkers(hstring_ref number) const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberFormatter &>(static_cast<const D &>(*this))->abi_FormatStringWithLeftToRightMarkers(get(number), put(result)));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo impl_IPhoneNumberInfoFactory<D>::Create(hstring_ref number) const
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo result { nullptr };
    check_hresult(static_cast<const IPhoneNumberInfoFactory &>(static_cast<const D &>(*this))->abi_Create(get(number), put(result)));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult impl_IPhoneNumberInfoStatics<D>::TryParse(hstring_ref input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & phoneNumber) const
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult result {};
    check_hresult(static_cast<const IPhoneNumberInfoStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(input), put(phoneNumber), &result));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult impl_IPhoneNumberInfoStatics<D>::TryParse(hstring_ref input, hstring_ref regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & phoneNumber) const
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult result {};
    check_hresult(static_cast<const IPhoneNumberInfoStatics &>(static_cast<const D &>(*this))->abi_TryParseWithRegion(get(input), get(regionCode), put(phoneNumber), &result));
    return result;
}

template <typename D> void impl_IPhoneNumberFormatterStatics<D>::TryCreate(hstring_ref regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter & phoneNumber) const
{
    check_hresult(static_cast<const IPhoneNumberFormatterStatics &>(static_cast<const D &>(*this))->abi_TryCreate(get(regionCode), put(phoneNumber)));
}

template <typename D> int32_t impl_IPhoneNumberFormatterStatics<D>::GetCountryCodeForRegion(hstring_ref regionCode) const
{
    int32_t result {};
    check_hresult(static_cast<const IPhoneNumberFormatterStatics &>(static_cast<const D &>(*this))->abi_GetCountryCodeForRegion(get(regionCode), &result));
    return result;
}

template <typename D> hstring impl_IPhoneNumberFormatterStatics<D>::GetNationalDirectDialingPrefixForRegion(hstring_ref regionCode, bool stripNonDigit) const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberFormatterStatics &>(static_cast<const D &>(*this))->abi_GetNationalDirectDialingPrefixForRegion(get(regionCode), stripNonDigit, put(result)));
    return result;
}

template <typename D> hstring impl_IPhoneNumberFormatterStatics<D>::WrapWithLeftToRightMarkers(hstring_ref number) const
{
    hstring result;
    check_hresult(static_cast<const IPhoneNumberFormatterStatics &>(static_cast<const D &>(*this))->abi_WrapWithLeftToRightMarkers(get(number), put(result)));
    return result;
}

inline PhoneNumberFormatter::PhoneNumberFormatter() :
    PhoneNumberFormatter(activate_instance<PhoneNumberFormatter>())
{}

inline void PhoneNumberFormatter::TryCreate(hstring_ref regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter & phoneNumber)
{
    get_activation_factory<PhoneNumberFormatter, IPhoneNumberFormatterStatics>().TryCreate(regionCode, phoneNumber);
}

inline int32_t PhoneNumberFormatter::GetCountryCodeForRegion(hstring_ref regionCode)
{
    return get_activation_factory<PhoneNumberFormatter, IPhoneNumberFormatterStatics>().GetCountryCodeForRegion(regionCode);
}

inline hstring PhoneNumberFormatter::GetNationalDirectDialingPrefixForRegion(hstring_ref regionCode, bool stripNonDigit)
{
    return get_activation_factory<PhoneNumberFormatter, IPhoneNumberFormatterStatics>().GetNationalDirectDialingPrefixForRegion(regionCode, stripNonDigit);
}

inline hstring PhoneNumberFormatter::WrapWithLeftToRightMarkers(hstring_ref number)
{
    return get_activation_factory<PhoneNumberFormatter, IPhoneNumberFormatterStatics>().WrapWithLeftToRightMarkers(number);
}

inline PhoneNumberInfo::PhoneNumberInfo(hstring_ref number) :
    PhoneNumberInfo(get_activation_factory<PhoneNumberInfo, IPhoneNumberInfoFactory>().Create(number))
{}

inline Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult PhoneNumberInfo::TryParse(hstring_ref input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & phoneNumber)
{
    return get_activation_factory<PhoneNumberInfo, IPhoneNumberInfoStatics>().TryParse(input, phoneNumber);
}

inline Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult PhoneNumberInfo::TryParse(hstring_ref input, hstring_ref regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & phoneNumber)
{
    return get_activation_factory<PhoneNumberInfo, IPhoneNumberInfoStatics>().TryParse(input, regionCode, phoneNumber);
}

}

}
