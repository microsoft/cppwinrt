// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Xaml.Hosting.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> uint32_t consume_Windows_UI_Xaml_Hosting_IDesignerAppExitedEventArgs<D>::ExitCode() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs)->get_ExitCode(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Hosting_IDesignerAppManager<D>::AppUserModelId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppManager)->get_AppUserModelId(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Hosting_IDesignerAppManager<D>::DesignerAppExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesignerAppManager, Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppManager)->add_DesignerAppExited(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Hosting::IDesignerAppManager> consume_Windows_UI_Xaml_Hosting_IDesignerAppManager<D>::DesignerAppExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesignerAppManager, Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Hosting::IDesignerAppManager>(this, &abi_t<Windows::UI::Xaml::Hosting::IDesignerAppManager>::remove_DesignerAppExited, DesignerAppExited(value));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IDesignerAppManager<D>::DesignerAppExited(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppManager)->remove_DesignerAppExited(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Hosting::DesignerAppView> consume_Windows_UI_Xaml_Hosting_IDesignerAppManager<D>::CreateNewViewAsync(Windows::UI::Xaml::Hosting::DesignerAppViewState const& initialViewState, Windows::Foundation::Size const& initialViewSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Hosting::DesignerAppView> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppManager)->CreateNewViewAsync(get_abi(initialViewState), get_abi(initialViewSize), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Xaml_Hosting_IDesignerAppManager<D>::LoadObjectIntoAppAsync(param::hstring const& dllName, GUID const& classId, param::hstring const& initializationData) const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppManager)->LoadObjectIntoAppAsync(get_abi(dllName), get_abi(classId), get_abi(initializationData), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Hosting::DesignerAppManager consume_Windows_UI_Xaml_Hosting_IDesignerAppManagerFactory<D>::Create(param::hstring const& appUserModelId) const
{
    Windows::UI::Xaml::Hosting::DesignerAppManager instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory)->Create(get_abi(appUserModelId), put_abi(instance)));
    return instance;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Hosting_IDesignerAppView<D>::ApplicationViewId() const noexcept
{
    int32_t value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppView)->get_ApplicationViewId(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Hosting_IDesignerAppView<D>::AppUserModelId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppView)->get_AppUserModelId(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Hosting::DesignerAppViewState consume_Windows_UI_Xaml_Hosting_IDesignerAppView<D>::ViewState() const noexcept
{
    Windows::UI::Xaml::Hosting::DesignerAppViewState value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppView)->get_ViewState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_Hosting_IDesignerAppView<D>::ViewSize() const noexcept
{
    Windows::Foundation::Size value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppView)->get_ViewSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Xaml_Hosting_IDesignerAppView<D>::UpdateViewAsync(Windows::UI::Xaml::Hosting::DesignerAppViewState const& viewState, Windows::Foundation::Size const& viewSize) const
{
    Windows::Foundation::IAsyncAction returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IDesignerAppView)->UpdateViewAsync(get_abi(viewState), get_abi(viewSize), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>::GetElementVisual(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::UI::Composition::Visual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics)->GetElementVisual(get_abi(element), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>::GetElementChildVisual(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::UI::Composition::Visual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics)->GetElementChildVisual(get_abi(element), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>::SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics)->SetElementChildVisual(get_abi(element), get_abi(visual)));
}

template <typename D> Windows::UI::Composition::CompositionPropertySet consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>::GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer) const
{
    Windows::UI::Composition::CompositionPropertySet result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics)->GetScrollViewerManipulationPropertySet(get_abi(scrollViewer), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>::SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2)->SetImplicitShowAnimation(get_abi(element), get_abi(animation)));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>::SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2)->SetImplicitHideAnimation(get_abi(element), get_abi(animation)));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>::SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2)->SetIsTranslationEnabled(get_abi(element), value));
}

template <typename D> Windows::UI::Composition::CompositionPropertySet consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>::GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement) const
{
    Windows::UI::Composition::CompositionPropertySet result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2)->GetPointerPositionPropertySet(get_abi(targetElement), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::RootElement() const noexcept
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->get_RootElement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::RootElement(Windows::UI::Xaml::UIElement const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->put_RootElement(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::ThemeKey() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->get_ThemeKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::ThemeKey(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->put_ThemeKey(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::ThemeResourcesXaml() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->get_ThemeResourcesXaml(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::ThemeResourcesXaml(param::hstring const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->put_ThemeResourcesXaml(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::SetSize(int32_t width, int32_t height) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->SetSize(width, height));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::Render() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->Render());
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>::Present() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenter)->Present());
}

template <typename D> hstring consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost<D>::ResolveFileResource(param::hstring const& path) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost)->ResolveFileResource(get_abi(path), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost2<D>::GetGenericXamlFilePath() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2)->GetGenericXamlFilePath(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost3<D>::ResolveDictionaryResource(Windows::UI::Xaml::ResourceDictionary const& dictionary, Windows::Foundation::IInspectable const& dictionaryKey, Windows::Foundation::IInspectable const& suggestedValue) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3)->ResolveDictionaryResource(get_abi(dictionary), get_abi(dictionaryKey), get_abi(suggestedValue), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics<D>::CompleteTimelinesAutomatically() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics)->get_CompleteTimelinesAutomatically(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics<D>::CompleteTimelinesAutomatically(bool value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics)->put_CompleteTimelinesAutomatically(value));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics<D>::SetHost(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost const& host) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics)->SetHost(get_abi(host)));
}

template <typename D> void consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics<D>::NotifyWindowSizeChanged() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics)->NotifyWindowSizeChanged());
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2<D>::GetFlyoutPlacementTargetInfo(Windows::UI::Xaml::FrameworkElement const& placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& preferredPlacement, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& targetPreferredPlacement, bool& allowFallbacks) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2)->GetFlyoutPlacementTargetInfo(get_abi(placementTarget), get_abi(preferredPlacement), put_abi(targetPreferredPlacement), &allowFallbacks, put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2<D>::GetFlyoutPlacement(Windows::Foundation::Rect const& placementTargetBounds, Windows::Foundation::Size const& controlSize, Windows::Foundation::Size const& minControlSize, Windows::Foundation::Rect const& containerRect, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& targetPreferredPlacement, bool allowFallbacks, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& chosenPlacement) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2)->GetFlyoutPlacement(get_abi(placementTargetBounds), get_abi(controlSize), get_abi(minControlSize), get_abi(containerRect), get_abi(targetPreferredPlacement), allowFallbacks, put_abi(chosenPlacement), put_abi(returnValue)));
    return returnValue;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs> : produce_base<D, Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs>
{
    HRESULT __stdcall get_ExitCode(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ExitCode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IDesignerAppManager> : produce_base<D, Windows::UI::Xaml::Hosting::IDesignerAppManager>
{
    HRESULT __stdcall get_AppUserModelId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppUserModelId());
        return S_OK;
    }

    HRESULT __stdcall add_DesignerAppExited(::IUnknown* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DesignerAppExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Hosting::DesignerAppManager, Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DesignerAppExited(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesignerAppExited(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateNewViewAsync(Windows::UI::Xaml::Hosting::DesignerAppViewState initialViewState, Windows::Foundation::Size initialViewSize, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateNewViewAsync(*reinterpret_cast<Windows::UI::Xaml::Hosting::DesignerAppViewState const*>(&initialViewState), *reinterpret_cast<Windows::Foundation::Size const*>(&initialViewSize)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadObjectIntoAppAsync(HSTRING dllName, GUID classId, HSTRING initializationData, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().LoadObjectIntoAppAsync(*reinterpret_cast<hstring const*>(&dllName), *reinterpret_cast<GUID const*>(&classId), *reinterpret_cast<hstring const*>(&initializationData)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory> : produce_base<D, Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory>
{
    HRESULT __stdcall Create(HSTRING appUserModelId, ::IUnknown** instance) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&appUserModelId)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IDesignerAppView> : produce_base<D, Windows::UI::Xaml::Hosting::IDesignerAppView>
{
    HRESULT __stdcall get_ApplicationViewId(int32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ApplicationViewId());
        return S_OK;
    }

    HRESULT __stdcall get_AppUserModelId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AppUserModelId());
        return S_OK;
    }

    HRESULT __stdcall get_ViewState(Windows::UI::Xaml::Hosting::DesignerAppViewState* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ViewState());
        return S_OK;
    }

    HRESULT __stdcall get_ViewSize(Windows::Foundation::Size* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ViewSize());
        return S_OK;
    }

    HRESULT __stdcall UpdateViewAsync(Windows::UI::Xaml::Hosting::DesignerAppViewState viewState, Windows::Foundation::Size viewSize, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().UpdateViewAsync(*reinterpret_cast<Windows::UI::Xaml::Hosting::DesignerAppViewState const*>(&viewState), *reinterpret_cast<Windows::Foundation::Size const*>(&viewSize)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IElementCompositionPreview> : produce_base<D, Windows::UI::Xaml::Hosting::IElementCompositionPreview>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> : produce_base<D, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>
{
    HRESULT __stdcall GetElementVisual(::IUnknown* element, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetElementVisual(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetElementChildVisual(::IUnknown* element, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetElementChildVisual(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetElementChildVisual(::IUnknown* element, ::IUnknown* visual) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetElementChildVisual(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), *reinterpret_cast<Windows::UI::Composition::Visual const*>(&visual));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScrollViewerManipulationPropertySet(::IUnknown* scrollViewer, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetScrollViewerManipulationPropertySet(*reinterpret_cast<Windows::UI::Xaml::Controls::ScrollViewer const*>(&scrollViewer)));
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
struct produce<D, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> : produce_base<D, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
{
    HRESULT __stdcall SetImplicitShowAnimation(::IUnknown* element, ::IUnknown* animation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetImplicitShowAnimation(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), *reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&animation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetImplicitHideAnimation(::IUnknown* element, ::IUnknown* animation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetImplicitHideAnimation(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), *reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&animation));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIsTranslationEnabled(::IUnknown* element, bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIsTranslationEnabled(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPointerPositionPropertySet(::IUnknown* targetElement, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetPointerPositionPropertySet(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&targetElement)));
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
struct produce<D, Windows::UI::Xaml::Hosting::IXamlUIPresenter> : produce_base<D, Windows::UI::Xaml::Hosting::IXamlUIPresenter>
{
    HRESULT __stdcall get_RootElement(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().RootElement());
        return S_OK;
    }

    HRESULT __stdcall put_RootElement(::IUnknown* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().RootElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ThemeKey(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ThemeKey());
        return S_OK;
    }

    HRESULT __stdcall put_ThemeKey(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ThemeKey(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_ThemeResourcesXaml(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ThemeResourcesXaml());
        return S_OK;
    }

    HRESULT __stdcall put_ThemeResourcesXaml(HSTRING value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ThemeResourcesXaml(*reinterpret_cast<hstring const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall SetSize(int32_t width, int32_t height) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSize(width, height);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Render() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Render();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Present() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Present();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterHost> : produce_base<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>
{
    HRESULT __stdcall ResolveFileResource(HSTRING path, HSTRING* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ResolveFileResource(*reinterpret_cast<hstring const*>(&path)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2> : produce_base<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>
{
    HRESULT __stdcall GetGenericXamlFilePath(HSTRING* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetGenericXamlFilePath());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3> : produce_base<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>
{
    HRESULT __stdcall ResolveDictionaryResource(::IUnknown* dictionary, ::IUnknown* dictionaryKey, ::IUnknown* suggestedValue, ::IUnknown** returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ResolveDictionaryResource(*reinterpret_cast<Windows::UI::Xaml::ResourceDictionary const*>(&dictionary), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&dictionaryKey), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&suggestedValue)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics> : produce_base<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>
{
    HRESULT __stdcall get_CompleteTimelinesAutomatically(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CompleteTimelinesAutomatically());
        return S_OK;
    }

    HRESULT __stdcall put_CompleteTimelinesAutomatically(bool value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().CompleteTimelinesAutomatically(value);
        return S_OK;
    }

    HRESULT __stdcall SetHost(::IUnknown* host) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHost(*reinterpret_cast<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost const*>(&host));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall NotifyWindowSizeChanged() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyWindowSizeChanged();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2> : produce_base<D, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>
{
    HRESULT __stdcall GetFlyoutPlacementTargetInfo(::IUnknown* placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode preferredPlacement, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode* targetPreferredPlacement, bool* allowFallbacks, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetFlyoutPlacementTargetInfo(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&placementTarget), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const*>(&preferredPlacement), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode*>(targetPreferredPlacement), *allowFallbacks));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFlyoutPlacement(Windows::Foundation::Rect placementTargetBounds, Windows::Foundation::Size controlSize, Windows::Foundation::Size minControlSize, Windows::Foundation::Rect containerRect, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode targetPreferredPlacement, bool allowFallbacks, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode* chosenPlacement, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetFlyoutPlacement(*reinterpret_cast<Windows::Foundation::Rect const*>(&placementTargetBounds), *reinterpret_cast<Windows::Foundation::Size const*>(&controlSize), *reinterpret_cast<Windows::Foundation::Size const*>(&minControlSize), *reinterpret_cast<Windows::Foundation::Rect const*>(&containerRect), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const*>(&targetPreferredPlacement), allowFallbacks, *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode*>(chosenPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting {

inline DesignerAppManager::DesignerAppManager(param::hstring const& appUserModelId) :
    DesignerAppManager(get_activation_factory<DesignerAppManager, Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory>().Create(appUserModelId))
{}

inline Windows::UI::Composition::Visual ElementCompositionPreview::GetElementVisual(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>().GetElementVisual(element);
}

inline Windows::UI::Composition::Visual ElementCompositionPreview::GetElementChildVisual(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>().GetElementChildVisual(element);
}

inline void ElementCompositionPreview::SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual)
{
    get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>().SetElementChildVisual(element, visual);
}

inline Windows::UI::Composition::CompositionPropertySet ElementCompositionPreview::GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer)
{
    return get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>().GetScrollViewerManipulationPropertySet(scrollViewer);
}

inline void ElementCompositionPreview::SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation)
{
    get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>().SetImplicitShowAnimation(element, animation);
}

inline void ElementCompositionPreview::SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation)
{
    get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>().SetImplicitHideAnimation(element, animation);
}

inline void ElementCompositionPreview::SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value)
{
    get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>().SetIsTranslationEnabled(element, value);
}

inline Windows::UI::Composition::CompositionPropertySet ElementCompositionPreview::GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement)
{
    return get_activation_factory<ElementCompositionPreview, Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>().GetPointerPositionPropertySet(targetElement);
}

inline bool XamlUIPresenter::CompleteTimelinesAutomatically()
{
    return get_activation_factory<XamlUIPresenter, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>().CompleteTimelinesAutomatically();
}

inline void XamlUIPresenter::CompleteTimelinesAutomatically(bool value)
{
    get_activation_factory<XamlUIPresenter, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>().CompleteTimelinesAutomatically(value);
}

inline void XamlUIPresenter::SetHost(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost const& host)
{
    get_activation_factory<XamlUIPresenter, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>().SetHost(host);
}

inline void XamlUIPresenter::NotifyWindowSizeChanged()
{
    get_activation_factory<XamlUIPresenter, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>().NotifyWindowSizeChanged();
}

inline Windows::Foundation::Rect XamlUIPresenter::GetFlyoutPlacementTargetInfo(Windows::UI::Xaml::FrameworkElement const& placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& preferredPlacement, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& targetPreferredPlacement, bool& allowFallbacks)
{
    return get_activation_factory<XamlUIPresenter, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>().GetFlyoutPlacementTargetInfo(placementTarget, preferredPlacement, targetPreferredPlacement, allowFallbacks);
}

inline Windows::Foundation::Rect XamlUIPresenter::GetFlyoutPlacement(Windows::Foundation::Rect const& placementTargetBounds, Windows::Foundation::Size const& controlSize, Windows::Foundation::Size const& minControlSize, Windows::Foundation::Rect const& containerRect, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& targetPreferredPlacement, bool allowFallbacks, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& chosenPlacement)
{
    return get_activation_factory<XamlUIPresenter, Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>().GetFlyoutPlacement(placementTargetBounds, controlSize, minControlSize, containerRect, targetPreferredPlacement, allowFallbacks, chosenPlacement);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IDesignerAppManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IDesignerAppManager> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IDesignerAppView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IDesignerAppView> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreview> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreview> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenter> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::DesignerAppManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::DesignerAppManager> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::DesignerAppView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::DesignerAppView> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview> {};

template<> struct hash<winrt::Windows::UI::Xaml::Hosting::XamlUIPresenter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Hosting::XamlUIPresenter> {};

}

WINRT_WARNING_POP
