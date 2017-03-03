// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Management.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Management {

struct __declspec(uuid("b0fbc327-28c1-4b52-a548-c5807caf70b6")) __declspec(novtable) IMdmAlert : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Data(hstring * value) = 0;
    virtual HRESULT __stdcall put_Data(hstring value) = 0;
    virtual HRESULT __stdcall get_Format(winrt::Windows::Management::MdmAlertDataType * value) = 0;
    virtual HRESULT __stdcall put_Format(winrt::Windows::Management::MdmAlertDataType value) = 0;
    virtual HRESULT __stdcall get_Mark(winrt::Windows::Management::MdmAlertMark * value) = 0;
    virtual HRESULT __stdcall put_Mark(winrt::Windows::Management::MdmAlertMark value) = 0;
    virtual HRESULT __stdcall get_Source(hstring * value) = 0;
    virtual HRESULT __stdcall put_Source(hstring value) = 0;
    virtual HRESULT __stdcall get_Status(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_Target(hstring * value) = 0;
    virtual HRESULT __stdcall put_Target(hstring value) = 0;
    virtual HRESULT __stdcall get_Type(hstring * value) = 0;
    virtual HRESULT __stdcall put_Type(hstring value) = 0;
};

struct __declspec(uuid("fe89314c-8f64-4797-a9d7-9d88f86ae166")) __declspec(novtable) IMdmSession : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Alerts(Windows::Foundation::Collections::IVectorView<Windows::Management::MdmAlert> ** value) = 0;
    virtual HRESULT __stdcall get_ExtendedError(HRESULT * value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_State(winrt::Windows::Management::MdmSessionState * value) = 0;
    virtual HRESULT __stdcall abi_AttachAsync(Windows::Foundation::IAsyncAction ** action) = 0;
    virtual HRESULT __stdcall abi_Delete() = 0;
    virtual HRESULT __stdcall abi_StartAsync(Windows::Foundation::IAsyncAction ** action) = 0;
    virtual HRESULT __stdcall abi_StartWithAlertsAsync(Windows::Foundation::Collections::IIterable<Windows::Management::MdmAlert> * alerts, Windows::Foundation::IAsyncAction ** action) = 0;
};

struct __declspec(uuid("cf4ad959-f745-4b79-9b5c-de0bf8efe44b")) __declspec(novtable) IMdmSessionManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SessionIds(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_TryCreateSession(Windows::Management::IMdmSession ** result) = 0;
    virtual HRESULT __stdcall abi_DeleteSessionById(hstring sessionId) = 0;
    virtual HRESULT __stdcall abi_GetSessionById(hstring sessionId, Windows::Management::IMdmSession ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Management::MdmAlert> { using default_interface = Windows::Management::IMdmAlert; };
template <> struct traits<Windows::Management::MdmSession> { using default_interface = Windows::Management::IMdmSession; };

}

namespace Windows::Management {

template <typename D>
struct WINRT_EBO impl_IMdmAlert
{
    hstring Data() const;
    void Data(hstring_view value) const;
    Windows::Management::MdmAlertDataType Format() const;
    void Format(Windows::Management::MdmAlertDataType value) const;
    Windows::Management::MdmAlertMark Mark() const;
    void Mark(Windows::Management::MdmAlertMark value) const;
    hstring Source() const;
    void Source(hstring_view value) const;
    uint32_t Status() const;
    hstring Target() const;
    void Target(hstring_view value) const;
    hstring Type() const;
    void Type(hstring_view value) const;
};

template <typename D>
struct WINRT_EBO impl_IMdmSession
{
    Windows::Foundation::Collections::IVectorView<Windows::Management::MdmAlert> Alerts() const;
    HRESULT ExtendedError() const;
    hstring Id() const;
    Windows::Management::MdmSessionState State() const;
    Windows::Foundation::IAsyncAction AttachAsync() const;
    void Delete() const;
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StartAsync(iterable<Windows::Management::MdmAlert> alerts) const;
};

template <typename D>
struct WINRT_EBO impl_IMdmSessionManagerStatics
{
    Windows::Foundation::Collections::IVectorView<hstring> SessionIds() const;
    Windows::Management::MdmSession TryCreateSession() const;
    void DeleteSessionById(hstring_view sessionId) const;
    Windows::Management::MdmSession GetSessionById(hstring_view sessionId) const;
};

}

namespace impl {

template <> struct traits<Windows::Management::IMdmAlert>
{
    using abi = ABI::Windows::Management::IMdmAlert;
    template <typename D> using consume = Windows::Management::impl_IMdmAlert<D>;
};

template <> struct traits<Windows::Management::IMdmSession>
{
    using abi = ABI::Windows::Management::IMdmSession;
    template <typename D> using consume = Windows::Management::impl_IMdmSession<D>;
};

template <> struct traits<Windows::Management::IMdmSessionManagerStatics>
{
    using abi = ABI::Windows::Management::IMdmSessionManagerStatics;
    template <typename D> using consume = Windows::Management::impl_IMdmSessionManagerStatics<D>;
};

template <> struct traits<Windows::Management::MdmAlert>
{
    using abi = ABI::Windows::Management::MdmAlert;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Management.MdmAlert"; }
};

template <> struct traits<Windows::Management::MdmSession>
{
    using abi = ABI::Windows::Management::MdmSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Management.MdmSession"; }
};

template <> struct traits<Windows::Management::MdmSessionManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Management.MdmSessionManager"; }
};

}

}
