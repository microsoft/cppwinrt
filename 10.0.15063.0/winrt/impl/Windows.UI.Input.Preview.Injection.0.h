// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection {

enum class InjectedInputButtonChangeKind
{
    None = 0,
    FirstButtonDown = 1,
    FirstButtonUp = 2,
    SecondButtonDown = 3,
    SecondButtonUp = 4,
    ThirdButtonDown = 5,
    ThirdButtonUp = 6,
    FourthButtonDown = 7,
    FourthButtonUp = 8,
    FifthButtonDown = 9,
    FifthButtonUp = 10,
};

enum class InjectedInputKeyOptions : unsigned
{
    None = 0x0,
    ExtendedKey = 0x1,
    KeyUp = 0x2,
    ScanCode = 0x8,
    Unicode = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(InjectedInputKeyOptions)

enum class InjectedInputMouseOptions : unsigned
{
    None = 0x0,
    Move = 0x1,
    LeftDown = 0x2,
    LeftUp = 0x4,
    RightDown = 0x8,
    RightUp = 0x10,
    MiddleDown = 0x20,
    MiddleUp = 0x40,
    XDown = 0x80,
    XUp = 0x100,
    Wheel = 0x800,
    HWheel = 0x1000,
    MoveNoCoalesce = 0x2000,
    VirtualDesk = 0x4000,
    Absolute = 0x8000,
};

DEFINE_ENUM_FLAG_OPERATORS(InjectedInputMouseOptions)

enum class InjectedInputPenButtons : unsigned
{
    None = 0x0,
    Barrel = 0x1,
    Inverted = 0x2,
    Eraser = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(InjectedInputPenButtons)

enum class InjectedInputPenParameters : unsigned
{
    None = 0x0,
    Pressure = 0x1,
    Rotation = 0x2,
    TiltX = 0x4,
    TiltY = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(InjectedInputPenParameters)

enum class InjectedInputPointerOptions : unsigned
{
    None = 0x0,
    New = 0x1,
    InRange = 0x2,
    InContact = 0x4,
    FirstButton = 0x10,
    SecondButton = 0x20,
    Primary = 0x2000,
    Confidence = 0x4000,
    Canceled = 0x8000,
    PointerDown = 0x10000,
    Update = 0x20000,
    PointerUp = 0x40000,
    CaptureChanged = 0x200000,
};

DEFINE_ENUM_FLAG_OPERATORS(InjectedInputPointerOptions)

enum class InjectedInputShortcut
{
    Back = 0,
    Start = 1,
    Search = 2,
};

enum class InjectedInputTouchParameters : unsigned
{
    None = 0x0,
    Contact = 0x1,
    Orientation = 0x2,
    Pressure = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(InjectedInputTouchParameters)

enum class InjectedInputVisualizationMode
{
    None = 0,
    Default = 1,
    Indirect = 2,
};

struct IInjectedInputKeyboardInfo;
struct IInjectedInputMouseInfo;
struct IInjectedInputPenInfo;
struct IInjectedInputTouchInfo;
struct IInputInjector;
struct IInputInjectorStatics;
struct InjectedInputKeyboardInfo;
struct InjectedInputMouseInfo;
struct InjectedInputPenInfo;
struct InjectedInputTouchInfo;
struct InputInjector;
struct InjectedInputPoint;
struct InjectedInputPointerInfo;
struct InjectedInputRectangle;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjector>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InputInjector>{ using type = class_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputButtonChangeKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputShortcut>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPoint>{ using type = struct_category<int32_t,int32_t>; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>{ using type = struct_category<uint32_t,Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions,Windows::UI::Input::Preview::Injection::InjectedInputPoint,uint32_t,uint64_t>; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>{ using type = struct_category<int32_t,int32_t,int32_t,int32_t>; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjector>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjector" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPenInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InputInjector>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InputInjector" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputButtonChangeKind>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputButtonChangeKind" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputKeyOptions" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputMouseOptions" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPenButtons" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPenParameters" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPointerOptions" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputShortcut>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputShortcut" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputTouchParameters" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputVisualizationMode" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPoint>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPoint" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputPointerInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputRectangle" }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ static constexpr GUID value{ 0x4B46D140,0x2B6A,0x5FFA,{ 0x7E,0xAE,0xBD,0x07,0x7B,0x05,0x2A,0xCD } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ static constexpr GUID value{ 0x96F56E6B,0xE47A,0x5CF4,{ 0x41,0x8D,0x8A,0x5F,0xB9,0x67,0x0C,0x7D } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ static constexpr GUID value{ 0x6B40AD03,0xCA1E,0x5527,{ 0x7E,0x02,0x28,0x28,0x54,0x0B,0xB1,0xD4 } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ static constexpr GUID value{ 0x224FD1DF,0x43E8,0x5EF5,{ 0x51,0x0A,0x69,0xCA,0x8C,0x9B,0x4C,0x28 } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInputInjector>{ static constexpr GUID value{ 0x8EC26F84,0x0B02,0x4BD2,{ 0xAD,0x7A,0x3D,0x46,0x58,0xBE,0x3E,0x18 } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ static constexpr GUID value{ 0xDEAE6943,0x7402,0x4141,{ 0xA5,0xC6,0x0C,0x01,0xAA,0x57,0xB1,0x6A } }; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InputInjector>{ using type = Windows::UI::Input::Preview::Injection::IInputInjector; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions KeyOptions() const;
    void KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions const& value) const;
    uint16_t ScanCode() const;
    void ScanCode(uint16_t value) const;
    uint16_t VirtualKey() const;
    void VirtualKey(uint16_t value) const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions MouseOptions() const;
    void MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions const& value) const;
    uint32_t MouseData() const;
    void MouseData(uint32_t value) const;
    int32_t DeltaY() const;
    void DeltaY(int32_t value) const;
    int32_t DeltaX() const;
    void DeltaX(int32_t value) const;
    uint32_t TimeOffsetInMilliseconds() const;
    void TimeOffsetInMilliseconds(uint32_t value) const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo PointerInfo() const;
    void PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const;
    Windows::UI::Input::Preview::Injection::InjectedInputPenButtons PenButtons() const;
    void PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons const& value) const;
    Windows::UI::Input::Preview::Injection::InjectedInputPenParameters PenParameters() const;
    void PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters const& value) const;
    double Pressure() const;
    void Pressure(double value) const;
    double Rotation() const;
    void Rotation(double value) const;
    int32_t TiltX() const;
    void TiltX(int32_t value) const;
    int32_t TiltY() const;
    void TiltY(int32_t value) const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputRectangle Contact() const;
    void Contact(Windows::UI::Input::Preview::Injection::InjectedInputRectangle const& value) const;
    int32_t Orientation() const;
    void Orientation(int32_t value) const;
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo PointerInfo() const;
    void PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const;
    double Pressure() const;
    void Pressure(double value) const;
    Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters TouchParameters() const;
    void TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters const& value) const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInputInjector
{
    void InjectKeyboardInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> const& input) const;
    void InjectMouseInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> const& input) const;
    void InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const;
    void InjectTouchInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> const& input) const;
    void UninitializeTouchInjection() const;
    void InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const;
    void InjectPenInput(Windows::UI::Input::Preview::Injection::InjectedInputPenInfo const& input) const;
    void UninitializePenInjection() const;
    void InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut const& shortcut) const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjector> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics
{
    Windows::UI::Input::Preview::Injection::InputInjector TryCreate() const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjectorStatics> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics<D>; };

template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyOptions(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions>* value) = 0;
    virtual HRESULT __stdcall put_KeyOptions(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions> value) = 0;
    virtual HRESULT __stdcall get_ScanCode(uint16_t* value) = 0;
    virtual HRESULT __stdcall put_ScanCode(uint16_t value) = 0;
    virtual HRESULT __stdcall get_VirtualKey(uint16_t* value) = 0;
    virtual HRESULT __stdcall put_VirtualKey(uint16_t value) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MouseOptions(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions>* value) = 0;
    virtual HRESULT __stdcall put_MouseOptions(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions> value) = 0;
    virtual HRESULT __stdcall get_MouseData(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MouseData(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DeltaY(int32_t* value) = 0;
    virtual HRESULT __stdcall put_DeltaY(int32_t value) = 0;
    virtual HRESULT __stdcall get_DeltaX(int32_t* value) = 0;
    virtual HRESULT __stdcall put_DeltaX(int32_t value) = 0;
    virtual HRESULT __stdcall get_TimeOffsetInMilliseconds(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_TimeOffsetInMilliseconds(uint32_t value) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PointerInfo(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>* value) = 0;
    virtual HRESULT __stdcall put_PointerInfo(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo> value) = 0;
    virtual HRESULT __stdcall get_PenButtons(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons>* value) = 0;
    virtual HRESULT __stdcall put_PenButtons(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons> value) = 0;
    virtual HRESULT __stdcall get_PenParameters(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters>* value) = 0;
    virtual HRESULT __stdcall put_PenParameters(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters> value) = 0;
    virtual HRESULT __stdcall get_Pressure(double* value) = 0;
    virtual HRESULT __stdcall put_Pressure(double value) = 0;
    virtual HRESULT __stdcall get_Rotation(double* value) = 0;
    virtual HRESULT __stdcall put_Rotation(double value) = 0;
    virtual HRESULT __stdcall get_TiltX(int32_t* value) = 0;
    virtual HRESULT __stdcall put_TiltX(int32_t value) = 0;
    virtual HRESULT __stdcall get_TiltY(int32_t* value) = 0;
    virtual HRESULT __stdcall put_TiltY(int32_t value) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Contact(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>* value) = 0;
    virtual HRESULT __stdcall put_Contact(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputRectangle> value) = 0;
    virtual HRESULT __stdcall get_Orientation(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Orientation(int32_t value) = 0;
    virtual HRESULT __stdcall get_PointerInfo(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>* value) = 0;
    virtual HRESULT __stdcall put_PointerInfo(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo> value) = 0;
    virtual HRESULT __stdcall get_Pressure(double* value) = 0;
    virtual HRESULT __stdcall put_Pressure(double value) = 0;
    virtual HRESULT __stdcall get_TouchParameters(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters>* value) = 0;
    virtual HRESULT __stdcall put_TouchParameters(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters> value) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InjectKeyboardInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall InjectMouseInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall InitializeTouchInjection(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode> visualMode) = 0;
    virtual HRESULT __stdcall InjectTouchInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall UninitializeTouchInjection() = 0;
    virtual HRESULT __stdcall InitializePenInjection(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode> visualMode) = 0;
    virtual HRESULT __stdcall InjectPenInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall UninitializePenInjection() = 0;
    virtual HRESULT __stdcall InjectShortcut(abi_t<Windows::UI::Input::Preview::Injection::InjectedInputShortcut> shortcut) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryCreate(::IUnknown** instance) = 0;
};};

}
