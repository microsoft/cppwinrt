// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Core.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Popups.0.h"
#include "winrt/impl/Windows.UI.StartScreen.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::StartScreen {

struct WINRT_EBO IJumpList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJumpList>
{
    IJumpList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJumpListItem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJumpListItem>
{
    IJumpListItem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJumpListItemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJumpListItemStatics>
{
    IJumpListItemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IJumpListStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IJumpListStatics>
{
    IJumpListStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryTile :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTile>
{
    ISecondaryTile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryTile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTile2>,
    impl::require<ISecondaryTile2, Windows::UI::StartScreen::ISecondaryTile>
{
    ISecondaryTile2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryTileFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileFactory>
{
    ISecondaryTileFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryTileFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileFactory2>,
    impl::require<ISecondaryTileFactory2, Windows::UI::StartScreen::ISecondaryTileFactory>
{
    ISecondaryTileFactory2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryTileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileStatics>
{
    ISecondaryTileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryTileVisualElements :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileVisualElements>
{
    ISecondaryTileVisualElements(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryTileVisualElements2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileVisualElements2>
{
    ISecondaryTileVisualElements2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISecondaryTileVisualElements3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISecondaryTileVisualElements3>
{
    ISecondaryTileVisualElements3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStartScreenManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStartScreenManager>
{
    IStartScreenManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStartScreenManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStartScreenManagerStatics>
{
    IStartScreenManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualElementsRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualElementsRequest>
{
    IVisualElementsRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualElementsRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualElementsRequestDeferral>
{
    IVisualElementsRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVisualElementsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVisualElementsRequestedEventArgs>
{
    IVisualElementsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
