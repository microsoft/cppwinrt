// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Search.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.System.RemoteSystems.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.UI.ViewManagement.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Storage.1.h"
#include "Windows.ApplicationModel.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System {

struct __declspec(uuid("6d65339b-4d6f-45bc-9c5e-e49b3ff2758d")) __declspec(novtable) IAppMemoryReport : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PrivateCommitUsage(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_PeakPrivateCommitUsage(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_TotalCommitUsage(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_TotalCommitLimit(uint64_t * value) = 0;
};

struct __declspec(uuid("79f86664-feca-4da5-9e40-2bc63efdc979")) __declspec(novtable) IAppMemoryUsageLimitChangingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldLimit(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_NewLimit(uint64_t * value) = 0;
};

struct __declspec(uuid("bb91c27d-6b87-432a-bd04-776c6f5fb2ab")) __declspec(novtable) IFolderLauncherOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ItemsToSelect(Windows::Foundation::Collections::IVector<Windows::Storage::IStorageItem> ** value) = 0;
};

struct __declspec(uuid("7755911a-70c5-48e5-b637-5ba3441e4ee4")) __declspec(novtable) IKnownUserPropertiesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_FirstName(hstring * value) = 0;
    virtual HRESULT __stdcall get_LastName(hstring * value) = 0;
    virtual HRESULT __stdcall get_ProviderName(hstring * value) = 0;
    virtual HRESULT __stdcall get_AccountName(hstring * value) = 0;
    virtual HRESULT __stdcall get_GuestHost(hstring * value) = 0;
    virtual HRESULT __stdcall get_PrincipalName(hstring * value) = 0;
    virtual HRESULT __stdcall get_DomainName(hstring * value) = 0;
    virtual HRESULT __stdcall get_SessionInitiationProtocolUri(hstring * value) = 0;
};

struct __declspec(uuid("ec27a8df-f6d5-45ca-913a-70a40c5c8221")) __declspec(novtable) ILaunchUriResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::LaunchUriStatus * value) = 0;
    virtual HRESULT __stdcall get_Result(Windows::Foundation::Collections::IPropertySet ** value) = 0;
};

struct __declspec(uuid("bafa21d8-b071-4cd8-853e-341203e557d3")) __declspec(novtable) ILauncherOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TreatAsUntrusted(bool * value) = 0;
    virtual HRESULT __stdcall put_TreatAsUntrusted(bool value) = 0;
    virtual HRESULT __stdcall get_DisplayApplicationPicker(bool * value) = 0;
    virtual HRESULT __stdcall put_DisplayApplicationPicker(bool value) = 0;
    virtual HRESULT __stdcall get_UI(Windows::System::ILauncherUIOptions ** value) = 0;
    virtual HRESULT __stdcall get_PreferredApplicationPackageFamilyName(hstring * value) = 0;
    virtual HRESULT __stdcall put_PreferredApplicationPackageFamilyName(hstring value) = 0;
    virtual HRESULT __stdcall get_PreferredApplicationDisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall put_PreferredApplicationDisplayName(hstring value) = 0;
    virtual HRESULT __stdcall get_FallbackUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_FallbackUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_ContentType(hstring * value) = 0;
    virtual HRESULT __stdcall put_ContentType(hstring value) = 0;
};

struct __declspec(uuid("3ba08eb4-6e40-4dce-a1a3-2f53950afb49")) __declspec(novtable) ILauncherOptions2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TargetApplicationPackageFamilyName(hstring * value) = 0;
    virtual HRESULT __stdcall put_TargetApplicationPackageFamilyName(hstring value) = 0;
    virtual HRESULT __stdcall get_NeighboringFilesQuery(Windows::Storage::Search::IStorageFileQueryResult ** value) = 0;
    virtual HRESULT __stdcall put_NeighboringFilesQuery(Windows::Storage::Search::IStorageFileQueryResult * value) = 0;
};

struct __declspec(uuid("f0770655-4b63-4e3a-9107-4e687841923a")) __declspec(novtable) ILauncherOptions3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IgnoreAppUriHandlers(bool * value) = 0;
    virtual HRESULT __stdcall put_IgnoreAppUriHandlers(bool value) = 0;
};

struct __declspec(uuid("277151c3-9e3e-42f6-91a4-5dfdeb232451")) __declspec(novtable) ILauncherStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LaunchFileAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchFileWithOptionsAsync(Windows::Storage::IStorageFile * file, Windows::System::ILauncherOptions * options, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriWithOptionsAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::System::ILauncherOptions * options, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("59ba2fbb-24cb-4c02-a4c4-8294569d54f1")) __declspec(novtable) ILauncherStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LaunchUriForResultsAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::System::ILauncherOptions * options, Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriForResultsWithDataAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::System::ILauncherOptions * options, Windows::Foundation::Collections::IPropertySet * inputData, Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriWithDataAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::System::ILauncherOptions * options, Windows::Foundation::Collections::IPropertySet * inputData, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_QueryUriSupportAsync(Windows::Foundation::IUriRuntimeClass * uri, winrt::Windows::System::LaunchQuerySupportType launchQuerySupportType, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_QueryUriSupportWithPackageFamilyNameAsync(Windows::Foundation::IUriRuntimeClass * uri, winrt::Windows::System::LaunchQuerySupportType launchQuerySupportType, hstring packageFamilyName, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_QueryFileSupportAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_QueryFileSupportWithPackageFamilyNameAsync(Windows::Storage::IStorageFile * file, hstring packageFamilyName, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindUriSchemeHandlersAsync(hstring scheme, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindUriSchemeHandlersWithLaunchUriTypeAsync(hstring scheme, winrt::Windows::System::LaunchQuerySupportType launchQuerySupportType, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindFileHandlersAsync(hstring extension, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> ** operation) = 0;
};

struct __declspec(uuid("234261a8-9db3-4683-aa42-dc6f51d33847")) __declspec(novtable) ILauncherStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LaunchFolderAsync(Windows::Storage::IStorageFolder * folder, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchFolderWithOptionsAsync(Windows::Storage::IStorageFolder * folder, Windows::System::IFolderLauncherOptions * options, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("b9ec819f-b5a5-41c6-b3b3-dd1b3178bcf2")) __declspec(novtable) ILauncherStatics4 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_QueryAppUriSupportAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_QueryAppUriSupportWithPackageFamilyNameAsync(Windows::Foundation::IUriRuntimeClass * uri, hstring packageFamilyName, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchQuerySupportStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindAppUriHandlersAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppInfo>> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriForUserAsync(Windows::System::IUser * user, Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriWithOptionsForUserAsync(Windows::System::IUser * user, Windows::Foundation::IUriRuntimeClass * uri, Windows::System::ILauncherOptions * options, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriWithDataForUserAsync(Windows::System::IUser * user, Windows::Foundation::IUriRuntimeClass * uri, Windows::System::ILauncherOptions * options, Windows::Foundation::Collections::IPropertySet * inputData, Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriForResultsForUserAsync(Windows::System::IUser * user, Windows::Foundation::IUriRuntimeClass * uri, Windows::System::ILauncherOptions * options, Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriForResultsWithDataForUserAsync(Windows::System::IUser * user, Windows::Foundation::IUriRuntimeClass * uri, Windows::System::ILauncherOptions * options, Windows::Foundation::Collections::IPropertySet * inputData, Windows::Foundation::IAsyncOperation<Windows::System::LaunchUriResult> ** operation) = 0;
};

struct __declspec(uuid("1b25da6e-8aa6-41e9-8251-4165f5985f49")) __declspec(novtable) ILauncherUIOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InvocationPoint(Windows::Foundation::IReference<Windows::Foundation::Point> ** value) = 0;
    virtual HRESULT __stdcall put_InvocationPoint(Windows::Foundation::IReference<Windows::Foundation::Point> * value) = 0;
    virtual HRESULT __stdcall get_SelectionRect(Windows::Foundation::IReference<Windows::Foundation::Rect> ** value) = 0;
    virtual HRESULT __stdcall put_SelectionRect(Windows::Foundation::IReference<Windows::Foundation::Rect> * value) = 0;
    virtual HRESULT __stdcall get_PreferredPlacement(winrt::Windows::UI::Popups::Placement * value) = 0;
    virtual HRESULT __stdcall put_PreferredPlacement(winrt::Windows::UI::Popups::Placement value) = 0;
};

struct __declspec(uuid("8a9b29f1-7ca7-49de-9bd3-3c5b7184f616")) __declspec(novtable) ILauncherViewOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DesiredRemainingView(winrt::Windows::UI::ViewManagement::ViewSizePreference * value) = 0;
    virtual HRESULT __stdcall put_DesiredRemainingView(winrt::Windows::UI::ViewManagement::ViewSizePreference value) = 0;
};

struct __declspec(uuid("5c6c279c-d7ca-4779-9188-4057219ce64c")) __declspec(novtable) IMemoryManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AppMemoryUsage(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_AppMemoryUsageLimit(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_AppMemoryUsageLevel(winrt::Windows::System::AppMemoryUsageLevel * value) = 0;
    virtual HRESULT __stdcall add_AppMemoryUsageIncreased(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AppMemoryUsageIncreased(event_token token) = 0;
    virtual HRESULT __stdcall add_AppMemoryUsageDecreased(Windows::Foundation::EventHandler<Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AppMemoryUsageDecreased(event_token token) = 0;
    virtual HRESULT __stdcall add_AppMemoryUsageLimitChanging(Windows::Foundation::EventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AppMemoryUsageLimitChanging(event_token token) = 0;
};

struct __declspec(uuid("6eee351f-6d62-423f-9479-b01f9c9f7669")) __declspec(novtable) IMemoryManagerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetAppMemoryReport(Windows::System::IAppMemoryReport ** memoryReport) = 0;
    virtual HRESULT __stdcall abi_GetProcessMemoryReport(Windows::System::IProcessMemoryReport ** memoryReport) = 0;
};

struct __declspec(uuid("149b59ce-92ad-4e35-89eb-50dfb4c0d91c")) __declspec(novtable) IMemoryManagerStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TrySetAppMemoryUsageLimit(uint64_t value, bool * result) = 0;
};

struct __declspec(uuid("3080b9cf-f444-4a83-beaf-a549a0f3229c")) __declspec(novtable) IProcessLauncherOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StandardInput(Windows::Storage::Streams::IInputStream ** value) = 0;
    virtual HRESULT __stdcall put_StandardInput(Windows::Storage::Streams::IInputStream * value) = 0;
    virtual HRESULT __stdcall get_StandardOutput(Windows::Storage::Streams::IOutputStream ** value) = 0;
    virtual HRESULT __stdcall put_StandardOutput(Windows::Storage::Streams::IOutputStream * value) = 0;
    virtual HRESULT __stdcall get_StandardError(Windows::Storage::Streams::IOutputStream ** value) = 0;
    virtual HRESULT __stdcall put_StandardError(Windows::Storage::Streams::IOutputStream * value) = 0;
    virtual HRESULT __stdcall get_WorkingDirectory(hstring * value) = 0;
    virtual HRESULT __stdcall put_WorkingDirectory(hstring value) = 0;
};

struct __declspec(uuid("544c8934-86d8-4991-8e75-ece8a43b6b6d")) __declspec(novtable) IProcessLauncherResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ExitCode(uint32_t * value) = 0;
};

struct __declspec(uuid("33ab66e7-2d0e-448b-a6a0-c13c3836d09c")) __declspec(novtable) IProcessLauncherStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RunToCompletionAsync(hstring fileName, hstring args, Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> ** asyncOperationResult) = 0;
    virtual HRESULT __stdcall abi_RunToCompletionAsyncWithOptions(hstring fileName, hstring args, Windows::System::IProcessLauncherOptions * options, Windows::Foundation::IAsyncOperation<Windows::System::ProcessLauncherResult> ** asyncOperationResult) = 0;
};

struct __declspec(uuid("087305a8-9b70-4782-8741-3a982b6ce5e4")) __declspec(novtable) IProcessMemoryReport : Windows::IInspectable
{
    virtual HRESULT __stdcall get_PrivateWorkingSetUsage(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_TotalWorkingSetUsage(uint64_t * value) = 0;
};

struct __declspec(uuid("d581293a-6de9-4d28-9378-f86782e182bb")) __declspec(novtable) IProtocolForResultsOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReportCompleted(Windows::Foundation::Collections::IPropertySet * data) = 0;
};

struct __declspec(uuid("9e3a2788-2891-4cdf-a2d6-9dff7d02e693")) __declspec(novtable) IRemoteLauncherOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FallbackUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_FallbackUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_PreferredAppIds(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
};

struct __declspec(uuid("d7db7a93-a30c-48b7-9f21-051026a4e517")) __declspec(novtable) IRemoteLauncherStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LaunchUriAsync(Windows::System::RemoteSystems::IRemoteSystemConnectionRequest * remoteSystemConnectionRequest, Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriWithOptionsAsync(Windows::System::RemoteSystems::IRemoteSystemConnectionRequest * remoteSystemConnectionRequest, Windows::Foundation::IUriRuntimeClass * uri, Windows::System::IRemoteLauncherOptions * options, Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> ** operation) = 0;
    virtual HRESULT __stdcall abi_LaunchUriWithDataAsync(Windows::System::RemoteSystems::IRemoteSystemConnectionRequest * remoteSystemConnectionRequest, Windows::Foundation::IUriRuntimeClass * uri, Windows::System::IRemoteLauncherOptions * options, Windows::Foundation::Collections::IPropertySet * inputData, Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteLaunchUriStatus> ** operation) = 0;
};

struct __declspec(uuid("72e247ed-dd5b-4d6c-b1d0-c57a7bbb5f94")) __declspec(novtable) IShutdownManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_BeginShutdown(winrt::Windows::System::ShutdownKind shutdownKind, Windows::Foundation::TimeSpan timeout) = 0;
    virtual HRESULT __stdcall abi_CancelShutdown() = 0;
};

struct __declspec(uuid("9b3b2bea-a101-41ae-9fbd-028728bab73d")) __declspec(novtable) ITimeZoneSettingsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CurrentTimeZoneDisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_SupportedTimeZoneDisplayNames(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_CanChangeTimeZone(bool * value) = 0;
    virtual HRESULT __stdcall abi_ChangeTimeZoneByDisplayName(hstring timeZoneDisplayName) = 0;
};

struct __declspec(uuid("df9a26c6-e746-4bcd-b5d4-120103c4209b")) __declspec(novtable) IUser : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NonRoamableId(hstring * value) = 0;
    virtual HRESULT __stdcall get_AuthenticationStatus(winrt::Windows::System::UserAuthenticationStatus * value) = 0;
    virtual HRESULT __stdcall get_Type(winrt::Windows::System::UserType * value) = 0;
    virtual HRESULT __stdcall abi_GetPropertyAsync(hstring value, Windows::Foundation::IAsyncOperation<Windows::IInspectable> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetPropertiesAsync(Windows::Foundation::Collections::IVectorView<hstring> * values, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetPictureAsync(winrt::Windows::System::UserPictureSize desiredSize, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamReference> ** operation) = 0;
};

struct __declspec(uuid("88b59568-bb30-42fb-a270-e9902e40efa7")) __declspec(novtable) IUserAuthenticationStatusChangeDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("8c030f28-a711-4c1e-ab48-04179c15938f")) __declspec(novtable) IUserAuthenticationStatusChangingEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeferral(Windows::System::IUserAuthenticationStatusChangeDeferral ** deferral) = 0;
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
    virtual HRESULT __stdcall get_NewStatus(winrt::Windows::System::UserAuthenticationStatus * value) = 0;
    virtual HRESULT __stdcall get_CurrentStatus(winrt::Windows::System::UserAuthenticationStatus * value) = 0;
};

struct __declspec(uuid("086459dc-18c6-48db-bc99-724fb9203ccc")) __declspec(novtable) IUserChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
};

struct __declspec(uuid("bd1f6f6c-bb5d-4d7b-a5f0-c8cd11a38d42")) __declspec(novtable) IUserDeviceAssociationChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
    virtual HRESULT __stdcall get_NewUser(Windows::System::IUser ** value) = 0;
    virtual HRESULT __stdcall get_OldUser(Windows::System::IUser ** value) = 0;
};

struct __declspec(uuid("7e491e14-f85a-4c07-8da9-7fe3d0542343")) __declspec(novtable) IUserDeviceAssociationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FindUserFromDeviceId(hstring deviceId, Windows::System::IUser ** user) = 0;
    virtual HRESULT __stdcall add_UserDeviceAssociationChanged(Windows::Foundation::EventHandler<Windows::System::UserDeviceAssociationChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_UserDeviceAssociationChanged(event_token token) = 0;
};

struct __declspec(uuid("7d548008-f1e3-4a6c-8ddc-a9bb0f488aed")) __declspec(novtable) IUserPicker : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowGuestAccounts(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowGuestAccounts(bool value) = 0;
    virtual HRESULT __stdcall get_SuggestedSelectedUser(Windows::System::IUser ** value) = 0;
    virtual HRESULT __stdcall put_SuggestedSelectedUser(Windows::System::IUser * value) = 0;
    virtual HRESULT __stdcall abi_PickSingleUserAsync(Windows::Foundation::IAsyncOperation<Windows::System::User> ** pickSingleUserOperation) = 0;
};

struct __declspec(uuid("de3290dc-7e73-4df6-a1ae-4d7eca82b40d")) __declspec(novtable) IUserPickerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsSupported(bool * value) = 0;
};

struct __declspec(uuid("155eb23b-242a-45e0-a2e9-3171fc6a7fdd")) __declspec(novtable) IUserStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWatcher(Windows::System::IUserWatcher ** watcher) = 0;
    virtual HRESULT __stdcall abi_FindAllAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindAllAsyncByType(winrt::Windows::System::UserType type, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindAllAsyncByTypeAndStatus(winrt::Windows::System::UserType type, winrt::Windows::System::UserAuthenticationStatus status, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetFromId(hstring nonRoamableId, Windows::System::IUser ** value) = 0;
};

struct __declspec(uuid("155eb23b-242a-45e0-a2e9-3171fc6a7fbb")) __declspec(novtable) IUserWatcher : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::UserWatcherStatus * value) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall add_Added(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
    virtual HRESULT __stdcall add_Updated(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Updated(event_token token) = 0;
    virtual HRESULT __stdcall add_AuthenticationStatusChanged(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AuthenticationStatusChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_AuthenticationStatusChanging(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::System::UserAuthenticationStatusChangingEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_AuthenticationStatusChanging(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_Stopped(Windows::Foundation::TypedEventHandler<Windows::System::UserWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::System::AppMemoryReport> { using default_interface = Windows::System::IAppMemoryReport; };
template <> struct traits<Windows::System::AppMemoryUsageLimitChangingEventArgs> { using default_interface = Windows::System::IAppMemoryUsageLimitChangingEventArgs; };
template <> struct traits<Windows::System::FolderLauncherOptions> { using default_interface = Windows::System::IFolderLauncherOptions; };
template <> struct traits<Windows::System::LaunchUriResult> { using default_interface = Windows::System::ILaunchUriResult; };
template <> struct traits<Windows::System::LauncherOptions> { using default_interface = Windows::System::ILauncherOptions; };
template <> struct traits<Windows::System::LauncherUIOptions> { using default_interface = Windows::System::ILauncherUIOptions; };
template <> struct traits<Windows::System::ProcessLauncherOptions> { using default_interface = Windows::System::IProcessLauncherOptions; };
template <> struct traits<Windows::System::ProcessLauncherResult> { using default_interface = Windows::System::IProcessLauncherResult; };
template <> struct traits<Windows::System::ProcessMemoryReport> { using default_interface = Windows::System::IProcessMemoryReport; };
template <> struct traits<Windows::System::ProtocolForResultsOperation> { using default_interface = Windows::System::IProtocolForResultsOperation; };
template <> struct traits<Windows::System::RemoteLauncherOptions> { using default_interface = Windows::System::IRemoteLauncherOptions; };
template <> struct traits<Windows::System::User> { using default_interface = Windows::System::IUser; };
template <> struct traits<Windows::System::UserAuthenticationStatusChangeDeferral> { using default_interface = Windows::System::IUserAuthenticationStatusChangeDeferral; };
template <> struct traits<Windows::System::UserAuthenticationStatusChangingEventArgs> { using default_interface = Windows::System::IUserAuthenticationStatusChangingEventArgs; };
template <> struct traits<Windows::System::UserChangedEventArgs> { using default_interface = Windows::System::IUserChangedEventArgs; };
template <> struct traits<Windows::System::UserDeviceAssociationChangedEventArgs> { using default_interface = Windows::System::IUserDeviceAssociationChangedEventArgs; };
template <> struct traits<Windows::System::UserPicker> { using default_interface = Windows::System::IUserPicker; };
template <> struct traits<Windows::System::UserWatcher> { using default_interface = Windows::System::IUserWatcher; };

}

namespace Windows::System {

template <typename T> struct impl_IAppMemoryReport;
template <typename T> struct impl_IAppMemoryUsageLimitChangingEventArgs;
template <typename T> struct impl_IFolderLauncherOptions;
template <typename T> struct impl_IKnownUserPropertiesStatics;
template <typename T> struct impl_ILaunchUriResult;
template <typename T> struct impl_ILauncherOptions;
template <typename T> struct impl_ILauncherOptions2;
template <typename T> struct impl_ILauncherOptions3;
template <typename T> struct impl_ILauncherStatics;
template <typename T> struct impl_ILauncherStatics2;
template <typename T> struct impl_ILauncherStatics3;
template <typename T> struct impl_ILauncherStatics4;
template <typename T> struct impl_ILauncherUIOptions;
template <typename T> struct impl_ILauncherViewOptions;
template <typename T> struct impl_IMemoryManagerStatics;
template <typename T> struct impl_IMemoryManagerStatics2;
template <typename T> struct impl_IMemoryManagerStatics3;
template <typename T> struct impl_IProcessLauncherOptions;
template <typename T> struct impl_IProcessLauncherResult;
template <typename T> struct impl_IProcessLauncherStatics;
template <typename T> struct impl_IProcessMemoryReport;
template <typename T> struct impl_IProtocolForResultsOperation;
template <typename T> struct impl_IRemoteLauncherOptions;
template <typename T> struct impl_IRemoteLauncherStatics;
template <typename T> struct impl_IShutdownManagerStatics;
template <typename T> struct impl_ITimeZoneSettingsStatics;
template <typename T> struct impl_IUser;
template <typename T> struct impl_IUserAuthenticationStatusChangeDeferral;
template <typename T> struct impl_IUserAuthenticationStatusChangingEventArgs;
template <typename T> struct impl_IUserChangedEventArgs;
template <typename T> struct impl_IUserDeviceAssociationChangedEventArgs;
template <typename T> struct impl_IUserDeviceAssociationStatics;
template <typename T> struct impl_IUserPicker;
template <typename T> struct impl_IUserPickerStatics;
template <typename T> struct impl_IUserStatics;
template <typename T> struct impl_IUserWatcher;

}

namespace impl {

template <> struct traits<Windows::System::IAppMemoryReport>
{
    using abi = ABI::Windows::System::IAppMemoryReport;
    template <typename D> using consume = Windows::System::impl_IAppMemoryReport<D>;
};

template <> struct traits<Windows::System::IAppMemoryUsageLimitChangingEventArgs>
{
    using abi = ABI::Windows::System::IAppMemoryUsageLimitChangingEventArgs;
    template <typename D> using consume = Windows::System::impl_IAppMemoryUsageLimitChangingEventArgs<D>;
};

template <> struct traits<Windows::System::IFolderLauncherOptions>
{
    using abi = ABI::Windows::System::IFolderLauncherOptions;
    template <typename D> using consume = Windows::System::impl_IFolderLauncherOptions<D>;
};

template <> struct traits<Windows::System::IKnownUserPropertiesStatics>
{
    using abi = ABI::Windows::System::IKnownUserPropertiesStatics;
    template <typename D> using consume = Windows::System::impl_IKnownUserPropertiesStatics<D>;
};

template <> struct traits<Windows::System::ILaunchUriResult>
{
    using abi = ABI::Windows::System::ILaunchUriResult;
    template <typename D> using consume = Windows::System::impl_ILaunchUriResult<D>;
};

template <> struct traits<Windows::System::ILauncherOptions>
{
    using abi = ABI::Windows::System::ILauncherOptions;
    template <typename D> using consume = Windows::System::impl_ILauncherOptions<D>;
};

template <> struct traits<Windows::System::ILauncherOptions2>
{
    using abi = ABI::Windows::System::ILauncherOptions2;
    template <typename D> using consume = Windows::System::impl_ILauncherOptions2<D>;
};

template <> struct traits<Windows::System::ILauncherOptions3>
{
    using abi = ABI::Windows::System::ILauncherOptions3;
    template <typename D> using consume = Windows::System::impl_ILauncherOptions3<D>;
};

template <> struct traits<Windows::System::ILauncherStatics>
{
    using abi = ABI::Windows::System::ILauncherStatics;
    template <typename D> using consume = Windows::System::impl_ILauncherStatics<D>;
};

template <> struct traits<Windows::System::ILauncherStatics2>
{
    using abi = ABI::Windows::System::ILauncherStatics2;
    template <typename D> using consume = Windows::System::impl_ILauncherStatics2<D>;
};

template <> struct traits<Windows::System::ILauncherStatics3>
{
    using abi = ABI::Windows::System::ILauncherStatics3;
    template <typename D> using consume = Windows::System::impl_ILauncherStatics3<D>;
};

template <> struct traits<Windows::System::ILauncherStatics4>
{
    using abi = ABI::Windows::System::ILauncherStatics4;
    template <typename D> using consume = Windows::System::impl_ILauncherStatics4<D>;
};

template <> struct traits<Windows::System::ILauncherUIOptions>
{
    using abi = ABI::Windows::System::ILauncherUIOptions;
    template <typename D> using consume = Windows::System::impl_ILauncherUIOptions<D>;
};

template <> struct traits<Windows::System::ILauncherViewOptions>
{
    using abi = ABI::Windows::System::ILauncherViewOptions;
    template <typename D> using consume = Windows::System::impl_ILauncherViewOptions<D>;
};

template <> struct traits<Windows::System::IMemoryManagerStatics>
{
    using abi = ABI::Windows::System::IMemoryManagerStatics;
    template <typename D> using consume = Windows::System::impl_IMemoryManagerStatics<D>;
};

template <> struct traits<Windows::System::IMemoryManagerStatics2>
{
    using abi = ABI::Windows::System::IMemoryManagerStatics2;
    template <typename D> using consume = Windows::System::impl_IMemoryManagerStatics2<D>;
};

template <> struct traits<Windows::System::IMemoryManagerStatics3>
{
    using abi = ABI::Windows::System::IMemoryManagerStatics3;
    template <typename D> using consume = Windows::System::impl_IMemoryManagerStatics3<D>;
};

template <> struct traits<Windows::System::IProcessLauncherOptions>
{
    using abi = ABI::Windows::System::IProcessLauncherOptions;
    template <typename D> using consume = Windows::System::impl_IProcessLauncherOptions<D>;
};

template <> struct traits<Windows::System::IProcessLauncherResult>
{
    using abi = ABI::Windows::System::IProcessLauncherResult;
    template <typename D> using consume = Windows::System::impl_IProcessLauncherResult<D>;
};

template <> struct traits<Windows::System::IProcessLauncherStatics>
{
    using abi = ABI::Windows::System::IProcessLauncherStatics;
    template <typename D> using consume = Windows::System::impl_IProcessLauncherStatics<D>;
};

template <> struct traits<Windows::System::IProcessMemoryReport>
{
    using abi = ABI::Windows::System::IProcessMemoryReport;
    template <typename D> using consume = Windows::System::impl_IProcessMemoryReport<D>;
};

template <> struct traits<Windows::System::IProtocolForResultsOperation>
{
    using abi = ABI::Windows::System::IProtocolForResultsOperation;
    template <typename D> using consume = Windows::System::impl_IProtocolForResultsOperation<D>;
};

template <> struct traits<Windows::System::IRemoteLauncherOptions>
{
    using abi = ABI::Windows::System::IRemoteLauncherOptions;
    template <typename D> using consume = Windows::System::impl_IRemoteLauncherOptions<D>;
};

template <> struct traits<Windows::System::IRemoteLauncherStatics>
{
    using abi = ABI::Windows::System::IRemoteLauncherStatics;
    template <typename D> using consume = Windows::System::impl_IRemoteLauncherStatics<D>;
};

template <> struct traits<Windows::System::IShutdownManagerStatics>
{
    using abi = ABI::Windows::System::IShutdownManagerStatics;
    template <typename D> using consume = Windows::System::impl_IShutdownManagerStatics<D>;
};

template <> struct traits<Windows::System::ITimeZoneSettingsStatics>
{
    using abi = ABI::Windows::System::ITimeZoneSettingsStatics;
    template <typename D> using consume = Windows::System::impl_ITimeZoneSettingsStatics<D>;
};

template <> struct traits<Windows::System::IUser>
{
    using abi = ABI::Windows::System::IUser;
    template <typename D> using consume = Windows::System::impl_IUser<D>;
};

template <> struct traits<Windows::System::IUserAuthenticationStatusChangeDeferral>
{
    using abi = ABI::Windows::System::IUserAuthenticationStatusChangeDeferral;
    template <typename D> using consume = Windows::System::impl_IUserAuthenticationStatusChangeDeferral<D>;
};

template <> struct traits<Windows::System::IUserAuthenticationStatusChangingEventArgs>
{
    using abi = ABI::Windows::System::IUserAuthenticationStatusChangingEventArgs;
    template <typename D> using consume = Windows::System::impl_IUserAuthenticationStatusChangingEventArgs<D>;
};

template <> struct traits<Windows::System::IUserChangedEventArgs>
{
    using abi = ABI::Windows::System::IUserChangedEventArgs;
    template <typename D> using consume = Windows::System::impl_IUserChangedEventArgs<D>;
};

template <> struct traits<Windows::System::IUserDeviceAssociationChangedEventArgs>
{
    using abi = ABI::Windows::System::IUserDeviceAssociationChangedEventArgs;
    template <typename D> using consume = Windows::System::impl_IUserDeviceAssociationChangedEventArgs<D>;
};

template <> struct traits<Windows::System::IUserDeviceAssociationStatics>
{
    using abi = ABI::Windows::System::IUserDeviceAssociationStatics;
    template <typename D> using consume = Windows::System::impl_IUserDeviceAssociationStatics<D>;
};

template <> struct traits<Windows::System::IUserPicker>
{
    using abi = ABI::Windows::System::IUserPicker;
    template <typename D> using consume = Windows::System::impl_IUserPicker<D>;
};

template <> struct traits<Windows::System::IUserPickerStatics>
{
    using abi = ABI::Windows::System::IUserPickerStatics;
    template <typename D> using consume = Windows::System::impl_IUserPickerStatics<D>;
};

template <> struct traits<Windows::System::IUserStatics>
{
    using abi = ABI::Windows::System::IUserStatics;
    template <typename D> using consume = Windows::System::impl_IUserStatics<D>;
};

template <> struct traits<Windows::System::IUserWatcher>
{
    using abi = ABI::Windows::System::IUserWatcher;
    template <typename D> using consume = Windows::System::impl_IUserWatcher<D>;
};

template <> struct traits<Windows::System::AppMemoryReport>
{
    using abi = ABI::Windows::System::AppMemoryReport;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.AppMemoryReport"; }
};

template <> struct traits<Windows::System::AppMemoryUsageLimitChangingEventArgs>
{
    using abi = ABI::Windows::System::AppMemoryUsageLimitChangingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.AppMemoryUsageLimitChangingEventArgs"; }
};

template <> struct traits<Windows::System::FolderLauncherOptions>
{
    using abi = ABI::Windows::System::FolderLauncherOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.FolderLauncherOptions"; }
};

template <> struct traits<Windows::System::KnownUserProperties>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.KnownUserProperties"; }
};

template <> struct traits<Windows::System::LaunchUriResult>
{
    using abi = ABI::Windows::System::LaunchUriResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.LaunchUriResult"; }
};

template <> struct traits<Windows::System::Launcher>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Launcher"; }
};

template <> struct traits<Windows::System::LauncherOptions>
{
    using abi = ABI::Windows::System::LauncherOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.LauncherOptions"; }
};

template <> struct traits<Windows::System::LauncherUIOptions>
{
    using abi = ABI::Windows::System::LauncherUIOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.LauncherUIOptions"; }
};

template <> struct traits<Windows::System::MemoryManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.MemoryManager"; }
};

template <> struct traits<Windows::System::ProcessLauncher>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.ProcessLauncher"; }
};

template <> struct traits<Windows::System::ProcessLauncherOptions>
{
    using abi = ABI::Windows::System::ProcessLauncherOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.ProcessLauncherOptions"; }
};

template <> struct traits<Windows::System::ProcessLauncherResult>
{
    using abi = ABI::Windows::System::ProcessLauncherResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.ProcessLauncherResult"; }
};

template <> struct traits<Windows::System::ProcessMemoryReport>
{
    using abi = ABI::Windows::System::ProcessMemoryReport;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.ProcessMemoryReport"; }
};

template <> struct traits<Windows::System::ProtocolForResultsOperation>
{
    using abi = ABI::Windows::System::ProtocolForResultsOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.ProtocolForResultsOperation"; }
};

template <> struct traits<Windows::System::RemoteLauncher>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteLauncher"; }
};

template <> struct traits<Windows::System::RemoteLauncherOptions>
{
    using abi = ABI::Windows::System::RemoteLauncherOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteLauncherOptions"; }
};

template <> struct traits<Windows::System::ShutdownManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.ShutdownManager"; }
};

template <> struct traits<Windows::System::TimeZoneSettings>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.TimeZoneSettings"; }
};

template <> struct traits<Windows::System::User>
{
    using abi = ABI::Windows::System::User;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.User"; }
};

template <> struct traits<Windows::System::UserAuthenticationStatusChangeDeferral>
{
    using abi = ABI::Windows::System::UserAuthenticationStatusChangeDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.UserAuthenticationStatusChangeDeferral"; }
};

template <> struct traits<Windows::System::UserAuthenticationStatusChangingEventArgs>
{
    using abi = ABI::Windows::System::UserAuthenticationStatusChangingEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.UserAuthenticationStatusChangingEventArgs"; }
};

template <> struct traits<Windows::System::UserChangedEventArgs>
{
    using abi = ABI::Windows::System::UserChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.UserChangedEventArgs"; }
};

template <> struct traits<Windows::System::UserDeviceAssociation>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.UserDeviceAssociation"; }
};

template <> struct traits<Windows::System::UserDeviceAssociationChangedEventArgs>
{
    using abi = ABI::Windows::System::UserDeviceAssociationChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.UserDeviceAssociationChangedEventArgs"; }
};

template <> struct traits<Windows::System::UserPicker>
{
    using abi = ABI::Windows::System::UserPicker;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.UserPicker"; }
};

template <> struct traits<Windows::System::UserWatcher>
{
    using abi = ABI::Windows::System::UserWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.UserWatcher"; }
};

}

}
