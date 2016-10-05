// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Storage.FileProperties.3.h"
#include "internal/Windows.Storage.3.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Collections.h"
#include "Windows.Storage.Search.h"
#include "Windows.Storage.Streams.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Storage {

template <typename L> ApplicationDataSetVersionHandler::ApplicationDataSetVersionHandler(L lambda) :
    ApplicationDataSetVersionHandler(impl::make_delegate<impl_ApplicationDataSetVersionHandler<L>, ApplicationDataSetVersionHandler>(std::forward<L>(lambda)))
{}

template <typename F> ApplicationDataSetVersionHandler::ApplicationDataSetVersionHandler(F * function) :
    ApplicationDataSetVersionHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> ApplicationDataSetVersionHandler::ApplicationDataSetVersionHandler(O * object, M method) :
    ApplicationDataSetVersionHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void ApplicationDataSetVersionHandler::operator()(const Windows::Storage::SetVersionRequest & setVersionRequest) const
{
    check_hresult((*this)->abi_Invoke(get(setVersionRequest)));
}

template <typename L> StreamedFileDataRequestedHandler::StreamedFileDataRequestedHandler(L lambda) :
    StreamedFileDataRequestedHandler(impl::make_delegate<impl_StreamedFileDataRequestedHandler<L>, StreamedFileDataRequestedHandler>(std::forward<L>(lambda)))
{}

template <typename F> StreamedFileDataRequestedHandler::StreamedFileDataRequestedHandler(F * function) :
    StreamedFileDataRequestedHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> StreamedFileDataRequestedHandler::StreamedFileDataRequestedHandler(O * object, M method) :
    StreamedFileDataRequestedHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void StreamedFileDataRequestedHandler::operator()(const Windows::Storage::StreamedFileDataRequest & stream) const
{
    check_hresult((*this)->abi_Invoke(get(stream)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::Storage::IApplicationData> : produce_base<D, Windows::Storage::IApplicationData>
{
    HRESULT __stdcall get_Version(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetVersionAsync(uint32_t desiredVersion, abi_arg_in<Windows::Storage::ApplicationDataSetVersionHandler> handler, abi_arg_out<Windows::Foundation::IAsyncAction> setVersionOperation) noexcept override
    {
        try
        {
            *setVersionOperation = detach(this->shim().SetVersionAsync(desiredVersion, *reinterpret_cast<const Windows::Storage::ApplicationDataSetVersionHandler *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *setVersionOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearAllAsync(abi_arg_out<Windows::Foundation::IAsyncAction> clearOperation) noexcept override
    {
        try
        {
            *clearOperation = detach(this->shim().ClearAsync());
            return S_OK;
        }
        catch (...)
        {
            *clearOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearAsync(Windows::Storage::ApplicationDataLocality locality, abi_arg_out<Windows::Foundation::IAsyncAction> clearOperation) noexcept override
    {
        try
        {
            *clearOperation = detach(this->shim().ClearAsync(locality));
            return S_OK;
        }
        catch (...)
        {
            *clearOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalSettings(abi_arg_out<Windows::Storage::IApplicationDataContainer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingSettings(abi_arg_out<Windows::Storage::IApplicationDataContainer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoamingSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoamingFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TemporaryFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TemporaryFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DataChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DataChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().DataChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SignalDataChanged() noexcept override
    {
        try
        {
            this->shim().SignalDataChanged();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingStorageQuota(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoamingStorageQuota());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IApplicationData2> : produce_base<D, Windows::Storage::IApplicationData2>
{
    HRESULT __stdcall get_LocalCacheFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalCacheFolder());
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
struct produce<D, Windows::Storage::IApplicationData3> : produce_base<D, Windows::Storage::IApplicationData3>
{
    HRESULT __stdcall abi_GetPublisherCacheFolder(abi_arg_in<hstring> folderName, abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetPublisherCacheFolder(*reinterpret_cast<const hstring *>(&folderName)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearPublisherCacheFolderAsync(abi_arg_in<hstring> folderName, abi_arg_out<Windows::Foundation::IAsyncAction> clearOperation) noexcept override
    {
        try
        {
            *clearOperation = detach(this->shim().ClearPublisherCacheFolderAsync(*reinterpret_cast<const hstring *>(&folderName)));
            return S_OK;
        }
        catch (...)
        {
            *clearOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SharedLocalFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SharedLocalFolder());
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
struct produce<D, Windows::Storage::IApplicationDataContainer> : produce_base<D, Windows::Storage::IApplicationDataContainer>
{
    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Locality(Windows::Storage::ApplicationDataLocality * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Locality());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Values(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Values());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Containers(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::ApplicationDataContainer>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Containers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateContainer(abi_arg_in<hstring> name, Windows::Storage::ApplicationDataCreateDisposition disposition, abi_arg_out<Windows::Storage::IApplicationDataContainer> container) noexcept override
    {
        try
        {
            *container = detach(this->shim().CreateContainer(*reinterpret_cast<const hstring *>(&name), disposition));
            return S_OK;
        }
        catch (...)
        {
            *container = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteContainer(abi_arg_in<hstring> name) noexcept override
    {
        try
        {
            this->shim().DeleteContainer(*reinterpret_cast<const hstring *>(&name));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IApplicationDataStatics> : produce_base<D, Windows::Storage::IApplicationDataStatics>
{
    HRESULT __stdcall get_Current(abi_arg_out<Windows::Storage::IApplicationData> value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Storage::IApplicationDataStatics2> : produce_base<D, Windows::Storage::IApplicationDataStatics2>
{
    HRESULT __stdcall abi_GetForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData>> getForUserOperation) noexcept override
    {
        try
        {
            *getForUserOperation = detach(this->shim().GetForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *getForUserOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::ICachedFileManagerStatics> : produce_base<D, Windows::Storage::ICachedFileManagerStatics>
{
    HRESULT __stdcall abi_DeferUpdates(abi_arg_in<Windows::Storage::IStorageFile> file) noexcept override
    {
        try
        {
            this->shim().DeferUpdates(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CompleteUpdatesAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Provider::FileUpdateStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CompleteUpdatesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
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
struct produce<D, Windows::Storage::IDownloadsFolderStatics> : produce_base<D, Windows::Storage::IDownloadsFolderStatics>
{
    HRESULT __stdcall abi_CreateFileAsync(abi_arg_in<hstring> desiredName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFileAsync(*reinterpret_cast<const hstring *>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderAsync(abi_arg_in<hstring> desiredName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFolderAsync(*reinterpret_cast<const hstring *>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFileWithCollisionOptionAsync(abi_arg_in<hstring> desiredName, Windows::Storage::CreationCollisionOption option, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFileAsync(*reinterpret_cast<const hstring *>(&desiredName), option));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderWithCollisionOptionAsync(abi_arg_in<hstring> desiredName, Windows::Storage::CreationCollisionOption option, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFolderAsync(*reinterpret_cast<const hstring *>(&desiredName), option));
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
struct produce<D, Windows::Storage::IDownloadsFolderStatics2> : produce_base<D, Windows::Storage::IDownloadsFolderStatics2>
{
    HRESULT __stdcall abi_CreateFileForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> desiredName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFileForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderForUserAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> desiredName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFolderForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFileForUserWithCollisionOptionAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> desiredName, Windows::Storage::CreationCollisionOption option, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFileForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&desiredName), option));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderForUserWithCollisionOptionAsync(abi_arg_in<Windows::System::IUser> user, abi_arg_in<hstring> desiredName, Windows::Storage::CreationCollisionOption option, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFolderForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), *reinterpret_cast<const hstring *>(&desiredName), option));
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
struct produce<D, Windows::Storage::IFileIOStatics> : produce_base<D, Windows::Storage::IFileIOStatics>
{
    HRESULT __stdcall abi_ReadTextAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().ReadTextAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadTextWithEncodingAsync(abi_arg_in<Windows::Storage::IStorageFile> file, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().ReadTextAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), encoding));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteTextAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<hstring> contents, abi_arg_out<Windows::Foundation::IAsyncAction> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().WriteTextAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const hstring *>(&contents)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteTextWithEncodingAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<hstring> contents, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncAction> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().WriteTextAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const hstring *>(&contents), encoding));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendTextAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<hstring> contents, abi_arg_out<Windows::Foundation::IAsyncAction> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().AppendTextAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const hstring *>(&contents)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendTextWithEncodingAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<hstring> contents, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncAction> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().AppendTextAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const hstring *>(&contents), encoding));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadLinesAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>>> linesOperation) noexcept override
    {
        try
        {
            *linesOperation = detach(this->shim().ReadLinesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *linesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadLinesWithEncodingAsync(abi_arg_in<Windows::Storage::IStorageFile> file, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>>> linesOperation) noexcept override
    {
        try
        {
            *linesOperation = detach(this->shim().ReadLinesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), encoding));
            return S_OK;
        }
        catch (...)
        {
            *linesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteLinesAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> lines, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteLinesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&lines)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteLinesWithEncodingAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> lines, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteLinesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&lines), encoding));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendLinesAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> lines, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AppendLinesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&lines)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendLinesWithEncodingAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> lines, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AppendLinesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&lines), encoding));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBufferAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReadBufferAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteBufferAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteBufferAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteBytesAsync(abi_arg_in<Windows::Storage::IStorageFile> file, uint32_t __bufferSize, abi_arg_in<uint8_t> * buffer, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteBytesAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file), array_ref<const uint8_t>(buffer, buffer + __bufferSize)));
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
struct produce<D, Windows::Storage::IKnownFoldersCameraRollStatics> : produce_base<D, Windows::Storage::IKnownFoldersCameraRollStatics>
{
    HRESULT __stdcall get_CameraRoll(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CameraRoll());
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
struct produce<D, Windows::Storage::IKnownFoldersPlaylistsStatics> : produce_base<D, Windows::Storage::IKnownFoldersPlaylistsStatics>
{
    HRESULT __stdcall get_Playlists(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Playlists());
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
struct produce<D, Windows::Storage::IKnownFoldersSavedPicturesStatics> : produce_base<D, Windows::Storage::IKnownFoldersSavedPicturesStatics>
{
    HRESULT __stdcall get_SavedPictures(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SavedPictures());
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
struct produce<D, Windows::Storage::IKnownFoldersStatics> : produce_base<D, Windows::Storage::IKnownFoldersStatics>
{
    HRESULT __stdcall get_MusicLibrary(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MusicLibrary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PicturesLibrary(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PicturesLibrary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideosLibrary(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideosLibrary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentsLibrary(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DocumentsLibrary());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HomeGroup(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HomeGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemovableDevices(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemovableDevices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediaServerDevices(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaServerDevices());
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
struct produce<D, Windows::Storage::IKnownFoldersStatics2> : produce_base<D, Windows::Storage::IKnownFoldersStatics2>
{
    HRESULT __stdcall get_Objects3D(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Objects3D());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppCaptures(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppCaptures());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecordedCalls(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecordedCalls());
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
struct produce<D, Windows::Storage::IKnownFoldersStatics3> : produce_base<D, Windows::Storage::IKnownFoldersStatics3>
{
    HRESULT __stdcall abi_GetFolderForUserAsync(abi_arg_in<Windows::System::IUser> user, Windows::Storage::KnownFolderId folderId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFolderForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), folderId));
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
struct produce<D, Windows::Storage::IPathIOStatics> : produce_base<D, Windows::Storage::IPathIOStatics>
{
    HRESULT __stdcall abi_ReadTextAsync(abi_arg_in<hstring> absolutePath, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().ReadTextAsync(*reinterpret_cast<const hstring *>(&absolutePath)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadTextWithEncodingAsync(abi_arg_in<hstring> absolutePath, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().ReadTextAsync(*reinterpret_cast<const hstring *>(&absolutePath), encoding));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteTextAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<hstring> contents, abi_arg_out<Windows::Foundation::IAsyncAction> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().WriteTextAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const hstring *>(&contents)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteTextWithEncodingAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<hstring> contents, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncAction> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().WriteTextAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const hstring *>(&contents), encoding));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendTextAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<hstring> contents, abi_arg_out<Windows::Foundation::IAsyncAction> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().AppendTextAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const hstring *>(&contents)));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendTextWithEncodingAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<hstring> contents, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncAction> textOperation) noexcept override
    {
        try
        {
            *textOperation = detach(this->shim().AppendTextAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const hstring *>(&contents), encoding));
            return S_OK;
        }
        catch (...)
        {
            *textOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadLinesAsync(abi_arg_in<hstring> absolutePath, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>>> linesOperation) noexcept override
    {
        try
        {
            *linesOperation = detach(this->shim().ReadLinesAsync(*reinterpret_cast<const hstring *>(&absolutePath)));
            return S_OK;
        }
        catch (...)
        {
            *linesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadLinesWithEncodingAsync(abi_arg_in<hstring> absolutePath, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>>> linesOperation) noexcept override
    {
        try
        {
            *linesOperation = detach(this->shim().ReadLinesAsync(*reinterpret_cast<const hstring *>(&absolutePath), encoding));
            return S_OK;
        }
        catch (...)
        {
            *linesOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteLinesAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> lines, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteLinesAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&lines)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteLinesWithEncodingAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> lines, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteLinesAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&lines), encoding));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendLinesAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> lines, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AppendLinesAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&lines)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AppendLinesWithEncodingAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> lines, Windows::Storage::Streams::UnicodeEncoding encoding, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AppendLinesAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&lines), encoding));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadBufferAsync(abi_arg_in<hstring> absolutePath, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReadBufferAsync(*reinterpret_cast<const hstring *>(&absolutePath)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteBufferAsync(abi_arg_in<hstring> absolutePath, abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteBufferAsync(*reinterpret_cast<const hstring *>(&absolutePath), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_WriteBytesAsync(abi_arg_in<hstring> absolutePath, uint32_t __bufferSize, abi_arg_in<uint8_t> * buffer, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().WriteBytesAsync(*reinterpret_cast<const hstring *>(&absolutePath), array_ref<const uint8_t>(buffer, buffer + __bufferSize)));
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
struct produce<D, Windows::Storage::ISetVersionDeferral> : produce_base<D, Windows::Storage::ISetVersionDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::ISetVersionRequest> : produce_base<D, Windows::Storage::ISetVersionRequest>
{
    HRESULT __stdcall get_CurrentVersion(uint32_t * currentVersion) noexcept override
    {
        try
        {
            *currentVersion = detach(this->shim().CurrentVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredVersion(uint32_t * desiredVersion) noexcept override
    {
        try
        {
            *desiredVersion = detach(this->shim().DesiredVersion());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Storage::ISetVersionDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFile> : produce_base<D, Windows::Storage::IStorageFile>
{
    HRESULT __stdcall get_FileType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenAsync(Windows::Storage::FileAccessMode accessMode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenAsync(accessMode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenTransactedWriteAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenTransactedWriteAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyOverloadDefaultNameAndOptions(abi_arg_in<Windows::Storage::IStorageFolder> destinationFolder, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CopyAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&destinationFolder)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyOverloadDefaultOptions(abi_arg_in<Windows::Storage::IStorageFolder> destinationFolder, abi_arg_in<hstring> desiredNewName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CopyAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&destinationFolder), *reinterpret_cast<const hstring *>(&desiredNewName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyOverload(abi_arg_in<Windows::Storage::IStorageFolder> destinationFolder, abi_arg_in<hstring> desiredNewName, Windows::Storage::NameCollisionOption option, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CopyAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&destinationFolder), *reinterpret_cast<const hstring *>(&desiredNewName), option));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyAndReplaceAsync(abi_arg_in<Windows::Storage::IStorageFile> fileToReplace, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CopyAndReplaceAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&fileToReplace)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveOverloadDefaultNameAndOptions(abi_arg_in<Windows::Storage::IStorageFolder> destinationFolder, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().MoveAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&destinationFolder)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveOverloadDefaultOptions(abi_arg_in<Windows::Storage::IStorageFolder> destinationFolder, abi_arg_in<hstring> desiredNewName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().MoveAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&destinationFolder), *reinterpret_cast<const hstring *>(&desiredNewName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveOverload(abi_arg_in<Windows::Storage::IStorageFolder> destinationFolder, abi_arg_in<hstring> desiredNewName, Windows::Storage::NameCollisionOption option, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().MoveAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&destinationFolder), *reinterpret_cast<const hstring *>(&desiredNewName), option));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MoveAndReplaceAsync(abi_arg_in<Windows::Storage::IStorageFile> fileToReplace, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().MoveAndReplaceAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&fileToReplace)));
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
struct produce<D, Windows::Storage::IStorageFile2> : produce_base<D, Windows::Storage::IStorageFile2>
{
    HRESULT __stdcall abi_OpenWithOptionsAsync(Windows::Storage::FileAccessMode accessMode, Windows::Storage::StorageOpenOptions options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenAsync(accessMode, options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenTransactedWriteWithOptionsAsync(Windows::Storage::StorageOpenOptions options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().OpenTransactedWriteAsync(options));
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
struct produce<D, Windows::Storage::IStorageFilePropertiesWithAvailability> : produce_base<D, Windows::Storage::IStorageFilePropertiesWithAvailability>
{
    HRESULT __stdcall get_IsAvailable(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsAvailable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFileStatics> : produce_base<D, Windows::Storage::IStorageFileStatics>
{
    HRESULT __stdcall abi_GetFileFromPathAsync(abi_arg_in<hstring> path, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFileFromPathAsync(*reinterpret_cast<const hstring *>(&path)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFileFromApplicationUriAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFileFromApplicationUriAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStreamedFileAsync(abi_arg_in<hstring> displayNameWithExtension, abi_arg_in<Windows::Storage::StreamedFileDataRequestedHandler> dataRequested, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> thumbnail, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateStreamedFileAsync(*reinterpret_cast<const hstring *>(&displayNameWithExtension), *reinterpret_cast<const Windows::Storage::StreamedFileDataRequestedHandler *>(&dataRequested), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReplaceWithStreamedFileAsync(abi_arg_in<Windows::Storage::IStorageFile> fileToReplace, abi_arg_in<Windows::Storage::StreamedFileDataRequestedHandler> dataRequested, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> thumbnail, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReplaceWithStreamedFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&fileToReplace), *reinterpret_cast<const Windows::Storage::StreamedFileDataRequestedHandler *>(&dataRequested), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateStreamedFileFromUriAsync(abi_arg_in<hstring> displayNameWithExtension, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> thumbnail, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateStreamedFileFromUriAsync(*reinterpret_cast<const hstring *>(&displayNameWithExtension), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReplaceWithStreamedFileFromUriAsync(abi_arg_in<Windows::Storage::IStorageFile> fileToReplace, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> thumbnail, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReplaceWithStreamedFileFromUriAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&fileToReplace), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&thumbnail)));
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
struct produce<D, Windows::Storage::IStorageFolder> : produce_base<D, Windows::Storage::IStorageFolder>
{
    HRESULT __stdcall abi_CreateFileAsyncOverloadDefaultOptions(abi_arg_in<hstring> desiredName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFileAsync(*reinterpret_cast<const hstring *>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFileAsync(abi_arg_in<hstring> desiredName, Windows::Storage::CreationCollisionOption options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFileAsync(*reinterpret_cast<const hstring *>(&desiredName), options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderAsyncOverloadDefaultOptions(abi_arg_in<hstring> desiredName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFolderAsync(*reinterpret_cast<const hstring *>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFolderAsync(abi_arg_in<hstring> desiredName, Windows::Storage::CreationCollisionOption options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFolderAsync(*reinterpret_cast<const hstring *>(&desiredName), options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFileAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFileAsync(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFolderAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFolderAsync(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetItemAsync(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFilesAsyncOverloadDefaultOptionsStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>> operation) noexcept override
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

    HRESULT __stdcall abi_GetFoldersAsyncOverloadDefaultOptionsStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>>> operation) noexcept override
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

    HRESULT __stdcall abi_GetItemsAsyncOverloadDefaultStartAndCount(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>> operation) noexcept override
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
};

template <typename D>
struct produce<D, Windows::Storage::IStorageFolder2> : produce_base<D, Windows::Storage::IStorageFolder2>
{
    HRESULT __stdcall abi_TryGetItemAsync(abi_arg_in<hstring> name, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().TryGetItemAsync(*reinterpret_cast<const hstring *>(&name)));
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
struct produce<D, Windows::Storage::IStorageFolderStatics> : produce_base<D, Windows::Storage::IStorageFolderStatics>
{
    HRESULT __stdcall abi_GetFolderFromPathAsync(abi_arg_in<hstring> path, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetFolderFromPathAsync(*reinterpret_cast<const hstring *>(&path)));
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
struct produce<D, Windows::Storage::IStorageItem> : produce_base<D, Windows::Storage::IStorageItem>
{
    HRESULT __stdcall abi_RenameAsyncOverloadDefaultOptions(abi_arg_in<hstring> desiredName, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RenameAsync(*reinterpret_cast<const hstring *>(&desiredName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RenameAsync(abi_arg_in<hstring> desiredName, Windows::Storage::NameCollisionOption option, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RenameAsync(*reinterpret_cast<const hstring *>(&desiredName), option));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsyncOverloadDefaultOptions(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(Windows::Storage::StorageDeleteOption option, abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().DeleteAsync(option));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBasicPropertiesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::BasicProperties>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetBasicPropertiesAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Name(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Attributes(Windows::Storage::FileAttributes * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Attributes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DateCreated(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateCreated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsOfType(Windows::Storage::StorageItemTypes type, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOfType(type));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageItem2> : produce_base<D, Windows::Storage::IStorageItem2>
{
    HRESULT __stdcall abi_GetParentAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetParentAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEqual(abi_arg_in<Windows::Storage::IStorageItem> item, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsEqual(*reinterpret_cast<const Windows::Storage::IStorageItem *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageItemProperties> : produce_base<D, Windows::Storage::IStorageItemProperties>
{
    HRESULT __stdcall abi_GetThumbnailAsyncOverloadDefaultSizeDefaultOptions(Windows::Storage::FileProperties::ThumbnailMode mode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetThumbnailAsync(mode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetThumbnailAsyncOverloadDefaultOptions(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetThumbnailAsync(mode, requestedSize));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetThumbnailAsync(mode, requestedSize, options));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FolderRelativeId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FolderRelativeId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Storage::FileProperties::IStorageItemContentProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
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
struct produce<D, Windows::Storage::IStorageItemProperties2> : produce_base<D, Windows::Storage::IStorageItemProperties2>
{
    HRESULT __stdcall abi_GetScaledImageAsThumbnailAsyncOverloadDefaultSizeDefaultOptions(Windows::Storage::FileProperties::ThumbnailMode mode, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetScaledImageAsThumbnailAsync(mode));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetScaledImageAsThumbnailAsyncOverloadDefaultOptions(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetScaledImageAsThumbnailAsync(mode, requestedSize));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetScaledImageAsThumbnailAsync(mode, requestedSize, options));
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
struct produce<D, Windows::Storage::IStorageItemPropertiesWithProvider> : produce_base<D, Windows::Storage::IStorageItemPropertiesWithProvider>
{
    HRESULT __stdcall get_Provider(abi_arg_out<Windows::Storage::IStorageProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Provider());
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
struct produce<D, Windows::Storage::IStorageLibrary> : produce_base<D, Windows::Storage::IStorageLibrary>
{
    HRESULT __stdcall abi_RequestAddFolderAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestAddFolderAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestRemoveFolderAsync(abi_arg_in<Windows::Storage::IStorageFolder> folder, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestRemoveFolderAsync(*reinterpret_cast<const Windows::Storage::StorageFolder *>(&folder)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Folders(abi_arg_out<Windows::Foundation::Collections::IObservableVector<Windows::Storage::StorageFolder>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Folders());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SaveFolder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SaveFolder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DefinitionChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::IInspectable>> handler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().DefinitionChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DefinitionChanged(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().DefinitionChanged(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageLibrary2> : produce_base<D, Windows::Storage::IStorageLibrary2>
{
    HRESULT __stdcall get_ChangeTracker(abi_arg_out<Windows::Storage::IStorageLibraryChangeTracker> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeTracker());
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
struct produce<D, Windows::Storage::IStorageLibraryChange> : produce_base<D, Windows::Storage::IStorageLibraryChange>
{
    HRESULT __stdcall get_ChangeType(Windows::Storage::StorageLibraryChangeType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Path(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousPath(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreviousPath());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsOfType(Windows::Storage::StorageItemTypes type, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsOfType(type));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStorageItemAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetStorageItemAsync());
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
struct produce<D, Windows::Storage::IStorageLibraryChangeReader> : produce_base<D, Windows::Storage::IStorageLibraryChangeReader>
{
    HRESULT __stdcall abi_ReadBatchAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageLibraryChange>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcceptChangesAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().AcceptChangesAsync());
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
struct produce<D, Windows::Storage::IStorageLibraryChangeTracker> : produce_base<D, Windows::Storage::IStorageLibraryChangeTracker>
{
    HRESULT __stdcall abi_GetChangeReader(abi_arg_out<Windows::Storage::IStorageLibraryChangeReader> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetChangeReader());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Enable() noexcept override
    {
        try
        {
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Reset() noexcept override
    {
        try
        {
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::IStorageLibraryStatics> : produce_base<D, Windows::Storage::IStorageLibraryStatics>
{
    HRESULT __stdcall abi_GetLibraryAsync(Windows::Storage::KnownLibraryId libraryId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetLibraryAsync(libraryId));
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
struct produce<D, Windows::Storage::IStorageLibraryStatics2> : produce_base<D, Windows::Storage::IStorageLibraryStatics2>
{
    HRESULT __stdcall abi_GetLibraryForUserAsync(abi_arg_in<Windows::System::IUser> user, Windows::Storage::KnownLibraryId libraryId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetLibraryForUserAsync(*reinterpret_cast<const Windows::System::User *>(&user), libraryId));
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
struct produce<D, Windows::Storage::IStorageProvider> : produce_base<D, Windows::Storage::IStorageProvider>
{
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
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
struct produce<D, Windows::Storage::IStorageStreamTransaction> : produce_base<D, Windows::Storage::IStorageStreamTransaction>
{
    HRESULT __stdcall get_Stream(abi_arg_out<Windows::Storage::Streams::IRandomAccessStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Stream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CommitAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CommitAsync());
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
struct produce<D, Windows::Storage::IStreamedFileDataRequest> : produce_base<D, Windows::Storage::IStreamedFileDataRequest>
{
    HRESULT __stdcall abi_FailAndClose(Windows::Storage::StreamedFileFailureMode failureMode) noexcept override
    {
        try
        {
            this->shim().FailAndClose(failureMode);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::ISystemAudioProperties> : produce_base<D, Windows::Storage::ISystemAudioProperties>
{
    HRESULT __stdcall get_EncodingBitrate(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EncodingBitrate());
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
struct produce<D, Windows::Storage::ISystemGPSProperties> : produce_base<D, Windows::Storage::ISystemGPSProperties>
{
    HRESULT __stdcall get_LatitudeDecimal(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LatitudeDecimal());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LongitudeDecimal(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LongitudeDecimal());
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
struct produce<D, Windows::Storage::ISystemImageProperties> : produce_base<D, Windows::Storage::ISystemImageProperties>
{
    HRESULT __stdcall get_HorizontalSize(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HorizontalSize());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalSize(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VerticalSize());
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
struct produce<D, Windows::Storage::ISystemMediaProperties> : produce_base<D, Windows::Storage::ISystemMediaProperties>
{
    HRESULT __stdcall get_Duration(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Producer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Producer());
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

    HRESULT __stdcall get_SubTitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Writer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Writer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Year(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Year());
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
struct produce<D, Windows::Storage::ISystemMusicProperties> : produce_base<D, Windows::Storage::ISystemMusicProperties>
{
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

    HRESULT __stdcall get_AlbumTitle(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlbumTitle());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_Composer(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Composer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Conductor(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Conductor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayArtist(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayArtist());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Genre(abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_TrackNumber(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrackNumber());
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
struct produce<D, Windows::Storage::ISystemPhotoProperties> : produce_base<D, Windows::Storage::ISystemPhotoProperties>
{
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

    HRESULT __stdcall get_DateTaken(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DateTaken());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeopleNames(abi_arg_out<hstring> value) noexcept override
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
struct produce<D, Windows::Storage::ISystemProperties> : produce_base<D, Windows::Storage::ISystemProperties>
{
    HRESULT __stdcall get_Author(abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_ItemNameDisplay(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemNameDisplay());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Keywords(abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Rating(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rating());
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

    HRESULT __stdcall get_Audio(abi_arg_out<Windows::Storage::ISystemAudioProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Audio());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GPS(abi_arg_out<Windows::Storage::ISystemGPSProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GPS());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Media(abi_arg_out<Windows::Storage::ISystemMediaProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Media());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Music(abi_arg_out<Windows::Storage::ISystemMusicProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Music());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Photo(abi_arg_out<Windows::Storage::ISystemPhotoProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Photo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Video(abi_arg_out<Windows::Storage::ISystemVideoProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Video());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Image(abi_arg_out<Windows::Storage::ISystemImageProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Image());
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
struct produce<D, Windows::Storage::ISystemVideoProperties> : produce_base<D, Windows::Storage::ISystemVideoProperties>
{
    HRESULT __stdcall get_Director(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Director());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameHeight(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameHeight());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameWidth(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameWidth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TotalBitrate(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TotalBitrate());
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

namespace Windows::Storage {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> impl_IStorageLibraryStatics<D>::GetLibraryAsync(Windows::Storage::KnownLibraryId libraryId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> operation;
    check_hresult(static_cast<const IStorageLibraryStatics &>(static_cast<const D &>(*this))->abi_GetLibraryAsync(libraryId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> impl_IStorageLibraryStatics2<D>::GetLibraryForUserAsync(const Windows::System::User & user, Windows::Storage::KnownLibraryId libraryId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> operation;
    check_hresult(static_cast<const IStorageLibraryStatics2 &>(static_cast<const D &>(*this))->abi_GetLibraryForUserAsync(get(user), libraryId, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IStorageLibrary<D>::RequestAddFolderAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IStorageLibrary &>(static_cast<const D &>(*this))->abi_RequestAddFolderAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IStorageLibrary<D>::RequestRemoveFolderAsync(const Windows::Storage::StorageFolder & folder) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const IStorageLibrary &>(static_cast<const D &>(*this))->abi_RequestRemoveFolderAsync(get(folder), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::Storage::StorageFolder> impl_IStorageLibrary<D>::Folders() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::Storage::StorageFolder> value;
    check_hresult(static_cast<const IStorageLibrary &>(static_cast<const D &>(*this))->get_Folders(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IStorageLibrary<D>::SaveFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IStorageLibrary &>(static_cast<const D &>(*this))->get_SaveFolder(put(value)));
    return value;
}

template <typename D> event_token impl_IStorageLibrary<D>::DefinitionChanged(const Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::IInspectable> & handler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IStorageLibrary &>(static_cast<const D &>(*this))->add_DefinitionChanged(get(handler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IStorageLibrary> impl_IStorageLibrary<D>::DefinitionChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::StorageLibrary, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IStorageLibrary>(this, &ABI::Windows::Storage::IStorageLibrary::remove_DefinitionChanged, DefinitionChanged(handler));
}

template <typename D> void impl_IStorageLibrary<D>::DefinitionChanged(event_token eventCookie) const
{
    check_hresult(static_cast<const IStorageLibrary &>(static_cast<const D &>(*this))->remove_DefinitionChanged(eventCookie));
}

template <typename D> Windows::Storage::StorageLibraryChangeTracker impl_IStorageLibrary2<D>::ChangeTracker() const
{
    Windows::Storage::StorageLibraryChangeTracker value { nullptr };
    check_hresult(static_cast<const IStorageLibrary2 &>(static_cast<const D &>(*this))->get_ChangeTracker(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics<D>::MusicLibrary() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics &>(static_cast<const D &>(*this))->get_MusicLibrary(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics<D>::PicturesLibrary() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics &>(static_cast<const D &>(*this))->get_PicturesLibrary(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics<D>::VideosLibrary() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics &>(static_cast<const D &>(*this))->get_VideosLibrary(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics<D>::DocumentsLibrary() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics &>(static_cast<const D &>(*this))->get_DocumentsLibrary(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics<D>::HomeGroup() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics &>(static_cast<const D &>(*this))->get_HomeGroup(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics<D>::RemovableDevices() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics &>(static_cast<const D &>(*this))->get_RemovableDevices(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics<D>::MediaServerDevices() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics &>(static_cast<const D &>(*this))->get_MediaServerDevices(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics2<D>::Objects3D() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics2 &>(static_cast<const D &>(*this))->get_Objects3D(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics2<D>::AppCaptures() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics2 &>(static_cast<const D &>(*this))->get_AppCaptures(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersStatics2<D>::RecordedCalls() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersStatics2 &>(static_cast<const D &>(*this))->get_RecordedCalls(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IKnownFoldersStatics3<D>::GetFolderForUserAsync(const Windows::System::User & user, Windows::Storage::KnownFolderId folderId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IKnownFoldersStatics3 &>(static_cast<const D &>(*this))->abi_GetFolderForUserAsync(get(user), folderId, put(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersPlaylistsStatics<D>::Playlists() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersPlaylistsStatics &>(static_cast<const D &>(*this))->get_Playlists(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersCameraRollStatics<D>::CameraRoll() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersCameraRollStatics &>(static_cast<const D &>(*this))->get_CameraRoll(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IKnownFoldersSavedPicturesStatics<D>::SavedPictures() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IKnownFoldersSavedPicturesStatics &>(static_cast<const D &>(*this))->get_SavedPictures(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IDownloadsFolderStatics<D>::CreateFileAsync(hstring_ref desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IDownloadsFolderStatics &>(static_cast<const D &>(*this))->abi_CreateFileAsync(get(desiredName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IDownloadsFolderStatics<D>::CreateFolderAsync(hstring_ref desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IDownloadsFolderStatics &>(static_cast<const D &>(*this))->abi_CreateFolderAsync(get(desiredName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IDownloadsFolderStatics<D>::CreateFileAsync(hstring_ref desiredName, Windows::Storage::CreationCollisionOption option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IDownloadsFolderStatics &>(static_cast<const D &>(*this))->abi_CreateFileWithCollisionOptionAsync(get(desiredName), option, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IDownloadsFolderStatics<D>::CreateFolderAsync(hstring_ref desiredName, Windows::Storage::CreationCollisionOption option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IDownloadsFolderStatics &>(static_cast<const D &>(*this))->abi_CreateFolderWithCollisionOptionAsync(get(desiredName), option, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IDownloadsFolderStatics2<D>::CreateFileForUserAsync(const Windows::System::User & user, hstring_ref desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IDownloadsFolderStatics2 &>(static_cast<const D &>(*this))->abi_CreateFileForUserAsync(get(user), get(desiredName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IDownloadsFolderStatics2<D>::CreateFolderForUserAsync(const Windows::System::User & user, hstring_ref desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IDownloadsFolderStatics2 &>(static_cast<const D &>(*this))->abi_CreateFolderForUserAsync(get(user), get(desiredName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IDownloadsFolderStatics2<D>::CreateFileForUserAsync(const Windows::System::User & user, hstring_ref desiredName, Windows::Storage::CreationCollisionOption option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IDownloadsFolderStatics2 &>(static_cast<const D &>(*this))->abi_CreateFileForUserWithCollisionOptionAsync(get(user), get(desiredName), option, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IDownloadsFolderStatics2<D>::CreateFolderForUserAsync(const Windows::System::User & user, hstring_ref desiredName, Windows::Storage::CreationCollisionOption option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IDownloadsFolderStatics2 &>(static_cast<const D &>(*this))->abi_CreateFolderForUserWithCollisionOptionAsync(get(user), get(desiredName), option, put(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageLibraryChangeType impl_IStorageLibraryChange<D>::ChangeType() const
{
    Windows::Storage::StorageLibraryChangeType value {};
    check_hresult(static_cast<const IStorageLibraryChange &>(static_cast<const D &>(*this))->get_ChangeType(&value));
    return value;
}

template <typename D> hstring impl_IStorageLibraryChange<D>::Path() const
{
    hstring value;
    check_hresult(static_cast<const IStorageLibraryChange &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> hstring impl_IStorageLibraryChange<D>::PreviousPath() const
{
    hstring value;
    check_hresult(static_cast<const IStorageLibraryChange &>(static_cast<const D &>(*this))->get_PreviousPath(put(value)));
    return value;
}

template <typename D> bool impl_IStorageLibraryChange<D>::IsOfType(Windows::Storage::StorageItemTypes type) const
{
    bool value {};
    check_hresult(static_cast<const IStorageLibraryChange &>(static_cast<const D &>(*this))->abi_IsOfType(type, &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> impl_IStorageLibraryChange<D>::GetStorageItemAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> operation;
    check_hresult(static_cast<const IStorageLibraryChange &>(static_cast<const D &>(*this))->abi_GetStorageItemAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageItem<D>::RenameAsync(hstring_ref desiredName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->abi_RenameAsyncOverloadDefaultOptions(get(desiredName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageItem<D>::RenameAsync(hstring_ref desiredName, Windows::Storage::NameCollisionOption option) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->abi_RenameAsync(get(desiredName), option, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageItem<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->abi_DeleteAsyncOverloadDefaultOptions(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageItem<D>::DeleteAsync(Windows::Storage::StorageDeleteOption option) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->abi_DeleteAsync(option, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::BasicProperties> impl_IStorageItem<D>::GetBasicPropertiesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::BasicProperties> operation;
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->abi_GetBasicPropertiesAsync(put(operation)));
    return operation;
}

template <typename D> hstring impl_IStorageItem<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> hstring impl_IStorageItem<D>::Path() const
{
    hstring value;
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->get_Path(put(value)));
    return value;
}

template <typename D> Windows::Storage::FileAttributes impl_IStorageItem<D>::Attributes() const
{
    Windows::Storage::FileAttributes value {};
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->get_Attributes(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IStorageItem<D>::DateCreated() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->get_DateCreated(put(value)));
    return value;
}

template <typename D> bool impl_IStorageItem<D>::IsOfType(Windows::Storage::StorageItemTypes type) const
{
    bool value {};
    check_hresult(static_cast<const IStorageItem &>(static_cast<const D &>(*this))->abi_IsOfType(type, &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageLibraryChange>> impl_IStorageLibraryChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageLibraryChange>> operation;
    check_hresult(static_cast<const IStorageLibraryChangeReader &>(static_cast<const D &>(*this))->abi_ReadBatchAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageLibraryChangeReader<D>::AcceptChangesAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageLibraryChangeReader &>(static_cast<const D &>(*this))->abi_AcceptChangesAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageLibraryChangeReader impl_IStorageLibraryChangeTracker<D>::GetChangeReader() const
{
    Windows::Storage::StorageLibraryChangeReader value { nullptr };
    check_hresult(static_cast<const IStorageLibraryChangeTracker &>(static_cast<const D &>(*this))->abi_GetChangeReader(put(value)));
    return value;
}

template <typename D> void impl_IStorageLibraryChangeTracker<D>::Enable() const
{
    check_hresult(static_cast<const IStorageLibraryChangeTracker &>(static_cast<const D &>(*this))->abi_Enable());
}

template <typename D> void impl_IStorageLibraryChangeTracker<D>::Reset() const
{
    check_hresult(static_cast<const IStorageLibraryChangeTracker &>(static_cast<const D &>(*this))->abi_Reset());
}

template <typename D> void impl_IStreamedFileDataRequest<D>::FailAndClose(Windows::Storage::StreamedFileFailureMode failureMode) const
{
    check_hresult(static_cast<const IStreamedFileDataRequest &>(static_cast<const D &>(*this))->abi_FailAndClose(failureMode));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFileStatics<D>::GetFileFromPathAsync(hstring_ref path) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFileStatics &>(static_cast<const D &>(*this))->abi_GetFileFromPathAsync(get(path), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFileStatics<D>::GetFileFromApplicationUriAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFileStatics &>(static_cast<const D &>(*this))->abi_GetFileFromApplicationUriAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFileStatics<D>::CreateStreamedFileAsync(hstring_ref displayNameWithExtension, const Windows::Storage::StreamedFileDataRequestedHandler & dataRequested, const Windows::Storage::Streams::IRandomAccessStreamReference & thumbnail) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFileStatics &>(static_cast<const D &>(*this))->abi_CreateStreamedFileAsync(get(displayNameWithExtension), get(dataRequested), get(thumbnail), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFileStatics<D>::ReplaceWithStreamedFileAsync(const Windows::Storage::IStorageFile & fileToReplace, const Windows::Storage::StreamedFileDataRequestedHandler & dataRequested, const Windows::Storage::Streams::IRandomAccessStreamReference & thumbnail) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFileStatics &>(static_cast<const D &>(*this))->abi_ReplaceWithStreamedFileAsync(get(fileToReplace), get(dataRequested), get(thumbnail), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFileStatics<D>::CreateStreamedFileFromUriAsync(hstring_ref displayNameWithExtension, const Windows::Foundation::Uri & uri, const Windows::Storage::Streams::IRandomAccessStreamReference & thumbnail) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFileStatics &>(static_cast<const D &>(*this))->abi_CreateStreamedFileFromUriAsync(get(displayNameWithExtension), get(uri), get(thumbnail), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFileStatics<D>::ReplaceWithStreamedFileFromUriAsync(const Windows::Storage::IStorageFile & fileToReplace, const Windows::Foundation::Uri & uri, const Windows::Storage::Streams::IRandomAccessStreamReference & thumbnail) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFileStatics &>(static_cast<const D &>(*this))->abi_ReplaceWithStreamedFileFromUriAsync(get(fileToReplace), get(uri), get(thumbnail), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFolder<D>::CreateFileAsync(hstring_ref desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_CreateFileAsyncOverloadDefaultOptions(get(desiredName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFolder<D>::CreateFileAsync(hstring_ref desiredName, Windows::Storage::CreationCollisionOption options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_CreateFileAsync(get(desiredName), options, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IStorageFolder<D>::CreateFolderAsync(hstring_ref desiredName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_CreateFolderAsyncOverloadDefaultOptions(get(desiredName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IStorageFolder<D>::CreateFolderAsync(hstring_ref desiredName, Windows::Storage::CreationCollisionOption options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_CreateFolderAsync(get(desiredName), options, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFolder<D>::GetFileAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_GetFileAsync(get(name), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IStorageFolder<D>::GetFolderAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_GetFolderAsync(get(name), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> impl_IStorageFolder<D>::GetItemAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_GetItemAsync(get(name), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> impl_IStorageFolder<D>::GetFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_GetFilesAsyncOverloadDefaultOptionsStartAndCount(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> impl_IStorageFolder<D>::GetFoldersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFolder>> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_GetFoldersAsyncOverloadDefaultOptionsStartAndCount(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> impl_IStorageFolder<D>::GetItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation;
    check_hresult(static_cast<const IStorageFolder &>(static_cast<const D &>(*this))->abi_GetItemsAsyncOverloadDefaultStartAndCount(put(operation)));
    return operation;
}

template <typename D> hstring impl_IStorageFile<D>::FileType() const
{
    hstring value;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->get_FileType(put(value)));
    return value;
}

template <typename D> hstring impl_IStorageFile<D>::ContentType() const
{
    hstring value;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->get_ContentType(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IStorageFile<D>::OpenAsync(Windows::Storage::FileAccessMode accessMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_OpenAsync(accessMode, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> impl_IStorageFile<D>::OpenTransactedWriteAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_OpenTransactedWriteAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFile<D>::CopyAsync(const Windows::Storage::IStorageFolder & destinationFolder) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_CopyOverloadDefaultNameAndOptions(get(destinationFolder), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFile<D>::CopyAsync(const Windows::Storage::IStorageFolder & destinationFolder, hstring_ref desiredNewName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_CopyOverloadDefaultOptions(get(destinationFolder), get(desiredNewName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_IStorageFile<D>::CopyAsync(const Windows::Storage::IStorageFolder & destinationFolder, hstring_ref desiredNewName, Windows::Storage::NameCollisionOption option) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_CopyOverload(get(destinationFolder), get(desiredNewName), option, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageFile<D>::CopyAndReplaceAsync(const Windows::Storage::IStorageFile & fileToReplace) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_CopyAndReplaceAsync(get(fileToReplace), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageFile<D>::MoveAsync(const Windows::Storage::IStorageFolder & destinationFolder) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_MoveOverloadDefaultNameAndOptions(get(destinationFolder), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageFile<D>::MoveAsync(const Windows::Storage::IStorageFolder & destinationFolder, hstring_ref desiredNewName) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_MoveOverloadDefaultOptions(get(destinationFolder), get(desiredNewName), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageFile<D>::MoveAsync(const Windows::Storage::IStorageFolder & destinationFolder, hstring_ref desiredNewName, Windows::Storage::NameCollisionOption option) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_MoveOverload(get(destinationFolder), get(desiredNewName), option, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageFile<D>::MoveAndReplaceAsync(const Windows::Storage::IStorageFile & fileToReplace) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageFile &>(static_cast<const D &>(*this))->abi_MoveAndReplaceAsync(get(fileToReplace), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IStorageFolderStatics<D>::GetFolderFromPathAsync(hstring_ref path) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IStorageFolderStatics &>(static_cast<const D &>(*this))->abi_GetFolderFromPathAsync(get(path), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> impl_IStorageItem2<D>::GetParentAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> operation;
    check_hresult(static_cast<const IStorageItem2 &>(static_cast<const D &>(*this))->abi_GetParentAsync(put(operation)));
    return operation;
}

template <typename D> bool impl_IStorageItem2<D>::IsEqual(const Windows::Storage::IStorageItem & item) const
{
    bool value {};
    check_hresult(static_cast<const IStorageItem2 &>(static_cast<const D &>(*this))->abi_IsEqual(get(item), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> impl_IStorageItemProperties<D>::GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode mode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation;
    check_hresult(static_cast<const IStorageItemProperties &>(static_cast<const D &>(*this))->abi_GetThumbnailAsyncOverloadDefaultSizeDefaultOptions(mode, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> impl_IStorageItemProperties<D>::GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation;
    check_hresult(static_cast<const IStorageItemProperties &>(static_cast<const D &>(*this))->abi_GetThumbnailAsyncOverloadDefaultOptions(mode, requestedSize, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> impl_IStorageItemProperties<D>::GetThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation;
    check_hresult(static_cast<const IStorageItemProperties &>(static_cast<const D &>(*this))->abi_GetThumbnailAsync(mode, requestedSize, options, put(operation)));
    return operation;
}

template <typename D> hstring impl_IStorageItemProperties<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IStorageItemProperties &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IStorageItemProperties<D>::DisplayType() const
{
    hstring value;
    check_hresult(static_cast<const IStorageItemProperties &>(static_cast<const D &>(*this))->get_DisplayType(put(value)));
    return value;
}

template <typename D> hstring impl_IStorageItemProperties<D>::FolderRelativeId() const
{
    hstring value;
    check_hresult(static_cast<const IStorageItemProperties &>(static_cast<const D &>(*this))->get_FolderRelativeId(put(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::StorageItemContentProperties impl_IStorageItemProperties<D>::Properties() const
{
    Windows::Storage::FileProperties::StorageItemContentProperties value { nullptr };
    check_hresult(static_cast<const IStorageItemProperties &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> impl_IStorageItemProperties2<D>::GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode mode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation;
    check_hresult(static_cast<const IStorageItemProperties2 &>(static_cast<const D &>(*this))->abi_GetScaledImageAsThumbnailAsyncOverloadDefaultSizeDefaultOptions(mode, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> impl_IStorageItemProperties2<D>::GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation;
    check_hresult(static_cast<const IStorageItemProperties2 &>(static_cast<const D &>(*this))->abi_GetScaledImageAsThumbnailAsyncOverloadDefaultOptions(mode, requestedSize, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> impl_IStorageItemProperties2<D>::GetScaledImageAsThumbnailAsync(Windows::Storage::FileProperties::ThumbnailMode mode, uint32_t requestedSize, Windows::Storage::FileProperties::ThumbnailOptions options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::FileProperties::StorageItemThumbnail> operation;
    check_hresult(static_cast<const IStorageItemProperties2 &>(static_cast<const D &>(*this))->abi_GetScaledImageAsThumbnailAsync(mode, requestedSize, options, put(operation)));
    return operation;
}

template <typename D> Windows::Storage::StorageProvider impl_IStorageItemPropertiesWithProvider<D>::Provider() const
{
    Windows::Storage::StorageProvider value { nullptr };
    check_hresult(static_cast<const IStorageItemPropertiesWithProvider &>(static_cast<const D &>(*this))->get_Provider(put(value)));
    return value;
}

template <typename D> bool impl_IStorageFilePropertiesWithAvailability<D>::IsAvailable() const
{
    bool value {};
    check_hresult(static_cast<const IStorageFilePropertiesWithAvailability &>(static_cast<const D &>(*this))->get_IsAvailable(&value));
    return value;
}

template <typename D> hstring impl_IStorageProvider<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IStorageProvider &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IStorageProvider<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IStorageProvider &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> impl_IStorageFolder2<D>::TryGetItemAsync(hstring_ref name) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::IStorageItem> operation;
    check_hresult(static_cast<const IStorageFolder2 &>(static_cast<const D &>(*this))->abi_TryGetItemAsync(get(name), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> impl_IStorageFile2<D>::OpenAsync(Windows::Storage::FileAccessMode accessMode, Windows::Storage::StorageOpenOptions options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> operation;
    check_hresult(static_cast<const IStorageFile2 &>(static_cast<const D &>(*this))->abi_OpenWithOptionsAsync(accessMode, options, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> impl_IStorageFile2<D>::OpenTransactedWriteAsync(Windows::Storage::StorageOpenOptions options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageStreamTransaction> operation;
    check_hresult(static_cast<const IStorageFile2 &>(static_cast<const D &>(*this))->abi_OpenTransactedWriteWithOptionsAsync(options, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IFileIOStatics<D>::ReadTextAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<hstring> textOperation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_ReadTextAsync(get(file), put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IFileIOStatics<D>::ReadTextAsync(const Windows::Storage::IStorageFile & file, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncOperation<hstring> textOperation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_ReadTextWithEncodingAsync(get(file), encoding, put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::WriteTextAsync(const Windows::Storage::IStorageFile & file, hstring_ref contents) const
{
    Windows::Foundation::IAsyncAction textOperation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_WriteTextAsync(get(file), get(contents), put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::WriteTextAsync(const Windows::Storage::IStorageFile & file, hstring_ref contents, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncAction textOperation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_WriteTextWithEncodingAsync(get(file), get(contents), encoding, put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::AppendTextAsync(const Windows::Storage::IStorageFile & file, hstring_ref contents) const
{
    Windows::Foundation::IAsyncAction textOperation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_AppendTextAsync(get(file), get(contents), put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::AppendTextAsync(const Windows::Storage::IStorageFile & file, hstring_ref contents, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncAction textOperation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_AppendTextWithEncodingAsync(get(file), get(contents), encoding, put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> impl_IFileIOStatics<D>::ReadLinesAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> linesOperation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_ReadLinesAsync(get(file), put(linesOperation)));
    return linesOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> impl_IFileIOStatics<D>::ReadLinesAsync(const Windows::Storage::IStorageFile & file, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> linesOperation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_ReadLinesWithEncodingAsync(get(file), encoding, put(linesOperation)));
    return linesOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::WriteLinesAsync(const Windows::Storage::IStorageFile & file, const Windows::Foundation::Collections::IIterable<hstring> & lines) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_WriteLinesAsync(get(file), get(lines), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::WriteLinesAsync(const Windows::Storage::IStorageFile & file, const Windows::Foundation::Collections::IIterable<hstring> & lines, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_WriteLinesWithEncodingAsync(get(file), get(lines), encoding, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::AppendLinesAsync(const Windows::Storage::IStorageFile & file, const Windows::Foundation::Collections::IIterable<hstring> & lines) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_AppendLinesAsync(get(file), get(lines), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::AppendLinesAsync(const Windows::Storage::IStorageFile & file, const Windows::Foundation::Collections::IIterable<hstring> & lines, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_AppendLinesWithEncodingAsync(get(file), get(lines), encoding, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_IFileIOStatics<D>::ReadBufferAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_ReadBufferAsync(get(file), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::WriteBufferAsync(const Windows::Storage::IStorageFile & file, const Windows::Storage::Streams::IBuffer & buffer) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_WriteBufferAsync(get(file), get(buffer), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IFileIOStatics<D>::WriteBytesAsync(const Windows::Storage::IStorageFile & file, array_ref<const uint8_t> buffer) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IFileIOStatics &>(static_cast<const D &>(*this))->abi_WriteBytesAsync(get(file), buffer.size(), get(buffer), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IPathIOStatics<D>::ReadTextAsync(hstring_ref absolutePath) const
{
    Windows::Foundation::IAsyncOperation<hstring> textOperation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_ReadTextAsync(get(absolutePath), put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IPathIOStatics<D>::ReadTextAsync(hstring_ref absolutePath, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncOperation<hstring> textOperation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_ReadTextWithEncodingAsync(get(absolutePath), encoding, put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::WriteTextAsync(hstring_ref absolutePath, hstring_ref contents) const
{
    Windows::Foundation::IAsyncAction textOperation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_WriteTextAsync(get(absolutePath), get(contents), put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::WriteTextAsync(hstring_ref absolutePath, hstring_ref contents, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncAction textOperation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_WriteTextWithEncodingAsync(get(absolutePath), get(contents), encoding, put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::AppendTextAsync(hstring_ref absolutePath, hstring_ref contents) const
{
    Windows::Foundation::IAsyncAction textOperation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_AppendTextAsync(get(absolutePath), get(contents), put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::AppendTextAsync(hstring_ref absolutePath, hstring_ref contents, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncAction textOperation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_AppendTextWithEncodingAsync(get(absolutePath), get(contents), encoding, put(textOperation)));
    return textOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> impl_IPathIOStatics<D>::ReadLinesAsync(hstring_ref absolutePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> linesOperation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_ReadLinesAsync(get(absolutePath), put(linesOperation)));
    return linesOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> impl_IPathIOStatics<D>::ReadLinesAsync(hstring_ref absolutePath, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> linesOperation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_ReadLinesWithEncodingAsync(get(absolutePath), encoding, put(linesOperation)));
    return linesOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::WriteLinesAsync(hstring_ref absolutePath, const Windows::Foundation::Collections::IIterable<hstring> & lines) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_WriteLinesAsync(get(absolutePath), get(lines), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::WriteLinesAsync(hstring_ref absolutePath, const Windows::Foundation::Collections::IIterable<hstring> & lines, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_WriteLinesWithEncodingAsync(get(absolutePath), get(lines), encoding, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::AppendLinesAsync(hstring_ref absolutePath, const Windows::Foundation::Collections::IIterable<hstring> & lines) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_AppendLinesAsync(get(absolutePath), get(lines), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::AppendLinesAsync(hstring_ref absolutePath, const Windows::Foundation::Collections::IIterable<hstring> & lines, Windows::Storage::Streams::UnicodeEncoding encoding) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_AppendLinesWithEncodingAsync(get(absolutePath), get(lines), encoding, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_IPathIOStatics<D>::ReadBufferAsync(hstring_ref absolutePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_ReadBufferAsync(get(absolutePath), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::WriteBufferAsync(hstring_ref absolutePath, const Windows::Storage::Streams::IBuffer & buffer) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_WriteBufferAsync(get(absolutePath), get(buffer), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPathIOStatics<D>::WriteBytesAsync(hstring_ref absolutePath, array_ref<const uint8_t> buffer) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IPathIOStatics &>(static_cast<const D &>(*this))->abi_WriteBytesAsync(get(absolutePath), buffer.size(), get(buffer), put(operation)));
    return operation;
}

template <typename D> void impl_ICachedFileManagerStatics<D>::DeferUpdates(const Windows::Storage::IStorageFile & file) const
{
    check_hresult(static_cast<const ICachedFileManagerStatics &>(static_cast<const D &>(*this))->abi_DeferUpdates(get(file)));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Provider::FileUpdateStatus> impl_ICachedFileManagerStatics<D>::CompleteUpdatesAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Provider::FileUpdateStatus> operation;
    check_hresult(static_cast<const ICachedFileManagerStatics &>(static_cast<const D &>(*this))->abi_CompleteUpdatesAsync(get(file), put(operation)));
    return operation;
}

template <typename D> hstring impl_ISystemAudioProperties<D>::EncodingBitrate() const
{
    hstring value;
    check_hresult(static_cast<const ISystemAudioProperties &>(static_cast<const D &>(*this))->get_EncodingBitrate(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemGPSProperties<D>::LatitudeDecimal() const
{
    hstring value;
    check_hresult(static_cast<const ISystemGPSProperties &>(static_cast<const D &>(*this))->get_LatitudeDecimal(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemGPSProperties<D>::LongitudeDecimal() const
{
    hstring value;
    check_hresult(static_cast<const ISystemGPSProperties &>(static_cast<const D &>(*this))->get_LongitudeDecimal(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemImageProperties<D>::HorizontalSize() const
{
    hstring value;
    check_hresult(static_cast<const ISystemImageProperties &>(static_cast<const D &>(*this))->get_HorizontalSize(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemImageProperties<D>::VerticalSize() const
{
    hstring value;
    check_hresult(static_cast<const ISystemImageProperties &>(static_cast<const D &>(*this))->get_VerticalSize(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMediaProperties<D>::Duration() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMediaProperties &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMediaProperties<D>::Producer() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMediaProperties &>(static_cast<const D &>(*this))->get_Producer(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMediaProperties<D>::Publisher() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMediaProperties &>(static_cast<const D &>(*this))->get_Publisher(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMediaProperties<D>::SubTitle() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMediaProperties &>(static_cast<const D &>(*this))->get_SubTitle(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMediaProperties<D>::Writer() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMediaProperties &>(static_cast<const D &>(*this))->get_Writer(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMediaProperties<D>::Year() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMediaProperties &>(static_cast<const D &>(*this))->get_Year(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMusicProperties<D>::AlbumArtist() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMusicProperties &>(static_cast<const D &>(*this))->get_AlbumArtist(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMusicProperties<D>::AlbumTitle() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMusicProperties &>(static_cast<const D &>(*this))->get_AlbumTitle(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMusicProperties<D>::Artist() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMusicProperties &>(static_cast<const D &>(*this))->get_Artist(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMusicProperties<D>::Composer() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMusicProperties &>(static_cast<const D &>(*this))->get_Composer(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMusicProperties<D>::Conductor() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMusicProperties &>(static_cast<const D &>(*this))->get_Conductor(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMusicProperties<D>::DisplayArtist() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMusicProperties &>(static_cast<const D &>(*this))->get_DisplayArtist(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMusicProperties<D>::Genre() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMusicProperties &>(static_cast<const D &>(*this))->get_Genre(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemMusicProperties<D>::TrackNumber() const
{
    hstring value;
    check_hresult(static_cast<const ISystemMusicProperties &>(static_cast<const D &>(*this))->get_TrackNumber(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemPhotoProperties<D>::CameraManufacturer() const
{
    hstring value;
    check_hresult(static_cast<const ISystemPhotoProperties &>(static_cast<const D &>(*this))->get_CameraManufacturer(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemPhotoProperties<D>::CameraModel() const
{
    hstring value;
    check_hresult(static_cast<const ISystemPhotoProperties &>(static_cast<const D &>(*this))->get_CameraModel(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemPhotoProperties<D>::DateTaken() const
{
    hstring value;
    check_hresult(static_cast<const ISystemPhotoProperties &>(static_cast<const D &>(*this))->get_DateTaken(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemPhotoProperties<D>::Orientation() const
{
    hstring value;
    check_hresult(static_cast<const ISystemPhotoProperties &>(static_cast<const D &>(*this))->get_Orientation(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemPhotoProperties<D>::PeopleNames() const
{
    hstring value;
    check_hresult(static_cast<const ISystemPhotoProperties &>(static_cast<const D &>(*this))->get_PeopleNames(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemVideoProperties<D>::Director() const
{
    hstring value;
    check_hresult(static_cast<const ISystemVideoProperties &>(static_cast<const D &>(*this))->get_Director(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemVideoProperties<D>::FrameHeight() const
{
    hstring value;
    check_hresult(static_cast<const ISystemVideoProperties &>(static_cast<const D &>(*this))->get_FrameHeight(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemVideoProperties<D>::FrameWidth() const
{
    hstring value;
    check_hresult(static_cast<const ISystemVideoProperties &>(static_cast<const D &>(*this))->get_FrameWidth(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemVideoProperties<D>::Orientation() const
{
    hstring value;
    check_hresult(static_cast<const ISystemVideoProperties &>(static_cast<const D &>(*this))->get_Orientation(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemVideoProperties<D>::TotalBitrate() const
{
    hstring value;
    check_hresult(static_cast<const ISystemVideoProperties &>(static_cast<const D &>(*this))->get_TotalBitrate(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemProperties<D>::Author() const
{
    hstring value;
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Author(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemProperties<D>::Comment() const
{
    hstring value;
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Comment(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemProperties<D>::ItemNameDisplay() const
{
    hstring value;
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_ItemNameDisplay(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemProperties<D>::Keywords() const
{
    hstring value;
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Keywords(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemProperties<D>::Rating() const
{
    hstring value;
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Rating(put(value)));
    return value;
}

template <typename D> hstring impl_ISystemProperties<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> Windows::Storage::SystemAudioProperties impl_ISystemProperties<D>::Audio() const
{
    Windows::Storage::SystemAudioProperties value { nullptr };
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Audio(put(value)));
    return value;
}

template <typename D> Windows::Storage::SystemGPSProperties impl_ISystemProperties<D>::GPS() const
{
    Windows::Storage::SystemGPSProperties value { nullptr };
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_GPS(put(value)));
    return value;
}

template <typename D> Windows::Storage::SystemMediaProperties impl_ISystemProperties<D>::Media() const
{
    Windows::Storage::SystemMediaProperties value { nullptr };
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Media(put(value)));
    return value;
}

template <typename D> Windows::Storage::SystemMusicProperties impl_ISystemProperties<D>::Music() const
{
    Windows::Storage::SystemMusicProperties value { nullptr };
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Music(put(value)));
    return value;
}

template <typename D> Windows::Storage::SystemPhotoProperties impl_ISystemProperties<D>::Photo() const
{
    Windows::Storage::SystemPhotoProperties value { nullptr };
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Photo(put(value)));
    return value;
}

template <typename D> Windows::Storage::SystemVideoProperties impl_ISystemProperties<D>::Video() const
{
    Windows::Storage::SystemVideoProperties value { nullptr };
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Video(put(value)));
    return value;
}

template <typename D> Windows::Storage::SystemImageProperties impl_ISystemProperties<D>::Image() const
{
    Windows::Storage::SystemImageProperties value { nullptr };
    check_hresult(static_cast<const ISystemProperties &>(static_cast<const D &>(*this))->get_Image(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_IStorageStreamTransaction<D>::Stream() const
{
    Windows::Storage::Streams::IRandomAccessStream value;
    check_hresult(static_cast<const IStorageStreamTransaction &>(static_cast<const D &>(*this))->get_Stream(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IStorageStreamTransaction<D>::CommitAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IStorageStreamTransaction &>(static_cast<const D &>(*this))->abi_CommitAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Storage::ApplicationData impl_IApplicationDataStatics<D>::Current() const
{
    Windows::Storage::ApplicationData value { nullptr };
    check_hresult(static_cast<const IApplicationDataStatics &>(static_cast<const D &>(*this))->get_Current(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> impl_IApplicationDataStatics2<D>::GetForUserAsync(const Windows::System::User & user) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> getForUserOperation;
    check_hresult(static_cast<const IApplicationDataStatics2 &>(static_cast<const D &>(*this))->abi_GetForUserAsync(get(user), put(getForUserOperation)));
    return getForUserOperation;
}

template <typename D> uint32_t impl_IApplicationData<D>::Version() const
{
    uint32_t value {};
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->get_Version(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IApplicationData<D>::SetVersionAsync(uint32_t desiredVersion, const Windows::Storage::ApplicationDataSetVersionHandler & handler) const
{
    Windows::Foundation::IAsyncAction setVersionOperation;
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->abi_SetVersionAsync(desiredVersion, get(handler), put(setVersionOperation)));
    return setVersionOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IApplicationData<D>::ClearAsync() const
{
    Windows::Foundation::IAsyncAction clearOperation;
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->abi_ClearAllAsync(put(clearOperation)));
    return clearOperation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IApplicationData<D>::ClearAsync(Windows::Storage::ApplicationDataLocality locality) const
{
    Windows::Foundation::IAsyncAction clearOperation;
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->abi_ClearAsync(locality, put(clearOperation)));
    return clearOperation;
}

template <typename D> Windows::Storage::ApplicationDataContainer impl_IApplicationData<D>::LocalSettings() const
{
    Windows::Storage::ApplicationDataContainer value { nullptr };
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->get_LocalSettings(put(value)));
    return value;
}

template <typename D> Windows::Storage::ApplicationDataContainer impl_IApplicationData<D>::RoamingSettings() const
{
    Windows::Storage::ApplicationDataContainer value { nullptr };
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->get_RoamingSettings(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IApplicationData<D>::LocalFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->get_LocalFolder(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IApplicationData<D>::RoamingFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->get_RoamingFolder(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IApplicationData<D>::TemporaryFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->get_TemporaryFolder(put(value)));
    return value;
}

template <typename D> event_token impl_IApplicationData<D>::DataChanged(const Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->add_DataChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IApplicationData> impl_IApplicationData<D>::DataChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::ApplicationData, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IApplicationData>(this, &ABI::Windows::Storage::IApplicationData::remove_DataChanged, DataChanged(handler));
}

template <typename D> void impl_IApplicationData<D>::DataChanged(event_token token) const
{
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->remove_DataChanged(token));
}

template <typename D> void impl_IApplicationData<D>::SignalDataChanged() const
{
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->abi_SignalDataChanged());
}

template <typename D> uint64_t impl_IApplicationData<D>::RoamingStorageQuota() const
{
    uint64_t value {};
    check_hresult(static_cast<const IApplicationData &>(static_cast<const D &>(*this))->get_RoamingStorageQuota(&value));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IApplicationData2<D>::LocalCacheFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IApplicationData2 &>(static_cast<const D &>(*this))->get_LocalCacheFolder(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IApplicationData3<D>::GetPublisherCacheFolder(hstring_ref folderName) const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IApplicationData3 &>(static_cast<const D &>(*this))->abi_GetPublisherCacheFolder(get(folderName), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IApplicationData3<D>::ClearPublisherCacheFolderAsync(hstring_ref folderName) const
{
    Windows::Foundation::IAsyncAction clearOperation;
    check_hresult(static_cast<const IApplicationData3 &>(static_cast<const D &>(*this))->abi_ClearPublisherCacheFolderAsync(get(folderName), put(clearOperation)));
    return clearOperation;
}

template <typename D> Windows::Storage::StorageFolder impl_IApplicationData3<D>::SharedLocalFolder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IApplicationData3 &>(static_cast<const D &>(*this))->get_SharedLocalFolder(put(value)));
    return value;
}

template <typename D> uint32_t impl_ISetVersionRequest<D>::CurrentVersion() const
{
    uint32_t currentVersion {};
    check_hresult(static_cast<const ISetVersionRequest &>(static_cast<const D &>(*this))->get_CurrentVersion(&currentVersion));
    return currentVersion;
}

template <typename D> uint32_t impl_ISetVersionRequest<D>::DesiredVersion() const
{
    uint32_t desiredVersion {};
    check_hresult(static_cast<const ISetVersionRequest &>(static_cast<const D &>(*this))->get_DesiredVersion(&desiredVersion));
    return desiredVersion;
}

template <typename D> Windows::Storage::SetVersionDeferral impl_ISetVersionRequest<D>::GetDeferral() const
{
    Windows::Storage::SetVersionDeferral deferral { nullptr };
    check_hresult(static_cast<const ISetVersionRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> void impl_ISetVersionDeferral<D>::Complete() const
{
    check_hresult(static_cast<const ISetVersionDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> hstring impl_IApplicationDataContainer<D>::Name() const
{
    hstring value;
    check_hresult(static_cast<const IApplicationDataContainer &>(static_cast<const D &>(*this))->get_Name(put(value)));
    return value;
}

template <typename D> Windows::Storage::ApplicationDataLocality impl_IApplicationDataContainer<D>::Locality() const
{
    Windows::Storage::ApplicationDataLocality value {};
    check_hresult(static_cast<const IApplicationDataContainer &>(static_cast<const D &>(*this))->get_Locality(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IApplicationDataContainer<D>::Values() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(static_cast<const IApplicationDataContainer &>(static_cast<const D &>(*this))->get_Values(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::ApplicationDataContainer> impl_IApplicationDataContainer<D>::Containers() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::ApplicationDataContainer> value;
    check_hresult(static_cast<const IApplicationDataContainer &>(static_cast<const D &>(*this))->get_Containers(put(value)));
    return value;
}

template <typename D> Windows::Storage::ApplicationDataContainer impl_IApplicationDataContainer<D>::CreateContainer(hstring_ref name, Windows::Storage::ApplicationDataCreateDisposition disposition) const
{
    Windows::Storage::ApplicationDataContainer container { nullptr };
    check_hresult(static_cast<const IApplicationDataContainer &>(static_cast<const D &>(*this))->abi_CreateContainer(get(name), disposition, put(container)));
    return container;
}

template <typename D> void impl_IApplicationDataContainer<D>::DeleteContainer(hstring_ref name) const
{
    check_hresult(static_cast<const IApplicationDataContainer &>(static_cast<const D &>(*this))->abi_DeleteContainer(get(name)));
}

inline Windows::Storage::ApplicationData ApplicationData::Current()
{
    return get_activation_factory<ApplicationData, IApplicationDataStatics>().Current();
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::ApplicationData> ApplicationData::GetForUserAsync(const Windows::System::User & user)
{
    return get_activation_factory<ApplicationData, IApplicationDataStatics2>().GetForUserAsync(user);
}

inline ApplicationDataCompositeValue::ApplicationDataCompositeValue() :
    ApplicationDataCompositeValue(activate_instance<ApplicationDataCompositeValue>())
{}

inline void CachedFileManager::DeferUpdates(const Windows::Storage::IStorageFile & file)
{
    get_activation_factory<CachedFileManager, ICachedFileManagerStatics>().DeferUpdates(file);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Provider::FileUpdateStatus> CachedFileManager::CompleteUpdatesAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<CachedFileManager, ICachedFileManagerStatics>().CompleteUpdatesAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> DownloadsFolder::CreateFileAsync(hstring_ref desiredName)
{
    return get_activation_factory<DownloadsFolder, IDownloadsFolderStatics>().CreateFileAsync(desiredName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> DownloadsFolder::CreateFolderAsync(hstring_ref desiredName)
{
    return get_activation_factory<DownloadsFolder, IDownloadsFolderStatics>().CreateFolderAsync(desiredName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> DownloadsFolder::CreateFileAsync(hstring_ref desiredName, Windows::Storage::CreationCollisionOption option)
{
    return get_activation_factory<DownloadsFolder, IDownloadsFolderStatics>().CreateFileAsync(desiredName, option);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> DownloadsFolder::CreateFolderAsync(hstring_ref desiredName, Windows::Storage::CreationCollisionOption option)
{
    return get_activation_factory<DownloadsFolder, IDownloadsFolderStatics>().CreateFolderAsync(desiredName, option);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> DownloadsFolder::CreateFileForUserAsync(const Windows::System::User & user, hstring_ref desiredName)
{
    return get_activation_factory<DownloadsFolder, IDownloadsFolderStatics2>().CreateFileForUserAsync(user, desiredName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> DownloadsFolder::CreateFolderForUserAsync(const Windows::System::User & user, hstring_ref desiredName)
{
    return get_activation_factory<DownloadsFolder, IDownloadsFolderStatics2>().CreateFolderForUserAsync(user, desiredName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> DownloadsFolder::CreateFileForUserAsync(const Windows::System::User & user, hstring_ref desiredName, Windows::Storage::CreationCollisionOption option)
{
    return get_activation_factory<DownloadsFolder, IDownloadsFolderStatics2>().CreateFileForUserAsync(user, desiredName, option);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> DownloadsFolder::CreateFolderForUserAsync(const Windows::System::User & user, hstring_ref desiredName, Windows::Storage::CreationCollisionOption option)
{
    return get_activation_factory<DownloadsFolder, IDownloadsFolderStatics2>().CreateFolderForUserAsync(user, desiredName, option);
}

inline Windows::Foundation::IAsyncOperation<hstring> FileIO::ReadTextAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<FileIO, IFileIOStatics>().ReadTextAsync(file);
}

inline Windows::Foundation::IAsyncOperation<hstring> FileIO::ReadTextAsync(const Windows::Storage::IStorageFile & file, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<FileIO, IFileIOStatics>().ReadTextAsync(file, encoding);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteTextAsync(const Windows::Storage::IStorageFile & file, hstring_ref contents)
{
    return get_activation_factory<FileIO, IFileIOStatics>().WriteTextAsync(file, contents);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteTextAsync(const Windows::Storage::IStorageFile & file, hstring_ref contents, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<FileIO, IFileIOStatics>().WriteTextAsync(file, contents, encoding);
}

inline Windows::Foundation::IAsyncAction FileIO::AppendTextAsync(const Windows::Storage::IStorageFile & file, hstring_ref contents)
{
    return get_activation_factory<FileIO, IFileIOStatics>().AppendTextAsync(file, contents);
}

inline Windows::Foundation::IAsyncAction FileIO::AppendTextAsync(const Windows::Storage::IStorageFile & file, hstring_ref contents, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<FileIO, IFileIOStatics>().AppendTextAsync(file, contents, encoding);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> FileIO::ReadLinesAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<FileIO, IFileIOStatics>().ReadLinesAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> FileIO::ReadLinesAsync(const Windows::Storage::IStorageFile & file, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<FileIO, IFileIOStatics>().ReadLinesAsync(file, encoding);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteLinesAsync(const Windows::Storage::IStorageFile & file, const Windows::Foundation::Collections::IIterable<hstring> & lines)
{
    return get_activation_factory<FileIO, IFileIOStatics>().WriteLinesAsync(file, lines);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteLinesAsync(const Windows::Storage::IStorageFile & file, const Windows::Foundation::Collections::IIterable<hstring> & lines, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<FileIO, IFileIOStatics>().WriteLinesAsync(file, lines, encoding);
}

inline Windows::Foundation::IAsyncAction FileIO::AppendLinesAsync(const Windows::Storage::IStorageFile & file, const Windows::Foundation::Collections::IIterable<hstring> & lines)
{
    return get_activation_factory<FileIO, IFileIOStatics>().AppendLinesAsync(file, lines);
}

inline Windows::Foundation::IAsyncAction FileIO::AppendLinesAsync(const Windows::Storage::IStorageFile & file, const Windows::Foundation::Collections::IIterable<hstring> & lines, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<FileIO, IFileIOStatics>().AppendLinesAsync(file, lines, encoding);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> FileIO::ReadBufferAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<FileIO, IFileIOStatics>().ReadBufferAsync(file);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteBufferAsync(const Windows::Storage::IStorageFile & file, const Windows::Storage::Streams::IBuffer & buffer)
{
    return get_activation_factory<FileIO, IFileIOStatics>().WriteBufferAsync(file, buffer);
}

inline Windows::Foundation::IAsyncAction FileIO::WriteBytesAsync(const Windows::Storage::IStorageFile & file, array_ref<const uint8_t> buffer)
{
    return get_activation_factory<FileIO, IFileIOStatics>().WriteBytesAsync(file, buffer);
}

inline Windows::Storage::StorageFolder KnownFolders::CameraRoll()
{
    return get_activation_factory<KnownFolders, IKnownFoldersCameraRollStatics>().CameraRoll();
}

inline Windows::Storage::StorageFolder KnownFolders::Playlists()
{
    return get_activation_factory<KnownFolders, IKnownFoldersPlaylistsStatics>().Playlists();
}

inline Windows::Storage::StorageFolder KnownFolders::SavedPictures()
{
    return get_activation_factory<KnownFolders, IKnownFoldersSavedPicturesStatics>().SavedPictures();
}

inline Windows::Storage::StorageFolder KnownFolders::MusicLibrary()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics>().MusicLibrary();
}

inline Windows::Storage::StorageFolder KnownFolders::PicturesLibrary()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics>().PicturesLibrary();
}

inline Windows::Storage::StorageFolder KnownFolders::VideosLibrary()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics>().VideosLibrary();
}

inline Windows::Storage::StorageFolder KnownFolders::DocumentsLibrary()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics>().DocumentsLibrary();
}

inline Windows::Storage::StorageFolder KnownFolders::HomeGroup()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics>().HomeGroup();
}

inline Windows::Storage::StorageFolder KnownFolders::RemovableDevices()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics>().RemovableDevices();
}

inline Windows::Storage::StorageFolder KnownFolders::MediaServerDevices()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics>().MediaServerDevices();
}

inline Windows::Storage::StorageFolder KnownFolders::Objects3D()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics2>().Objects3D();
}

inline Windows::Storage::StorageFolder KnownFolders::AppCaptures()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics2>().AppCaptures();
}

inline Windows::Storage::StorageFolder KnownFolders::RecordedCalls()
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics2>().RecordedCalls();
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> KnownFolders::GetFolderForUserAsync(const Windows::System::User & user, Windows::Storage::KnownFolderId folderId)
{
    return get_activation_factory<KnownFolders, IKnownFoldersStatics3>().GetFolderForUserAsync(user, folderId);
}

inline Windows::Foundation::IAsyncOperation<hstring> PathIO::ReadTextAsync(hstring_ref absolutePath)
{
    return get_activation_factory<PathIO, IPathIOStatics>().ReadTextAsync(absolutePath);
}

inline Windows::Foundation::IAsyncOperation<hstring> PathIO::ReadTextAsync(hstring_ref absolutePath, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<PathIO, IPathIOStatics>().ReadTextAsync(absolutePath, encoding);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteTextAsync(hstring_ref absolutePath, hstring_ref contents)
{
    return get_activation_factory<PathIO, IPathIOStatics>().WriteTextAsync(absolutePath, contents);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteTextAsync(hstring_ref absolutePath, hstring_ref contents, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<PathIO, IPathIOStatics>().WriteTextAsync(absolutePath, contents, encoding);
}

inline Windows::Foundation::IAsyncAction PathIO::AppendTextAsync(hstring_ref absolutePath, hstring_ref contents)
{
    return get_activation_factory<PathIO, IPathIOStatics>().AppendTextAsync(absolutePath, contents);
}

inline Windows::Foundation::IAsyncAction PathIO::AppendTextAsync(hstring_ref absolutePath, hstring_ref contents, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<PathIO, IPathIOStatics>().AppendTextAsync(absolutePath, contents, encoding);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> PathIO::ReadLinesAsync(hstring_ref absolutePath)
{
    return get_activation_factory<PathIO, IPathIOStatics>().ReadLinesAsync(absolutePath);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<hstring>> PathIO::ReadLinesAsync(hstring_ref absolutePath, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<PathIO, IPathIOStatics>().ReadLinesAsync(absolutePath, encoding);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteLinesAsync(hstring_ref absolutePath, const Windows::Foundation::Collections::IIterable<hstring> & lines)
{
    return get_activation_factory<PathIO, IPathIOStatics>().WriteLinesAsync(absolutePath, lines);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteLinesAsync(hstring_ref absolutePath, const Windows::Foundation::Collections::IIterable<hstring> & lines, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<PathIO, IPathIOStatics>().WriteLinesAsync(absolutePath, lines, encoding);
}

inline Windows::Foundation::IAsyncAction PathIO::AppendLinesAsync(hstring_ref absolutePath, const Windows::Foundation::Collections::IIterable<hstring> & lines)
{
    return get_activation_factory<PathIO, IPathIOStatics>().AppendLinesAsync(absolutePath, lines);
}

inline Windows::Foundation::IAsyncAction PathIO::AppendLinesAsync(hstring_ref absolutePath, const Windows::Foundation::Collections::IIterable<hstring> & lines, Windows::Storage::Streams::UnicodeEncoding encoding)
{
    return get_activation_factory<PathIO, IPathIOStatics>().AppendLinesAsync(absolutePath, lines, encoding);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> PathIO::ReadBufferAsync(hstring_ref absolutePath)
{
    return get_activation_factory<PathIO, IPathIOStatics>().ReadBufferAsync(absolutePath);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteBufferAsync(hstring_ref absolutePath, const Windows::Storage::Streams::IBuffer & buffer)
{
    return get_activation_factory<PathIO, IPathIOStatics>().WriteBufferAsync(absolutePath, buffer);
}

inline Windows::Foundation::IAsyncAction PathIO::WriteBytesAsync(hstring_ref absolutePath, array_ref<const uint8_t> buffer)
{
    return get_activation_factory<PathIO, IPathIOStatics>().WriteBytesAsync(absolutePath, buffer);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::GetFileFromPathAsync(hstring_ref path)
{
    return get_activation_factory<StorageFile, IStorageFileStatics>().GetFileFromPathAsync(path);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::GetFileFromApplicationUriAsync(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<StorageFile, IStorageFileStatics>().GetFileFromApplicationUriAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::CreateStreamedFileAsync(hstring_ref displayNameWithExtension, const Windows::Storage::StreamedFileDataRequestedHandler & dataRequested, const Windows::Storage::Streams::IRandomAccessStreamReference & thumbnail)
{
    return get_activation_factory<StorageFile, IStorageFileStatics>().CreateStreamedFileAsync(displayNameWithExtension, dataRequested, thumbnail);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::ReplaceWithStreamedFileAsync(const Windows::Storage::IStorageFile & fileToReplace, const Windows::Storage::StreamedFileDataRequestedHandler & dataRequested, const Windows::Storage::Streams::IRandomAccessStreamReference & thumbnail)
{
    return get_activation_factory<StorageFile, IStorageFileStatics>().ReplaceWithStreamedFileAsync(fileToReplace, dataRequested, thumbnail);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::CreateStreamedFileFromUriAsync(hstring_ref displayNameWithExtension, const Windows::Foundation::Uri & uri, const Windows::Storage::Streams::IRandomAccessStreamReference & thumbnail)
{
    return get_activation_factory<StorageFile, IStorageFileStatics>().CreateStreamedFileFromUriAsync(displayNameWithExtension, uri, thumbnail);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> StorageFile::ReplaceWithStreamedFileFromUriAsync(const Windows::Storage::IStorageFile & fileToReplace, const Windows::Foundation::Uri & uri, const Windows::Storage::Streams::IRandomAccessStreamReference & thumbnail)
{
    return get_activation_factory<StorageFile, IStorageFileStatics>().ReplaceWithStreamedFileFromUriAsync(fileToReplace, uri, thumbnail);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> StorageFolder::GetFolderFromPathAsync(hstring_ref path)
{
    return get_activation_factory<StorageFolder, IStorageFolderStatics>().GetFolderFromPathAsync(path);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> StorageLibrary::GetLibraryAsync(Windows::Storage::KnownLibraryId libraryId)
{
    return get_activation_factory<StorageLibrary, IStorageLibraryStatics>().GetLibraryAsync(libraryId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageLibrary> StorageLibrary::GetLibraryForUserAsync(const Windows::System::User & user, Windows::Storage::KnownLibraryId libraryId)
{
    return get_activation_factory<StorageLibrary, IStorageLibraryStatics2>().GetLibraryForUserAsync(user, libraryId);
}

inline hstring SystemProperties::Author()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Author();
}

inline hstring SystemProperties::Comment()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Comment();
}

inline hstring SystemProperties::ItemNameDisplay()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().ItemNameDisplay();
}

inline hstring SystemProperties::Keywords()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Keywords();
}

inline hstring SystemProperties::Rating()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Rating();
}

inline hstring SystemProperties::Title()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Title();
}

inline Windows::Storage::SystemAudioProperties SystemProperties::Audio()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Audio();
}

inline Windows::Storage::SystemGPSProperties SystemProperties::GPS()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().GPS();
}

inline Windows::Storage::SystemMediaProperties SystemProperties::Media()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Media();
}

inline Windows::Storage::SystemMusicProperties SystemProperties::Music()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Music();
}

inline Windows::Storage::SystemPhotoProperties SystemProperties::Photo()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Photo();
}

inline Windows::Storage::SystemVideoProperties SystemProperties::Video()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Video();
}

inline Windows::Storage::SystemImageProperties SystemProperties::Image()
{
    return get_activation_factory<SystemProperties, ISystemProperties>().Image();
}

}

}
