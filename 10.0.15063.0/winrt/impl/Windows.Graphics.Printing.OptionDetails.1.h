// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Printing.0.h"
#include "winrt/impl/Windows.Graphics.Printing.OptionDetails.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::OptionDetails {

struct WINRT_EBO IPrintCustomItemDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintCustomItemDetails>
{
    IPrintCustomItemDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintCustomItemListOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintCustomItemListOptionDetails>,
    impl::require<IPrintCustomItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintCustomItemListOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintCustomOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintCustomOptionDetails>,
    impl::require<IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintCustomOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintCustomTextOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintCustomTextOptionDetails>,
    impl::require<IPrintCustomTextOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintCustomTextOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintItemListOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintItemListOptionDetails>,
    impl::require<IPrintItemListOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintItemListOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintNumberOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintNumberOptionDetails>,
    impl::require<IPrintNumberOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintNumberOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintOptionDetails>
{
    IPrintOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskOptionChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionChangedEventArgs>
{
    IPrintTaskOptionChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionDetails>
{
    IPrintTaskOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskOptionDetailsStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionDetailsStatic>
{
    IPrintTaskOptionDetailsStatic(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTextOptionDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTextOptionDetails>,
    impl::require<IPrintTextOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    IPrintTextOptionDetails(std::nullptr_t = nullptr) noexcept {}
};

}
