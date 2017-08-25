// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct CompositionPropertySet;
struct ICompositionAnimationBase;
struct Visual;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

struct FrameworkElement;
struct ResourceDictionary;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls {

struct ScrollViewer;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives {

enum class FlyoutPlacementMode;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Hosting {

struct IElementCompositionPreview;
struct IElementCompositionPreviewStatics;
struct IElementCompositionPreviewStatics2;
struct IXamlUIPresenter;
struct IXamlUIPresenterHost;
struct IXamlUIPresenterHost2;
struct IXamlUIPresenterHost3;
struct IXamlUIPresenterStatics;
struct IXamlUIPresenterStatics2;
struct ElementCompositionPreview;
struct XamlUIPresenter;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreview>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenter>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Hosting::ElementCompositionPreview>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Hosting::XamlUIPresenter>{ using type = class_category; };
template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreview>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreview" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenter" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost2" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost3" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics" }; };
template <> struct name<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2" }; };
template <> struct name<Windows::UI::Xaml::Hosting::ElementCompositionPreview>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.ElementCompositionPreview" }; };
template <> struct name<Windows::UI::Xaml::Hosting::XamlUIPresenter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Hosting.XamlUIPresenter" }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IElementCompositionPreview>{ static constexpr GUID value{ 0xB6F1A676,0xCFE6,0x46AC,{ 0xAC,0xF6,0xC4,0x68,0x7B,0xB6,0x5E,0x60 } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>{ static constexpr GUID value{ 0x08C92B38,0xEC99,0x4C55,{ 0xBC,0x85,0xA1,0xC1,0x80,0xB2,0x76,0x46 } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>{ static constexpr GUID value{ 0x24148FBB,0x23D6,0x4F37,{ 0xBA,0x0C,0x07,0x33,0xE7,0x99,0x72,0x2D } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IXamlUIPresenter>{ static constexpr GUID value{ 0xA714944A,0x1619,0x4FC6,{ 0xB3,0x1B,0x89,0x51,0x2E,0xF0,0x22,0xA2 } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>{ static constexpr GUID value{ 0xAAFB84CD,0x9F6D,0x4F80,{ 0xAC,0x2C,0x0E,0x6C,0xB9,0xF3,0x16,0x59 } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>{ static constexpr GUID value{ 0x61595672,0x7CA4,0x4A21,{ 0xB5,0x6A,0x88,0xF4,0x81,0x23,0x88,0xCA } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>{ static constexpr GUID value{ 0xB14292BF,0x7320,0x41BB,{ 0x9F,0x26,0x4D,0x6F,0xD3,0x4D,0xB4,0x5A } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>{ static constexpr GUID value{ 0x71EAEAC8,0x45E1,0x4192,{ 0x85,0xAA,0x3A,0x42,0x2E,0xDD,0x23,0xCF } }; };
template <> struct guid<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>{ static constexpr GUID value{ 0x5C6B68D2,0xCF1C,0x4F53,{ 0xBF,0x09,0x6A,0x74,0x5F,0x7A,0x97,0x03 } }; };
template <> struct default_interface<Windows::UI::Xaml::Hosting::ElementCompositionPreview>{ using type = Windows::UI::Xaml::Hosting::IElementCompositionPreview; };
template <> struct default_interface<Windows::UI::Xaml::Hosting::XamlUIPresenter>{ using type = Windows::UI::Xaml::Hosting::IXamlUIPresenter; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreview
{
};
template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreview> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreview<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics
{
    Windows::UI::Composition::Visual GetElementVisual(Windows::UI::Xaml::UIElement const& element) const;
    Windows::UI::Composition::Visual GetElementChildVisual(Windows::UI::Xaml::UIElement const& element) const;
    void SetElementChildVisual(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::Visual const& visual) const;
    Windows::UI::Composition::CompositionPropertySet GetScrollViewerManipulationPropertySet(Windows::UI::Xaml::Controls::ScrollViewer const& scrollViewer) const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2
{
    void SetImplicitShowAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
    void SetImplicitHideAnimation(Windows::UI::Xaml::UIElement const& element, Windows::UI::Composition::ICompositionAnimationBase const& animation) const;
    void SetIsTranslationEnabled(Windows::UI::Xaml::UIElement const& element, bool value) const;
    Windows::UI::Composition::CompositionPropertySet GetPointerPositionPropertySet(Windows::UI::Xaml::UIElement const& targetElement) const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter
{
    Windows::UI::Xaml::UIElement RootElement() const;
    void RootElement(Windows::UI::Xaml::UIElement const& value) const;
    hstring ThemeKey() const;
    void ThemeKey(param::hstring const& value) const;
    hstring ThemeResourcesXaml() const;
    void ThemeResourcesXaml(param::hstring const& value) const;
    void SetSize(int32_t width, int32_t height) const;
    void Render() const;
    void Present() const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenter> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenter<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost
{
    hstring ResolveFileResource(param::hstring const& path) const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost2
{
    hstring GetGenericXamlFilePath() const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost3
{
    Windows::Foundation::IInspectable ResolveDictionaryResource(Windows::UI::Xaml::ResourceDictionary const& dictionary, Windows::Foundation::IInspectable const& dictionaryKey, Windows::Foundation::IInspectable const& suggestedValue) const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics
{
    bool CompleteTimelinesAutomatically() const;
    void CompleteTimelinesAutomatically(bool value) const;
    void SetHost(Windows::UI::Xaml::Hosting::IXamlUIPresenterHost const& host) const;
    void NotifyWindowSizeChanged() const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2
{
    Windows::Foundation::Rect GetFlyoutPlacementTargetInfo(Windows::UI::Xaml::FrameworkElement const& placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& preferredPlacement, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& targetPreferredPlacement, bool& allowFallbacks) const;
    Windows::Foundation::Rect GetFlyoutPlacement(Windows::Foundation::Rect const& placementTargetBounds, Windows::Foundation::Size const& controlSize, Windows::Foundation::Size const& minControlSize, Windows::Foundation::Rect const& containerRect, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& targetPreferredPlacement, bool allowFallbacks, Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode& chosenPlacement) const;
};
template <> struct consume<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2<D>; };

template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreview>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetElementVisual(::IUnknown* element, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetElementChildVisual(::IUnknown* element, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall SetElementChildVisual(::IUnknown* element, ::IUnknown* visual) = 0;
    virtual HRESULT __stdcall GetScrollViewerManipulationPropertySet(::IUnknown* scrollViewer, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetImplicitShowAnimation(::IUnknown* element, ::IUnknown* animation) = 0;
    virtual HRESULT __stdcall SetImplicitHideAnimation(::IUnknown* element, ::IUnknown* animation) = 0;
    virtual HRESULT __stdcall SetIsTranslationEnabled(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall GetPointerPositionPropertySet(::IUnknown* targetElement, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RootElement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RootElement(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ThemeKey(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ThemeKey(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ThemeResourcesXaml(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ThemeResourcesXaml(HSTRING value) = 0;
    virtual HRESULT __stdcall SetSize(int32_t width, int32_t height) = 0;
    virtual HRESULT __stdcall Render() = 0;
    virtual HRESULT __stdcall Present() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ResolveFileResource(HSTRING path, HSTRING* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetGenericXamlFilePath(HSTRING* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ResolveDictionaryResource(::IUnknown* dictionary, ::IUnknown* dictionaryKey, ::IUnknown* suggestedValue, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CompleteTimelinesAutomatically(bool* value) = 0;
    virtual HRESULT __stdcall put_CompleteTimelinesAutomatically(bool value) = 0;
    virtual HRESULT __stdcall SetHost(::IUnknown* host) = 0;
    virtual HRESULT __stdcall NotifyWindowSizeChanged() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFlyoutPlacementTargetInfo(::IUnknown* placementTarget, abi_t<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode> preferredPlacement, abi_t<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode>* targetPreferredPlacement, bool* allowFallbacks, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
    virtual HRESULT __stdcall GetFlyoutPlacement(abi_t<Windows::Foundation::Rect> placementTargetBounds, abi_t<Windows::Foundation::Size> controlSize, abi_t<Windows::Foundation::Size> minControlSize, abi_t<Windows::Foundation::Rect> containerRect, abi_t<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode> targetPreferredPlacement, bool allowFallbacks, abi_t<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode>* chosenPlacement, abi_t<Windows::Foundation::Rect>* returnValue) = 0;
};};

}
