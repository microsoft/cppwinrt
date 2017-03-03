// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::UserProfile {

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
struct AdvertisingManagerForUser;
struct DiagnosticsSettings;
struct FirstSignInSettings;
struct UserProfilePersonalizationSettings;

}

namespace Windows::System::UserProfile {

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

namespace Windows::System::UserProfile {

template <typename T> struct impl_IAdvertisingManagerForUser;
template <typename T> struct impl_IAdvertisingManagerStatics;
template <typename T> struct impl_IAdvertisingManagerStatics2;
template <typename T> struct impl_IDiagnosticsSettings;
template <typename T> struct impl_IDiagnosticsSettingsStatics;
template <typename T> struct impl_IFirstSignInSettings;
template <typename T> struct impl_IFirstSignInSettingsStatics;
template <typename T> struct impl_IGlobalizationPreferencesStatics;
template <typename T> struct impl_ILockScreenImageFeedStatics;
template <typename T> struct impl_ILockScreenStatics;
template <typename T> struct impl_IUserInformationStatics;
template <typename T> struct impl_IUserProfilePersonalizationSettings;
template <typename T> struct impl_IUserProfilePersonalizationSettingsStatics;

}

namespace Windows::System::UserProfile {

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

}

}
