// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Globalization::PhoneNumberFormatting {

enum class PhoneNumberFormat
{
    E164 = 0,
    International = 1,
    National = 2,
    Rfc3966 = 3,
};

enum class PhoneNumberMatchResult
{
    NoMatch = 0,
    ShortNationalSignificantNumberMatch = 1,
    NationalSignificantNumberMatch = 2,
    ExactMatch = 3,
};

enum class PhoneNumberParseResult
{
    Valid = 0,
    NotANumber = 1,
    InvalidCountryCode = 2,
    TooShort = 3,
    TooLong = 4,
};

enum class PredictedPhoneNumberKind
{
    FixedLine = 0,
    Mobile = 1,
    FixedLineOrMobile = 2,
    TollFree = 3,
    PremiumRate = 4,
    SharedCost = 5,
    Voip = 6,
    PersonalNumber = 7,
    Pager = 8,
    UniversalAccountNumber = 9,
    Voicemail = 10,
    Unknown = 11,
};

struct IPhoneNumberFormatter;
struct IPhoneNumberFormatterStatics;
struct IPhoneNumberInfo;
struct IPhoneNumberInfoFactory;
struct IPhoneNumberInfoStatics;
struct PhoneNumberFormatter;
struct PhoneNumberInfo;

}

namespace winrt::impl {

template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>{ using type = interface_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>{ using type = interface_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>{ using type = class_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>{ using type = class_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat>{ using type = enum_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult>{ using type = enum_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>{ using type = enum_category; };
template <> struct category<Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind>{ using type = enum_category; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatter" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberFormatterStatics" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfo" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoFactory" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.IPhoneNumberInfoStatics" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormatter" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberInfo" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberFormat" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberMatchResult" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PhoneNumberParseResult" }; };
template <> struct name<Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind>{ static constexpr auto & value{ L"Windows.Globalization.PhoneNumberFormatting.PredictedPhoneNumberKind" }; };
template <> struct guid<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>{ static constexpr GUID value{ 0x1556B49E,0xBAD4,0x4B4A,{ 0x90,0x0D,0x44,0x07,0xAD,0xB7,0xC9,0x81 } }; };
template <> struct guid<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>{ static constexpr GUID value{ 0x5CA6F931,0x84D9,0x414B,{ 0xAB,0x4E,0xA0,0x55,0x2C,0x87,0x86,0x02 } }; };
template <> struct guid<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>{ static constexpr GUID value{ 0x1C7CE4DD,0xC8B4,0x4EA3,{ 0x9A,0xEF,0xB3,0x42,0xE2,0xC5,0xB4,0x17 } }; };
template <> struct guid<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>{ static constexpr GUID value{ 0x8202B964,0xADAA,0x4CFF,{ 0x8F,0xCF,0x17,0xE7,0x51,0x6A,0x28,0xFF } }; };
template <> struct guid<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>{ static constexpr GUID value{ 0x5B3F4F6A,0x86A9,0x40E9,{ 0x86,0x49,0x6D,0x61,0x16,0x19,0x28,0xD4 } }; };
template <> struct default_interface<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter>{ using type = Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter; };
template <> struct default_interface<Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo>{ using type = Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo; };

template <typename D>
struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter
{
    hstring Format(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& number) const;
    hstring Format(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& number, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat const& numberFormat) const;
    hstring FormatPartialString(param::hstring const& number) const;
    hstring FormatString(param::hstring const& number) const;
    hstring FormatStringWithLeftToRightMarkers(param::hstring const& number) const;
};
template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter> { template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatter<D>; };

template <typename D>
struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics
{
    void TryCreate(param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter& phoneNumber) const;
    int32_t GetCountryCodeForRegion(param::hstring const& regionCode) const;
    hstring GetNationalDirectDialingPrefixForRegion(param::hstring const& regionCode, bool stripNonDigit) const;
    hstring WrapWithLeftToRightMarkers(param::hstring const& number) const;
};
template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics> { template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberFormatterStatics<D>; };

template <typename D>
struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo
{
    int32_t CountryCode() const;
    hstring PhoneNumber() const;
    int32_t GetLengthOfGeographicalAreaCode() const;
    hstring GetNationalSignificantNumber() const;
    int32_t GetLengthOfNationalDestinationCode() const;
    Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind PredictNumberKind() const;
    hstring GetGeographicRegionCode() const;
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult CheckNumberMatch(Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo const& otherNumber) const;
};
template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo> { template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfo<D>; };

template <typename D>
struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo Create(param::hstring const& number) const;
};
template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory> { template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoFactory<D>; };

template <typename D>
struct consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics
{
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult TryParse(param::hstring const& input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber) const;
    Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult TryParse(param::hstring const& input, param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber) const;
};
template <> struct consume<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics> { template <typename D> using type = consume_Windows_Globalization_PhoneNumberFormatting_IPhoneNumberInfoStatics<D>; };

template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Format(::IUnknown* number, HSTRING* result) = 0;
    virtual HRESULT __stdcall FormatWithOutputFormat(::IUnknown* number, abi_t<Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormat> numberFormat, HSTRING* result) = 0;
    virtual HRESULT __stdcall FormatPartialString(HSTRING number, HSTRING* result) = 0;
    virtual HRESULT __stdcall FormatString(HSTRING number, HSTRING* result) = 0;
    virtual HRESULT __stdcall FormatStringWithLeftToRightMarkers(HSTRING number, HSTRING* result) = 0;
};};

template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryCreate(HSTRING regionCode, ::IUnknown** phoneNumber) = 0;
    virtual HRESULT __stdcall GetCountryCodeForRegion(HSTRING regionCode, int32_t* result) = 0;
    virtual HRESULT __stdcall GetNationalDirectDialingPrefixForRegion(HSTRING regionCode, bool stripNonDigit, HSTRING* result) = 0;
    virtual HRESULT __stdcall WrapWithLeftToRightMarkers(HSTRING number, HSTRING* result) = 0;
};};

template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CountryCode(int32_t* value) = 0;
    virtual HRESULT __stdcall get_PhoneNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetLengthOfGeographicalAreaCode(int32_t* result) = 0;
    virtual HRESULT __stdcall GetNationalSignificantNumber(HSTRING* result) = 0;
    virtual HRESULT __stdcall GetLengthOfNationalDestinationCode(int32_t* result) = 0;
    virtual HRESULT __stdcall PredictNumberKind(abi_t<Windows::Globalization::PhoneNumberFormatting::PredictedPhoneNumberKind>* result) = 0;
    virtual HRESULT __stdcall GetGeographicRegionCode(HSTRING* result) = 0;
    virtual HRESULT __stdcall CheckNumberMatch(::IUnknown* otherNumber, abi_t<Windows::Globalization::PhoneNumberFormatting::PhoneNumberMatchResult>* result) = 0;
};};

template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING number, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryParse(HSTRING input, ::IUnknown** phoneNumber, abi_t<Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>* result) = 0;
    virtual HRESULT __stdcall TryParseWithRegion(HSTRING input, HSTRING regionCode, ::IUnknown** phoneNumber, abi_t<Windows::Globalization::PhoneNumberFormatting::PhoneNumberParseResult>* result) = 0;
};};

}
