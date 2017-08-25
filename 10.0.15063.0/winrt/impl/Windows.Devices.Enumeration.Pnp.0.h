// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

enum class DeviceWatcherStatus;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration::Pnp {

enum class PnpObjectType
{
    Unknown = 0,
    DeviceInterface = 1,
    DeviceContainer = 2,
    Device = 3,
    DeviceInterfaceClass = 4,
    AssociationEndpoint = 5,
    AssociationEndpointContainer = 6,
    AssociationEndpointService = 7,
};

struct IPnpObject;
struct IPnpObjectStatics;
struct IPnpObjectUpdate;
struct IPnpObjectWatcher;
struct PnpObject;
struct PnpObjectCollection;
struct PnpObjectUpdate;
struct PnpObjectWatcher;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Enumeration::Pnp::IPnpObject>{ using type = interface_category; };
template <> struct category<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>{ using type = interface_category; };
template <> struct category<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>{ using type = interface_category; };
template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObject>{ using type = class_category; };
template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>{ using type = class_category; };
template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>{ using type = class_category; };
template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>{ using type = class_category; };
template <> struct category<Windows::Devices::Enumeration::Pnp::PnpObjectType>{ using type = enum_category; };
template <> struct name<Windows::Devices::Enumeration::Pnp::IPnpObject>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.IPnpObject" }; };
template <> struct name<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.IPnpObjectStatics" }; };
template <> struct name<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate" }; };
template <> struct name<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher" }; };
template <> struct name<Windows::Devices::Enumeration::Pnp::PnpObject>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.PnpObject" }; };
template <> struct name<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.PnpObjectCollection" }; };
template <> struct name<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.PnpObjectUpdate" }; };
template <> struct name<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.PnpObjectWatcher" }; };
template <> struct name<Windows::Devices::Enumeration::Pnp::PnpObjectType>{ static constexpr auto & value{ L"Windows.Devices.Enumeration.Pnp.PnpObjectType" }; };
template <> struct guid<Windows::Devices::Enumeration::Pnp::IPnpObject>{ static constexpr GUID value{ 0x95C66258,0x733B,0x4A8F,{ 0x93,0xA3,0xDB,0x07,0x8A,0xC8,0x70,0xC1 } }; };
template <> struct guid<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>{ static constexpr GUID value{ 0xB3C32A3D,0xD168,0x4660,{ 0xBB,0xF3,0xA7,0x33,0xB1,0x4B,0x6E,0x01 } }; };
template <> struct guid<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>{ static constexpr GUID value{ 0x6F59E812,0x001E,0x4844,{ 0xBC,0xC6,0x43,0x28,0x86,0x85,0x6A,0x17 } }; };
template <> struct guid<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>{ static constexpr GUID value{ 0x83C95CA8,0x4772,0x4A7A,{ 0xAC,0xA8,0xE4,0x8C,0x42,0xA8,0x9C,0x44 } }; };
template <> struct default_interface<Windows::Devices::Enumeration::Pnp::PnpObject>{ using type = Windows::Devices::Enumeration::Pnp::IPnpObject; };
template <> struct default_interface<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::Pnp::PnpObject>; };
template <> struct default_interface<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate>{ using type = Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate; };
template <> struct default_interface<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>{ using type = Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher; };

template <typename D>
struct consume_Windows_Devices_Enumeration_Pnp_IPnpObject
{
    Windows::Devices::Enumeration::Pnp::PnpObjectType Type() const;
    hstring Id() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
    void Update(Windows::Devices::Enumeration::Pnp::PnpObjectUpdate const& updateInfo) const;
};
template <> struct consume<Windows::Devices::Enumeration::Pnp::IPnpObject> { template <typename D> using type = consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>; };

template <typename D>
struct consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::hstring const& id, param::async_iterable<hstring> const& requestedProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter) const;
    Windows::Devices::Enumeration::Pnp::PnpObjectWatcher CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties) const;
    Windows::Devices::Enumeration::Pnp::PnpObjectWatcher CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter) const;
};
template <> struct consume<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> { template <typename D> using type = consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate
{
    Windows::Devices::Enumeration::Pnp::PnpObjectType Type() const;
    hstring Id() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
};
template <> struct consume<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> { template <typename D> using type = consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate<D>; };

template <typename D>
struct consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher
{
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const& handler) const;
    using Added_revoker = event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const& handler) const;
    void Added(event_token const& token) const;
    event_token Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const;
    using Updated_revoker = event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>;
    Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const;
    void Updated(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const;
    using Removed_revoker = event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const;
    void Removed(event_token const& token) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& token) const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void Stopped(event_token const& token) const;
    Windows::Devices::Enumeration::DeviceWatcherStatus Status() const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> { template <typename D> using type = consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>; };

template <> struct abi<Windows::Devices::Enumeration::Pnp::IPnpObject>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType>* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Update(::IUnknown* updateInfo) = 0;
};};

template <> struct abi<Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromIdAsync(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, HSTRING id, ::IUnknown* requestedProperties, ::IUnknown** asyncOp) = 0;
    virtual HRESULT __stdcall FindAllAsync(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, ::IUnknown* requestedProperties, ::IUnknown** asyncOp) = 0;
    virtual HRESULT __stdcall FindAllAsyncAqsFilter(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, ::IUnknown* requestedProperties, HSTRING aqsFilter, ::IUnknown** asyncOp) = 0;
    virtual HRESULT __stdcall CreateWatcher(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, ::IUnknown* requestedProperties, ::IUnknown** watcher) = 0;
    virtual HRESULT __stdcall CreateWatcherAqsFilter(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType> type, ::IUnknown* requestedProperties, HSTRING aqsFilter, ::IUnknown** watcher) = 0;
};};

template <> struct abi<Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Devices::Enumeration::Pnp::PnpObjectType>* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Added(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Updated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Removed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* status) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

}
