// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Management.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Management::IMdmAlert> : produce_base<D, Windows::Management::IMdmAlert>
{
    HRESULT __stdcall get_Data(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Data(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Format(Windows::Management::MdmAlertDataType * value) noexcept override
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

    HRESULT __stdcall put_Format(Windows::Management::MdmAlertDataType value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mark(Windows::Management::MdmAlertMark * value) noexcept override
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

    HRESULT __stdcall put_Mark(Windows::Management::MdmAlertMark value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mark(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Source(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(uint32_t * value) noexcept override
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

    HRESULT __stdcall get_Target(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Target(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Target(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Type(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall get_Alerts(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Management::MdmAlert>> value) noexcept override
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

    HRESULT __stdcall get_ExtendedError(HRESULT * value) noexcept override
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

    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_State(Windows::Management::MdmSessionState * value) noexcept override
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

    HRESULT __stdcall abi_AttachAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
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

    HRESULT __stdcall abi_Delete() noexcept override
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

    HRESULT __stdcall abi_StartAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
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

    HRESULT __stdcall abi_StartWithAlertsAsync(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Management::MdmAlert>> alerts, impl::abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().StartAsync(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Management::MdmAlert> *>(&alerts)));
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
    HRESULT __stdcall get_SessionIds(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
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

    HRESULT __stdcall abi_TryCreateSession(impl::abi_arg_out<Windows::Management::IMdmSession> result) noexcept override
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

    HRESULT __stdcall abi_DeleteSessionById(impl::abi_arg_in<hstring> sessionId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteSessionById(*reinterpret_cast<const hstring *>(&sessionId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetSessionById(impl::abi_arg_in<hstring> sessionId, impl::abi_arg_out<Windows::Management::IMdmSession> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSessionById(*reinterpret_cast<const hstring *>(&sessionId)));
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

namespace Windows::Management {

template <typename D> hstring impl_IMdmAlert<D>::Data() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMdmAlert)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void impl_IMdmAlert<D>::Data(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IMdmAlert)->put_Data(get_abi(value)));
}

template <typename D> Windows::Management::MdmAlertDataType impl_IMdmAlert<D>::Format() const
{
    Windows::Management::MdmAlertDataType value {};
    check_hresult(WINRT_SHIM(IMdmAlert)->get_Format(&value));
    return value;
}

template <typename D> void impl_IMdmAlert<D>::Format(Windows::Management::MdmAlertDataType value) const
{
    check_hresult(WINRT_SHIM(IMdmAlert)->put_Format(value));
}

template <typename D> Windows::Management::MdmAlertMark impl_IMdmAlert<D>::Mark() const
{
    Windows::Management::MdmAlertMark value {};
    check_hresult(WINRT_SHIM(IMdmAlert)->get_Mark(&value));
    return value;
}

template <typename D> void impl_IMdmAlert<D>::Mark(Windows::Management::MdmAlertMark value) const
{
    check_hresult(WINRT_SHIM(IMdmAlert)->put_Mark(value));
}

template <typename D> hstring impl_IMdmAlert<D>::Source() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMdmAlert)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void impl_IMdmAlert<D>::Source(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IMdmAlert)->put_Source(get_abi(value)));
}

template <typename D> uint32_t impl_IMdmAlert<D>::Status() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IMdmAlert)->get_Status(&value));
    return value;
}

template <typename D> hstring impl_IMdmAlert<D>::Target() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMdmAlert)->get_Target(put_abi(value)));
    return value;
}

template <typename D> void impl_IMdmAlert<D>::Target(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IMdmAlert)->put_Target(get_abi(value)));
}

template <typename D> hstring impl_IMdmAlert<D>::Type() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMdmAlert)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void impl_IMdmAlert<D>::Type(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IMdmAlert)->put_Type(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Management::MdmAlert> impl_IMdmSession<D>::Alerts() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Management::MdmAlert> value;
    check_hresult(WINRT_SHIM(IMdmSession)->get_Alerts(put_abi(value)));
    return value;
}

template <typename D> HRESULT impl_IMdmSession<D>::ExtendedError() const
{
    HRESULT value {};
    check_hresult(WINRT_SHIM(IMdmSession)->get_ExtendedError(&value));
    return value;
}

template <typename D> hstring impl_IMdmSession<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IMdmSession)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::MdmSessionState impl_IMdmSession<D>::State() const
{
    Windows::Management::MdmSessionState value {};
    check_hresult(WINRT_SHIM(IMdmSession)->get_State(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMdmSession<D>::AttachAsync() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(WINRT_SHIM(IMdmSession)->abi_AttachAsync(put_abi(action)));
    return action;
}

template <typename D> void impl_IMdmSession<D>::Delete() const
{
    check_hresult(WINRT_SHIM(IMdmSession)->abi_Delete());
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMdmSession<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(WINRT_SHIM(IMdmSession)->abi_StartAsync(put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMdmSession<D>::StartAsync(iterable<Windows::Management::MdmAlert> alerts) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(WINRT_SHIM(IMdmSession)->abi_StartWithAlertsAsync(get_abi(alerts), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IMdmSessionManagerStatics<D>::SessionIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(WINRT_SHIM(IMdmSessionManagerStatics)->get_SessionIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::MdmSession impl_IMdmSessionManagerStatics<D>::TryCreateSession() const
{
    Windows::Management::MdmSession result { nullptr };
    check_hresult(WINRT_SHIM(IMdmSessionManagerStatics)->abi_TryCreateSession(put_abi(result)));
    return result;
}

template <typename D> void impl_IMdmSessionManagerStatics<D>::DeleteSessionById(hstring_view sessionId) const
{
    check_hresult(WINRT_SHIM(IMdmSessionManagerStatics)->abi_DeleteSessionById(get_abi(sessionId)));
}

template <typename D> Windows::Management::MdmSession impl_IMdmSessionManagerStatics<D>::GetSessionById(hstring_view sessionId) const
{
    Windows::Management::MdmSession result { nullptr };
    check_hresult(WINRT_SHIM(IMdmSessionManagerStatics)->abi_GetSessionById(get_abi(sessionId), put_abi(result)));
    return result;
}

inline MdmAlert::MdmAlert() :
    MdmAlert(activate_instance<MdmAlert>())
{}

inline Windows::Foundation::Collections::IVectorView<hstring> MdmSessionManager::SessionIds()
{
    return get_activation_factory<MdmSessionManager, IMdmSessionManagerStatics>().SessionIds();
}

inline Windows::Management::MdmSession MdmSessionManager::TryCreateSession()
{
    return get_activation_factory<MdmSessionManager, IMdmSessionManagerStatics>().TryCreateSession();
}

inline void MdmSessionManager::DeleteSessionById(hstring_view sessionId)
{
    get_activation_factory<MdmSessionManager, IMdmSessionManagerStatics>().DeleteSessionById(sessionId);
}

inline Windows::Management::MdmSession MdmSessionManager::GetSessionById(hstring_view sessionId)
{
    return get_activation_factory<MdmSessionManager, IMdmSessionManagerStatics>().GetSessionById(sessionId);
}

}

}

template<>
struct std::hash<winrt::Windows::Management::IMdmAlert>
{
    size_t operator()(const winrt::Windows::Management::IMdmAlert & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::IMdmSession>
{
    size_t operator()(const winrt::Windows::Management::IMdmSession & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::IMdmSessionManagerStatics>
{
    size_t operator()(const winrt::Windows::Management::IMdmSessionManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::MdmAlert>
{
    size_t operator()(const winrt::Windows::Management::MdmAlert & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::MdmSession>
{
    size_t operator()(const winrt::Windows::Management::MdmSession & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
