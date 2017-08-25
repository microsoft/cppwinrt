// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.2.h"
#include "winrt/Windows.ApplicationModel.DataTransfer.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink)->put_Title(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>::Thumbnail(Windows::Storage::Streams::RandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink)->put_Thumbnail(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink)->put_Id(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>::SupportedDataFormats() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink)->get_SupportedDataFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>::SupportedFileTypes() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink)->get_SupportedFileTypes(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->get_Data(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::QuickLinkId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->get_QuickLinkId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::RemoveThisQuickLink() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->RemoveThisQuickLink());
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::ReportStarted() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->ReportStarted());
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::ReportDataRetrieved() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->ReportDataRetrieved());
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::ReportSubmittedBackgroundTask() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->ReportSubmittedBackgroundTask());
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::ReportCompleted(Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink const& quicklink) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->ReportCompletedWithQuickLink(get_abi(quicklink)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->ReportCompleted());
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>::ReportError(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation)->ReportError(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation2<D>::DismissUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2)->DismissUI());
}

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink> : produce_base<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Storage::Streams::RandomAccessStreamReference const*>(&value));
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

    HRESULT __stdcall put_Id(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDataFormats(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedDataFormats());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFileTypes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedFileTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation> : produce_base<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>
{
    HRESULT __stdcall get_Data(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_QuickLinkId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().QuickLinkId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveThisQuickLink() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveThisQuickLink();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportStarted() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportStarted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportDataRetrieved() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportDataRetrieved();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportSubmittedBackgroundTask() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportSubmittedBackgroundTask();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedWithQuickLink(::IUnknown* quicklink) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink const*>(&quicklink));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompleted() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportError(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportError(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2> : produce_base<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>
{
    HRESULT __stdcall DismissUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DismissUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget {

inline QuickLink::QuickLink() :
    QuickLink(activate_instance<QuickLink>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation> {};

}

WINRT_WARNING_POP
