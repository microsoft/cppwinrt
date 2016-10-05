// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Networking.3.h"
#include "internal/Windows.Security.EnterpriseData.3.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IBufferProtectUnprotectResult> : produce_base<D, Windows::Security::EnterpriseData::IBufferProtectUnprotectResult>
{
    HRESULT __stdcall get_Buffer(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Buffer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionInfo(abi_arg_out<Windows::Security::EnterpriseData::IDataProtectionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectionInfo());
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
struct produce<D, Windows::Security::EnterpriseData::IDataProtectionInfo> : produce_base<D, Windows::Security::EnterpriseData::IDataProtectionInfo>
{
    HRESULT __stdcall get_Status(Windows::Security::EnterpriseData::DataProtectionStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Identity(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Identity());
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
struct produce<D, Windows::Security::EnterpriseData::IDataProtectionManagerStatics> : produce_base<D, Windows::Security::EnterpriseData::IDataProtectionManagerStatics>
{
    HRESULT __stdcall abi_ProtectAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_in<hstring> identity, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ProtectAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const hstring *>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprotectAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> data, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnprotectAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ProtectStreamAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> unprotectedStream, abi_arg_in<hstring> identity, abi_arg_in<Windows::Storage::Streams::IOutputStream> protectedStream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ProtectStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&unprotectedStream), *reinterpret_cast<const hstring *>(&identity), *reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&protectedStream)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprotectStreamAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> protectedStream, abi_arg_in<Windows::Storage::Streams::IOutputStream> unprotectedStream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnprotectStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&protectedStream), *reinterpret_cast<const Windows::Storage::Streams::IOutputStream *>(&unprotectedStream)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProtectionInfoAsync(abi_arg_in<Windows::Storage::Streams::IBuffer> protectedData, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetProtectionInfoAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&protectedData)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStreamProtectionInfoAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> protectedStream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetStreamProtectionInfoAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&protectedStream)));
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
struct produce<D, Windows::Security::EnterpriseData::IFileProtectionInfo> : produce_base<D, Windows::Security::EnterpriseData::IFileProtectionInfo>
{
    HRESULT __stdcall get_Status(Windows::Security::EnterpriseData::FileProtectionStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRoamable(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRoamable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Identity(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Identity());
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
struct produce<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics> : produce_base<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics>
{
    HRESULT __stdcall abi_ProtectAsync(abi_arg_in<Windows::Storage::IStorageItem> target, abi_arg_in<hstring> identity, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ProtectAsync(*reinterpret_cast<const Windows::Storage::IStorageItem *>(&target), *reinterpret_cast<const hstring *>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyProtectionAsync(abi_arg_in<Windows::Storage::IStorageItem> source, abi_arg_in<Windows::Storage::IStorageItem> target, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CopyProtectionAsync(*reinterpret_cast<const Windows::Storage::IStorageItem *>(&source), *reinterpret_cast<const Windows::Storage::IStorageItem *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetProtectionInfoAsync(abi_arg_in<Windows::Storage::IStorageItem> source, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetProtectionInfoAsync(*reinterpret_cast<const Windows::Storage::IStorageItem *>(&source)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveFileAsContainerAsync(abi_arg_in<Windows::Storage::IStorageFile> protectedFile, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveFileAsContainerAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&protectedFile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFileFromContainerAsync(abi_arg_in<Windows::Storage::IStorageFile> containerFile, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&containerFile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFileFromContainerWithTargetAsync(abi_arg_in<Windows::Storage::IStorageFile> containerFile, abi_arg_in<Windows::Storage::IStorageItem> target, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&containerFile), *reinterpret_cast<const Windows::Storage::IStorageItem *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateProtectedAndOpenAsync(abi_arg_in<Windows::Storage::IStorageFolder> parentFolder, abi_arg_in<hstring> desiredName, abi_arg_in<hstring> identity, Windows::Storage::CreationCollisionOption collisionOption, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateProtectedAndOpenAsync(*reinterpret_cast<const Windows::Storage::IStorageFolder *>(&parentFolder), *reinterpret_cast<const hstring *>(&desiredName), *reinterpret_cast<const hstring *>(&identity), collisionOption));
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
struct produce<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics2> : produce_base<D, Windows::Security::EnterpriseData::IFileProtectionManagerStatics2>
{
    HRESULT __stdcall abi_IsContainerAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsContainerAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(abi_arg_in<Windows::Storage::IStorageFile> containerFile, abi_arg_in<Windows::Storage::IStorageItem> target, Windows::Storage::NameCollisionOption collisionOption, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().LoadFileFromContainerAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&containerFile), *reinterpret_cast<const Windows::Storage::IStorageItem *>(&target), collisionOption));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveFileAsContainerWithSharingAsync(abi_arg_in<Windows::Storage::IStorageFile> protectedFile, abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> sharedWithIdentities, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveFileAsContainerAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&protectedFile), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&sharedWithIdentities)));
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
struct produce<D, Windows::Security::EnterpriseData::IFileRevocationManagerStatics> : produce_base<D, Windows::Security::EnterpriseData::IFileRevocationManagerStatics>
{
    HRESULT __stdcall abi_ProtectAsync(abi_arg_in<Windows::Storage::IStorageItem> storageItem, abi_arg_in<hstring> enterpriseIdentity, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ProtectAsync(*reinterpret_cast<const Windows::Storage::IStorageItem *>(&storageItem), *reinterpret_cast<const hstring *>(&enterpriseIdentity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CopyProtectionAsync(abi_arg_in<Windows::Storage::IStorageItem> sourceStorageItem, abi_arg_in<Windows::Storage::IStorageItem> targetStorageItem, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CopyProtectionAsync(*reinterpret_cast<const Windows::Storage::IStorageItem *>(&sourceStorageItem), *reinterpret_cast<const Windows::Storage::IStorageItem *>(&targetStorageItem)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Revoke(abi_arg_in<hstring> enterpriseIdentity) noexcept override
    {
        try
        {
            this->shim().Revoke(*reinterpret_cast<const hstring *>(&enterpriseIdentity));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStatusAsync(abi_arg_in<Windows::Storage::IStorageItem> storageItem, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetStatusAsync(*reinterpret_cast<const Windows::Storage::IStorageItem *>(&storageItem)));
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs> : produce_base<D, Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs>
{
    HRESULT __stdcall get_Identities(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Identities());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs> : produce_base<D, Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs>
{
    HRESULT __stdcall get_Identities(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Identities());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedContainerExportResult> : produce_base<D, Windows::Security::EnterpriseData::IProtectedContainerExportResult>
{
    HRESULT __stdcall get_Status(Windows::Security::EnterpriseData::ProtectedImportExportStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_File(abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().File());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedContainerImportResult> : produce_base<D, Windows::Security::EnterpriseData::IProtectedContainerImportResult>
{
    HRESULT __stdcall get_Status(Windows::Security::EnterpriseData::ProtectedImportExportStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_File(abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().File());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs> : produce_base<D, Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs>
{
    HRESULT __stdcall get_Identities(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Identities());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectedFileCreateResult> : produce_base<D, Windows::Security::EnterpriseData::IProtectedFileCreateResult>
{
    HRESULT __stdcall get_File(abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall get_ProtectionInfo(abi_arg_out<Windows::Security::EnterpriseData::IFileProtectionInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtectionInfo());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo>
{
    HRESULT __stdcall put_Action(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction value) noexcept override
    {
        try
        {
            this->shim().Action(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Action(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Action());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataDescription(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DataDescription(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataDescription(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SourceDescription(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SourceDescription(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDescription(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceDescription());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetDescription(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TargetDescription(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TargetDescription(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetDescription());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory>
{
    HRESULT __stdcall abi_Create(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, abi_arg_in<hstring> dataDescription, abi_arg_in<hstring> sourceDescription, abi_arg_in<hstring> targetDescription, abi_arg_out<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().Create(action, *reinterpret_cast<const hstring *>(&dataDescription), *reinterpret_cast<const hstring *>(&sourceDescription), *reinterpret_cast<const hstring *>(&targetDescription)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithActionAndDataDescription(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, abi_arg_in<hstring> dataDescription, abi_arg_out<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithActionAndDataDescription(action, *reinterpret_cast<const hstring *>(&dataDescription)));
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
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManager> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManager>
{
    HRESULT __stdcall put_Identity(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Identity(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Identity(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Identity());
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
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManager2> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManager2>
{
    HRESULT __stdcall put_ShowEnterpriseIndicator(bool value) noexcept override
    {
        try
        {
            this->shim().ShowEnterpriseIndicator(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowEnterpriseIndicator(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowEnterpriseIndicator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics>
{
    HRESULT __stdcall abi_IsIdentityManaged(abi_arg_in<hstring> identity, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsIdentityManaged(*reinterpret_cast<const hstring *>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryApplyProcessUIPolicy(abi_arg_in<hstring> identity, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryApplyProcessUIPolicy(*reinterpret_cast<const hstring *>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearProcessUIPolicy() noexcept override
    {
        try
        {
            this->shim().ClearProcessUIPolicy();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateCurrentThreadNetworkContext(abi_arg_in<hstring> identity, abi_arg_out<Windows::Security::EnterpriseData::IThreadNetworkContext> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateCurrentThreadNetworkContext(*reinterpret_cast<const hstring *>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPrimaryManagedIdentityForNetworkEndpointAsync(abi_arg_in<Windows::Networking::IHostName> endpointHost, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetPrimaryManagedIdentityForNetworkEndpointAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&endpointHost)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RevokeContent(abi_arg_in<hstring> identity) noexcept override
    {
        try
        {
            this->shim().RevokeContent(*reinterpret_cast<const hstring *>(&identity));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::Security::EnterpriseData::IProtectionPolicyManager> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProtectedAccessSuspending(abi_arg_in<Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ProtectedAccessSuspending(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProtectedAccessSuspending(event_token token) noexcept override
    {
        try
        {
            this->shim().ProtectedAccessSuspending(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProtectedAccessResumed(abi_arg_in<Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ProtectedAccessResumed(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProtectedAccessResumed(event_token token) noexcept override
    {
        try
        {
            this->shim().ProtectedAccessResumed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ProtectedContentRevoked(abi_arg_in<Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ProtectedContentRevoked(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ProtectedContentRevoked(event_token token) noexcept override
    {
        try
        {
            this->shim().ProtectedContentRevoked(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CheckAccess(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> targetIdentity, Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CheckAccess(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&targetIdentity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> targetIdentity, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessAsync(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&targetIdentity)));
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
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2>
{
    HRESULT __stdcall abi_HasContentBeenRevokedSince(abi_arg_in<hstring> identity, abi_arg_in<Windows::Foundation::DateTime> since, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().HasContentBeenRevokedSince(*reinterpret_cast<const hstring *>(&identity), *reinterpret_cast<const Windows::Foundation::DateTime *>(&since)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CheckAccessForApp(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> appPackageFamilyName, Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CheckAccessForApp(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&appPackageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessForAppAsync(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> appPackageFamilyName, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessForAppAsync(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&appPackageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetEnforcementLevel(abi_arg_in<hstring> identity, Windows::Security::EnterpriseData::EnforcementLevel * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetEnforcementLevel(*reinterpret_cast<const hstring *>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsUserDecryptionAllowed(abi_arg_in<hstring> identity, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsUserDecryptionAllowed(*reinterpret_cast<const hstring *>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsProtectionUnderLockRequired(abi_arg_in<hstring> identity, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsProtectionUnderLockRequired(*reinterpret_cast<const hstring *>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PolicyChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PolicyChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PolicyChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PolicyChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsProtectionEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsProtectionEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3> : produce_base<D, Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3>
{
    HRESULT __stdcall abi_RequestAccessWithAuditingInfoAsync(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> targetIdentity, abi_arg_in<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> auditInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessAsync(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&targetIdentity), *reinterpret_cast<const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo *>(&auditInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessWithMessageAsync(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> targetIdentity, abi_arg_in<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> auditInfo, abi_arg_in<hstring> messageFromApp, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessAsync(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&targetIdentity), *reinterpret_cast<const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo *>(&auditInfo), *reinterpret_cast<const hstring *>(&messageFromApp)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessForAppWithAuditingInfoAsync(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> appPackageFamilyName, abi_arg_in<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> auditInfo, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessForAppAsync(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&appPackageFamilyName), *reinterpret_cast<const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo *>(&auditInfo)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessForAppWithMessageAsync(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> appPackageFamilyName, abi_arg_in<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> auditInfo, abi_arg_in<hstring> messageFromApp, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessForAppAsync(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&appPackageFamilyName), *reinterpret_cast<const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo *>(&auditInfo), *reinterpret_cast<const hstring *>(&messageFromApp)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_LogAuditEvent(abi_arg_in<hstring> sourceIdentity, abi_arg_in<hstring> targetIdentity, abi_arg_in<Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo> auditInfo) noexcept override
    {
        try
        {
            this->shim().LogAuditEvent(*reinterpret_cast<const hstring *>(&sourceIdentity), *reinterpret_cast<const hstring *>(&targetIdentity), *reinterpret_cast<const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo *>(&auditInfo));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::EnterpriseData::IThreadNetworkContext> : produce_base<D, Windows::Security::EnterpriseData::IThreadNetworkContext>
{};

}

namespace Windows::Security::EnterpriseData {

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> impl_IFileRevocationManagerStatics<D>::ProtectAsync(const Windows::Storage::IStorageItem & storageItem, hstring_ref enterpriseIdentity) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> result;
    check_hresult(static_cast<const IFileRevocationManagerStatics &>(static_cast<const D &>(*this))->abi_ProtectAsync(get(storageItem), get(enterpriseIdentity), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IFileRevocationManagerStatics<D>::CopyProtectionAsync(const Windows::Storage::IStorageItem & sourceStorageItem, const Windows::Storage::IStorageItem & targetStorageItem) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IFileRevocationManagerStatics &>(static_cast<const D &>(*this))->abi_CopyProtectionAsync(get(sourceStorageItem), get(targetStorageItem), put(result)));
    return result;
}

template <typename D> void impl_IFileRevocationManagerStatics<D>::Revoke(hstring_ref enterpriseIdentity) const
{
    check_hresult(static_cast<const IFileRevocationManagerStatics &>(static_cast<const D &>(*this))->abi_Revoke(get(enterpriseIdentity)));
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> impl_IFileRevocationManagerStatics<D>::GetStatusAsync(const Windows::Storage::IStorageItem & storageItem) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> result;
    check_hresult(static_cast<const IFileRevocationManagerStatics &>(static_cast<const D &>(*this))->abi_GetStatusAsync(get(storageItem), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> impl_IFileProtectionManagerStatics<D>::ProtectAsync(const Windows::Storage::IStorageItem & target, hstring_ref identity) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_ProtectAsync(get(target), get(identity), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IFileProtectionManagerStatics<D>::CopyProtectionAsync(const Windows::Storage::IStorageItem & source, const Windows::Storage::IStorageItem & target) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_CopyProtectionAsync(get(source), get(target), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> impl_IFileProtectionManagerStatics<D>::GetProtectionInfoAsync(const Windows::Storage::IStorageItem & source) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_GetProtectionInfoAsync(get(source), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> impl_IFileProtectionManagerStatics<D>::SaveFileAsContainerAsync(const Windows::Storage::IStorageFile & protectedFile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_SaveFileAsContainerAsync(get(protectedFile), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> impl_IFileProtectionManagerStatics<D>::LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_LoadFileFromContainerAsync(get(containerFile), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> impl_IFileProtectionManagerStatics<D>::LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile, const Windows::Storage::IStorageItem & target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_LoadFileFromContainerWithTargetAsync(get(containerFile), get(target), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> impl_IFileProtectionManagerStatics<D>::CreateProtectedAndOpenAsync(const Windows::Storage::IStorageFolder & parentFolder, hstring_ref desiredName, hstring_ref identity, Windows::Storage::CreationCollisionOption collisionOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_CreateProtectedAndOpenAsync(get(parentFolder), get(desiredName), get(identity), collisionOption, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IFileProtectionManagerStatics2<D>::IsContainerAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics2 &>(static_cast<const D &>(*this))->abi_IsContainerAsync(get(file), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> impl_IFileProtectionManagerStatics2<D>::LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile, const Windows::Storage::IStorageItem & target, Windows::Storage::NameCollisionOption collisionOption) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics2 &>(static_cast<const D &>(*this))->abi_LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(get(containerFile), get(target), collisionOption, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> impl_IFileProtectionManagerStatics2<D>::SaveFileAsContainerAsync(const Windows::Storage::IStorageFile & protectedFile, const Windows::Foundation::Collections::IIterable<hstring> & sharedWithIdentities) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> result;
    check_hresult(static_cast<const IFileProtectionManagerStatics2 &>(static_cast<const D &>(*this))->abi_SaveFileAsContainerWithSharingAsync(get(protectedFile), get(sharedWithIdentities), put(result)));
    return result;
}

template <typename D> Windows::Storage::StorageFile impl_IProtectedFileCreateResult<D>::File() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(static_cast<const IProtectedFileCreateResult &>(static_cast<const D &>(*this))->get_File(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream impl_IProtectedFileCreateResult<D>::Stream() const
{
    Windows::Storage::Streams::IRandomAccessStream value;
    check_hresult(static_cast<const IProtectedFileCreateResult &>(static_cast<const D &>(*this))->get_Stream(put(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::FileProtectionInfo impl_IProtectedFileCreateResult<D>::ProtectionInfo() const
{
    Windows::Security::EnterpriseData::FileProtectionInfo value { nullptr };
    check_hresult(static_cast<const IProtectedFileCreateResult &>(static_cast<const D &>(*this))->get_ProtectionInfo(put(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::FileProtectionStatus impl_IFileProtectionInfo<D>::Status() const
{
    Windows::Security::EnterpriseData::FileProtectionStatus value {};
    check_hresult(static_cast<const IFileProtectionInfo &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> bool impl_IFileProtectionInfo<D>::IsRoamable() const
{
    bool value {};
    check_hresult(static_cast<const IFileProtectionInfo &>(static_cast<const D &>(*this))->get_IsRoamable(&value));
    return value;
}

template <typename D> hstring impl_IFileProtectionInfo<D>::Identity() const
{
    hstring value;
    check_hresult(static_cast<const IFileProtectionInfo &>(static_cast<const D &>(*this))->get_Identity(put(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::ProtectedImportExportStatus impl_IProtectedContainerExportResult<D>::Status() const
{
    Windows::Security::EnterpriseData::ProtectedImportExportStatus value {};
    check_hresult(static_cast<const IProtectedContainerExportResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Storage::StorageFile impl_IProtectedContainerExportResult<D>::File() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(static_cast<const IProtectedContainerExportResult &>(static_cast<const D &>(*this))->get_File(put(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::ProtectedImportExportStatus impl_IProtectedContainerImportResult<D>::Status() const
{
    Windows::Security::EnterpriseData::ProtectedImportExportStatus value {};
    check_hresult(static_cast<const IProtectedContainerImportResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Storage::StorageFile impl_IProtectedContainerImportResult<D>::File() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(static_cast<const IProtectedContainerImportResult &>(static_cast<const D &>(*this))->get_File(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> impl_IDataProtectionManagerStatics<D>::ProtectAsync(const Windows::Storage::Streams::IBuffer & data, hstring_ref identity) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> result;
    check_hresult(static_cast<const IDataProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_ProtectAsync(get(data), get(identity), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> impl_IDataProtectionManagerStatics<D>::UnprotectAsync(const Windows::Storage::Streams::IBuffer & data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> result;
    check_hresult(static_cast<const IDataProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_UnprotectAsync(get(data), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> impl_IDataProtectionManagerStatics<D>::ProtectStreamAsync(const Windows::Storage::Streams::IInputStream & unprotectedStream, hstring_ref identity, const Windows::Storage::Streams::IOutputStream & protectedStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> result;
    check_hresult(static_cast<const IDataProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_ProtectStreamAsync(get(unprotectedStream), get(identity), get(protectedStream), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> impl_IDataProtectionManagerStatics<D>::UnprotectStreamAsync(const Windows::Storage::Streams::IInputStream & protectedStream, const Windows::Storage::Streams::IOutputStream & unprotectedStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> result;
    check_hresult(static_cast<const IDataProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_UnprotectStreamAsync(get(protectedStream), get(unprotectedStream), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> impl_IDataProtectionManagerStatics<D>::GetProtectionInfoAsync(const Windows::Storage::Streams::IBuffer & protectedData) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> result;
    check_hresult(static_cast<const IDataProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_GetProtectionInfoAsync(get(protectedData), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> impl_IDataProtectionManagerStatics<D>::GetStreamProtectionInfoAsync(const Windows::Storage::Streams::IInputStream & protectedStream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> result;
    check_hresult(static_cast<const IDataProtectionManagerStatics &>(static_cast<const D &>(*this))->abi_GetStreamProtectionInfoAsync(get(protectedStream), put(result)));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::DataProtectionStatus impl_IDataProtectionInfo<D>::Status() const
{
    Windows::Security::EnterpriseData::DataProtectionStatus value {};
    check_hresult(static_cast<const IDataProtectionInfo &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> hstring impl_IDataProtectionInfo<D>::Identity() const
{
    hstring value;
    check_hresult(static_cast<const IDataProtectionInfo &>(static_cast<const D &>(*this))->get_Identity(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IBufferProtectUnprotectResult<D>::Buffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IBufferProtectUnprotectResult &>(static_cast<const D &>(*this))->get_Buffer(put(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::DataProtectionInfo impl_IBufferProtectUnprotectResult<D>::ProtectionInfo() const
{
    Windows::Security::EnterpriseData::DataProtectionInfo value { nullptr };
    check_hresult(static_cast<const IBufferProtectUnprotectResult &>(static_cast<const D &>(*this))->get_ProtectionInfo(put(value)));
    return value;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo impl_IProtectionPolicyAuditInfoFactory<D>::Create(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, hstring_ref dataDescription, hstring_ref sourceDescription, hstring_ref targetDescription) const
{
    Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo result { nullptr };
    check_hresult(static_cast<const IProtectionPolicyAuditInfoFactory &>(static_cast<const D &>(*this))->abi_Create(action, get(dataDescription), get(sourceDescription), get(targetDescription), put(result)));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo impl_IProtectionPolicyAuditInfoFactory<D>::CreateWithActionAndDataDescription(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, hstring_ref dataDescription) const
{
    Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo result { nullptr };
    check_hresult(static_cast<const IProtectionPolicyAuditInfoFactory &>(static_cast<const D &>(*this))->abi_CreateWithActionAndDataDescription(action, get(dataDescription), put(result)));
    return result;
}

template <typename D> void impl_IProtectionPolicyAuditInfo<D>::Action(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction value) const
{
    check_hresult(static_cast<const IProtectionPolicyAuditInfo &>(static_cast<const D &>(*this))->put_Action(value));
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyAuditAction impl_IProtectionPolicyAuditInfo<D>::Action() const
{
    Windows::Security::EnterpriseData::ProtectionPolicyAuditAction value {};
    check_hresult(static_cast<const IProtectionPolicyAuditInfo &>(static_cast<const D &>(*this))->get_Action(&value));
    return value;
}

template <typename D> void impl_IProtectionPolicyAuditInfo<D>::DataDescription(hstring_ref value) const
{
    check_hresult(static_cast<const IProtectionPolicyAuditInfo &>(static_cast<const D &>(*this))->put_DataDescription(get(value)));
}

template <typename D> hstring impl_IProtectionPolicyAuditInfo<D>::DataDescription() const
{
    hstring value;
    check_hresult(static_cast<const IProtectionPolicyAuditInfo &>(static_cast<const D &>(*this))->get_DataDescription(put(value)));
    return value;
}

template <typename D> void impl_IProtectionPolicyAuditInfo<D>::SourceDescription(hstring_ref value) const
{
    check_hresult(static_cast<const IProtectionPolicyAuditInfo &>(static_cast<const D &>(*this))->put_SourceDescription(get(value)));
}

template <typename D> hstring impl_IProtectionPolicyAuditInfo<D>::SourceDescription() const
{
    hstring value;
    check_hresult(static_cast<const IProtectionPolicyAuditInfo &>(static_cast<const D &>(*this))->get_SourceDescription(put(value)));
    return value;
}

template <typename D> void impl_IProtectionPolicyAuditInfo<D>::TargetDescription(hstring_ref value) const
{
    check_hresult(static_cast<const IProtectionPolicyAuditInfo &>(static_cast<const D &>(*this))->put_TargetDescription(get(value)));
}

template <typename D> hstring impl_IProtectionPolicyAuditInfo<D>::TargetDescription() const
{
    hstring value;
    check_hresult(static_cast<const IProtectionPolicyAuditInfo &>(static_cast<const D &>(*this))->get_TargetDescription(put(value)));
    return value;
}

template <typename D> void impl_IProtectionPolicyManager<D>::Identity(hstring_ref value) const
{
    check_hresult(static_cast<const IProtectionPolicyManager &>(static_cast<const D &>(*this))->put_Identity(get(value)));
}

template <typename D> hstring impl_IProtectionPolicyManager<D>::Identity() const
{
    hstring value;
    check_hresult(static_cast<const IProtectionPolicyManager &>(static_cast<const D &>(*this))->get_Identity(put(value)));
    return value;
}

template <typename D> void impl_IProtectionPolicyManager2<D>::ShowEnterpriseIndicator(bool value) const
{
    check_hresult(static_cast<const IProtectionPolicyManager2 &>(static_cast<const D &>(*this))->put_ShowEnterpriseIndicator(value));
}

template <typename D> bool impl_IProtectionPolicyManager2<D>::ShowEnterpriseIndicator() const
{
    bool value {};
    check_hresult(static_cast<const IProtectionPolicyManager2 &>(static_cast<const D &>(*this))->get_ShowEnterpriseIndicator(&value));
    return value;
}

template <typename D> bool impl_IProtectionPolicyManagerStatics<D>::IsIdentityManaged(hstring_ref identity) const
{
    bool result {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_IsIdentityManaged(get(identity), &result));
    return result;
}

template <typename D> bool impl_IProtectionPolicyManagerStatics<D>::TryApplyProcessUIPolicy(hstring_ref identity) const
{
    bool result {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_TryApplyProcessUIPolicy(get(identity), &result));
    return result;
}

template <typename D> void impl_IProtectionPolicyManagerStatics<D>::ClearProcessUIPolicy() const
{
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_ClearProcessUIPolicy());
}

template <typename D> Windows::Security::EnterpriseData::ThreadNetworkContext impl_IProtectionPolicyManagerStatics<D>::CreateCurrentThreadNetworkContext(hstring_ref identity) const
{
    Windows::Security::EnterpriseData::ThreadNetworkContext result { nullptr };
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_CreateCurrentThreadNetworkContext(get(identity), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IProtectionPolicyManagerStatics<D>::GetPrimaryManagedIdentityForNetworkEndpointAsync(const Windows::Networking::HostName & endpointHost) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_GetPrimaryManagedIdentityForNetworkEndpointAsync(get(endpointHost), put(result)));
    return result;
}

template <typename D> void impl_IProtectionPolicyManagerStatics<D>::RevokeContent(hstring_ref identity) const
{
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_RevokeContent(get(identity)));
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyManager impl_IProtectionPolicyManagerStatics<D>::GetForCurrentView() const
{
    Windows::Security::EnterpriseData::ProtectionPolicyManager result { nullptr };
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(result)));
    return result;
}

template <typename D> event_token impl_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->add_ProtectedAccessSuspending(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IProtectionPolicyManagerStatics> impl_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IProtectionPolicyManagerStatics>(this, &ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics::remove_ProtectedAccessSuspending, ProtectedAccessSuspending(handler));
}

template <typename D> void impl_IProtectionPolicyManagerStatics<D>::ProtectedAccessSuspending(event_token token) const
{
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->remove_ProtectedAccessSuspending(token));
}

template <typename D> event_token impl_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->add_ProtectedAccessResumed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IProtectionPolicyManagerStatics> impl_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IProtectionPolicyManagerStatics>(this, &ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics::remove_ProtectedAccessResumed, ProtectedAccessResumed(handler));
}

template <typename D> void impl_IProtectionPolicyManagerStatics<D>::ProtectedAccessResumed(event_token token) const
{
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->remove_ProtectedAccessResumed(token));
}

template <typename D> event_token impl_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->add_ProtectedContentRevoked(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IProtectionPolicyManagerStatics> impl_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IProtectionPolicyManagerStatics>(this, &ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics::remove_ProtectedContentRevoked, ProtectedContentRevoked(handler));
}

template <typename D> void impl_IProtectionPolicyManagerStatics<D>::ProtectedContentRevoked(event_token token) const
{
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->remove_ProtectedContentRevoked(token));
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult impl_IProtectionPolicyManagerStatics<D>::CheckAccess(hstring_ref sourceIdentity, hstring_ref targetIdentity) const
{
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_CheckAccess(get(sourceIdentity), get(targetIdentity), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> impl_IProtectionPolicyManagerStatics<D>::RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result;
    check_hresult(static_cast<const IProtectionPolicyManagerStatics &>(static_cast<const D &>(*this))->abi_RequestAccessAsync(get(sourceIdentity), get(targetIdentity), put(result)));
    return result;
}

template <typename D> bool impl_IProtectionPolicyManagerStatics2<D>::HasContentBeenRevokedSince(hstring_ref identity, const Windows::Foundation::DateTime & since) const
{
    bool result {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->abi_HasContentBeenRevokedSince(get(identity), get(since), &result));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult impl_IProtectionPolicyManagerStatics2<D>::CheckAccessForApp(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName) const
{
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->abi_CheckAccessForApp(get(sourceIdentity), get(appPackageFamilyName), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> impl_IProtectionPolicyManagerStatics2<D>::RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result;
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->abi_RequestAccessForAppAsync(get(sourceIdentity), get(appPackageFamilyName), put(result)));
    return result;
}

template <typename D> Windows::Security::EnterpriseData::EnforcementLevel impl_IProtectionPolicyManagerStatics2<D>::GetEnforcementLevel(hstring_ref identity) const
{
    Windows::Security::EnterpriseData::EnforcementLevel value {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetEnforcementLevel(get(identity), &value));
    return value;
}

template <typename D> bool impl_IProtectionPolicyManagerStatics2<D>::IsUserDecryptionAllowed(hstring_ref identity) const
{
    bool value {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->abi_IsUserDecryptionAllowed(get(identity), &value));
    return value;
}

template <typename D> bool impl_IProtectionPolicyManagerStatics2<D>::IsProtectionUnderLockRequired(hstring_ref identity) const
{
    bool value {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->abi_IsProtectionUnderLockRequired(get(identity), &value));
    return value;
}

template <typename D> event_token impl_IProtectionPolicyManagerStatics2<D>::PolicyChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->add_PolicyChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IProtectionPolicyManagerStatics2> impl_IProtectionPolicyManagerStatics2<D>::PolicyChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IProtectionPolicyManagerStatics2>(this, &ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2::remove_PolicyChanged, PolicyChanged(handler));
}

template <typename D> void impl_IProtectionPolicyManagerStatics2<D>::PolicyChanged(event_token token) const
{
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->remove_PolicyChanged(token));
}

template <typename D> bool impl_IProtectionPolicyManagerStatics2<D>::IsProtectionEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IProtectionPolicyManagerStatics2 &>(static_cast<const D &>(*this))->get_IsProtectionEnabled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> impl_IProtectionPolicyManagerStatics3<D>::RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result;
    check_hresult(static_cast<const IProtectionPolicyManagerStatics3 &>(static_cast<const D &>(*this))->abi_RequestAccessWithAuditingInfoAsync(get(sourceIdentity), get(targetIdentity), get(auditInfo), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> impl_IProtectionPolicyManagerStatics3<D>::RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo, hstring_ref messageFromApp) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result;
    check_hresult(static_cast<const IProtectionPolicyManagerStatics3 &>(static_cast<const D &>(*this))->abi_RequestAccessWithMessageAsync(get(sourceIdentity), get(targetIdentity), get(auditInfo), get(messageFromApp), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> impl_IProtectionPolicyManagerStatics3<D>::RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result;
    check_hresult(static_cast<const IProtectionPolicyManagerStatics3 &>(static_cast<const D &>(*this))->abi_RequestAccessForAppWithAuditingInfoAsync(get(sourceIdentity), get(appPackageFamilyName), get(auditInfo), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> impl_IProtectionPolicyManagerStatics3<D>::RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo, hstring_ref messageFromApp) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> result;
    check_hresult(static_cast<const IProtectionPolicyManagerStatics3 &>(static_cast<const D &>(*this))->abi_RequestAccessForAppWithMessageAsync(get(sourceIdentity), get(appPackageFamilyName), get(auditInfo), get(messageFromApp), put(result)));
    return result;
}

template <typename D> void impl_IProtectionPolicyManagerStatics3<D>::LogAuditEvent(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo) const
{
    check_hresult(static_cast<const IProtectionPolicyManagerStatics3 &>(static_cast<const D &>(*this))->abi_LogAuditEvent(get(sourceIdentity), get(targetIdentity), get(auditInfo)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IProtectedAccessSuspendingEventArgs<D>::Identities() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IProtectedAccessSuspendingEventArgs &>(static_cast<const D &>(*this))->get_Identities(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IProtectedAccessSuspendingEventArgs<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IProtectedAccessSuspendingEventArgs &>(static_cast<const D &>(*this))->get_Deadline(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IProtectedAccessSuspendingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(static_cast<const IProtectedAccessSuspendingEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IProtectedAccessResumedEventArgs<D>::Identities() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IProtectedAccessResumedEventArgs &>(static_cast<const D &>(*this))->get_Identities(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IProtectedContentRevokedEventArgs<D>::Identities() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IProtectedContentRevokedEventArgs &>(static_cast<const D &>(*this))->get_Identities(put(value)));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> DataProtectionManager::ProtectAsync(const Windows::Storage::Streams::IBuffer & data, hstring_ref identity)
{
    return get_activation_factory<DataProtectionManager, IDataProtectionManagerStatics>().ProtectAsync(data, identity);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::BufferProtectUnprotectResult> DataProtectionManager::UnprotectAsync(const Windows::Storage::Streams::IBuffer & data)
{
    return get_activation_factory<DataProtectionManager, IDataProtectionManagerStatics>().UnprotectAsync(data);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> DataProtectionManager::ProtectStreamAsync(const Windows::Storage::Streams::IInputStream & unprotectedStream, hstring_ref identity, const Windows::Storage::Streams::IOutputStream & protectedStream)
{
    return get_activation_factory<DataProtectionManager, IDataProtectionManagerStatics>().ProtectStreamAsync(unprotectedStream, identity, protectedStream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> DataProtectionManager::UnprotectStreamAsync(const Windows::Storage::Streams::IInputStream & protectedStream, const Windows::Storage::Streams::IOutputStream & unprotectedStream)
{
    return get_activation_factory<DataProtectionManager, IDataProtectionManagerStatics>().UnprotectStreamAsync(protectedStream, unprotectedStream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> DataProtectionManager::GetProtectionInfoAsync(const Windows::Storage::Streams::IBuffer & protectedData)
{
    return get_activation_factory<DataProtectionManager, IDataProtectionManagerStatics>().GetProtectionInfoAsync(protectedData);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::DataProtectionInfo> DataProtectionManager::GetStreamProtectionInfoAsync(const Windows::Storage::Streams::IInputStream & protectedStream)
{
    return get_activation_factory<DataProtectionManager, IDataProtectionManagerStatics>().GetStreamProtectionInfoAsync(protectedStream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> FileProtectionManager::ProtectAsync(const Windows::Storage::IStorageItem & target, hstring_ref identity)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics>().ProtectAsync(target, identity);
}

inline Windows::Foundation::IAsyncOperation<bool> FileProtectionManager::CopyProtectionAsync(const Windows::Storage::IStorageItem & source, const Windows::Storage::IStorageItem & target)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics>().CopyProtectionAsync(source, target);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::FileProtectionInfo> FileProtectionManager::GetProtectionInfoAsync(const Windows::Storage::IStorageItem & source)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics>().GetProtectionInfoAsync(source);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> FileProtectionManager::SaveFileAsContainerAsync(const Windows::Storage::IStorageFile & protectedFile)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics>().SaveFileAsContainerAsync(protectedFile);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> FileProtectionManager::LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics>().LoadFileFromContainerAsync(containerFile);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> FileProtectionManager::LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile, const Windows::Storage::IStorageItem & target)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics>().LoadFileFromContainerAsync(containerFile, target);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedFileCreateResult> FileProtectionManager::CreateProtectedAndOpenAsync(const Windows::Storage::IStorageFolder & parentFolder, hstring_ref desiredName, hstring_ref identity, Windows::Storage::CreationCollisionOption collisionOption)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics>().CreateProtectedAndOpenAsync(parentFolder, desiredName, identity, collisionOption);
}

inline Windows::Foundation::IAsyncOperation<bool> FileProtectionManager::IsContainerAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics2>().IsContainerAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerImportResult> FileProtectionManager::LoadFileFromContainerAsync(const Windows::Storage::IStorageFile & containerFile, const Windows::Storage::IStorageItem & target, Windows::Storage::NameCollisionOption collisionOption)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics2>().LoadFileFromContainerAsync(containerFile, target, collisionOption);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectedContainerExportResult> FileProtectionManager::SaveFileAsContainerAsync(const Windows::Storage::IStorageFile & protectedFile, const Windows::Foundation::Collections::IIterable<hstring> & sharedWithIdentities)
{
    return get_activation_factory<FileProtectionManager, IFileProtectionManagerStatics2>().SaveFileAsContainerAsync(protectedFile, sharedWithIdentities);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> FileRevocationManager::ProtectAsync(const Windows::Storage::IStorageItem & storageItem, hstring_ref enterpriseIdentity)
{
    return get_activation_factory<FileRevocationManager, IFileRevocationManagerStatics>().ProtectAsync(storageItem, enterpriseIdentity);
}

inline Windows::Foundation::IAsyncOperation<bool> FileRevocationManager::CopyProtectionAsync(const Windows::Storage::IStorageItem & sourceStorageItem, const Windows::Storage::IStorageItem & targetStorageItem)
{
    return get_activation_factory<FileRevocationManager, IFileRevocationManagerStatics>().CopyProtectionAsync(sourceStorageItem, targetStorageItem);
}

inline void FileRevocationManager::Revoke(hstring_ref enterpriseIdentity)
{
    get_activation_factory<FileRevocationManager, IFileRevocationManagerStatics>().Revoke(enterpriseIdentity);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::FileProtectionStatus> FileRevocationManager::GetStatusAsync(const Windows::Storage::IStorageItem & storageItem)
{
    return get_activation_factory<FileRevocationManager, IFileRevocationManagerStatics>().GetStatusAsync(storageItem);
}

inline ProtectionPolicyAuditInfo::ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, hstring_ref dataDescription, hstring_ref sourceDescription, hstring_ref targetDescription) :
    ProtectionPolicyAuditInfo(get_activation_factory<ProtectionPolicyAuditInfo, IProtectionPolicyAuditInfoFactory>().Create(action, dataDescription, sourceDescription, targetDescription))
{}

inline ProtectionPolicyAuditInfo::ProtectionPolicyAuditInfo(Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action, hstring_ref dataDescription) :
    ProtectionPolicyAuditInfo(get_activation_factory<ProtectionPolicyAuditInfo, IProtectionPolicyAuditInfoFactory>().CreateWithActionAndDataDescription(action, dataDescription))
{}

inline bool ProtectionPolicyManager::IsIdentityManaged(hstring_ref identity)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().IsIdentityManaged(identity);
}

inline bool ProtectionPolicyManager::TryApplyProcessUIPolicy(hstring_ref identity)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().TryApplyProcessUIPolicy(identity);
}

inline void ProtectionPolicyManager::ClearProcessUIPolicy()
{
    get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().ClearProcessUIPolicy();
}

inline Windows::Security::EnterpriseData::ThreadNetworkContext ProtectionPolicyManager::CreateCurrentThreadNetworkContext(hstring_ref identity)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().CreateCurrentThreadNetworkContext(identity);
}

inline Windows::Foundation::IAsyncOperation<hstring> ProtectionPolicyManager::GetPrimaryManagedIdentityForNetworkEndpointAsync(const Windows::Networking::HostName & endpointHost)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().GetPrimaryManagedIdentityForNetworkEndpointAsync(endpointHost);
}

inline void ProtectionPolicyManager::RevokeContent(hstring_ref identity)
{
    get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().RevokeContent(identity);
}

inline Windows::Security::EnterpriseData::ProtectionPolicyManager ProtectionPolicyManager::GetForCurrentView()
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().GetForCurrentView();
}

inline event_token ProtectionPolicyManager::ProtectedAccessSuspending(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> & handler)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().ProtectedAccessSuspending(handler);
}

inline factory_event_revoker<IProtectionPolicyManagerStatics> ProtectionPolicyManager::ProtectedAccessSuspending(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs> & handler)
{
    auto factory = get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>();
    return { factory, &ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics::remove_ProtectedAccessSuspending, factory.ProtectedAccessSuspending(handler) };
}

inline void ProtectionPolicyManager::ProtectedAccessSuspending(event_token token)
{
    get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().ProtectedAccessSuspending(token);
}

inline event_token ProtectionPolicyManager::ProtectedAccessResumed(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> & handler)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().ProtectedAccessResumed(handler);
}

inline factory_event_revoker<IProtectionPolicyManagerStatics> ProtectionPolicyManager::ProtectedAccessResumed(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs> & handler)
{
    auto factory = get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>();
    return { factory, &ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics::remove_ProtectedAccessResumed, factory.ProtectedAccessResumed(handler) };
}

inline void ProtectionPolicyManager::ProtectedAccessResumed(event_token token)
{
    get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().ProtectedAccessResumed(token);
}

inline event_token ProtectionPolicyManager::ProtectedContentRevoked(const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> & handler)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().ProtectedContentRevoked(handler);
}

inline factory_event_revoker<IProtectionPolicyManagerStatics> ProtectionPolicyManager::ProtectedContentRevoked(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs> & handler)
{
    auto factory = get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>();
    return { factory, &ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics::remove_ProtectedContentRevoked, factory.ProtectedContentRevoked(handler) };
}

inline void ProtectionPolicyManager::ProtectedContentRevoked(event_token token)
{
    get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().ProtectedContentRevoked(token);
}

inline Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult ProtectionPolicyManager::CheckAccess(hstring_ref sourceIdentity, hstring_ref targetIdentity)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().CheckAccess(sourceIdentity, targetIdentity);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics>().RequestAccessAsync(sourceIdentity, targetIdentity);
}

inline bool ProtectionPolicyManager::HasContentBeenRevokedSince(hstring_ref identity, const Windows::Foundation::DateTime & since)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().HasContentBeenRevokedSince(identity, since);
}

inline Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult ProtectionPolicyManager::CheckAccessForApp(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().CheckAccessForApp(sourceIdentity, appPackageFamilyName);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName);
}

inline Windows::Security::EnterpriseData::EnforcementLevel ProtectionPolicyManager::GetEnforcementLevel(hstring_ref identity)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().GetEnforcementLevel(identity);
}

inline bool ProtectionPolicyManager::IsUserDecryptionAllowed(hstring_ref identity)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().IsUserDecryptionAllowed(identity);
}

inline bool ProtectionPolicyManager::IsProtectionUnderLockRequired(hstring_ref identity)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().IsProtectionUnderLockRequired(identity);
}

inline event_token ProtectionPolicyManager::PolicyChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().PolicyChanged(handler);
}

inline factory_event_revoker<IProtectionPolicyManagerStatics2> ProtectionPolicyManager::PolicyChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & handler)
{
    auto factory = get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>();
    return { factory, &ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2::remove_PolicyChanged, factory.PolicyChanged(handler) };
}

inline void ProtectionPolicyManager::PolicyChanged(event_token token)
{
    get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().PolicyChanged(token);
}

inline bool ProtectionPolicyManager::IsProtectionEnabled()
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics2>().IsProtectionEnabled();
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>().RequestAccessAsync(sourceIdentity, targetIdentity, auditInfo);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessAsync(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo, hstring_ref messageFromApp)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>().RequestAccessAsync(sourceIdentity, targetIdentity, auditInfo, messageFromApp);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>().RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName, auditInfo);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> ProtectionPolicyManager::RequestAccessForAppAsync(hstring_ref sourceIdentity, hstring_ref appPackageFamilyName, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo, hstring_ref messageFromApp)
{
    return get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>().RequestAccessForAppAsync(sourceIdentity, appPackageFamilyName, auditInfo, messageFromApp);
}

inline void ProtectionPolicyManager::LogAuditEvent(hstring_ref sourceIdentity, hstring_ref targetIdentity, const Windows::Security::EnterpriseData::ProtectionPolicyAuditInfo & auditInfo)
{
    get_activation_factory<ProtectionPolicyManager, IProtectionPolicyManagerStatics3>().LogAuditEvent(sourceIdentity, targetIdentity, auditInfo);
}

}

}
