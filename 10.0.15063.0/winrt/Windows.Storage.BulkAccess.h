// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.FileProperties.2.h"
#include "winrt/impl/Windows.Storage.Search.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Storage.BulkAccess.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetItemsAsync(startIndex, maxItemsToRetrieve, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetItemsAsyncDefaultStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetFilesAsync(startIndex, maxItemsToRetrieve, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetFilesAsyncDefaultStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetFoldersAsync(startIndex, maxItemsToRetrieve, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetFoldersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetFoldersAsyncDefaultStartAndCount(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetVirtualizedItemsVector() const
{
    Windows::Foundation::IInspectable vector{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetVirtualizedItemsVector(put_abi(vector)));
    return vector;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetVirtualizedFilesVector() const
{
    Windows::Foundation::IInspectable vector{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetVirtualizedFilesVector(put_abi(vector)));
    return vector;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Storage_BulkAccess_IFileInformationFactory<D>::GetVirtualizedFoldersVector() const
{
    Windows::Foundation::IInspectable vector{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactory)->GetVirtualizedFoldersVector(put_abi(vector)));
    return vector;
}

template <typename D> Windows::Storage::BulkAccess::FileInformationFactory consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>::CreateWithMode(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode) const
{
    Windows::Storage::BulkAccess::FileInformationFactory value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactoryFactory)->CreateWithMode(get_abi(queryResult), get_abi(mode), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::BulkAccess::FileInformationFactory consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>::CreateWithModeAndSize(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize) const
{
    Windows::Storage::BulkAccess::FileInformationFactory value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactoryFactory)->CreateWithModeAndSize(get_abi(queryResult), get_abi(mode), requestedThumbnailSize, put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::BulkAccess::FileInformationFactory consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>::CreateWithModeAndSizeAndOptions(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions) const
{
    Windows::Storage::BulkAccess::FileInformationFactory value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactoryFactory)->CreateWithModeAndSizeAndOptions(get_abi(queryResult), get_abi(mode), requestedThumbnailSize, get_abi(thumbnailOptions), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::BulkAccess::FileInformationFactory consume_Windows_Storage_BulkAccess_IFileInformationFactoryFactory<D>::CreateWithModeAndSizeAndOptionsAndFlags(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions, bool delayLoad) const
{
    Windows::Storage::BulkAccess::FileInformationFactory value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IFileInformationFactoryFactory)->CreateWithModeAndSizeAndOptionsAndFlags(get_abi(queryResult), get_abi(mode), requestedThumbnailSize, get_abi(thumbnailOptions), delayLoad, put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::MusicProperties consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::MusicProperties() const
{
    Windows::Storage::FileProperties::MusicProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_MusicProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::VideoProperties consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::VideoProperties() const
{
    Windows::Storage::FileProperties::VideoProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_VideoProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::ImageProperties consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ImageProperties() const
{
    Windows::Storage::FileProperties::ImageProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_ImageProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::DocumentProperties consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::DocumentProperties() const
{
    Windows::Storage::FileProperties::DocumentProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_DocumentProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::BasicProperties consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::BasicProperties() const
{
    Windows::Storage::FileProperties::BasicProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_BasicProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::StorageItemThumbnail consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::Thumbnail() const
{
    Windows::Storage::FileProperties::StorageItemThumbnail value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ThumbnailUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->add_ThumbnailUpdated(get_abi(changedHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Storage::BulkAccess::IStorageItemInformation> consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ThumbnailUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const
{
    return impl::make_event_revoker<D, Windows::Storage::BulkAccess::IStorageItemInformation>(this, &abi_t<Windows::Storage::BulkAccess::IStorageItemInformation>::remove_ThumbnailUpdated, ThumbnailUpdated(changedHandler));
}

template <typename D> void consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::ThumbnailUpdated(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->remove_ThumbnailUpdated(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::PropertiesUpdated(Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->add_PropertiesUpdated(get_abi(changedHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Storage::BulkAccess::IStorageItemInformation> consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::PropertiesUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const& changedHandler) const
{
    return impl::make_event_revoker<D, Windows::Storage::BulkAccess::IStorageItemInformation>(this, &abi_t<Windows::Storage::BulkAccess::IStorageItemInformation>::remove_PropertiesUpdated, PropertiesUpdated(changedHandler));
}

template <typename D> void consume_Windows_Storage_BulkAccess_IStorageItemInformation<D>::PropertiesUpdated(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::BulkAccess::IStorageItemInformation)->remove_PropertiesUpdated(get_abi(eventCookie)));
}

template <typename D>
struct produce<D, Windows::Storage::BulkAccess::IFileInformationFactory> : produce_base<D, Windows::Storage::BulkAccess::IFileInformationFactory>
{
    HRESULT __stdcall GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemsAsync(startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemsAsyncDefaultStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFilesAsync(startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFilesAsyncDefaultStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFilesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFoldersAsync(startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFoldersAsyncDefaultStartAndCount(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetFoldersAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVirtualizedItemsVector(::IUnknown** vector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *vector = detach_abi(this->shim().GetVirtualizedItemsVector());
            return S_OK;
        }
        catch (...)
        {
            *vector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVirtualizedFilesVector(::IUnknown** vector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *vector = detach_abi(this->shim().GetVirtualizedFilesVector());
            return S_OK;
        }
        catch (...)
        {
            *vector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVirtualizedFoldersVector(::IUnknown** vector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *vector = detach_abi(this->shim().GetVirtualizedFoldersVector());
            return S_OK;
        }
        catch (...)
        {
            *vector = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::BulkAccess::IFileInformationFactoryFactory> : produce_base<D, Windows::Storage::BulkAccess::IFileInformationFactoryFactory>
{
    HRESULT __stdcall CreateWithMode(::IUnknown* queryResult, abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithMode(*reinterpret_cast<Windows::Storage::Search::IStorageQueryResultBase const*>(&queryResult), *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithModeAndSize(::IUnknown* queryResult, abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedThumbnailSize, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithModeAndSize(*reinterpret_cast<Windows::Storage::Search::IStorageQueryResultBase const*>(&queryResult), *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedThumbnailSize));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithModeAndSizeAndOptions(::IUnknown* queryResult, abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedThumbnailSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> thumbnailOptions, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithModeAndSizeAndOptions(*reinterpret_cast<Windows::Storage::Search::IStorageQueryResultBase const*>(&queryResult), *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedThumbnailSize, *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailOptions const*>(&thumbnailOptions)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithModeAndSizeAndOptionsAndFlags(::IUnknown* queryResult, abi_t<Windows::Storage::FileProperties::ThumbnailMode> mode, uint32_t requestedThumbnailSize, abi_t<Windows::Storage::FileProperties::ThumbnailOptions> thumbnailOptions, bool delayLoad, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithModeAndSizeAndOptionsAndFlags(*reinterpret_cast<Windows::Storage::Search::IStorageQueryResultBase const*>(&queryResult), *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailMode const*>(&mode), requestedThumbnailSize, *reinterpret_cast<Windows::Storage::FileProperties::ThumbnailOptions const*>(&thumbnailOptions), delayLoad));
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
struct produce<D, Windows::Storage::BulkAccess::IStorageItemInformation> : produce_base<D, Windows::Storage::BulkAccess::IStorageItemInformation>
{
    HRESULT __stdcall get_MusicProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MusicProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImageProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DocumentProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BasicProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BasicProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall add_ThumbnailUpdated(::IUnknown* changedHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().ThumbnailUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const*>(&changedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ThumbnailUpdated(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThumbnailUpdated(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesUpdated(::IUnknown* changedHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().PropertiesUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::Foundation::IInspectable> const*>(&changedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesUpdated(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesUpdated(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::BulkAccess {

inline FileInformationFactory::FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode) :
    FileInformationFactory(get_activation_factory<FileInformationFactory, Windows::Storage::BulkAccess::IFileInformationFactoryFactory>().CreateWithMode(queryResult, mode))
{}

inline FileInformationFactory::FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize) :
    FileInformationFactory(get_activation_factory<FileInformationFactory, Windows::Storage::BulkAccess::IFileInformationFactoryFactory>().CreateWithModeAndSize(queryResult, mode, requestedThumbnailSize))
{}

inline FileInformationFactory::FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions) :
    FileInformationFactory(get_activation_factory<FileInformationFactory, Windows::Storage::BulkAccess::IFileInformationFactoryFactory>().CreateWithModeAndSizeAndOptions(queryResult, mode, requestedThumbnailSize, thumbnailOptions))
{}

inline FileInformationFactory::FileInformationFactory(Windows::Storage::Search::IStorageQueryResultBase const& queryResult, Windows::Storage::FileProperties::ThumbnailMode const& mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions const& thumbnailOptions, bool delayLoad) :
    FileInformationFactory(get_activation_factory<FileInformationFactory, Windows::Storage::BulkAccess::IFileInformationFactoryFactory>().CreateWithModeAndSizeAndOptionsAndFlags(queryResult, mode, requestedThumbnailSize, thumbnailOptions, delayLoad))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::BulkAccess::IFileInformationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::BulkAccess::IFileInformationFactory> {};

template<> struct hash<winrt::Windows::Storage::BulkAccess::IFileInformationFactoryFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::BulkAccess::IFileInformationFactoryFactory> {};

template<> struct hash<winrt::Windows::Storage::BulkAccess::IStorageItemInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::BulkAccess::IStorageItemInformation> {};

template<> struct hash<winrt::Windows::Storage::BulkAccess::FileInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::BulkAccess::FileInformation> {};

template<> struct hash<winrt::Windows::Storage::BulkAccess::FileInformationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::BulkAccess::FileInformationFactory> {};

template<> struct hash<winrt::Windows::Storage::BulkAccess::FolderInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::BulkAccess::FolderInformation> {};

}

WINRT_WARNING_POP
