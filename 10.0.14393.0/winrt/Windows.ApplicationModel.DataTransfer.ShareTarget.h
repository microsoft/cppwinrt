// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.DataTransfer.3.h"
#include "internal/Windows.ApplicationModel.DataTransfer.ShareTarget.3.h"
#include "Windows.ApplicationModel.DataTransfer.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink> : produce_base<D, Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>
{
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().Thumbnail(*reinterpret_cast<const Windows::Storage::Streams::RandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Id(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Id(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedDataFormats(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedDataFormats());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFileTypes(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedFileTypes());
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
    HRESULT __stdcall get_Data(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackageView> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_QuickLinkId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().QuickLinkId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveThisQuickLink() noexcept override
    {
        try
        {
            this->shim().RemoveThisQuickLink();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportStarted() noexcept override
    {
        try
        {
            this->shim().ReportStarted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportDataRetrieved() noexcept override
    {
        try
        {
            this->shim().ReportDataRetrieved();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportSubmittedBackgroundTask() noexcept override
    {
        try
        {
            this->shim().ReportSubmittedBackgroundTask();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedWithQuickLink(abi_arg_in<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink> quicklink) noexcept override
    {
        try
        {
            this->shim().ReportCompleted(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink *>(&quicklink));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompleted() noexcept override
    {
        try
        {
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportError(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ReportError(*reinterpret_cast<const hstring *>(&value));
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
    HRESULT __stdcall abi_DismissUI() noexcept override
    {
        try
        {
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

namespace Windows::ApplicationModel::DataTransfer::ShareTarget {

template <typename D> hstring impl_IQuickLink<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IQuickLink &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IQuickLink<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IQuickLink &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IQuickLink<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value { nullptr };
    check_hresult(static_cast<const IQuickLink &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> void impl_IQuickLink<D>::Thumbnail(const Windows::Storage::Streams::RandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IQuickLink &>(static_cast<const D &>(*this))->put_Thumbnail(get(value)));
}

template <typename D> hstring impl_IQuickLink<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IQuickLink &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> void impl_IQuickLink<D>::Id(hstring_ref value) const
{
    check_hresult(static_cast<const IQuickLink &>(static_cast<const D &>(*this))->put_Id(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IQuickLink<D>::SupportedDataFormats() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IQuickLink &>(static_cast<const D &>(*this))->get_SupportedDataFormats(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IQuickLink<D>::SupportedFileTypes() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IQuickLink &>(static_cast<const D &>(*this))->get_SupportedFileTypes(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView impl_IShareOperation<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value { nullptr };
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> hstring impl_IShareOperation<D>::QuickLinkId() const
{
    hstring value;
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->get_QuickLinkId(put(value)));
    return value;
}

template <typename D> void impl_IShareOperation<D>::RemoveThisQuickLink() const
{
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->abi_RemoveThisQuickLink());
}

template <typename D> void impl_IShareOperation<D>::ReportStarted() const
{
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->abi_ReportStarted());
}

template <typename D> void impl_IShareOperation<D>::ReportDataRetrieved() const
{
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->abi_ReportDataRetrieved());
}

template <typename D> void impl_IShareOperation<D>::ReportSubmittedBackgroundTask() const
{
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->abi_ReportSubmittedBackgroundTask());
}

template <typename D> void impl_IShareOperation<D>::ReportCompleted(const Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink & quicklink) const
{
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->abi_ReportCompletedWithQuickLink(get(quicklink)));
}

template <typename D> void impl_IShareOperation<D>::ReportCompleted() const
{
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->abi_ReportCompleted());
}

template <typename D> void impl_IShareOperation<D>::ReportError(hstring_ref value) const
{
    check_hresult(static_cast<const IShareOperation &>(static_cast<const D &>(*this))->abi_ReportError(get(value)));
}

template <typename D> void impl_IShareOperation2<D>::DismissUI() const
{
    check_hresult(static_cast<const IShareOperation2 &>(static_cast<const D &>(*this))->abi_DismissUI());
}

inline QuickLink::QuickLink() :
    QuickLink(activate_instance<QuickLink>())
{}

}

}
