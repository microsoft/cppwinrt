// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Graphics.Display.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Display {

struct WINRT_EBO IBrightnessOverride :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrightnessOverride>
{
    IBrightnessOverride(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBrightnessOverrideStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBrightnessOverrideStatics>
{
    IBrightnessOverrideStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDisplayInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformation>
{
    IDisplayInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDisplayInformation2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformation2>,
    impl::require<IDisplayInformation2, Windows::Graphics::Display::IDisplayInformation>
{
    IDisplayInformation2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDisplayInformation3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformation3>
{
    IDisplayInformation3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDisplayInformation4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformation4>
{
    IDisplayInformation4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDisplayInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayInformationStatics>
{
    IDisplayInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] IDisplayPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayPropertiesStatics>
{
    IDisplayPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

}
