// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Display.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Display::Core {

struct WINRT_EBO IHdmiDisplayInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdmiDisplayInformation>
{
    IHdmiDisplayInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHdmiDisplayInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdmiDisplayInformationStatics>
{
    IHdmiDisplayInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHdmiDisplayMode :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHdmiDisplayMode>
{
    IHdmiDisplayMode(std::nullptr_t = nullptr) noexcept {}
};

}
