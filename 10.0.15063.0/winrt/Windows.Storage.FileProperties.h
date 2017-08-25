// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Storage.FileProperties.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> uint64_t consume_Windows_Storage_FileProperties_IBasicProperties<D>::Size() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IBasicProperties)->get_Size(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Storage_FileProperties_IBasicProperties<D>::DateModified() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IBasicProperties)->get_DateModified(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Storage_FileProperties_IBasicProperties<D>::ItemDate() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IBasicProperties)->get_ItemDate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IDocumentProperties<D>::Author() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IDocumentProperties)->get_Author(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IDocumentProperties<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IDocumentProperties)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IDocumentProperties<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IDocumentProperties)->put_Title(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IDocumentProperties<D>::Keywords() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IDocumentProperties)->get_Keywords(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IDocumentProperties<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IDocumentProperties)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IDocumentProperties<D>::Comment(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IDocumentProperties)->put_Comment(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> consume_Windows_Storage_FileProperties_IGeotagHelperStatics<D>::GetGeotagAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IGeotagHelperStatics)->GetGeotagAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_FileProperties_IGeotagHelperStatics<D>::SetGeotagFromGeolocatorAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geolocator const& geolocator) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IGeotagHelperStatics)->SetGeotagFromGeolocatorAsync(get_abi(file), get_abi(geolocator), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_FileProperties_IGeotagHelperStatics<D>::SetGeotagAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geopoint const& geopoint) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IGeotagHelperStatics)->SetGeotagAsync(get_abi(file), get_abi(geopoint), put_abi(operation)));
    return operation;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IImageProperties<D>::Rating() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_Rating(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IImageProperties<D>::Rating(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->put_Rating(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IImageProperties<D>::Keywords() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_Keywords(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Storage_FileProperties_IImageProperties<D>::DateTaken() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_DateTaken(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IImageProperties<D>::DateTaken(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->put_DateTaken(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IImageProperties<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IImageProperties<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_Height(&value));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IImageProperties<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IImageProperties<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->put_Title(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Storage_FileProperties_IImageProperties<D>::Latitude() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_Latitude(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Storage_FileProperties_IImageProperties<D>::Longitude() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_Longitude(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IImageProperties<D>::CameraManufacturer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_CameraManufacturer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IImageProperties<D>::CameraManufacturer(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->put_CameraManufacturer(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IImageProperties<D>::CameraModel() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_CameraModel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IImageProperties<D>::CameraModel(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->put_CameraModel(get_abi(value)));
}

template <typename D> Windows::Storage::FileProperties::PhotoOrientation consume_Windows_Storage_FileProperties_IImageProperties<D>::Orientation() const
{
    Windows::Storage::FileProperties::PhotoOrientation value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Storage_FileProperties_IImageProperties<D>::PeopleNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IImageProperties)->get_PeopleNames(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IMusicProperties<D>::Album() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Album(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::Album(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_Album(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IMusicProperties<D>::Artist() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Artist(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::Artist(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_Artist(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IMusicProperties<D>::Genre() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Genre(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IMusicProperties<D>::TrackNumber() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_TrackNumber(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::TrackNumber(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_TrackNumber(value));
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IMusicProperties<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_Title(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IMusicProperties<D>::Rating() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Rating(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::Rating(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_Rating(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Storage_FileProperties_IMusicProperties<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IMusicProperties<D>::Bitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Bitrate(&value));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IMusicProperties<D>::AlbumArtist() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_AlbumArtist(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::AlbumArtist(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_AlbumArtist(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IMusicProperties<D>::Composers() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Composers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IMusicProperties<D>::Conductors() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Conductors(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IMusicProperties<D>::Subtitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Subtitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::Subtitle(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_Subtitle(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IMusicProperties<D>::Producers() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Producers(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IMusicProperties<D>::Publisher() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Publisher(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::Publisher(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_Publisher(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IMusicProperties<D>::Writers() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Writers(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IMusicProperties<D>::Year() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->get_Year(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IMusicProperties<D>::Year(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IMusicProperties)->put_Year(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::MusicProperties> consume_Windows_Storage_FileProperties_IStorageItemContentProperties<D>::GetMusicPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::MusicProperties> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IStorageItemContentProperties)->GetMusicPropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::VideoProperties> consume_Windows_Storage_FileProperties_IStorageItemContentProperties<D>::GetVideoPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::VideoProperties> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IStorageItemContentProperties)->GetVideoPropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::ImageProperties> consume_Windows_Storage_FileProperties_IStorageItemContentProperties<D>::GetImagePropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::ImageProperties> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IStorageItemContentProperties)->GetImagePropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::DocumentProperties> consume_Windows_Storage_FileProperties_IStorageItemContentProperties<D>::GetDocumentPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::DocumentProperties> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IStorageItemContentProperties)->GetDocumentPropertiesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> consume_Windows_Storage_FileProperties_IStorageItemExtraProperties<D>::RetrievePropertiesAsync(param::async_iterable<hstring> const& propertiesToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IStorageItemExtraProperties)->RetrievePropertiesAsync(get_abi(propertiesToRetrieve), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_FileProperties_IStorageItemExtraProperties<D>::SavePropertiesAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>> const& propertiesToSave) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IStorageItemExtraProperties)->SavePropertiesAsync(get_abi(propertiesToSave), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Storage_FileProperties_IStorageItemExtraProperties<D>::SavePropertiesAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IStorageItemExtraProperties)->SavePropertiesAsyncOverloadDefault(put_abi(operation)));
    return operation;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IThumbnailProperties<D>::OriginalWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IThumbnailProperties)->get_OriginalWidth(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IThumbnailProperties<D>::OriginalHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IThumbnailProperties)->get_OriginalHeight(&value));
    return value;
}

template <typename D> bool consume_Windows_Storage_FileProperties_IThumbnailProperties<D>::ReturnedSmallerCachedSize() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IThumbnailProperties)->get_ReturnedSmallerCachedSize(&value));
    return value;
}

template <typename D> Windows::Storage::FileProperties::ThumbnailType consume_Windows_Storage_FileProperties_IThumbnailProperties<D>::Type() const
{
    Windows::Storage::FileProperties::ThumbnailType value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IThumbnailProperties)->get_Type(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IVideoProperties<D>::Rating() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Rating(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IVideoProperties<D>::Rating(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->put_Rating(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IVideoProperties<D>::Keywords() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Keywords(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IVideoProperties<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IVideoProperties<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Height(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Storage_FileProperties_IVideoProperties<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Storage_FileProperties_IVideoProperties<D>::Latitude() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Latitude(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Storage_FileProperties_IVideoProperties<D>::Longitude() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Longitude(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IVideoProperties<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IVideoProperties<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IVideoProperties<D>::Subtitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Subtitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IVideoProperties<D>::Subtitle(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->put_Subtitle(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IVideoProperties<D>::Producers() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Producers(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_FileProperties_IVideoProperties<D>::Publisher() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Publisher(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IVideoProperties<D>::Publisher(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->put_Publisher(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IVideoProperties<D>::Writers() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Writers(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IVideoProperties<D>::Year() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Year(&value));
    return value;
}

template <typename D> void consume_Windows_Storage_FileProperties_IVideoProperties<D>::Year(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->put_Year(value));
}

template <typename D> uint32_t consume_Windows_Storage_FileProperties_IVideoProperties<D>::Bitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Bitrate(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_FileProperties_IVideoProperties<D>::Directors() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Directors(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::VideoOrientation consume_Windows_Storage_FileProperties_IVideoProperties<D>::Orientation() const
{
    Windows::Storage::FileProperties::VideoOrientation value{};
    check_hresult(WINRT_SHIM(Windows::Storage::FileProperties::IVideoProperties)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Storage::FileProperties::IBasicProperties> : produce_base<D, Windows::Storage::FileProperties::IBasicProperties>
{
    HRESULT __stdcall get_Size(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateModified(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateModified());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemDate(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemDate());
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
    HRESULT __stdcall get_Author(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Author());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Comment(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Comment(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Comment(*reinterpret_cast<hstring const*>(&value));
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
    HRESULT __stdcall GetGeotagAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetGeotagAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetGeotagFromGeolocatorAsync(::IUnknown* file, ::IUnknown* geolocator, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetGeotagFromGeolocatorAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Devices::Geolocation::Geolocator const*>(&geolocator)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetGeotagAsync(::IUnknown* file, ::IUnknown* geopoint, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetGeotagAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&geopoint)));
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
    HRESULT __stdcall get_Rating(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rating());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Rating(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTaken(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateTaken());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DateTaken(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DateTaken(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Latitude(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Latitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Longitude(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Longitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraManufacturer(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraManufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CameraManufacturer(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraManufacturer(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraModel(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraModel());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CameraModel(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraModel(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_t<Windows::Storage::FileProperties::PhotoOrientation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeopleNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeopleNames());
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
    HRESULT __stdcall get_Album(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Album());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Album(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Album(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Artist(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Artist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Artist(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Artist(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Genre(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Genre());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrackNumber(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrackNumber());
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
            typename D::abi_guard guard(this->shim());
            this->shim().TrackNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rating(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rating());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Rating(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlbumArtist(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlbumArtist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumArtist(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlbumArtist(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Composers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Composers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Conductors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Conductors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subtitle(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Producers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Producers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Publisher(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Publisher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Publisher(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Publisher(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Writers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Writers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Year());
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
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall GetMusicPropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetMusicPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVideoPropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetVideoPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetImagePropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetImagePropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDocumentPropertiesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDocumentPropertiesAsync());
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
    HRESULT __stdcall RetrievePropertiesAsync(::IUnknown* propertiesToRetrieve, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RetrievePropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&propertiesToRetrieve)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SavePropertiesAsync(::IUnknown* propertiesToSave, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SavePropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>> const*>(&propertiesToSave)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SavePropertiesAsyncOverloadDefault(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SavePropertiesAsync());
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
    HRESULT __stdcall get_OriginalWidth(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginalWidth());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalHeight(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginalHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReturnedSmallerCachedSize(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReturnedSmallerCachedSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<Windows::Storage::FileProperties::ThumbnailType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
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
    HRESULT __stdcall get_Rating(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rating());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Rating(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Keywords());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Latitude(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Latitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Longitude(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Longitude());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtitle(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subtitle(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Producers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Producers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Publisher(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Publisher());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Publisher(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Publisher(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Writers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Writers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Year());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Year(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Directors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Directors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_t<Windows::Storage::FileProperties::VideoOrientation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties {

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> GeotagHelper::GetGeotagAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<GeotagHelper, Windows::Storage::FileProperties::IGeotagHelperStatics>().GetGeotagAsync(file);
}

inline Windows::Foundation::IAsyncAction GeotagHelper::SetGeotagFromGeolocatorAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geolocator const& geolocator)
{
    return get_activation_factory<GeotagHelper, Windows::Storage::FileProperties::IGeotagHelperStatics>().SetGeotagFromGeolocatorAsync(file, geolocator);
}

inline Windows::Foundation::IAsyncAction GeotagHelper::SetGeotagAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geopoint const& geopoint)
{
    return get_activation_factory<GeotagHelper, Windows::Storage::FileProperties::IGeotagHelperStatics>().SetGeotagAsync(file, geopoint);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::FileProperties::IBasicProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IBasicProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::IDocumentProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IDocumentProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::IGeotagHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IGeotagHelperStatics> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::IImageProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IImageProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::IMusicProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IMusicProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::IStorageItemContentProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IStorageItemContentProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::IStorageItemExtraProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IStorageItemExtraProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::IThumbnailProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IThumbnailProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::IVideoProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::IVideoProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::BasicProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::BasicProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::DocumentProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::DocumentProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::GeotagHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::GeotagHelper> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::ImageProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::ImageProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::MusicProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::MusicProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::StorageItemContentProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::StorageItemContentProperties> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::StorageItemThumbnail> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::StorageItemThumbnail> {};

template<> struct hash<winrt::Windows::Storage::FileProperties::VideoProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::FileProperties::VideoProperties> {};

}

WINRT_WARNING_POP
