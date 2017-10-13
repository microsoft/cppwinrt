// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Xml.Dom.0.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintTicket {

struct WINRT_EBO IPrintTicketCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTicketCapabilities>
{
    IPrintTicketCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTicketFeature :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTicketFeature>
{
    IPrintTicketFeature(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTicketOption :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTicketOption>
{
    IPrintTicketOption(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTicketParameterDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTicketParameterDefinition>
{
    IPrintTicketParameterDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTicketParameterInitializer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTicketParameterInitializer>
{
    IPrintTicketParameterInitializer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTicketValue :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTicketValue>
{
    IPrintTicketValue(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWorkflowPrintTicket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWorkflowPrintTicket>
{
    IWorkflowPrintTicket(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWorkflowPrintTicketValidationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWorkflowPrintTicketValidationResult>
{
    IWorkflowPrintTicketValidationResult(std::nullptr_t = nullptr) noexcept {}
};

}
