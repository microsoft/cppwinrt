// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Appointments.AppointmentsProvider.3.h"
#include "internal/Windows.ApplicationModel.UserDataAccounts.Provider.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.UI.ViewManagement.3.h"
#include "internal/Windows.ApplicationModel.Search.3.h"
#include "internal/Windows.ApplicationModel.DataTransfer.ShareTarget.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.Search.3.h"
#include "internal/Windows.Storage.Pickers.Provider.3.h"
#include "internal/Windows.Storage.Provider.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Security.Authentication.Web.3.h"
#include "internal/Windows.Security.Authentication.Web.Provider.3.h"
#include "internal/Windows.ApplicationModel.Background.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Media.SpeechRecognition.3.h"
#include "internal/Windows.Devices.Printers.Extensions.3.h"
#include "internal/Windows.ApplicationModel.Calls.3.h"
#include "internal/Windows.ApplicationModel.Contacts.Provider.3.h"
#include "internal/Windows.ApplicationModel.Contacts.3.h"
#include "internal/Windows.ApplicationModel.Wallet.3.h"
#include "internal/Windows.ApplicationModel.Activation.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IActivatedEventArgs>
{
    HRESULT __stdcall get_Kind(Windows::ApplicationModel::Activation::ActivationKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PreviousExecutionState(Windows::ApplicationModel::Activation::ApplicationExecutionState * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PreviousExecutionState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SplashScreen(abi_arg_out<Windows::ApplicationModel::Activation::ISplashScreen> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SplashScreen());
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
struct produce<D, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser> : produce_base<D, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
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
struct produce<D, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
{
    HRESULT __stdcall get_CurrentlyShownApplicationViewId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentlyShownApplicationViewId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Verb());
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
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_AddAppointmentOperation(abi_arg_out<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AddAppointmentOperation());
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
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_RemoveAppointmentOperation(abi_arg_out<Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoveAppointmentOperation());
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
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs>
{
    HRESULT __stdcall get_ReplaceAppointmentOperation(abi_arg_out<Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReplaceAppointmentOperation());
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
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs>
{
    HRESULT __stdcall get_InstanceStartDate(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InstanceStartDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LocalId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LocalId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoamingId());
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
struct produce<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs>
{
    HRESULT __stdcall get_TimeToShow(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TimeToShow());
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs>
{
    HRESULT __stdcall get_TaskInstance(abi_arg_out<Windows::ApplicationModel::Background::IBackgroundTaskInstance> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TaskInstance());
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
struct produce<D, Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs>
{
    HRESULT __stdcall get_CachedFileUpdaterUI(abi_arg_out<Windows::Storage::Provider::ICachedFileUpdaterUI> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CachedFileUpdaterUI());
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
struct produce<D, Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs>
{
    HRESULT __stdcall get_VideoDeviceController(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoDeviceController());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceExtension(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoDeviceExtension());
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
struct produce<D, Windows::ApplicationModel::Activation::IContactActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Verb());
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
struct produce<D, Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUserId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceUserId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(abi_arg_out<Windows::ApplicationModel::Contacts::IContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
struct produce<D, Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs>
{
    HRESULT __stdcall get_Address(abi_arg_out<Windows::ApplicationModel::Contacts::IContactAddress> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(abi_arg_out<Windows::ApplicationModel::Contacts::IContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
struct produce<D, Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUserId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceUserId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(abi_arg_out<Windows::ApplicationModel::Contacts::IContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
struct produce<D, Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs>
{
    HRESULT __stdcall get_ContactPickerUI(abi_arg_out<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactPickerUI());
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
struct produce<D, Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUserId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceUserId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(abi_arg_out<Windows::ApplicationModel::Contacts::IContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
struct produce<D, Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs>
{
    HRESULT __stdcall get_ServiceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceUserId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ServiceUserId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Contact(abi_arg_out<Windows::ApplicationModel::Contacts::IContact> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contact());
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
struct produce<D, Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContactsProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Verb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Verb());
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
struct produce<D, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IContinuationActivatedEventArgs>
{
    HRESULT __stdcall get_ContinuationData(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContinuationData());
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
struct produce<D, Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs>
{
    HRESULT __stdcall get_DeviceInformationId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceInformationId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Verb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Verb());
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
struct produce<D, Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs>
{
    HRESULT __stdcall get_DeviceInformation(abi_arg_out<Windows::Devices::Enumeration::IDeviceInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceInformation());
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
struct produce<D, Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs>
{
    HRESULT __stdcall get_AppName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AppName());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgs>
{
    HRESULT __stdcall get_Files(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Files());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Verb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Verb());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName>
{
    HRESULT __stdcall get_CallerPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallerPackageFamilyName());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles> : produce_base<D, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles>
{
    HRESULT __stdcall get_NeighboringFilesQuery(abi_arg_out<Windows::Storage::Search::IStorageFileQueryResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NeighboringFilesQuery());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs>
{
    HRESULT __stdcall get_FileOpenPickerUI(abi_arg_out<Windows::Storage::Pickers::Provider::IFileOpenPickerUI> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileOpenPickerUI());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2>
{
    HRESULT __stdcall get_CallerPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallerPackageFamilyName());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs>
{
    HRESULT __stdcall get_Files(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Files());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs>
{
    HRESULT __stdcall get_FileSavePickerUI(abi_arg_out<Windows::Storage::Pickers::Provider::IFileSavePickerUI> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileSavePickerUI());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2>
{
    HRESULT __stdcall get_CallerPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallerPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnterpriseId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnterpriseId());
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
struct produce<D, Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs>
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs>
{
    HRESULT __stdcall get_Folder(abi_arg_out<Windows::Storage::IStorageFolder> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Folder());
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
struct produce<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
{
    HRESULT __stdcall get_Arguments(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TileId());
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
struct produce<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2> : produce_base<D, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
{
    HRESULT __stdcall get_TileActivatedInfo(abi_arg_out<Windows::ApplicationModel::Activation::ITileActivatedInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TileActivatedInfo());
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
struct produce<D, Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs>
{
    HRESULT __stdcall get_Info(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Info());
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
struct produce<D, Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs>
{
    HRESULT __stdcall get_CallUI(abi_arg_out<Windows::ApplicationModel::Calls::ILockScreenCallUI> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallUI());
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
struct produce<D, Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs>
{
    HRESULT __stdcall get_PickerOperationId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PickerOperationId());
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
struct produce<D, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>
{
    HRESULT __stdcall get_PrelaunchActivated(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrelaunchActivated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs>
{
    HRESULT __stdcall get_Workflow(abi_arg_out<Windows::Devices::Printers::Extensions::IPrint3DWorkflow> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Workflow());
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
struct produce<D, Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs>
{
    HRESULT __stdcall get_Configuration(abi_arg_out<Windows::Devices::Printers::Extensions::IPrintTaskConfiguration> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Configuration());
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
struct produce<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>
{
    HRESULT __stdcall get_Uri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
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
struct produce<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData>
{
    HRESULT __stdcall get_CallerPackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CallerPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Data(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
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
struct produce<D, Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs>
{
    HRESULT __stdcall get_ProtocolForResultsOperation(abi_arg_out<Windows::System::IProtocolForResultsOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtocolForResultsOperation());
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
struct produce<D, Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs>
{
    HRESULT __stdcall get_SharedContext(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SharedContext());
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
struct produce<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgs>
{
    HRESULT __stdcall get_QueryText(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QueryText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Language());
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
struct produce<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails> : produce_base<D, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails>
{
    HRESULT __stdcall get_LinguisticDetails(abi_arg_out<Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LinguisticDetails());
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
struct produce<D, Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs>
{
    HRESULT __stdcall get_ShareOperation(abi_arg_out<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShareOperation());
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
struct produce<D, Windows::ApplicationModel::Activation::ISplashScreen> : produce_base<D, Windows::ApplicationModel::Activation::ISplashScreen>
{
    HRESULT __stdcall get_ImageLocation(abi_arg_out<Windows::Foundation::Rect> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ImageLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Dismissed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::IInspectable>> handler, event_token * cookie) noexcept override
    {
        try
        {
            *cookie = detach(this->shim().Dismissed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Dismissed(event_token cookie) noexcept override
    {
        try
        {
            this->shim().Dismissed(cookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Activation::ITileActivatedInfo> : produce_base<D, Windows::ApplicationModel::Activation::ITileActivatedInfo>
{
    HRESULT __stdcall get_RecentlyShownNotifications(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RecentlyShownNotifications());
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
struct produce<D, Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs>
{
    HRESULT __stdcall get_Argument(abi_arg_out<hstring> argument) noexcept override
    {
        try
        {
            *argument = detach(this->shim().Argument());
            return S_OK;
        }
        catch (...)
        {
            *argument = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserInput(abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserInput());
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
struct produce<D, Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Operation(abi_arg_out<Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Operation());
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
struct produce<D, Windows::ApplicationModel::Activation::IViewSwitcherProvider> : produce_base<D, Windows::ApplicationModel::Activation::IViewSwitcherProvider>
{
    HRESULT __stdcall get_ViewSwitcher(abi_arg_out<Windows::UI::ViewManagement::IActivationViewSwitcher> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ViewSwitcher());
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
struct produce<D, Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs>
{
    HRESULT __stdcall get_Result(abi_arg_out<Windows::Media::SpeechRecognition::ISpeechRecognitionResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Result());
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
struct produce<D, Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs>
{
    HRESULT __stdcall get_ItemId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ItemId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActionKind(Windows::ApplicationModel::Wallet::WalletActionKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActionKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActionId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActionId());
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
struct produce<D, Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs>
{
    HRESULT __stdcall get_Operation(abi_arg_out<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Operation());
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
struct produce<D, Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs> : produce_base<D, Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs>
{
    HRESULT __stdcall get_WebAuthenticationResult(abi_arg_out<Windows::Security::Authentication::Web::IWebAuthenticationResult> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().WebAuthenticationResult());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Activation {

template <typename D> Windows::Foundation::Rect impl_ISplashScreen<D>::ImageLocation() const
{
    Windows::Foundation::Rect value {};
    check_hresult(static_cast<const ISplashScreen &>(static_cast<const D &>(*this))->get_ImageLocation(put(value)));
    return value;
}

template <typename D> event_token impl_ISplashScreen<D>::Dismissed(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::IInspectable> & handler) const
{
    event_token cookie {};
    check_hresult(static_cast<const ISplashScreen &>(static_cast<const D &>(*this))->add_Dismissed(get(handler), &cookie));
    return cookie;
}

template <typename D> event_revoker<ISplashScreen> impl_ISplashScreen<D>::Dismissed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, ISplashScreen>(this, &ABI::Windows::ApplicationModel::Activation::ISplashScreen::remove_Dismissed, Dismissed(handler));
}

template <typename D> void impl_ISplashScreen<D>::Dismissed(event_token cookie) const
{
    check_hresult(static_cast<const ISplashScreen &>(static_cast<const D &>(*this))->remove_Dismissed(cookie));
}

template <typename D> Windows::ApplicationModel::Activation::ActivationKind impl_IActivatedEventArgs<D>::Kind() const
{
    Windows::ApplicationModel::Activation::ActivationKind value {};
    check_hresult(static_cast<const IActivatedEventArgs &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::ApplicationExecutionState impl_IActivatedEventArgs<D>::PreviousExecutionState() const
{
    Windows::ApplicationModel::Activation::ApplicationExecutionState value {};
    check_hresult(static_cast<const IActivatedEventArgs &>(static_cast<const D &>(*this))->get_PreviousExecutionState(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::SplashScreen impl_IActivatedEventArgs<D>::SplashScreen() const
{
    Windows::ApplicationModel::Activation::SplashScreen value { nullptr };
    check_hresult(static_cast<const IActivatedEventArgs &>(static_cast<const D &>(*this))->get_SplashScreen(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentsProviderActivatedEventArgs<D>::Verb() const
{
    hstring value;
    check_hresult(static_cast<const IAppointmentsProviderActivatedEventArgs &>(static_cast<const D &>(*this))->get_Verb(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation impl_IAppointmentsProviderAddAppointmentActivatedEventArgs<D>::AddAppointmentOperation() const
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation value { nullptr };
    check_hresult(static_cast<const IAppointmentsProviderAddAppointmentActivatedEventArgs &>(static_cast<const D &>(*this))->get_AddAppointmentOperation(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation impl_IAppointmentsProviderReplaceAppointmentActivatedEventArgs<D>::ReplaceAppointmentOperation() const
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation value { nullptr };
    check_hresult(static_cast<const IAppointmentsProviderReplaceAppointmentActivatedEventArgs &>(static_cast<const D &>(*this))->get_ReplaceAppointmentOperation(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation impl_IAppointmentsProviderRemoveAppointmentActivatedEventArgs<D>::RemoveAppointmentOperation() const
{
    Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation value { nullptr };
    check_hresult(static_cast<const IAppointmentsProviderRemoveAppointmentActivatedEventArgs &>(static_cast<const D &>(*this))->get_RemoveAppointmentOperation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::InstanceStartDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs &>(static_cast<const D &>(*this))->get_InstanceStartDate(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::LocalId() const
{
    hstring value;
    check_hresult(static_cast<const IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs &>(static_cast<const D &>(*this))->get_LocalId(put(value)));
    return value;
}

template <typename D> hstring impl_IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs<D>::RoamingId() const
{
    hstring value;
    check_hresult(static_cast<const IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs &>(static_cast<const D &>(*this))->get_RoamingId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>::TimeToShow() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IAppointmentsProviderShowTimeFrameActivatedEventArgs &>(static_cast<const D &>(*this))->get_TimeToShow(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAppointmentsProviderShowTimeFrameActivatedEventArgs<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IAppointmentsProviderShowTimeFrameActivatedEventArgs &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation impl_IUserDataAccountProviderActivatedEventArgs<D>::Operation() const
{
    Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation value;
    check_hresult(static_cast<const IUserDataAccountProviderActivatedEventArgs &>(static_cast<const D &>(*this))->get_Operation(put(value)));
    return value;
}

template <typename D> Windows::System::User impl_IActivatedEventArgsWithUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IActivatedEventArgsWithUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> int32_t impl_IApplicationViewActivatedEventArgs<D>::CurrentlyShownApplicationViewId() const
{
    int32_t value {};
    check_hresult(static_cast<const IApplicationViewActivatedEventArgs &>(static_cast<const D &>(*this))->get_CurrentlyShownApplicationViewId(&value));
    return value;
}

template <typename D> Windows::UI::ViewManagement::ActivationViewSwitcher impl_IViewSwitcherProvider<D>::ViewSwitcher() const
{
    Windows::UI::ViewManagement::ActivationViewSwitcher value { nullptr };
    check_hresult(static_cast<const IViewSwitcherProvider &>(static_cast<const D &>(*this))->get_ViewSwitcher(put(value)));
    return value;
}

template <typename D> bool impl_IPrelaunchActivatedEventArgs<D>::PrelaunchActivated() const
{
    bool value {};
    check_hresult(static_cast<const IPrelaunchActivatedEventArgs &>(static_cast<const D &>(*this))->get_PrelaunchActivated(&value));
    return value;
}

template <typename D> hstring impl_ILaunchActivatedEventArgs<D>::Arguments() const
{
    hstring value;
    check_hresult(static_cast<const ILaunchActivatedEventArgs &>(static_cast<const D &>(*this))->get_Arguments(put(value)));
    return value;
}

template <typename D> hstring impl_ILaunchActivatedEventArgs<D>::TileId() const
{
    hstring value;
    check_hresult(static_cast<const ILaunchActivatedEventArgs &>(static_cast<const D &>(*this))->get_TileId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Activation::TileActivatedInfo impl_ILaunchActivatedEventArgs2<D>::TileActivatedInfo() const
{
    Windows::ApplicationModel::Activation::TileActivatedInfo value { nullptr };
    check_hresult(static_cast<const ILaunchActivatedEventArgs2 &>(static_cast<const D &>(*this))->get_TileActivatedInfo(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchActivatedEventArgs<D>::QueryText() const
{
    hstring value;
    check_hresult(static_cast<const ISearchActivatedEventArgs &>(static_cast<const D &>(*this))->get_QueryText(put(value)));
    return value;
}

template <typename D> hstring impl_ISearchActivatedEventArgs<D>::Language() const
{
    hstring value;
    check_hresult(static_cast<const ISearchActivatedEventArgs &>(static_cast<const D &>(*this))->get_Language(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails impl_ISearchActivatedEventArgsWithLinguisticDetails<D>::LinguisticDetails() const
{
    Windows::ApplicationModel::Search::SearchPaneQueryLinguisticDetails value { nullptr };
    check_hresult(static_cast<const ISearchActivatedEventArgsWithLinguisticDetails &>(static_cast<const D &>(*this))->get_LinguisticDetails(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation impl_IShareTargetActivatedEventArgs<D>::ShareOperation() const
{
    Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation value { nullptr };
    check_hresult(static_cast<const IShareTargetActivatedEventArgs &>(static_cast<const D &>(*this))->get_ShareOperation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem> impl_IFileActivatedEventArgs<D>::Files() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem> value;
    check_hresult(static_cast<const IFileActivatedEventArgs &>(static_cast<const D &>(*this))->get_Files(put(value)));
    return value;
}

template <typename D> hstring impl_IFileActivatedEventArgs<D>::Verb() const
{
    hstring value;
    check_hresult(static_cast<const IFileActivatedEventArgs &>(static_cast<const D &>(*this))->get_Verb(put(value)));
    return value;
}

template <typename D> Windows::Storage::Search::StorageFileQueryResult impl_IFileActivatedEventArgsWithNeighboringFiles<D>::NeighboringFilesQuery() const
{
    Windows::Storage::Search::StorageFileQueryResult value { nullptr };
    check_hresult(static_cast<const IFileActivatedEventArgsWithNeighboringFiles &>(static_cast<const D &>(*this))->get_NeighboringFilesQuery(put(value)));
    return value;
}

template <typename D> hstring impl_IFileActivatedEventArgsWithCallerPackageFamilyName<D>::CallerPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IFileActivatedEventArgsWithCallerPackageFamilyName &>(static_cast<const D &>(*this))->get_CallerPackageFamilyName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IProtocolActivatedEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IProtocolActivatedEventArgs &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> hstring impl_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>::CallerPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData &>(static_cast<const D &>(*this))->get_CallerPackageFamilyName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData<D>::Data() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> Windows::System::ProtocolForResultsOperation impl_IProtocolForResultsActivatedEventArgs<D>::ProtocolForResultsOperation() const
{
    Windows::System::ProtocolForResultsOperation value { nullptr };
    check_hresult(static_cast<const IProtocolForResultsActivatedEventArgs &>(static_cast<const D &>(*this))->get_ProtocolForResultsOperation(put(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::FileOpenPickerUI impl_IFileOpenPickerActivatedEventArgs<D>::FileOpenPickerUI() const
{
    Windows::Storage::Pickers::Provider::FileOpenPickerUI value { nullptr };
    check_hresult(static_cast<const IFileOpenPickerActivatedEventArgs &>(static_cast<const D &>(*this))->get_FileOpenPickerUI(put(value)));
    return value;
}

template <typename D> hstring impl_IFileOpenPickerActivatedEventArgs2<D>::CallerPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IFileOpenPickerActivatedEventArgs2 &>(static_cast<const D &>(*this))->get_CallerPackageFamilyName(put(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::FileSavePickerUI impl_IFileSavePickerActivatedEventArgs<D>::FileSavePickerUI() const
{
    Windows::Storage::Pickers::Provider::FileSavePickerUI value { nullptr };
    check_hresult(static_cast<const IFileSavePickerActivatedEventArgs &>(static_cast<const D &>(*this))->get_FileSavePickerUI(put(value)));
    return value;
}

template <typename D> hstring impl_IFileSavePickerActivatedEventArgs2<D>::CallerPackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IFileSavePickerActivatedEventArgs2 &>(static_cast<const D &>(*this))->get_CallerPackageFamilyName(put(value)));
    return value;
}

template <typename D> hstring impl_IFileSavePickerActivatedEventArgs2<D>::EnterpriseId() const
{
    hstring value;
    check_hresult(static_cast<const IFileSavePickerActivatedEventArgs2 &>(static_cast<const D &>(*this))->get_EnterpriseId(put(value)));
    return value;
}

template <typename D> Windows::Storage::Provider::CachedFileUpdaterUI impl_ICachedFileUpdaterActivatedEventArgs<D>::CachedFileUpdaterUI() const
{
    Windows::Storage::Provider::CachedFileUpdaterUI value { nullptr };
    check_hresult(static_cast<const ICachedFileUpdaterActivatedEventArgs &>(static_cast<const D &>(*this))->get_CachedFileUpdaterUI(put(value)));
    return value;
}

template <typename D> hstring impl_IDeviceActivatedEventArgs<D>::DeviceInformationId() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceActivatedEventArgs &>(static_cast<const D &>(*this))->get_DeviceInformationId(put(value)));
    return value;
}

template <typename D> hstring impl_IDeviceActivatedEventArgs<D>::Verb() const
{
    hstring value;
    check_hresult(static_cast<const IDeviceActivatedEventArgs &>(static_cast<const D &>(*this))->get_Verb(put(value)));
    return value;
}

template <typename D> hstring impl_IPickerReturnedActivatedEventArgs<D>::PickerOperationId() const
{
    hstring value;
    check_hresult(static_cast<const IPickerReturnedActivatedEventArgs &>(static_cast<const D &>(*this))->get_PickerOperationId(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_IRestrictedLaunchActivatedEventArgs<D>::SharedContext() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IRestrictedLaunchActivatedEventArgs &>(static_cast<const D &>(*this))->get_SharedContext(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_ILockScreenActivatedEventArgs<D>::Info() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ILockScreenActivatedEventArgs &>(static_cast<const D &>(*this))->get_Info(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IContinuationActivatedEventArgs<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IContinuationActivatedEventArgs &>(static_cast<const D &>(*this))->get_ContinuationData(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> impl_IFileOpenPickerContinuationEventArgs<D>::Files() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile> value;
    check_hresult(static_cast<const IFileOpenPickerContinuationEventArgs &>(static_cast<const D &>(*this))->get_Files(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile impl_IFileSavePickerContinuationEventArgs<D>::File() const
{
    Windows::Storage::StorageFile value { nullptr };
    check_hresult(static_cast<const IFileSavePickerContinuationEventArgs &>(static_cast<const D &>(*this))->get_File(put(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFolder impl_IFolderPickerContinuationEventArgs<D>::Folder() const
{
    Windows::Storage::StorageFolder value { nullptr };
    check_hresult(static_cast<const IFolderPickerContinuationEventArgs &>(static_cast<const D &>(*this))->get_Folder(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationResult impl_IWebAuthenticationBrokerContinuationEventArgs<D>::WebAuthenticationResult() const
{
    Windows::Security::Authentication::Web::WebAuthenticationResult result { nullptr };
    check_hresult(static_cast<const IWebAuthenticationBrokerContinuationEventArgs &>(static_cast<const D &>(*this))->get_WebAuthenticationResult(put(result)));
    return result;
}

template <typename D> Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation impl_IWebAccountProviderActivatedEventArgs<D>::Operation() const
{
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation value;
    check_hresult(static_cast<const IWebAccountProviderActivatedEventArgs &>(static_cast<const D &>(*this))->get_Operation(put(value)));
    return value;
}

template <typename D> hstring impl_IToastNotificationActivatedEventArgs<D>::Argument() const
{
    hstring argument;
    check_hresult(static_cast<const IToastNotificationActivatedEventArgs &>(static_cast<const D &>(*this))->get_Argument(put(argument)));
    return argument;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IToastNotificationActivatedEventArgs<D>::UserInput() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(static_cast<const IToastNotificationActivatedEventArgs &>(static_cast<const D &>(*this))->get_UserInput(put(value)));
    return value;
}

template <typename D> hstring impl_IDialReceiverActivatedEventArgs<D>::AppName() const
{
    hstring value;
    check_hresult(static_cast<const IDialReceiverActivatedEventArgs &>(static_cast<const D &>(*this))->get_AppName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification> impl_ITileActivatedInfo<D>::RecentlyShownNotifications() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Notifications::ShownTileNotification> value;
    check_hresult(static_cast<const ITileActivatedInfo &>(static_cast<const D &>(*this))->get_RecentlyShownNotifications(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTaskInstance impl_IBackgroundActivatedEventArgs<D>::TaskInstance() const
{
    Windows::ApplicationModel::Background::IBackgroundTaskInstance value;
    check_hresult(static_cast<const IBackgroundActivatedEventArgs &>(static_cast<const D &>(*this))->get_TaskInstance(put(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation impl_IDevicePairingActivatedEventArgs<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value { nullptr };
    check_hresult(static_cast<const IDevicePairingActivatedEventArgs &>(static_cast<const D &>(*this))->get_DeviceInformation(put(value)));
    return value;
}

template <typename D> Windows::Media::SpeechRecognition::SpeechRecognitionResult impl_IVoiceCommandActivatedEventArgs<D>::Result() const
{
    Windows::Media::SpeechRecognition::SpeechRecognitionResult value { nullptr };
    check_hresult(static_cast<const IVoiceCommandActivatedEventArgs &>(static_cast<const D &>(*this))->get_Result(put(value)));
    return value;
}

template <typename D> Windows::Devices::Printers::Extensions::PrintTaskConfiguration impl_IPrintTaskSettingsActivatedEventArgs<D>::Configuration() const
{
    Windows::Devices::Printers::Extensions::PrintTaskConfiguration value { nullptr };
    check_hresult(static_cast<const IPrintTaskSettingsActivatedEventArgs &>(static_cast<const D &>(*this))->get_Configuration(put(value)));
    return value;
}

template <typename D> Windows::Devices::Printers::Extensions::Print3DWorkflow impl_IPrint3DWorkflowActivatedEventArgs<D>::Workflow() const
{
    Windows::Devices::Printers::Extensions::Print3DWorkflow value { nullptr };
    check_hresult(static_cast<const IPrint3DWorkflowActivatedEventArgs &>(static_cast<const D &>(*this))->get_Workflow(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Calls::LockScreenCallUI impl_ILockScreenCallActivatedEventArgs<D>::CallUI() const
{
    Windows::ApplicationModel::Calls::LockScreenCallUI value { nullptr };
    check_hresult(static_cast<const ILockScreenCallActivatedEventArgs &>(static_cast<const D &>(*this))->get_CallUI(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_ICameraSettingsActivatedEventArgs<D>::VideoDeviceController() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ICameraSettingsActivatedEventArgs &>(static_cast<const D &>(*this))->get_VideoDeviceController(put(value)));
    return value;
}

template <typename D> Windows::IInspectable impl_ICameraSettingsActivatedEventArgs<D>::VideoDeviceExtension() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const ICameraSettingsActivatedEventArgs &>(static_cast<const D &>(*this))->get_VideoDeviceExtension(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Provider::ContactPickerUI impl_IContactPickerActivatedEventArgs<D>::ContactPickerUI() const
{
    Windows::ApplicationModel::Contacts::Provider::ContactPickerUI value { nullptr };
    check_hresult(static_cast<const IContactPickerActivatedEventArgs &>(static_cast<const D &>(*this))->get_ContactPickerUI(put(value)));
    return value;
}

template <typename D> hstring impl_IContactActivatedEventArgs<D>::Verb() const
{
    hstring value;
    check_hresult(static_cast<const IContactActivatedEventArgs &>(static_cast<const D &>(*this))->get_Verb(put(value)));
    return value;
}

template <typename D> hstring impl_IContactCallActivatedEventArgs<D>::ServiceId() const
{
    hstring value;
    check_hresult(static_cast<const IContactCallActivatedEventArgs &>(static_cast<const D &>(*this))->get_ServiceId(put(value)));
    return value;
}

template <typename D> hstring impl_IContactCallActivatedEventArgs<D>::ServiceUserId() const
{
    hstring value;
    check_hresult(static_cast<const IContactCallActivatedEventArgs &>(static_cast<const D &>(*this))->get_ServiceUserId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact impl_IContactCallActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value { nullptr };
    check_hresult(static_cast<const IContactCallActivatedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> hstring impl_IContactMessageActivatedEventArgs<D>::ServiceId() const
{
    hstring value;
    check_hresult(static_cast<const IContactMessageActivatedEventArgs &>(static_cast<const D &>(*this))->get_ServiceId(put(value)));
    return value;
}

template <typename D> hstring impl_IContactMessageActivatedEventArgs<D>::ServiceUserId() const
{
    hstring value;
    check_hresult(static_cast<const IContactMessageActivatedEventArgs &>(static_cast<const D &>(*this))->get_ServiceUserId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact impl_IContactMessageActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value { nullptr };
    check_hresult(static_cast<const IContactMessageActivatedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactAddress impl_IContactMapActivatedEventArgs<D>::Address() const
{
    Windows::ApplicationModel::Contacts::ContactAddress value { nullptr };
    check_hresult(static_cast<const IContactMapActivatedEventArgs &>(static_cast<const D &>(*this))->get_Address(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact impl_IContactMapActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value { nullptr };
    check_hresult(static_cast<const IContactMapActivatedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> hstring impl_IContactPostActivatedEventArgs<D>::ServiceId() const
{
    hstring value;
    check_hresult(static_cast<const IContactPostActivatedEventArgs &>(static_cast<const D &>(*this))->get_ServiceId(put(value)));
    return value;
}

template <typename D> hstring impl_IContactPostActivatedEventArgs<D>::ServiceUserId() const
{
    hstring value;
    check_hresult(static_cast<const IContactPostActivatedEventArgs &>(static_cast<const D &>(*this))->get_ServiceUserId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact impl_IContactPostActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value { nullptr };
    check_hresult(static_cast<const IContactPostActivatedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> hstring impl_IContactVideoCallActivatedEventArgs<D>::ServiceId() const
{
    hstring value;
    check_hresult(static_cast<const IContactVideoCallActivatedEventArgs &>(static_cast<const D &>(*this))->get_ServiceId(put(value)));
    return value;
}

template <typename D> hstring impl_IContactVideoCallActivatedEventArgs<D>::ServiceUserId() const
{
    hstring value;
    check_hresult(static_cast<const IContactVideoCallActivatedEventArgs &>(static_cast<const D &>(*this))->get_ServiceUserId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact impl_IContactVideoCallActivatedEventArgs<D>::Contact() const
{
    Windows::ApplicationModel::Contacts::Contact value { nullptr };
    check_hresult(static_cast<const IContactVideoCallActivatedEventArgs &>(static_cast<const D &>(*this))->get_Contact(put(value)));
    return value;
}

template <typename D> hstring impl_IContactsProviderActivatedEventArgs<D>::Verb() const
{
    hstring value;
    check_hresult(static_cast<const IContactsProviderActivatedEventArgs &>(static_cast<const D &>(*this))->get_Verb(put(value)));
    return value;
}

template <typename D> hstring impl_IWalletActionActivatedEventArgs<D>::ItemId() const
{
    hstring value;
    check_hresult(static_cast<const IWalletActionActivatedEventArgs &>(static_cast<const D &>(*this))->get_ItemId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Wallet::WalletActionKind impl_IWalletActionActivatedEventArgs<D>::ActionKind() const
{
    Windows::ApplicationModel::Wallet::WalletActionKind value {};
    check_hresult(static_cast<const IWalletActionActivatedEventArgs &>(static_cast<const D &>(*this))->get_ActionKind(&value));
    return value;
}

template <typename D> hstring impl_IWalletActionActivatedEventArgs<D>::ActionId() const
{
    hstring value;
    check_hresult(static_cast<const IWalletActionActivatedEventArgs &>(static_cast<const D &>(*this))->get_ActionId(put(value)));
    return value;
}

}

}
