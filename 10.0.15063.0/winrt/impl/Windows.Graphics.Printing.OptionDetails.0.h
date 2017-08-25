// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing {

struct PrintPageDescription;
struct PrintTaskOptions;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::OptionDetails {

enum class PrintOptionStates : unsigned
{
    None = 0x0,
    Enabled = 0x1,
    Constrained = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(PrintOptionStates)

enum class PrintOptionType
{
    Unknown = 0,
    Number = 1,
    Text = 2,
    ItemList = 3,
};

struct IPrintCustomItemDetails;
struct IPrintCustomItemListOptionDetails;
struct IPrintCustomOptionDetails;
struct IPrintCustomTextOptionDetails;
struct IPrintItemListOptionDetails;
struct IPrintNumberOptionDetails;
struct IPrintOptionDetails;
struct IPrintTaskOptionChangedEventArgs;
struct IPrintTaskOptionDetails;
struct IPrintTaskOptionDetailsStatic;
struct IPrintTextOptionDetails;
struct PrintBindingOptionDetails;
struct PrintBorderingOptionDetails;
struct PrintCollationOptionDetails;
struct PrintColorModeOptionDetails;
struct PrintCopiesOptionDetails;
struct PrintCustomItemDetails;
struct PrintCustomItemListOptionDetails;
struct PrintCustomTextOptionDetails;
struct PrintDuplexOptionDetails;
struct PrintHolePunchOptionDetails;
struct PrintMediaSizeOptionDetails;
struct PrintMediaTypeOptionDetails;
struct PrintOrientationOptionDetails;
struct PrintQualityOptionDetails;
struct PrintStapleOptionDetails;
struct PrintTaskOptionChangedEventArgs;
struct PrintTaskOptionDetails;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails>{ using type = class_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintOptionStates>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintOptionType>{ using type = enum_category; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.IPrintTextOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintBindingOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintBorderingOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintCollationOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintColorModeOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintCopiesOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintDuplexOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintHolePunchOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintMediaSizeOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintMediaTypeOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintOrientationOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintQualityOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintStapleOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintOptionStates>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintOptionStates" }; };
template <> struct name<Windows::Graphics::Printing::OptionDetails::PrintOptionType>{ static constexpr auto & value{ L"Windows.Graphics.Printing.OptionDetails.PrintOptionType" }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>{ static constexpr GUID value{ 0x5704B637,0x5C3A,0x449A,{ 0xAA,0x36,0xB3,0x29,0x1B,0x11,0x92,0xFD } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>{ static constexpr GUID value{ 0xA5FAFD88,0x58F2,0x4EBD,{ 0xB9,0x0F,0x51,0xE4,0xF2,0x94,0x4C,0x5D } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>{ static constexpr GUID value{ 0xE32BDE1C,0x28AF,0x4B90,{ 0x95,0xDA,0xA3,0xAC,0xF3,0x20,0xB9,0x29 } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>{ static constexpr GUID value{ 0x2AD171F8,0xC8BD,0x4905,{ 0x91,0x92,0x0D,0x75,0x13,0x6E,0x8B,0x31 } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>{ static constexpr GUID value{ 0x9A2257BF,0xFE61,0x43D8,{ 0xA2,0x4F,0xA3,0xF6,0xAB,0x73,0x20,0xE7 } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>{ static constexpr GUID value{ 0x4D01BBAF,0x645C,0x4DE9,{ 0x96,0x5F,0x6F,0xC6,0xBB,0xC4,0x7C,0xAB } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>{ static constexpr GUID value{ 0x390686CF,0xD682,0x495F,{ 0xAD,0xFE,0xD7,0x33,0x3F,0x5C,0x18,0x08 } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>{ static constexpr GUID value{ 0x65197D05,0xA5EE,0x4307,{ 0x94,0x07,0x9A,0xCA,0xD1,0x47,0x67,0x9C } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>{ static constexpr GUID value{ 0xF5720AF1,0xA89E,0x42A6,{ 0x81,0xAF,0xF8,0xE0,0x10,0xB3,0x8A,0x68 } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>{ static constexpr GUID value{ 0x135DA193,0x0961,0x4B6E,{ 0x87,0x66,0xF1,0x3B,0x7F,0xBC,0xCD,0x58 } }; };
template <> struct guid<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>{ static constexpr GUID value{ 0xAD75E563,0x5CE4,0x46BC,{ 0x99,0x18,0xAB,0x9F,0xAD,0x14,0x4C,0x5B } }; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs; };
template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails
{
    hstring ItemId() const;
    void ItemDisplayName(param::hstring const& value) const;
    hstring ItemDisplayName() const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails
{
    void AddItem(param::hstring const& itemId, param::hstring const& displayName) const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails
{
    void DisplayName(param::hstring const& value) const;
    hstring DisplayName() const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails
{
    void MaxCharacters(uint32_t value) const;
    uint32_t MaxCharacters() const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::IInspectable> Items() const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails
{
    uint32_t MinValue() const;
    uint32_t MaxValue() const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails
{
    hstring OptionId() const;
    Windows::Graphics::Printing::OptionDetails::PrintOptionType OptionType() const;
    void ErrorText(param::hstring const& value) const;
    hstring ErrorText() const;
    void State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates const& value) const;
    Windows::Graphics::Printing::OptionDetails::PrintOptionStates State() const;
    Windows::Foundation::IInspectable Value() const;
    bool TrySetValue(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs
{
    Windows::Foundation::IInspectable OptionId() const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> Options() const;
    Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails CreateItemListOption(param::hstring const& optionId, param::hstring const& displayName) const;
    Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails CreateTextOption(param::hstring const& optionId, param::hstring const& displayName) const;
    event_token OptionChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const& eventHandler) const;
    using OptionChanged_revoker = event_revoker<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>;
    OptionChanged_revoker OptionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const& eventHandler) const;
    void OptionChanged(event_token const& eventCookie) const;
    event_token BeginValidation(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const& eventHandler) const;
    using BeginValidation_revoker = event_revoker<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>;
    BeginValidation_revoker BeginValidation(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const& eventHandler) const;
    void BeginValidation(event_token const& eventCookie) const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic
{
    Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails GetFromPrintTaskOptions(Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions) const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic<D>; };

template <typename D>
struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails
{
    uint32_t MaxCharacters() const;
};
template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails> { template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails<D>; };

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ItemId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ItemDisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ItemDisplayName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddItem(HSTRING itemId, HSTRING displayName) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_MaxCharacters(uint32_t value) = 0;
    virtual HRESULT __stdcall get_MaxCharacters(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Items(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MinValue(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxValue(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OptionId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OptionType(abi_t<Windows::Graphics::Printing::OptionDetails::PrintOptionType>* value) = 0;
    virtual HRESULT __stdcall put_ErrorText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ErrorText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_State(abi_t<Windows::Graphics::Printing::OptionDetails::PrintOptionStates> value) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Graphics::Printing::OptionDetails::PrintOptionStates>* value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
    virtual HRESULT __stdcall TrySetValue(::IUnknown* value, bool* succeeded) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OptionId(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Options(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateItemListOption(HSTRING optionId, HSTRING displayName, ::IUnknown** itemListOption) = 0;
    virtual HRESULT __stdcall CreateTextOption(HSTRING optionId, HSTRING displayName, ::IUnknown** textOption) = 0;
    virtual HRESULT __stdcall add_OptionChanged(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_OptionChanged(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_BeginValidation(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_BeginValidation(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFromPrintTaskOptions(::IUnknown* printTaskOptions, ::IUnknown** printTaskOptionDetails) = 0;
};};

template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxCharacters(uint32_t* value) = 0;
};};

}
