// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.UI.3.h"
#include "internal/Windows.UI.Popups.3.h"
#include "internal/Windows.UI.StartScreen.3.h"
#include "Windows.UI.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpList> : produce_base<D, Windows::UI::StartScreen::IJumpList>
{
    HRESULT __stdcall get_Items(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemGroupKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind value) noexcept override
    {
        try
        {
            this->shim().SystemGroupKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveAsync());
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
    HRESULT __stdcall get_Kind(Windows::UI::StartScreen::JumpListItemKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Arguments(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemovedByUser(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemovedByUser());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GroupName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GroupName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_GroupName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().GroupName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
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
    HRESULT __stdcall abi_CreateWithArguments(abi_arg_in<hstring> arguments, abi_arg_in<hstring> displayName, abi_arg_out<Windows::UI::StartScreen::IJumpListItem> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWithArguments(*reinterpret_cast<const hstring *>(&arguments), *reinterpret_cast<const hstring *>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSeparator(abi_arg_out<Windows::UI::StartScreen::IJumpListItem> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateSeparator());
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
    HRESULT __stdcall abi_LoadCurrentAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().LoadCurrentAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsSupported(bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsSupported());
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
    HRESULT __stdcall put_TileId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().TileId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TileId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Arguments(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Arguments(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Arguments(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShortName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ShortName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShortName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShortName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmallLogo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().SmallLogo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallLogo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SmallLogo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WideLogo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().WideLogo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WideLogo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WideLogo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LockScreenBadgeLogo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().LockScreenBadgeLogo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LockScreenBadgeLogo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LockScreenBadgeLogo());
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
            this->shim().LockScreenDisplayBadgeAndTileText(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LockScreenDisplayBadgeAndTileText(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LockScreenDisplayBadgeAndTileText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TileOptions(Windows::UI::StartScreen::TileOptions value) noexcept override
    {
        try
        {
            this->shim().TileOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TileOptions(Windows::UI::StartScreen::TileOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TileOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundText(Windows::UI::StartScreen::ForegroundText value) noexcept override
    {
        try
        {
            this->shim().ForegroundText(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundText(Windows::UI::StartScreen::ForegroundText * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ForegroundText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().BackgroundColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCreateAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestCreateAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCreateAsyncWithPoint(abi_arg_in<Windows::Foundation::Point> invocationPoint, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestCreateAsync(*reinterpret_cast<const Windows::Foundation::Point *>(&invocationPoint)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCreateAsyncWithRect(abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestCreateForSelectionAsync(*reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestCreateAsyncWithRectAndPlacement(abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestCreateForSelectionAsync(*reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestDeleteAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestDeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestDeleteAsyncWithPoint(abi_arg_in<Windows::Foundation::Point> invocationPoint, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestDeleteAsync(*reinterpret_cast<const Windows::Foundation::Point *>(&invocationPoint)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestDeleteAsyncWithRect(abi_arg_in<Windows::Foundation::Rect> selection, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestDeleteForSelectionAsync(*reinterpret_cast<const Windows::Foundation::Rect *>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestDeleteAsyncWithRectAndPlacement(abi_arg_in<Windows::Foundation::Rect> selection, Windows::UI::Popups::Placement preferredPlacement, abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestDeleteForSelectionAsync(*reinterpret_cast<const Windows::Foundation::Rect *>(&selection), preferredPlacement));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UpdateAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UpdateAsync());
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
    HRESULT __stdcall put_PhoneticName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().PhoneticName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneticName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhoneticName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisualElements(abi_arg_out<Windows::UI::StartScreen::ISecondaryTileVisualElements> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VisualElements());
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
            this->shim().RoamingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoamingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VisualElementsRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().VisualElementsRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VisualElementsRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().VisualElementsRequested(token);
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
    HRESULT __stdcall abi_CreateTile(abi_arg_in<hstring> tileId, abi_arg_in<hstring> shortName, abi_arg_in<hstring> displayName, abi_arg_in<hstring> arguments, Windows::UI::StartScreen::TileOptions tileOptions, abi_arg_in<Windows::Foundation::IUriRuntimeClass> logoReference, abi_arg_out<Windows::UI::StartScreen::ISecondaryTile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateTile(*reinterpret_cast<const hstring *>(&tileId), *reinterpret_cast<const hstring *>(&shortName), *reinterpret_cast<const hstring *>(&displayName), *reinterpret_cast<const hstring *>(&arguments), tileOptions, *reinterpret_cast<const Windows::Foundation::Uri *>(&logoReference)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWideTile(abi_arg_in<hstring> tileId, abi_arg_in<hstring> shortName, abi_arg_in<hstring> displayName, abi_arg_in<hstring> arguments, Windows::UI::StartScreen::TileOptions tileOptions, abi_arg_in<Windows::Foundation::IUriRuntimeClass> logoReference, abi_arg_in<Windows::Foundation::IUriRuntimeClass> wideLogoReference, abi_arg_out<Windows::UI::StartScreen::ISecondaryTile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWideTile(*reinterpret_cast<const hstring *>(&tileId), *reinterpret_cast<const hstring *>(&shortName), *reinterpret_cast<const hstring *>(&displayName), *reinterpret_cast<const hstring *>(&arguments), tileOptions, *reinterpret_cast<const Windows::Foundation::Uri *>(&logoReference), *reinterpret_cast<const Windows::Foundation::Uri *>(&wideLogoReference)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithId(abi_arg_in<hstring> tileId, abi_arg_out<Windows::UI::StartScreen::ISecondaryTile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithId(*reinterpret_cast<const hstring *>(&tileId)));
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
    HRESULT __stdcall abi_CreateMinimalTile(abi_arg_in<hstring> tileId, abi_arg_in<hstring> displayName, abi_arg_in<hstring> arguments, abi_arg_in<Windows::Foundation::IUriRuntimeClass> square150x150Logo, Windows::UI::StartScreen::TileSize desiredSize, abi_arg_out<Windows::UI::StartScreen::ISecondaryTile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMinimalTile(*reinterpret_cast<const hstring *>(&tileId), *reinterpret_cast<const hstring *>(&displayName), *reinterpret_cast<const hstring *>(&arguments), *reinterpret_cast<const Windows::Foundation::Uri *>(&square150x150Logo), desiredSize));
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
    HRESULT __stdcall abi_Exists(abi_arg_in<hstring> tileId, bool * exists) noexcept override
    {
        try
        {
            *exists = detach(this->shim().Exists(*reinterpret_cast<const hstring *>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllForApplicationAsync(abi_arg_in<hstring> applicationId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAllAsync(*reinterpret_cast<const hstring *>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllForPackageAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FindAllForPackageAsync());
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
    HRESULT __stdcall put_Square30x30Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Square30x30Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Square70x70Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Square70x70Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square70x70Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Square70x70Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Square150x150Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Square150x150Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square150x150Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Square150x150Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Wide310x150Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Wide310x150Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wide310x150Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wide310x150Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Square310x310Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Square310x310Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square310x310Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Square310x310Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundText(Windows::UI::StartScreen::ForegroundText value) noexcept override
    {
        try
        {
            this->shim().ForegroundText(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundText(Windows::UI::StartScreen::ForegroundText * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ForegroundText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().BackgroundColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BackgroundColor());
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
            this->shim().ShowNameOnSquare150x150Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnSquare150x150Logo(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowNameOnSquare150x150Logo());
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
            this->shim().ShowNameOnWide310x150Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnWide310x150Logo(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowNameOnWide310x150Logo());
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
            this->shim().ShowNameOnSquare310x310Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnSquare310x310Logo(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ShowNameOnSquare310x310Logo());
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
    HRESULT __stdcall put_Square71x71Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Square71x71Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square71x71Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Square71x71Logo());
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
    HRESULT __stdcall put_Square44x44Logo(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().Square44x44Logo(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square44x44Logo(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Square44x44Logo());
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
struct produce<D, Windows::UI::StartScreen::IVisualElementsRequest> : produce_base<D, Windows::UI::StartScreen::IVisualElementsRequest>
{
    HRESULT __stdcall get_VisualElements(abi_arg_out<Windows::UI::StartScreen::ISecondaryTileVisualElements> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VisualElements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateVisualElements(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateVisualElements());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::UI::StartScreen::IVisualElementsRequestDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_Request(abi_arg_out<Windows::UI::StartScreen::IVisualElementsRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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

namespace Windows::UI::StartScreen {

template <typename D> Windows::UI::StartScreen::JumpListItemKind impl_IJumpListItem<D>::Kind() const
{
    Windows::UI::StartScreen::JumpListItemKind value {};
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> hstring impl_IJumpListItem<D>::Arguments() const
{
    hstring value;
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->get_Arguments(put(value)));
    return value;
}

template <typename D> bool impl_IJumpListItem<D>::RemovedByUser() const
{
    bool value {};
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->get_RemovedByUser(&value));
    return value;
}

template <typename D> hstring impl_IJumpListItem<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IJumpListItem<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> hstring impl_IJumpListItem<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IJumpListItem<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> hstring impl_IJumpListItem<D>::GroupName() const
{
    hstring value;
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->get_GroupName(put(value)));
    return value;
}

template <typename D> void impl_IJumpListItem<D>::GroupName(hstring_ref value) const
{
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->put_GroupName(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IJumpListItem<D>::Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->get_Logo(put(value)));
    return value;
}

template <typename D> void impl_IJumpListItem<D>::Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IJumpListItem &>(static_cast<const D &>(*this))->put_Logo(get(value)));
}

template <typename D> Windows::UI::StartScreen::JumpListItem impl_IJumpListItemStatics<D>::CreateWithArguments(hstring_ref arguments, hstring_ref displayName) const
{
    Windows::UI::StartScreen::JumpListItem result { nullptr };
    check_hresult(static_cast<const IJumpListItemStatics &>(static_cast<const D &>(*this))->abi_CreateWithArguments(get(arguments), get(displayName), put(result)));
    return result;
}

template <typename D> Windows::UI::StartScreen::JumpListItem impl_IJumpListItemStatics<D>::CreateSeparator() const
{
    Windows::UI::StartScreen::JumpListItem result { nullptr };
    check_hresult(static_cast<const IJumpListItemStatics &>(static_cast<const D &>(*this))->abi_CreateSeparator(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem> impl_IJumpList<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem> value;
    check_hresult(static_cast<const IJumpList &>(static_cast<const D &>(*this))->get_Items(put(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::JumpListSystemGroupKind impl_IJumpList<D>::SystemGroupKind() const
{
    Windows::UI::StartScreen::JumpListSystemGroupKind value {};
    check_hresult(static_cast<const IJumpList &>(static_cast<const D &>(*this))->get_SystemGroupKind(&value));
    return value;
}

template <typename D> void impl_IJumpList<D>::SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind value) const
{
    check_hresult(static_cast<const IJumpList &>(static_cast<const D &>(*this))->put_SystemGroupKind(value));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IJumpList<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IJumpList &>(static_cast<const D &>(*this))->abi_SaveAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> impl_IJumpListStatics<D>::LoadCurrentAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> result;
    check_hresult(static_cast<const IJumpListStatics &>(static_cast<const D &>(*this))->abi_LoadCurrentAsync(put(result)));
    return result;
}

template <typename D> bool impl_IJumpListStatics<D>::IsSupported() const
{
    bool result {};
    check_hresult(static_cast<const IJumpListStatics &>(static_cast<const D &>(*this))->abi_IsSupported(&result));
    return result;
}

template <typename D> void impl_ISecondaryTile<D>::TileId(hstring_ref value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_TileId(get(value)));
}

template <typename D> hstring impl_ISecondaryTile<D>::TileId() const
{
    hstring value;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_TileId(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::Arguments(hstring_ref value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_Arguments(get(value)));
}

template <typename D> hstring impl_ISecondaryTile<D>::Arguments() const
{
    hstring value;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_Arguments(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::ShortName(hstring_ref value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_ShortName(get(value)));
}

template <typename D> hstring impl_ISecondaryTile<D>::ShortName() const
{
    hstring value;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_ShortName(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> hstring impl_ISecondaryTile<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_Logo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTile<D>::Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_Logo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::SmallLogo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_SmallLogo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTile<D>::SmallLogo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_SmallLogo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::WideLogo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_WideLogo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTile<D>::WideLogo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_WideLogo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::LockScreenBadgeLogo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_LockScreenBadgeLogo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTile<D>::LockScreenBadgeLogo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_LockScreenBadgeLogo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::LockScreenDisplayBadgeAndTileText(bool value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_LockScreenDisplayBadgeAndTileText(value));
}

template <typename D> bool impl_ISecondaryTile<D>::LockScreenDisplayBadgeAndTileText() const
{
    bool value {};
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_LockScreenDisplayBadgeAndTileText(&value));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::TileOptions(Windows::UI::StartScreen::TileOptions value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_TileOptions(value));
}

template <typename D> Windows::UI::StartScreen::TileOptions impl_ISecondaryTile<D>::TileOptions() const
{
    Windows::UI::StartScreen::TileOptions value {};
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_TileOptions(&value));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::ForegroundText(Windows::UI::StartScreen::ForegroundText value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_ForegroundText(value));
}

template <typename D> Windows::UI::StartScreen::ForegroundText impl_ISecondaryTile<D>::ForegroundText() const
{
    Windows::UI::StartScreen::ForegroundText value {};
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_ForegroundText(&value));
    return value;
}

template <typename D> void impl_ISecondaryTile<D>::BackgroundColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->put_BackgroundColor(get(value)));
}

template <typename D> Windows::UI::Color impl_ISecondaryTile<D>::BackgroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->get_BackgroundColor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::RequestCreateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_RequestCreateAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::RequestCreateAsync(const Windows::Foundation::Point & invocationPoint) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_RequestCreateAsyncWithPoint(get(invocationPoint), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::RequestCreateForSelectionAsync(const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_RequestCreateAsyncWithRect(get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::RequestCreateForSelectionAsync(const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_RequestCreateAsyncWithRectAndPlacement(get(selection), preferredPlacement, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::RequestDeleteAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_RequestDeleteAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::RequestDeleteAsync(const Windows::Foundation::Point & invocationPoint) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_RequestDeleteAsyncWithPoint(get(invocationPoint), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::RequestDeleteForSelectionAsync(const Windows::Foundation::Rect & selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_RequestDeleteAsyncWithRect(get(selection), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::RequestDeleteForSelectionAsync(const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_RequestDeleteAsyncWithRectAndPlacement(get(selection), preferredPlacement, put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_ISecondaryTile<D>::UpdateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(static_cast<const ISecondaryTile &>(static_cast<const D &>(*this))->abi_UpdateAsync(put(operation)));
    return operation;
}

template <typename D> void impl_ISecondaryTile2<D>::PhoneticName(hstring_ref value) const
{
    check_hresult(static_cast<const ISecondaryTile2 &>(static_cast<const D &>(*this))->put_PhoneticName(get(value)));
}

template <typename D> hstring impl_ISecondaryTile2<D>::PhoneticName() const
{
    hstring value;
    check_hresult(static_cast<const ISecondaryTile2 &>(static_cast<const D &>(*this))->get_PhoneticName(put(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTileVisualElements impl_ISecondaryTile2<D>::VisualElements() const
{
    Windows::UI::StartScreen::SecondaryTileVisualElements value { nullptr };
    check_hresult(static_cast<const ISecondaryTile2 &>(static_cast<const D &>(*this))->get_VisualElements(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTile2<D>::RoamingEnabled(bool value) const
{
    check_hresult(static_cast<const ISecondaryTile2 &>(static_cast<const D &>(*this))->put_RoamingEnabled(value));
}

template <typename D> bool impl_ISecondaryTile2<D>::RoamingEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISecondaryTile2 &>(static_cast<const D &>(*this))->get_RoamingEnabled(&value));
    return value;
}

template <typename D> event_token impl_ISecondaryTile2<D>::VisualElementsRequested(const Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const ISecondaryTile2 &>(static_cast<const D &>(*this))->add_VisualElementsRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<ISecondaryTile2> impl_ISecondaryTile2<D>::VisualElementsRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, ISecondaryTile2>(this, &ABI::Windows::UI::StartScreen::ISecondaryTile2::remove_VisualElementsRequested, VisualElementsRequested(handler));
}

template <typename D> void impl_ISecondaryTile2<D>::VisualElementsRequested(event_token token) const
{
    check_hresult(static_cast<const ISecondaryTile2 &>(static_cast<const D &>(*this))->remove_VisualElementsRequested(token));
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::Square30x30Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_Square30x30Logo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTileVisualElements<D>::Square30x30Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_Square30x30Logo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::Square70x70Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_Square70x70Logo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTileVisualElements<D>::Square70x70Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_Square70x70Logo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::Square150x150Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_Square150x150Logo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTileVisualElements<D>::Square150x150Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_Square150x150Logo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::Wide310x150Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_Wide310x150Logo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTileVisualElements<D>::Wide310x150Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_Wide310x150Logo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::Square310x310Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_Square310x310Logo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTileVisualElements<D>::Square310x310Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_Square310x310Logo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::ForegroundText(Windows::UI::StartScreen::ForegroundText value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_ForegroundText(value));
}

template <typename D> Windows::UI::StartScreen::ForegroundText impl_ISecondaryTileVisualElements<D>::ForegroundText() const
{
    Windows::UI::StartScreen::ForegroundText value {};
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_ForegroundText(&value));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::BackgroundColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_BackgroundColor(get(value)));
}

template <typename D> Windows::UI::Color impl_ISecondaryTileVisualElements<D>::BackgroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_BackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::ShowNameOnSquare150x150Logo(bool value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_ShowNameOnSquare150x150Logo(value));
}

template <typename D> bool impl_ISecondaryTileVisualElements<D>::ShowNameOnSquare150x150Logo() const
{
    bool value {};
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_ShowNameOnSquare150x150Logo(&value));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::ShowNameOnWide310x150Logo(bool value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_ShowNameOnWide310x150Logo(value));
}

template <typename D> bool impl_ISecondaryTileVisualElements<D>::ShowNameOnWide310x150Logo() const
{
    bool value {};
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_ShowNameOnWide310x150Logo(&value));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements<D>::ShowNameOnSquare310x310Logo(bool value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->put_ShowNameOnSquare310x310Logo(value));
}

template <typename D> bool impl_ISecondaryTileVisualElements<D>::ShowNameOnSquare310x310Logo() const
{
    bool value {};
    check_hresult(static_cast<const ISecondaryTileVisualElements &>(static_cast<const D &>(*this))->get_ShowNameOnSquare310x310Logo(&value));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements2<D>::Square71x71Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements2 &>(static_cast<const D &>(*this))->put_Square71x71Logo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTileVisualElements2<D>::Square71x71Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTileVisualElements2 &>(static_cast<const D &>(*this))->get_Square71x71Logo(put(value)));
    return value;
}

template <typename D> void impl_ISecondaryTileVisualElements3<D>::Square44x44Logo(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const ISecondaryTileVisualElements3 &>(static_cast<const D &>(*this))->put_Square44x44Logo(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_ISecondaryTileVisualElements3<D>::Square44x44Logo() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const ISecondaryTileVisualElements3 &>(static_cast<const D &>(*this))->get_Square44x44Logo(put(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile impl_ISecondaryTileFactory<D>::CreateTile(hstring_ref tileId, hstring_ref shortName, hstring_ref displayName, hstring_ref arguments, Windows::UI::StartScreen::TileOptions tileOptions, const Windows::Foundation::Uri & logoReference) const
{
    Windows::UI::StartScreen::SecondaryTile value { nullptr };
    check_hresult(static_cast<const ISecondaryTileFactory &>(static_cast<const D &>(*this))->abi_CreateTile(get(tileId), get(shortName), get(displayName), get(arguments), tileOptions, get(logoReference), put(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile impl_ISecondaryTileFactory<D>::CreateWideTile(hstring_ref tileId, hstring_ref shortName, hstring_ref displayName, hstring_ref arguments, Windows::UI::StartScreen::TileOptions tileOptions, const Windows::Foundation::Uri & logoReference, const Windows::Foundation::Uri & wideLogoReference) const
{
    Windows::UI::StartScreen::SecondaryTile value { nullptr };
    check_hresult(static_cast<const ISecondaryTileFactory &>(static_cast<const D &>(*this))->abi_CreateWideTile(get(tileId), get(shortName), get(displayName), get(arguments), tileOptions, get(logoReference), get(wideLogoReference), put(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile impl_ISecondaryTileFactory<D>::CreateWithId(hstring_ref tileId) const
{
    Windows::UI::StartScreen::SecondaryTile value { nullptr };
    check_hresult(static_cast<const ISecondaryTileFactory &>(static_cast<const D &>(*this))->abi_CreateWithId(get(tileId), put(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile impl_ISecondaryTileFactory2<D>::CreateMinimalTile(hstring_ref tileId, hstring_ref displayName, hstring_ref arguments, const Windows::Foundation::Uri & square150x150Logo, Windows::UI::StartScreen::TileSize desiredSize) const
{
    Windows::UI::StartScreen::SecondaryTile value { nullptr };
    check_hresult(static_cast<const ISecondaryTileFactory2 &>(static_cast<const D &>(*this))->abi_CreateMinimalTile(get(tileId), get(displayName), get(arguments), get(square150x150Logo), desiredSize, put(value)));
    return value;
}

template <typename D> bool impl_ISecondaryTileStatics<D>::Exists(hstring_ref tileId) const
{
    bool exists {};
    check_hresult(static_cast<const ISecondaryTileStatics &>(static_cast<const D &>(*this))->abi_Exists(get(tileId), &exists));
    return exists;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> impl_ISecondaryTileStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation;
    check_hresult(static_cast<const ISecondaryTileStatics &>(static_cast<const D &>(*this))->abi_FindAllAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> impl_ISecondaryTileStatics<D>::FindAllAsync(hstring_ref applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation;
    check_hresult(static_cast<const ISecondaryTileStatics &>(static_cast<const D &>(*this))->abi_FindAllForApplicationAsync(get(applicationId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> impl_ISecondaryTileStatics<D>::FindAllForPackageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation;
    check_hresult(static_cast<const ISecondaryTileStatics &>(static_cast<const D &>(*this))->abi_FindAllForPackageAsync(put(operation)));
    return operation;
}

template <typename D> Windows::UI::StartScreen::VisualElementsRequest impl_IVisualElementsRequestedEventArgs<D>::Request() const
{
    Windows::UI::StartScreen::VisualElementsRequest value { nullptr };
    check_hresult(static_cast<const IVisualElementsRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTileVisualElements impl_IVisualElementsRequest<D>::VisualElements() const
{
    Windows::UI::StartScreen::SecondaryTileVisualElements value { nullptr };
    check_hresult(static_cast<const IVisualElementsRequest &>(static_cast<const D &>(*this))->get_VisualElements(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements> impl_IVisualElementsRequest<D>::AlternateVisualElements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements> value;
    check_hresult(static_cast<const IVisualElementsRequest &>(static_cast<const D &>(*this))->get_AlternateVisualElements(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IVisualElementsRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IVisualElementsRequest &>(static_cast<const D &>(*this))->get_Deadline(put(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::VisualElementsRequestDeferral impl_IVisualElementsRequest<D>::GetDeferral() const
{
    Windows::UI::StartScreen::VisualElementsRequestDeferral deferral { nullptr };
    check_hresult(static_cast<const IVisualElementsRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> void impl_IVisualElementsRequestDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IVisualElementsRequestDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

inline Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> JumpList::LoadCurrentAsync()
{
    return get_activation_factory<JumpList, IJumpListStatics>().LoadCurrentAsync();
}

inline bool JumpList::IsSupported()
{
    return get_activation_factory<JumpList, IJumpListStatics>().IsSupported();
}

inline Windows::UI::StartScreen::JumpListItem JumpListItem::CreateWithArguments(hstring_ref arguments, hstring_ref displayName)
{
    return get_activation_factory<JumpListItem, IJumpListItemStatics>().CreateWithArguments(arguments, displayName);
}

inline Windows::UI::StartScreen::JumpListItem JumpListItem::CreateSeparator()
{
    return get_activation_factory<JumpListItem, IJumpListItemStatics>().CreateSeparator();
}

inline SecondaryTile::SecondaryTile() :
    SecondaryTile(activate_instance<SecondaryTile>())
{}

inline SecondaryTile::SecondaryTile(hstring_ref tileId, hstring_ref shortName, hstring_ref displayName, hstring_ref arguments, Windows::UI::StartScreen::TileOptions tileOptions, const Windows::Foundation::Uri & logoReference) :
    SecondaryTile(get_activation_factory<SecondaryTile, ISecondaryTileFactory>().CreateTile(tileId, shortName, displayName, arguments, tileOptions, logoReference))
{}

inline SecondaryTile::SecondaryTile(hstring_ref tileId, hstring_ref shortName, hstring_ref displayName, hstring_ref arguments, Windows::UI::StartScreen::TileOptions tileOptions, const Windows::Foundation::Uri & logoReference, const Windows::Foundation::Uri & wideLogoReference) :
    SecondaryTile(get_activation_factory<SecondaryTile, ISecondaryTileFactory>().CreateWideTile(tileId, shortName, displayName, arguments, tileOptions, logoReference, wideLogoReference))
{}

inline SecondaryTile::SecondaryTile(hstring_ref tileId) :
    SecondaryTile(get_activation_factory<SecondaryTile, ISecondaryTileFactory>().CreateWithId(tileId))
{}

inline SecondaryTile::SecondaryTile(hstring_ref tileId, hstring_ref displayName, hstring_ref arguments, const Windows::Foundation::Uri & square150x150Logo, Windows::UI::StartScreen::TileSize desiredSize) :
    SecondaryTile(get_activation_factory<SecondaryTile, ISecondaryTileFactory2>().CreateMinimalTile(tileId, displayName, arguments, square150x150Logo, desiredSize))
{}

inline bool SecondaryTile::Exists(hstring_ref tileId)
{
    return get_activation_factory<SecondaryTile, ISecondaryTileStatics>().Exists(tileId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllAsync()
{
    return get_activation_factory<SecondaryTile, ISecondaryTileStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllAsync(hstring_ref applicationId)
{
    return get_activation_factory<SecondaryTile, ISecondaryTileStatics>().FindAllAsync(applicationId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllForPackageAsync()
{
    return get_activation_factory<SecondaryTile, ISecondaryTileStatics>().FindAllForPackageAsync();
}

}

}
