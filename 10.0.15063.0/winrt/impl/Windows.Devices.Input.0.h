// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Input {

enum class PointerDeviceType
{
    Touch = 0,
    Pen = 1,
    Mouse = 2,
};

struct IKeyboardCapabilities;
struct IMouseCapabilities;
struct IMouseDevice;
struct IMouseDeviceStatics;
struct IMouseEventArgs;
struct IPointerDevice;
struct IPointerDevice2;
struct IPointerDeviceStatics;
struct ITouchCapabilities;
struct KeyboardCapabilities;
struct MouseCapabilities;
struct MouseDevice;
struct MouseEventArgs;
struct PointerDevice;
struct TouchCapabilities;
struct MouseDelta;
struct PointerDeviceUsage;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Input::IKeyboardCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::IMouseCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::IMouseDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::IMouseDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::IMouseEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::IPointerDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::IPointerDevice2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::IPointerDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::ITouchCapabilities>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::KeyboardCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::MouseCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::MouseDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::MouseEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::PointerDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::TouchCapabilities>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::PointerDeviceType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Input::MouseDelta>{ using type = struct_category<int32_t,int32_t>; };
template <> struct category<Windows::Devices::Input::PointerDeviceUsage>{ using type = struct_category<uint32_t,uint32_t,int32_t,int32_t,int32_t,int32_t,uint32_t,float>; };
template <> struct name<Windows::Devices::Input::IKeyboardCapabilities>{ static constexpr auto & value{ L"Windows.Devices.Input.IKeyboardCapabilities" }; };
template <> struct name<Windows::Devices::Input::IMouseCapabilities>{ static constexpr auto & value{ L"Windows.Devices.Input.IMouseCapabilities" }; };
template <> struct name<Windows::Devices::Input::IMouseDevice>{ static constexpr auto & value{ L"Windows.Devices.Input.IMouseDevice" }; };
template <> struct name<Windows::Devices::Input::IMouseDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Input.IMouseDeviceStatics" }; };
template <> struct name<Windows::Devices::Input::IMouseEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.IMouseEventArgs" }; };
template <> struct name<Windows::Devices::Input::IPointerDevice>{ static constexpr auto & value{ L"Windows.Devices.Input.IPointerDevice" }; };
template <> struct name<Windows::Devices::Input::IPointerDevice2>{ static constexpr auto & value{ L"Windows.Devices.Input.IPointerDevice2" }; };
template <> struct name<Windows::Devices::Input::IPointerDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Input.IPointerDeviceStatics" }; };
template <> struct name<Windows::Devices::Input::ITouchCapabilities>{ static constexpr auto & value{ L"Windows.Devices.Input.ITouchCapabilities" }; };
template <> struct name<Windows::Devices::Input::KeyboardCapabilities>{ static constexpr auto & value{ L"Windows.Devices.Input.KeyboardCapabilities" }; };
template <> struct name<Windows::Devices::Input::MouseCapabilities>{ static constexpr auto & value{ L"Windows.Devices.Input.MouseCapabilities" }; };
template <> struct name<Windows::Devices::Input::MouseDevice>{ static constexpr auto & value{ L"Windows.Devices.Input.MouseDevice" }; };
template <> struct name<Windows::Devices::Input::MouseEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.MouseEventArgs" }; };
template <> struct name<Windows::Devices::Input::PointerDevice>{ static constexpr auto & value{ L"Windows.Devices.Input.PointerDevice" }; };
template <> struct name<Windows::Devices::Input::TouchCapabilities>{ static constexpr auto & value{ L"Windows.Devices.Input.TouchCapabilities" }; };
template <> struct name<Windows::Devices::Input::PointerDeviceType>{ static constexpr auto & value{ L"Windows.Devices.Input.PointerDeviceType" }; };
template <> struct name<Windows::Devices::Input::MouseDelta>{ static constexpr auto & value{ L"Windows.Devices.Input.MouseDelta" }; };
template <> struct name<Windows::Devices::Input::PointerDeviceUsage>{ static constexpr auto & value{ L"Windows.Devices.Input.PointerDeviceUsage" }; };
template <> struct guid<Windows::Devices::Input::IKeyboardCapabilities>{ static constexpr GUID value{ 0x3A3F9B56,0x6798,0x4BBC,{ 0x83,0x3E,0x0F,0x34,0xB1,0x7C,0x65,0xFF } }; };
template <> struct guid<Windows::Devices::Input::IMouseCapabilities>{ static constexpr GUID value{ 0xBCA5E023,0x7DD9,0x4B6B,{ 0x9A,0x92,0x55,0xD4,0x3C,0xB3,0x8F,0x73 } }; };
template <> struct guid<Windows::Devices::Input::IMouseDevice>{ static constexpr GUID value{ 0x88EDF458,0xF2C8,0x49F4,{ 0xBE,0x1F,0xC2,0x56,0xB3,0x88,0xBC,0x11 } }; };
template <> struct guid<Windows::Devices::Input::IMouseDeviceStatics>{ static constexpr GUID value{ 0x484A9045,0x6D70,0x49DB,{ 0x8E,0x68,0x46,0xFF,0xBD,0x17,0xD3,0x8D } }; };
template <> struct guid<Windows::Devices::Input::IMouseEventArgs>{ static constexpr GUID value{ 0xF625AA5D,0x2354,0x4CC7,{ 0x92,0x30,0x96,0x94,0x1C,0x96,0x9F,0xDE } }; };
template <> struct guid<Windows::Devices::Input::IPointerDevice>{ static constexpr GUID value{ 0x93C9BAFC,0xEBCB,0x467E,{ 0x82,0xC6,0x27,0x6F,0xEA,0xE3,0x6B,0x5A } }; };
template <> struct guid<Windows::Devices::Input::IPointerDevice2>{ static constexpr GUID value{ 0xF8A6D2A0,0xC484,0x489F,{ 0xAE,0x3E,0x30,0xD2,0xEE,0x1F,0xFD,0x3E } }; };
template <> struct guid<Windows::Devices::Input::IPointerDeviceStatics>{ static constexpr GUID value{ 0xD8B89AA1,0xD1C6,0x416E,{ 0xBD,0x8D,0x57,0x90,0x91,0x4D,0xC5,0x63 } }; };
template <> struct guid<Windows::Devices::Input::ITouchCapabilities>{ static constexpr GUID value{ 0x20DD55F9,0x13F1,0x46C8,{ 0x92,0x85,0x2C,0x05,0xFA,0x3E,0xDA,0x6F } }; };
template <> struct default_interface<Windows::Devices::Input::KeyboardCapabilities>{ using type = Windows::Devices::Input::IKeyboardCapabilities; };
template <> struct default_interface<Windows::Devices::Input::MouseCapabilities>{ using type = Windows::Devices::Input::IMouseCapabilities; };
template <> struct default_interface<Windows::Devices::Input::MouseDevice>{ using type = Windows::Devices::Input::IMouseDevice; };
template <> struct default_interface<Windows::Devices::Input::MouseEventArgs>{ using type = Windows::Devices::Input::IMouseEventArgs; };
template <> struct default_interface<Windows::Devices::Input::PointerDevice>{ using type = Windows::Devices::Input::IPointerDevice; };
template <> struct default_interface<Windows::Devices::Input::TouchCapabilities>{ using type = Windows::Devices::Input::ITouchCapabilities; };

template <typename D>
struct consume_Windows_Devices_Input_IKeyboardCapabilities
{
    int32_t KeyboardPresent() const;
};
template <> struct consume<Windows::Devices::Input::IKeyboardCapabilities> { template <typename D> using type = consume_Windows_Devices_Input_IKeyboardCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_Input_IMouseCapabilities
{
    int32_t MousePresent() const;
    int32_t VerticalWheelPresent() const;
    int32_t HorizontalWheelPresent() const;
    int32_t SwapButtons() const;
    uint32_t NumberOfButtons() const;
};
template <> struct consume<Windows::Devices::Input::IMouseCapabilities> { template <typename D> using type = consume_Windows_Devices_Input_IMouseCapabilities<D>; };

template <typename D>
struct consume_Windows_Devices_Input_IMouseDevice
{
    event_token MouseMoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const& handler) const;
    using MouseMoved_revoker = event_revoker<Windows::Devices::Input::IMouseDevice>;
    MouseMoved_revoker MouseMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice, Windows::Devices::Input::MouseEventArgs> const& handler) const;
    void MouseMoved(event_token const& cookie) const;
};
template <> struct consume<Windows::Devices::Input::IMouseDevice> { template <typename D> using type = consume_Windows_Devices_Input_IMouseDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Input_IMouseDeviceStatics
{
    Windows::Devices::Input::MouseDevice GetForCurrentView() const;
};
template <> struct consume<Windows::Devices::Input::IMouseDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Input_IMouseDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Input_IMouseEventArgs
{
    Windows::Devices::Input::MouseDelta MouseDelta() const;
};
template <> struct consume<Windows::Devices::Input::IMouseEventArgs> { template <typename D> using type = consume_Windows_Devices_Input_IMouseEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Input_IPointerDevice
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    bool IsIntegrated() const;
    uint32_t MaxContacts() const;
    Windows::Foundation::Rect PhysicalDeviceRect() const;
    Windows::Foundation::Rect ScreenRect() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDeviceUsage> SupportedUsages() const;
};
template <> struct consume<Windows::Devices::Input::IPointerDevice> { template <typename D> using type = consume_Windows_Devices_Input_IPointerDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Input_IPointerDevice2
{
    uint32_t MaxPointersWithZDistance() const;
};
template <> struct consume<Windows::Devices::Input::IPointerDevice2> { template <typename D> using type = consume_Windows_Devices_Input_IPointerDevice2<D>; };

template <typename D>
struct consume_Windows_Devices_Input_IPointerDeviceStatics
{
    Windows::Devices::Input::PointerDevice GetPointerDevice(uint32_t pointerId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Input::PointerDevice> GetPointerDevices() const;
};
template <> struct consume<Windows::Devices::Input::IPointerDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Input_IPointerDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Input_ITouchCapabilities
{
    int32_t TouchPresent() const;
    uint32_t Contacts() const;
};
template <> struct consume<Windows::Devices::Input::ITouchCapabilities> { template <typename D> using type = consume_Windows_Devices_Input_ITouchCapabilities<D>; };

template <> struct abi<Windows::Devices::Input::IKeyboardCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyboardPresent(int32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Input::IMouseCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MousePresent(int32_t* value) = 0;
    virtual HRESULT __stdcall get_VerticalWheelPresent(int32_t* value) = 0;
    virtual HRESULT __stdcall get_HorizontalWheelPresent(int32_t* value) = 0;
    virtual HRESULT __stdcall get_SwapButtons(int32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfButtons(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Input::IMouseDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_MouseMoved(::IUnknown* handler, abi_t<event_token>* cookie) = 0;
    virtual HRESULT __stdcall remove_MouseMoved(abi_t<event_token> cookie) = 0;
};};

template <> struct abi<Windows::Devices::Input::IMouseDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** mouseDevice) = 0;
};};

template <> struct abi<Windows::Devices::Input::IMouseEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MouseDelta(abi_t<Windows::Devices::Input::MouseDelta>* value) = 0;
};};

template <> struct abi<Windows::Devices::Input::IPointerDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerDeviceType(abi_t<Windows::Devices::Input::PointerDeviceType>* value) = 0;
    virtual HRESULT __stdcall get_IsIntegrated(bool* value) = 0;
    virtual HRESULT __stdcall get_MaxContacts(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_PhysicalDeviceRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_ScreenRect(abi_t<Windows::Foundation::Rect>* value) = 0;
    virtual HRESULT __stdcall get_SupportedUsages(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Input::IPointerDevice2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxPointersWithZDistance(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Input::IPointerDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetPointerDevice(uint32_t pointerId, ::IUnknown** pointerDevice) = 0;
    virtual HRESULT __stdcall GetPointerDevices(::IUnknown** pointerDevices) = 0;
};};

template <> struct abi<Windows::Devices::Input::ITouchCapabilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TouchPresent(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Contacts(uint32_t* value) = 0;
};};

}
