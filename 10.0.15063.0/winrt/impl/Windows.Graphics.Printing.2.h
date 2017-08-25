// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Graphics.Printing.1.h"

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing {

struct PrintTaskSourceRequestedHandler : Windows::Foundation::IUnknown
{
    PrintTaskSourceRequestedHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> PrintTaskSourceRequestedHandler(L lambda);
    template <typename F> PrintTaskSourceRequestedHandler(F* function);
    template <typename O, typename M> PrintTaskSourceRequestedHandler(O* object, M method);
    void operator()(Windows::Graphics::Printing::PrintTaskSourceRequestedArgs const& args) const;
};

struct PrintPageDescription
{
    Windows::Foundation::Size PageSize;
    Windows::Foundation::Rect ImageableRect;
    uint32_t DpiX;
    uint32_t DpiY;
};

struct WINRT_EBO PrintManager :
    Windows::Graphics::Printing::IPrintManager
{
    PrintManager(std::nullptr_t) noexcept {}
    static Windows::Graphics::Printing::PrintManager GetForCurrentView();
    static Windows::Foundation::IAsyncOperation<bool> ShowPrintUIAsync();
    static bool IsSupported();
};

struct WINRT_EBO PrintPageInfo :
    Windows::Graphics::Printing::IPrintPageInfo
{
    PrintPageInfo(std::nullptr_t) noexcept {}
    PrintPageInfo();
};

struct WINRT_EBO PrintTask :
    Windows::Graphics::Printing::IPrintTask,
    impl::require<PrintTask, Windows::Graphics::Printing::IPrintTask2, Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>
{
    PrintTask(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTaskCompletedEventArgs :
    Windows::Graphics::Printing::IPrintTaskCompletedEventArgs
{
    PrintTaskCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTaskOptions :
    Windows::Graphics::Printing::IPrintTaskOptionsCore,
    impl::require<PrintTaskOptions, Windows::Graphics::Printing::IPrintTaskOptions, Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>
{
    PrintTaskOptions(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTaskProgressingEventArgs :
    Windows::Graphics::Printing::IPrintTaskProgressingEventArgs
{
    PrintTaskProgressingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTaskRequest :
    Windows::Graphics::Printing::IPrintTaskRequest
{
    PrintTaskRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTaskRequestedDeferral :
    Windows::Graphics::Printing::IPrintTaskRequestedDeferral
{
    PrintTaskRequestedDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTaskRequestedEventArgs :
    Windows::Graphics::Printing::IPrintTaskRequestedEventArgs
{
    PrintTaskRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTaskSourceRequestedArgs :
    Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs
{
    PrintTaskSourceRequestedArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PrintTaskSourceRequestedDeferral :
    Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral
{
    PrintTaskSourceRequestedDeferral(std::nullptr_t) noexcept {}
};

struct StandardPrintTaskOptions
{
    StandardPrintTaskOptions() = delete;
    static hstring MediaSize();
    static hstring MediaType();
    static hstring Orientation();
    static hstring PrintQuality();
    static hstring ColorMode();
    static hstring Duplex();
    static hstring Collation();
    static hstring Staple();
    static hstring HolePunch();
    static hstring Binding();
    static hstring Copies();
    static hstring NUp();
    static hstring InputBin();
    static hstring Bordering();
};

}
