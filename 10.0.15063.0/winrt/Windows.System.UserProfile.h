// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.UserProfile.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_System_UserProfile_IAdvertisingManagerForUser<D>::AdvertisingId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IAdvertisingManagerForUser)->get_AdvertisingId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_System_UserProfile_IAdvertisingManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IAdvertisingManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_UserProfile_IAdvertisingManagerStatics<D>::AdvertisingId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IAdvertisingManagerStatics)->get_AdvertisingId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::AdvertisingManagerForUser consume_Windows_System_UserProfile_IAdvertisingManagerStatics2<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::System::UserProfile::AdvertisingManagerForUser value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IAdvertisingManagerStatics2)->GetForUser(get_abi(user), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_UserProfile_IDiagnosticsSettings<D>::CanUseDiagnosticsToTailorExperiences() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IDiagnosticsSettings)->get_CanUseDiagnosticsToTailorExperiences(&value));
    return value;
}

template <typename D> Windows::System::User consume_Windows_System_UserProfile_IDiagnosticsSettings<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IDiagnosticsSettings)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::DiagnosticsSettings consume_Windows_System_UserProfile_IDiagnosticsSettingsStatics<D>::GetDefault() const
{
    Windows::System::UserProfile::DiagnosticsSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IDiagnosticsSettingsStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::DiagnosticsSettings consume_Windows_System_UserProfile_IDiagnosticsSettingsStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::System::UserProfile::DiagnosticsSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IDiagnosticsSettingsStatics)->GetForUser(get_abi(user), put_abi(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::FirstSignInSettings consume_Windows_System_UserProfile_IFirstSignInSettingsStatics<D>::GetDefault() const
{
    Windows::System::UserProfile::FirstSignInSettings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IFirstSignInSettingsStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::Calendars() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_Calendars(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::Clocks() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_Clocks(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::Currencies() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_Currencies(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_Languages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::HomeGeographicRegion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_HomeGeographicRegion(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::DayOfWeek consume_Windows_System_UserProfile_IGlobalizationPreferencesStatics<D>::WeekStartsOn() const
{
    Windows::Globalization::DayOfWeek value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IGlobalizationPreferencesStatics)->get_WeekStartsOn(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetImageFeedResult> consume_Windows_System_UserProfile_ILockScreenImageFeedStatics<D>::RequestSetImageFeedAsync(Windows::Foundation::Uri const& syndicationFeedUri) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetImageFeedResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::ILockScreenImageFeedStatics)->RequestSetImageFeedAsync(get_abi(syndicationFeedUri), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_UserProfile_ILockScreenImageFeedStatics<D>::TryRemoveImageFeed() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::ILockScreenImageFeedStatics)->TryRemoveImageFeed(&result));
    return result;
}

template <typename D> Windows::Foundation::Uri consume_Windows_System_UserProfile_ILockScreenStatics<D>::OriginalImageFile() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::ILockScreenStatics)->get_OriginalImageFile(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_System_UserProfile_ILockScreenStatics<D>::GetImageStream() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::ILockScreenStatics)->GetImageStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_System_UserProfile_ILockScreenStatics<D>::SetImageFileAsync(Windows::Storage::IStorageFile const& value) const
{
    Windows::Foundation::IAsyncAction Operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::ILockScreenStatics)->SetImageFileAsync(get_abi(value), put_abi(Operation)));
    return Operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_System_UserProfile_ILockScreenStatics<D>::SetImageStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    Windows::Foundation::IAsyncAction Operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::ILockScreenStatics)->SetImageStreamAsync(get_abi(value), put_abi(Operation)));
    return Operation;
}

template <typename D> bool consume_Windows_System_UserProfile_IUserInformationStatics<D>::AccountPictureChangeEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->get_AccountPictureChangeEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_System_UserProfile_IUserInformationStatics<D>::NameAccessAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->get_NameAccessAllowed(&value));
    return value;
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_System_UserProfile_IUserInformationStatics<D>::GetAccountPicture(Windows::System::UserProfile::AccountPictureKind const& kind) const
{
    Windows::Storage::IStorageFile storageFile{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->GetAccountPicture(get_abi(kind), put_abi(storageFile)));
    return storageFile;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> consume_Windows_System_UserProfile_IUserInformationStatics<D>::SetAccountPictureAsync(Windows::Storage::IStorageFile const& image) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->SetAccountPictureAsync(get_abi(image), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> consume_Windows_System_UserProfile_IUserInformationStatics<D>::SetAccountPicturesAsync(Windows::Storage::IStorageFile const& smallImage, Windows::Storage::IStorageFile const& largeImage, Windows::Storage::IStorageFile const& video) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->SetAccountPicturesAsync(get_abi(smallImage), get_abi(largeImage), get_abi(video), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> consume_Windows_System_UserProfile_IUserInformationStatics<D>::SetAccountPictureFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& image) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->SetAccountPictureFromStreamAsync(get_abi(image), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> consume_Windows_System_UserProfile_IUserInformationStatics<D>::SetAccountPicturesFromStreamsAsync(Windows::Storage::Streams::IRandomAccessStream const& smallImage, Windows::Storage::Streams::IRandomAccessStream const& largeImage, Windows::Storage::Streams::IRandomAccessStream const& video) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->SetAccountPicturesFromStreamsAsync(get_abi(smallImage), get_abi(largeImage), get_abi(video), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_System_UserProfile_IUserInformationStatics<D>::AccountPictureChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->add_AccountPictureChanged(get_abi(changeHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::UserProfile::IUserInformationStatics> consume_Windows_System_UserProfile_IUserInformationStatics<D>::AccountPictureChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    return impl::make_event_revoker<D, Windows::System::UserProfile::IUserInformationStatics>(this, &abi_t<Windows::System::UserProfile::IUserInformationStatics>::remove_AccountPictureChanged, AccountPictureChanged(changeHandler));
}

template <typename D> void consume_Windows_System_UserProfile_IUserInformationStatics<D>::AccountPictureChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->remove_AccountPictureChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_System_UserProfile_IUserInformationStatics<D>::GetDisplayNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->GetDisplayNameAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_System_UserProfile_IUserInformationStatics<D>::GetFirstNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->GetFirstNameAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_System_UserProfile_IUserInformationStatics<D>::GetLastNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->GetLastNameAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_System_UserProfile_IUserInformationStatics<D>::GetPrincipalNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->GetPrincipalNameAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> consume_Windows_System_UserProfile_IUserInformationStatics<D>::GetSessionInitiationProtocolUriAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->GetSessionInitiationProtocolUriAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_System_UserProfile_IUserInformationStatics<D>::GetDomainNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserInformationStatics)->GetDomainNameAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_UserProfile_IUserProfilePersonalizationSettings<D>::TrySetLockScreenImageAsync(Windows::Storage::StorageFile const& imageFile) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserProfilePersonalizationSettings)->TrySetLockScreenImageAsync(get_abi(imageFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_UserProfile_IUserProfilePersonalizationSettings<D>::TrySetWallpaperImageAsync(Windows::Storage::StorageFile const& imageFile) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserProfilePersonalizationSettings)->TrySetWallpaperImageAsync(get_abi(imageFile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::UserProfile::UserProfilePersonalizationSettings consume_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics<D>::Current() const
{
    Windows::System::UserProfile::UserProfilePersonalizationSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_UserProfile_IUserProfilePersonalizationSettingsStatics<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics)->IsSupported(&result));
    return result;
}

template <typename D>
struct produce<D, Windows::System::UserProfile::IAdvertisingManagerForUser> : produce_base<D, Windows::System::UserProfile::IAdvertisingManagerForUser>
{
    HRESULT __stdcall get_AdvertisingId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisingId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IAdvertisingManagerStatics> : produce_base<D, Windows::System::UserProfile::IAdvertisingManagerStatics>
{
    HRESULT __stdcall get_AdvertisingId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AdvertisingId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IAdvertisingManagerStatics2> : produce_base<D, Windows::System::UserProfile::IAdvertisingManagerStatics2>
{
    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IDiagnosticsSettings> : produce_base<D, Windows::System::UserProfile::IDiagnosticsSettings>
{
    HRESULT __stdcall get_CanUseDiagnosticsToTailorExperiences(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanUseDiagnosticsToTailorExperiences());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IDiagnosticsSettingsStatics> : produce_base<D, Windows::System::UserProfile::IDiagnosticsSettingsStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IFirstSignInSettings> : produce_base<D, Windows::System::UserProfile::IFirstSignInSettings>
{};

template <typename D>
struct produce<D, Windows::System::UserProfile::IFirstSignInSettingsStatics> : produce_base<D, Windows::System::UserProfile::IFirstSignInSettingsStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IGlobalizationPreferencesStatics> : produce_base<D, Windows::System::UserProfile::IGlobalizationPreferencesStatics>
{
    HRESULT __stdcall get_Calendars(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Calendars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clocks(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Clocks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Currencies(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Currencies());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Languages(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeGeographicRegion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HomeGeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekStartsOn(abi_t<Windows::Globalization::DayOfWeek>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WeekStartsOn());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::ILockScreenImageFeedStatics> : produce_base<D, Windows::System::UserProfile::ILockScreenImageFeedStatics>
{
    HRESULT __stdcall RequestSetImageFeedAsync(::IUnknown* syndicationFeedUri, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestSetImageFeedAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&syndicationFeedUri)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryRemoveImageFeed(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryRemoveImageFeed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::ILockScreenStatics> : produce_base<D, Windows::System::UserProfile::ILockScreenStatics>
{
    HRESULT __stdcall get_OriginalImageFile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginalImageFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetImageStream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetImageStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetImageFileAsync(::IUnknown* value, ::IUnknown** Operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *Operation = detach_abi(this->shim().SetImageFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *Operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetImageStreamAsync(::IUnknown* value, ::IUnknown** Operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *Operation = detach_abi(this->shim().SetImageStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *Operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IUserInformationStatics> : produce_base<D, Windows::System::UserProfile::IUserInformationStatics>
{
    HRESULT __stdcall get_AccountPictureChangeEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountPictureChangeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameAccessAllowed(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NameAccessAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAccountPicture(abi_t<Windows::System::UserProfile::AccountPictureKind> kind, ::IUnknown** storageFile) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *storageFile = detach_abi(this->shim().GetAccountPicture(*reinterpret_cast<Windows::System::UserProfile::AccountPictureKind const*>(&kind)));
            return S_OK;
        }
        catch (...)
        {
            *storageFile = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAccountPictureAsync(::IUnknown* image, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetAccountPictureAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&image)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAccountPicturesAsync(::IUnknown* smallImage, ::IUnknown* largeImage, ::IUnknown* video, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetAccountPicturesAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&smallImage), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&largeImage), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&video)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAccountPictureFromStreamAsync(::IUnknown* image, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetAccountPictureFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&image)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAccountPicturesFromStreamsAsync(::IUnknown* smallImage, ::IUnknown* largeImage, ::IUnknown* video, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetAccountPicturesFromStreamsAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&smallImage), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&largeImage), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&video)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccountPictureChanged(::IUnknown* changeHandler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AccountPictureChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountPictureChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccountPictureChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDisplayNameAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDisplayNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFirstNameAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFirstNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLastNameAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetLastNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPrincipalNameAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPrincipalNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSessionInitiationProtocolUriAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetSessionInitiationProtocolUriAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDomainNameAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDomainNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IUserProfilePersonalizationSettings> : produce_base<D, Windows::System::UserProfile::IUserProfilePersonalizationSettings>
{
    HRESULT __stdcall TrySetLockScreenImageAsync(::IUnknown* imageFile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TrySetLockScreenImageAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&imageFile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetWallpaperImageAsync(::IUnknown* imageFile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TrySetWallpaperImageAsync(*reinterpret_cast<Windows::Storage::StorageFile const*>(&imageFile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics> : produce_base<D, Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>
{
    HRESULT __stdcall get_Current(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSupported(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::UserProfile {

inline hstring AdvertisingManager::AdvertisingId()
{
    return get_activation_factory<AdvertisingManager, Windows::System::UserProfile::IAdvertisingManagerStatics>().AdvertisingId();
}

inline Windows::System::UserProfile::AdvertisingManagerForUser AdvertisingManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<AdvertisingManager, Windows::System::UserProfile::IAdvertisingManagerStatics2>().GetForUser(user);
}

inline Windows::System::UserProfile::DiagnosticsSettings DiagnosticsSettings::GetDefault()
{
    return get_activation_factory<DiagnosticsSettings, Windows::System::UserProfile::IDiagnosticsSettingsStatics>().GetDefault();
}

inline Windows::System::UserProfile::DiagnosticsSettings DiagnosticsSettings::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<DiagnosticsSettings, Windows::System::UserProfile::IDiagnosticsSettingsStatics>().GetForUser(user);
}

inline Windows::System::UserProfile::FirstSignInSettings FirstSignInSettings::GetDefault()
{
    return get_activation_factory<FirstSignInSettings, Windows::System::UserProfile::IFirstSignInSettingsStatics>().GetDefault();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Calendars()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().Calendars();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Clocks()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().Clocks();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Currencies()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().Currencies();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Languages()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().Languages();
}

inline hstring GlobalizationPreferences::HomeGeographicRegion()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().HomeGeographicRegion();
}

inline Windows::Globalization::DayOfWeek GlobalizationPreferences::WeekStartsOn()
{
    return get_activation_factory<GlobalizationPreferences, Windows::System::UserProfile::IGlobalizationPreferencesStatics>().WeekStartsOn();
}

inline Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetImageFeedResult> LockScreen::RequestSetImageFeedAsync(Windows::Foundation::Uri const& syndicationFeedUri)
{
    return get_activation_factory<LockScreen, Windows::System::UserProfile::ILockScreenImageFeedStatics>().RequestSetImageFeedAsync(syndicationFeedUri);
}

inline bool LockScreen::TryRemoveImageFeed()
{
    return get_activation_factory<LockScreen, Windows::System::UserProfile::ILockScreenImageFeedStatics>().TryRemoveImageFeed();
}

inline Windows::Foundation::Uri LockScreen::OriginalImageFile()
{
    return get_activation_factory<LockScreen, Windows::System::UserProfile::ILockScreenStatics>().OriginalImageFile();
}

inline Windows::Storage::Streams::IRandomAccessStream LockScreen::GetImageStream()
{
    return get_activation_factory<LockScreen, Windows::System::UserProfile::ILockScreenStatics>().GetImageStream();
}

inline Windows::Foundation::IAsyncAction LockScreen::SetImageFileAsync(Windows::Storage::IStorageFile const& value)
{
    return get_activation_factory<LockScreen, Windows::System::UserProfile::ILockScreenStatics>().SetImageFileAsync(value);
}

inline Windows::Foundation::IAsyncAction LockScreen::SetImageStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& value)
{
    return get_activation_factory<LockScreen, Windows::System::UserProfile::ILockScreenStatics>().SetImageStreamAsync(value);
}

inline bool UserInformation::AccountPictureChangeEnabled()
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().AccountPictureChangeEnabled();
}

inline bool UserInformation::NameAccessAllowed()
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().NameAccessAllowed();
}

inline Windows::Storage::IStorageFile UserInformation::GetAccountPicture(Windows::System::UserProfile::AccountPictureKind const& kind)
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().GetAccountPicture(kind);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> UserInformation::SetAccountPictureAsync(Windows::Storage::IStorageFile const& image)
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().SetAccountPictureAsync(image);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> UserInformation::SetAccountPicturesAsync(Windows::Storage::IStorageFile const& smallImage, Windows::Storage::IStorageFile const& largeImage, Windows::Storage::IStorageFile const& video)
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().SetAccountPicturesAsync(smallImage, largeImage, video);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> UserInformation::SetAccountPictureFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& image)
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().SetAccountPictureFromStreamAsync(image);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::UserProfile::SetAccountPictureResult> UserInformation::SetAccountPicturesFromStreamsAsync(Windows::Storage::Streams::IRandomAccessStream const& smallImage, Windows::Storage::Streams::IRandomAccessStream const& largeImage, Windows::Storage::Streams::IRandomAccessStream const& video)
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().SetAccountPicturesFromStreamsAsync(smallImage, largeImage, video);
}

inline event_token UserInformation::AccountPictureChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().AccountPictureChanged(changeHandler);
}

inline factory_event_revoker<Windows::System::UserProfile::IUserInformationStatics> UserInformation::AccountPictureChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
{
    auto factory = get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>();
    return { factory, &abi_t<Windows::System::UserProfile::IUserInformationStatics>::remove_AccountPictureChanged, factory.AccountPictureChanged(changeHandler) };
}

inline void UserInformation::AccountPictureChanged(event_token const& token)
{
    get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().AccountPictureChanged(token);
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetDisplayNameAsync()
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().GetDisplayNameAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetFirstNameAsync()
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().GetFirstNameAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetLastNameAsync()
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().GetLastNameAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetPrincipalNameAsync()
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().GetPrincipalNameAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> UserInformation::GetSessionInitiationProtocolUriAsync()
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().GetSessionInitiationProtocolUriAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetDomainNameAsync()
{
    return get_activation_factory<UserInformation, Windows::System::UserProfile::IUserInformationStatics>().GetDomainNameAsync();
}

inline Windows::System::UserProfile::UserProfilePersonalizationSettings UserProfilePersonalizationSettings::Current()
{
    return get_activation_factory<UserProfilePersonalizationSettings, Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>().Current();
}

inline bool UserProfilePersonalizationSettings::IsSupported()
{
    return get_activation_factory<UserProfilePersonalizationSettings, Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics>().IsSupported();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::UserProfile::IAdvertisingManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IAdvertisingManagerForUser> {};

template<> struct hash<winrt::Windows::System::UserProfile::IAdvertisingManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IAdvertisingManagerStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IAdvertisingManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IAdvertisingManagerStatics2> {};

template<> struct hash<winrt::Windows::System::UserProfile::IDiagnosticsSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IDiagnosticsSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::IDiagnosticsSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IDiagnosticsSettingsStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IFirstSignInSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IFirstSignInSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::IFirstSignInSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IFirstSignInSettingsStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::ILockScreenImageFeedStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::ILockScreenImageFeedStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::ILockScreenStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::ILockScreenStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IUserInformationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IUserInformationStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::IUserProfilePersonalizationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IUserProfilePersonalizationSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::IUserProfilePersonalizationSettingsStatics> {};

template<> struct hash<winrt::Windows::System::UserProfile::AdvertisingManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::AdvertisingManager> {};

template<> struct hash<winrt::Windows::System::UserProfile::AdvertisingManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::AdvertisingManagerForUser> {};

template<> struct hash<winrt::Windows::System::UserProfile::DiagnosticsSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::DiagnosticsSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::FirstSignInSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::FirstSignInSettings> {};

template<> struct hash<winrt::Windows::System::UserProfile::GlobalizationPreferences> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::GlobalizationPreferences> {};

template<> struct hash<winrt::Windows::System::UserProfile::LockScreen> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::LockScreen> {};

template<> struct hash<winrt::Windows::System::UserProfile::UserInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::UserInformation> {};

template<> struct hash<winrt::Windows::System::UserProfile::UserProfilePersonalizationSettings> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::UserProfile::UserProfilePersonalizationSettings> {};

}

WINRT_WARNING_POP
