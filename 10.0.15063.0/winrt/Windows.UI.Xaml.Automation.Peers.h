// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Provider.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/impl/Windows.UI.Xaml.Automation.Peers.2.h"
#include "winrt/Windows.UI.Xaml.Automation.h"

namespace winrt::impl {

template <typename D> Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAppBarAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBar const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAppBarButtonAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBarButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAppBarToggleButtonAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AppBarToggleButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutoSuggestBoxAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::AutoSuggestBox const& owner) const
{
    Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::EventsSource() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->get_EventsSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::EventsSource(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->put_EventsSource(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetPattern(Windows::UI::Xaml::Automation::Peers::PatternInterface const& patternInterface) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetPattern(get_abi(patternInterface), put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::RaiseAutomationEvent(Windows::UI::Xaml::Automation::Peers::AutomationEvents const& eventId) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->RaiseAutomationEvent(get_abi(eventId)));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::RaisePropertyChangedEvent(Windows::UI::Xaml::Automation::AutomationProperty const& automationProperty, Windows::Foundation::IInspectable const& oldValue, Windows::Foundation::IInspectable const& newValue) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->RaisePropertyChangedEvent(get_abi(automationProperty), get_abi(oldValue), get_abi(newValue)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetAcceleratorKey() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetAcceleratorKey(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetAccessKey() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetAccessKey(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationControlType consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetAutomationControlType() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationControlType returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetAutomationControlType(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetAutomationId() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetAutomationId(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetBoundingRectangle() const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetBoundingRectangle(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetChildren() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetChildren(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetClassName() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetClassName(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetClickablePoint() const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetClickablePoint(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetHelpText() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetHelpText(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetItemStatus() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetItemStatus(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetItemType() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetItemType(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetLabeledBy() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetLabeledBy(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetLocalizedControlType() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetLocalizedControlType(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetName() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetName(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationOrientation consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetOrientation() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationOrientation returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetOrientation(put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::HasKeyboardFocus() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->HasKeyboardFocus(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::IsContentElement() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->IsContentElement(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::IsControlElement() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->IsControlElement(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::IsEnabled() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->IsEnabled(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::IsKeyboardFocusable() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->IsKeyboardFocusable(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::IsOffscreen() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->IsOffscreen(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::IsPassword() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->IsPassword(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::IsRequiredForForm() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->IsRequiredForForm(&returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::SetFocus() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->SetFocus());
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetParent() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetParent(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::InvalidatePeer() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->InvalidatePeer());
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetPeerFromPoint(Windows::Foundation::Point const& point) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetPeerFromPoint(get_abi(point), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer<D>::GetLiveSetting() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer)->GetLiveSetting(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::Navigate(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->Navigate(get_abi(direction), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::GetElementFromPoint(Windows::Foundation::Point const& pointInWindowCoordinates) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->GetElementFromPoint(get_abi(pointInWindowCoordinates), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::GetFocusedElement() const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->GetFocusedElement(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::ShowContextMenu() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->ShowContextMenu());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::GetControlledPeers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->GetControlledPeers(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::GetAnnotations() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->GetAnnotations(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::SetParent(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->SetParent(get_abi(peer)));
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::RaiseTextEditTextChangedEvent(Windows::UI::Xaml::Automation::AutomationTextEditChangeType const& automationTextEditChangeType, param::vector_view<hstring> const& changedData) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->RaiseTextEditTextChangedEvent(get_abi(automationTextEditChangeType), get_abi(changedData)));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::GetPositionInSet() const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->GetPositionInSet(&returnValue));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::GetSizeOfSet() const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->GetSizeOfSet(&returnValue));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::GetLevel() const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->GetLevel(&returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer3<D>::RaiseStructureChangedEvent(Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType const& structureChangeType, Windows::UI::Xaml::Automation::Peers::AutomationPeer const& child) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer3)->RaiseStructureChangedEvent(get_abi(structureChangeType), get_abi(child)));
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer4<D>::GetLandmarkType() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer4)->GetLandmarkType(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer4<D>::GetLocalizedLandmarkType() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer4)->GetLocalizedLandmarkType(put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer5<D>::IsPeripheral() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer5)->IsPeripheral(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer5<D>::IsDataValidForForm() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer5)->IsDataValidForForm(&returnValue));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer5<D>::GetFullDescription() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer5)->GetFullDescription(put_abi(returnValue)));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeer6<D>::GetCulture() const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeer6)->GetCulture(&returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::AnnotationType consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotation<D>::Type() const
{
    Windows::UI::Xaml::Automation::AnnotationType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotation<D>::Type(Windows::UI::Xaml::Automation::AnnotationType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation)->put_Type(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotation<D>::Peer() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation)->get_Peer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotation<D>::Peer(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation)->put_Peer(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationFactory<D>::CreateInstance(Windows::UI::Xaml::Automation::AnnotationType const& type) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory)->CreateInstance(get_abi(type), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationFactory<D>::CreateWithPeerParameter(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory)->CreateWithPeerParameter(get_abi(type), get_abi(peer), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationStatics<D>::TypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics)->get_TypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerAnnotationStatics<D>::PeerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics)->get_PeerProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetPatternCore(Windows::UI::Xaml::Automation::Peers::PatternInterface const& patternInterface) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetPatternCore(get_abi(patternInterface), put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetAcceleratorKeyCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetAcceleratorKeyCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetAccessKeyCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetAccessKeyCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationControlType consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetAutomationControlTypeCore() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationControlType returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetAutomationControlTypeCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetAutomationIdCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetAutomationIdCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetBoundingRectangleCore() const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetBoundingRectangleCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetChildrenCore() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetChildrenCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetClassNameCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetClassNameCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetClickablePointCore() const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetClickablePointCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetHelpTextCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetHelpTextCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetItemStatusCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetItemStatusCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetItemTypeCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetItemTypeCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetLabeledByCore() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetLabeledByCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetLocalizedControlTypeCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetLocalizedControlTypeCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetNameCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetNameCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationOrientation consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetOrientationCore() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationOrientation returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetOrientationCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::HasKeyboardFocusCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->HasKeyboardFocusCore(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::IsContentElementCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->IsContentElementCore(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::IsControlElementCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->IsControlElementCore(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::IsEnabledCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->IsEnabledCore(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::IsKeyboardFocusableCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->IsKeyboardFocusableCore(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::IsOffscreenCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->IsOffscreenCore(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::IsPasswordCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->IsPasswordCore(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::IsRequiredForFormCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->IsRequiredForFormCore(&returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::SetFocusCore() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->SetFocusCore());
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetPeerFromPointCore(Windows::Foundation::Point const& point) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetPeerFromPointCore(get_abi(point), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides<D>::GetLiveSettingCore() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides)->GetLiveSettingCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides2<D>::ShowContextMenuCore() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2)->ShowContextMenuCore());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides2<D>::GetControlledPeersCore() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2)->GetControlledPeersCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>::NavigateCore(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3)->NavigateCore(get_abi(direction), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>::GetElementFromPointCore(Windows::Foundation::Point const& pointInWindowCoordinates) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3)->GetElementFromPointCore(get_abi(pointInWindowCoordinates), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>::GetFocusedElementCore() const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3)->GetFocusedElementCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>::GetAnnotationsCore() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3)->GetAnnotationsCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>::GetPositionInSetCore() const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3)->GetPositionInSetCore(&returnValue));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>::GetSizeOfSetCore() const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3)->GetSizeOfSetCore(&returnValue));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides3<D>::GetLevelCore() const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3)->GetLevelCore(&returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides4<D>::GetLandmarkTypeCore() const
{
    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4)->GetLandmarkTypeCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides4<D>::GetLocalizedLandmarkTypeCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4)->GetLocalizedLandmarkTypeCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5<D>::IsPeripheralCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5)->IsPeripheralCore(&returnValue));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5<D>::IsDataValidForFormCore() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5)->IsDataValidForFormCore(&returnValue));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5<D>::GetFullDescriptionCore() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5)->GetFullDescriptionCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5<D>::GetDescribedByCore() const
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5)->GetDescribedByCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5<D>::GetFlowsToCore() const
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5)->GetFlowsToCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides5<D>::GetFlowsFromCore() const
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5)->GetFlowsFromCore(put_abi(returnValue)));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerOverrides6<D>::GetCultureCore() const
{
    int32_t returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6)->GetCultureCore(&returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerProtected<D>::PeerFromProvider(Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const& provider) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected)->PeerFromProvider(get_abi(provider), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerProtected<D>::ProviderFromPeer(Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) const
{
    Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected)->ProviderFromPeer(get_abi(peer), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics<D>::ListenerExists(Windows::UI::Xaml::Automation::Peers::AutomationEvents const& eventId) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics)->ListenerExists(get_abi(eventId), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId consume_Windows_UI_Xaml_Automation_Peers_IAutomationPeerStatics3<D>::GenerateRawElementProviderRuntimeId() const
{
    Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3)->GenerateRawElementProviderRuntimeId(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IButtonAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Button const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IButtonBaseAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ButtonBase const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ICaptureElementAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::CaptureElement const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ICheckBoxAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::CheckBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IComboBoxAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ComboBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ComboBoxItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IComboBoxItemDataAutomationPeerFactory<D>::CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory)->CreateInstanceWithParentAndItem(get_abi(item), get_abi(parent), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IDatePickerAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::DatePicker const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IFlipViewAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlipView const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlipViewItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IFlipViewItemDataAutomationPeerFactory<D>::CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory)->CreateInstanceWithParentAndItem(get_abi(item), get_abi(parent), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IFlyoutPresenterAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::FlyoutPresenter const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeer<D>::Owner() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer)->get_Owner(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::FrameworkElement const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerStatics<D>::FromElement(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics)->FromElement(get_abi(element), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IFrameworkElementAutomationPeerStatics<D>::CreatePeerForElement(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::UI::Xaml::Automation::Peers::AutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics)->CreatePeerForElement(get_abi(element), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IGridViewAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridView const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IGridViewHeaderItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridViewHeaderItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GridViewItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IGridViewItemDataAutomationPeerFactory<D>::CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory)->CreateInstanceWithParentAndItem(get_abi(item), get_abi(parent), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IGroupItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::GroupItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::HubAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IHubAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Hub const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::HubAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IHubSectionAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::HubSection const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IHyperlinkButtonAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::HyperlinkButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IImageAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Image const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeer<D>::Item() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer)->get_Item(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeer<D>::ItemsControlAutomationPeer() const
{
    Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer)->get_ItemsControlAutomationPeer(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IItemAutomationPeerFactory<D>::CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory)->CreateInstanceWithParentAndItem(get_abi(item), get_abi(parent), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeer2<D>::CreateItemAutomationPeer(Windows::Foundation::IInspectable const& item) const
{
    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2)->CreateItemAutomationPeer(get_abi(item), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ItemsControl const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IItemsControlAutomationPeerOverrides2<D>::OnCreateItemAutomationPeer(Windows::Foundation::IInspectable const& item) const
{
    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2)->OnCreateItemAutomationPeer(get_abi(item), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListBoxAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListBoxItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListBoxItemDataAutomationPeerFactory<D>::CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory)->CreateInstanceWithParentAndItem(get_abi(item), get_abi(parent), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListViewAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListView const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewBase const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListViewBaseHeaderItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewBaseHeaderItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListViewHeaderItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewHeaderItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListViewItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ListViewItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IListViewItemDataAutomationPeerFactory<D>::CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory)->CreateInstanceWithParentAndItem(get_abi(item), get_abi(parent), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IMediaElementAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaElement const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IMediaPlayerElementAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaPlayerElement const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IMediaTransportControlsAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MediaTransportControls const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MenuFlyoutItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IMenuFlyoutPresenterAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::MenuFlyoutPresenter const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IPasswordBoxAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::PasswordBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IPivotAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Pivot const& owner) const
{
    Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IPivotItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::PivotItem const& owner) const
{
    Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IPivotItemDataAutomationPeerFactory<D>::CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer const& parent) const
{
    Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory)->CreateInstanceWithParentAndItem(get_abi(item), get_abi(parent), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IProgressBarAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ProgressBar const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IProgressRingAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ProgressRing const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IRadioButtonAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RadioButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IRangeBaseAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::RangeBase const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IRepeatButtonAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::RepeatButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IRichEditBoxAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichEditBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichTextBlock const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IRichTextBlockOverflowAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::RichTextBlockOverflow const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IScrollBarAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ScrollBar const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IScrollViewerAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ScrollViewer const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ISearchBoxAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SearchBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ISelectorAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::Selector const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ISelectorItemAutomationPeerFactory<D>::CreateInstanceWithParentAndItem(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer const& parent, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory)->CreateInstanceWithParentAndItem(get_abi(item), get_abi(parent), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ISemanticZoomAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SemanticZoom const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ISettingsFlyoutAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::SettingsFlyout const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ISliderAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Slider const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ITextBlockAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TextBlock const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ITextBoxAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TextBox const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IThumbAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::Thumb const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_ITimePickerAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::TimePicker const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IToggleButtonAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::Primitives::ToggleButton const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IToggleMenuFlyoutItemAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer consume_Windows_UI_Xaml_Automation_Peers_IToggleSwitchAutomationPeerFactory<D>::CreateInstanceWithOwner(Windows::UI::Xaml::Controls::ToggleSwitch const& owner, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory)->CreateInstanceWithOwner(get_abi(owner), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::AppBar const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::AppBarButton const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::AppBarToggleButton const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::AutoSuggestBox const*>(&owner)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer>
{
    HRESULT __stdcall get_EventsSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EventsSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EventsSource(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EventsSource(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationPeer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPattern(abi_t<Windows::UI::Xaml::Automation::Peers::PatternInterface> patternInterface, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetPattern(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::PatternInterface const*>(&patternInterface)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RaiseAutomationEvent(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationEvents> eventId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RaiseAutomationEvent(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationEvents const*>(&eventId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RaisePropertyChangedEvent(::IUnknown* automationProperty, ::IUnknown* oldValue, ::IUnknown* newValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RaisePropertyChangedEvent(*reinterpret_cast<Windows::UI::Xaml::Automation::AutomationProperty const*>(&automationProperty), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&oldValue), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&newValue));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAcceleratorKey(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAcceleratorKey());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAccessKey(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAccessKey());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAutomationControlType(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationControlType>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAutomationControlType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAutomationId(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAutomationId());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBoundingRectangle(abi_t<Windows::Foundation::Rect>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetBoundingRectangle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetChildren(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetChildren());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetClassName(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetClassName());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetClickablePoint(abi_t<Windows::Foundation::Point>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetClickablePoint());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHelpText(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetHelpText());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemStatus(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetItemStatus());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemType(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetItemType());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLabeledBy(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLabeledBy());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocalizedControlType(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLocalizedControlType());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetName(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetName());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetOrientation(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationOrientation>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetOrientation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HasKeyboardFocus(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().HasKeyboardFocus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsContentElement(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsContentElement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsControlElement(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsControlElement());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEnabled(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsKeyboardFocusable(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsKeyboardFocusable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsOffscreen(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsOffscreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsPassword(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsPassword());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsRequiredForForm(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsRequiredForForm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFocus() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocus();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetParent(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetParent());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InvalidatePeer() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvalidatePeer();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPeerFromPoint(abi_t<Windows::Foundation::Point> point, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetPeerFromPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&point)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLiveSetting(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLiveSetting());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3>
{
    HRESULT __stdcall Navigate(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection> direction, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Navigate(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const*>(&direction)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetElementFromPoint(abi_t<Windows::Foundation::Point> pointInWindowCoordinates, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetElementFromPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&pointInWindowCoordinates)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFocusedElement(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetFocusedElement());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowContextMenu() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowContextMenu();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetControlledPeers(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetControlledPeers());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnnotations(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAnnotations());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetParent(::IUnknown* peer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetParent(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationPeer const*>(&peer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RaiseTextEditTextChangedEvent(abi_t<Windows::UI::Xaml::Automation::AutomationTextEditChangeType> automationTextEditChangeType, ::IUnknown* changedData) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RaiseTextEditTextChangedEvent(*reinterpret_cast<Windows::UI::Xaml::Automation::AutomationTextEditChangeType const*>(&automationTextEditChangeType), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&changedData));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPositionInSet(int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetPositionInSet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSizeOfSet(int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetSizeOfSet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLevel(int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLevel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RaiseStructureChangedEvent(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType> structureChangeType, ::IUnknown* child) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RaiseStructureChangedEvent(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationStructureChangeType const*>(&structureChangeType), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationPeer const*>(&child));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4>
{
    HRESULT __stdcall GetLandmarkType(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLandmarkType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocalizedLandmarkType(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLocalizedLandmarkType());
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5>
{
    HRESULT __stdcall IsPeripheral(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsPeripheral());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsDataValidForForm(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsDataValidForForm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFullDescription(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetFullDescription());
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6>
{
    HRESULT __stdcall GetCulture(int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetCulture());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation>
{
    HRESULT __stdcall get_Type(abi_t<Windows::UI::Xaml::Automation::AnnotationType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(abi_t<Windows::UI::Xaml::Automation::AnnotationType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Peer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Peer());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Peer(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Peer(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationPeer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>
{
    HRESULT __stdcall CreateInstance(abi_t<Windows::UI::Xaml::Automation::AnnotationType> type, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            *instance = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPeerParameter(abi_t<Windows::UI::Xaml::Automation::AnnotationType> type, ::IUnknown* peer, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateWithPeerParameter(*reinterpret_cast<Windows::UI::Xaml::Automation::AnnotationType const*>(&type), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationPeer const*>(&peer)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>
{
    HRESULT __stdcall get_TypeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TypeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeerProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeerProperty());
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>
{
    HRESULT __stdcall GetPatternCore(abi_t<Windows::UI::Xaml::Automation::Peers::PatternInterface> patternInterface, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetPatternCore(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::PatternInterface const*>(&patternInterface)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAcceleratorKeyCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAcceleratorKeyCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAccessKeyCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAccessKeyCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAutomationControlTypeCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationControlType>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAutomationControlTypeCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAutomationIdCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAutomationIdCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBoundingRectangleCore(abi_t<Windows::Foundation::Rect>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetBoundingRectangleCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetChildrenCore(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetChildrenCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetClassNameCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetClassNameCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetClickablePointCore(abi_t<Windows::Foundation::Point>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetClickablePointCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHelpTextCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetHelpTextCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemStatusCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetItemStatusCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetItemTypeCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetItemTypeCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLabeledByCore(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLabeledByCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocalizedControlTypeCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLocalizedControlTypeCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNameCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetNameCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetOrientationCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationOrientation>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetOrientationCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HasKeyboardFocusCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().HasKeyboardFocusCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsContentElementCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsContentElementCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsControlElementCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsControlElementCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEnabledCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsEnabledCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsKeyboardFocusableCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsKeyboardFocusableCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsOffscreenCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsOffscreenCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsPasswordCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsPasswordCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsRequiredForFormCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsRequiredForFormCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFocusCore() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusCore();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPeerFromPointCore(abi_t<Windows::Foundation::Point> point, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetPeerFromPointCore(*reinterpret_cast<Windows::Foundation::Point const*>(&point)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLiveSettingCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLiveSettingCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>
{
    HRESULT __stdcall ShowContextMenuCore() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowContextMenuCore();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetControlledPeersCore(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetControlledPeersCore());
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>
{
    HRESULT __stdcall NavigateCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection> direction, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().NavigateCore(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const*>(&direction)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetElementFromPointCore(abi_t<Windows::Foundation::Point> pointInWindowCoordinates, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetElementFromPointCore(*reinterpret_cast<Windows::Foundation::Point const*>(&pointInWindowCoordinates)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFocusedElementCore(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetFocusedElementCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnnotationsCore(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetAnnotationsCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPositionInSetCore(int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetPositionInSetCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSizeOfSetCore(int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetSizeOfSetCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLevelCore(int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLevelCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>
{
    HRESULT __stdcall GetLandmarkTypeCore(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLandmarkTypeCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLocalizedLandmarkTypeCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetLocalizedLandmarkTypeCore());
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>
{
    HRESULT __stdcall IsPeripheralCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsPeripheralCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsDataValidForFormCore(bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().IsDataValidForFormCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFullDescriptionCore(HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetFullDescriptionCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDescribedByCore(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetDescribedByCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFlowsToCore(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetFlowsToCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFlowsFromCore(::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetFlowsFromCore());
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6>
{
    HRESULT __stdcall GetCultureCore(int32_t* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetCultureCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected>
{
    HRESULT __stdcall PeerFromProvider(::IUnknown* provider, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().PeerFromProvider(*reinterpret_cast<Windows::UI::Xaml::Automation::Provider::IRawElementProviderSimple const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ProviderFromPeer(::IUnknown* peer, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ProviderFromPeer(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationPeer const*>(&peer)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>
{
    HRESULT __stdcall ListenerExists(abi_t<Windows::UI::Xaml::Automation::Peers::AutomationEvents> eventId, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ListenerExists(*reinterpret_cast<Windows::UI::Xaml::Automation::Peers::AutomationEvents const*>(&eventId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>
{
    HRESULT __stdcall GenerateRawElementProviderRuntimeId(abi_t<Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GenerateRawElementProviderRuntimeId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Button const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ButtonBase const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::CaptureElement const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::CheckBox const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ComboBox const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ComboBoxItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithParentAndItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer const*>(&parent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::DatePicker const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::FlipView const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::FlipViewItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithParentAndItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer const*>(&parent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::FlyoutPresenter const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer>
{
    HRESULT __stdcall get_Owner(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Owner());
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>
{
    HRESULT __stdcall FromElement(::IUnknown* element, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FromElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePeerForElement(::IUnknown* element, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreatePeerForElement(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::GridView const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::GridViewHeaderItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::GridViewItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithParentAndItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer const*>(&parent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::GroupItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Hub const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::HubSection const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::HyperlinkButton const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Image const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer>
{
    HRESULT __stdcall get_Item(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Item());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsControlAutomationPeer(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ItemsControlAutomationPeer());
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithParentAndItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer const*>(&parent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2>
{
    HRESULT __stdcall CreateItemAutomationPeer(::IUnknown* item, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().CreateItemAutomationPeer(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ItemsControl const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>
{
    HRESULT __stdcall OnCreateItemAutomationPeer(::IUnknown* item, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().OnCreateItemAutomationPeer(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ListBox const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ListBoxItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithParentAndItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer const*>(&parent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ListView const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ListViewBase const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ListViewBaseHeaderItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ListViewHeaderItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ListViewItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithParentAndItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer const*>(&parent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::MediaElement const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::MediaPlayerElement const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::MediaTransportControls const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::MenuFlyoutItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::MenuFlyoutPresenter const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::PasswordBox const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Pivot const*>(&owner)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::PivotItem const*>(&owner)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().CreateInstanceWithParentAndItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer const*>(&parent)));
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
struct produce<D, Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ProgressBar const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ProgressRing const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::RadioButton const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::RangeBase const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::RepeatButton const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::RichEditBox const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::RichTextBlock const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::RichTextBlockOverflow const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ScrollBar const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ScrollViewer const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::SearchBox const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::Selector const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithParentAndItem(::IUnknown* item, ::IUnknown* parent, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithParentAndItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&item), *reinterpret_cast<Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer const*>(&parent), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::SemanticZoom const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::SettingsFlyout const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Slider const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::TextBlock const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::TextBox const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::Thumb const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::TimePicker const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ToggleButton const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory> : produce_base<D, Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>
{
    HRESULT __stdcall CreateInstanceWithOwner(::IUnknown* owner, ::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstanceWithOwner(*reinterpret_cast<Windows::UI::Xaml::Controls::ToggleSwitch const*>(&owner), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Automation::Peers {

inline AppBarAutomationPeer::AppBarAutomationPeer(Windows::UI::Xaml::Controls::AppBar const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<AppBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline AppBarButtonAutomationPeer::AppBarButtonAutomationPeer(Windows::UI::Xaml::Controls::AppBarButton const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<AppBarButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline AppBarToggleButtonAutomationPeer::AppBarToggleButtonAutomationPeer(Windows::UI::Xaml::Controls::AppBarToggleButton const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<AppBarToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline AutoSuggestBoxAutomationPeer::AutoSuggestBoxAutomationPeer(Windows::UI::Xaml::Controls::AutoSuggestBox const& owner) :
    AutoSuggestBoxAutomationPeer(get_activation_factory<AutoSuggestBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner))
{}

inline bool AutomationPeer::ListenerExists(Windows::UI::Xaml::Automation::Peers::AutomationEvents const& eventId)
{
    return get_activation_factory<AutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics>().ListenerExists(eventId);
}

inline Windows::UI::Xaml::Automation::Peers::RawElementProviderRuntimeId AutomationPeer::GenerateRawElementProviderRuntimeId()
{
    return get_activation_factory<AutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3>().GenerateRawElementProviderRuntimeId();
}

inline AutomationPeerAnnotation::AutomationPeerAnnotation() :
    AutomationPeerAnnotation(activate_instance<AutomationPeerAnnotation>())
{}

inline AutomationPeerAnnotation::AutomationPeerAnnotation(Windows::UI::Xaml::Automation::AnnotationType const& type) :
    AutomationPeerAnnotation(get_activation_factory<AutomationPeerAnnotation, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>().CreateInstance(type))
{}

inline AutomationPeerAnnotation::AutomationPeerAnnotation(Windows::UI::Xaml::Automation::AnnotationType const& type, Windows::UI::Xaml::Automation::Peers::AutomationPeer const& peer) :
    AutomationPeerAnnotation(get_activation_factory<AutomationPeerAnnotation, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory>().CreateWithPeerParameter(type, peer))
{}

inline Windows::UI::Xaml::DependencyProperty AutomationPeerAnnotation::TypeProperty()
{
    return get_activation_factory<AutomationPeerAnnotation, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>().TypeProperty();
}

inline Windows::UI::Xaml::DependencyProperty AutomationPeerAnnotation::PeerProperty()
{
    return get_activation_factory<AutomationPeerAnnotation, Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics>().PeerProperty();
}

inline ButtonAutomationPeer::ButtonAutomationPeer(Windows::UI::Xaml::Controls::Button const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline CaptureElementAutomationPeer::CaptureElementAutomationPeer(Windows::UI::Xaml::Controls::CaptureElement const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<CaptureElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline CheckBoxAutomationPeer::CheckBoxAutomationPeer(Windows::UI::Xaml::Controls::CheckBox const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<CheckBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ComboBoxAutomationPeer::ComboBoxAutomationPeer(Windows::UI::Xaml::Controls::ComboBox const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ComboBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ComboBoxItemAutomationPeer::ComboBoxItemAutomationPeer(Windows::UI::Xaml::Controls::ComboBoxItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ComboBoxItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ComboBoxItemDataAutomationPeer::ComboBoxItemDataAutomationPeer(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer const& parent)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ComboBoxItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, outer, inner));
}

inline DatePickerAutomationPeer::DatePickerAutomationPeer(Windows::UI::Xaml::Controls::DatePicker const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<DatePickerAutomationPeer, Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline FlipViewAutomationPeer::FlipViewAutomationPeer(Windows::UI::Xaml::Controls::FlipView const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<FlipViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline FlipViewItemAutomationPeer::FlipViewItemAutomationPeer(Windows::UI::Xaml::Controls::FlipViewItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<FlipViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline FlipViewItemDataAutomationPeer::FlipViewItemDataAutomationPeer(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer const& parent)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<FlipViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, outer, inner));
}

inline FlyoutPresenterAutomationPeer::FlyoutPresenterAutomationPeer(Windows::UI::Xaml::Controls::FlyoutPresenter const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<FlyoutPresenterAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline FrameworkElementAutomationPeer::FrameworkElementAutomationPeer(Windows::UI::Xaml::FrameworkElement const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<FrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline Windows::UI::Xaml::Automation::Peers::AutomationPeer FrameworkElementAutomationPeer::FromElement(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<FrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>().FromElement(element);
}

inline Windows::UI::Xaml::Automation::Peers::AutomationPeer FrameworkElementAutomationPeer::CreatePeerForElement(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<FrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics>().CreatePeerForElement(element);
}

inline GridViewAutomationPeer::GridViewAutomationPeer(Windows::UI::Xaml::Controls::GridView const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<GridViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline GridViewHeaderItemAutomationPeer::GridViewHeaderItemAutomationPeer(Windows::UI::Xaml::Controls::GridViewHeaderItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<GridViewHeaderItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline GridViewItemAutomationPeer::GridViewItemAutomationPeer(Windows::UI::Xaml::Controls::GridViewItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<GridViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline GridViewItemDataAutomationPeer::GridViewItemDataAutomationPeer(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer const& parent)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<GridViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, outer, inner));
}

inline GroupItemAutomationPeer::GroupItemAutomationPeer(Windows::UI::Xaml::Controls::GroupItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<GroupItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline HubAutomationPeer::HubAutomationPeer(Windows::UI::Xaml::Controls::Hub const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<HubAutomationPeer, Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline HubSectionAutomationPeer::HubSectionAutomationPeer(Windows::UI::Xaml::Controls::HubSection const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<HubSectionAutomationPeer, Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline HyperlinkButtonAutomationPeer::HyperlinkButtonAutomationPeer(Windows::UI::Xaml::Controls::HyperlinkButton const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<HyperlinkButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ImageAutomationPeer::ImageAutomationPeer(Windows::UI::Xaml::Controls::Image const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ImageAutomationPeer, Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ItemAutomationPeer::ItemAutomationPeer(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer const& parent)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, outer, inner));
}

inline ItemsControlAutomationPeer::ItemsControlAutomationPeer(Windows::UI::Xaml::Controls::ItemsControl const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ListBoxAutomationPeer::ListBoxAutomationPeer(Windows::UI::Xaml::Controls::ListBox const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ListBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ListBoxItemAutomationPeer::ListBoxItemAutomationPeer(Windows::UI::Xaml::Controls::ListBoxItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ListBoxItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ListBoxItemDataAutomationPeer::ListBoxItemDataAutomationPeer(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer const& parent)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ListBoxItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, outer, inner));
}

inline ListViewAutomationPeer::ListViewAutomationPeer(Windows::UI::Xaml::Controls::ListView const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ListViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ListViewBaseAutomationPeer::ListViewBaseAutomationPeer(Windows::UI::Xaml::Controls::ListViewBase const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ListViewBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ListViewHeaderItemAutomationPeer::ListViewHeaderItemAutomationPeer(Windows::UI::Xaml::Controls::ListViewHeaderItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ListViewHeaderItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ListViewItemAutomationPeer::ListViewItemAutomationPeer(Windows::UI::Xaml::Controls::ListViewItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ListViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ListViewItemDataAutomationPeer::ListViewItemDataAutomationPeer(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer const& parent)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ListViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, outer, inner));
}

inline MediaElementAutomationPeer::MediaElementAutomationPeer(Windows::UI::Xaml::Controls::MediaElement const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MediaElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline MediaPlayerElementAutomationPeer::MediaPlayerElementAutomationPeer(Windows::UI::Xaml::Controls::MediaPlayerElement const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MediaPlayerElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline MediaTransportControlsAutomationPeer::MediaTransportControlsAutomationPeer(Windows::UI::Xaml::Controls::MediaTransportControls const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MediaTransportControlsAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline MenuFlyoutItemAutomationPeer::MenuFlyoutItemAutomationPeer(Windows::UI::Xaml::Controls::MenuFlyoutItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MenuFlyoutItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline MenuFlyoutPresenterAutomationPeer::MenuFlyoutPresenterAutomationPeer(Windows::UI::Xaml::Controls::MenuFlyoutPresenter const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<MenuFlyoutPresenterAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline PasswordBoxAutomationPeer::PasswordBoxAutomationPeer(Windows::UI::Xaml::Controls::PasswordBox const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<PasswordBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline PivotAutomationPeer::PivotAutomationPeer(Windows::UI::Xaml::Controls::Pivot const& owner) :
    PivotAutomationPeer(get_activation_factory<PivotAutomationPeer, Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory>().CreateInstanceWithOwner(owner))
{}

inline PivotItemAutomationPeer::PivotItemAutomationPeer(Windows::UI::Xaml::Controls::PivotItem const& owner) :
    PivotItemAutomationPeer(get_activation_factory<PivotItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory>().CreateInstanceWithOwner(owner))
{}

inline PivotItemDataAutomationPeer::PivotItemDataAutomationPeer(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer const& parent) :
    PivotItemDataAutomationPeer(get_activation_factory<PivotItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent))
{}

inline ProgressBarAutomationPeer::ProgressBarAutomationPeer(Windows::UI::Xaml::Controls::ProgressBar const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ProgressBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ProgressRingAutomationPeer::ProgressRingAutomationPeer(Windows::UI::Xaml::Controls::ProgressRing const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ProgressRingAutomationPeer, Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline RadioButtonAutomationPeer::RadioButtonAutomationPeer(Windows::UI::Xaml::Controls::RadioButton const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<RadioButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline RangeBaseAutomationPeer::RangeBaseAutomationPeer(Windows::UI::Xaml::Controls::Primitives::RangeBase const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<RangeBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline RepeatButtonAutomationPeer::RepeatButtonAutomationPeer(Windows::UI::Xaml::Controls::Primitives::RepeatButton const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<RepeatButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline RichEditBoxAutomationPeer::RichEditBoxAutomationPeer(Windows::UI::Xaml::Controls::RichEditBox const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<RichEditBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline RichTextBlockAutomationPeer::RichTextBlockAutomationPeer(Windows::UI::Xaml::Controls::RichTextBlock const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<RichTextBlockAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline RichTextBlockOverflowAutomationPeer::RichTextBlockOverflowAutomationPeer(Windows::UI::Xaml::Controls::RichTextBlockOverflow const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<RichTextBlockOverflowAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ScrollBarAutomationPeer::ScrollBarAutomationPeer(Windows::UI::Xaml::Controls::Primitives::ScrollBar const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ScrollBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ScrollViewerAutomationPeer::ScrollViewerAutomationPeer(Windows::UI::Xaml::Controls::ScrollViewer const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ScrollViewerAutomationPeer, Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline SearchBoxAutomationPeer::SearchBoxAutomationPeer(Windows::UI::Xaml::Controls::SearchBox const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SearchBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline SelectorAutomationPeer::SelectorAutomationPeer(Windows::UI::Xaml::Controls::Primitives::Selector const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SelectorAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline SelectorItemAutomationPeer::SelectorItemAutomationPeer(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer const& parent)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SelectorItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, outer, inner));
}

inline SemanticZoomAutomationPeer::SemanticZoomAutomationPeer(Windows::UI::Xaml::Controls::SemanticZoom const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SemanticZoomAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline SettingsFlyoutAutomationPeer::SettingsFlyoutAutomationPeer(Windows::UI::Xaml::Controls::SettingsFlyout const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SettingsFlyoutAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline SliderAutomationPeer::SliderAutomationPeer(Windows::UI::Xaml::Controls::Slider const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<SliderAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline TextBlockAutomationPeer::TextBlockAutomationPeer(Windows::UI::Xaml::Controls::TextBlock const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<TextBlockAutomationPeer, Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline TextBoxAutomationPeer::TextBoxAutomationPeer(Windows::UI::Xaml::Controls::TextBox const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<TextBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ThumbAutomationPeer::ThumbAutomationPeer(Windows::UI::Xaml::Controls::Primitives::Thumb const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ThumbAutomationPeer, Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline TimePickerAutomationPeer::TimePickerAutomationPeer(Windows::UI::Xaml::Controls::TimePicker const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<TimePickerAutomationPeer, Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ToggleButtonAutomationPeer::ToggleButtonAutomationPeer(Windows::UI::Xaml::Controls::Primitives::ToggleButton const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ToggleMenuFlyoutItemAutomationPeer::ToggleMenuFlyoutItemAutomationPeer(Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ToggleMenuFlyoutItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

inline ToggleSwitchAutomationPeer::ToggleSwitchAutomationPeer(Windows::UI::Xaml::Controls::ToggleSwitch const& owner)
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<ToggleSwitchAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>().CreateInstanceWithOwner(owner, outer, inner));
}

template <typename D> Windows::Foundation::IInspectable IAutomationPeerOverridesT<D>::GetPatternCore(Windows::UI::Xaml::Automation::Peers::PatternInterface const& patternInterface) const
{
    return shim().template as<IAutomationPeerOverrides>().GetPatternCore(patternInterface);
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetAcceleratorKeyCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetAcceleratorKeyCore();
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetAccessKeyCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetAccessKeyCore();
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationControlType IAutomationPeerOverridesT<D>::GetAutomationControlTypeCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetAutomationControlTypeCore();
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetAutomationIdCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetAutomationIdCore();
}

template <typename D> Windows::Foundation::Rect IAutomationPeerOverridesT<D>::GetBoundingRectangleCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetBoundingRectangleCore();
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> IAutomationPeerOverridesT<D>::GetChildrenCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetChildrenCore();
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetClassNameCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetClassNameCore();
}

template <typename D> Windows::Foundation::Point IAutomationPeerOverridesT<D>::GetClickablePointCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetClickablePointCore();
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetHelpTextCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetHelpTextCore();
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetItemStatusCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetItemStatusCore();
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetItemTypeCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetItemTypeCore();
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer IAutomationPeerOverridesT<D>::GetLabeledByCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetLabeledByCore();
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetLocalizedControlTypeCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetLocalizedControlTypeCore();
}

template <typename D> hstring IAutomationPeerOverridesT<D>::GetNameCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetNameCore();
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationOrientation IAutomationPeerOverridesT<D>::GetOrientationCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetOrientationCore();
}

template <typename D> bool IAutomationPeerOverridesT<D>::HasKeyboardFocusCore() const
{
    return shim().template as<IAutomationPeerOverrides>().HasKeyboardFocusCore();
}

template <typename D> bool IAutomationPeerOverridesT<D>::IsContentElementCore() const
{
    return shim().template as<IAutomationPeerOverrides>().IsContentElementCore();
}

template <typename D> bool IAutomationPeerOverridesT<D>::IsControlElementCore() const
{
    return shim().template as<IAutomationPeerOverrides>().IsControlElementCore();
}

template <typename D> bool IAutomationPeerOverridesT<D>::IsEnabledCore() const
{
    return shim().template as<IAutomationPeerOverrides>().IsEnabledCore();
}

template <typename D> bool IAutomationPeerOverridesT<D>::IsKeyboardFocusableCore() const
{
    return shim().template as<IAutomationPeerOverrides>().IsKeyboardFocusableCore();
}

template <typename D> bool IAutomationPeerOverridesT<D>::IsOffscreenCore() const
{
    return shim().template as<IAutomationPeerOverrides>().IsOffscreenCore();
}

template <typename D> bool IAutomationPeerOverridesT<D>::IsPasswordCore() const
{
    return shim().template as<IAutomationPeerOverrides>().IsPasswordCore();
}

template <typename D> bool IAutomationPeerOverridesT<D>::IsRequiredForFormCore() const
{
    return shim().template as<IAutomationPeerOverrides>().IsRequiredForFormCore();
}

template <typename D> void IAutomationPeerOverridesT<D>::SetFocusCore() const
{
    return shim().template as<IAutomationPeerOverrides>().SetFocusCore();
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationPeer IAutomationPeerOverridesT<D>::GetPeerFromPointCore(Windows::Foundation::Point const& point) const
{
    return shim().template as<IAutomationPeerOverrides>().GetPeerFromPointCore(point);
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting IAutomationPeerOverridesT<D>::GetLiveSettingCore() const
{
    return shim().template as<IAutomationPeerOverrides>().GetLiveSettingCore();
}

template <typename D> void IAutomationPeerOverrides2T<D>::ShowContextMenuCore() const
{
    return shim().template as<IAutomationPeerOverrides2>().ShowContextMenuCore();
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> IAutomationPeerOverrides2T<D>::GetControlledPeersCore() const
{
    return shim().template as<IAutomationPeerOverrides2>().GetControlledPeersCore();
}

template <typename D> Windows::Foundation::IInspectable IAutomationPeerOverrides3T<D>::NavigateCore(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection const& direction) const
{
    return shim().template as<IAutomationPeerOverrides3>().NavigateCore(direction);
}

template <typename D> Windows::Foundation::IInspectable IAutomationPeerOverrides3T<D>::GetElementFromPointCore(Windows::Foundation::Point const& pointInWindowCoordinates) const
{
    return shim().template as<IAutomationPeerOverrides3>().GetElementFromPointCore(pointInWindowCoordinates);
}

template <typename D> Windows::Foundation::IInspectable IAutomationPeerOverrides3T<D>::GetFocusedElementCore() const
{
    return shim().template as<IAutomationPeerOverrides3>().GetFocusedElementCore();
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> IAutomationPeerOverrides3T<D>::GetAnnotationsCore() const
{
    return shim().template as<IAutomationPeerOverrides3>().GetAnnotationsCore();
}

template <typename D> int32_t IAutomationPeerOverrides3T<D>::GetPositionInSetCore() const
{
    return shim().template as<IAutomationPeerOverrides3>().GetPositionInSetCore();
}

template <typename D> int32_t IAutomationPeerOverrides3T<D>::GetSizeOfSetCore() const
{
    return shim().template as<IAutomationPeerOverrides3>().GetSizeOfSetCore();
}

template <typename D> int32_t IAutomationPeerOverrides3T<D>::GetLevelCore() const
{
    return shim().template as<IAutomationPeerOverrides3>().GetLevelCore();
}

template <typename D> Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType IAutomationPeerOverrides4T<D>::GetLandmarkTypeCore() const
{
    return shim().template as<IAutomationPeerOverrides4>().GetLandmarkTypeCore();
}

template <typename D> hstring IAutomationPeerOverrides4T<D>::GetLocalizedLandmarkTypeCore() const
{
    return shim().template as<IAutomationPeerOverrides4>().GetLocalizedLandmarkTypeCore();
}

template <typename D> bool IAutomationPeerOverrides5T<D>::IsPeripheralCore() const
{
    return shim().template as<IAutomationPeerOverrides5>().IsPeripheralCore();
}

template <typename D> bool IAutomationPeerOverrides5T<D>::IsDataValidForFormCore() const
{
    return shim().template as<IAutomationPeerOverrides5>().IsDataValidForFormCore();
}

template <typename D> hstring IAutomationPeerOverrides5T<D>::GetFullDescriptionCore() const
{
    return shim().template as<IAutomationPeerOverrides5>().GetFullDescriptionCore();
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> IAutomationPeerOverrides5T<D>::GetDescribedByCore() const
{
    return shim().template as<IAutomationPeerOverrides5>().GetDescribedByCore();
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> IAutomationPeerOverrides5T<D>::GetFlowsToCore() const
{
    return shim().template as<IAutomationPeerOverrides5>().GetFlowsToCore();
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> IAutomationPeerOverrides5T<D>::GetFlowsFromCore() const
{
    return shim().template as<IAutomationPeerOverrides5>().GetFlowsFromCore();
}

template <typename D> int32_t IAutomationPeerOverrides6T<D>::GetCultureCore() const
{
    return shim().template as<IAutomationPeerOverrides6>().GetCultureCore();
}

template <typename D> Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer IItemsControlAutomationPeerOverrides2T<D>::OnCreateItemAutomationPeer(Windows::Foundation::IInspectable const& item) const
{
    return shim().template as<IItemsControlAutomationPeerOverrides2>().OnCreateItemAutomationPeer(item);
}

template <typename D, typename ... Interfaces>
struct AppBarAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider, Windows::UI::Xaml::Automation::Provider::IToggleProvider, Windows::UI::Xaml::Automation::Provider::IWindowProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = AppBarAutomationPeer;

protected:
    AppBarAutomationPeerT(Windows::UI::Xaml::Controls::AppBar const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct AppBarButtonAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IInvokeProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = AppBarButtonAutomationPeer;

protected:
    AppBarButtonAutomationPeerT(Windows::UI::Xaml::Controls::AppBarButton const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct AppBarToggleButtonAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Provider::IToggleProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = AppBarToggleButtonAutomationPeer;

protected:
    AppBarToggleButtonAutomationPeerT(Windows::UI::Xaml::Controls::AppBarToggleButton const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct AutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = AutomationPeer;

protected:
    AutomationPeerT()
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::AutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ButtonAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IInvokeProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ButtonAutomationPeer;

protected:
    ButtonAutomationPeerT(Windows::UI::Xaml::Controls::Button const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ButtonBaseAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ButtonBaseAutomationPeer;

protected:
    ButtonBaseAutomationPeerT(Windows::UI::Xaml::Controls::Primitives::ButtonBase const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct CaptureElementAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = CaptureElementAutomationPeer;

protected:
    CaptureElementAutomationPeerT(Windows::UI::Xaml::Controls::CaptureElement const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct CheckBoxAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Provider::IToggleProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = CheckBoxAutomationPeer;

protected:
    CheckBoxAutomationPeerT(Windows::UI::Xaml::Controls::CheckBox const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ComboBoxAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer, Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::Automation::Provider::ISelectionProvider, Windows::UI::Xaml::Automation::Provider::IValueProvider, Windows::UI::Xaml::Automation::Provider::IWindowProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ComboBoxAutomationPeer;

protected:
    ComboBoxAutomationPeerT(Windows::UI::Xaml::Controls::ComboBox const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ComboBoxItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ComboBoxItemAutomationPeer;

protected:
    ComboBoxItemAutomationPeerT(Windows::UI::Xaml::Controls::ComboBoxItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ComboBoxItemDataAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer, Windows::UI::Xaml::Automation::Provider::IScrollItemProvider, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ComboBoxItemDataAutomationPeer;

protected:
    ComboBoxItemDataAutomationPeerT(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer const& parent)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct DatePickerAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = DatePickerAutomationPeer;

protected:
    DatePickerAutomationPeerT(Windows::UI::Xaml::Controls::DatePicker const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer, Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct FlipViewAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::Automation::Provider::ISelectionProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = FlipViewAutomationPeer;

protected:
    FlipViewAutomationPeerT(Windows::UI::Xaml::Controls::FlipView const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct FlipViewItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = FlipViewItemAutomationPeer;

protected:
    FlipViewItemAutomationPeerT(Windows::UI::Xaml::Controls::FlipViewItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct FlipViewItemDataAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer, Windows::UI::Xaml::Automation::Provider::IScrollItemProvider, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = FlipViewItemDataAutomationPeer;

protected:
    FlipViewItemDataAutomationPeerT(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer const& parent)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct FlyoutPresenterAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = FlyoutPresenterAutomationPeer;

protected:
    FlyoutPresenterAutomationPeerT(Windows::UI::Xaml::Controls::FlyoutPresenter const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct FrameworkElementAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = FrameworkElementAutomationPeer;

protected:
    FrameworkElementAutomationPeerT(Windows::UI::Xaml::FrameworkElement const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct GridViewAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer, Windows::UI::Xaml::Automation::Provider::IDropTargetProvider, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::Automation::Provider::ISelectionProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = GridViewAutomationPeer;

protected:
    GridViewAutomationPeerT(Windows::UI::Xaml::Controls::GridView const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct GridViewHeaderItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = GridViewHeaderItemAutomationPeer;

protected:
    GridViewHeaderItemAutomationPeerT(Windows::UI::Xaml::Controls::GridViewHeaderItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct GridViewItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = GridViewItemAutomationPeer;

protected:
    GridViewItemAutomationPeerT(Windows::UI::Xaml::Controls::GridViewItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct GridViewItemDataAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer, Windows::UI::Xaml::Automation::Provider::IScrollItemProvider, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = GridViewItemDataAutomationPeer;

protected:
    GridViewItemDataAutomationPeerT(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer const& parent)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct GroupItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = GroupItemAutomationPeer;

protected:
    GroupItemAutomationPeerT(Windows::UI::Xaml::Controls::GroupItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct HubAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = HubAutomationPeer;

protected:
    HubAutomationPeerT(Windows::UI::Xaml::Controls::Hub const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::HubAutomationPeer, Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct HubSectionAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IScrollItemProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = HubSectionAutomationPeer;

protected:
    HubSectionAutomationPeerT(Windows::UI::Xaml::Controls::HubSection const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer, Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct HyperlinkButtonAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IInvokeProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = HyperlinkButtonAutomationPeer;

protected:
    HyperlinkButtonAutomationPeerT(Windows::UI::Xaml::Controls::HyperlinkButton const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ImageAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ImageAutomationPeer;

protected:
    ImageAutomationPeerT(Windows::UI::Xaml::Controls::Image const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer, Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ItemAutomationPeer;

protected:
    ItemAutomationPeerT(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer const& parent)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ItemsControlAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ItemsControlAutomationPeer;

protected:
    ItemsControlAutomationPeerT(Windows::UI::Xaml::Controls::ItemsControl const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListBoxAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::Automation::Provider::ISelectionProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListBoxAutomationPeer;

protected:
    ListBoxAutomationPeerT(Windows::UI::Xaml::Controls::ListBox const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListBoxItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListBoxItemAutomationPeer;

protected:
    ListBoxItemAutomationPeerT(Windows::UI::Xaml::Controls::ListBoxItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListBoxItemDataAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer, Windows::UI::Xaml::Automation::Provider::IScrollItemProvider, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListBoxItemDataAutomationPeer;

protected:
    ListBoxItemDataAutomationPeerT(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer const& parent)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListViewAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer, Windows::UI::Xaml::Automation::Provider::IDropTargetProvider, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::Automation::Provider::ISelectionProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListViewAutomationPeer;

protected:
    ListViewAutomationPeerT(Windows::UI::Xaml::Controls::ListView const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListViewBaseAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer, Windows::UI::Xaml::Automation::Provider::IDropTargetProvider, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::Automation::Provider::ISelectionProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListViewBaseAutomationPeer;

protected:
    ListViewBaseAutomationPeerT(Windows::UI::Xaml::Controls::ListViewBase const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListViewBaseHeaderItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListViewBaseHeaderItemAutomationPeer;

protected:
    ListViewBaseHeaderItemAutomationPeerT(Windows::UI::Xaml::Controls::ListViewBaseHeaderItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListViewHeaderItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListViewHeaderItemAutomationPeer;

protected:
    ListViewHeaderItemAutomationPeerT(Windows::UI::Xaml::Controls::ListViewHeaderItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListViewItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListViewItemAutomationPeer;

protected:
    ListViewItemAutomationPeerT(Windows::UI::Xaml::Controls::ListViewItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ListViewItemDataAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer, Windows::UI::Xaml::Automation::Provider::IScrollItemProvider, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ListViewItemDataAutomationPeer;

protected:
    ListViewItemDataAutomationPeerT(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer const& parent)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer, Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MediaElementAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = MediaElementAutomationPeer;

protected:
    MediaElementAutomationPeerT(Windows::UI::Xaml::Controls::MediaElement const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MediaPlayerElementAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = MediaPlayerElementAutomationPeer;

protected:
    MediaPlayerElementAutomationPeerT(Windows::UI::Xaml::Controls::MediaPlayerElement const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MediaTransportControlsAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = MediaTransportControlsAutomationPeer;

protected:
    MediaTransportControlsAutomationPeerT(Windows::UI::Xaml::Controls::MediaTransportControls const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MenuFlyoutItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IInvokeProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = MenuFlyoutItemAutomationPeer;

protected:
    MenuFlyoutItemAutomationPeerT(Windows::UI::Xaml::Controls::MenuFlyoutItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct MenuFlyoutPresenterAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = MenuFlyoutPresenterAutomationPeer;

protected:
    MenuFlyoutPresenterAutomationPeerT(Windows::UI::Xaml::Controls::MenuFlyoutPresenter const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer, Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct PasswordBoxAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = PasswordBoxAutomationPeer;

protected:
    PasswordBoxAutomationPeerT(Windows::UI::Xaml::Controls::PasswordBox const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ProgressBarAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer, Windows::UI::Xaml::Automation::Provider::IRangeValueProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ProgressBarAutomationPeer;

protected:
    ProgressBarAutomationPeerT(Windows::UI::Xaml::Controls::ProgressBar const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ProgressRingAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ProgressRingAutomationPeer;

protected:
    ProgressRingAutomationPeerT(Windows::UI::Xaml::Controls::ProgressRing const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer, Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct RadioButtonAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider, Windows::UI::Xaml::Automation::Provider::IToggleProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = RadioButtonAutomationPeer;

protected:
    RadioButtonAutomationPeerT(Windows::UI::Xaml::Controls::RadioButton const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct RangeBaseAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IRangeValueProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = RangeBaseAutomationPeer;

protected:
    RangeBaseAutomationPeerT(Windows::UI::Xaml::Controls::Primitives::RangeBase const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct RepeatButtonAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IInvokeProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = RepeatButtonAutomationPeer;

protected:
    RepeatButtonAutomationPeerT(Windows::UI::Xaml::Controls::Primitives::RepeatButton const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct RichEditBoxAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = RichEditBoxAutomationPeer;

protected:
    RichEditBoxAutomationPeerT(Windows::UI::Xaml::Controls::RichEditBox const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct RichTextBlockAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = RichTextBlockAutomationPeer;

protected:
    RichTextBlockAutomationPeerT(Windows::UI::Xaml::Controls::RichTextBlock const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct RichTextBlockOverflowAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = RichTextBlockOverflowAutomationPeer;

protected:
    RichTextBlockOverflowAutomationPeerT(Windows::UI::Xaml::Controls::RichTextBlockOverflow const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ScrollBarAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer, Windows::UI::Xaml::Automation::Provider::IRangeValueProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ScrollBarAutomationPeer;

protected:
    ScrollBarAutomationPeerT(Windows::UI::Xaml::Controls::Primitives::ScrollBar const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer, Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ScrollViewerAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IScrollProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ScrollViewerAutomationPeer;

protected:
    ScrollViewerAutomationPeerT(Windows::UI::Xaml::Controls::ScrollViewer const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer, Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SearchBoxAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = SearchBoxAutomationPeer;

protected:
    SearchBoxAutomationPeerT(Windows::UI::Xaml::Controls::SearchBox const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SelectorAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer, Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2, Windows::UI::Xaml::Automation::Provider::IItemContainerProvider, Windows::UI::Xaml::Automation::Provider::ISelectionProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = SelectorAutomationPeer;

protected:
    SelectorAutomationPeerT(Windows::UI::Xaml::Controls::Primitives::Selector const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SelectorItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider, Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = SelectorItemAutomationPeer;

protected:
    SelectorItemAutomationPeerT(Windows::Foundation::IInspectable const& item, Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer const& parent)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory>().CreateInstanceWithParentAndItem(item, parent, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SemanticZoomAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IToggleProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = SemanticZoomAutomationPeer;

protected:
    SemanticZoomAutomationPeerT(Windows::UI::Xaml::Controls::SemanticZoom const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SettingsFlyoutAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = SettingsFlyoutAutomationPeer;

protected:
    SettingsFlyoutAutomationPeerT(Windows::UI::Xaml::Controls::SettingsFlyout const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SliderAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer, Windows::UI::Xaml::Automation::Provider::IRangeValueProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = SliderAutomationPeer;

protected:
    SliderAutomationPeerT(Windows::UI::Xaml::Controls::Slider const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer, Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct TextBlockAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = TextBlockAutomationPeer;

protected:
    TextBlockAutomationPeerT(Windows::UI::Xaml::Controls::TextBlock const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer, Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct TextBoxAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = TextBoxAutomationPeer;

protected:
    TextBoxAutomationPeerT(Windows::UI::Xaml::Controls::TextBox const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer, Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ThumbAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ThumbAutomationPeer;

protected:
    ThumbAutomationPeerT(Windows::UI::Xaml::Controls::Primitives::Thumb const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer, Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct TimePickerAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = TimePickerAutomationPeer;

protected:
    TimePickerAutomationPeerT(Windows::UI::Xaml::Controls::TimePicker const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer, Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ToggleButtonAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IToggleProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ToggleButtonAutomationPeer;

protected:
    ToggleButtonAutomationPeerT(Windows::UI::Xaml::Controls::Primitives::ToggleButton const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ToggleMenuFlyoutItemAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IToggleProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ToggleMenuFlyoutItemAutomationPeer;

protected:
    ToggleMenuFlyoutItemAutomationPeerT(Windows::UI::Xaml::Controls::ToggleMenuFlyoutItem const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct ToggleSwitchAutomationPeerT :
    implements<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Provider::IToggleProvider, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>
{
    using composable = ToggleSwitchAutomationPeer;

protected:
    ToggleSwitchAutomationPeerT(Windows::UI::Xaml::Controls::ToggleSwitch const& owner)
    {
        get_activation_factory<Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer, Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory>().CreateInstanceWithOwner(owner, *this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarButtonAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAppBarToggleButtonAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutoSuggestBoxAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer5> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer6> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeer6> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotationStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerStatics3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IButtonAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IButtonBaseAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ICaptureElementAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ICheckBoxAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IComboBoxItemDataAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IDatePickerAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IDatePickerFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFlipViewItemDataAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFlyoutPresenterAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewHeaderItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGridViewItemDataAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IGroupItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IHubAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IHubAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IHubSectionAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IHyperlinkButtonAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IImageAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IImageAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IInkToolbarAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeer2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListBoxItemDataAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListPickerFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewBaseAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewBaseHeaderItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewHeaderItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IListViewItemDataAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ILoopingSelectorAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ILoopingSelectorItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMapControlAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMediaElementAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMediaPlayerElementAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMediaTransportControlsAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMenuFlyoutItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IMenuFlyoutPresenterAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPasswordBoxAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPickerFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPivotAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPivotItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IPivotItemDataAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IProgressBarAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IProgressRingAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRadioButtonAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRangeBaseAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRepeatButtonAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRichEditBoxAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRichTextBlockAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IRichTextBlockOverflowAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IScrollBarAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IScrollViewerAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISearchBoxAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISelectorAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISelectorItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISemanticZoomAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISettingsFlyoutAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ITextBlockAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ITextBoxAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IThumbAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ITimePickerAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ITimePickerFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IToggleButtonAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IToggleMenuFlyoutItemAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::IToggleSwitchAutomationPeerFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::AppBarAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::AppBarButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::AppBarToggleButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::AutoSuggestBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::AutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::AutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ButtonBaseAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::CaptureElementAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::CheckBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ComboBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ComboBoxItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ComboBoxItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::DatePickerAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::DatePickerFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::DatePickerFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::FlipViewAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::FlipViewItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::FlipViewItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::FlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::GridViewAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::GridViewHeaderItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::GridViewItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::GridViewItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::GroupItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::HubAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::HubAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::HubSectionAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::HyperlinkButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ImageAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::InkToolbarAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::InkToolbarAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ItemsControlAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListBoxItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListBoxItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListPickerFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListPickerFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListViewAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListViewBaseAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListViewBaseHeaderItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListViewHeaderItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListViewItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ListViewItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::LoopingSelectorAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::LoopingSelectorAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::LoopingSelectorItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::MapControlAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::MapControlAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::MediaElementAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::MediaPlayerElementAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::MediaTransportControlsAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::MenuFlyoutItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::MenuFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::PasswordBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::PickerFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::PickerFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::PivotAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::PivotItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::PivotItemDataAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ProgressBarAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ProgressRingAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::RadioButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::RangeBaseAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::RepeatButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::RichEditBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::RichTextBlockAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::RichTextBlockOverflowAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ScrollBarAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ScrollViewerAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::SearchBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::SelectorAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::SelectorItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::SemanticZoomAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::SettingsFlyoutAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::SliderAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::TextBlockAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::TextBoxAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ThumbAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::TimePickerAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::TimePickerFlyoutPresenterAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::TimePickerFlyoutPresenterAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ToggleButtonAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ToggleMenuFlyoutItemAutomationPeer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Automation::Peers::ToggleSwitchAutomationPeer> {};

}

WINRT_WARNING_POP
