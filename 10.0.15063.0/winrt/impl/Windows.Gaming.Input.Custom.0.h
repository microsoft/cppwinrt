// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Gaming::Input {

struct IGameController;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;

}

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Custom {

enum class GipFirmwareUpdateStatus
{
    Completed = 0,
    UpToDate = 1,
    Failed = 2,
};

enum class GipMessageClass
{
    Command = 0,
    LowLatency = 1,
    StandardLatency = 2,
};

enum class XusbDeviceSubtype
{
    Unknown = 0,
    Gamepad = 1,
    ArcadePad = 2,
    ArcadeStick = 3,
    FlightStick = 4,
    Wheel = 5,
    Guitar = 6,
    GuitarAlternate = 7,
    GuitarBass = 8,
    DrumKit = 9,
    DancePad = 10,
};

enum class XusbDeviceType
{
    Unknown = 0,
    Gamepad = 1,
};

struct ICustomGameControllerFactory;
struct IGameControllerFactoryManagerStatics;
struct IGameControllerFactoryManagerStatics2;
struct IGameControllerInputSink;
struct IGameControllerProvider;
struct IGipFirmwareUpdateResult;
struct IGipGameControllerInputSink;
struct IGipGameControllerProvider;
struct IHidGameControllerInputSink;
struct IHidGameControllerProvider;
struct IXusbGameControllerInputSink;
struct IXusbGameControllerProvider;
struct GameControllerFactoryManager;
struct GipFirmwareUpdateResult;
struct GipGameControllerProvider;
struct HidGameControllerProvider;
struct XusbGameControllerProvider;
struct GameControllerVersionInfo;
struct GipFirmwareUpdateProgress;

}

namespace winrt::impl {

template <> struct category<Windows::Gaming::Input::Custom::ICustomGameControllerFactory>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IGameControllerInputSink>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IGameControllerProvider>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IGipGameControllerInputSink>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IGipGameControllerProvider>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IHidGameControllerInputSink>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IHidGameControllerProvider>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::IXusbGameControllerProvider>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::Custom::GameControllerFactoryManager>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::Custom::GipGameControllerProvider>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::Custom::HidGameControllerProvider>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::Custom::XusbGameControllerProvider>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Input::Custom::GipMessageClass>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Input::Custom::XusbDeviceSubtype>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Input::Custom::XusbDeviceType>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Input::Custom::GameControllerVersionInfo>{ using type = struct_category<uint16_t,uint16_t,uint16_t,uint16_t>; };
template <> struct category<Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>{ using type = struct_category<double,uint32_t>; };
template <> struct name<Windows::Gaming::Input::Custom::ICustomGameControllerFactory>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.ICustomGameControllerFactory" }; };
template <> struct name<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics" }; };
template <> struct name<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics2" }; };
template <> struct name<Windows::Gaming::Input::Custom::IGameControllerInputSink>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IGameControllerInputSink" }; };
template <> struct name<Windows::Gaming::Input::Custom::IGameControllerProvider>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IGameControllerProvider" }; };
template <> struct name<Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IGipFirmwareUpdateResult" }; };
template <> struct name<Windows::Gaming::Input::Custom::IGipGameControllerInputSink>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IGipGameControllerInputSink" }; };
template <> struct name<Windows::Gaming::Input::Custom::IGipGameControllerProvider>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IGipGameControllerProvider" }; };
template <> struct name<Windows::Gaming::Input::Custom::IHidGameControllerInputSink>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IHidGameControllerInputSink" }; };
template <> struct name<Windows::Gaming::Input::Custom::IHidGameControllerProvider>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IHidGameControllerProvider" }; };
template <> struct name<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IXusbGameControllerInputSink" }; };
template <> struct name<Windows::Gaming::Input::Custom::IXusbGameControllerProvider>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.IXusbGameControllerProvider" }; };
template <> struct name<Windows::Gaming::Input::Custom::GameControllerFactoryManager>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.GameControllerFactoryManager" }; };
template <> struct name<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.GipFirmwareUpdateResult" }; };
template <> struct name<Windows::Gaming::Input::Custom::GipGameControllerProvider>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.GipGameControllerProvider" }; };
template <> struct name<Windows::Gaming::Input::Custom::HidGameControllerProvider>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.HidGameControllerProvider" }; };
template <> struct name<Windows::Gaming::Input::Custom::XusbGameControllerProvider>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.XusbGameControllerProvider" }; };
template <> struct name<Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.GipFirmwareUpdateStatus" }; };
template <> struct name<Windows::Gaming::Input::Custom::GipMessageClass>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.GipMessageClass" }; };
template <> struct name<Windows::Gaming::Input::Custom::XusbDeviceSubtype>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.XusbDeviceSubtype" }; };
template <> struct name<Windows::Gaming::Input::Custom::XusbDeviceType>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.XusbDeviceType" }; };
template <> struct name<Windows::Gaming::Input::Custom::GameControllerVersionInfo>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.GameControllerVersionInfo" }; };
template <> struct name<Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>{ static constexpr auto & value{ L"Windows.Gaming.Input.Custom.GipFirmwareUpdateProgress" }; };
template <> struct guid<Windows::Gaming::Input::Custom::ICustomGameControllerFactory>{ static constexpr GUID value{ 0x69A0AE5E,0x758E,0x4CBE,{ 0xAC,0xE6,0x62,0x15,0x5F,0xE9,0x12,0x6F } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>{ static constexpr GUID value{ 0x36CB66E3,0xD0A1,0x4986,{ 0xA2,0x4C,0x40,0xB1,0x37,0xDE,0xBA,0x9E } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>{ static constexpr GUID value{ 0xEACE5644,0x19DF,0x4115,{ 0xB3,0x2A,0x27,0x93,0xE2,0xAE,0xA3,0xBB } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IGameControllerInputSink>{ static constexpr GUID value{ 0x1FF6F922,0xC640,0x4C78,{ 0xA8,0x20,0x9A,0x71,0x5C,0x55,0x8B,0xCB } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IGameControllerProvider>{ static constexpr GUID value{ 0xE6D73982,0x2996,0x4559,{ 0xB1,0x6C,0x3E,0x57,0xD4,0x6E,0x58,0xD6 } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult>{ static constexpr GUID value{ 0x6B794D32,0x8553,0x4292,{ 0x8E,0x03,0xE1,0x66,0x51,0xA2,0xF8,0xBC } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IGipGameControllerInputSink>{ static constexpr GUID value{ 0xA2108ABF,0x09F1,0x43BC,{ 0xA1,0x40,0x80,0xF8,0x99,0xEC,0x36,0xFB } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IGipGameControllerProvider>{ static constexpr GUID value{ 0xDBCF1E19,0x1AF5,0x45A8,{ 0xBF,0x02,0xA0,0xEE,0x50,0xC8,0x23,0xFC } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IHidGameControllerInputSink>{ static constexpr GUID value{ 0xF754C322,0x182D,0x40E4,{ 0xA1,0x26,0xFC,0xEE,0x4F,0xFA,0x1E,0x31 } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IHidGameControllerProvider>{ static constexpr GUID value{ 0x95CE3AF4,0xABF0,0x4B68,{ 0xA0,0x81,0x3B,0x7D,0xE7,0x3F,0xF0,0xE7 } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>{ static constexpr GUID value{ 0xB2AC1D95,0x6ECB,0x42B3,{ 0x8A,0xAB,0x02,0x54,0x01,0xCA,0x47,0x12 } }; };
template <> struct guid<Windows::Gaming::Input::Custom::IXusbGameControllerProvider>{ static constexpr GUID value{ 0x6E2971EB,0x0EFB,0x48B4,{ 0x80,0x8B,0x83,0x76,0x43,0xB2,0xF2,0x16 } }; };
template <> struct default_interface<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult>{ using type = Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult; };
template <> struct default_interface<Windows::Gaming::Input::Custom::GipGameControllerProvider>{ using type = Windows::Gaming::Input::Custom::IGipGameControllerProvider; };
template <> struct default_interface<Windows::Gaming::Input::Custom::HidGameControllerProvider>{ using type = Windows::Gaming::Input::Custom::IHidGameControllerProvider; };
template <> struct default_interface<Windows::Gaming::Input::Custom::XusbGameControllerProvider>{ using type = Windows::Gaming::Input::Custom::IXusbGameControllerProvider; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_ICustomGameControllerFactory
{
    Windows::Foundation::IInspectable CreateGameController(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
    void OnGameControllerAdded(Windows::Gaming::Input::IGameController const& value) const;
    void OnGameControllerRemoved(Windows::Gaming::Input::IGameController const& value) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::ICustomGameControllerFactory> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_ICustomGameControllerFactory<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics
{
    void RegisterCustomFactoryForGipInterface(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, GUID const& interfaceId) const;
    void RegisterCustomFactoryForHardwareId(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) const;
    void RegisterCustomFactoryForXusbType(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, Windows::Gaming::Input::Custom::XusbDeviceType const& xusbType, Windows::Gaming::Input::Custom::XusbDeviceSubtype const& xusbSubtype) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics2
{
    Windows::Gaming::Input::IGameController TryGetFactoryControllerFromGameController(Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, Windows::Gaming::Input::IGameController const& gameController) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IGameControllerInputSink
{
    void OnInputResumed(uint64_t timestamp) const;
    void OnInputSuspended(uint64_t timestamp) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IGameControllerInputSink> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IGameControllerInputSink<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IGameControllerProvider
{
    Windows::Gaming::Input::Custom::GameControllerVersionInfo FirmwareVersionInfo() const;
    uint16_t HardwareProductId() const;
    uint16_t HardwareVendorId() const;
    Windows::Gaming::Input::Custom::GameControllerVersionInfo HardwareVersionInfo() const;
    bool IsConnected() const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IGameControllerProvider> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult
{
    uint32_t ExtendedErrorCode() const;
    uint32_t FinalComponentId() const;
    Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus Status() const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IGipGameControllerInputSink
{
    void OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) const;
    void OnMessageReceived(uint64_t timestamp, Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, uint8_t sequenceId, array_view<uint8_t const> messageBuffer) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IGipGameControllerInputSink> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IGipGameControllerInputSink<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IGipGameControllerProvider
{
    void SendMessage(Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, array_view<uint8_t const> messageBuffer) const;
    void SendReceiveMessage(Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, array_view<uint8_t const> requestMessageBuffer, array_view<uint8_t> responseMessageBuffer) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress> UpdateFirmwareAsync(Windows::Storage::Streams::IInputStream const& firmwareImage) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IGipGameControllerProvider> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IGipGameControllerProvider<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IHidGameControllerInputSink
{
    void OnInputReportReceived(uint64_t timestamp, uint8_t reportId, array_view<uint8_t const> reportBuffer) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IHidGameControllerInputSink> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IHidGameControllerInputSink<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider
{
    uint16_t UsageId() const;
    uint16_t UsagePage() const;
    void GetFeatureReport(uint8_t reportId, array_view<uint8_t> reportBuffer) const;
    void SendFeatureReport(uint8_t reportId, array_view<uint8_t const> reportBuffer) const;
    void SendOutputReport(uint8_t reportId, array_view<uint8_t const> reportBuffer) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IHidGameControllerProvider> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IXusbGameControllerInputSink
{
    void OnInputReceived(uint64_t timestamp, uint8_t reportId, array_view<uint8_t const> inputBuffer) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IXusbGameControllerInputSink<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_Custom_IXusbGameControllerProvider
{
    void SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) const;
};
template <> struct consume<Windows::Gaming::Input::Custom::IXusbGameControllerProvider> { template <typename D> using type = consume_Windows_Gaming_Input_Custom_IXusbGameControllerProvider<D>; };

template <> struct abi<Windows::Gaming::Input::Custom::ICustomGameControllerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateGameController(::IUnknown* provider, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall OnGameControllerAdded(::IUnknown* value) = 0;
    virtual HRESULT __stdcall OnGameControllerRemoved(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterCustomFactoryForGipInterface(::IUnknown* factory, abi_t<GUID> interfaceId) = 0;
    virtual HRESULT __stdcall RegisterCustomFactoryForHardwareId(::IUnknown* factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) = 0;
    virtual HRESULT __stdcall RegisterCustomFactoryForXusbType(::IUnknown* factory, abi_t<Windows::Gaming::Input::Custom::XusbDeviceType> xusbType, abi_t<Windows::Gaming::Input::Custom::XusbDeviceSubtype> xusbSubtype) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryGetFactoryControllerFromGameController(::IUnknown* factory, ::IUnknown* gameController, ::IUnknown** factoryController) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IGameControllerInputSink>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnInputResumed(uint64_t timestamp) = 0;
    virtual HRESULT __stdcall OnInputSuspended(uint64_t timestamp) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IGameControllerProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FirmwareVersionInfo(abi_t<Windows::Gaming::Input::Custom::GameControllerVersionInfo>* value) = 0;
    virtual HRESULT __stdcall get_HardwareProductId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_HardwareVendorId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_HardwareVersionInfo(abi_t<Windows::Gaming::Input::Custom::GameControllerVersionInfo>* value) = 0;
    virtual HRESULT __stdcall get_IsConnected(bool* value) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ExtendedErrorCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_FinalComponentId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus>* value) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IGipGameControllerInputSink>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) = 0;
    virtual HRESULT __stdcall OnMessageReceived(uint64_t timestamp, abi_t<Windows::Gaming::Input::Custom::GipMessageClass> messageClass, uint8_t messageId, uint8_t sequenceId, uint32_t __messageBufferSize, uint8_t* messageBuffer) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IGipGameControllerProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SendMessage(abi_t<Windows::Gaming::Input::Custom::GipMessageClass> messageClass, uint8_t messageId, uint32_t __messageBufferSize, uint8_t* messageBuffer) = 0;
    virtual HRESULT __stdcall SendReceiveMessage(abi_t<Windows::Gaming::Input::Custom::GipMessageClass> messageClass, uint8_t messageId, uint32_t __requestMessageBufferSize, uint8_t* requestMessageBuffer, uint32_t __responseMessageBufferSize, uint8_t* responseMessageBuffer) = 0;
    virtual HRESULT __stdcall UpdateFirmwareAsync(::IUnknown* firmwareImage, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IHidGameControllerInputSink>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnInputReportReceived(uint64_t timestamp, uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IHidGameControllerProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UsageId(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_UsagePage(uint16_t* value) = 0;
    virtual HRESULT __stdcall GetFeatureReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) = 0;
    virtual HRESULT __stdcall SendFeatureReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) = 0;
    virtual HRESULT __stdcall SendOutputReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnInputReceived(uint64_t timestamp, uint8_t reportId, uint32_t __inputBufferSize, uint8_t* inputBuffer) = 0;
};};

template <> struct abi<Windows::Gaming::Input::Custom::IXusbGameControllerProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) = 0;
};};

}
