// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Globalization.0.h"
#include "winrt/impl/Windows.UI.Text.0.h"
#include "winrt/impl/Windows.UI.ViewManagement.0.h"
#include "winrt/impl/Windows.UI.Text.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Text::Core {

struct WINRT_EBO ICoreTextCompositionCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextCompositionCompletedEventArgs>
{
    ICoreTextCompositionCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextCompositionSegment :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextCompositionSegment>
{
    ICoreTextCompositionSegment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextCompositionStartedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextCompositionStartedEventArgs>
{
    ICoreTextCompositionStartedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextEditContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextEditContext>
{
    ICoreTextEditContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextEditContext2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextEditContext2>
{
    ICoreTextEditContext2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextFormatUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextFormatUpdatingEventArgs>
{
    ICoreTextFormatUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextLayoutBounds :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextLayoutBounds>
{
    ICoreTextLayoutBounds(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextLayoutRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextLayoutRequest>
{
    ICoreTextLayoutRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextLayoutRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextLayoutRequestedEventArgs>
{
    ICoreTextLayoutRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextSelectionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextSelectionRequest>
{
    ICoreTextSelectionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextSelectionRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextSelectionRequestedEventArgs>
{
    ICoreTextSelectionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextSelectionUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextSelectionUpdatingEventArgs>
{
    ICoreTextSelectionUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextServicesManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextServicesManager>
{
    ICoreTextServicesManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextServicesManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextServicesManagerStatics>
{
    ICoreTextServicesManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextServicesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextServicesStatics>
{
    ICoreTextServicesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextTextRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextTextRequest>
{
    ICoreTextTextRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextTextRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextTextRequestedEventArgs>
{
    ICoreTextTextRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICoreTextTextUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICoreTextTextUpdatingEventArgs>
{
    ICoreTextTextUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
