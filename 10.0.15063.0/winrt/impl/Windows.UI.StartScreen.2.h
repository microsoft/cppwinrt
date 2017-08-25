// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Core.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.UI.StartScreen.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::StartScreen {

struct WINRT_EBO JumpList :
    Windows::UI::StartScreen::IJumpList
{
    JumpList(std::nullptr_t) noexcept {}
    static Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> LoadCurrentAsync();
    static bool IsSupported();
};

struct WINRT_EBO JumpListItem :
    Windows::UI::StartScreen::IJumpListItem
{
    JumpListItem(std::nullptr_t) noexcept {}
    static Windows::UI::StartScreen::JumpListItem CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName);
    static Windows::UI::StartScreen::JumpListItem CreateSeparator();
};

struct WINRT_EBO SecondaryTile :
    Windows::UI::StartScreen::ISecondaryTile,
    impl::require<SecondaryTile, Windows::UI::StartScreen::ISecondaryTile2>
{
    SecondaryTile(std::nullptr_t) noexcept {}
    SecondaryTile();
    [[deprecated("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")]] SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference);
    [[deprecated("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")]] SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference);
    SecondaryTile(param::hstring const& tileId);
    SecondaryTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize);
    static bool Exists(param::hstring const& tileId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllAsync(param::hstring const& applicationId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllForPackageAsync();
};

struct WINRT_EBO SecondaryTileVisualElements :
    Windows::UI::StartScreen::ISecondaryTileVisualElements,
    impl::require<SecondaryTileVisualElements, Windows::UI::StartScreen::ISecondaryTileVisualElements2, Windows::UI::StartScreen::ISecondaryTileVisualElements3>
{
    SecondaryTileVisualElements(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StartScreenManager :
    Windows::UI::StartScreen::IStartScreenManager
{
    StartScreenManager(std::nullptr_t) noexcept {}
    static Windows::UI::StartScreen::StartScreenManager GetDefault();
    static Windows::UI::StartScreen::StartScreenManager GetForUser(Windows::System::User const& user);
};

struct WINRT_EBO VisualElementsRequest :
    Windows::UI::StartScreen::IVisualElementsRequest
{
    VisualElementsRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VisualElementsRequestDeferral :
    Windows::UI::StartScreen::IVisualElementsRequestDeferral
{
    VisualElementsRequestDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VisualElementsRequestedEventArgs :
    Windows::UI::StartScreen::IVisualElementsRequestedEventArgs
{
    VisualElementsRequestedEventArgs(std::nullptr_t) noexcept {}
};

}
