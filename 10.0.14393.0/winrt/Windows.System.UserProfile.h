// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.System.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Globalization.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.System.UserProfile.3.h"
#include "Windows.System.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::UserProfile::IAdvertisingManagerForUser> : produce_base<D, Windows::System::UserProfile::IAdvertisingManagerForUser>
{
    HRESULT __stdcall get_AdvertisingId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdvertisingId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
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
    HRESULT __stdcall get_AdvertisingId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdvertisingId());
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
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::System::UserProfile::IAdvertisingManagerForUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
    HRESULT __stdcall abi_GetDefault(abi_arg_out<Windows::System::UserProfile::IFirstSignInSettings> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDefault());
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
    HRESULT __stdcall get_Calendars(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Calendars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Clocks(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Clocks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Currencies(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Currencies());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Languages(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Languages());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeGeographicRegion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HomeGeographicRegion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekStartsOn(Windows::Globalization::DayOfWeek * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WeekStartsOn());
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
    HRESULT __stdcall abi_RequestSetImageFeedAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> syndicationFeedUri, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetImageFeedResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestSetImageFeedAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&syndicationFeedUri)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryRemoveImageFeed(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryRemoveImageFeed());
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
    HRESULT __stdcall get_OriginalImageFile(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OriginalImageFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetImageStream(abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetImageStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetImageFileAsync(abi_arg_in<Windows::Storage::IStorageFile> value, abi_arg_out<Windows::Foundation::IAsyncAction> Operation) noexcept override
    {
        try
        {
            *Operation = detach(this->shim().SetImageFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *Operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetImageStreamAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> value, abi_arg_out<Windows::Foundation::IAsyncAction> Operation) noexcept override
    {
        try
        {
            *Operation = detach(this->shim().SetImageStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&value)));
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
    HRESULT __stdcall get_AccountPictureChangeEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccountPictureChangeEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameAccessAllowed(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NameAccessAllowed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAccountPicture(Windows::System::UserProfile::AccountPictureKind kind, abi_arg_out<Windows::Storage::IStorageFile> storageFile) noexcept override
    {
        try
        {
            *storageFile = detach(this->shim().GetAccountPicture(kind));
            return S_OK;
        }
        catch (...)
        {
            *storageFile = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAccountPictureAsync(abi_arg_in<Windows::Storage::IStorageFile> image, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SetAccountPictureAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&image)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAccountPicturesAsync(abi_arg_in<Windows::Storage::IStorageFile> smallImage, abi_arg_in<Windows::Storage::IStorageFile> largeImage, abi_arg_in<Windows::Storage::IStorageFile> video, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SetAccountPicturesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&smallImage), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&largeImage), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&video)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAccountPictureFromStreamAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> image, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SetAccountPictureFromStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&image)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetAccountPicturesFromStreamsAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> smallImage, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> largeImage, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> video, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SetAccountPicturesFromStreamsAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&smallImage), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&largeImage), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&video)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccountPictureChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> changeHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AccountPictureChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccountPictureChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AccountPictureChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDisplayNameAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDisplayNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFirstNameAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFirstNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLastNameAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetLastNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPrincipalNameAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetPrincipalNameAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSessionInitiationProtocolUriAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetSessionInitiationProtocolUriAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDomainNameAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDomainNameAsync());
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
    HRESULT __stdcall abi_TrySetLockScreenImageAsync(abi_arg_in<Windows::Storage::IStorageFile> imageFile, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().TrySetLockScreenImageAsync(*reinterpret_cast<const Windows::Storage::StorageFile *>(&imageFile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetWallpaperImageAsync(abi_arg_in<Windows::Storage::IStorageFile> imageFile, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().TrySetWallpaperImageAsync(*reinterpret_cast<const Windows::Storage::StorageFile *>(&imageFile)));
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
    HRESULT __stdcall get_Current(abi_arg_out<Windows::System::UserProfile::IUserProfilePersonalizationSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsSupported(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::UserProfile {

template <typename D> hstring impl_IAdvertisingManagerStatics<D>::AdvertisingId() const
{
    hstring value;
    check_hresult(static_cast<const IAdvertisingManagerStatics &>(static_cast<const D &>(*this))->get_AdvertisingId(put(value)));
    return value;
}

template <typename D> hstring impl_IAdvertisingManagerForUser<D>::AdvertisingId() const
{
    hstring value;
    check_hresult(static_cast<const IAdvertisingManagerForUser &>(static_cast<const D &>(*this))->get_AdvertisingId(put(value)));
    return value;
}

template <typename D> Windows::System::User impl_IAdvertisingManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IAdvertisingManagerForUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> Windows::System::UserProfile::AdvertisingManagerForUser impl_IAdvertisingManagerStatics2<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::System::UserProfile::AdvertisingManagerForUser value { nullptr };
    check_hresult(static_cast<const IAdvertisingManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IUserProfilePersonalizationSettings<D>::TrySetLockScreenImageAsync(const Windows::Storage::StorageFile & imageFile) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IUserProfilePersonalizationSettings &>(static_cast<const D &>(*this))->abi_TrySetLockScreenImageAsync(get(imageFile), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IUserProfilePersonalizationSettings<D>::TrySetWallpaperImageAsync(const Windows::Storage::StorageFile & imageFile) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IUserProfilePersonalizationSettings &>(static_cast<const D &>(*this))->abi_TrySetWallpaperImageAsync(get(imageFile), put(operation)));
    return operation;
}

template <typename D> Windows::System::UserProfile::UserProfilePersonalizationSettings impl_IUserProfilePersonalizationSettingsStatics<D>::Current() const
{
    Windows::System::UserProfile::UserProfilePersonalizationSettings value { nullptr };
    check_hresult(static_cast<const IUserProfilePersonalizationSettingsStatics &>(static_cast<const D &>(*this))->get_Current(put(value)));
    return value;
}

template <typename D> bool impl_IUserProfilePersonalizationSettingsStatics<D>::IsSupported() const
{
    bool result {};
    check_hresult(static_cast<const IUserProfilePersonalizationSettingsStatics &>(static_cast<const D &>(*this))->abi_IsSupported(&result));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IGlobalizationPreferencesStatics<D>::Calendars() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IGlobalizationPreferencesStatics &>(static_cast<const D &>(*this))->get_Calendars(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IGlobalizationPreferencesStatics<D>::Clocks() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IGlobalizationPreferencesStatics &>(static_cast<const D &>(*this))->get_Clocks(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IGlobalizationPreferencesStatics<D>::Currencies() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IGlobalizationPreferencesStatics &>(static_cast<const D &>(*this))->get_Currencies(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IGlobalizationPreferencesStatics<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IGlobalizationPreferencesStatics &>(static_cast<const D &>(*this))->get_Languages(put(value)));
    return value;
}

template <typename D> hstring impl_IGlobalizationPreferencesStatics<D>::HomeGeographicRegion() const
{
    hstring value;
    check_hresult(static_cast<const IGlobalizationPreferencesStatics &>(static_cast<const D &>(*this))->get_HomeGeographicRegion(put(value)));
    return value;
}

template <typename D> Windows::Globalization::DayOfWeek impl_IGlobalizationPreferencesStatics<D>::WeekStartsOn() const
{
    Windows::Globalization::DayOfWeek value {};
    check_hresult(static_cast<const IGlobalizationPreferencesStatics &>(static_cast<const D &>(*this))->get_WeekStartsOn(&value));
    return value;
}

template <typename D> Windows::System::UserProfile::FirstSignInSettings impl_IFirstSignInSettingsStatics<D>::GetDefault() const
{
    Windows::System::UserProfile::FirstSignInSettings result { nullptr };
    check_hresult(static_cast<const IFirstSignInSettingsStatics &>(static_cast<const D &>(*this))->abi_GetDefault(put(result)));
    return result;
}

template <typename D> bool impl_IUserInformationStatics<D>::AccountPictureChangeEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->get_AccountPictureChangeEnabled(&value));
    return value;
}

template <typename D> bool impl_IUserInformationStatics<D>::NameAccessAllowed() const
{
    bool value {};
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->get_NameAccessAllowed(&value));
    return value;
}

template <typename D> Windows::Storage::IStorageFile impl_IUserInformationStatics<D>::GetAccountPicture(Windows::System::UserProfile::AccountPictureKind kind) const
{
    Windows::Storage::IStorageFile storageFile;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_GetAccountPicture(kind, put(storageFile)));
    return storageFile;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> impl_IUserInformationStatics<D>::SetAccountPictureAsync(const Windows::Storage::IStorageFile & image) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_SetAccountPictureAsync(get(image), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> impl_IUserInformationStatics<D>::SetAccountPicturesAsync(const Windows::Storage::IStorageFile & smallImage, const Windows::Storage::IStorageFile & largeImage, const Windows::Storage::IStorageFile & video) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_SetAccountPicturesAsync(get(smallImage), get(largeImage), get(video), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> impl_IUserInformationStatics<D>::SetAccountPictureFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & image) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_SetAccountPictureFromStreamAsync(get(image), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> impl_IUserInformationStatics<D>::SetAccountPicturesFromStreamsAsync(const Windows::Storage::Streams::IRandomAccessStream & smallImage, const Windows::Storage::Streams::IRandomAccessStream & largeImage, const Windows::Storage::Streams::IRandomAccessStream & video) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_SetAccountPicturesFromStreamsAsync(get(smallImage), get(largeImage), get(video), put(operation)));
    return operation;
}

template <typename D> event_token impl_IUserInformationStatics<D>::AccountPictureChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->add_AccountPictureChanged(get(changeHandler), &token));
    return token;
}

template <typename D> event_revoker<IUserInformationStatics> impl_IUserInformationStatics<D>::AccountPictureChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const
{
    return impl::make_event_revoker<D, IUserInformationStatics>(this, &ABI::Windows::System::UserProfile::IUserInformationStatics::remove_AccountPictureChanged, AccountPictureChanged(changeHandler));
}

template <typename D> void impl_IUserInformationStatics<D>::AccountPictureChanged(event_token token) const
{
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->remove_AccountPictureChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserInformationStatics<D>::GetDisplayNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_GetDisplayNameAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserInformationStatics<D>::GetFirstNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_GetFirstNameAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserInformationStatics<D>::GetLastNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_GetLastNameAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserInformationStatics<D>::GetPrincipalNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_GetPrincipalNameAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> impl_IUserInformationStatics<D>::GetSessionInitiationProtocolUriAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_GetSessionInitiationProtocolUriAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserInformationStatics<D>::GetDomainNameAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IUserInformationStatics &>(static_cast<const D &>(*this))->abi_GetDomainNameAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Uri impl_ILockScreenStatics<D>::OriginalImageFile() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ILockScreenStatics &>(static_cast<const D &>(*this))->get_OriginalImageFile(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_ILockScreenStatics<D>::GetImageStream() const
{
    Windows::Storage::Streams::IRandomAccessStream value;
    check_hresult(static_cast<const ILockScreenStatics &>(static_cast<const D &>(*this))->abi_GetImageStream(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILockScreenStatics<D>::SetImageFileAsync(const Windows::Storage::IStorageFile & value) const
{
    Windows::Foundation::IAsyncAction Operation;
    check_hresult(static_cast<const ILockScreenStatics &>(static_cast<const D &>(*this))->abi_SetImageFileAsync(get(value), put(Operation)));
    return Operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_ILockScreenStatics<D>::SetImageStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & value) const
{
    Windows::Foundation::IAsyncAction Operation;
    check_hresult(static_cast<const ILockScreenStatics &>(static_cast<const D &>(*this))->abi_SetImageStreamAsync(get(value), put(Operation)));
    return Operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetImageFeedResult> impl_ILockScreenImageFeedStatics<D>::RequestSetImageFeedAsync(const Windows::Foundation::Uri & syndicationFeedUri) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetImageFeedResult> value;
    check_hresult(static_cast<const ILockScreenImageFeedStatics &>(static_cast<const D &>(*this))->abi_RequestSetImageFeedAsync(get(syndicationFeedUri), put(value)));
    return value;
}

template <typename D> bool impl_ILockScreenImageFeedStatics<D>::TryRemoveImageFeed() const
{
    bool result {};
    check_hresult(static_cast<const ILockScreenImageFeedStatics &>(static_cast<const D &>(*this))->abi_TryRemoveImageFeed(&result));
    return result;
}

inline hstring AdvertisingManager::AdvertisingId()
{
    return get_activation_factory<AdvertisingManager, IAdvertisingManagerStatics>().AdvertisingId();
}

inline Windows::System::UserProfile::AdvertisingManagerForUser AdvertisingManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<AdvertisingManager, IAdvertisingManagerStatics2>().GetForUser(user);
}

inline Windows::System::UserProfile::FirstSignInSettings FirstSignInSettings::GetDefault()
{
    return get_activation_factory<FirstSignInSettings, IFirstSignInSettingsStatics>().GetDefault();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Calendars()
{
    return get_activation_factory<GlobalizationPreferences, IGlobalizationPreferencesStatics>().Calendars();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Clocks()
{
    return get_activation_factory<GlobalizationPreferences, IGlobalizationPreferencesStatics>().Clocks();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Currencies()
{
    return get_activation_factory<GlobalizationPreferences, IGlobalizationPreferencesStatics>().Currencies();
}

inline Windows::Foundation::Collections::IVectorView<hstring> GlobalizationPreferences::Languages()
{
    return get_activation_factory<GlobalizationPreferences, IGlobalizationPreferencesStatics>().Languages();
}

inline hstring GlobalizationPreferences::HomeGeographicRegion()
{
    return get_activation_factory<GlobalizationPreferences, IGlobalizationPreferencesStatics>().HomeGeographicRegion();
}

inline Windows::Globalization::DayOfWeek GlobalizationPreferences::WeekStartsOn()
{
    return get_activation_factory<GlobalizationPreferences, IGlobalizationPreferencesStatics>().WeekStartsOn();
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetImageFeedResult> LockScreen::RequestSetImageFeedAsync(const Windows::Foundation::Uri & syndicationFeedUri)
{
    return get_activation_factory<LockScreen, ILockScreenImageFeedStatics>().RequestSetImageFeedAsync(syndicationFeedUri);
}

inline bool LockScreen::TryRemoveImageFeed()
{
    return get_activation_factory<LockScreen, ILockScreenImageFeedStatics>().TryRemoveImageFeed();
}

inline Windows::Foundation::Uri LockScreen::OriginalImageFile()
{
    return get_activation_factory<LockScreen, ILockScreenStatics>().OriginalImageFile();
}

inline Windows::Storage::Streams::IRandomAccessStream LockScreen::GetImageStream()
{
    return get_activation_factory<LockScreen, ILockScreenStatics>().GetImageStream();
}

inline Windows::Foundation::IAsyncAction LockScreen::SetImageFileAsync(const Windows::Storage::IStorageFile & value)
{
    return get_activation_factory<LockScreen, ILockScreenStatics>().SetImageFileAsync(value);
}

inline Windows::Foundation::IAsyncAction LockScreen::SetImageStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & value)
{
    return get_activation_factory<LockScreen, ILockScreenStatics>().SetImageStreamAsync(value);
}

inline bool UserInformation::AccountPictureChangeEnabled()
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().AccountPictureChangeEnabled();
}

inline bool UserInformation::NameAccessAllowed()
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().NameAccessAllowed();
}

inline Windows::Storage::IStorageFile UserInformation::GetAccountPicture(Windows::System::UserProfile::AccountPictureKind kind)
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().GetAccountPicture(kind);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> UserInformation::SetAccountPictureAsync(const Windows::Storage::IStorageFile & image)
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().SetAccountPictureAsync(image);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> UserInformation::SetAccountPicturesAsync(const Windows::Storage::IStorageFile & smallImage, const Windows::Storage::IStorageFile & largeImage, const Windows::Storage::IStorageFile & video)
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().SetAccountPicturesAsync(smallImage, largeImage, video);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> UserInformation::SetAccountPictureFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & image)
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().SetAccountPictureFromStreamAsync(image);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::UserProfile::SetAccountPictureResult> UserInformation::SetAccountPicturesFromStreamsAsync(const Windows::Storage::Streams::IRandomAccessStream & smallImage, const Windows::Storage::Streams::IRandomAccessStream & largeImage, const Windows::Storage::Streams::IRandomAccessStream & video)
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().SetAccountPicturesFromStreamsAsync(smallImage, largeImage, video);
}

inline event_token UserInformation::AccountPictureChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler)
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().AccountPictureChanged(changeHandler);
}

inline factory_event_revoker<IUserInformationStatics> UserInformation::AccountPictureChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler)
{
    auto factory = get_activation_factory<UserInformation, IUserInformationStatics>();
    return { factory, &ABI::Windows::System::UserProfile::IUserInformationStatics::remove_AccountPictureChanged, factory.AccountPictureChanged(changeHandler) };
}

inline void UserInformation::AccountPictureChanged(event_token token)
{
    get_activation_factory<UserInformation, IUserInformationStatics>().AccountPictureChanged(token);
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetDisplayNameAsync()
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().GetDisplayNameAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetFirstNameAsync()
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().GetFirstNameAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetLastNameAsync()
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().GetLastNameAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetPrincipalNameAsync()
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().GetPrincipalNameAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> UserInformation::GetSessionInitiationProtocolUriAsync()
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().GetSessionInitiationProtocolUriAsync();
}

inline Windows::Foundation::IAsyncOperation<hstring> UserInformation::GetDomainNameAsync()
{
    return get_activation_factory<UserInformation, IUserInformationStatics>().GetDomainNameAsync();
}

inline Windows::System::UserProfile::UserProfilePersonalizationSettings UserProfilePersonalizationSettings::Current()
{
    return get_activation_factory<UserProfilePersonalizationSettings, IUserProfilePersonalizationSettingsStatics>().Current();
}

inline bool UserProfilePersonalizationSettings::IsSupported()
{
    return get_activation_factory<UserProfilePersonalizationSettings, IUserProfilePersonalizationSettingsStatics>().IsSupported();
}

}

}
