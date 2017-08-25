// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Display.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Display {

struct WINRT_EBO IDisplayRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDisplayRequest>
{
    IDisplayRequest(std::nullptr_t = nullptr) noexcept {}
};

}
