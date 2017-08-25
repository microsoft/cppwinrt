// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Globalization.PhoneNumberFormatting.1.h"

WINRT_EXPORT namespace winrt::Windows::Globalization::PhoneNumberFormatting {

struct WINRT_EBO PhoneNumberFormatter :
    Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter
{
    PhoneNumberFormatter(std::nullptr_t) noexcept {}
    PhoneNumberFormatter();
    static void TryCreate(param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter& phoneNumber);
    static int32_t GetCountryCodeForRegion(param::hstring const& regionCode);
    static hstring GetNationalDirectDialingPrefixForRegion(param::hstring const& regionCode, bool stripNonDigit);
    static hstring WrapWithLeftToRightMarkers(param::hstring const& number);
};

struct WINRT_EBO PhoneNumberInfo :
    Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo,
    impl::require<PhoneNumberInfo, Windows::Foundation::IStringable>
{
    PhoneNumberInfo(std::nullptr_t) noexcept {}
    PhoneNumberInfo(param::hstring const& number);
    static Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult TryParse(param::hstring const& input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber);
    static Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult TryParse(param::hstring const& input, param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber);
};

}
