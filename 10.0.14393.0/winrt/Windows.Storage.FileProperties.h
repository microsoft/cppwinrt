// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Geolocation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.FileProperties.3.h"
#include "Windows.Storage.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Storage::FileProperties::IBasicProperties> : produce_base<D, Windows::Storage::FileProperties::IBasicProperties>
{
    HRESULT __stdcall get_Size(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateModified(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateModified());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemDate(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemDate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::FileProperties::IDocumentProperties> : produce_base<D, Windows::Storage::FileProperties::IDocumentProperties>
{
    HRESULT __stdcall get_Author(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Comment(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Comment(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::FileProperties::IGeotagHelperStatics> : produce_base<D, Windows::Storage::FileProperties::IGeotagHelperStatics>
{
    HRESULT __stdcall abi_GetGeotagAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetGeotagAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetGeotagFromGeolocatorAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::Devices::Geolocation::IGeolocator> geolocator, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SetGeotagFromGeolocatorAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::Devices::Geolocation::Geolocator *>(&geolocator)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetGeotagAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::Devices::Geolocation::IGeopoint> geopoint, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SetGeotagAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::Devices::Geolocation::Geopoint *>(&geopoint)));
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
struct produce<D, Windows::Storage::FileProperties::IImageProperties> : produce_base<D, Windows::Storage::FileProperties::IImageProperties>
{
    HRESULT __stdcall get_Rating(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rating());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rating(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Rating(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTaken(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateTaken());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DateTaken(abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            this->shim().DateTaken(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Latitude(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Latitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Longitude(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Longitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraManufacturer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CameraManufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CameraManufacturer(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CameraManufacturer(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraModel(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CameraModel());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CameraModel(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().CameraModel(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(Windows::Storage::FileProperties::PhotoOrientation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeopleNames(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeopleNames());
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
struct produce<D, Windows::Storage::FileProperties::IMusicProperties> : produce_base<D, Windows::Storage::FileProperties::IMusicProperties>
{
    HRESULT __stdcall get_Album(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Album());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Album(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Album(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Artist(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Artist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Artist(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Artist(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Genre(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Genre());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrackNumber(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrackNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrackNumber(uint32_t value) noexcept override
    {
        try
        {
            this->shim().TrackNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rating(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rating());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rating(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Rating(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlbumArtist(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlbumArtist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumArtist(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().AlbumArtist(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Composers(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Composers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Conductors(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Conductors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Subtitle(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Producers(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Producers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Publisher(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Publisher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Publisher(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Publisher(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Writers(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Writers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Year());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Year(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Year(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::FileProperties::IStorageItemContentProperties> : produce_base<D, Windows::Storage::FileProperties::IStorageItemContentProperties>
{
    HRESULT __stdcall abi_GetMusicPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::MusicProperties>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetMusicPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVideoPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::VideoProperties>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetVideoPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetImagePropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::ImageProperties>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetImagePropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDocumentPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::DocumentProperties>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDocumentPropertiesAsync());
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
struct produce<D, Windows::Storage::FileProperties::IStorageItemExtraProperties> : produce_base<D, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    HRESULT __stdcall abi_RetrievePropertiesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> propertiesToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RetrievePropertiesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&propertiesToRetrieve)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SavePropertiesAsync(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>>> propertiesToSave, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SavePropertiesAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> *>(&propertiesToSave)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SavePropertiesAsyncOverloadDefault(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SavePropertiesAsync());
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
struct produce<D, Windows::Storage::FileProperties::IThumbnailProperties> : produce_base<D, Windows::Storage::FileProperties::IThumbnailProperties>
{
    HRESULT __stdcall get_OriginalWidth(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OriginalWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalHeight(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OriginalHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReturnedSmallerCachedSize(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReturnedSmallerCachedSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Storage::FileProperties::ThumbnailType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::FileProperties::IVideoProperties> : produce_base<D, Windows::Storage::FileProperties::IVideoProperties>
{
    HRESULT __stdcall get_Rating(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rating());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Rating(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Rating(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Latitude(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Latitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Longitude(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Longitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Subtitle(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Producers(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Producers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Publisher(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Publisher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Publisher(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Publisher(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Writers(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Writers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Year());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Year(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Year(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Directors(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Directors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(Windows::Storage::FileProperties::VideoOrientation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Storage::FileProperties {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> impl_IGeotagHelperStatics<D>::GetGeotagAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> operation;
    check_hresult(static_cast<const IGeotagHelperStatics &>(static_cast<const D &>(*this))->abi_GetGeotagAsync(get(file), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IGeotagHelperStatics<D>::SetGeotagFromGeolocatorAsync(const Windows::Storage::IStorageFile & file, const Windows::Devices::Geolocation::Geolocator & geolocator) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IGeotagHelperStatics &>(static_cast<const D &>(*this))->abi_SetGeotagFromGeolocatorAsync(get(file), get(geolocator), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IGeotagHelperStatics<D>::SetGeotagAsync(const Windows::Storage::IStorageFile & file, const Windows::Devices::Geolocation::Geopoint & geopoint) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IGeotagHelperStatics &>(static_cast<const D &>(*this))->abi_SetGeotagAsync(get(file), get(geopoint), put(operation)));
    return operation;
}

template <typename D> uint32_t impl_IThumbnailProperties<D>::OriginalWidth() const
{
    uint32_t value {};
    check_hresult(static_cast<const IThumbnailProperties &>(static_cast<const D &>(*this))->get_OriginalWidth(&value));
    return value;
}

template <typename D> uint32_t impl_IThumbnailProperties<D>::OriginalHeight() const
{
    uint32_t value {};
    check_hresult(static_cast<const IThumbnailProperties &>(static_cast<const D &>(*this))->get_OriginalHeight(&value));
    return value;
}

template <typename D> bool impl_IThumbnailProperties<D>::ReturnedSmallerCachedSize() const
{
    bool value {};
    check_hresult(static_cast<const IThumbnailProperties &>(static_cast<const D &>(*this))->get_ReturnedSmallerCachedSize(&value));
    return value;
}

template <typename D> Windows::Storage::FileProperties::ThumbnailType impl_IThumbnailProperties<D>::Type() const
{
    Windows::Storage::FileProperties::ThumbnailType value {};
    check_hresult(static_cast<const IThumbnailProperties &>(static_cast<const D &>(*this))->get_Type(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> impl_IStorageItemExtraProperties<D>::RetrievePropertiesAsync(const Windows::Foundation::Collections::IIterable<hstring> & propertiesToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::IInspectable>> operation;
    check_hresult(static_cast<const IStorageItemExtraProperties &>(static_cast<const D &>(*this))->abi_RetrievePropertiesAsync(get(propertiesToRetrieve), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageItemExtraProperties<D>::SavePropertiesAsync(const Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::IInspectable>> & propertiesToSave) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageItemExtraProperties &>(static_cast<const D &>(*this))->abi_SavePropertiesAsync(get(propertiesToSave), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageItemExtraProperties<D>::SavePropertiesAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageItemExtraProperties &>(static_cast<const D &>(*this))->abi_SavePropertiesAsyncOverloadDefault(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::MusicProperties> impl_IStorageItemContentProperties<D>::GetMusicPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::MusicProperties> operation;
    check_hresult(static_cast<const IStorageItemContentProperties &>(static_cast<const D &>(*this))->abi_GetMusicPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::VideoProperties> impl_IStorageItemContentProperties<D>::GetVideoPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::VideoProperties> operation;
    check_hresult(static_cast<const IStorageItemContentProperties &>(static_cast<const D &>(*this))->abi_GetVideoPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::ImageProperties> impl_IStorageItemContentProperties<D>::GetImagePropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::ImageProperties> operation;
    check_hresult(static_cast<const IStorageItemContentProperties &>(static_cast<const D &>(*this))->abi_GetImagePropertiesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::DocumentProperties> impl_IStorageItemContentProperties<D>::GetDocumentPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::DocumentProperties> operation;
    check_hresult(static_cast<const IStorageItemContentProperties &>(static_cast<const D &>(*this))->abi_GetDocumentPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> hstring impl_IMusicProperties<D>::Album() const
{
    hstring value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Album(put(value)));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::Album(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_Album(get(value)));
}

template <typename D> hstring impl_IMusicProperties<D>::Artist() const
{
    hstring value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Artist(put(value)));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::Artist(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_Artist(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IMusicProperties<D>::Genre() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Genre(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMusicProperties<D>::TrackNumber() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_TrackNumber(&value));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::TrackNumber(uint32_t value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_TrackNumber(value));
}

template <typename D> hstring impl_IMusicProperties<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> uint32_t impl_IMusicProperties<D>::Rating() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Rating(&value));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::Rating(uint32_t value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_Rating(value));
}

template <typename D> Windows::Foundation::TimeSpan impl_IMusicProperties<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMusicProperties<D>::Bitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Bitrate(&value));
    return value;
}

template <typename D> hstring impl_IMusicProperties<D>::AlbumArtist() const
{
    hstring value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_AlbumArtist(put(value)));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::AlbumArtist(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_AlbumArtist(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IMusicProperties<D>::Composers() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Composers(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IMusicProperties<D>::Conductors() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Conductors(put(value)));
    return value;
}

template <typename D> hstring impl_IMusicProperties<D>::Subtitle() const
{
    hstring value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Subtitle(put(value)));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::Subtitle(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_Subtitle(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IMusicProperties<D>::Producers() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Producers(put(value)));
    return value;
}

template <typename D> hstring impl_IMusicProperties<D>::Publisher() const
{
    hstring value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Publisher(put(value)));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::Publisher(hstring_ref value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_Publisher(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IMusicProperties<D>::Writers() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Writers(put(value)));
    return value;
}

template <typename D> uint32_t impl_IMusicProperties<D>::Year() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->get_Year(&value));
    return value;
}

template <typename D> void impl_IMusicProperties<D>::Year(uint32_t value) const
{
    check_hresult(static_cast<const IMusicProperties &>(static_cast<const D &>(*this))->put_Year(value));
}

template <typename D> uint32_t impl_IImageProperties<D>::Rating() const
{
    uint32_t value {};
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_Rating(&value));
    return value;
}

template <typename D> void impl_IImageProperties<D>::Rating(uint32_t value) const
{
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->put_Rating(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IImageProperties<D>::Keywords() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_Keywords(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IImageProperties<D>::DateTaken() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_DateTaken(put(value)));
    return value;
}

template <typename D> void impl_IImageProperties<D>::DateTaken(const Windows::Foundation::DateTime & value) const
{
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->put_DateTaken(get(value)));
}

template <typename D> uint32_t impl_IImageProperties<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_IImageProperties<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> hstring impl_IImageProperties<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IImageProperties<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Foundation::IReference<double> impl_IImageProperties<D>::Latitude() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_Latitude(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IImageProperties<D>::Longitude() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_Longitude(put(value)));
    return value;
}

template <typename D> hstring impl_IImageProperties<D>::CameraManufacturer() const
{
    hstring value;
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_CameraManufacturer(put(value)));
    return value;
}

template <typename D> void impl_IImageProperties<D>::CameraManufacturer(hstring_ref value) const
{
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->put_CameraManufacturer(get(value)));
}

template <typename D> hstring impl_IImageProperties<D>::CameraModel() const
{
    hstring value;
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_CameraModel(put(value)));
    return value;
}

template <typename D> void impl_IImageProperties<D>::CameraModel(hstring_ref value) const
{
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->put_CameraModel(get(value)));
}

template <typename D> Windows::Storage::FileProperties::PhotoOrientation impl_IImageProperties<D>::Orientation() const
{
    Windows::Storage::FileProperties::PhotoOrientation value {};
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_Orientation(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IImageProperties<D>::PeopleNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IImageProperties &>(static_cast<const D &>(*this))->get_PeopleNames(put(value)));
    return value;
}

template <typename D> uint32_t impl_IVideoProperties<D>::Rating() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Rating(&value));
    return value;
}

template <typename D> void impl_IVideoProperties<D>::Rating(uint32_t value) const
{
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->put_Rating(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVideoProperties<D>::Keywords() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Keywords(put(value)));
    return value;
}

template <typename D> uint32_t impl_IVideoProperties<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_IVideoProperties<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IVideoProperties<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IVideoProperties<D>::Latitude() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Latitude(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> impl_IVideoProperties<D>::Longitude() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Longitude(put(value)));
    return value;
}

template <typename D> hstring impl_IVideoProperties<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IVideoProperties<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> hstring impl_IVideoProperties<D>::Subtitle() const
{
    hstring value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Subtitle(put(value)));
    return value;
}

template <typename D> void impl_IVideoProperties<D>::Subtitle(hstring_ref value) const
{
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->put_Subtitle(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVideoProperties<D>::Producers() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Producers(put(value)));
    return value;
}

template <typename D> hstring impl_IVideoProperties<D>::Publisher() const
{
    hstring value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Publisher(put(value)));
    return value;
}

template <typename D> void impl_IVideoProperties<D>::Publisher(hstring_ref value) const
{
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->put_Publisher(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVideoProperties<D>::Writers() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Writers(put(value)));
    return value;
}

template <typename D> uint32_t impl_IVideoProperties<D>::Year() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Year(&value));
    return value;
}

template <typename D> void impl_IVideoProperties<D>::Year(uint32_t value) const
{
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->put_Year(value));
}

template <typename D> uint32_t impl_IVideoProperties<D>::Bitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Bitrate(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IVideoProperties<D>::Directors() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Directors(put(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::VideoOrientation impl_IVideoProperties<D>::Orientation() const
{
    Windows::Storage::FileProperties::VideoOrientation value {};
    check_hresult(static_cast<const IVideoProperties &>(static_cast<const D &>(*this))->get_Orientation(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IDocumentProperties<D>::Author() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IDocumentProperties &>(static_cast<const D &>(*this))->get_Author(put(value)));
    return value;
}

template <typename D> hstring impl_IDocumentProperties<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IDocumentProperties &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IDocumentProperties<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IDocumentProperties &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IDocumentProperties<D>::Keywords() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IDocumentProperties &>(static_cast<const D &>(*this))->get_Keywords(put(value)));
    return value;
}

template <typename D> hstring impl_IDocumentProperties<D>::Comment() const
{
    hstring value;
    check_hresult(static_cast<const IDocumentProperties &>(static_cast<const D &>(*this))->get_Comment(put(value)));
    return value;
}

template <typename D> void impl_IDocumentProperties<D>::Comment(hstring_ref value) const
{
    check_hresult(static_cast<const IDocumentProperties &>(static_cast<const D &>(*this))->put_Comment(get(value)));
}

template <typename D> uint64_t impl_IBasicProperties<D>::Size() const
{
    uint64_t value {};
    check_hresult(static_cast<const IBasicProperties &>(static_cast<const D &>(*this))->get_Size(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IBasicProperties<D>::DateModified() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IBasicProperties &>(static_cast<const D &>(*this))->get_DateModified(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IBasicProperties<D>::ItemDate() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IBasicProperties &>(static_cast<const D &>(*this))->get_ItemDate(put(value)));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> GeotagHelper::GetGeotagAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<GeotagHelper, IGeotagHelperStatics>().GetGeotagAsync(file);
}

inline Windows::Foundation::IAsyncAction GeotagHelper::SetGeotagFromGeolocatorAsync(const Windows::Storage::IStorageFile & file, const Windows::Devices::Geolocation::Geolocator & geolocator)
{
    return get_activation_factory<GeotagHelper, IGeotagHelperStatics>().SetGeotagFromGeolocatorAsync(file, geolocator);
}

inline Windows::Foundation::IAsyncAction GeotagHelper::SetGeotagAsync(const Windows::Storage::IStorageFile & file, const Windows::Devices::Geolocation::Geopoint & geopoint)
{
    return get_activation_factory<GeotagHelper, IGeotagHelperStatics>().SetGeotagAsync(file, geopoint);
}

}

}
