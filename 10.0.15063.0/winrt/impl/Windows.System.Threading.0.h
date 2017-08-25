// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Threading {

enum class WorkItemOptions : unsigned
{
    None = 0x0,
    TimeSliced = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(WorkItemOptions)

enum class WorkItemPriority
{
    Low = -1,
    Normal = 0,
    High = 1,
};

struct IThreadPoolStatics;
struct IThreadPoolTimer;
struct IThreadPoolTimerStatics;
struct ThreadPool;
struct ThreadPoolTimer;
struct TimerDestroyedHandler;
struct TimerElapsedHandler;
struct WorkItemHandler;

}

namespace winrt::impl {

template <> struct category<Windows::System::Threading::IThreadPoolStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Threading::IThreadPoolTimer>{ using type = interface_category; };
template <> struct category<Windows::System::Threading::IThreadPoolTimerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Threading::ThreadPool>{ using type = class_category; };
template <> struct category<Windows::System::Threading::ThreadPoolTimer>{ using type = class_category; };
template <> struct category<Windows::System::Threading::WorkItemOptions>{ using type = enum_category; };
template <> struct category<Windows::System::Threading::WorkItemPriority>{ using type = enum_category; };
template <> struct category<Windows::System::Threading::TimerDestroyedHandler>{ using type = delegate_category; };
template <> struct category<Windows::System::Threading::TimerElapsedHandler>{ using type = delegate_category; };
template <> struct category<Windows::System::Threading::WorkItemHandler>{ using type = delegate_category; };
template <> struct name<Windows::System::Threading::IThreadPoolStatics>{ static constexpr auto & value{ L"Windows.System.Threading.IThreadPoolStatics" }; };
template <> struct name<Windows::System::Threading::IThreadPoolTimer>{ static constexpr auto & value{ L"Windows.System.Threading.IThreadPoolTimer" }; };
template <> struct name<Windows::System::Threading::IThreadPoolTimerStatics>{ static constexpr auto & value{ L"Windows.System.Threading.IThreadPoolTimerStatics" }; };
template <> struct name<Windows::System::Threading::ThreadPool>{ static constexpr auto & value{ L"Windows.System.Threading.ThreadPool" }; };
template <> struct name<Windows::System::Threading::ThreadPoolTimer>{ static constexpr auto & value{ L"Windows.System.Threading.ThreadPoolTimer" }; };
template <> struct name<Windows::System::Threading::WorkItemOptions>{ static constexpr auto & value{ L"Windows.System.Threading.WorkItemOptions" }; };
template <> struct name<Windows::System::Threading::WorkItemPriority>{ static constexpr auto & value{ L"Windows.System.Threading.WorkItemPriority" }; };
template <> struct name<Windows::System::Threading::TimerDestroyedHandler>{ static constexpr auto & value{ L"Windows.System.Threading.TimerDestroyedHandler" }; };
template <> struct name<Windows::System::Threading::TimerElapsedHandler>{ static constexpr auto & value{ L"Windows.System.Threading.TimerElapsedHandler" }; };
template <> struct name<Windows::System::Threading::WorkItemHandler>{ static constexpr auto & value{ L"Windows.System.Threading.WorkItemHandler" }; };
template <> struct guid<Windows::System::Threading::IThreadPoolStatics>{ static constexpr GUID value{ 0xB6BF67DD,0x84BD,0x44F8,{ 0xAC,0x1C,0x93,0xEB,0xCB,0x9D,0xBA,0x91 } }; };
template <> struct guid<Windows::System::Threading::IThreadPoolTimer>{ static constexpr GUID value{ 0x594EBE78,0x55EA,0x4A88,{ 0xA5,0x0D,0x34,0x02,0xAE,0x1F,0x9C,0xF2 } }; };
template <> struct guid<Windows::System::Threading::IThreadPoolTimerStatics>{ static constexpr GUID value{ 0x1A8A9D02,0xE482,0x461B,{ 0xB8,0xC7,0x8E,0xFA,0xD1,0xCC,0xE5,0x90 } }; };
template <> struct guid<Windows::System::Threading::TimerDestroyedHandler>{ static constexpr GUID value{ 0x34ED19FA,0x8384,0x4EB9,{ 0x82,0x09,0xFB,0x50,0x94,0xEE,0xEC,0x35 } }; };
template <> struct guid<Windows::System::Threading::TimerElapsedHandler>{ static constexpr GUID value{ 0xFAAEA667,0xFBEB,0x49CB,{ 0xAD,0xB2,0x71,0x18,0x4C,0x55,0x6E,0x43 } }; };
template <> struct guid<Windows::System::Threading::WorkItemHandler>{ static constexpr GUID value{ 0x1D1A8B8B,0xFA66,0x414F,{ 0x9C,0xBD,0xB6,0x5F,0xC9,0x9D,0x17,0xFA } }; };
template <> struct default_interface<Windows::System::Threading::ThreadPoolTimer>{ using type = Windows::System::Threading::IThreadPoolTimer; };

template <typename D>
struct consume_Windows_System_Threading_IThreadPoolStatics
{
    Windows::Foundation::IAsyncAction RunAsync(Windows::System::Threading::WorkItemHandler const& handler) const;
    Windows::Foundation::IAsyncAction RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) const;
    Windows::Foundation::IAsyncAction RunAsync(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) const;
};
template <> struct consume<Windows::System::Threading::IThreadPoolStatics> { template <typename D> using type = consume_Windows_System_Threading_IThreadPoolStatics<D>; };

template <typename D>
struct consume_Windows_System_Threading_IThreadPoolTimer
{
    Windows::Foundation::TimeSpan Period() const;
    Windows::Foundation::TimeSpan Delay() const;
    void Cancel() const;
};
template <> struct consume<Windows::System::Threading::IThreadPoolTimer> { template <typename D> using type = consume_Windows_System_Threading_IThreadPoolTimer<D>; };

template <typename D>
struct consume_Windows_System_Threading_IThreadPoolTimerStatics
{
    Windows::System::Threading::ThreadPoolTimer CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period) const;
    Windows::System::Threading::ThreadPoolTimer CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay) const;
    Windows::System::Threading::ThreadPoolTimer CreatePeriodicTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& period, Windows::System::Threading::TimerDestroyedHandler const& destroyed) const;
    Windows::System::Threading::ThreadPoolTimer CreateTimer(Windows::System::Threading::TimerElapsedHandler const& handler, Windows::Foundation::TimeSpan const& delay, Windows::System::Threading::TimerDestroyedHandler const& destroyed) const;
};
template <> struct consume<Windows::System::Threading::IThreadPoolTimerStatics> { template <typename D> using type = consume_Windows_System_Threading_IThreadPoolTimerStatics<D>; };

template <> struct abi<Windows::System::Threading::IThreadPoolStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RunAsync(::IUnknown* handler, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RunWithPriorityAsync(::IUnknown* handler, abi_t<Windows::System::Threading::WorkItemPriority> priority, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RunWithPriorityAndOptionsAsync(::IUnknown* handler, abi_t<Windows::System::Threading::WorkItemPriority> priority, abi_t<Windows::System::Threading::WorkItemOptions> options, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::Threading::IThreadPoolTimer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Period(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Delay(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall Cancel() = 0;
};};

template <> struct abi<Windows::System::Threading::IThreadPoolTimerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreatePeriodicTimer(::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> period, ::IUnknown** timer) = 0;
    virtual HRESULT __stdcall CreateTimer(::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> delay, ::IUnknown** timer) = 0;
    virtual HRESULT __stdcall CreatePeriodicTimerWithCompletion(::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> period, ::IUnknown* destroyed, ::IUnknown** timer) = 0;
    virtual HRESULT __stdcall CreateTimerWithCompletion(::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> delay, ::IUnknown* destroyed, ::IUnknown** timer) = 0;
};};

template <> struct abi<Windows::System::Threading::TimerDestroyedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* timer) = 0;
};};

template <> struct abi<Windows::System::Threading::TimerElapsedHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* timer) = 0;
};};

template <> struct abi<Windows::System::Threading::WorkItemHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* operation) = 0;
};};

}
