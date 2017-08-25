// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Search.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.RemoteSystems.0.h"
#include "winrt/impl/Windows.UI.Popups.0.h"
#include "winrt/impl/Windows.UI.ViewManagement.0.h"
#include "winrt/impl/Windows.System.0.h"

WINRT_EXPORT namespace winrt::Windows::System {

struct WINRT_EBO IAppDiagnosticInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppDiagnosticInfo>
{
    IAppDiagnosticInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppDiagnosticInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppDiagnosticInfoStatics>
{
    IAppDiagnosticInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppMemoryReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppMemoryReport>
{
    IAppMemoryReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppMemoryUsageLimitChangingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppMemoryUsageLimitChangingEventArgs>
{
    IAppMemoryUsageLimitChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFolderLauncherOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFolderLauncherOptions>
{
    IFolderLauncherOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IKnownUserPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownUserPropertiesStatics>
{
    IKnownUserPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILaunchUriResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILaunchUriResult>
{
    ILaunchUriResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherOptions>
{
    ILauncherOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherOptions2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherOptions2>
{
    ILauncherOptions2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherOptions3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherOptions3>
{
    ILauncherOptions3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherOptions4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherOptions4>
{
    ILauncherOptions4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherStatics>
{
    ILauncherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherStatics2>
{
    ILauncherStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherStatics3>
{
    ILauncherStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherStatics4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherStatics4>
{
    ILauncherStatics4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherUIOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherUIOptions>
{
    ILauncherUIOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILauncherViewOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILauncherViewOptions>
{
    ILauncherViewOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMemoryManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryManagerStatics>
{
    IMemoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMemoryManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryManagerStatics2>
{
    IMemoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMemoryManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMemoryManagerStatics3>
{
    IMemoryManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessLauncherOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessLauncherOptions>
{
    IProcessLauncherOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessLauncherResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessLauncherResult>
{
    IProcessLauncherResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessLauncherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessLauncherStatics>
{
    IProcessLauncherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessMemoryReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessMemoryReport>
{
    IProcessMemoryReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProtocolForResultsOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProtocolForResultsOperation>
{
    IProtocolForResultsOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteLauncherOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteLauncherOptions>
{
    IRemoteLauncherOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteLauncherStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteLauncherStatics>
{
    IRemoteLauncherStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShutdownManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShutdownManagerStatics>
{
    IShutdownManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShutdownManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShutdownManagerStatics2>,
    impl::require<IShutdownManagerStatics2, Windows::System::IShutdownManagerStatics>
{
    IShutdownManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITimeZoneSettingsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITimeZoneSettingsStatics>
{
    ITimeZoneSettingsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUser>
{
    IUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserAuthenticationStatusChangeDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserAuthenticationStatusChangeDeferral>
{
    IUserAuthenticationStatusChangeDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserAuthenticationStatusChangingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserAuthenticationStatusChangingEventArgs>
{
    IUserAuthenticationStatusChangingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserChangedEventArgs>
{
    IUserChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDeviceAssociationChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDeviceAssociationChangedEventArgs>
{
    IUserDeviceAssociationChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDeviceAssociationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDeviceAssociationStatics>
{
    IUserDeviceAssociationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserPicker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserPicker>
{
    IUserPicker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserPickerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserPickerStatics>
{
    IUserPickerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserStatics>
{
    IUserStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserWatcher>
{
    IUserWatcher(std::nullptr_t = nullptr) noexcept {}
};

}
