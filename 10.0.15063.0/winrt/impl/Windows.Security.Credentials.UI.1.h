// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Security.Credentials.UI.0.h"

WINRT_EXPORT namespace winrt::Windows::Security::Credentials::UI {

struct WINRT_EBO ICredentialPickerOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialPickerOptions>
{
    ICredentialPickerOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICredentialPickerResults :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialPickerResults>
{
    ICredentialPickerResults(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICredentialPickerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICredentialPickerStatics>
{
    ICredentialPickerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserConsentVerifierStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserConsentVerifierStatics>
{
    IUserConsentVerifierStatics(std::nullptr_t = nullptr) noexcept {}
};

}
