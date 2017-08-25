// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Globalization.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.UserProfile.1.h"

WINRT_EXPORT namespace winrt::Windows::System::UserProfile {

struct AdvertisingManager
{
    AdvertisingManager() = delete;
    static hstring AdvertisingId();
    static Windows::System::UserProfile::AdvertisingManagerForUser GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO AdvertisingManagerForUser :
    Windows::System::UserProfile::IAdvertisingManagerForUser
{
    AdvertisingManagerForUser(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DiagnosticsSettings :
    Windows::System::UserProfile::IDiagnosticsSettings
{
    DiagnosticsSettings(std::nullptr_t) noexcept {}
    static Windows::System::UserProfile::DiagnosticsSettings GetDefault();
    static Windows::System::UserProfile::DiagnosticsSettings GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO FirstSignInSettings :
    Windows::System::UserProfile::IFirstSignInSettings
{
    FirstSignInSettings(std::nullptr_t) noexcept {}
    static Windows::System::UserProfile::FirstSignInSettings GetDefault();
};

struct GlobalizationPreferences
{
    GlobalizationPreferences() = delete;
    static Windows::Foundation::Collections::IVectorView<hstring> Calendars();
    static Windows::Foundation::Collections::IVectorView<hstring> Clocks();
    static Windows::Foundation::Collections::IVectorView<hstring> Currencies();
    static Windows::Foundation::Collections::IVectorView<hstring> Languages();
    static hstring HomeGeographicRegion();
    static Windows::Globalization::DayOfWeek WeekStartsOn();
};

struct LockScreen
{
    LockScreen() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetImageFeedResult> RequestSetImageFeedAsync(Windows::Foundation::Uri const& syndicationFeedUri);
    static bool TryRemoveImageFeed();
    static Windows::Foundation::Uri OriginalImageFile();
    static Windows::Storage::Streams::IRandomAccessStream GetImageStream();
    static Windows::Foundation::IAsyncAction SetImageFileAsync(Windows::Storage::IStorageFile const& value);
    static Windows::Foundation::IAsyncAction SetImageStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& value);
};

struct UserInformation
{
    UserInformation() = delete;
    static bool AccountPictureChangeEnabled();
    static bool NameAccessAllowed();
    static Windows::Storage::IStorageFile GetAccountPicture(Windows::System::UserProfile::AccountPictureKind const& kind);
    static Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> SetAccountPictureAsync(Windows::Storage::IStorageFile const& image);
    static Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> SetAccountPicturesAsync(Windows::Storage::IStorageFile const& smallImage, Windows::Storage::IStorageFile const& largeImage, Windows::Storage::IStorageFile const& video);
    static Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> SetAccountPictureFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& image);
    static Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> SetAccountPicturesFromStreamsAsync(Windows::Storage::Streams::IRandomAccessStream const& smallImage, Windows::Storage::Streams::IRandomAccessStream const& largeImage, Windows::Storage::Streams::IRandomAccessStream const& video);
    static event_token AccountPictureChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler);
    using AccountPictureChanged_revoker = factory_event_revoker<Windows::System::UserProfile::IUserInformationStatics>;
    static AccountPictureChanged_revoker AccountPictureChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler);
    static void AccountPictureChanged(event_token const& token);
    static Windows::Foundation::IAsyncOperation<hstring> GetDisplayNameAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetFirstNameAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetLastNameAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetPrincipalNameAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> GetSessionInitiationProtocolUriAsync();
    static Windows::Foundation::IAsyncOperation<hstring> GetDomainNameAsync();
};

struct WINRT_EBO UserProfilePersonalizationSettings :
    Windows::System::UserProfile::IUserProfilePersonalizationSettings
{
    UserProfilePersonalizationSettings(std::nullptr_t) noexcept {}
    static Windows::System::UserProfile::UserProfilePersonalizationSettings Current();
    static bool IsSupported();
};

}
