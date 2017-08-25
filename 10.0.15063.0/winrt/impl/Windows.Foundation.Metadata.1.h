// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.Metadata.0.h"

WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata {

struct WINRT_EBO IApiInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IApiInformationStatics>
{
    IApiInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

}
