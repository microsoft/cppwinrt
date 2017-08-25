// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.StartScreen.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem> consume_Windows_UI_StartScreen_IJumpList<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpList)->get_Items(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::JumpListSystemGroupKind consume_Windows_UI_StartScreen_IJumpList<D>::SystemGroupKind() const
{
    Windows::UI::StartScreen::JumpListSystemGroupKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpList)->get_SystemGroupKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpList<D>::SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpList)->put_SystemGroupKind(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_StartScreen_IJumpList<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpList)->SaveAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::StartScreen::JumpListItemKind consume_Windows_UI_StartScreen_IJumpListItem<D>::Kind() const
{
    Windows::UI::StartScreen::JumpListItemKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_StartScreen_IJumpListItem<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_StartScreen_IJumpListItem<D>::RemovedByUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_RemovedByUser(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_StartScreen_IJumpListItem<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpListItem<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_IJumpListItem<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpListItem<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_IJumpListItem<D>::GroupName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_GroupName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpListItem<D>::GroupName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->put_GroupName(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_IJumpListItem<D>::Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpListItem<D>::Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->put_Logo(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::JumpListItem consume_Windows_UI_StartScreen_IJumpListItemStatics<D>::CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName) const
{
    Windows::UI::StartScreen::JumpListItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItemStatics)->CreateWithArguments(get_abi(arguments), get_abi(displayName), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::StartScreen::JumpListItem consume_Windows_UI_StartScreen_IJumpListItemStatics<D>::CreateSeparator() const
{
    Windows::UI::StartScreen::JumpListItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItemStatics)->CreateSeparator(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> consume_Windows_UI_StartScreen_IJumpListStatics<D>::LoadCurrentAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListStatics)->LoadCurrentAsync(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_StartScreen_IJumpListStatics<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListStatics)->IsSupported(&result));
    return result;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::TileId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_TileId(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile<D>::TileId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_TileId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::Arguments(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_Arguments(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::ShortName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_ShortName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile<D>::ShortName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_ShortName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTile<D>::Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::SmallLogo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_SmallLogo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTile<D>::SmallLogo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_SmallLogo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::WideLogo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_WideLogo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTile<D>::WideLogo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_WideLogo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::LockScreenBadgeLogo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_LockScreenBadgeLogo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTile<D>::LockScreenBadgeLogo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_LockScreenBadgeLogo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::LockScreenDisplayBadgeAndTileText(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_LockScreenDisplayBadgeAndTileText(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTile<D>::LockScreenDisplayBadgeAndTileText() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_LockScreenDisplayBadgeAndTileText(&value));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::TileOptions(Windows::UI::StartScreen::TileOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_TileOptions(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::TileOptions consume_Windows_UI_StartScreen_ISecondaryTile<D>::TileOptions() const
{
    Windows::UI::StartScreen::TileOptions value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_TileOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::ForegroundText(Windows::UI::StartScreen::ForegroundText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_ForegroundText(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::ForegroundText consume_Windows_UI_StartScreen_ISecondaryTile<D>::ForegroundText() const
{
    Windows::UI::StartScreen::ForegroundText value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_ForegroundText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_StartScreen_ISecondaryTile<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestCreateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestCreateAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestCreateAsync(Windows::Foundation::Point const& invocationPoint) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestCreateAsyncWithPoint(get_abi(invocationPoint), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestCreateForSelectionAsync(Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestCreateAsyncWithRect(get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestCreateForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestCreateAsyncWithRectAndPlacement(get_abi(selection), get_abi(preferredPlacement), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestDeleteAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestDeleteAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestDeleteAsync(Windows::Foundation::Point const& invocationPoint) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestDeleteAsyncWithPoint(get_abi(invocationPoint), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestDeleteForSelectionAsync(Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestDeleteAsyncWithRect(get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestDeleteForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestDeleteAsyncWithRectAndPlacement(get_abi(selection), get_abi(preferredPlacement), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::UpdateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->UpdateAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile2<D>::PhoneticName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->put_PhoneticName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile2<D>::PhoneticName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->get_PhoneticName(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTileVisualElements consume_Windows_UI_StartScreen_ISecondaryTile2<D>::VisualElements() const
{
    Windows::UI::StartScreen::SecondaryTileVisualElements value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->get_VisualElements(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile2<D>::RoamingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->put_RoamingEnabled(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTile2<D>::RoamingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->get_RoamingEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_StartScreen_ISecondaryTile2<D>::VisualElementsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->add_VisualElementsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::StartScreen::ISecondaryTile2> consume_Windows_UI_StartScreen_ISecondaryTile2<D>::VisualElementsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::StartScreen::ISecondaryTile2>(this, &abi_t<Windows::UI::StartScreen::ISecondaryTile2>::remove_VisualElementsRequested, VisualElementsRequested(handler));
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile2<D>::VisualElementsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->remove_VisualElementsRequested(get_abi(token)));
}

template <typename D> Windows::UI::StartScreen::SecondaryTile consume_Windows_UI_StartScreen_ISecondaryTileFactory<D>::CreateTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference) const
{
    Windows::UI::StartScreen::SecondaryTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileFactory)->CreateTile(get_abi(tileId), get_abi(shortName), get_abi(displayName), get_abi(arguments), get_abi(tileOptions), get_abi(logoReference), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile consume_Windows_UI_StartScreen_ISecondaryTileFactory<D>::CreateWideTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference) const
{
    Windows::UI::StartScreen::SecondaryTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileFactory)->CreateWideTile(get_abi(tileId), get_abi(shortName), get_abi(displayName), get_abi(arguments), get_abi(tileOptions), get_abi(logoReference), get_abi(wideLogoReference), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile consume_Windows_UI_StartScreen_ISecondaryTileFactory<D>::CreateWithId(param::hstring const& tileId) const
{
    Windows::UI::StartScreen::SecondaryTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileFactory)->CreateWithId(get_abi(tileId), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile consume_Windows_UI_StartScreen_ISecondaryTileFactory2<D>::CreateMinimalTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize) const
{
    Windows::UI::StartScreen::SecondaryTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileFactory2)->CreateMinimalTile(get_abi(tileId), get_abi(displayName), get_abi(arguments), get_abi(square150x150Logo), get_abi(desiredSize), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>::Exists(param::hstring const& tileId) const
{
    bool exists{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileStatics)->Exists(get_abi(tileId), &exists));
    return exists;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileStatics)->FindAllAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>::FindAllAsync(param::hstring const& applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileStatics)->FindAllForApplicationAsync(get_abi(applicationId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>::FindAllForPackageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileStatics)->FindAllForPackageAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square30x30Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Square30x30Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square30x30Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Square30x30Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square70x70Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Square70x70Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square70x70Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Square70x70Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square150x150Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Square150x150Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square150x150Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Square150x150Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Wide310x150Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Wide310x150Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Wide310x150Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Wide310x150Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square310x310Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Square310x310Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square310x310Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Square310x310Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ForegroundText(Windows::UI::StartScreen::ForegroundText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_ForegroundText(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::ForegroundText consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ForegroundText() const
{
    Windows::UI::StartScreen::ForegroundText value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_ForegroundText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnSquare150x150Logo(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_ShowNameOnSquare150x150Logo(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnSquare150x150Logo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_ShowNameOnSquare150x150Logo(&value));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnWide310x150Logo(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_ShowNameOnWide310x150Logo(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnWide310x150Logo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_ShowNameOnWide310x150Logo(&value));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnSquare310x310Logo(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_ShowNameOnSquare310x310Logo(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnSquare310x310Logo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_ShowNameOnSquare310x310Logo(&value));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements2<D>::Square71x71Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements2)->put_Square71x71Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements2<D>::Square71x71Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements2)->get_Square71x71Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements3<D>::Square44x44Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements3)->put_Square44x44Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements3<D>::Square44x44Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements3)->get_Square44x44Logo(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_UI_StartScreen_IStartScreenManager<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManager)->get_User(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_StartScreen_IStartScreenManager<D>::SupportsAppListEntry(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManager)->SupportsAppListEntry(get_abi(appListEntry), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_IStartScreenManager<D>::ContainsAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManager)->ContainsAppListEntryAsync(get_abi(appListEntry), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_IStartScreenManager<D>::RequestAddAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManager)->RequestAddAppListEntryAsync(get_abi(appListEntry), put_abi(operation)));
    return operation;
}

template <typename D> Windows::UI::StartScreen::StartScreenManager consume_Windows_UI_StartScreen_IStartScreenManagerStatics<D>::GetDefault() const
{
    Windows::UI::StartScreen::StartScreenManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManagerStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::StartScreenManager consume_Windows_UI_StartScreen_IStartScreenManagerStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::UI::StartScreen::StartScreenManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManagerStatics)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::StartScreen::SecondaryTileVisualElements consume_Windows_UI_StartScreen_IVisualElementsRequest<D>::VisualElements() const
{
    Windows::UI::StartScreen::SecondaryTileVisualElements value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequest)->get_VisualElements(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements> consume_Windows_UI_StartScreen_IVisualElementsRequest<D>::AlternateVisualElements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequest)->get_AlternateVisualElements(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_UI_StartScreen_IVisualElementsRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::VisualElementsRequestDeferral consume_Windows_UI_StartScreen_IVisualElementsRequest<D>::GetDeferral() const
{
    Windows::UI::StartScreen::VisualElementsRequestDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_UI_StartScreen_IVisualElementsRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequestDeferral)->Complete());
}

template <typename D> Windows::UI::StartScreen::VisualElementsRequest consume_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs<D>::Request() const
{
    Windows::UI::StartScreen::VisualElementsRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpList> : produce_base<D, Windows::UI::StartScreen::IJumpList>
{
    HRESULT __stdcall get_Items(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemGroupKind(abi_t<Windows::UI::StartScreen::JumpListSystemGroupKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SystemGroupKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemGroupKind(abi_t<Windows::UI::StartScreen::JumpListSystemGroupKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemGroupKind(*reinterpret_cast<Windows::UI::StartScreen::JumpListSystemGroupKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpListItem> : produce_base<D, Windows::UI::StartScreen::IJumpListItem>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::UI::StartScreen::JumpListItemKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemovedByUser(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemovedByUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GroupName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GroupName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GroupName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GroupName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpListItemStatics> : produce_base<D, Windows::UI::StartScreen::IJumpListItemStatics>
{
    HRESULT __stdcall CreateWithArguments(HSTRING arguments, HSTRING displayName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWithArguments(*reinterpret_cast<hstring const*>(&arguments), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSeparator(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateSeparator());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpListStatics> : produce_base<D, Windows::UI::StartScreen::IJumpListStatics>
{
    HRESULT __stdcall LoadCurrentAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().LoadCurrentAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsSupported(bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTile> : produce_base<D, Windows::UI::StartScreen::ISecondaryTile>
{
    HRESULT __stdcall put_TileId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TileId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TileId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Arguments(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Arguments(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShortName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShortName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShortName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShortName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmallLogo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmallLogo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallLogo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmallLogo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WideLogo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WideLogo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WideLogo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WideLogo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LockScreenBadgeLogo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LockScreenBadgeLogo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LockScreenBadgeLogo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LockScreenBadgeLogo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LockScreenDisplayBadgeAndTileText(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LockScreenDisplayBadgeAndTileText(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LockScreenDisplayBadgeAndTileText(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LockScreenDisplayBadgeAndTileText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TileOptions(abi_t<Windows::UI::StartScreen::TileOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TileOptions(*reinterpret_cast<Windows::UI::StartScreen::TileOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileOptions(abi_t<Windows::UI::StartScreen::TileOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TileOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundText(abi_t<Windows::UI::StartScreen::ForegroundText> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundText(*reinterpret_cast<Windows::UI::StartScreen::ForegroundText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundText(abi_t<Windows::UI::StartScreen::ForegroundText>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestCreateAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsyncWithPoint(abi_t<Windows::Foundation::Point> invocationPoint, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestCreateAsync(*reinterpret_cast<Windows::Foundation::Point const*>(&invocationPoint)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsyncWithRect(abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestCreateForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsyncWithRectAndPlacement(abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestCreateForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestDeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsyncWithPoint(abi_t<Windows::Foundation::Point> invocationPoint, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestDeleteAsync(*reinterpret_cast<Windows::Foundation::Point const*>(&invocationPoint)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsyncWithRect(abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestDeleteForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsyncWithRectAndPlacement(abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestDeleteForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UpdateAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UpdateAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTile2> : produce_base<D, Windows::UI::StartScreen::ISecondaryTile2>
{
    HRESULT __stdcall put_PhoneticName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhoneticName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneticName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhoneticName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisualElements(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VisualElements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RoamingEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoamingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoamingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisualElementsRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VisualElementsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisualElementsRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisualElementsRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileFactory> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileFactory>
{
    HRESULT __stdcall CreateTile(HSTRING tileId, HSTRING shortName, HSTRING displayName, HSTRING arguments, abi_t<Windows::UI::StartScreen::TileOptions> tileOptions, ::IUnknown* logoReference, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateTile(*reinterpret_cast<hstring const*>(&tileId), *reinterpret_cast<hstring const*>(&shortName), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&arguments), *reinterpret_cast<Windows::UI::StartScreen::TileOptions const*>(&tileOptions), *reinterpret_cast<Windows::Foundation::Uri const*>(&logoReference)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWideTile(HSTRING tileId, HSTRING shortName, HSTRING displayName, HSTRING arguments, abi_t<Windows::UI::StartScreen::TileOptions> tileOptions, ::IUnknown* logoReference, ::IUnknown* wideLogoReference, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWideTile(*reinterpret_cast<hstring const*>(&tileId), *reinterpret_cast<hstring const*>(&shortName), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&arguments), *reinterpret_cast<Windows::UI::StartScreen::TileOptions const*>(&tileOptions), *reinterpret_cast<Windows::Foundation::Uri const*>(&logoReference), *reinterpret_cast<Windows::Foundation::Uri const*>(&wideLogoReference)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithId(HSTRING tileId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithId(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileFactory2> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileFactory2>
{
    HRESULT __stdcall CreateMinimalTile(HSTRING tileId, HSTRING displayName, HSTRING arguments, ::IUnknown* square150x150Logo, abi_t<Windows::UI::StartScreen::TileSize> desiredSize, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateMinimalTile(*reinterpret_cast<hstring const*>(&tileId), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&arguments), *reinterpret_cast<Windows::Foundation::Uri const*>(&square150x150Logo), *reinterpret_cast<Windows::UI::StartScreen::TileSize const*>(&desiredSize)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileStatics> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileStatics>
{
    HRESULT __stdcall Exists(HSTRING tileId, bool* exists) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *exists = detach_abi(this->shim().Exists(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllForApplicationAsync(HSTRING applicationId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllAsync(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllForPackageAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllForPackageAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileVisualElements> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileVisualElements>
{
    HRESULT __stdcall put_Square30x30Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square30x30Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Square70x70Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square70x70Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square70x70Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Square70x70Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Square150x150Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square150x150Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square150x150Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Square150x150Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Wide310x150Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Wide310x150Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wide310x150Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Wide310x150Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Square310x310Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square310x310Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square310x310Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Square310x310Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundText(abi_t<Windows::UI::StartScreen::ForegroundText> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundText(*reinterpret_cast<Windows::UI::StartScreen::ForegroundText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundText(abi_t<Windows::UI::StartScreen::ForegroundText>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShowNameOnSquare150x150Logo(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNameOnSquare150x150Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnSquare150x150Logo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowNameOnSquare150x150Logo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShowNameOnWide310x150Logo(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNameOnWide310x150Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnWide310x150Logo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowNameOnWide310x150Logo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShowNameOnSquare310x310Logo(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNameOnSquare310x310Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnSquare310x310Logo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowNameOnSquare310x310Logo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileVisualElements2> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileVisualElements2>
{
    HRESULT __stdcall put_Square71x71Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square71x71Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square71x71Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Square71x71Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileVisualElements3> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileVisualElements3>
{
    HRESULT __stdcall put_Square44x44Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square44x44Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square44x44Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Square44x44Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IStartScreenManager> : produce_base<D, Windows::UI::StartScreen::IStartScreenManager>
{
    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SupportsAppListEntry(::IUnknown* appListEntry, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SupportsAppListEntry(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ContainsAppListEntryAsync(::IUnknown* appListEntry, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ContainsAppListEntryAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAddAppListEntryAsync(::IUnknown* appListEntry, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestAddAppListEntryAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IStartScreenManagerStatics> : produce_base<D, Windows::UI::StartScreen::IStartScreenManagerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IVisualElementsRequest> : produce_base<D, Windows::UI::StartScreen::IVisualElementsRequest>
{
    HRESULT __stdcall get_VisualElements(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VisualElements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateVisualElements(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateVisualElements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** deferral) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *deferral = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IVisualElementsRequestDeferral> : produce_base<D, Windows::UI::StartScreen::IVisualElementsRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IVisualElementsRequestedEventArgs> : produce_base<D, Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::StartScreen {

inline Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> JumpList::LoadCurrentAsync()
{
    return get_activation_factory<JumpList, Windows::UI::StartScreen::IJumpListStatics>().LoadCurrentAsync();
}

inline bool JumpList::IsSupported()
{
    return get_activation_factory<JumpList, Windows::UI::StartScreen::IJumpListStatics>().IsSupported();
}

inline Windows::UI::StartScreen::JumpListItem JumpListItem::CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName)
{
    return get_activation_factory<JumpListItem, Windows::UI::StartScreen::IJumpListItemStatics>().CreateWithArguments(arguments, displayName);
}

inline Windows::UI::StartScreen::JumpListItem JumpListItem::CreateSeparator()
{
    return get_activation_factory<JumpListItem, Windows::UI::StartScreen::IJumpListItemStatics>().CreateSeparator();
}

inline SecondaryTile::SecondaryTile() :
    SecondaryTile(activate_instance<SecondaryTile>())
{}

inline SecondaryTile::SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference) :
    SecondaryTile(get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileFactory>().CreateTile(tileId, shortName, displayName, arguments, tileOptions, logoReference))
{}

inline SecondaryTile::SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference) :
    SecondaryTile(get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileFactory>().CreateWideTile(tileId, shortName, displayName, arguments, tileOptions, logoReference, wideLogoReference))
{}

inline SecondaryTile::SecondaryTile(param::hstring const& tileId) :
    SecondaryTile(get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileFactory>().CreateWithId(tileId))
{}

inline SecondaryTile::SecondaryTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize) :
    SecondaryTile(get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileFactory2>().CreateMinimalTile(tileId, displayName, arguments, square150x150Logo, desiredSize))
{}

inline bool SecondaryTile::Exists(param::hstring const& tileId)
{
    return get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileStatics>().Exists(tileId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllAsync()
{
    return get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllAsync(param::hstring const& applicationId)
{
    return get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileStatics>().FindAllAsync(applicationId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllForPackageAsync()
{
    return get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileStatics>().FindAllForPackageAsync();
}

inline Windows::UI::StartScreen::StartScreenManager StartScreenManager::GetDefault()
{
    return get_activation_factory<StartScreenManager, Windows::UI::StartScreen::IStartScreenManagerStatics>().GetDefault();
}

inline Windows::UI::StartScreen::StartScreenManager StartScreenManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<StartScreenManager, Windows::UI::StartScreen::IStartScreenManagerStatics>().GetForUser(user);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::StartScreen::IJumpList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IJumpList> {};

template<> struct hash<winrt::Windows::UI::StartScreen::IJumpListItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IJumpListItem> {};

template<> struct hash<winrt::Windows::UI::StartScreen::IJumpListItemStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IJumpListItemStatics> {};

template<> struct hash<winrt::Windows::UI::StartScreen::IJumpListStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IJumpListStatics> {};

template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::ISecondaryTile> {};

template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTile2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::ISecondaryTile2> {};

template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::ISecondaryTileFactory> {};

template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileFactory2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::ISecondaryTileFactory2> {};

template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::ISecondaryTileStatics> {};

template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements> {};

template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements2> {};

template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements3> {};

template<> struct hash<winrt::Windows::UI::StartScreen::IStartScreenManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IStartScreenManager> {};

template<> struct hash<winrt::Windows::UI::StartScreen::IStartScreenManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IStartScreenManagerStatics> {};

template<> struct hash<winrt::Windows::UI::StartScreen::IVisualElementsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IVisualElementsRequest> {};

template<> struct hash<winrt::Windows::UI::StartScreen::IVisualElementsRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IVisualElementsRequestDeferral> {};

template<> struct hash<winrt::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs> {};

template<> struct hash<winrt::Windows::UI::StartScreen::JumpList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::JumpList> {};

template<> struct hash<winrt::Windows::UI::StartScreen::JumpListItem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::JumpListItem> {};

template<> struct hash<winrt::Windows::UI::StartScreen::SecondaryTile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::SecondaryTile> {};

template<> struct hash<winrt::Windows::UI::StartScreen::SecondaryTileVisualElements> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::SecondaryTileVisualElements> {};

template<> struct hash<winrt::Windows::UI::StartScreen::StartScreenManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::StartScreenManager> {};

template<> struct hash<winrt::Windows::UI::StartScreen::VisualElementsRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::VisualElementsRequest> {};

template<> struct hash<winrt::Windows::UI::StartScreen::VisualElementsRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::VisualElementsRequestDeferral> {};

template<> struct hash<winrt::Windows::UI::StartScreen::VisualElementsRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::StartScreen::VisualElementsRequestedEventArgs> {};

}

WINRT_WARNING_POP
