// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.0.h"
#include "winrt/impl/Windows.ApplicationModel.Background.0.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.0.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.0.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.0.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.0.h"
#include "winrt/impl/Windows.ApplicationModel.Search.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.0.h"
#include "winrt/impl/Windows.ApplicationModel.Wallet.0.h"
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Devices.Printers.Extensions.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Media.SpeechRecognition.0.h"
#include "winrt/impl/Windows.Security.Authentication.Web.0.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Pickers.Provider.0.h"
#include "winrt/impl/Windows.Storage.Provider.0.h"
#include "winrt/impl/Windows.Storage.Search.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Graphics.Printing.0.h"
#include "winrt/impl/Windows.UI.WebUI.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::WebUI {

struct WINRT_EBO IActivatedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivatedDeferral>
{
    IActivatedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IActivatedEventArgsDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivatedEventArgsDeferral>
{
    IActivatedEventArgsDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IActivatedOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IActivatedOperation>
{
    IActivatedOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHtmlPrintDocumentSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHtmlPrintDocumentSource>,
    impl::require<IHtmlPrintDocumentSource, Windows::Graphics::Printing::IPrintDocumentSource>
{
    IHtmlPrintDocumentSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUIActivationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUIActivationStatics>
{
    IWebUIActivationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUIActivationStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUIActivationStatics2>
{
    IWebUIActivationStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUIBackgroundTaskInstance :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUIBackgroundTaskInstance>
{
    IWebUIBackgroundTaskInstance(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUIBackgroundTaskInstanceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUIBackgroundTaskInstanceStatics>
{
    IWebUIBackgroundTaskInstanceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUINavigatedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUINavigatedDeferral>
{
    IWebUINavigatedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUINavigatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUINavigatedEventArgs>
{
    IWebUINavigatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebUINavigatedOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebUINavigatedOperation>
{
    IWebUINavigatedOperation(std::nullptr_t = nullptr) noexcept {}
};

}
