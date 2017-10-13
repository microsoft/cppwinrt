// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Graphics.Printing.Workflow.1.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::Workflow {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::Workflow {

struct WINRT_EBO PrintWorkflowBackgroundSession :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession
{
    PrintWorkflowBackgroundSession(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowBackgroundSetupRequestedEventArgs :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs
{
    PrintWorkflowBackgroundSetupRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowConfiguration :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration
{
    PrintWorkflowConfiguration(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowForegroundSession :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession
{
    PrintWorkflowForegroundSession(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowForegroundSetupRequestedEventArgs :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs
{
    PrintWorkflowForegroundSetupRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowObjectModelSourceFileContent :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent
{
    PrintWorkflowObjectModelSourceFileContent(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowObjectModelTargetPackage :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage
{
    PrintWorkflowObjectModelTargetPackage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowSourceContent :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent
{
    PrintWorkflowSourceContent(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowSpoolStreamContent :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent
{
    PrintWorkflowSpoolStreamContent(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowStreamTarget :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget
{
    PrintWorkflowStreamTarget(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowSubmittedEventArgs :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs
{
    PrintWorkflowSubmittedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowSubmittedOperation :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation
{
    PrintWorkflowSubmittedOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowTarget :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget
{
    PrintWorkflowTarget(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowTriggerDetails :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails
{
    PrintWorkflowTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowUIActivatedEventArgs :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs
{
    PrintWorkflowUIActivatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintWorkflowXpsDataAvailableEventArgs :
    Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs
{
    PrintWorkflowXpsDataAvailableEventArgs(std::nullptr_t) noexcept {}
};

}
