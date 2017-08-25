// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Graphics.Printing.0.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing {

struct WINRT_EBO IPrintDocumentSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintDocumentSource>
{
    IPrintDocumentSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintManager>
{
    IPrintManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintManagerStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintManagerStatic>
{
    IPrintManagerStatic(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintManagerStatic2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintManagerStatic2>
{
    IPrintManagerStatic2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintPageInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintPageInfo>
{
    IPrintPageInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTask>
{
    IPrintTask(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTask2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTask2>
{
    IPrintTask2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskCompletedEventArgs>
{
    IPrintTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptions>
{
    IPrintTaskOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskOptionsCore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionsCore>
{
    IPrintTaskOptionsCore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskOptionsCoreProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionsCoreProperties>
{
    IPrintTaskOptionsCoreProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskOptionsCoreUIConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskOptionsCoreUIConfiguration>
{
    IPrintTaskOptionsCoreUIConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskProgressingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskProgressingEventArgs>
{
    IPrintTaskProgressingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskRequest>
{
    IPrintTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskRequestedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskRequestedDeferral>
{
    IPrintTaskRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskRequestedEventArgs>
{
    IPrintTaskRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskSourceRequestedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskSourceRequestedArgs>
{
    IPrintTaskSourceRequestedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskSourceRequestedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskSourceRequestedDeferral>
{
    IPrintTaskSourceRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPrintTaskTargetDeviceSupport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPrintTaskTargetDeviceSupport>
{
    IPrintTaskTargetDeviceSupport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStandardPrintTaskOptionsStatic :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardPrintTaskOptionsStatic>
{
    IStandardPrintTaskOptionsStatic(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStandardPrintTaskOptionsStatic2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardPrintTaskOptionsStatic2>
{
    IStandardPrintTaskOptionsStatic2(std::nullptr_t = nullptr) noexcept {}
};

}
