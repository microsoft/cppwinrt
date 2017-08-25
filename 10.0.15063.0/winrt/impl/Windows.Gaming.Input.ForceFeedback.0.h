// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::ForceFeedback {

enum class ConditionForceEffectKind
{
    Spring = 0,
    Damper = 1,
    Inertia = 2,
    Friction = 3,
};

enum class ForceFeedbackEffectAxes : unsigned
{
    None = 0x0,
    X = 0x1,
    Y = 0x2,
    Z = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(ForceFeedbackEffectAxes)

enum class ForceFeedbackEffectState
{
    Stopped = 0,
    Running = 1,
    Paused = 2,
    Faulted = 3,
};

enum class ForceFeedbackLoadEffectResult
{
    Succeeded = 0,
    EffectStorageFull = 1,
    EffectNotSupported = 2,
};

enum class PeriodicForceEffectKind
{
    SquareWave = 0,
    SineWave = 1,
    TriangleWave = 2,
    SawtoothWaveUp = 3,
    SawtoothWaveDown = 4,
};

struct IConditionForceEffect;
struct IConditionForceEffectFactory;
struct IConstantForceEffect;
struct IForceFeedbackEffect;
struct IForceFeedbackMotor;
struct IPeriodicForceEffect;
struct IPeriodicForceEffectFactory;
struct IRampForceEffect;
struct ConditionForceEffect;
struct ConstantForceEffect;
struct ForceFeedbackMotor;
struct PeriodicForceEffect;
struct RampForceEffect;

}

namespace winrt::impl {

template <> struct category<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>{ using type = interface_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::ConstantForceEffect>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::RampForceEffect>{ using type = class_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>{ using type = enum_category; };
template <> struct category<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind>{ using type = enum_category; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IConstantForceEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.IRampForceEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ConditionForceEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::ConstantForceEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ConstantForceEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::RampForceEffect>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.RampForceEffect" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ConditionForceEffectKind" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackEffectAxes" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackEffectState" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackLoadEffectResult" }; };
template <> struct name<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind>{ static constexpr auto & value{ L"Windows.Gaming.Input.ForceFeedback.PeriodicForceEffectKind" }; };
template <> struct guid<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>{ static constexpr GUID value{ 0x32D1EA68,0x3695,0x4E69,{ 0x85,0xC0,0xCD,0x19,0x44,0x18,0x91,0x40 } }; };
template <> struct guid<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>{ static constexpr GUID value{ 0x91A99264,0x1810,0x4EB6,{ 0xA7,0x73,0xBF,0xD3,0xB8,0xCD,0xDB,0xAB } }; };
template <> struct guid<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>{ static constexpr GUID value{ 0x9BFA0140,0xF3C7,0x415C,{ 0xB0,0x68,0x0F,0x06,0x87,0x34,0xBC,0xE0 } }; };
template <> struct guid<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>{ static constexpr GUID value{ 0xA17FBA0C,0x2AE4,0x48C2,{ 0x80,0x63,0xEA,0xBD,0x07,0x77,0xCB,0x89 } }; };
template <> struct guid<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>{ static constexpr GUID value{ 0x8D3D417C,0xA5EA,0x4516,{ 0x80,0x26,0x2B,0x00,0xF7,0x4E,0xF6,0xE5 } }; };
template <> struct guid<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>{ static constexpr GUID value{ 0x5C5138D7,0xFC75,0x4D52,{ 0x9A,0x0A,0xEF,0xE4,0xCA,0xB5,0xFE,0x64 } }; };
template <> struct guid<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>{ static constexpr GUID value{ 0x6F62EB1A,0x9851,0x477B,{ 0xB3,0x18,0x35,0xEC,0xAA,0x15,0x07,0x0F } }; };
template <> struct guid<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>{ static constexpr GUID value{ 0xF1F81259,0x1CA6,0x4080,{ 0xB5,0x6D,0xB4,0x3F,0x33,0x54,0xD0,0x52 } }; };
template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::ConditionForceEffect>{ using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect; };
template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::ConstantForceEffect>{ using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect; };
template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor>{ using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor; };
template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect>{ using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect; };
template <> struct default_interface<Windows::Gaming::Input::ForceFeedback::RampForceEffect>{ using type = Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect; };

template <typename D>
struct consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect
{
    Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind Kind() const;
    void SetParameters(Windows::Foundation::Numerics::float3 const& direction, float positiveCoefficient, float negativeCoefficient, float maxPositiveMagnitude, float maxNegativeMagnitude, float deadZone, float bias) const;
};
template <> struct consume<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect> { template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory
{
    Windows::Gaming::Input::ForceFeedback::ConditionForceEffect CreateInstance(Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind const& effectKind) const;
};
template <> struct consume<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory> { template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect
{
    void SetParameters(Windows::Foundation::Numerics::float3 const& vector, Windows::Foundation::TimeSpan const& duration) const;
    void SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& vector, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const;
};
template <> struct consume<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect> { template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect
{
    double Gain() const;
    void Gain(double value) const;
    Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState State() const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect> { template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor
{
    bool AreEffectsPaused() const;
    double MasterGain() const;
    void MasterGain(double value) const;
    bool IsEnabled() const;
    Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes SupportedAxes() const;
    Windows::Foundation::IAsyncOperation<Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> LoadEffectAsync(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const& effect) const;
    void PauseAllEffects() const;
    void ResumeAllEffects() const;
    void StopAllEffects() const;
    Windows::Foundation::IAsyncOperation<bool> TryDisableAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryEnableAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryResetAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryUnloadEffectAsync(Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect const& effect) const;
};
template <> struct consume<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor> { template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect
{
    Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind Kind() const;
    void SetParameters(Windows::Foundation::Numerics::float3 const& vector, float frequency, float phase, float bias, Windows::Foundation::TimeSpan const& duration) const;
    void SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& vector, float frequency, float phase, float bias, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const;
};
template <> struct consume<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect> { template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory
{
    Windows::Gaming::Input::ForceFeedback::PeriodicForceEffect CreateInstance(Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind const& effectKind) const;
};
template <> struct consume<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory> { template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory<D>; };

template <typename D>
struct consume_Windows_Gaming_Input_ForceFeedback_IRampForceEffect
{
    void SetParameters(Windows::Foundation::Numerics::float3 const& startVector, Windows::Foundation::Numerics::float3 const& endVector, Windows::Foundation::TimeSpan const& duration) const;
    void SetParametersWithEnvelope(Windows::Foundation::Numerics::float3 const& startVector, Windows::Foundation::Numerics::float3 const& endVector, float attackGain, float sustainGain, float releaseGain, Windows::Foundation::TimeSpan const& startDelay, Windows::Foundation::TimeSpan const& attackDuration, Windows::Foundation::TimeSpan const& sustainDuration, Windows::Foundation::TimeSpan const& releaseDuration, uint32_t repeatCount) const;
};
template <> struct consume<Windows::Gaming::Input::ForceFeedback::IRampForceEffect> { template <typename D> using type = consume_Windows_Gaming_Input_ForceFeedback_IRampForceEffect<D>; };

template <> struct abi<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind>* value) = 0;
    virtual HRESULT __stdcall SetParameters(abi_t<Windows::Foundation::Numerics::float3> direction, float positiveCoefficient, float negativeCoefficient, float maxPositiveMagnitude, float maxNegativeMagnitude, float deadZone, float bias) = 0;
};};

template <> struct abi<Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind> effectKind, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetParameters(abi_t<Windows::Foundation::Numerics::float3> vector, abi_t<Windows::Foundation::TimeSpan> duration) = 0;
    virtual HRESULT __stdcall SetParametersWithEnvelope(abi_t<Windows::Foundation::Numerics::float3> vector, float attackGain, float sustainGain, float releaseGain, abi_t<Windows::Foundation::TimeSpan> startDelay, abi_t<Windows::Foundation::TimeSpan> attackDuration, abi_t<Windows::Foundation::TimeSpan> sustainDuration, abi_t<Windows::Foundation::TimeSpan> releaseDuration, uint32_t repeatCount) = 0;
};};

template <> struct abi<Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Gain(double* value) = 0;
    virtual HRESULT __stdcall put_Gain(double value) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState>* value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AreEffectsPaused(bool* value) = 0;
    virtual HRESULT __stdcall get_MasterGain(double* value) = 0;
    virtual HRESULT __stdcall put_MasterGain(double value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_SupportedAxes(abi_t<Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes>* value) = 0;
    virtual HRESULT __stdcall LoadEffectAsync(::IUnknown* effect, ::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall PauseAllEffects() = 0;
    virtual HRESULT __stdcall ResumeAllEffects() = 0;
    virtual HRESULT __stdcall StopAllEffects() = 0;
    virtual HRESULT __stdcall TryDisableAsync(::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall TryEnableAsync(::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall TryResetAsync(::IUnknown** asyncOperation) = 0;
    virtual HRESULT __stdcall TryUnloadEffectAsync(::IUnknown* effect, ::IUnknown** asyncOperation) = 0;
};};

template <> struct abi<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind>* value) = 0;
    virtual HRESULT __stdcall SetParameters(abi_t<Windows::Foundation::Numerics::float3> vector, float frequency, float phase, float bias, abi_t<Windows::Foundation::TimeSpan> duration) = 0;
    virtual HRESULT __stdcall SetParametersWithEnvelope(abi_t<Windows::Foundation::Numerics::float3> vector, float frequency, float phase, float bias, float attackGain, float sustainGain, float releaseGain, abi_t<Windows::Foundation::TimeSpan> startDelay, abi_t<Windows::Foundation::TimeSpan> attackDuration, abi_t<Windows::Foundation::TimeSpan> sustainDuration, abi_t<Windows::Foundation::TimeSpan> releaseDuration, uint32_t repeatCount) = 0;
};};

template <> struct abi<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(abi_t<Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind> effectKind, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Gaming::Input::ForceFeedback::IRampForceEffect>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetParameters(abi_t<Windows::Foundation::Numerics::float3> startVector, abi_t<Windows::Foundation::Numerics::float3> endVector, abi_t<Windows::Foundation::TimeSpan> duration) = 0;
    virtual HRESULT __stdcall SetParametersWithEnvelope(abi_t<Windows::Foundation::Numerics::float3> startVector, abi_t<Windows::Foundation::Numerics::float3> endVector, float attackGain, float sustainGain, float releaseGain, abi_t<Windows::Foundation::TimeSpan> startDelay, abi_t<Windows::Foundation::TimeSpan> attackDuration, abi_t<Windows::Foundation::TimeSpan> sustainDuration, abi_t<Windows::Foundation::TimeSpan> releaseDuration, uint32_t repeatCount) = 0;
};};

}
