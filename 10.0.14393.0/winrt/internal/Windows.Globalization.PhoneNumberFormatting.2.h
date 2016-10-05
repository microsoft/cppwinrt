// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.PhoneNumberFormatting.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Globalization::PhoneNumberFormatting {

template <typename D>
struct WINRT_EBO impl_IPhoneNumberFormatter
{
    hstring Format(const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & number) const;
    hstring Format(const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & number, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat numberFormat) const;
    hstring FormatPartialString(hstring_ref number) const;
    hstring FormatString(hstring_ref number) const;
    hstring FormatStringWithLeftToRightMarkers(hstring_ref number) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneNumberFormatterStatics
{
    void TryCreate(hstring_ref regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter & phoneNumber) const;
    int32_t GetCountryCodeForRegion(hstring_ref regionCode) const;
    hstring GetNationalDirectDialingPrefixForRegion(hstring_ref regionCode, bool stripNonDigit) const;
    hstring WrapWithLeftToRightMarkers(hstring_ref number) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneNumberInfo
{
    int32_t CountryCode() const;
    hstring PhoneNumber() const;
    int32_t GetLengthOfGeographicalAreaCode() const;
    hstring GetNationalSignificantNumber() const;
    int32_t GetLengthOfNationalDestinationCode() const;
    Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind PredictNumberKind() const;
    hstring GetGeographicRegionCode() const;
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult CheckNumberMatch(const Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & otherNumber) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneNumberInfoFactory
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo Create(hstring_ref number) const;
};

template <typename D>
struct WINRT_EBO impl_IPhoneNumberInfoStatics
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult TryParse(hstring_ref input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & phoneNumber) const;
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult TryParse(hstring_ref input, hstring_ref regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & phoneNumber) const;
};

struct IPhoneNumberFormatter :
    Windows::IInspectable,
    impl::consume<IPhoneNumberFormatter>
{
    IPhoneNumberFormatter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneNumberFormatter>(m_ptr); }
};

struct IPhoneNumberFormatterStatics :
    Windows::IInspectable,
    impl::consume<IPhoneNumberFormatterStatics>
{
    IPhoneNumberFormatterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneNumberFormatterStatics>(m_ptr); }
};

struct IPhoneNumberInfo :
    Windows::IInspectable,
    impl::consume<IPhoneNumberInfo>
{
    IPhoneNumberInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneNumberInfo>(m_ptr); }
};

struct IPhoneNumberInfoFactory :
    Windows::IInspectable,
    impl::consume<IPhoneNumberInfoFactory>
{
    IPhoneNumberInfoFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneNumberInfoFactory>(m_ptr); }
};

struct IPhoneNumberInfoStatics :
    Windows::IInspectable,
    impl::consume<IPhoneNumberInfoStatics>
{
    IPhoneNumberInfoStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPhoneNumberInfoStatics>(m_ptr); }
};

}

}
