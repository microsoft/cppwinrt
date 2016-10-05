// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Globalization.PhoneNumberFormatting.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Globalization::PhoneNumberFormatting {

struct WINRT_EBO PhoneNumberFormatter :
    Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter
{
    PhoneNumberFormatter(std::nullptr_t) noexcept {}
    PhoneNumberFormatter();
    static void TryCreate(hstring_ref regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter & phoneNumber);
    static int32_t GetCountryCodeForRegion(hstring_ref regionCode);
    static hstring GetNationalDirectDialingPrefixForRegion(hstring_ref regionCode, bool stripNonDigit);
    static hstring WrapWithLeftToRightMarkers(hstring_ref number);
};

struct WINRT_EBO PhoneNumberInfo :
    Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo,
    impl::require<PhoneNumberInfo, Windows::Foundation::IStringable>
{
    PhoneNumberInfo(std::nullptr_t) noexcept {}
    PhoneNumberInfo(hstring_ref number);
    static Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult TryParse(hstring_ref input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & phoneNumber);
    static Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult TryParse(hstring_ref input, hstring_ref regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo & phoneNumber);
};

}

}
