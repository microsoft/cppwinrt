// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Automation::Peers {

template <typename D, typename A = ABI::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides>
class IAutomationPeerOverridesT : public A
{
    D & shim() noexcept { return *static_cast<D *>(this); }

public:

    using IAutomationPeerOverrides = winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides;

    Windows::IInspectable GetPatternCore(Windows::UI::Xaml::Automation::Peers::PatternInterface patternInterface)
    {
        return shim().as<IAutomationPeerOverrides>().GetPatternCore(patternInterface);
    }

    hstring GetAcceleratorKeyCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetAcceleratorKeyCore();
    }

    hstring GetAccessKeyCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetAccessKeyCore();
    }

    Windows::UI::Xaml::Automation::Peers::AutomationControlType GetAutomationControlTypeCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetAutomationControlTypeCore();
    }

    hstring GetAutomationIdCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetAutomationIdCore();
    }

    Windows::Foundation::Rect GetBoundingRectangleCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetBoundingRectangleCore();
    }

    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetChildrenCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetChildrenCore();
    }

    hstring GetClassNameCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetClassNameCore();
    }

    Windows::Foundation::Point GetClickablePointCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetClickablePointCore();
    }

    hstring GetHelpTextCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetHelpTextCore();
    }

    hstring GetItemStatusCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetItemStatusCore();
    }

    hstring GetItemTypeCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetItemTypeCore();
    }

    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetLabeledByCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetLabeledByCore();
    }

    hstring GetLocalizedControlTypeCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetLocalizedControlTypeCore();
    }

    hstring GetNameCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetNameCore();
    }

    Windows::UI::Xaml::Automation::Peers::AutomationOrientation GetOrientationCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetOrientationCore();
    }

    bool HasKeyboardFocusCore()
    {
        return shim().as<IAutomationPeerOverrides>().HasKeyboardFocusCore();
    }

    bool IsContentElementCore()
    {
        return shim().as<IAutomationPeerOverrides>().IsContentElementCore();
    }

    bool IsControlElementCore()
    {
        return shim().as<IAutomationPeerOverrides>().IsControlElementCore();
    }

    bool IsEnabledCore()
    {
        return shim().as<IAutomationPeerOverrides>().IsEnabledCore();
    }

    bool IsKeyboardFocusableCore()
    {
        return shim().as<IAutomationPeerOverrides>().IsKeyboardFocusableCore();
    }

    bool IsOffscreenCore()
    {
        return shim().as<IAutomationPeerOverrides>().IsOffscreenCore();
    }

    bool IsPasswordCore()
    {
        return shim().as<IAutomationPeerOverrides>().IsPasswordCore();
    }

    bool IsRequiredForFormCore()
    {
        return shim().as<IAutomationPeerOverrides>().IsRequiredForFormCore();
    }

    void SetFocusCore()
    {
        shim().as<IAutomationPeerOverrides>().SetFocusCore();
    }

    Windows::UI::Xaml::Automation::Peers::AutomationPeer GetPeerFromPointCore(const Windows::Foundation::Point & point)
    {
        return shim().as<IAutomationPeerOverrides>().GetPeerFromPointCore(point);
    }

    Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting GetLiveSettingCore()
    {
        return shim().as<IAutomationPeerOverrides>().GetLiveSettingCore();
    }

    HRESULT __stdcall abi_GetPatternCore(Windows::UI::Xaml::Automation::Peers::PatternInterface patternInterface, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetPatternCore(patternInterface));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAcceleratorKeyCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAcceleratorKeyCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAccessKeyCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAccessKeyCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAutomationControlTypeCore(Windows::UI::Xaml::Automation::Peers::AutomationControlType * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAutomationControlTypeCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAutomationIdCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAutomationIdCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBoundingRectangleCore(abi_arg_out<Windows::Foundation::Rect> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetBoundingRectangleCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetChildrenCore(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeer>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetChildrenCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetClassNameCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetClassNameCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetClickablePointCore(abi_arg_out<Windows::Foundation::Point> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetClickablePointCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHelpTextCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetHelpTextCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemStatusCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetItemStatusCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetItemTypeCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetItemTypeCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLabeledByCore(abi_arg_out<Windows::UI::Xaml::Automation::Peers::IAutomationPeer> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetLabeledByCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocalizedControlTypeCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetLocalizedControlTypeCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNameCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetNameCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetOrientationCore(Windows::UI::Xaml::Automation::Peers::AutomationOrientation * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetOrientationCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HasKeyboardFocusCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().HasKeyboardFocusCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsContentElementCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsContentElementCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsControlElementCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsControlElementCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEnabledCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsEnabledCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsKeyboardFocusableCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsKeyboardFocusableCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsOffscreenCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsOffscreenCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsPasswordCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsPasswordCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsRequiredForFormCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsRequiredForFormCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFocusCore() noexcept override
    {
        try
        {
            this->shim().SetFocusCore();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPeerFromPointCore(abi_arg_in<Windows::Foundation::Point> point, abi_arg_out<Windows::UI::Xaml::Automation::Peers::IAutomationPeer> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetPeerFromPointCore(*reinterpret_cast<const Windows::Foundation::Point *>(&point)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLiveSettingCore(Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetLiveSettingCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D, typename A = ABI::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2>
class IAutomationPeerOverrides2T : public A
{
    D & shim() noexcept { return *static_cast<D *>(this); }

public:

    using IAutomationPeerOverrides2 = winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2;

    void ShowContextMenuCore()
    {
        shim().as<IAutomationPeerOverrides2>().ShowContextMenuCore();
    }

    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetControlledPeersCore()
    {
        return shim().as<IAutomationPeerOverrides2>().GetControlledPeersCore();
    }

    HRESULT __stdcall abi_ShowContextMenuCore() noexcept override
    {
        try
        {
            this->shim().ShowContextMenuCore();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetControlledPeersCore(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Automation::Peers::AutomationPeer>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetControlledPeersCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D, typename A = ABI::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3>
class IAutomationPeerOverrides3T : public A
{
    D & shim() noexcept { return *static_cast<D *>(this); }

public:

    using IAutomationPeerOverrides3 = winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3;

    Windows::IInspectable NavigateCore(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection direction)
    {
        return shim().as<IAutomationPeerOverrides3>().NavigateCore(direction);
    }

    Windows::IInspectable GetElementFromPointCore(const Windows::Foundation::Point & pointInWindowCoordinates)
    {
        return shim().as<IAutomationPeerOverrides3>().GetElementFromPointCore(pointInWindowCoordinates);
    }

    Windows::IInspectable GetFocusedElementCore()
    {
        return shim().as<IAutomationPeerOverrides3>().GetFocusedElementCore();
    }

    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation> GetAnnotationsCore()
    {
        return shim().as<IAutomationPeerOverrides3>().GetAnnotationsCore();
    }

    int32_t GetPositionInSetCore()
    {
        return shim().as<IAutomationPeerOverrides3>().GetPositionInSetCore();
    }

    int32_t GetSizeOfSetCore()
    {
        return shim().as<IAutomationPeerOverrides3>().GetSizeOfSetCore();
    }

    int32_t GetLevelCore()
    {
        return shim().as<IAutomationPeerOverrides3>().GetLevelCore();
    }

    HRESULT __stdcall abi_NavigateCore(Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection direction, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().NavigateCore(direction));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetElementFromPointCore(abi_arg_in<Windows::Foundation::Point> pointInWindowCoordinates, abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetElementFromPointCore(*reinterpret_cast<const Windows::Foundation::Point *>(&pointInWindowCoordinates)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFocusedElementCore(abi_arg_out<Windows::IInspectable> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetFocusedElementCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAnnotationsCore(abi_arg_out<Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Automation::Peers::AutomationPeerAnnotation>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetAnnotationsCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetPositionInSetCore(int32_t * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetPositionInSetCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSizeOfSetCore(int32_t * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetSizeOfSetCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLevelCore(int32_t * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetLevelCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D, typename A = ABI::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4>
class IAutomationPeerOverrides4T : public A
{
    D & shim() noexcept { return *static_cast<D *>(this); }

public:

    using IAutomationPeerOverrides4 = winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4;

    Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType GetLandmarkTypeCore()
    {
        return shim().as<IAutomationPeerOverrides4>().GetLandmarkTypeCore();
    }

    hstring GetLocalizedLandmarkTypeCore()
    {
        return shim().as<IAutomationPeerOverrides4>().GetLocalizedLandmarkTypeCore();
    }

    HRESULT __stdcall abi_GetLandmarkTypeCore(Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetLandmarkTypeCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLocalizedLandmarkTypeCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetLocalizedLandmarkTypeCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D, typename A = ABI::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5>
class IAutomationPeerOverrides5T : public A
{
    D & shim() noexcept { return *static_cast<D *>(this); }

public:

    using IAutomationPeerOverrides5 = winrt::Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5;

    bool IsPeripheralCore()
    {
        return shim().as<IAutomationPeerOverrides5>().IsPeripheralCore();
    }

    bool IsDataValidForFormCore()
    {
        return shim().as<IAutomationPeerOverrides5>().IsDataValidForFormCore();
    }

    hstring GetFullDescriptionCore()
    {
        return shim().as<IAutomationPeerOverrides5>().GetFullDescriptionCore();
    }

    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetDescribedByCore()
    {
        return shim().as<IAutomationPeerOverrides5>().GetDescribedByCore();
    }

    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetFlowsToCore()
    {
        return shim().as<IAutomationPeerOverrides5>().GetFlowsToCore();
    }

    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer> GetFlowsFromCore()
    {
        return shim().as<IAutomationPeerOverrides5>().GetFlowsFromCore();
    }

    HRESULT __stdcall abi_IsPeripheralCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsPeripheralCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsDataValidForFormCore(bool * returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().IsDataValidForFormCore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFullDescriptionCore(abi_arg_out<hstring> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetFullDescriptionCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDescribedByCore(abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetDescribedByCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFlowsToCore(abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetFlowsToCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFlowsFromCore(abi_arg_out<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::Automation::Peers::AutomationPeer>> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().GetFlowsFromCore());
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D, typename A = ABI::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2>
class IItemsControlAutomationPeerOverrides2T : public A
{
    D & shim() noexcept { return *static_cast<D *>(this); }

public:

    using IItemsControlAutomationPeerOverrides2 = winrt::Windows::UI::Xaml::Automation::Peers::IItemsControlAutomationPeerOverrides2;

    Windows::UI::Xaml::Automation::Peers::ItemAutomationPeer OnCreateItemAutomationPeer(const Windows::IInspectable & item)
    {
        return shim().as<IItemsControlAutomationPeerOverrides2>().OnCreateItemAutomationPeer(item);
    }

    HRESULT __stdcall abi_OnCreateItemAutomationPeer(abi_arg_in<Windows::IInspectable> item, abi_arg_out<Windows::UI::Xaml::Automation::Peers::IItemAutomationPeer> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().OnCreateItemAutomationPeer(*reinterpret_cast<const Windows::IInspectable *>(&item)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

}

}
