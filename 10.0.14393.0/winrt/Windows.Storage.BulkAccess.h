// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.FileProperties.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Search.3.h"
#include "internal/Windows.Storage.BulkAccess.3.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Search.h"
#include "Windows.Storage.Streams.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Storage::BulkAccess::IFileInformationFactory> : produce_base<D, Windows::Storage::BulkAccess::IFileInformationFactory>
{
    HRESULT __stdcall abi_GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetItemsAsync(startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemsAsyncDefaultStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFilesAsync(startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFilesAsyncDefaultStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFilesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFoldersAsync(startIndex, maxItemsToRetrieve));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFoldersAsyncDefaultStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFoldersAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVirtualizedItemsVector(abi_arg_out<Windows::IInspectable> vector) noexcept override
    {
        try
        {
            *vector = detach(this->shim().GetVirtualizedItemsVector());
            return S_OK;
        }
        catch (...)
        {
            *vector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVirtualizedFilesVector(abi_arg_out<Windows::IInspectable> vector) noexcept override
    {
        try
        {
            *vector = detach(this->shim().GetVirtualizedFilesVector());
            return S_OK;
        }
        catch (...)
        {
            *vector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVirtualizedFoldersVector(abi_arg_out<Windows::IInspectable> vector) noexcept override
    {
        try
        {
            *vector = detach(this->shim().GetVirtualizedFoldersVector());
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
    HRESULT __stdcall abi_CreateWithMode(abi_arg_in<Windows::Storage::Search::IStorageQueryResultBase> queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, abi_arg_out<Windows::Storage::BulkAccess::IFileInformationFactory> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithMode(*reinterpret_cast<const Windows::Storage::Search::IStorageQueryResultBase *>(&queryResult), mode));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithModeAndSize(abi_arg_in<Windows::Storage::Search::IStorageQueryResultBase> queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, abi_arg_out<Windows::Storage::BulkAccess::IFileInformationFactory> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithModeAndSize(*reinterpret_cast<const Windows::Storage::Search::IStorageQueryResultBase *>(&queryResult), mode, requestedThumbnailSize));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithModeAndSizeAndOptions(abi_arg_in<Windows::Storage::Search::IStorageQueryResultBase> queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions thumbnailOptions, abi_arg_out<Windows::Storage::BulkAccess::IFileInformationFactory> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithModeAndSizeAndOptions(*reinterpret_cast<const Windows::Storage::Search::IStorageQueryResultBase *>(&queryResult), mode, requestedThumbnailSize, thumbnailOptions));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithModeAndSizeAndOptionsAndFlags(abi_arg_in<Windows::Storage::Search::IStorageQueryResultBase> queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions thumbnailOptions, bool delayLoad, abi_arg_out<Windows::Storage::BulkAccess::IFileInformationFactory> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithModeAndSizeAndOptionsAndFlags(*reinterpret_cast<const Windows::Storage::Search::IStorageQueryResultBase *>(&queryResult), mode, requestedThumbnailSize, thumbnailOptions, delayLoad));
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
    HRESULT __stdcall get_MusicProperties(abi_arg_out<Windows::Storage::FileProperties::IMusicProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MusicProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProperties(abi_arg_out<Windows::Storage::FileProperties::IVideoProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImageProperties(abi_arg_out<Windows::Storage::FileProperties::IImageProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImageProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentProperties(abi_arg_out<Windows::Storage::FileProperties::IDocumentProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DocumentProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BasicProperties(abi_arg_out<Windows::Storage::FileProperties::IBasicProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BasicProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamWithContentType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ThumbnailUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable>> changedHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().ThumbnailUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable> *>(&changedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ThumbnailUpdated(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().ThumbnailUpdated(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesUpdated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable>> changedHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().PropertiesUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable> *>(&changedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesUpdated(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().PropertiesUpdated(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Storage::BulkAccess {

template <typename D> Windows::Storage::FileProperties::MusicProperties impl_IStorageItemInformation<D>::MusicProperties() const
{
    Windows::Storage::FileProperties::MusicProperties value { nullptr };
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->get_MusicProperties(put(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::VideoProperties impl_IStorageItemInformation<D>::VideoProperties() const
{
    Windows::Storage::FileProperties::VideoProperties value { nullptr };
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->get_VideoProperties(put(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::ImageProperties impl_IStorageItemInformation<D>::ImageProperties() const
{
    Windows::Storage::FileProperties::ImageProperties value { nullptr };
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->get_ImageProperties(put(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::DocumentProperties impl_IStorageItemInformation<D>::DocumentProperties() const
{
    Windows::Storage::FileProperties::DocumentProperties value { nullptr };
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->get_DocumentProperties(put(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::BasicProperties impl_IStorageItemInformation<D>::BasicProperties() const
{
    Windows::Storage::FileProperties::BasicProperties value { nullptr };
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->get_BasicProperties(put(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::StorageItemThumbnail impl_IStorageItemInformation<D>::Thumbnail() const
{
    Windows::Storage::FileProperties::StorageItemThumbnail value { nullptr };
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> event_token impl_IStorageItemInformation<D>::ThumbnailUpdated(const Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable> & changedHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->add_ThumbnailUpdated(get(changedHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IStorageItemInformation> impl_IStorageItemInformation<D>::ThumbnailUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable> & changedHandler) const
{
    return impl::make_event_revoker<D, IStorageItemInformation>(this, &ABI::Windows::Storage::BulkAccess::IStorageItemInformation::remove_ThumbnailUpdated, ThumbnailUpdated(changedHandler));
}

template <typename D> void impl_IStorageItemInformation<D>::ThumbnailUpdated(event_token eventCookie) const
{
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->remove_ThumbnailUpdated(eventCookie));
}

template <typename D> event_token impl_IStorageItemInformation<D>::PropertiesUpdated(const Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable> & changedHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->add_PropertiesUpdated(get(changedHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IStorageItemInformation> impl_IStorageItemInformation<D>::PropertiesUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::BulkAccess::IStorageItemInformation, Windows::IInspectable> & changedHandler) const
{
    return impl::make_event_revoker<D, IStorageItemInformation>(this, &ABI::Windows::Storage::BulkAccess::IStorageItemInformation::remove_PropertiesUpdated, PropertiesUpdated(changedHandler));
}

template <typename D> void impl_IStorageItemInformation<D>::PropertiesUpdated(event_token eventCookie) const
{
    check_hresult(static_cast<const IStorageItemInformation &>(static_cast<const D &>(*this))->remove_PropertiesUpdated(eventCookie));
}

template <typename D> Windows::Storage::BulkAccess::FileInformationFactory impl_IFileInformationFactoryFactory<D>::CreateWithMode(const Windows::Storage::Search::IStorageQueryResultBase & queryResult, Windows::Storage::FileProperties::ThumbnailMode mode) const
{
    Windows::Storage::BulkAccess::FileInformationFactory value { nullptr };
    check_hresult(static_cast<const IFileInformationFactoryFactory &>(static_cast<const D &>(*this))->abi_CreateWithMode(get(queryResult), mode, put(value)));
    return value;
}

template <typename D> Windows::Storage::BulkAccess::FileInformationFactory impl_IFileInformationFactoryFactory<D>::CreateWithModeAndSize(const Windows::Storage::Search::IStorageQueryResultBase & queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize) const
{
    Windows::Storage::BulkAccess::FileInformationFactory value { nullptr };
    check_hresult(static_cast<const IFileInformationFactoryFactory &>(static_cast<const D &>(*this))->abi_CreateWithModeAndSize(get(queryResult), mode, requestedThumbnailSize, put(value)));
    return value;
}

template <typename D> Windows::Storage::BulkAccess::FileInformationFactory impl_IFileInformationFactoryFactory<D>::CreateWithModeAndSizeAndOptions(const Windows::Storage::Search::IStorageQueryResultBase & queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions thumbnailOptions) const
{
    Windows::Storage::BulkAccess::FileInformationFactory value { nullptr };
    check_hresult(static_cast<const IFileInformationFactoryFactory &>(static_cast<const D &>(*this))->abi_CreateWithModeAndSizeAndOptions(get(queryResult), mode, requestedThumbnailSize, thumbnailOptions, put(value)));
    return value;
}

template <typename D> Windows::Storage::BulkAccess::FileInformationFactory impl_IFileInformationFactoryFactory<D>::CreateWithModeAndSizeAndOptionsAndFlags(const Windows::Storage::Search::IStorageQueryResultBase & queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions thumbnailOptions, bool delayLoad) const
{
    Windows::Storage::BulkAccess::FileInformationFactory value { nullptr };
    check_hresult(static_cast<const IFileInformationFactoryFactory &>(static_cast<const D &>(*this))->abi_CreateWithModeAndSizeAndOptionsAndFlags(get(queryResult), mode, requestedThumbnailSize, thumbnailOptions, delayLoad, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> impl_IFileInformationFactory<D>::GetItemsAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> operation;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetItemsAsync(startIndex, maxItemsToRetrieve, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> impl_IFileInformationFactory<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::IStorageItemInformation>> operation;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetItemsAsyncDefaultStartAndCount(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> impl_IFileInformationFactory<D>::GetFilesAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> operation;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetFilesAsync(startIndex, maxItemsToRetrieve, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> impl_IFileInformationFactory<D>::GetFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FileInformation>> operation;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetFilesAsyncDefaultStartAndCount(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> impl_IFileInformationFactory<D>::GetFoldersAsync(uint32_t startIndex, uint32_t maxItemsToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> operation;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetFoldersAsync(startIndex, maxItemsToRetrieve, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> impl_IFileInformationFactory<D>::GetFoldersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::BulkAccess::FolderInformation>> operation;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetFoldersAsyncDefaultStartAndCount(put(operation)));
    return operation;
}

template <typename D> Windows::IInspectable impl_IFileInformationFactory<D>::GetVirtualizedItemsVector() const
{
    Windows::IInspectable vector;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetVirtualizedItemsVector(put(vector)));
    return vector;
}

template <typename D> Windows::IInspectable impl_IFileInformationFactory<D>::GetVirtualizedFilesVector() const
{
    Windows::IInspectable vector;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetVirtualizedFilesVector(put(vector)));
    return vector;
}

template <typename D> Windows::IInspectable impl_IFileInformationFactory<D>::GetVirtualizedFoldersVector() const
{
    Windows::IInspectable vector;
    check_hresult(static_cast<const IFileInformationFactory &>(static_cast<const D &>(*this))->abi_GetVirtualizedFoldersVector(put(vector)));
    return vector;
}

inline FileInformationFactory::FileInformationFactory(const Windows::Storage::Search::IStorageQueryResultBase & queryResult, Windows::Storage::FileProperties::ThumbnailMode mode) :
    FileInformationFactory(get_activation_factory<FileInformationFactory, IFileInformationFactoryFactory>().CreateWithMode(queryResult, mode))
{}

inline FileInformationFactory::FileInformationFactory(const Windows::Storage::Search::IStorageQueryResultBase & queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize) :
    FileInformationFactory(get_activation_factory<FileInformationFactory, IFileInformationFactoryFactory>().CreateWithModeAndSize(queryResult, mode, requestedThumbnailSize))
{}

inline FileInformationFactory::FileInformationFactory(const Windows::Storage::Search::IStorageQueryResultBase & queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions thumbnailOptions) :
    FileInformationFactory(get_activation_factory<FileInformationFactory, IFileInformationFactoryFactory>().CreateWithModeAndSizeAndOptions(queryResult, mode, requestedThumbnailSize, thumbnailOptions))
{}

inline FileInformationFactory::FileInformationFactory(const Windows::Storage::Search::IStorageQueryResultBase & queryResult, Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedThumbnailSize, Windows::Storage::FileProperties::ThumbnailOptions thumbnailOptions, bool delayLoad) :
    FileInformationFactory(get_activation_factory<FileInformationFactory, IFileInformationFactoryFactory>().CreateWithModeAndSizeAndOptionsAndFlags(queryResult, mode, requestedThumbnailSize, thumbnailOptions, delayLoad))
{}

}

}
