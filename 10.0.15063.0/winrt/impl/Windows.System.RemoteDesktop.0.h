// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop {

struct IInteractiveSessionStatics;
struct InteractiveSession;

}

namespace winrt::impl {

template <> struct category<Windows::System::RemoteDesktop::IInteractiveSessionStatics>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteDesktop::InteractiveSession>{ using type = class_category; };
template <> struct name<Windows::System::RemoteDesktop::IInteractiveSessionStatics>{ static constexpr auto & value{ L"Windows.System.RemoteDesktop.IInteractiveSessionStatics" }; };
template <> struct name<Windows::System::RemoteDesktop::InteractiveSession>{ static constexpr auto & value{ L"Windows.System.RemoteDesktop.InteractiveSession" }; };
template <> struct guid<Windows::System::RemoteDesktop::IInteractiveSessionStatics>{ static constexpr GUID value{ 0x60884631,0xDD3A,0x4576,{ 0x9C,0x8D,0xE8,0x02,0x76,0x18,0xBD,0xCE } }; };

template <typename D>
struct consume_Windows_System_RemoteDesktop_IInteractiveSessionStatics
{
    bool IsRemote() const;
};
template <> struct consume<Windows::System::RemoteDesktop::IInteractiveSessionStatics> { template <typename D> using type = consume_Windows_System_RemoteDesktop_IInteractiveSessionStatics<D>; };

template <> struct abi<Windows::System::RemoteDesktop::IInteractiveSessionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsRemote(bool* value) = 0;
};};

}
