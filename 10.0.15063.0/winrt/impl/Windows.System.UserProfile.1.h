// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Globalization.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.System.UserProfile.0.h"

WINRT_EXPORT namespace winrt::Windows::System::UserProfile {

struct WINRT_EBO IAdvertisingManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvertisingManagerForUser>
{
    IAdvertisingManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvertisingManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvertisingManagerStatics>
{
    IAdvertisingManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdvertisingManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdvertisingManagerStatics2>
{
    IAdvertisingManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDiagnosticsSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDiagnosticsSettings>
{
    IDiagnosticsSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDiagnosticsSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDiagnosticsSettingsStatics>
{
    IDiagnosticsSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFirstSignInSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFirstSignInSettings>,
    impl::require<IFirstSignInSettings, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>
{
    IFirstSignInSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFirstSignInSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFirstSignInSettingsStatics>
{
    IFirstSignInSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGlobalizationPreferencesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGlobalizationPreferencesStatics>
{
    IGlobalizationPreferencesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenImageFeedStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenImageFeedStatics>
{
    ILockScreenImageFeedStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenStatics>
{
    ILockScreenStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserInformationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserInformationStatics>
{
    IUserInformationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserProfilePersonalizationSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserProfilePersonalizationSettings>
{
    IUserProfilePersonalizationSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserProfilePersonalizationSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserProfilePersonalizationSettingsStatics>
{
    IUserProfilePersonalizationSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

}
