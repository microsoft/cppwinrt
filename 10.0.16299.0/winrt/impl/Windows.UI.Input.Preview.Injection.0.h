// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Gaming::Input {

enum class GamepadButtons : unsigned;
struct GamepadReading;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection {

enum class InjectedInputButtonChangeKind : int32_t
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

enum class InjectedInputKeyOptions : uint32_t
{
    None = 0x0,
    ExtendedKey = 0x1,
    KeyUp = 0x2,
    ScanCode = 0x8,
    Unicode = 0x4,
};

enum class InjectedInputMouseOptions : uint32_t
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

enum class InjectedInputPenButtons : uint32_t
{
    None = 0x0,
    Barrel = 0x1,
    Inverted = 0x2,
    Eraser = 0x4,
};

enum class InjectedInputPenParameters : uint32_t
{
    None = 0x0,
    Pressure = 0x1,
    Rotation = 0x2,
    TiltX = 0x4,
    TiltY = 0x8,
};

enum class InjectedInputPointerOptions : uint32_t
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

enum class InjectedInputShortcut : int32_t
{
    Back = 0,
    Start = 1,
    Search = 2,
};

enum class InjectedInputTouchParameters : uint32_t
{
    None = 0x0,
    Contact = 0x1,
    Orientation = 0x2,
    Pressure = 0x4,
};

enum class InjectedInputVisualizationMode : int32_t
{
    None = 0,
    Default = 1,
    Indirect = 2,
};

struct IInjectedInputGamepadInfo;
struct IInjectedInputGamepadInfoFactory;
struct IInjectedInputKeyboardInfo;
struct IInjectedInputMouseInfo;
struct IInjectedInputPenInfo;
struct IInjectedInputTouchInfo;
struct IInputInjector;
struct IInputInjector2;
struct IInputInjectorStatics;
struct IInputInjectorStatics2;
struct InjectedInputGamepadInfo;
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

template<> struct is_enum_flag<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions> : std::true_type {};
template<> struct is_enum_flag<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions> : std::true_type {};
template<> struct is_enum_flag<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons> : std::true_type {};
template<> struct is_enum_flag<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters> : std::true_type {};
template<> struct is_enum_flag<Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions> : std::true_type {};
template<> struct is_enum_flag<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters> : std::true_type {};
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjector>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjector2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>{ using type = class_category; };
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
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjector>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjector" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjector2>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjector2" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics2" }; };
template <> struct name<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>{ static constexpr auto & value{ L"Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo" }; };
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
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>{ static constexpr GUID value{ 0x20AE9A3F,0xDF11,0x4572,{ 0xA9,0xAB,0xD7,0x5B,0x8A,0x5E,0x48,0xAD } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>{ static constexpr GUID value{ 0x59596876,0x6C39,0x4EC4,{ 0x8B,0x2A,0x29,0xEF,0x7D,0xE1,0x8A,0xCA } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ static constexpr GUID value{ 0x4B46D140,0x2B6A,0x5FFA,{ 0x7E,0xAE,0xBD,0x07,0x7B,0x05,0x2A,0xCD } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ static constexpr GUID value{ 0x96F56E6B,0xE47A,0x5CF4,{ 0x41,0x8D,0x8A,0x5F,0xB9,0x67,0x0C,0x7D } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>{ static constexpr GUID value{ 0x6B40AD03,0xCA1E,0x5527,{ 0x7E,0x02,0x28,0x28,0x54,0x0B,0xB1,0xD4 } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>{ static constexpr GUID value{ 0x224FD1DF,0x43E8,0x5EF5,{ 0x51,0x0A,0x69,0xCA,0x8C,0x9B,0x4C,0x28 } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInputInjector>{ static constexpr GUID value{ 0x8EC26F84,0x0B02,0x4BD2,{ 0xAD,0x7A,0x3D,0x46,0x58,0xBE,0x3E,0x18 } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInputInjector2>{ static constexpr GUID value{ 0x8E7A905D,0x1453,0x43A7,{ 0x9B,0xCB,0x06,0xD6,0xD7,0xB3,0x05,0xF7 } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ static constexpr GUID value{ 0xDEAE6943,0x7402,0x4141,{ 0xA5,0xC6,0x0C,0x01,0xAA,0x57,0xB1,0x6A } }; };
template <> struct guid<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>{ static constexpr GUID value{ 0xA4DB38FB,0xDD8C,0x414F,{ 0x95,0xEA,0xF8,0x7E,0xF4,0xC0,0xAE,0x6C } }; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo>{ using type = Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo; };
template <> struct default_interface<Windows::UI::Input::Preview::Injection::InputInjector>{ using type = Windows::UI::Input::Preview::Injection::IInputInjector; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo
{
    Windows::Gaming::Input::GamepadButtons Buttons() const noexcept;
    void Buttons(Windows::Gaming::Input::GamepadButtons const& value) const noexcept;
    double LeftThumbstickX() const noexcept;
    void LeftThumbstickX(double value) const noexcept;
    double LeftThumbstickY() const noexcept;
    void LeftThumbstickY(double value) const noexcept;
    double LeftTrigger() const noexcept;
    void LeftTrigger(double value) const noexcept;
    double RightThumbstickX() const noexcept;
    void RightThumbstickX(double value) const noexcept;
    double RightThumbstickY() const noexcept;
    void RightThumbstickY(double value) const noexcept;
    double RightTrigger() const noexcept;
    void RightTrigger(double value) const noexcept;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory
{
    Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo CreateInstance(Windows::Gaming::Input::GamepadReading const& reading) const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions KeyOptions() const noexcept;
    void KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions const& value) const noexcept;
    uint16_t ScanCode() const noexcept;
    void ScanCode(uint16_t value) const noexcept;
    uint16_t VirtualKey() const noexcept;
    void VirtualKey(uint16_t value) const noexcept;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions MouseOptions() const noexcept;
    void MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions const& value) const noexcept;
    uint32_t MouseData() const noexcept;
    void MouseData(uint32_t value) const noexcept;
    int32_t DeltaY() const noexcept;
    void DeltaY(int32_t value) const noexcept;
    int32_t DeltaX() const noexcept;
    void DeltaX(int32_t value) const noexcept;
    uint32_t TimeOffsetInMilliseconds() const noexcept;
    void TimeOffsetInMilliseconds(uint32_t value) const noexcept;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo PointerInfo() const noexcept;
    void PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const noexcept;
    Windows::UI::Input::Preview::Injection::InjectedInputPenButtons PenButtons() const noexcept;
    void PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons const& value) const noexcept;
    Windows::UI::Input::Preview::Injection::InjectedInputPenParameters PenParameters() const noexcept;
    void PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters const& value) const noexcept;
    double Pressure() const noexcept;
    void Pressure(double value) const noexcept;
    double Rotation() const noexcept;
    void Rotation(double value) const noexcept;
    int32_t TiltX() const noexcept;
    void TiltX(int32_t value) const noexcept;
    int32_t TiltY() const noexcept;
    void TiltY(int32_t value) const noexcept;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo
{
    Windows::UI::Input::Preview::Injection::InjectedInputRectangle Contact() const noexcept;
    void Contact(Windows::UI::Input::Preview::Injection::InjectedInputRectangle const& value) const noexcept;
    int32_t Orientation() const noexcept;
    void Orientation(int32_t value) const noexcept;
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo PointerInfo() const noexcept;
    void PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const noexcept;
    double Pressure() const noexcept;
    void Pressure(double value) const noexcept;
    Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters TouchParameters() const noexcept;
    void TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters const& value) const noexcept;
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
struct consume_Windows_UI_Input_Preview_Injection_IInputInjector2
{
    void InitializeGamepadInjection() const;
    void InjectGamepadInput(Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo const& input) const;
    void UninitializeGamepadInjection() const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjector2> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics
{
    Windows::UI::Input::Preview::Injection::InputInjector TryCreate() const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjectorStatics> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2
{
    Windows::UI::Input::Preview::Injection::InputInjector TryCreateForAppBroadcastOnly() const;
};
template <> struct consume<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2> { template <typename D> using type = consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2<D>; };

template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Buttons(Windows::Gaming::Input::GamepadButtons* value) = 0;
    virtual HRESULT __stdcall put_Buttons(Windows::Gaming::Input::GamepadButtons value) = 0;
    virtual HRESULT __stdcall get_LeftThumbstickX(double* value) = 0;
    virtual HRESULT __stdcall put_LeftThumbstickX(double value) = 0;
    virtual HRESULT __stdcall get_LeftThumbstickY(double* value) = 0;
    virtual HRESULT __stdcall put_LeftThumbstickY(double value) = 0;
    virtual HRESULT __stdcall get_LeftTrigger(double* value) = 0;
    virtual HRESULT __stdcall put_LeftTrigger(double value) = 0;
    virtual HRESULT __stdcall get_RightThumbstickX(double* value) = 0;
    virtual HRESULT __stdcall put_RightThumbstickX(double value) = 0;
    virtual HRESULT __stdcall get_RightThumbstickY(double* value) = 0;
    virtual HRESULT __stdcall put_RightThumbstickY(double value) = 0;
    virtual HRESULT __stdcall get_RightTrigger(double* value) = 0;
    virtual HRESULT __stdcall put_RightTrigger(double value) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstanceFromGamepadReading(struct_of<64> reading, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions* value) = 0;
    virtual HRESULT __stdcall put_KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value) = 0;
    virtual HRESULT __stdcall get_ScanCode(uint16_t* value) = 0;
    virtual HRESULT __stdcall put_ScanCode(uint16_t value) = 0;
    virtual HRESULT __stdcall get_VirtualKey(uint16_t* value) = 0;
    virtual HRESULT __stdcall put_VirtualKey(uint16_t value) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions* value) = 0;
    virtual HRESULT __stdcall put_MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value) = 0;
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
    virtual HRESULT __stdcall get_PointerInfo(struct_of<32>* value) = 0;
    virtual HRESULT __stdcall put_PointerInfo(struct_of<32> value) = 0;
    virtual HRESULT __stdcall get_PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons* value) = 0;
    virtual HRESULT __stdcall put_PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value) = 0;
    virtual HRESULT __stdcall get_PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters* value) = 0;
    virtual HRESULT __stdcall put_PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value) = 0;
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
    virtual HRESULT __stdcall get_Contact(struct_of<16>* value) = 0;
    virtual HRESULT __stdcall put_Contact(struct_of<16> value) = 0;
    virtual HRESULT __stdcall get_Orientation(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Orientation(int32_t value) = 0;
    virtual HRESULT __stdcall get_PointerInfo(struct_of<32>* value) = 0;
    virtual HRESULT __stdcall put_PointerInfo(struct_of<32> value) = 0;
    virtual HRESULT __stdcall get_Pressure(double* value) = 0;
    virtual HRESULT __stdcall put_Pressure(double value) = 0;
    virtual HRESULT __stdcall get_TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters* value) = 0;
    virtual HRESULT __stdcall put_TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InjectKeyboardInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall InjectMouseInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) = 0;
    virtual HRESULT __stdcall InjectTouchInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall UninitializeTouchInjection() = 0;
    virtual HRESULT __stdcall InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) = 0;
    virtual HRESULT __stdcall InjectPenInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall UninitializePenInjection() = 0;
    virtual HRESULT __stdcall InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut shortcut) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjector2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall InitializeGamepadInjection() = 0;
    virtual HRESULT __stdcall InjectGamepadInput(::IUnknown* input) = 0;
    virtual HRESULT __stdcall UninitializeGamepadInjection() = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjectorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryCreate(::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryCreateForAppBroadcastOnly(::IUnknown** instance) = 0;
};};

}
