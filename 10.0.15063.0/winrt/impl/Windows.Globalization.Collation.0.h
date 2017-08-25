// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Globalization::Collation {

struct ICharacterGrouping;
struct ICharacterGroupings;
struct ICharacterGroupingsFactory;
struct CharacterGrouping;
struct CharacterGroupings;

}

namespace winrt::impl {

template <> struct category<Windows::Globalization::Collation::ICharacterGrouping>{ using type = interface_category; };
template <> struct category<Windows::Globalization::Collation::ICharacterGroupings>{ using type = interface_category; };
template <> struct category<Windows::Globalization::Collation::ICharacterGroupingsFactory>{ using type = interface_category; };
template <> struct category<Windows::Globalization::Collation::CharacterGrouping>{ using type = class_category; };
template <> struct category<Windows::Globalization::Collation::CharacterGroupings>{ using type = class_category; };
template <> struct name<Windows::Globalization::Collation::ICharacterGrouping>{ static constexpr auto & value{ L"Windows.Globalization.Collation.ICharacterGrouping" }; };
template <> struct name<Windows::Globalization::Collation::ICharacterGroupings>{ static constexpr auto & value{ L"Windows.Globalization.Collation.ICharacterGroupings" }; };
template <> struct name<Windows::Globalization::Collation::ICharacterGroupingsFactory>{ static constexpr auto & value{ L"Windows.Globalization.Collation.ICharacterGroupingsFactory" }; };
template <> struct name<Windows::Globalization::Collation::CharacterGrouping>{ static constexpr auto & value{ L"Windows.Globalization.Collation.CharacterGrouping" }; };
template <> struct name<Windows::Globalization::Collation::CharacterGroupings>{ static constexpr auto & value{ L"Windows.Globalization.Collation.CharacterGroupings" }; };
template <> struct guid<Windows::Globalization::Collation::ICharacterGrouping>{ static constexpr GUID value{ 0xFAE761BB,0x805D,0x4BB0,{ 0x95,0xBB,0xC1,0xF7,0xC3,0xE8,0xEB,0x8E } }; };
template <> struct guid<Windows::Globalization::Collation::ICharacterGroupings>{ static constexpr GUID value{ 0xB8D20A75,0xD4CF,0x4055,{ 0x80,0xE5,0xCE,0x16,0x9C,0x22,0x64,0x96 } }; };
template <> struct guid<Windows::Globalization::Collation::ICharacterGroupingsFactory>{ static constexpr GUID value{ 0x99EA9FD9,0x886D,0x4401,{ 0x9F,0x98,0x69,0xC8,0x2D,0x4C,0x2F,0x78 } }; };
template <> struct default_interface<Windows::Globalization::Collation::CharacterGrouping>{ using type = Windows::Globalization::Collation::ICharacterGrouping; };
template <> struct default_interface<Windows::Globalization::Collation::CharacterGroupings>{ using type = Windows::Globalization::Collation::ICharacterGroupings; };

template <typename D>
struct consume_Windows_Globalization_Collation_ICharacterGrouping
{
    hstring First() const;
    hstring Label() const;
};
template <> struct consume<Windows::Globalization::Collation::ICharacterGrouping> { template <typename D> using type = consume_Windows_Globalization_Collation_ICharacterGrouping<D>; };

template <typename D>
struct consume_Windows_Globalization_Collation_ICharacterGroupings
{
    hstring Lookup(param::hstring const& text) const;
};
template <> struct consume<Windows::Globalization::Collation::ICharacterGroupings> { template <typename D> using type = consume_Windows_Globalization_Collation_ICharacterGroupings<D>; };

template <typename D>
struct consume_Windows_Globalization_Collation_ICharacterGroupingsFactory
{
    Windows::Globalization::Collation::CharacterGroupings Create(param::hstring const& language) const;
};
template <> struct consume<Windows::Globalization::Collation::ICharacterGroupingsFactory> { template <typename D> using type = consume_Windows_Globalization_Collation_ICharacterGroupingsFactory<D>; };

template <> struct abi<Windows::Globalization::Collation::ICharacterGrouping>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_First(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Label(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Globalization::Collation::ICharacterGroupings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Lookup(HSTRING text, HSTRING* result) = 0;
};};

template <> struct abi<Windows::Globalization::Collation::ICharacterGroupingsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING language, ::IUnknown** result) = 0;
};};

}
