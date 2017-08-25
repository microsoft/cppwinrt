// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Management.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Management_IMdmAlert<D>::Data() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Management_IMdmAlert<D>::Data(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->put_Data(get_abi(value)));
}

template <typename D> Windows::Management::MdmAlertDataType consume_Windows_Management_IMdmAlert<D>::Format() const
{
    Windows::Management::MdmAlertDataType value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->get_Format(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Management_IMdmAlert<D>::Format(Windows::Management::MdmAlertDataType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->put_Format(get_abi(value)));
}

template <typename D> Windows::Management::MdmAlertMark consume_Windows_Management_IMdmAlert<D>::Mark() const
{
    Windows::Management::MdmAlertMark value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->get_Mark(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Management_IMdmAlert<D>::Mark(Windows::Management::MdmAlertMark const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->put_Mark(get_abi(value)));
}

template <typename D> hstring consume_Windows_Management_IMdmAlert<D>::Source() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Management_IMdmAlert<D>::Source(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->put_Source(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Management_IMdmAlert<D>::Status() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->get_Status(&value));
    return value;
}

template <typename D> hstring consume_Windows_Management_IMdmAlert<D>::Target() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->get_Target(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Management_IMdmAlert<D>::Target(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->put_Target(get_abi(value)));
}

template <typename D> hstring consume_Windows_Management_IMdmAlert<D>::Type() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Management_IMdmAlert<D>::Type(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Management::IMdmAlert)->put_Type(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Management::MdmAlert> consume_Windows_Management_IMdmSession<D>::Alerts() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Management::MdmAlert> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSession)->get_Alerts(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Management_IMdmSession<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSession)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Management_IMdmSession<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSession)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::MdmSessionState consume_Windows_Management_IMdmSession<D>::State() const
{
    Windows::Management::MdmSessionState value{};
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSession)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Management_IMdmSession<D>::AttachAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSession)->AttachAsync(put_abi(action)));
    return action;
}

template <typename D> void consume_Windows_Management_IMdmSession<D>::Delete() const
{
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSession)->Delete());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Management_IMdmSession<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSession)->StartAsync(put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Management_IMdmSession<D>::StartAsync(param::async_iterable<Windows::Management::MdmAlert> const& alerts) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSession)->StartWithAlertsAsync(get_abi(alerts), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Management_IMdmSessionManagerStatics<D>::SessionIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSessionManagerStatics)->get_SessionIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::MdmSession consume_Windows_Management_IMdmSessionManagerStatics<D>::TryCreateSession() const
{
    Windows::Management::MdmSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSessionManagerStatics)->TryCreateSession(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Management_IMdmSessionManagerStatics<D>::DeleteSessionById(param::hstring const& sessionId) const
{
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSessionManagerStatics)->DeleteSessionById(get_abi(sessionId)));
}

template <typename D> Windows::Management::MdmSession consume_Windows_Management_IMdmSessionManagerStatics<D>::GetSessionById(param::hstring const& sessionId) const
{
    Windows::Management::MdmSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::IMdmSessionManagerStatics)->GetSessionById(get_abi(sessionId), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Management::IMdmAlert> : produce_base<D, Windows::Management::IMdmAlert>
{
    HRESULT __stdcall get_Data(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Data(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Format(abi_t<Windows::Management::MdmAlertDataType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Format(abi_t<Windows::Management::MdmAlertDataType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(*reinterpret_cast<Windows::Management::MdmAlertDataType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mark(abi_t<Windows::Management::MdmAlertMark>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mark());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Mark(abi_t<Windows::Management::MdmAlertMark> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mark(*reinterpret_cast<Windows::Management::MdmAlertMark const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Source(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Target(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Target(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Target(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Type(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::IMdmSession> : produce_base<D, Windows::Management::IMdmSession>
{
    HRESULT __stdcall get_Alerts(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Alerts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(abi_t<HRESULT>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_State(abi_t<Windows::Management::MdmSessionState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AttachAsync(::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().AttachAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Delete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartWithAlertsAsync(::IUnknown* alerts, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().StartAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Management::MdmAlert> const*>(&alerts)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::IMdmSessionManagerStatics> : produce_base<D, Windows::Management::IMdmSessionManagerStatics>
{
    HRESULT __stdcall get_SessionIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCreateSession(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryCreateSession());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteSessionById(HSTRING sessionId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteSessionById(*reinterpret_cast<hstring const*>(&sessionId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSessionById(HSTRING sessionId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSessionById(*reinterpret_cast<hstring const*>(&sessionId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Management {

inline MdmAlert::MdmAlert() :
    MdmAlert(activate_instance<MdmAlert>())
{}

inline Windows::Foundation::Collections::IVectorView<hstring> MdmSessionManager::SessionIds()
{
    return get_activation_factory<MdmSessionManager, Windows::Management::IMdmSessionManagerStatics>().SessionIds();
}

inline Windows::Management::MdmSession MdmSessionManager::TryCreateSession()
{
    return get_activation_factory<MdmSessionManager, Windows::Management::IMdmSessionManagerStatics>().TryCreateSession();
}

inline void MdmSessionManager::DeleteSessionById(param::hstring const& sessionId)
{
    get_activation_factory<MdmSessionManager, Windows::Management::IMdmSessionManagerStatics>().DeleteSessionById(sessionId);
}

inline Windows::Management::MdmSession MdmSessionManager::GetSessionById(param::hstring const& sessionId)
{
    return get_activation_factory<MdmSessionManager, Windows::Management::IMdmSessionManagerStatics>().GetSessionById(sessionId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::IMdmAlert> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::IMdmAlert> {};

template<> struct hash<winrt::Windows::Management::IMdmSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::IMdmSession> {};

template<> struct hash<winrt::Windows::Management::IMdmSessionManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::IMdmSessionManagerStatics> {};

template<> struct hash<winrt::Windows::Management::MdmAlert> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::MdmAlert> {};

template<> struct hash<winrt::Windows::Management::MdmSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::MdmSession> {};

template<> struct hash<winrt::Windows::Management::MdmSessionManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::MdmSessionManager> {};

}

WINRT_WARNING_POP
