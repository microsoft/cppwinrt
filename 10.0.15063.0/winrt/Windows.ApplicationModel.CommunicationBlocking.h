// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.CommunicationBlocking.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::IsBlockingActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->get_IsBlockingActive(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::IsBlockedNumberAsync(param::hstring const& number) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->IsBlockedNumberAsync(get_abi(number), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::ShowBlockNumbersUI(param::iterable<hstring> const& phoneNumbers) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->ShowBlockNumbersUI(get_abi(phoneNumbers), &value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::ShowUnblockNumbersUI(param::iterable<hstring> const& phoneNumbers) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->ShowUnblockNumbersUI(get_abi(phoneNumbers), &value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::ShowBlockedCallsUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->ShowBlockedCallsUI());
}

template <typename D> void consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAccessManagerStatics<D>::ShowBlockedMessagesUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics)->ShowBlockedMessagesUI());
}

template <typename D> bool consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics<D>::IsCurrentAppActiveBlockingApp() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics)->get_IsCurrentAppActiveBlockingApp(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics<D>::ShowCommunicationBlockingSettingsUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics)->ShowCommunicationBlockingSettingsUI());
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_CommunicationBlocking_ICommunicationBlockingAppManagerStatics2<D>::RequestSetAsActiveBlockingAppAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2)->RequestSetAsActiveBlockingAppAsync(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics> : produce_base<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>
{
    HRESULT __stdcall get_IsBlockingActive(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsBlockingActive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsBlockedNumberAsync(HSTRING number, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsBlockedNumberAsync(*reinterpret_cast<hstring const*>(&number)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowBlockNumbersUI(::IUnknown* phoneNumbers, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowBlockNumbersUI(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&phoneNumbers)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowUnblockNumbersUI(::IUnknown* phoneNumbers, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowUnblockNumbersUI(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&phoneNumbers)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowBlockedCallsUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowBlockedCallsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowBlockedMessagesUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowBlockedMessagesUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics> : produce_base<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>
{
    HRESULT __stdcall get_IsCurrentAppActiveBlockingApp(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsCurrentAppActiveBlockingApp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowCommunicationBlockingSettingsUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowCommunicationBlockingSettingsUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2> : produce_base<D, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>
{
    HRESULT __stdcall RequestSetAsActiveBlockingAppAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestSetAsActiveBlockingAppAsync());
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

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::CommunicationBlocking {

inline bool CommunicationBlockingAccessManager::IsBlockingActive()
{
    return get_activation_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>().IsBlockingActive();
}

inline Windows::Foundation::IAsyncOperation<bool> CommunicationBlockingAccessManager::IsBlockedNumberAsync(param::hstring const& number)
{
    return get_activation_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>().IsBlockedNumberAsync(number);
}

inline bool CommunicationBlockingAccessManager::ShowBlockNumbersUI(param::iterable<hstring> const& phoneNumbers)
{
    return get_activation_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>().ShowBlockNumbersUI(phoneNumbers);
}

inline bool CommunicationBlockingAccessManager::ShowUnblockNumbersUI(param::iterable<hstring> const& phoneNumbers)
{
    return get_activation_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>().ShowUnblockNumbersUI(phoneNumbers);
}

inline void CommunicationBlockingAccessManager::ShowBlockedCallsUI()
{
    get_activation_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>().ShowBlockedCallsUI();
}

inline void CommunicationBlockingAccessManager::ShowBlockedMessagesUI()
{
    get_activation_factory<CommunicationBlockingAccessManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics>().ShowBlockedMessagesUI();
}

inline bool CommunicationBlockingAppManager::IsCurrentAppActiveBlockingApp()
{
    return get_activation_factory<CommunicationBlockingAppManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>().IsCurrentAppActiveBlockingApp();
}

inline void CommunicationBlockingAppManager::ShowCommunicationBlockingSettingsUI()
{
    get_activation_factory<CommunicationBlockingAppManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics>().ShowCommunicationBlockingSettingsUI();
}

inline Windows::Foundation::IAsyncOperation<bool> CommunicationBlockingAppManager::RequestSetAsActiveBlockingAppAsync()
{
    return get_activation_factory<CommunicationBlockingAppManager, Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2>().RequestSetAsActiveBlockingAppAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAccessManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::CommunicationBlocking::ICommunicationBlockingAppManagerStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAccessManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::CommunicationBlocking::CommunicationBlockingAppManager> {};

}

WINRT_WARNING_POP
