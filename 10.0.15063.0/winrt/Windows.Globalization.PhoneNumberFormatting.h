// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Globalization.PhoneNumberFormatting.2.h"
#include "winrt/Windows.Globalization.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter<D>::Format(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& number) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter)->Format(get_abi(number), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter<D>::Format(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& number, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat const& numberFormat) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter)->FormatWithOutputFormat(get_abi(number), get_abi(numberFormat), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter<D>::FormatPartialString(param::hstring const& number) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter)->FormatPartialString(get_abi(number), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter<D>::FormatString(param::hstring const& number) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter)->FormatString(get_abi(number), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter<D>::FormatStringWithLeftToRightMarkers(param::hstring const& number) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter)->FormatStringWithLeftToRightMarkers(get_abi(number), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics<D>::TryCreate(param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter& phoneNumber) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics)->TryCreate(get_abi(regionCode), put_abi(phoneNumber)));
}

template <typename D> int32_t consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics<D>::GetCountryCodeForRegion(param::hstring const& regionCode) const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics)->GetCountryCodeForRegion(get_abi(regionCode), &result));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics<D>::GetNationalDirectDialingPrefixForRegion(param::hstring const& regionCode, bool stripNonDigit) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics)->GetNationalDirectDialingPrefixForRegion(get_abi(regionCode), stripNonDigit, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics<D>::WrapWithLeftToRightMarkers(param::hstring const& number) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics)->WrapWithLeftToRightMarkers(get_abi(number), put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>::CountryCode() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo)->get_CountryCode(&value));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>::PhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>::GetLengthOfGeographicalAreaCode() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo)->GetLengthOfGeographicalAreaCode(&result));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>::GetNationalSignificantNumber() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo)->GetNationalSignificantNumber(put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>::GetLengthOfNationalDestinationCode() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo)->GetLengthOfNationalDestinationCode(&result));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>::PredictNumberKind() const
{
    Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo)->PredictNumberKind(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>::GetGeographicRegionCode() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo)->GetGeographicRegionCode(put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>::CheckNumberMatch(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& otherNumber) const
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo)->CheckNumberMatch(get_abi(otherNumber), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory<D>::Create(param::hstring const& number) const
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory)->Create(get_abi(number), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics<D>::TryParse(param::hstring const& input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber) const
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics)->TryParse(get_abi(input), put_abi(phoneNumber), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics<D>::TryParse(param::hstring const& input, param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber) const
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics)->TryParseWithRegion(get_abi(input), get_abi(regionCode), put_abi(phoneNumber), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter> : produce_base<D, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>
{
    HRESULT __stdcall Format(::IUnknown* number, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Format(*reinterpret_cast<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const*>(&number)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FormatWithOutputFormat(::IUnknown* number, abi_t<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat> numberFormat, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Format(*reinterpret_cast<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const*>(&number), *reinterpret_cast<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat const*>(&numberFormat)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FormatPartialString(HSTRING number, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FormatPartialString(*reinterpret_cast<hstring const*>(&number)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FormatString(HSTRING number, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FormatString(*reinterpret_cast<hstring const*>(&number)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FormatStringWithLeftToRightMarkers(HSTRING number, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FormatStringWithLeftToRightMarkers(*reinterpret_cast<hstring const*>(&number)));
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
    HRESULT __stdcall TryCreate(HSTRING regionCode, ::IUnknown** phoneNumber) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TryCreate(*reinterpret_cast<hstring const*>(&regionCode), *reinterpret_cast<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter*>(phoneNumber));
            return S_OK;
        }
        catch (...)
        {
            *phoneNumber = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCountryCodeForRegion(HSTRING regionCode, int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetCountryCodeForRegion(*reinterpret_cast<hstring const*>(&regionCode)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNationalDirectDialingPrefixForRegion(HSTRING regionCode, bool stripNonDigit, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetNationalDirectDialingPrefixForRegion(*reinterpret_cast<hstring const*>(&regionCode), stripNonDigit));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall WrapWithLeftToRightMarkers(HSTRING number, HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().WrapWithLeftToRightMarkers(*reinterpret_cast<hstring const*>(&number)));
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
    HRESULT __stdcall get_CountryCode(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CountryCode());
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall GetLengthOfGeographicalAreaCode(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetLengthOfGeographicalAreaCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNationalSignificantNumber(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetNationalSignificantNumber());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLengthOfNationalDestinationCode(int32_t* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetLengthOfNationalDestinationCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PredictNumberKind(abi_t<Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().PredictNumberKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetGeographicRegionCode(HSTRING* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetGeographicRegionCode());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CheckNumberMatch(::IUnknown* otherNumber, abi_t<Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CheckNumberMatch(*reinterpret_cast<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const*>(&otherNumber)));
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
    HRESULT __stdcall Create(HSTRING number, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&number)));
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
    HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** phoneNumber, abi_t<Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo*>(phoneNumber)));
            return S_OK;
        }
        catch (...)
        {
            *phoneNumber = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryParseWithRegion(HSTRING input, HSTRING regionCode, ::IUnknown** phoneNumber, abi_t<Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryParse(*reinterpret_cast<hstring const*>(&input), *reinterpret_cast<hstring const*>(&regionCode), *reinterpret_cast<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo*>(phoneNumber)));
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

WINRT_EXPORT namespace winrt::Windows::Globalization::PhoneNumberFormatting {

inline PhoneNumberFormatter::PhoneNumberFormatter() :
    PhoneNumberFormatter(activate_instance<PhoneNumberFormatter>())
{}

inline void PhoneNumberFormatter::TryCreate(param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter& phoneNumber)
{
    get_activation_factory<PhoneNumberFormatter, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>().TryCreate(regionCode, phoneNumber);
}

inline int32_t PhoneNumberFormatter::GetCountryCodeForRegion(param::hstring const& regionCode)
{
    return get_activation_factory<PhoneNumberFormatter, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>().GetCountryCodeForRegion(regionCode);
}

inline hstring PhoneNumberFormatter::GetNationalDirectDialingPrefixForRegion(param::hstring const& regionCode, bool stripNonDigit)
{
    return get_activation_factory<PhoneNumberFormatter, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>().GetNationalDirectDialingPrefixForRegion(regionCode, stripNonDigit);
}

inline hstring PhoneNumberFormatter::WrapWithLeftToRightMarkers(param::hstring const& number)
{
    return get_activation_factory<PhoneNumberFormatter, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>().WrapWithLeftToRightMarkers(number);
}

inline PhoneNumberInfo::PhoneNumberInfo(param::hstring const& number) :
    PhoneNumberInfo(get_activation_factory<PhoneNumberInfo, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>().Create(number))
{}

inline Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult PhoneNumberInfo::TryParse(param::hstring const& input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber)
{
    return get_activation_factory<PhoneNumberInfo, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>().TryParse(input, phoneNumber);
}

inline Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult PhoneNumberInfo::TryParse(param::hstring const& input, param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber)
{
    return get_activation_factory<PhoneNumberInfo, Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>().TryParse(input, regionCode, phoneNumber);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter> {};

template<> struct hash<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics> {};

template<> struct hash<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> {};

template<> struct hash<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory> {};

template<> struct hash<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics> {};

template<> struct hash<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter> {};

template<> struct hash<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo> {};

}

WINRT_WARNING_POP
