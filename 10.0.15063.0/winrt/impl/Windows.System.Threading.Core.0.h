// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Threading {

enum class WorkItemOptions : unsigned;
enum class WorkItemPriority;
struct WorkItemHandler;

}

WINRT_EXPORT namespace winrt::Windows::System::Threading::Core {

struct IPreallocatedWorkItem;
struct IPreallocatedWorkItemFactory;
struct ISignalNotifier;
struct ISignalNotifierStatics;
struct PreallocatedWorkItem;
struct SignalNotifier;
struct SignalHandler;

}

namespace winrt::impl {

template <> struct category<Windows::System::Threading::Core::IPreallocatedWorkItem>{ using type = interface_category; };
template <> struct category<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>{ using type = interface_category; };
template <> struct category<Windows::System::Threading::Core::ISignalNotifier>{ using type = interface_category; };
template <> struct category<Windows::System::Threading::Core::ISignalNotifierStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Threading::Core::PreallocatedWorkItem>{ using type = class_category; };
template <> struct category<Windows::System::Threading::Core::SignalNotifier>{ using type = class_category; };
template <> struct category<Windows::System::Threading::Core::SignalHandler>{ using type = delegate_category; };
template <> struct name<Windows::System::Threading::Core::IPreallocatedWorkItem>{ static constexpr auto & value{ L"Windows.System.Threading.Core.IPreallocatedWorkItem" }; };
template <> struct name<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>{ static constexpr auto & value{ L"Windows.System.Threading.Core.IPreallocatedWorkItemFactory" }; };
template <> struct name<Windows::System::Threading::Core::ISignalNotifier>{ static constexpr auto & value{ L"Windows.System.Threading.Core.ISignalNotifier" }; };
template <> struct name<Windows::System::Threading::Core::ISignalNotifierStatics>{ static constexpr auto & value{ L"Windows.System.Threading.Core.ISignalNotifierStatics" }; };
template <> struct name<Windows::System::Threading::Core::PreallocatedWorkItem>{ static constexpr auto & value{ L"Windows.System.Threading.Core.PreallocatedWorkItem" }; };
template <> struct name<Windows::System::Threading::Core::SignalNotifier>{ static constexpr auto & value{ L"Windows.System.Threading.Core.SignalNotifier" }; };
template <> struct name<Windows::System::Threading::Core::SignalHandler>{ static constexpr auto & value{ L"Windows.System.Threading.Core.SignalHandler" }; };
template <> struct guid<Windows::System::Threading::Core::IPreallocatedWorkItem>{ static constexpr GUID value{ 0xB6DAA9FC,0xBC5B,0x401A,{ 0xA8,0xB2,0x6E,0x75,0x4D,0x14,0xDA,0xA6 } }; };
template <> struct guid<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>{ static constexpr GUID value{ 0xE3D32B45,0xDFEA,0x469B,{ 0x82,0xC5,0xF6,0xE3,0xCE,0xFD,0xEA,0xFB } }; };
template <> struct guid<Windows::System::Threading::Core::ISignalNotifier>{ static constexpr GUID value{ 0x14285E06,0x63A7,0x4713,{ 0xB6,0xD9,0x62,0xF6,0x4B,0x56,0xFB,0x8B } }; };
template <> struct guid<Windows::System::Threading::Core::ISignalNotifierStatics>{ static constexpr GUID value{ 0x1C4E4566,0x8400,0x46D3,{ 0xA1,0x15,0x7D,0x0C,0x0D,0xFC,0x9F,0x62 } }; };
template <> struct guid<Windows::System::Threading::Core::SignalHandler>{ static constexpr GUID value{ 0x923C402E,0x4721,0x440E,{ 0x9D,0xDA,0x55,0xB6,0xF2,0xE0,0x77,0x10 } }; };
template <> struct default_interface<Windows::System::Threading::Core::PreallocatedWorkItem>{ using type = Windows::System::Threading::Core::IPreallocatedWorkItem; };
template <> struct default_interface<Windows::System::Threading::Core::SignalNotifier>{ using type = Windows::System::Threading::Core::ISignalNotifier; };

template <typename D>
struct consume_Windows_System_Threading_Core_IPreallocatedWorkItem
{
    Windows::Foundation::IAsyncAction RunAsync() const;
};
template <> struct consume<Windows::System::Threading::Core::IPreallocatedWorkItem> { template <typename D> using type = consume_Windows_System_Threading_Core_IPreallocatedWorkItem<D>; };

template <typename D>
struct consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory
{
    Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItem(Windows::System::Threading::WorkItemHandler const& handler) const;
    Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItemWithPriority(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority) const;
    Windows::System::Threading::Core::PreallocatedWorkItem CreateWorkItemWithPriorityAndOptions(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options) const;
};
template <> struct consume<Windows::System::Threading::Core::IPreallocatedWorkItemFactory> { template <typename D> using type = consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>; };

template <typename D>
struct consume_Windows_System_Threading_Core_ISignalNotifier
{
    void Enable() const;
    void Terminate() const;
};
template <> struct consume<Windows::System::Threading::Core::ISignalNotifier> { template <typename D> using type = consume_Windows_System_Threading_Core_ISignalNotifier<D>; };

template <typename D>
struct consume_Windows_System_Threading_Core_ISignalNotifierStatics
{
    Windows::System::Threading::Core::SignalNotifier AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler) const;
    Windows::System::Threading::Core::SignalNotifier AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout) const;
    Windows::System::Threading::Core::SignalNotifier AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler) const;
    Windows::System::Threading::Core::SignalNotifier AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout) const;
};
template <> struct consume<Windows::System::Threading::Core::ISignalNotifierStatics> { template <typename D> using type = consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>; };

template <> struct abi<Windows::System::Threading::Core::IPreallocatedWorkItem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RunAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::Threading::Core::IPreallocatedWorkItemFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWorkItem(::IUnknown* handler, ::IUnknown** workItem) = 0;
    virtual HRESULT __stdcall CreateWorkItemWithPriority(::IUnknown* handler, abi_t<Windows::System::Threading::WorkItemPriority> priority, ::IUnknown** WorkItem) = 0;
    virtual HRESULT __stdcall CreateWorkItemWithPriorityAndOptions(::IUnknown* handler, abi_t<Windows::System::Threading::WorkItemPriority> priority, abi_t<Windows::System::Threading::WorkItemOptions> options, ::IUnknown** WorkItem) = 0;
};};

template <> struct abi<Windows::System::Threading::Core::ISignalNotifier>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Enable() = 0;
    virtual HRESULT __stdcall Terminate() = 0;
};};

template <> struct abi<Windows::System::Threading::Core::ISignalNotifierStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AttachToEvent(HSTRING name, ::IUnknown* handler, ::IUnknown** signalNotifier) = 0;
    virtual HRESULT __stdcall AttachToEventWithTimeout(HSTRING name, ::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> timeout, ::IUnknown** signalNotifier) = 0;
    virtual HRESULT __stdcall AttachToSemaphore(HSTRING name, ::IUnknown* handler, ::IUnknown** signalNotifier) = 0;
    virtual HRESULT __stdcall AttachToSemaphoreWithTimeout(HSTRING name, ::IUnknown* handler, abi_t<Windows::Foundation::TimeSpan> timeout, ::IUnknown** signalNotifier) = 0;
};};

template <> struct abi<Windows::System::Threading::Core::SignalHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* signalNotifier, bool timedOut) = 0;
};};

}
