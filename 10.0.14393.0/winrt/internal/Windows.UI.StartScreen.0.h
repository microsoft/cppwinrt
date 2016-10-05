// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::StartScreen {

struct IJumpList;
struct IJumpListItem;
struct IJumpListItemStatics;
struct IJumpListStatics;
struct ISecondaryTile;
struct ISecondaryTile2;
struct ISecondaryTileFactory;
struct ISecondaryTileFactory2;
struct ISecondaryTileStatics;
struct ISecondaryTileVisualElements;
struct ISecondaryTileVisualElements2;
struct ISecondaryTileVisualElements3;
struct IVisualElementsRequest;
struct IVisualElementsRequestDeferral;
struct IVisualElementsRequestedEventArgs;
struct JumpList;
struct JumpListItem;
struct SecondaryTile;
struct SecondaryTileVisualElements;
struct VisualElementsRequest;
struct VisualElementsRequestDeferral;
struct VisualElementsRequestedEventArgs;

}

namespace Windows::UI::StartScreen {

struct IJumpList;
struct IJumpListItem;
struct IJumpListItemStatics;
struct IJumpListStatics;
struct ISecondaryTile;
struct ISecondaryTile2;
struct ISecondaryTileFactory;
struct ISecondaryTileFactory2;
struct ISecondaryTileStatics;
struct ISecondaryTileVisualElements;
struct ISecondaryTileVisualElements2;
struct ISecondaryTileVisualElements3;
struct IVisualElementsRequest;
struct IVisualElementsRequestDeferral;
struct IVisualElementsRequestedEventArgs;
struct JumpList;
struct JumpListItem;
struct SecondaryTile;
struct SecondaryTileVisualElements;
struct VisualElementsRequest;
struct VisualElementsRequestDeferral;
struct VisualElementsRequestedEventArgs;

}

namespace Windows::UI::StartScreen {

enum class ForegroundText
{
    Dark = 0,
    Light = 1,
};

enum class JumpListItemKind
{
    Arguments = 0,
    Separator = 1,
};

enum class JumpListSystemGroupKind
{
    None = 0,
    Frequent = 1,
    Recent = 2,
};

enum class TileOptions : unsigned
{
    None = 0x0,
    ShowNameOnLogo = 0x1,
    ShowNameOnWideLogo = 0x2,
    CopyOnDeployment = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(TileOptions)

enum class TileSize
{
    Default = 0,
    Square30x30 = 1,
    Square70x70 = 2,
    Square150x150 = 3,
    Wide310x150 = 4,
    Square310x310 = 5,
    Square71x71 = 6,
    Square44x44 = 7,
};

}

}
