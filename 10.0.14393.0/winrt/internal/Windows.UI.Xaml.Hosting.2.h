// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Hosting.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Hosting {

template <typename D>
struct WINRT_EBO impl_IElementCompositionPreview
{
};

template <typename D>
struct WINRT_EBO impl_IElementCompositionPreviewStatics
{
    Windows::UI::Composition::Visual GetElementVisual(const Windows::UI::Xaml::UIElement & element) const;
    Windows::UI::Composition::Visual GetElementChildVisual(const Windows::UI::Xaml::UIElement & element) const;
    void SetElementChildVisual(const Windows::UI::Xaml::UIElement & element, const Windows::UI::Composition::Visual & visual) const;
    Windows::UI::Composition::CompositionPropertySet GetScrollViewerManipulationPropertySet(const Windows::UI::Xaml::Controls::ScrollViewer & scrollViewer) const;
};

template <typename D>
struct WINRT_EBO impl_IXamlUIPresenter
{
    Windows::UI::Xaml::UIElement RootElement() const;
    void RootElement(const Windows::UI::Xaml::UIElement & value) const;
    hstring ThemeKey() const;
    void ThemeKey(hstring_ref value) const;
    hstring ThemeResourcesXaml() const;
    void ThemeResourcesXaml(hstring_ref value) const;
    void SetSize(int32_t width, int32_t height) const;
    void Render() const;
    void Present() const;
};

template <typename D>
struct WINRT_EBO impl_IXamlUIPresenterHost
{
    hstring ResolveFileResource(hstring_ref path) const;
};

template <typename D>
struct WINRT_EBO impl_IXamlUIPresenterHost2
{
    hstring GetGenericXamlFilePath() const;
};

template <typename D>
struct WINRT_EBO impl_IXamlUIPresenterHost3
{
    Windows::IInspectable ResolveDictionaryResource(const Windows::UI::Xaml::ResourceDictionary & dictionary, const Windows::IInspectable & dictionaryKey, const Windows::IInspectable & suggestedValue) const;
};

template <typename D>
struct WINRT_EBO impl_IXamlUIPresenterStatics
{
    bool CompleteTimelinesAutomatically() const;
    void CompleteTimelinesAutomatically(bool value) const;
    void SetHost(const Windows::UI::Xaml::Hosting::IXamlUIPresenterHost & host) const;
    void NotifyWindowSizeChanged() const;
};

template <typename D>
struct WINRT_EBO impl_IXamlUIPresenterStatics2
{
    Windows::Foundation::Rect GetFlyoutPlacementTargetInfo(const Windows::UI::Xaml::FrameworkElement & placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode preferredPlacement, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode & targetPreferredPlacement, bool & allowFallbacks) const;
    Windows::Foundation::Rect GetFlyoutPlacement(const Windows::Foundation::Rect & placementTargetBounds, const Windows::Foundation::Size & controlSize, const Windows::Foundation::Size & minControlSize, const Windows::Foundation::Rect & containerRect, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode targetPreferredPlacement, bool allowFallbacks, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode & chosenPlacement) const;
};

struct IElementCompositionPreview :
    Windows::IInspectable,
    impl::consume<IElementCompositionPreview>
{
    IElementCompositionPreview(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IElementCompositionPreview>(m_ptr); }
};

struct IElementCompositionPreviewStatics :
    Windows::IInspectable,
    impl::consume<IElementCompositionPreviewStatics>
{
    IElementCompositionPreviewStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IElementCompositionPreviewStatics>(m_ptr); }
};

struct IXamlUIPresenter :
    Windows::IInspectable,
    impl::consume<IXamlUIPresenter>
{
    IXamlUIPresenter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlUIPresenter>(m_ptr); }
};

struct IXamlUIPresenterHost :
    Windows::IInspectable,
    impl::consume<IXamlUIPresenterHost>
{
    IXamlUIPresenterHost(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlUIPresenterHost>(m_ptr); }
};

struct IXamlUIPresenterHost2 :
    Windows::IInspectable,
    impl::consume<IXamlUIPresenterHost2>
{
    IXamlUIPresenterHost2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlUIPresenterHost2>(m_ptr); }
};

struct IXamlUIPresenterHost3 :
    Windows::IInspectable,
    impl::consume<IXamlUIPresenterHost3>
{
    IXamlUIPresenterHost3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlUIPresenterHost3>(m_ptr); }
};

struct IXamlUIPresenterStatics :
    Windows::IInspectable,
    impl::consume<IXamlUIPresenterStatics>
{
    IXamlUIPresenterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlUIPresenterStatics>(m_ptr); }
};

struct IXamlUIPresenterStatics2 :
    Windows::IInspectable,
    impl::consume<IXamlUIPresenterStatics2>
{
    IXamlUIPresenterStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IXamlUIPresenterStatics2>(m_ptr); }
};

}

}
