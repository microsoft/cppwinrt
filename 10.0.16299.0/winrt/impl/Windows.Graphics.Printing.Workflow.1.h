// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Activation.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.Graphics.Printing.Workflow.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::Workflow {

struct WINRT_EBO IPrintWorkflowBackgroundSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowBackgroundSession>
{
    IPrintWorkflowBackgroundSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowBackgroundSetupRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowBackgroundSetupRequestedEventArgs>
{
    IPrintWorkflowBackgroundSetupRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowConfiguration>
{
    IPrintWorkflowConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowForegroundSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowForegroundSession>
{
    IPrintWorkflowForegroundSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowForegroundSetupRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowForegroundSetupRequestedEventArgs>
{
    IPrintWorkflowForegroundSetupRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowObjectModelSourceFileContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowObjectModelSourceFileContent>
{
    IPrintWorkflowObjectModelSourceFileContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowObjectModelTargetPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowObjectModelTargetPackage>
{
    IPrintWorkflowObjectModelTargetPackage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowSourceContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowSourceContent>
{
    IPrintWorkflowSourceContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowSpoolStreamContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowSpoolStreamContent>
{
    IPrintWorkflowSpoolStreamContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowStreamTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowStreamTarget>
{
    IPrintWorkflowStreamTarget(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowSubmittedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowSubmittedEventArgs>
{
    IPrintWorkflowSubmittedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowSubmittedOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowSubmittedOperation>
{
    IPrintWorkflowSubmittedOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowTarget :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowTarget>
{
    IPrintWorkflowTarget(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowTriggerDetails>
{
    IPrintWorkflowTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowUIActivatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowUIActivatedEventArgs>,
    impl::require<IPrintWorkflowUIActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
{
    IPrintWorkflowUIActivatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintWorkflowXpsDataAvailableEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintWorkflowXpsDataAvailableEventArgs>
{
    IPrintWorkflowXpsDataAvailableEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
