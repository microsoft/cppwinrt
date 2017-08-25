// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.Import.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::Import::PhotoImportSession consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::Session() const
{
    Windows::Media::Import::PhotoImportSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_Session(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::HasSucceeded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_HasSucceeded(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::DeletedItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_DeletedItems(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::PhotosCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_PhotosCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::PhotosSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_PhotosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::VideosCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_VideosCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::VideosSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_VideosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SidecarsCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_SidecarsCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SidecarsSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_SidecarsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SiblingsCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_SiblingsCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::SiblingsSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_SiblingsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::TotalCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_TotalCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult<D>::TotalSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult)->get_TotalSizeInBytes(&value));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSession consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::Session() const
{
    Windows::Media::Import::PhotoImportSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_Session(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::HasSucceeded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_HasSucceeded(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::FoundItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_FoundItems(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::PhotosCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_PhotosCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::PhotosSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_PhotosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::VideosCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_VideosCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::VideosSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_VideosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SidecarsCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SidecarsCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SidecarsSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SidecarsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SiblingsCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SiblingsCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SiblingsSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SiblingsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::TotalCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_TotalCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::TotalSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_TotalSizeInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectAll() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->SelectAll());
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectNone() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->SelectNone());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectNewAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->SelectNewAsync(put_abi(action)));
    return action;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SetImportMode(Windows::Media::Import::PhotoImportImportMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->SetImportMode(get_abi(value)));
}

template <typename D> Windows::Media::Import::PhotoImportImportMode consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ImportMode() const
{
    Windows::Media::Import::PhotoImportImportMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_ImportMode(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedPhotosCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedPhotosCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedPhotosSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedPhotosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedVideosCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedVideosCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedVideosSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedVideosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedSidecarsCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedSidecarsCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedSidecarsSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedSidecarsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedSiblingsCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedSiblingsCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedSiblingsSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedSiblingsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedTotalCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedTotalCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectedTotalSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->get_SelectedTotalSizeInBytes(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->add_SelectionChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Import::IPhotoImportFindItemsResult> consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Import::IPhotoImportFindItemsResult>(this, &abi_t<Windows::Media::Import::IPhotoImportFindItemsResult>::remove_SelectionChanged, SelectionChanged(value));
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::SelectionChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->remove_SelectionChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress> consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ImportItemsAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->ImportItemsAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ItemImported(Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->add_ItemImported(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Import::IPhotoImportFindItemsResult> consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ItemImported(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Import::IPhotoImportFindItemsResult>(this, &abi_t<Windows::Media::Import::IPhotoImportFindItemsResult>::remove_ItemImported, ItemImported(value));
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportFindItemsResult<D>::ItemImported(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult)->remove_ItemImported(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportFindItemsResult2<D>::AddItemsInDateRangeToSelection(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportFindItemsResult2)->AddItemsInDateRangeToSelection(get_abi(rangeStart), get_abi(rangeLength)));
}

template <typename D> Windows::Media::Import::PhotoImportSession consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::Session() const
{
    Windows::Media::Import::PhotoImportSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_Session(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::HasSucceeded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_HasSucceeded(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::ImportedItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_ImportedItems(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::PhotosCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_PhotosCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::PhotosSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_PhotosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::VideosCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_VideosCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::VideosSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_VideosSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::SidecarsCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_SidecarsCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::SidecarsSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_SidecarsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::SiblingsCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_SiblingsCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::SiblingsSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_SiblingsSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::TotalCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_TotalCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::TotalSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->get_TotalSizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double> consume_Windows_Media_Import_IPhotoImportImportItemsResult<D>::DeleteImportedItemsFromSourceAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportImportItemsResult)->DeleteImportedItemsFromSourceAsync(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportItem<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Name(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportItem<D>::ItemKey() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_ItemKey(&value));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportContentType consume_Windows_Media_Import_IPhotoImportItem<D>::ContentType() const
{
    Windows::Media::Import::PhotoImportContentType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_ContentType(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportItem<D>::SizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_SizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Import_IPhotoImportItem<D>::Date() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Date(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSidecar consume_Windows_Media_Import_IPhotoImportItem<D>::Sibling() const
{
    Windows::Media::Import::PhotoImportSidecar value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Sibling(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar> consume_Windows_Media_Import_IPhotoImportItem<D>::Sidecars() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Sidecars(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportVideoSegment> consume_Windows_Media_Import_IPhotoImportItem<D>::VideoSegments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportVideoSegment> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_VideoSegments(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Import_IPhotoImportItem<D>::IsSelected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_IsSelected(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportItem<D>::IsSelected(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->put_IsSelected(value));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Media_Import_IPhotoImportItem<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Media_Import_IPhotoImportItem<D>::ImportedFileNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_ImportedFileNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Media_Import_IPhotoImportItem<D>::DeletedFileNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItem)->get_DeletedFileNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportItem consume_Windows_Media_Import_IPhotoImportItemImportedEventArgs<D>::ImportedItem() const
{
    Windows::Media::Import::PhotoImportItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportItemImportedEventArgs)->get_ImportedItem(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Media_Import_IPhotoImportManagerStatics<D>::IsSupportedAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportManagerStatics)->IsSupportedAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>> consume_Windows_Media_Import_IPhotoImportManagerStatics<D>::FindAllSourcesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportManagerStatics)->FindAllSourcesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation> consume_Windows_Media_Import_IPhotoImportManagerStatics<D>::GetPendingOperations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportManagerStatics)->GetPendingOperations(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Import::PhotoImportStage consume_Windows_Media_Import_IPhotoImportOperation<D>::Stage() const
{
    Windows::Media::Import::PhotoImportStage value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_Stage(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSession consume_Windows_Media_Import_IPhotoImportOperation<D>::Session() const
{
    Windows::Media::Import::PhotoImportSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t> consume_Windows_Media_Import_IPhotoImportOperation<D>::ContinueFindingItemsAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_ContinueFindingItemsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress> consume_Windows_Media_Import_IPhotoImportOperation<D>::ContinueImportingItemsAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportImportItemsResult, Windows::Media::Import::PhotoImportProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_ContinueImportingItemsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double> consume_Windows_Media_Import_IPhotoImportOperation<D>::ContinueDeletingImportedItemsFromSourceAsync() const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult, double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportOperation)->get_ContinueDeletingImportedItemsFromSourceAsync(put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Media_Import_IPhotoImportSelectionChangedEventArgs<D>::IsSelectionEmpty() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSelectionChangedEventArgs)->get_IsSelectionEmpty(&value));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSource consume_Windows_Media_Import_IPhotoImportSession<D>::Source() const
{
    Windows::Media::Import::PhotoImportSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->get_Source(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Import_IPhotoImportSession<D>::SessionId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportSession<D>::DestinationFolder(Windows::Storage::IStorageFolder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->put_DestinationFolder(get_abi(value)));
}

template <typename D> Windows::Storage::IStorageFolder consume_Windows_Media_Import_IPhotoImportSession<D>::DestinationFolder() const
{
    Windows::Storage::IStorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->get_DestinationFolder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportSession<D>::AppendSessionDateToDestinationFolder(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->put_AppendSessionDateToDestinationFolder(value));
}

template <typename D> bool consume_Windows_Media_Import_IPhotoImportSession<D>::AppendSessionDateToDestinationFolder() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->get_AppendSessionDateToDestinationFolder(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportSession<D>::SubfolderCreationMode(Windows::Media::Import::PhotoImportSubfolderCreationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->put_SubfolderCreationMode(get_abi(value)));
}

template <typename D> Windows::Media::Import::PhotoImportSubfolderCreationMode consume_Windows_Media_Import_IPhotoImportSession<D>::SubfolderCreationMode() const
{
    Windows::Media::Import::PhotoImportSubfolderCreationMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->get_SubfolderCreationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportSession<D>::DestinationFileNamePrefix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->put_DestinationFileNamePrefix(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSession<D>::DestinationFileNamePrefix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->get_DestinationFileNamePrefix(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t> consume_Windows_Media_Import_IPhotoImportSession<D>::FindItemsAsync(Windows::Media::Import::PhotoImportContentTypeFilter const& contentTypeFilter, Windows::Media::Import::PhotoImportItemSelectionMode const& itemSelectionMode) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Import::PhotoImportFindItemsResult, uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession)->FindItemsAsync(get_abi(contentTypeFilter), get_abi(itemSelectionMode), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportSession2<D>::SubfolderDateFormat(Windows::Media::Import::PhotoImportSubfolderDateFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession2)->put_SubfolderDateFormat(get_abi(value)));
}

template <typename D> Windows::Media::Import::PhotoImportSubfolderDateFormat consume_Windows_Media_Import_IPhotoImportSession2<D>::SubfolderDateFormat() const
{
    Windows::Media::Import::PhotoImportSubfolderDateFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession2)->get_SubfolderDateFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportSession2<D>::RememberDeselectedItems(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession2)->put_RememberDeselectedItems(value));
}

template <typename D> bool consume_Windows_Media_Import_IPhotoImportSession2<D>::RememberDeselectedItems() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSession2)->get_RememberDeselectedItems(&value));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSidecar<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSidecar)->get_Name(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportSidecar<D>::SizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSidecar)->get_SizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Import_IPhotoImportSidecar<D>::Date() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSidecar)->get_Date(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSource<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSource<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSource<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSource<D>::Manufacturer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Manufacturer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSource<D>::Model() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Model(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSource<D>::SerialNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_SerialNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportSource<D>::ConnectionProtocol() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_ConnectionProtocol(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportConnectionTransport consume_Windows_Media_Import_IPhotoImportSource<D>::ConnectionTransport() const
{
    Windows::Media::Import::PhotoImportConnectionTransport value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_ConnectionTransport(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSourceType consume_Windows_Media_Import_IPhotoImportSource<D>::Type() const
{
    Windows::Media::Import::PhotoImportSourceType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportPowerSource consume_Windows_Media_Import_IPhotoImportSource<D>::PowerSource() const
{
    Windows::Media::Import::PhotoImportPowerSource value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_PowerSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Import_IPhotoImportSource<D>::BatteryLevelPercent() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_BatteryLevelPercent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Media_Import_IPhotoImportSource<D>::DateTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_DateTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportStorageMedium> consume_Windows_Media_Import_IPhotoImportSource<D>::StorageMedia() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportStorageMedium> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_StorageMedia(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Media_Import_IPhotoImportSource<D>::IsLocked() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_IsLocked(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Import_IPhotoImportSource<D>::IsMassStorage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_IsMassStorage(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Media_Import_IPhotoImportSource<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSession consume_Windows_Media_Import_IPhotoImportSource<D>::CreateImportSession() const
{
    Windows::Media::Import::PhotoImportSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSource)->CreateImportSession(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> consume_Windows_Media_Import_IPhotoImportSourceStatics<D>::FromIdAsync(param::hstring const& sourceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSourceStatics)->FromIdAsync(get_abi(sourceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> consume_Windows_Media_Import_IPhotoImportSourceStatics<D>::FromFolderAsync(Windows::Storage::IStorageFolder const& sourceRootFolder) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportSourceStatics)->FromFolderAsync(get_abi(sourceRootFolder), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::SerialNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_SerialNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportStorageMediumType consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::StorageMediumType() const
{
    Windows::Media::Import::PhotoImportStorageMediumType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_StorageMediumType(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportAccessMode consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::SupportedAccessMode() const
{
    Windows::Media::Import::PhotoImportAccessMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_SupportedAccessMode(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::CapacityInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_CapacityInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::AvailableSpaceInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->get_AvailableSpaceInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Import_IPhotoImportStorageMedium<D>::Refresh() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportStorageMedium)->Refresh());
}

template <typename D> hstring consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_Name(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::SizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_SizeInBytes(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::Date() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_Date(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Import::PhotoImportSidecar consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::Sibling() const
{
    Windows::Media::Import::PhotoImportSidecar value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_Sibling(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar> consume_Windows_Media_Import_IPhotoImportVideoSegment<D>::Sidecars() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSidecar> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Import::IPhotoImportVideoSegment)->get_Sidecars(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult> : produce_base<D, Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult>
{
    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasSucceeded(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasSucceeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeletedItems(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeletedItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidecarsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidecarsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SiblingsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SiblingsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportFindItemsResult> : produce_base<D, Windows::Media::Import::IPhotoImportFindItemsResult>
{
    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasSucceeded(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasSucceeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FoundItems(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FoundItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidecarsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidecarsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SiblingsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SiblingsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SelectAll() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectAll();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SelectNone() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectNone();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SelectNewAsync(::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SelectNewAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetImportMode(abi_t<Windows::Media::Import::PhotoImportImportMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetImportMode(*reinterpret_cast<Windows::Media::Import::PhotoImportImportMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImportMode(abi_t<Windows::Media::Import::PhotoImportImportMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPhotosCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedPhotosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPhotosSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedPhotosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedVideosCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedVideosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedVideosSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedVideosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedSidecarsCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedSidecarsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedSidecarsSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedSidecarsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedSiblingsCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedSiblingsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedSiblingsSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedSiblingsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedTotalCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedTotalCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedTotalSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelectedTotalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionChanged(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SelectionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportSelectionChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ImportItemsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ImportItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ItemImported(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ItemImported(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Import::PhotoImportFindItemsResult, Windows::Media::Import::PhotoImportItemImportedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ItemImported(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemImported(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportFindItemsResult2> : produce_base<D, Windows::Media::Import::IPhotoImportFindItemsResult2>
{
    HRESULT __stdcall AddItemsInDateRangeToSelection(abi_t<Windows::Foundation::DateTime> rangeStart, abi_t<Windows::Foundation::TimeSpan> rangeLength) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddItemsInDateRangeToSelection(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportImportItemsResult> : produce_base<D, Windows::Media::Import::IPhotoImportImportItemsResult>
{
    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HasSucceeded(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HasSucceeded());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImportedItems(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportedItems());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhotosSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhotosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideosCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideosSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidecarsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SidecarsSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SidecarsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SiblingsCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SiblingsSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SiblingsSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalSizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteImportedItemsFromSourceAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeleteImportedItemsFromSourceAsync());
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
struct produce<D, Windows::Media::Import::IPhotoImportItem> : produce_base<D, Windows::Media::Import::IPhotoImportItem>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemKey(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemKey());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(abi_t<Windows::Media::Import::PhotoImportContentType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sibling(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sibling());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sidecars(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sidecars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSegments(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoSegments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsSelected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSelected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsSelected(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSelected(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImportedFileNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportedFileNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeletedFileNames(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeletedFileNames());
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
struct produce<D, Windows::Media::Import::IPhotoImportItemImportedEventArgs> : produce_base<D, Windows::Media::Import::IPhotoImportItemImportedEventArgs>
{
    HRESULT __stdcall get_ImportedItem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImportedItem());
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
struct produce<D, Windows::Media::Import::IPhotoImportManagerStatics> : produce_base<D, Windows::Media::Import::IPhotoImportManagerStatics>
{
    HRESULT __stdcall IsSupportedAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().IsSupportedAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllSourcesAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllSourcesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPendingOperations(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetPendingOperations());
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
struct produce<D, Windows::Media::Import::IPhotoImportOperation> : produce_base<D, Windows::Media::Import::IPhotoImportOperation>
{
    HRESULT __stdcall get_Stage(abi_t<Windows::Media::Import::PhotoImportStage>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Stage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContinueFindingItemsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ContinueFindingItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContinueImportingItemsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ContinueImportingItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContinueDeletingImportedItemsFromSourceAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ContinueDeletingImportedItemsFromSourceAsync());
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
struct produce<D, Windows::Media::Import::IPhotoImportSelectionChangedEventArgs> : produce_base<D, Windows::Media::Import::IPhotoImportSelectionChangedEventArgs>
{
    HRESULT __stdcall get_IsSelectionEmpty(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSelectionEmpty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportSession> : produce_base<D, Windows::Media::Import::IPhotoImportSession>
{
    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DestinationFolder(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DestinationFolder(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DestinationFolder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DestinationFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AppendSessionDateToDestinationFolder(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendSessionDateToDestinationFolder(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppendSessionDateToDestinationFolder(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppendSessionDateToDestinationFolder());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SubfolderCreationMode(abi_t<Windows::Media::Import::PhotoImportSubfolderCreationMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubfolderCreationMode(*reinterpret_cast<Windows::Media::Import::PhotoImportSubfolderCreationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubfolderCreationMode(abi_t<Windows::Media::Import::PhotoImportSubfolderCreationMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubfolderCreationMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DestinationFileNamePrefix(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DestinationFileNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DestinationFileNamePrefix(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DestinationFileNamePrefix());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindItemsAsync(abi_t<Windows::Media::Import::PhotoImportContentTypeFilter> contentTypeFilter, abi_t<Windows::Media::Import::PhotoImportItemSelectionMode> itemSelectionMode, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindItemsAsync(*reinterpret_cast<Windows::Media::Import::PhotoImportContentTypeFilter const*>(&contentTypeFilter), *reinterpret_cast<Windows::Media::Import::PhotoImportItemSelectionMode const*>(&itemSelectionMode)));
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
struct produce<D, Windows::Media::Import::IPhotoImportSession2> : produce_base<D, Windows::Media::Import::IPhotoImportSession2>
{
    HRESULT __stdcall put_SubfolderDateFormat(abi_t<Windows::Media::Import::PhotoImportSubfolderDateFormat> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubfolderDateFormat(*reinterpret_cast<Windows::Media::Import::PhotoImportSubfolderDateFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubfolderDateFormat(abi_t<Windows::Media::Import::PhotoImportSubfolderDateFormat>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubfolderDateFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RememberDeselectedItems(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RememberDeselectedItems(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RememberDeselectedItems(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RememberDeselectedItems());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportSidecar> : produce_base<D, Windows::Media::Import::IPhotoImportSidecar>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportSource> : produce_base<D, Windows::Media::Import::IPhotoImportSource>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Manufacturer(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Manufacturer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Model(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Model());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SerialNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SerialNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionProtocol(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConnectionProtocol());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionTransport(abi_t<Windows::Media::Import::PhotoImportConnectionTransport>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConnectionTransport());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<Windows::Media::Import::PhotoImportSourceType>* value) noexcept override
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

    HRESULT __stdcall get_PowerSource(abi_t<Windows::Media::Import::PhotoImportPowerSource>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowerSource());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BatteryLevelPercent(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BatteryLevelPercent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateTime(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DateTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorageMedia(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StorageMedia());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsLocked(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsLocked());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMassStorage(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMassStorage());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateImportSession(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateImportSession());
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
struct produce<D, Windows::Media::Import::IPhotoImportSourceStatics> : produce_base<D, Windows::Media::Import::IPhotoImportSourceStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING sourceId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&sourceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromFolderAsync(::IUnknown* sourceRootFolder, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromFolderAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&sourceRootFolder)));
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
struct produce<D, Windows::Media::Import::IPhotoImportStorageMedium> : produce_base<D, Windows::Media::Import::IPhotoImportStorageMedium>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SerialNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SerialNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorageMediumType(abi_t<Windows::Media::Import::PhotoImportStorageMediumType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StorageMediumType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedAccessMode(abi_t<Windows::Media::Import::PhotoImportAccessMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedAccessMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapacityInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CapacityInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableSpaceInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableSpaceInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Refresh() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Refresh();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Import::IPhotoImportVideoSegment> : produce_base<D, Windows::Media::Import::IPhotoImportVideoSegment>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SizeInBytes(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Date(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sibling(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sibling());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sidecars(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sidecars());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Import {

inline Windows::Foundation::IAsyncOperation<bool> PhotoImportManager::IsSupportedAsync()
{
    return get_activation_factory<PhotoImportManager, Windows::Media::Import::IPhotoImportManagerStatics>().IsSupportedAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportSource>> PhotoImportManager::FindAllSourcesAsync()
{
    return get_activation_factory<PhotoImportManager, Windows::Media::Import::IPhotoImportManagerStatics>().FindAllSourcesAsync();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Import::PhotoImportOperation> PhotoImportManager::GetPendingOperations()
{
    return get_activation_factory<PhotoImportManager, Windows::Media::Import::IPhotoImportManagerStatics>().GetPendingOperations();
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> PhotoImportSource::FromIdAsync(param::hstring const& sourceId)
{
    return get_activation_factory<PhotoImportSource, Windows::Media::Import::IPhotoImportSourceStatics>().FromIdAsync(sourceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Import::PhotoImportSource> PhotoImportSource::FromFolderAsync(Windows::Storage::IStorageFolder const& sourceRootFolder)
{
    return get_activation_factory<PhotoImportSource, Windows::Media::Import::IPhotoImportSourceStatics>().FromFolderAsync(sourceRootFolder);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportDeleteImportedItemsFromSourceResult> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportFindItemsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportFindItemsResult> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportFindItemsResult2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportFindItemsResult2> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportImportItemsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportImportItemsResult> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportItem> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportItemImportedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportItemImportedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportManagerStatics> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportOperation> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSelectionChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportSelectionChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportSession> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSession2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportSession2> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSidecar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportSidecar> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportSource> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportSourceStatics> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportStorageMedium> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportStorageMedium> {};

template<> struct hash<winrt::Windows::Media::Import::IPhotoImportVideoSegment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::IPhotoImportVideoSegment> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportDeleteImportedItemsFromSourceResult> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportFindItemsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportFindItemsResult> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportImportItemsResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportImportItemsResult> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportItem> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportItemImportedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportItemImportedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportManager> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportOperation> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportSelectionChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportSelectionChangedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportSession> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportSidecar> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportSidecar> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportSource> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportStorageMedium> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportStorageMedium> {};

template<> struct hash<winrt::Windows::Media::Import::PhotoImportVideoSegment> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Import::PhotoImportVideoSegment> {};

}

WINRT_WARNING_POP
