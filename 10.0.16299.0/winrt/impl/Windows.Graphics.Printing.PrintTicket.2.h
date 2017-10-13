// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Xml.Dom.1.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.1.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintTicket {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintTicket {

struct WINRT_EBO PrintTicketCapabilities :
    Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities
{
    PrintTicketCapabilities(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTicketFeature :
    Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature
{
    PrintTicketFeature(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTicketOption :
    Windows::Graphics::Printing::PrintTicket::IPrintTicketOption
{
    PrintTicketOption(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTicketParameterDefinition :
    Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition
{
    PrintTicketParameterDefinition(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTicketParameterInitializer :
    Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer
{
    PrintTicketParameterInitializer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTicketValue :
    Windows::Graphics::Printing::PrintTicket::IPrintTicketValue
{
    PrintTicketValue(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WorkflowPrintTicket :
    Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket
{
    WorkflowPrintTicket(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WorkflowPrintTicketValidationResult :
    Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult
{
    WorkflowPrintTicketValidationResult(std::nullptr_t) noexcept {}
};

}
