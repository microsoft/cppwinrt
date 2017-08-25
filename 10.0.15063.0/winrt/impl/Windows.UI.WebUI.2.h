// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.1.h"
#include "winrt/impl/Windows.ApplicationModel.Background.1.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.1.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.1.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.1.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.1.h"
#include "winrt/impl/Windows.ApplicationModel.Search.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.1.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.1.h"
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Devices.Printers.Extensions.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.1.h"
#include "winrt/impl/Windows.Storage.Provider.1.h"
#include "winrt/impl/Windows.Storage.Search.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Graphics.Printing.1.h"
#include "winrt/impl/Windows.UI.WebUI.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::WebUI {

struct ActivatedEventHandler : Windows::Foundation::IUnknown
{
    ActivatedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ActivatedEventHandler(L lambda);
    template <typename F> ActivatedEventHandler(F* function);
    template <typename O, typename M> ActivatedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::Activation::IActivatedEventArgs const& eventArgs) const;
};

struct EnteredBackgroundEventHandler : Windows::Foundation::IUnknown
{
    EnteredBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> EnteredBackgroundEventHandler(L lambda);
    template <typename F> EnteredBackgroundEventHandler(F* function);
    template <typename O, typename M> EnteredBackgroundEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::IEnteredBackgroundEventArgs const& e) const;
};

struct LeavingBackgroundEventHandler : Windows::Foundation::IUnknown
{
    LeavingBackgroundEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> LeavingBackgroundEventHandler(L lambda);
    template <typename F> LeavingBackgroundEventHandler(F* function);
    template <typename O, typename M> LeavingBackgroundEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::ILeavingBackgroundEventArgs const& e) const;
};

struct NavigatedEventHandler : Windows::Foundation::IUnknown
{
    NavigatedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> NavigatedEventHandler(L lambda);
    template <typename F> NavigatedEventHandler(F* function);
    template <typename O, typename M> NavigatedEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::WebUI::IWebUINavigatedEventArgs const& e) const;
};

struct ResumingEventHandler : Windows::Foundation::IUnknown
{
    ResumingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> ResumingEventHandler(L lambda);
    template <typename F> ResumingEventHandler(F* function);
    template <typename O, typename M> ResumingEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender) const;
};

struct SuspendingEventHandler : Windows::Foundation::IUnknown
{
    SuspendingEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SuspendingEventHandler(L lambda);
    template <typename F> SuspendingEventHandler(F* function);
    template <typename O, typename M> SuspendingEventHandler(O* object, M method);
    void operator()(Windows::Foundation::IInspectable const& sender, Windows::ApplicationModel::ISuspendingEventArgs const& e) const;
};

struct WINRT_EBO ActivatedDeferral :
    Windows::UI::WebUI::IActivatedDeferral
{
    ActivatedDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ActivatedOperation :
    Windows::UI::WebUI::IActivatedOperation
{
    ActivatedOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO EnteredBackgroundEventArgs :
    Windows::ApplicationModel::IEnteredBackgroundEventArgs
{
    EnteredBackgroundEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HtmlPrintDocumentSource :
    Windows::UI::WebUI::IHtmlPrintDocumentSource,
    impl::require<HtmlPrintDocumentSource, Windows::Foundation::IClosable>
{
    HtmlPrintDocumentSource(std::nullptr_t) noexcept {}
};

struct WINRT_EBO LeavingBackgroundEventArgs :
    Windows::ApplicationModel::ILeavingBackgroundEventArgs
{
    LeavingBackgroundEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SuspendingDeferral :
    Windows::ApplicationModel::ISuspendingDeferral
{
    SuspendingDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SuspendingEventArgs :
    Windows::ApplicationModel::ISuspendingEventArgs
{
    SuspendingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SuspendingOperation :
    Windows::ApplicationModel::ISuspendingOperation
{
    SuspendingOperation(std::nullptr_t) noexcept {}
};

struct WebUIApplication
{
    WebUIApplication() = delete;
    static event_token Activated(Windows::UI::WebUI::ActivatedEventHandler const& handler);
    using Activated_revoker = factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics>;
    static Activated_revoker Activated(auto_revoke_t, Windows::UI::WebUI::ActivatedEventHandler const& handler);
    static void Activated(event_token const& token);
    static event_token Suspending(Windows::UI::WebUI::SuspendingEventHandler const& handler);
    using Suspending_revoker = factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics>;
    static Suspending_revoker Suspending(auto_revoke_t, Windows::UI::WebUI::SuspendingEventHandler const& handler);
    static void Suspending(event_token const& token);
    static event_token Resuming(Windows::UI::WebUI::ResumingEventHandler const& handler);
    using Resuming_revoker = factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics>;
    static Resuming_revoker Resuming(auto_revoke_t, Windows::UI::WebUI::ResumingEventHandler const& handler);
    static void Resuming(event_token const& token);
    static event_token Navigated(Windows::UI::WebUI::NavigatedEventHandler const& handler);
    using Navigated_revoker = factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics>;
    static Navigated_revoker Navigated(auto_revoke_t, Windows::UI::WebUI::NavigatedEventHandler const& handler);
    static void Navigated(event_token const& token);
    static event_token LeavingBackground(Windows::UI::WebUI::LeavingBackgroundEventHandler const& handler);
    using LeavingBackground_revoker = factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics2>;
    static LeavingBackground_revoker LeavingBackground(auto_revoke_t, Windows::UI::WebUI::LeavingBackgroundEventHandler const& handler);
    static void LeavingBackground(event_token const& token);
    static event_token EnteredBackground(Windows::UI::WebUI::EnteredBackgroundEventHandler const& handler);
    using EnteredBackground_revoker = factory_event_revoker<Windows::UI::WebUI::IWebUIActivationStatics2>;
    static EnteredBackground_revoker EnteredBackground(auto_revoke_t, Windows::UI::WebUI::EnteredBackgroundEventHandler const& handler);
    static void EnteredBackground(event_token const& token);
    static void EnablePrelaunch(bool value);
};

struct WINRT_EBO WebUIAppointmentsProviderAddAppointmentActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs,
    impl::require<WebUIAppointmentsProviderAddAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIAppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs,
    impl::require<WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIAppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs,
    impl::require<WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIAppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs,
    impl::require<WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs :
    Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs,
    impl::require<WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIAppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WebUIBackgroundTaskInstance
{
    WebUIBackgroundTaskInstance() = delete;
    static Windows::UI::WebUI::IWebUIBackgroundTaskInstance Current();
};

struct WINRT_EBO WebUIBackgroundTaskInstanceRuntimeClass :
    Windows::UI::WebUI::IWebUIBackgroundTaskInstance,
    impl::require<WebUIBackgroundTaskInstanceRuntimeClass, Windows::ApplicationModel::Background::IBackgroundTaskInstance>
{
    WebUIBackgroundTaskInstanceRuntimeClass(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUICachedFileUpdaterActivatedEventArgs :
    Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs,
    impl::require<WebUICachedFileUpdaterActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUICachedFileUpdaterActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUICameraSettingsActivatedEventArgs :
    Windows::ApplicationModel::Activation::ICameraSettingsActivatedEventArgs,
    impl::require<WebUICameraSettingsActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUICameraSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIContactCallActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactCallActivatedEventArgs,
    impl::require<WebUIContactCallActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIContactCallActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIContactMapActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactMapActivatedEventArgs,
    impl::require<WebUIContactMapActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIContactMapActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIContactMessageActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactMessageActivatedEventArgs,
    impl::require<WebUIContactMessageActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIContactMessageActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIContactPanelActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs,
    impl::require<WebUIContactPanelActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIContactPanelActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIContactPickerActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactPickerActivatedEventArgs,
    impl::require<WebUIContactPickerActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIContactPickerActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIContactPostActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactPostActivatedEventArgs,
    impl::require<WebUIContactPostActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIContactPostActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIContactVideoCallActivatedEventArgs :
    Windows::ApplicationModel::Activation::IContactVideoCallActivatedEventArgs,
    impl::require<WebUIContactVideoCallActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIContactVideoCallActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIDeviceActivatedEventArgs :
    Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs,
    impl::require<WebUIDeviceActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIDeviceActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIDevicePairingActivatedEventArgs :
    Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs,
    impl::require<WebUIDevicePairingActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIDevicePairingActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIDialReceiverActivatedEventArgs :
    Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs,
    impl::require<WebUIDialReceiverActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIDialReceiverActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIFileActivatedEventArgs :
    Windows::ApplicationModel::Activation::IFileActivatedEventArgs,
    impl::require<WebUIFileActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIFileActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIFileOpenPickerActivatedEventArgs :
    Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs,
    impl::require<WebUIFileOpenPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIFileOpenPickerActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIFileOpenPickerContinuationEventArgs :
    Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs,
    impl::require<WebUIFileOpenPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIFileOpenPickerContinuationEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIFileSavePickerActivatedEventArgs :
    Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs,
    impl::require<WebUIFileSavePickerActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIFileSavePickerActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIFileSavePickerContinuationEventArgs :
    Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs,
    impl::require<WebUIFileSavePickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIFileSavePickerContinuationEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIFolderPickerContinuationEventArgs :
    Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs,
    impl::require<WebUIFolderPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIFolderPickerContinuationEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUILaunchActivatedEventArgs :
    Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,
    impl::require<WebUILaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUILaunchActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUILockScreenActivatedEventArgs :
    Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs,
    impl::require<WebUILockScreenActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUILockScreenActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUILockScreenCallActivatedEventArgs :
    Windows::ApplicationModel::Activation::ILockScreenCallActivatedEventArgs,
    impl::require<WebUILockScreenCallActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUILockScreenCallActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUILockScreenComponentActivatedEventArgs :
    Windows::ApplicationModel::Activation::IActivatedEventArgs,
    impl::require<WebUILockScreenComponentActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUILockScreenComponentActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUINavigatedDeferral :
    Windows::UI::WebUI::IWebUINavigatedDeferral
{
    WebUINavigatedDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUINavigatedEventArgs :
    Windows::UI::WebUI::IWebUINavigatedEventArgs
{
    WebUINavigatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUINavigatedOperation :
    Windows::UI::WebUI::IWebUINavigatedOperation
{
    WebUINavigatedOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIPrint3DWorkflowActivatedEventArgs :
    Windows::ApplicationModel::Activation::IPrint3DWorkflowActivatedEventArgs,
    impl::require<WebUIPrint3DWorkflowActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIPrint3DWorkflowActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIPrintTaskSettingsActivatedEventArgs :
    Windows::ApplicationModel::Activation::IPrintTaskSettingsActivatedEventArgs,
    impl::require<WebUIPrintTaskSettingsActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIPrintTaskSettingsActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIPrintWorkflowForegroundTaskActivatedEventArgs :
    Windows::ApplicationModel::Activation::IActivatedEventArgs,
    impl::require<WebUIPrintWorkflowForegroundTaskActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIPrintWorkflowForegroundTaskActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIProtocolActivatedEventArgs :
    Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,
    impl::require<WebUIProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIProtocolActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIProtocolForResultsActivatedEventArgs :
    Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs,
    impl::require<WebUIProtocolForResultsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIProtocolForResultsActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIRestrictedLaunchActivatedEventArgs :
    Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs,
    impl::require<WebUIRestrictedLaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIRestrictedLaunchActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUISearchActivatedEventArgs :
    Windows::ApplicationModel::Activation::ISearchActivatedEventArgs,
    impl::require<WebUISearchActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUISearchActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIShareTargetActivatedEventArgs :
    Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs,
    impl::require<WebUIShareTargetActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIShareTargetActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIToastNotificationActivatedEventArgs :
    Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs,
    impl::require<WebUIToastNotificationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIToastNotificationActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIUserDataAccountProviderActivatedEventArgs :
    Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs,
    impl::require<WebUIUserDataAccountProviderActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIUserDataAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIVoiceCommandActivatedEventArgs :
    Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs,
    impl::require<WebUIVoiceCommandActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIVoiceCommandActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIWalletActionActivatedEventArgs :
    Windows::ApplicationModel::Activation::IWalletActionActivatedEventArgs,
    impl::require<WebUIWalletActionActivatedEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIWalletActionActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIWebAccountProviderActivatedEventArgs :
    Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs,
    impl::require<WebUIWebAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIWebAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebUIWebAuthenticationBrokerContinuationEventArgs :
    Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs,
    impl::require<WebUIWebAuthenticationBrokerContinuationEventArgs, Windows::UI::WebUI::IActivatedEventArgsDeferral>
{
    WebUIWebAuthenticationBrokerContinuationEventArgs(std::nullptr_t) noexcept {}
};

}
