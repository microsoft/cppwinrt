// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.StartScreen.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::StartScreen {

struct __declspec(uuid("b0234c3e-cd6f-4cb6-a611-61fd505f3ed1")) __declspec(novtable) IJumpList : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Items(Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem> ** value) = 0;
    virtual HRESULT __stdcall get_SystemGroupKind(winrt::Windows::UI::StartScreen::JumpListSystemGroupKind * value) = 0;
    virtual HRESULT __stdcall put_SystemGroupKind(winrt::Windows::UI::StartScreen::JumpListSystemGroupKind value) = 0;
    virtual HRESULT __stdcall abi_SaveAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("7adb6717-8b5d-4820-995b-9b418dbe48b0")) __declspec(novtable) IJumpListItem : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Kind(winrt::Windows::UI::StartScreen::JumpListItemKind * value) = 0;
    virtual HRESULT __stdcall get_Arguments(hstring * value) = 0;
    virtual HRESULT __stdcall get_RemovedByUser(bool * value) = 0;
    virtual HRESULT __stdcall get_Description(hstring * value) = 0;
    virtual HRESULT __stdcall put_Description(hstring value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DisplayName(hstring value) = 0;
    virtual HRESULT __stdcall get_GroupName(hstring * value) = 0;
    virtual HRESULT __stdcall put_GroupName(hstring value) = 0;
    virtual HRESULT __stdcall get_Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

struct __declspec(uuid("f1bfc4e8-c7aa-49cb-8dde-ecfccd7ad7e4")) __declspec(novtable) IJumpListItemStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithArguments(hstring arguments, hstring displayName, Windows::UI::StartScreen::IJumpListItem ** result) = 0;
    virtual HRESULT __stdcall abi_CreateSeparator(Windows::UI::StartScreen::IJumpListItem ** result) = 0;
};

struct __declspec(uuid("a7e0c681-e67e-4b74-8250-3f322c4d92c3")) __declspec(novtable) IJumpListStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_LoadCurrentAsync(Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> ** result) = 0;
    virtual HRESULT __stdcall abi_IsSupported(bool * result) = 0;
};

struct __declspec(uuid("9e9e51e0-2bb5-4bc0-bb8d-42b23abcc88d")) __declspec(novtable) ISecondaryTile : Windows::IInspectable
{
    virtual HRESULT __stdcall put_TileId(hstring value) = 0;
    virtual HRESULT __stdcall get_TileId(hstring * value) = 0;
    virtual HRESULT __stdcall put_Arguments(hstring value) = 0;
    virtual HRESULT __stdcall get_Arguments(hstring * value) = 0;
    virtual HRESULT __stdcall put_ShortName(hstring value) = 0;
    virtual HRESULT __stdcall get_ShortName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DisplayName(hstring value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall put_Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_SmallLogo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_SmallLogo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_WideLogo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_WideLogo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_LockScreenBadgeLogo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_LockScreenBadgeLogo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_LockScreenDisplayBadgeAndTileText(bool value) = 0;
    virtual HRESULT __stdcall get_LockScreenDisplayBadgeAndTileText(bool * value) = 0;
    virtual HRESULT __stdcall put_TileOptions(winrt::Windows::UI::StartScreen::TileOptions value) = 0;
    virtual HRESULT __stdcall get_TileOptions(winrt::Windows::UI::StartScreen::TileOptions * value) = 0;
    virtual HRESULT __stdcall put_ForegroundText(winrt::Windows::UI::StartScreen::ForegroundText value) = 0;
    virtual HRESULT __stdcall get_ForegroundText(winrt::Windows::UI::StartScreen::ForegroundText * value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall abi_RequestCreateAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestCreateAsyncWithPoint(Windows::Foundation::Point invocationPoint, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestCreateAsyncWithRect(Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestCreateAsyncWithRectAndPlacement(Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestDeleteAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestDeleteAsyncWithPoint(Windows::Foundation::Point invocationPoint, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestDeleteAsyncWithRect(Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestDeleteAsyncWithRectAndPlacement(Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_UpdateAsync(Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("b2f6cc35-3250-4990-923c-294ab4b694dd")) __declspec(novtable) ISecondaryTile2 : Windows::IInspectable
{
    virtual HRESULT __stdcall put_PhoneticName(hstring value) = 0;
    virtual HRESULT __stdcall get_PhoneticName(hstring * value) = 0;
    virtual HRESULT __stdcall get_VisualElements(Windows::UI::StartScreen::ISecondaryTileVisualElements ** value) = 0;
    virtual HRESULT __stdcall put_RoamingEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_RoamingEnabled(bool * value) = 0;
    virtual HRESULT __stdcall add_VisualElementsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_VisualElementsRequested(event_token token) = 0;
};

struct __declspec(uuid("57f52ca0-51bc-4abf-8ebf-627a0398b05a")) __declspec(novtable) ISecondaryTileFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateTile(hstring tileId, hstring shortName, hstring displayName, hstring arguments, winrt::Windows::UI::StartScreen::TileOptions tileOptions, Windows::Foundation::IUriRuntimeClass * logoReference, Windows::UI::StartScreen::ISecondaryTile ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWideTile(hstring tileId, hstring shortName, hstring displayName, hstring arguments, winrt::Windows::UI::StartScreen::TileOptions tileOptions, Windows::Foundation::IUriRuntimeClass * logoReference, Windows::Foundation::IUriRuntimeClass * wideLogoReference, Windows::UI::StartScreen::ISecondaryTile ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWithId(hstring tileId, Windows::UI::StartScreen::ISecondaryTile ** value) = 0;
};

struct __declspec(uuid("274b8a3b-522d-448e-9eb2-d0672ab345c8")) __declspec(novtable) ISecondaryTileFactory2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateMinimalTile(hstring tileId, hstring displayName, hstring arguments, Windows::Foundation::IUriRuntimeClass * square150x150Logo, winrt::Windows::UI::StartScreen::TileSize desiredSize, Windows::UI::StartScreen::ISecondaryTile ** value) = 0;
};

struct __declspec(uuid("99908dae-d051-4676-87fe-9ec242d83c74")) __declspec(novtable) ISecondaryTileStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Exists(hstring tileId, bool * exists) = 0;
    virtual HRESULT __stdcall abi_FindAllAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindAllForApplicationAsync(hstring applicationId, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindAllForPackageAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> ** operation) = 0;
};

struct __declspec(uuid("1d8df333-815e-413f-9f50-a81da70a96b2")) __declspec(novtable) ISecondaryTileVisualElements : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Square30x30Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Square30x30Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Square70x70Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Square70x70Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Square150x150Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Square150x150Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Wide310x150Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Wide310x150Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Square310x310Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Square310x310Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_ForegroundText(winrt::Windows::UI::StartScreen::ForegroundText value) = 0;
    virtual HRESULT __stdcall get_ForegroundText(winrt::Windows::UI::StartScreen::ForegroundText * value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_ShowNameOnSquare150x150Logo(bool value) = 0;
    virtual HRESULT __stdcall get_ShowNameOnSquare150x150Logo(bool * value) = 0;
    virtual HRESULT __stdcall put_ShowNameOnWide310x150Logo(bool value) = 0;
    virtual HRESULT __stdcall get_ShowNameOnWide310x150Logo(bool * value) = 0;
    virtual HRESULT __stdcall put_ShowNameOnSquare310x310Logo(bool value) = 0;
    virtual HRESULT __stdcall get_ShowNameOnSquare310x310Logo(bool * value) = 0;
};

struct __declspec(uuid("fd2e31d0-57dc-4794-8ecf-5682f5f3e6ef")) __declspec(novtable) ISecondaryTileVisualElements2 : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Square71x71Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Square71x71Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("56b55ad6-d15c-40f4-81e7-57ffd8f8a4e9")) __declspec(novtable) ISecondaryTileVisualElements3 : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Square44x44Logo(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_Square44x44Logo(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("c138333a-9308-4072-88cc-d068db347c68")) __declspec(novtable) IVisualElementsRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_VisualElements(Windows::UI::StartScreen::ISecondaryTileVisualElements ** value) = 0;
    virtual HRESULT __stdcall get_AlternateVisualElements(Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements> ** value) = 0;
    virtual HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::UI::StartScreen::IVisualElementsRequestDeferral ** deferral) = 0;
};

struct __declspec(uuid("a1656eb0-0126-4357-8204-bd82bb2a046d")) __declspec(novtable) IVisualElementsRequestDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("7b6fc982-3a0d-4ece-af96-cd17e1b00b2d")) __declspec(novtable) IVisualElementsRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::UI::StartScreen::IVisualElementsRequest ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::StartScreen::JumpList> { using default_interface = Windows::UI::StartScreen::IJumpList; };
template <> struct traits<Windows::UI::StartScreen::JumpListItem> { using default_interface = Windows::UI::StartScreen::IJumpListItem; };
template <> struct traits<Windows::UI::StartScreen::SecondaryTile> { using default_interface = Windows::UI::StartScreen::ISecondaryTile; };
template <> struct traits<Windows::UI::StartScreen::SecondaryTileVisualElements> { using default_interface = Windows::UI::StartScreen::ISecondaryTileVisualElements; };
template <> struct traits<Windows::UI::StartScreen::VisualElementsRequest> { using default_interface = Windows::UI::StartScreen::IVisualElementsRequest; };
template <> struct traits<Windows::UI::StartScreen::VisualElementsRequestDeferral> { using default_interface = Windows::UI::StartScreen::IVisualElementsRequestDeferral; };
template <> struct traits<Windows::UI::StartScreen::VisualElementsRequestedEventArgs> { using default_interface = Windows::UI::StartScreen::IVisualElementsRequestedEventArgs; };

}

namespace Windows::UI::StartScreen {

template <typename T> struct impl_IJumpList;
template <typename T> struct impl_IJumpListItem;
template <typename T> struct impl_IJumpListItemStatics;
template <typename T> struct impl_IJumpListStatics;
template <typename T> struct impl_ISecondaryTile;
template <typename T> struct impl_ISecondaryTile2;
template <typename T> struct impl_ISecondaryTileFactory;
template <typename T> struct impl_ISecondaryTileFactory2;
template <typename T> struct impl_ISecondaryTileStatics;
template <typename T> struct impl_ISecondaryTileVisualElements;
template <typename T> struct impl_ISecondaryTileVisualElements2;
template <typename T> struct impl_ISecondaryTileVisualElements3;
template <typename T> struct impl_IVisualElementsRequest;
template <typename T> struct impl_IVisualElementsRequestDeferral;
template <typename T> struct impl_IVisualElementsRequestedEventArgs;

}

namespace impl {

template <> struct traits<Windows::UI::StartScreen::IJumpList>
{
    using abi = ABI::Windows::UI::StartScreen::IJumpList;
    template <typename D> using consume = Windows::UI::StartScreen::impl_IJumpList<D>;
};

template <> struct traits<Windows::UI::StartScreen::IJumpListItem>
{
    using abi = ABI::Windows::UI::StartScreen::IJumpListItem;
    template <typename D> using consume = Windows::UI::StartScreen::impl_IJumpListItem<D>;
};

template <> struct traits<Windows::UI::StartScreen::IJumpListItemStatics>
{
    using abi = ABI::Windows::UI::StartScreen::IJumpListItemStatics;
    template <typename D> using consume = Windows::UI::StartScreen::impl_IJumpListItemStatics<D>;
};

template <> struct traits<Windows::UI::StartScreen::IJumpListStatics>
{
    using abi = ABI::Windows::UI::StartScreen::IJumpListStatics;
    template <typename D> using consume = Windows::UI::StartScreen::impl_IJumpListStatics<D>;
};

template <> struct traits<Windows::UI::StartScreen::ISecondaryTile>
{
    using abi = ABI::Windows::UI::StartScreen::ISecondaryTile;
    template <typename D> using consume = Windows::UI::StartScreen::impl_ISecondaryTile<D>;
};

template <> struct traits<Windows::UI::StartScreen::ISecondaryTile2>
{
    using abi = ABI::Windows::UI::StartScreen::ISecondaryTile2;
    template <typename D> using consume = Windows::UI::StartScreen::impl_ISecondaryTile2<D>;
};

template <> struct traits<Windows::UI::StartScreen::ISecondaryTileFactory>
{
    using abi = ABI::Windows::UI::StartScreen::ISecondaryTileFactory;
    template <typename D> using consume = Windows::UI::StartScreen::impl_ISecondaryTileFactory<D>;
};

template <> struct traits<Windows::UI::StartScreen::ISecondaryTileFactory2>
{
    using abi = ABI::Windows::UI::StartScreen::ISecondaryTileFactory2;
    template <typename D> using consume = Windows::UI::StartScreen::impl_ISecondaryTileFactory2<D>;
};

template <> struct traits<Windows::UI::StartScreen::ISecondaryTileStatics>
{
    using abi = ABI::Windows::UI::StartScreen::ISecondaryTileStatics;
    template <typename D> using consume = Windows::UI::StartScreen::impl_ISecondaryTileStatics<D>;
};

template <> struct traits<Windows::UI::StartScreen::ISecondaryTileVisualElements>
{
    using abi = ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements;
    template <typename D> using consume = Windows::UI::StartScreen::impl_ISecondaryTileVisualElements<D>;
};

template <> struct traits<Windows::UI::StartScreen::ISecondaryTileVisualElements2>
{
    using abi = ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements2;
    template <typename D> using consume = Windows::UI::StartScreen::impl_ISecondaryTileVisualElements2<D>;
};

template <> struct traits<Windows::UI::StartScreen::ISecondaryTileVisualElements3>
{
    using abi = ABI::Windows::UI::StartScreen::ISecondaryTileVisualElements3;
    template <typename D> using consume = Windows::UI::StartScreen::impl_ISecondaryTileVisualElements3<D>;
};

template <> struct traits<Windows::UI::StartScreen::IVisualElementsRequest>
{
    using abi = ABI::Windows::UI::StartScreen::IVisualElementsRequest;
    template <typename D> using consume = Windows::UI::StartScreen::impl_IVisualElementsRequest<D>;
};

template <> struct traits<Windows::UI::StartScreen::IVisualElementsRequestDeferral>
{
    using abi = ABI::Windows::UI::StartScreen::IVisualElementsRequestDeferral;
    template <typename D> using consume = Windows::UI::StartScreen::impl_IVisualElementsRequestDeferral<D>;
};

template <> struct traits<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>
{
    using abi = ABI::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs;
    template <typename D> using consume = Windows::UI::StartScreen::impl_IVisualElementsRequestedEventArgs<D>;
};

template <> struct traits<Windows::UI::StartScreen::JumpList>
{
    using abi = ABI::Windows::UI::StartScreen::JumpList;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.StartScreen.JumpList"; }
};

template <> struct traits<Windows::UI::StartScreen::JumpListItem>
{
    using abi = ABI::Windows::UI::StartScreen::JumpListItem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.StartScreen.JumpListItem"; }
};

template <> struct traits<Windows::UI::StartScreen::SecondaryTile>
{
    using abi = ABI::Windows::UI::StartScreen::SecondaryTile;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.StartScreen.SecondaryTile"; }
};

template <> struct traits<Windows::UI::StartScreen::SecondaryTileVisualElements>
{
    using abi = ABI::Windows::UI::StartScreen::SecondaryTileVisualElements;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.StartScreen.SecondaryTileVisualElements"; }
};

template <> struct traits<Windows::UI::StartScreen::VisualElementsRequest>
{
    using abi = ABI::Windows::UI::StartScreen::VisualElementsRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.StartScreen.VisualElementsRequest"; }
};

template <> struct traits<Windows::UI::StartScreen::VisualElementsRequestDeferral>
{
    using abi = ABI::Windows::UI::StartScreen::VisualElementsRequestDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.StartScreen.VisualElementsRequestDeferral"; }
};

template <> struct traits<Windows::UI::StartScreen::VisualElementsRequestedEventArgs>
{
    using abi = ABI::Windows::UI::StartScreen::VisualElementsRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.StartScreen.VisualElementsRequestedEventArgs"; }
};

}

}
