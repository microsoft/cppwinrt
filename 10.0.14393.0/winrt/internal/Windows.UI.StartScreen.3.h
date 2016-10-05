// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.StartScreen.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::StartScreen {

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
    static Windows::UI::StartScreen::JumpListItem CreateWithArguments(hstring_ref arguments, hstring_ref displayName);
    static Windows::UI::StartScreen::JumpListItem CreateSeparator();
};

struct WINRT_EBO SecondaryTile :
    Windows::UI::StartScreen::ISecondaryTile,
    impl::require<SecondaryTile, Windows::UI::StartScreen::ISecondaryTile2>
{
    SecondaryTile(std::nullptr_t) noexcept {}
    SecondaryTile();
    SecondaryTile(hstring_ref tileId, hstring_ref shortName, hstring_ref displayName, hstring_ref arguments, Windows::UI::StartScreen::TileOptions tileOptions, const Windows::Foundation::Uri & logoReference);
    SecondaryTile(hstring_ref tileId, hstring_ref shortName, hstring_ref displayName, hstring_ref arguments, Windows::UI::StartScreen::TileOptions tileOptions, const Windows::Foundation::Uri & logoReference, const Windows::Foundation::Uri & wideLogoReference);
    SecondaryTile(hstring_ref tileId);
    SecondaryTile(hstring_ref tileId, hstring_ref displayName, hstring_ref arguments, const Windows::Foundation::Uri & square150x150Logo, Windows::UI::StartScreen::TileSize desiredSize);
    static bool Exists(hstring_ref tileId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllAsync(hstring_ref applicationId);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllForPackageAsync();
};

struct WINRT_EBO SecondaryTileVisualElements :
    Windows::UI::StartScreen::ISecondaryTileVisualElements,
    impl::require<SecondaryTileVisualElements, Windows::UI::StartScreen::ISecondaryTileVisualElements2, Windows::UI::StartScreen::ISecondaryTileVisualElements3>
{
    SecondaryTileVisualElements(std::nullptr_t) noexcept {}
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

}
