// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Globalization {

enum class DayOfWeek;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::System::UserProfile {

enum class AccountPictureKind
{
    SmallImage = 0,
    LargeImage = 1,
    Video = 2,
};

enum class SetAccountPictureResult
{
    Success = 0,
    ChangeDisabled = 1,
    LargeOrDynamicError = 2,
    VideoFrameSizeError = 3,
    FileSizeError = 4,
    Failure = 5,
};

enum class SetImageFeedResult
{
    Success = 0,
    ChangeDisabled = 1,
    UserCanceled = 2,
};

struct IAdvertisingManagerForUser;
struct IAdvertisingManagerStatics;
struct IAdvertisingManagerStatics2;
struct IDiagnosticsSettings;
struct IDiagnosticsSettingsStatics;
struct IFirstSignInSettings;
struct IFirstSignInSettingsStatics;
struct IGlobalizationPreferencesStatics;
struct ILockScreenImageFeedStatics;
struct ILockScreenStatics;
struct IUserInformationStatics;
struct IUserProfilePersonalizationSettings;
struct IUserProfilePersonalizationSettingsStatics;
struct AdvertisingManager;
struct AdvertisingManagerForUser;
struct DiagnosticsSettings;
struct FirstSignInSettings;
struct GlobalizationPreferences;
struct LockScreen;
struct UserInformation;
struct UserProfilePersonalizationSettings;

}

namespace winrt::impl {

template <> struct category<Windows::System::UserProfile::IAdvertisingManagerForUser>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IAdvertisingManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IAdvertisingManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IDiagnosticsSettings>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IDiagnosticsSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IFirstSignInSettings>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IFirstSignInSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IGlobalizationPreferencesStatics>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::ILockScreenImageFeedStatics>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::ILockScreenStatics>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IUserInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IUserProfilePersonalizationSettings>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::UserProfile::AdvertisingManager>{ using type = class_category; };
template <> struct category<Windows::System::UserProfile::AdvertisingManagerForUser>{ using type = class_category; };
template <> struct category<Windows::System::UserProfile::DiagnosticsSettings>{ using type = class_category; };
template <> struct category<Windows::System::UserProfile::FirstSignInSettings>{ using type = class_category; };
template <> struct category<Windows::System::UserProfile::GlobalizationPreferences>{ using type = class_category; };
template <> struct category<Windows::System::UserProfile::LockScreen>{ using type = class_category; };
template <> struct category<Windows::System::UserProfile::UserInformation>{ using type = class_category; };
template <> struct category<Windows::System::UserProfile::UserProfilePersonalizationSettings>{ using type = class_category; };
template <> struct category<Windows::System::UserProfile::AccountPictureKind>{ using type = enum_category; };
template <> struct category<Windows::System::UserProfile::SetAccountPictureResult>{ using type = enum_category; };
template <> struct category<Windows::System::UserProfile::SetImageFeedResult>{ using type = enum_category; };
template <> struct name<Windows::System::UserProfile::IAdvertisingManagerForUser>{ static constexpr auto & value{ L"Windows.System.UserProfile.IAdvertisingManagerForUser" }; };
template <> struct name<Windows::System::UserProfile::IAdvertisingManagerStatics>{ static constexpr auto & value{ L"Windows.System.UserProfile.IAdvertisingManagerStatics" }; };
template <> struct name<Windows::System::UserProfile::IAdvertisingManagerStatics2>{ static constexpr auto & value{ L"Windows.System.UserProfile.IAdvertisingManagerStatics2" }; };
template <> struct name<Windows::System::UserProfile::IDiagnosticsSettings>{ static constexpr auto & value{ L"Windows.System.UserProfile.IDiagnosticsSettings" }; };
template <> struct name<Windows::System::UserProfile::IDiagnosticsSettingsStatics>{ static constexpr auto & value{ L"Windows.System.UserProfile.IDiagnosticsSettingsStatics" }; };
template <> struct name<Windows::System::UserProfile::IFirstSignInSettings>{ static constexpr auto & value{ L"Windows.System.UserProfile.IFirstSignInSettings" }; };
template <> struct name<Windows::System::UserProfile::IFirstSignInSettingsStatics>{ static constexpr auto & value{ L"Windows.System.UserProfile.IFirstSignInSettingsStatics" }; };
template <> struct name<Windows::System::UserProfile::IGlobalizationPreferencesStatics>{ static constexpr auto & value{ L"Windows.System.UserProfile.IGlobalizationPreferencesStatics" }; };
template <> struct name<Windows::System::UserProfile::ILockScreenImageFeedStatics>{ static constexpr auto & value{ L"Windows.System.UserProfile.ILockScreenImageFeedStatics" }; };
template <> struct name<Windows::System::UserProfile::ILockScreenStatics>{ static constexpr auto & value{ L"Windows.System.UserProfile.ILockScreenStatics" }; };
template <> struct name<Windows::System::UserProfile::IUserInformationStatics>{ static constexpr auto & value{ L"Windows.System.UserProfile.IUserInformationStatics" }; };
template <> struct name<Windows::System::UserProfile::IUserProfilePersonalizationSettings>{ static constexpr auto & value{ L"Windows.System.UserProfile.IUserProfilePersonalizationSettings" }; };
template <> struct name<Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>{ static constexpr auto & value{ L"Windows.System.UserProfile.IUserProfilePersonalizationSettingsStatics" }; };
template <> struct name<Windows::System::UserProfile::AdvertisingManager>{ static constexpr auto & value{ L"Windows.System.UserProfile.AdvertisingManager" }; };
template <> struct name<Windows::System::UserProfile::AdvertisingManagerForUser>{ static constexpr auto & value{ L"Windows.System.UserProfile.AdvertisingManagerForUser" }; };
template <> struct name<Windows::System::UserProfile::DiagnosticsSettings>{ static constexpr auto & value{ L"Windows.System.UserProfile.DiagnosticsSettings" }; };
template <> struct name<Windows::System::UserProfile::FirstSignInSettings>{ static constexpr auto & value{ L"Windows.System.UserProfile.FirstSignInSettings" }; };
template <> struct name<Windows::System::UserProfile::GlobalizationPreferences>{ static constexpr auto & value{ L"Windows.System.UserProfile.GlobalizationPreferences" }; };
template <> struct name<Windows::System::UserProfile::LockScreen>{ static constexpr auto & value{ L"Windows.System.UserProfile.LockScreen" }; };
template <> struct name<Windows::System::UserProfile::UserInformation>{ static constexpr auto & value{ L"Windows.System.UserProfile.UserInformation" }; };
template <> struct name<Windows::System::UserProfile::UserProfilePersonalizationSettings>{ static constexpr auto & value{ L"Windows.System.UserProfile.UserProfilePersonalizationSettings" }; };
template <> struct name<Windows::System::UserProfile::AccountPictureKind>{ static constexpr auto & value{ L"Windows.System.UserProfile.AccountPictureKind" }; };
template <> struct name<Windows::System::UserProfile::SetAccountPictureResult>{ static constexpr auto & value{ L"Windows.System.UserProfile.SetAccountPictureResult" }; };
template <> struct name<Windows::System::UserProfile::SetImageFeedResult>{ static constexpr auto & value{ L"Windows.System.UserProfile.SetImageFeedResult" }; };
template <> struct guid<Windows::System::UserProfile::IAdvertisingManagerForUser>{ static constexpr GUID value{ 0x928BF3D0,0xCF7C,0x4AB0,{ 0xA7,0xDC,0x6D,0xC5,0xBC,0xD4,0x42,0x52 } }; };
template <> struct guid<Windows::System::UserProfile::IAdvertisingManagerStatics>{ static constexpr GUID value{ 0xADD3468C,0xA273,0x48CB,{ 0xB3,0x46,0x35,0x44,0x52,0x2D,0x55,0x81 } }; };
template <> struct guid<Windows::System::UserProfile::IAdvertisingManagerStatics2>{ static constexpr GUID value{ 0xDD0947AF,0x1A6D,0x46B0,{ 0x95,0xBC,0xF3,0xF9,0xD6,0xBE,0xB9,0xFB } }; };
template <> struct guid<Windows::System::UserProfile::IDiagnosticsSettings>{ static constexpr GUID value{ 0xE5E9ECCD,0x2711,0x44E0,{ 0x97,0x3C,0x49,0x1D,0x78,0x04,0x8D,0x24 } }; };
template <> struct guid<Windows::System::UserProfile::IDiagnosticsSettingsStatics>{ static constexpr GUID value{ 0x72D2E80F,0x5390,0x4793,{ 0x99,0x0B,0x3C,0xCC,0x7D,0x6A,0xC9,0xC8 } }; };
template <> struct guid<Windows::System::UserProfile::IFirstSignInSettings>{ static constexpr GUID value{ 0x3E945153,0x3A5E,0x452E,{ 0xA6,0x01,0xF5,0xBA,0xAD,0x2A,0x48,0x70 } }; };
template <> struct guid<Windows::System::UserProfile::IFirstSignInSettingsStatics>{ static constexpr GUID value{ 0x1CE18F0F,0x1C41,0x4EA0,{ 0xB7,0xA2,0x6F,0x0C,0x1C,0x7E,0x84,0x38 } }; };
template <> struct guid<Windows::System::UserProfile::IGlobalizationPreferencesStatics>{ static constexpr GUID value{ 0x01BF4326,0xED37,0x4E96,{ 0xB0,0xE9,0xC1,0x34,0x0D,0x1E,0xA1,0x58 } }; };
template <> struct guid<Windows::System::UserProfile::ILockScreenImageFeedStatics>{ static constexpr GUID value{ 0x2C0D73F6,0x03A9,0x41A6,{ 0x9B,0x01,0x49,0x52,0x51,0xFF,0x51,0xD5 } }; };
template <> struct guid<Windows::System::UserProfile::ILockScreenStatics>{ static constexpr GUID value{ 0x3EE9D3AD,0xB607,0x40AE,{ 0xB4,0x26,0x76,0x31,0xD9,0x82,0x12,0x69 } }; };
template <> struct guid<Windows::System::UserProfile::IUserInformationStatics>{ static constexpr GUID value{ 0x77F3A910,0x48FA,0x489C,{ 0x93,0x4E,0x2A,0xE8,0x5B,0xA8,0xF7,0x72 } }; };
template <> struct guid<Windows::System::UserProfile::IUserProfilePersonalizationSettings>{ static constexpr GUID value{ 0x8CEDDAB4,0x7998,0x46D5,{ 0x8D,0xD3,0x18,0x4F,0x1C,0x5F,0x9A,0xB9 } }; };
template <> struct guid<Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>{ static constexpr GUID value{ 0x91ACB841,0x5037,0x454B,{ 0x98,0x83,0xBB,0x77,0x2D,0x08,0xDD,0x16 } }; };
template <> struct default_interface<Windows::System::UserProfile::AdvertisingManagerForUser>{ using type = Windows::System::UserProfile::IAdvertisingManagerForUser; };
template <> struct default_interface<Windows::System::UserProfile::DiagnosticsSettings>{ using type = Windows::System::UserProfile::IDiagnosticsSettings; };
template <> struct default_interface<Windows::System::UserProfile::FirstSignInSettings>{ using type = Windows::System::UserProfile::IFirstSignInSettings; };
template <> struct default_interface<Windows::System::UserProfile::UserProfilePersonalizationSettings>{ using type = Windows::System::UserProfile::IUserProfilePersonalizationSettings; };

template <typename D>
struct consume_Windows_System_UserProfile_IAdvertisingManagerForUser
{
    hstring AdvertisingId() const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::System::UserProfile::IAdvertisingManagerForUser> { template <typename D> using type = consume_Windows_System_UserProfile_IAdvertisingManagerForUser<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IAdvertisingManagerStatics
{
    hstring AdvertisingId() const;
};
template <> struct consume<Windows::System::UserProfile::IAdvertisingManagerStatics> { template <typename D> using type = consume_Windows_System_UserProfile_IAdvertisingManagerStatics<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IAdvertisingManagerStatics2
{
    Windows::System::UserProfile::AdvertisingManagerForUser GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::System::UserProfile::IAdvertisingManagerStatics2> { template <typename D> using type = consume_Windows_System_UserProfile_IAdvertisingManagerStatics2<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IDiagnosticsSettings
{
    bool CanUseDiagnosticsToTailorExperiences() const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::System::UserProfile::IDiagnosticsSettings> { template <typename D> using type = consume_Windows_System_UserProfile_IDiagnosticsSettings<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IDiagnosticsSettingsStatics
{
    Windows::System::UserProfile::DiagnosticsSettings GetDefault() const;
    Windows::System::UserProfile::DiagnosticsSettings GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::System::UserProfile::IDiagnosticsSettingsStatics> { template <typename D> using type = consume_Windows_System_UserProfile_IDiagnosticsSettingsStatics<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IFirstSignInSettings
{
};
template <> struct consume<Windows::System::UserProfile::IFirstSignInSettings> { template <typename D> using type = consume_Windows_System_UserProfile_IFirstSignInSettings<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IFirstSignInSettingsStatics
{
    Windows::System::UserProfile::FirstSignInSettings GetDefault() const;
};
template <> struct consume<Windows::System::UserProfile::IFirstSignInSettingsStatics> { template <typename D> using type = consume_Windows_System_UserProfile_IFirstSignInSettingsStatics<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics
{
    Windows::Foundation::Collections::IVectorView<hstring> Calendars() const;
    Windows::Foundation::Collections::IVectorView<hstring> Clocks() const;
    Windows::Foundation::Collections::IVectorView<hstring> Currencies() const;
    Windows::Foundation::Collections::IVectorView<hstring> Languages() const;
    hstring HomeGeographicRegion() const;
    Windows::Globalization::DayOfWeek WeekStartsOn() const;
};
template <> struct consume<Windows::System::UserProfile::IGlobalizationPreferencesStatics> { template <typename D> using type = consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_ILockScreenImageFeedStatics
{
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetImageFeedResult> RequestSetImageFeedAsync(Windows::Foundation::Uri const& syndicationFeedUri) const;
    bool TryRemoveImageFeed() const;
};
template <> struct consume<Windows::System::UserProfile::ILockScreenImageFeedStatics> { template <typename D> using type = consume_Windows_System_UserProfile_ILockScreenImageFeedStatics<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_ILockScreenStatics
{
    Windows::Foundation::Uri OriginalImageFile() const;
    Windows::Storage::Streams::IRandomAccessStream GetImageStream() const;
    Windows::Foundation::IAsyncAction SetImageFileAsync(Windows::Storage::IStorageFile const& value) const;
    Windows::Foundation::IAsyncAction SetImageStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const;
};
template <> struct consume<Windows::System::UserProfile::ILockScreenStatics> { template <typename D> using type = consume_Windows_System_UserProfile_ILockScreenStatics<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IUserInformationStatics
{
    bool AccountPictureChangeEnabled() const;
    bool NameAccessAllowed() const;
    Windows::Storage::IStorageFile GetAccountPicture(Windows::System::UserProfile::AccountPictureKind const& kind) const;
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> SetAccountPictureAsync(Windows::Storage::IStorageFile const& image) const;
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> SetAccountPicturesAsync(Windows::Storage::IStorageFile const& smallImage, Windows::Storage::IStorageFile const& largeImage, Windows::Storage::IStorageFile const& video) const;
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> SetAccountPictureFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& image) const;
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> SetAccountPicturesFromStreamsAsync(Windows::Storage::Streams::IRandomAccessStream const& smallImage, Windows::Storage::Streams::IRandomAccessStream const& largeImage, Windows::Storage::Streams::IRandomAccessStream const& video) const;
    event_token AccountPictureChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const;
    using AccountPictureChanged_revoker = event_revoker<Windows::System::UserProfile::IUserInformationStatics>;
    AccountPictureChanged_revoker AccountPictureChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const;
    void AccountPictureChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<hstring> GetDisplayNameAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetFirstNameAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetLastNameAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetPrincipalNameAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> GetSessionInitiationProtocolUriAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetDomainNameAsync() const;
};
template <> struct consume<Windows::System::UserProfile::IUserInformationStatics> { template <typename D> using type = consume_Windows_System_UserProfile_IUserInformationStatics<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IUserProfilePersonalizationSettings
{
    Windows::Foundation::IAsyncOperation<bool> TrySetLockScreenImageAsync(Windows::Storage::StorageFile const& imageFile) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetWallpaperImageAsync(Windows::Storage::StorageFile const& imageFile) const;
};
template <> struct consume<Windows::System::UserProfile::IUserProfilePersonalizationSettings> { template <typename D> using type = consume_Windows_System_UserProfile_IUserProfilePersonalizationSettings<D>; };

template <typename D>
struct consume_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics
{
    Windows::System::UserProfile::UserProfilePersonalizationSettings Current() const;
    bool IsSupported() const;
};
template <> struct consume<Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics> { template <typename D> using type = consume_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics<D>; };

template <> struct abi<Windows::System::UserProfile::IAdvertisingManagerForUser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AdvertisingId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IAdvertisingManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AdvertisingId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IAdvertisingManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IDiagnosticsSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CanUseDiagnosticsToTailorExperiences(bool* value) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IDiagnosticsSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IFirstSignInSettings>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::System::UserProfile::IFirstSignInSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IGlobalizationPreferencesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Calendars(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Clocks(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Currencies(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Languages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_HomeGeographicRegion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_WeekStartsOn(abi_t<Windows::Globalization::DayOfWeek>* value) = 0;
};};

template <> struct abi<Windows::System::UserProfile::ILockScreenImageFeedStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestSetImageFeedAsync(::IUnknown* syndicationFeedUri, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall TryRemoveImageFeed(bool* result) = 0;
};};

template <> struct abi<Windows::System::UserProfile::ILockScreenStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OriginalImageFile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetImageStream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetImageFileAsync(::IUnknown* value, ::IUnknown** Operation) = 0;
    virtual HRESULT __stdcall SetImageStreamAsync(::IUnknown* value, ::IUnknown** Operation) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IUserInformationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccountPictureChangeEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_NameAccessAllowed(bool* value) = 0;
    virtual HRESULT __stdcall GetAccountPicture(abi_t<Windows::System::UserProfile::AccountPictureKind> kind, ::IUnknown** storageFile) = 0;
    virtual HRESULT __stdcall SetAccountPictureAsync(::IUnknown* image, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetAccountPicturesAsync(::IUnknown* smallImage, ::IUnknown* largeImage, ::IUnknown* video, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetAccountPictureFromStreamAsync(::IUnknown* image, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SetAccountPicturesFromStreamsAsync(::IUnknown* smallImage, ::IUnknown* largeImage, ::IUnknown* video, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_AccountPictureChanged(::IUnknown* changeHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AccountPictureChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetDisplayNameAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFirstNameAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetLastNameAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetPrincipalNameAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetSessionInitiationProtocolUriAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDomainNameAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IUserProfilePersonalizationSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TrySetLockScreenImageAsync(::IUnknown* imageFile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TrySetWallpaperImageAsync(::IUnknown* imageFile, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Current(::IUnknown** value) = 0;
    virtual HRESULT __stdcall IsSupported(bool* result) = 0;
};};

}
