// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.UI.3.h"
#include "internal/Windows.Security.EnterpriseData.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.ApplicationModel.DataTransfer.3.h"
#include "Windows.ApplicationModel.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::DataTransfer {

template <typename L> DataProviderHandler::DataProviderHandler(L lambda) :
    DataProviderHandler(impl::make_delegate<impl_DataProviderHandler<L>, DataProviderHandler>(std::forward<L>(lambda)))
{}

template <typename F> DataProviderHandler::DataProviderHandler(F * function) :
    DataProviderHandler([=](auto && ... args) { function(args ...); })
{}

template <typename O, typename M> DataProviderHandler::DataProviderHandler(O * object, M method) :
    DataProviderHandler([=](auto && ... args) { ((*object).*(method))(args ...); })
{}

inline void DataProviderHandler::operator()(const Windows::ApplicationModel::DataTransfer::DataProviderRequest & request) const
{
    check_hresult((*this)->abi_Invoke(get(request)));
}

}

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IClipboardStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IClipboardStatics>
{
    HRESULT __stdcall abi_GetContent(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackageView> content) noexcept override
    {
        try
        {
            *content = detach(this->shim().GetContent());
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetContent(abi_arg_in<Windows::ApplicationModel::DataTransfer::IDataPackage> content) noexcept override
    {
        try
        {
            this->shim().SetContent(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DataPackage *>(&content));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Flush() noexcept override
    {
        try
        {
            this->shim().Flush();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Clear() noexcept override
    {
        try
        {
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContentChanged(abi_arg_in<Windows::Foundation::EventHandler<Windows::IInspectable>> changeHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ContentChanged(*reinterpret_cast<const Windows::Foundation::EventHandler<Windows::IInspectable> *>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContentChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ContentChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackage> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackage>
{
    HRESULT __stdcall abi_GetView(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackageView> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedOperation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept override
    {
        try
        {
            this->shim().RequestedOperation(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OperationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>> handler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().OperationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OperationCompleted(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().OperationCompleted(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Destroyed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::IInspectable>> handler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().Destroyed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Destroyed(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().Destroyed(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetData(abi_arg_in<hstring> formatId, abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SetData(*reinterpret_cast<const hstring *>(&formatId), *reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetDataProvider(abi_arg_in<hstring> formatId, abi_arg_in<Windows::ApplicationModel::DataTransfer::DataProviderHandler> delayRenderer) noexcept override
    {
        try
        {
            this->shim().SetDataProvider(*reinterpret_cast<const hstring *>(&formatId), *reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DataProviderHandler *>(&delayRenderer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().SetUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetHtmlFormat(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetHtmlFormat(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceMap(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceMap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetRtf(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().SetRtf(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetBitmap(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().SetBitmap(*reinterpret_cast<const Windows::Storage::Streams::RandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetStorageItemsReadOnly(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem>> value) noexcept override
    {
        try
        {
            this->shim().SetStorageItems(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetStorageItems(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem>> value, bool readOnly) noexcept override
    {
        try
        {
            this->shim().SetStorageItems(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> *>(&value), readOnly);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackage2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackage2>
{
    HRESULT __stdcall abi_SetApplicationLink(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().SetApplicationLink(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetWebLink(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().SetWebLink(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>
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

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Description(*reinterpret_cast<const hstring *>(&value));
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
            this->shim().Thumbnail(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypes(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApplicationName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ApplicationName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationListingUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApplicationListingUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationListingUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().ApplicationListingUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>
{
    HRESULT __stdcall get_ContentSourceWebLink(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentSourceWebLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentSourceWebLink(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().ContentSourceWebLink(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceApplicationLink(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentSourceApplicationLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentSourceApplicationLink(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().ContentSourceApplicationLink(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PackageFamilyName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().PackageFamilyName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Square30x30Logo(abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            this->shim().Square30x30Logo(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogoBackgroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LogoBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LogoBackgroundColor(abi_arg_in<Windows::UI::Color> value) noexcept override
    {
        try
        {
            this->shim().LogoBackgroundColor(*reinterpret_cast<const Windows::UI::Color *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>
{
    HRESULT __stdcall get_EnterpriseId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnterpriseId(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().EnterpriseId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>
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

    HRESULT __stdcall get_Description(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_FileTypes(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApplicationName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationListingUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApplicationListingUri());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>
{
    HRESULT __stdcall get_PackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceWebLink(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentSourceWebLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceApplicationLink(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentSourceApplicationLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogoBackgroundColor(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LogoBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>
{
    HRESULT __stdcall get_EnterpriseId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnterpriseId());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackageView> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackageView>
{
    HRESULT __stdcall get_Properties(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedOperation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportOperationCompleted(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept override
    {
        try
        {
            this->shim().ReportOperationCompleted(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableFormats(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> formatIds) noexcept override
    {
        try
        {
            *formatIds = detach(this->shim().AvailableFormats());
            return S_OK;
        }
        catch (...)
        {
            *formatIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Contains(abi_arg_in<hstring> formatId, bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Contains(*reinterpret_cast<const hstring *>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDataAsync(abi_arg_in<hstring> formatId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::IInspectable>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetDataAsync(*reinterpret_cast<const hstring *>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTextAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetTextAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCustomTextAsync(abi_arg_in<hstring> formatId, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetTextAsync(*reinterpret_cast<const hstring *>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetUriAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetUriAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetHtmlFormatAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetHtmlFormatAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetResourceMapAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetResourceMapAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetRtfAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetRtfAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetBitmapAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetBitmapAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetStorageItemsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetStorageItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackageView2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackageView2>
{
    HRESULT __stdcall abi_GetApplicationLinkAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetApplicationLinkAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetWebLinkAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().GetWebLinkAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackageView3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackageView3>
{
    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessWithEnterpriseIdAsync(abi_arg_in<hstring> enterpriseId, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RequestAccessAsync(*reinterpret_cast<const hstring *>(&enterpriseId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnlockAndAssumeEnterpriseIdentity(Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnlockAndAssumeEnterpriseIdentity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackageView4> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackageView4>
{
    HRESULT __stdcall abi_SetAcceptedFormatId(abi_arg_in<hstring> formatId) noexcept override
    {
        try
        {
            this->shim().SetAcceptedFormatId(*reinterpret_cast<const hstring *>(&formatId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataProviderDeferral> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataProviderRequest> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataProviderRequest>
{
    HRESULT __stdcall get_FormatId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FormatId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetData(abi_arg_in<Windows::IInspectable> value) noexcept override
    {
        try
        {
            this->shim().SetData(*reinterpret_cast<const Windows::IInspectable *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataRequest> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataRequest>
{
    HRESULT __stdcall get_Data(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataPackage> value) noexcept override
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

    HRESULT __stdcall put_Data(abi_arg_in<Windows::ApplicationModel::DataTransfer::IDataPackage> value) noexcept override
    {
        try
        {
            this->shim().Data(*reinterpret_cast<const Windows::ApplicationModel::DataTransfer::DataPackage *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FailWithDisplayText(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().FailWithDisplayText(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataRequestDeferral> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager>
{
    HRESULT __stdcall add_DataRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().DataRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataRequested(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().DataRequested(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TargetApplicationChosen(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>> eventHandler, event_token * eventCookie) noexcept override
    {
        try
        {
            *eventCookie = detach(this->shim().TargetApplicationChosen(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> *>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetApplicationChosen(event_token eventCookie) noexcept override
    {
        try
        {
            this->shim().TargetApplicationChosen(eventCookie);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>
{
    HRESULT __stdcall abi_ShowShareUI() noexcept override
    {
        try
        {
            this->shim().ShowShareUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForCurrentView(abi_arg_out<Windows::ApplicationModel::DataTransfer::IDataTransferManager> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetForCurrentView());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>
{
    HRESULT __stdcall abi_IsSupported(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>
{
    HRESULT __stdcall abi_GetStaticFragment(abi_arg_in<hstring> htmlFormat, abi_arg_out<hstring> htmlFragment) noexcept override
    {
        try
        {
            *htmlFragment = detach(this->shim().GetStaticFragment(*reinterpret_cast<const hstring *>(&htmlFormat)));
            return S_OK;
        }
        catch (...)
        {
            *htmlFragment = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateHtmlFormat(abi_arg_in<hstring> htmlFragment, abi_arg_out<hstring> htmlFormat) noexcept override
    {
        try
        {
            *htmlFormat = detach(this->shim().CreateHtmlFormat(*reinterpret_cast<const hstring *>(&htmlFragment)));
            return S_OK;
        }
        catch (...)
        {
            *htmlFormat = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>
{
    HRESULT __stdcall get_Operation(Windows::ApplicationModel::DataTransfer::DataPackageOperation * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Operation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>
{
    HRESULT __stdcall get_AcceptedFormatId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcceptedFormatId());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>
{
    HRESULT __stdcall abi_AddFile(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<hstring> outToken) noexcept override
    {
        try
        {
            *outToken = detach(this->shim().AddFile(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *outToken = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RedeemTokenForFileAsync(abi_arg_in<hstring> token, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().RedeemTokenForFileAsync(*reinterpret_cast<const hstring *>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveFile(abi_arg_in<hstring> token) noexcept override
    {
        try
        {
            this->shim().RemoveFile(*reinterpret_cast<const hstring *>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>
{
    HRESULT __stdcall get_Text(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Html(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Html());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rtf(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rtf());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitmap(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bitmap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorageItems(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StorageItems());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>
{
    HRESULT __stdcall get_WebLink(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WebLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationLink(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApplicationLink());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>
{
    HRESULT __stdcall get_ApplicationName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ApplicationName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::DataTransfer {

template <typename D> hstring impl_IStandardDataFormatsStatics<D>::Text() const
{
    hstring value;
    check_hresult(static_cast<const IStandardDataFormatsStatics &>(static_cast<const D &>(*this))->get_Text(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardDataFormatsStatics<D>::Uri() const
{
    hstring value;
    check_hresult(static_cast<const IStandardDataFormatsStatics &>(static_cast<const D &>(*this))->get_Uri(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardDataFormatsStatics<D>::Html() const
{
    hstring value;
    check_hresult(static_cast<const IStandardDataFormatsStatics &>(static_cast<const D &>(*this))->get_Html(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardDataFormatsStatics<D>::Rtf() const
{
    hstring value;
    check_hresult(static_cast<const IStandardDataFormatsStatics &>(static_cast<const D &>(*this))->get_Rtf(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardDataFormatsStatics<D>::Bitmap() const
{
    hstring value;
    check_hresult(static_cast<const IStandardDataFormatsStatics &>(static_cast<const D &>(*this))->get_Bitmap(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardDataFormatsStatics<D>::StorageItems() const
{
    hstring value;
    check_hresult(static_cast<const IStandardDataFormatsStatics &>(static_cast<const D &>(*this))->get_StorageItems(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardDataFormatsStatics2<D>::WebLink() const
{
    hstring value;
    check_hresult(static_cast<const IStandardDataFormatsStatics2 &>(static_cast<const D &>(*this))->get_WebLink(put(value)));
    return value;
}

template <typename D> hstring impl_IStandardDataFormatsStatics2<D>::ApplicationLink() const
{
    hstring value;
    check_hresult(static_cast<const IStandardDataFormatsStatics2 &>(static_cast<const D &>(*this))->get_ApplicationLink(put(value)));
    return value;
}

template <typename D> hstring impl_IDataPackagePropertySetView<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySetView &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> hstring impl_IDataPackagePropertySetView<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySetView &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference impl_IDataPackagePropertySetView<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value { nullptr };
    check_hresult(static_cast<const IDataPackagePropertySetView &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IDataPackagePropertySetView<D>::FileTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IDataPackagePropertySetView &>(static_cast<const D &>(*this))->get_FileTypes(put(value)));
    return value;
}

template <typename D> hstring impl_IDataPackagePropertySetView<D>::ApplicationName() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySetView &>(static_cast<const D &>(*this))->get_ApplicationName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IDataPackagePropertySetView<D>::ApplicationListingUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IDataPackagePropertySetView &>(static_cast<const D &>(*this))->get_ApplicationListingUri(put(value)));
    return value;
}

template <typename D> hstring impl_IDataPackagePropertySetView2<D>::PackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySetView2 &>(static_cast<const D &>(*this))->get_PackageFamilyName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IDataPackagePropertySetView2<D>::ContentSourceWebLink() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IDataPackagePropertySetView2 &>(static_cast<const D &>(*this))->get_ContentSourceWebLink(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IDataPackagePropertySetView2<D>::ContentSourceApplicationLink() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IDataPackagePropertySetView2 &>(static_cast<const D &>(*this))->get_ContentSourceApplicationLink(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IDataPackagePropertySetView2<D>::Square30x30Logo() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IDataPackagePropertySetView2 &>(static_cast<const D &>(*this))->get_Square30x30Logo(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IDataPackagePropertySetView2<D>::LogoBackgroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IDataPackagePropertySetView2 &>(static_cast<const D &>(*this))->get_LogoBackgroundColor(put(value)));
    return value;
}

template <typename D> hstring impl_IDataPackagePropertySetView3<D>::EnterpriseId() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySetView3 &>(static_cast<const D &>(*this))->get_EnterpriseId(put(value)));
    return value;
}

template <typename D> hstring impl_IDataPackagePropertySet<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> hstring impl_IDataPackagePropertySet<D>::Description() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->get_Description(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet<D>::Description(hstring_ref value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->put_Description(get(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IDataPackagePropertySet<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->get_Thumbnail(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet<D>::Thumbnail(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->put_Thumbnail(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IDataPackagePropertySet<D>::FileTypes() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->get_FileTypes(put(value)));
    return value;
}

template <typename D> hstring impl_IDataPackagePropertySet<D>::ApplicationName() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->get_ApplicationName(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet<D>::ApplicationName(hstring_ref value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->put_ApplicationName(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IDataPackagePropertySet<D>::ApplicationListingUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->get_ApplicationListingUri(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet<D>::ApplicationListingUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet &>(static_cast<const D &>(*this))->put_ApplicationListingUri(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IDataPackagePropertySet2<D>::ContentSourceWebLink() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->get_ContentSourceWebLink(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet2<D>::ContentSourceWebLink(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->put_ContentSourceWebLink(get(value)));
}

template <typename D> Windows::Foundation::Uri impl_IDataPackagePropertySet2<D>::ContentSourceApplicationLink() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->get_ContentSourceApplicationLink(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet2<D>::ContentSourceApplicationLink(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->put_ContentSourceApplicationLink(get(value)));
}

template <typename D> hstring impl_IDataPackagePropertySet2<D>::PackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->get_PackageFamilyName(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet2<D>::PackageFamilyName(hstring_ref value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->put_PackageFamilyName(get(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IDataPackagePropertySet2<D>::Square30x30Logo() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->get_Square30x30Logo(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet2<D>::Square30x30Logo(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->put_Square30x30Logo(get(value)));
}

template <typename D> Windows::UI::Color impl_IDataPackagePropertySet2<D>::LogoBackgroundColor() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->get_LogoBackgroundColor(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet2<D>::LogoBackgroundColor(const Windows::UI::Color & value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet2 &>(static_cast<const D &>(*this))->put_LogoBackgroundColor(get(value)));
}

template <typename D> hstring impl_IDataPackagePropertySet3<D>::EnterpriseId() const
{
    hstring value;
    check_hresult(static_cast<const IDataPackagePropertySet3 &>(static_cast<const D &>(*this))->get_EnterpriseId(put(value)));
    return value;
}

template <typename D> void impl_IDataPackagePropertySet3<D>::EnterpriseId(hstring_ref value) const
{
    check_hresult(static_cast<const IDataPackagePropertySet3 &>(static_cast<const D &>(*this))->put_EnterpriseId(get(value)));
}

template <typename D> void impl_IDataProviderDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IDataProviderDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> hstring impl_IDataProviderRequest<D>::FormatId() const
{
    hstring value;
    check_hresult(static_cast<const IDataProviderRequest &>(static_cast<const D &>(*this))->get_FormatId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IDataProviderRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IDataProviderRequest &>(static_cast<const D &>(*this))->get_Deadline(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataProviderDeferral impl_IDataProviderRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::DataTransfer::DataProviderDeferral value { nullptr };
    check_hresult(static_cast<const IDataProviderRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> void impl_IDataProviderRequest<D>::SetData(const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IDataProviderRequest &>(static_cast<const D &>(*this))->abi_SetData(get(value)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_IOperationCompletedEventArgs<D>::Operation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const IOperationCompletedEventArgs &>(static_cast<const D &>(*this))->get_Operation(&value));
    return value;
}

template <typename D> hstring impl_IOperationCompletedEventArgs2<D>::AcceptedFormatId() const
{
    hstring value;
    check_hresult(static_cast<const IOperationCompletedEventArgs2 &>(static_cast<const D &>(*this))->get_AcceptedFormatId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView impl_IDataPackageView<D>::Properties() const
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView value { nullptr };
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_IDataPackageView<D>::RequestedOperation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->get_RequestedOperation(&value));
    return value;
}

template <typename D> void impl_IDataPackageView<D>::ReportOperationCompleted(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) const
{
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_ReportOperationCompleted(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IDataPackageView<D>::AvailableFormats() const
{
    Windows::Foundation::Collections::IVectorView<hstring> formatIds;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->get_AvailableFormats(put(formatIds)));
    return formatIds;
}

template <typename D> bool impl_IDataPackageView<D>::Contains(hstring_ref formatId) const
{
    bool value {};
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_Contains(get(formatId), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::IInspectable> impl_IDataPackageView<D>::GetDataAsync(hstring_ref formatId) const
{
    Windows::Foundation::IAsyncOperation<Windows::IInspectable> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetDataAsync(get(formatId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IDataPackageView<D>::GetTextAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetTextAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IDataPackageView<D>::GetTextAsync(hstring_ref formatId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetCustomTextAsync(get(formatId), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> impl_IDataPackageView<D>::GetUriAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetUriAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IDataPackageView<D>::GetHtmlFormatAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetHtmlFormatAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>> impl_IDataPackageView<D>::GetResourceMapAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetResourceMapAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IDataPackageView<D>::GetRtfAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetRtfAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> impl_IDataPackageView<D>::GetBitmapAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetBitmapAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> impl_IDataPackageView<D>::GetStorageItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation;
    check_hresult(static_cast<const IDataPackageView &>(static_cast<const D &>(*this))->abi_GetStorageItemsAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> impl_IDataPackageView2<D>::GetApplicationLinkAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation;
    check_hresult(static_cast<const IDataPackageView2 &>(static_cast<const D &>(*this))->abi_GetApplicationLinkAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> impl_IDataPackageView2<D>::GetWebLinkAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation;
    check_hresult(static_cast<const IDataPackageView2 &>(static_cast<const D &>(*this))->abi_GetWebLinkAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> impl_IDataPackageView3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> operation;
    check_hresult(static_cast<const IDataPackageView3 &>(static_cast<const D &>(*this))->abi_RequestAccessAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> impl_IDataPackageView3<D>::RequestAccessAsync(hstring_ref enterpriseId) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> operation;
    check_hresult(static_cast<const IDataPackageView3 &>(static_cast<const D &>(*this))->abi_RequestAccessWithEnterpriseIdAsync(get(enterpriseId), put(operation)));
    return operation;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult impl_IDataPackageView3<D>::UnlockAndAssumeEnterpriseIdentity() const
{
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result {};
    check_hresult(static_cast<const IDataPackageView3 &>(static_cast<const D &>(*this))->abi_UnlockAndAssumeEnterpriseIdentity(&result));
    return result;
}

template <typename D> void impl_IDataPackageView4<D>::SetAcceptedFormatId(hstring_ref formatId) const
{
    check_hresult(static_cast<const IDataPackageView4 &>(static_cast<const D &>(*this))->abi_SetAcceptedFormatId(get(formatId)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView impl_IDataPackage<D>::GetView() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value { nullptr };
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_GetView(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackagePropertySet impl_IDataPackage<D>::Properties() const
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySet value { nullptr };
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation impl_IDataPackage<D>::RequestedOperation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value {};
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->get_RequestedOperation(&value));
    return value;
}

template <typename D> void impl_IDataPackage<D>::RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->put_RequestedOperation(value));
}

template <typename D> event_token impl_IDataPackage<D>::OperationCompleted(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> & handler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->add_OperationCompleted(get(handler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IDataPackage> impl_IDataPackage<D>::OperationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IDataPackage>(this, &ABI::Windows::ApplicationModel::DataTransfer::IDataPackage::remove_OperationCompleted, OperationCompleted(handler));
}

template <typename D> void impl_IDataPackage<D>::OperationCompleted(event_token eventCookie) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->remove_OperationCompleted(eventCookie));
}

template <typename D> event_token impl_IDataPackage<D>::Destroyed(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::IInspectable> & handler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->add_Destroyed(get(handler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IDataPackage> impl_IDataPackage<D>::Destroyed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IDataPackage>(this, &ABI::Windows::ApplicationModel::DataTransfer::IDataPackage::remove_Destroyed, Destroyed(handler));
}

template <typename D> void impl_IDataPackage<D>::Destroyed(event_token eventCookie) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->remove_Destroyed(eventCookie));
}

template <typename D> void impl_IDataPackage<D>::SetData(hstring_ref formatId, const Windows::IInspectable & value) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetData(get(formatId), get(value)));
}

template <typename D> void impl_IDataPackage<D>::SetDataProvider(hstring_ref formatId, const Windows::ApplicationModel::DataTransfer::DataProviderHandler & delayRenderer) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetDataProvider(get(formatId), get(delayRenderer)));
}

template <typename D> void impl_IDataPackage<D>::SetText(hstring_ref value) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetText(get(value)));
}

template <typename D> void impl_IDataPackage<D>::SetUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetUri(get(value)));
}

template <typename D> void impl_IDataPackage<D>::SetHtmlFormat(hstring_ref value) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetHtmlFormat(get(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference> impl_IDataPackage<D>::ResourceMap() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference> value;
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->get_ResourceMap(put(value)));
    return value;
}

template <typename D> void impl_IDataPackage<D>::SetRtf(hstring_ref value) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetRtf(get(value)));
}

template <typename D> void impl_IDataPackage<D>::SetBitmap(const Windows::Storage::Streams::RandomAccessStreamReference & value) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetBitmap(get(value)));
}

template <typename D> void impl_IDataPackage<D>::SetStorageItems(const Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> & value) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetStorageItemsReadOnly(get(value)));
}

template <typename D> void impl_IDataPackage<D>::SetStorageItems(const Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> & value, bool readOnly) const
{
    check_hresult(static_cast<const IDataPackage &>(static_cast<const D &>(*this))->abi_SetStorageItems(get(value), readOnly));
}

template <typename D> void impl_IDataPackage2<D>::SetApplicationLink(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IDataPackage2 &>(static_cast<const D &>(*this))->abi_SetApplicationLink(get(value)));
}

template <typename D> void impl_IDataPackage2<D>::SetWebLink(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IDataPackage2 &>(static_cast<const D &>(*this))->abi_SetWebLink(get(value)));
}

template <typename D> hstring impl_IHtmlFormatHelperStatics<D>::GetStaticFragment(hstring_ref htmlFormat) const
{
    hstring htmlFragment;
    check_hresult(static_cast<const IHtmlFormatHelperStatics &>(static_cast<const D &>(*this))->abi_GetStaticFragment(get(htmlFormat), put(htmlFragment)));
    return htmlFragment;
}

template <typename D> hstring impl_IHtmlFormatHelperStatics<D>::CreateHtmlFormat(hstring_ref htmlFragment) const
{
    hstring htmlFormat;
    check_hresult(static_cast<const IHtmlFormatHelperStatics &>(static_cast<const D &>(*this))->abi_CreateHtmlFormat(get(htmlFragment), put(htmlFormat)));
    return htmlFormat;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView impl_IClipboardStatics<D>::GetContent() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView content { nullptr };
    check_hresult(static_cast<const IClipboardStatics &>(static_cast<const D &>(*this))->abi_GetContent(put(content)));
    return content;
}

template <typename D> void impl_IClipboardStatics<D>::SetContent(const Windows::ApplicationModel::DataTransfer::DataPackage & content) const
{
    check_hresult(static_cast<const IClipboardStatics &>(static_cast<const D &>(*this))->abi_SetContent(get(content)));
}

template <typename D> void impl_IClipboardStatics<D>::Flush() const
{
    check_hresult(static_cast<const IClipboardStatics &>(static_cast<const D &>(*this))->abi_Flush());
}

template <typename D> void impl_IClipboardStatics<D>::Clear() const
{
    check_hresult(static_cast<const IClipboardStatics &>(static_cast<const D &>(*this))->abi_Clear());
}

template <typename D> event_token impl_IClipboardStatics<D>::ContentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const
{
    event_token token {};
    check_hresult(static_cast<const IClipboardStatics &>(static_cast<const D &>(*this))->add_ContentChanged(get(changeHandler), &token));
    return token;
}

template <typename D> event_revoker<IClipboardStatics> impl_IClipboardStatics<D>::ContentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler) const
{
    return impl::make_event_revoker<D, IClipboardStatics>(this, &ABI::Windows::ApplicationModel::DataTransfer::IClipboardStatics::remove_ContentChanged, ContentChanged(changeHandler));
}

template <typename D> void impl_IClipboardStatics<D>::ContentChanged(event_token token) const
{
    check_hresult(static_cast<const IClipboardStatics &>(static_cast<const D &>(*this))->remove_ContentChanged(token));
}

template <typename D> void impl_IDataRequestDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IDataRequestDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage impl_IDataRequest<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value { nullptr };
    check_hresult(static_cast<const IDataRequest &>(static_cast<const D &>(*this))->get_Data(put(value)));
    return value;
}

template <typename D> void impl_IDataRequest<D>::Data(const Windows::ApplicationModel::DataTransfer::DataPackage & value) const
{
    check_hresult(static_cast<const IDataRequest &>(static_cast<const D &>(*this))->put_Data(get(value)));
}

template <typename D> Windows::Foundation::DateTime impl_IDataRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IDataRequest &>(static_cast<const D &>(*this))->get_Deadline(put(value)));
    return value;
}

template <typename D> void impl_IDataRequest<D>::FailWithDisplayText(hstring_ref value) const
{
    check_hresult(static_cast<const IDataRequest &>(static_cast<const D &>(*this))->abi_FailWithDisplayText(get(value)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataRequestDeferral impl_IDataRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::DataTransfer::DataRequestDeferral value { nullptr };
    check_hresult(static_cast<const IDataRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataRequest impl_IDataRequestedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::DataTransfer::DataRequest value { nullptr };
    check_hresult(static_cast<const IDataRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> hstring impl_ITargetApplicationChosenEventArgs<D>::ApplicationName() const
{
    hstring value;
    check_hresult(static_cast<const ITargetApplicationChosenEventArgs &>(static_cast<const D &>(*this))->get_ApplicationName(put(value)));
    return value;
}

template <typename D> event_token impl_IDataTransferManager<D>::DataRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IDataTransferManager &>(static_cast<const D &>(*this))->add_DataRequested(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IDataTransferManager> impl_IDataTransferManager<D>::DataRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IDataTransferManager>(this, &ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager::remove_DataRequested, DataRequested(eventHandler));
}

template <typename D> void impl_IDataTransferManager<D>::DataRequested(event_token eventCookie) const
{
    check_hresult(static_cast<const IDataTransferManager &>(static_cast<const D &>(*this))->remove_DataRequested(eventCookie));
}

template <typename D> event_token impl_IDataTransferManager<D>::TargetApplicationChosen(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> & eventHandler) const
{
    event_token eventCookie {};
    check_hresult(static_cast<const IDataTransferManager &>(static_cast<const D &>(*this))->add_TargetApplicationChosen(get(eventHandler), &eventCookie));
    return eventCookie;
}

template <typename D> event_revoker<IDataTransferManager> impl_IDataTransferManager<D>::TargetApplicationChosen(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> & eventHandler) const
{
    return impl::make_event_revoker<D, IDataTransferManager>(this, &ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager::remove_TargetApplicationChosen, TargetApplicationChosen(eventHandler));
}

template <typename D> void impl_IDataTransferManager<D>::TargetApplicationChosen(event_token eventCookie) const
{
    check_hresult(static_cast<const IDataTransferManager &>(static_cast<const D &>(*this))->remove_TargetApplicationChosen(eventCookie));
}

template <typename D> void impl_IDataTransferManagerStatics<D>::ShowShareUI() const
{
    check_hresult(static_cast<const IDataTransferManagerStatics &>(static_cast<const D &>(*this))->abi_ShowShareUI());
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataTransferManager impl_IDataTransferManagerStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::DataTransfer::DataTransferManager value { nullptr };
    check_hresult(static_cast<const IDataTransferManagerStatics &>(static_cast<const D &>(*this))->abi_GetForCurrentView(put(value)));
    return value;
}

template <typename D> bool impl_IDataTransferManagerStatics2<D>::IsSupported() const
{
    bool value {};
    check_hresult(static_cast<const IDataTransferManagerStatics2 &>(static_cast<const D &>(*this))->abi_IsSupported(&value));
    return value;
}

template <typename D> hstring impl_ISharedStorageAccessManagerStatics<D>::AddFile(const Windows::Storage::IStorageFile & file) const
{
    hstring outToken;
    check_hresult(static_cast<const ISharedStorageAccessManagerStatics &>(static_cast<const D &>(*this))->abi_AddFile(get(file), put(outToken)));
    return outToken;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> impl_ISharedStorageAccessManagerStatics<D>::RedeemTokenForFileAsync(hstring_ref token) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation;
    check_hresult(static_cast<const ISharedStorageAccessManagerStatics &>(static_cast<const D &>(*this))->abi_RedeemTokenForFileAsync(get(token), put(operation)));
    return operation;
}

template <typename D> void impl_ISharedStorageAccessManagerStatics<D>::RemoveFile(hstring_ref token) const
{
    check_hresult(static_cast<const ISharedStorageAccessManagerStatics &>(static_cast<const D &>(*this))->abi_RemoveFile(get(token)));
}

inline Windows::ApplicationModel::DataTransfer::DataPackageView Clipboard::GetContent()
{
    return get_activation_factory<Clipboard, IClipboardStatics>().GetContent();
}

inline void Clipboard::SetContent(const Windows::ApplicationModel::DataTransfer::DataPackage & content)
{
    get_activation_factory<Clipboard, IClipboardStatics>().SetContent(content);
}

inline void Clipboard::Flush()
{
    get_activation_factory<Clipboard, IClipboardStatics>().Flush();
}

inline void Clipboard::Clear()
{
    get_activation_factory<Clipboard, IClipboardStatics>().Clear();
}

inline event_token Clipboard::ContentChanged(const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler)
{
    return get_activation_factory<Clipboard, IClipboardStatics>().ContentChanged(changeHandler);
}

inline factory_event_revoker<IClipboardStatics> Clipboard::ContentChanged(auto_revoke_t, const Windows::Foundation::EventHandler<Windows::IInspectable> & changeHandler)
{
    auto factory = get_activation_factory<Clipboard, IClipboardStatics>();
    return { factory, &ABI::Windows::ApplicationModel::DataTransfer::IClipboardStatics::remove_ContentChanged, factory.ContentChanged(changeHandler) };
}

inline void Clipboard::ContentChanged(event_token token)
{
    get_activation_factory<Clipboard, IClipboardStatics>().ContentChanged(token);
}

inline DataPackage::DataPackage() :
    DataPackage(activate_instance<DataPackage>())
{}

inline void DataTransferManager::ShowShareUI()
{
    get_activation_factory<DataTransferManager, IDataTransferManagerStatics>().ShowShareUI();
}

inline Windows::ApplicationModel::DataTransfer::DataTransferManager DataTransferManager::GetForCurrentView()
{
    return get_activation_factory<DataTransferManager, IDataTransferManagerStatics>().GetForCurrentView();
}

inline bool DataTransferManager::IsSupported()
{
    return get_activation_factory<DataTransferManager, IDataTransferManagerStatics2>().IsSupported();
}

inline hstring HtmlFormatHelper::GetStaticFragment(hstring_ref htmlFormat)
{
    return get_activation_factory<HtmlFormatHelper, IHtmlFormatHelperStatics>().GetStaticFragment(htmlFormat);
}

inline hstring HtmlFormatHelper::CreateHtmlFormat(hstring_ref htmlFragment)
{
    return get_activation_factory<HtmlFormatHelper, IHtmlFormatHelperStatics>().CreateHtmlFormat(htmlFragment);
}

inline hstring SharedStorageAccessManager::AddFile(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<SharedStorageAccessManager, ISharedStorageAccessManagerStatics>().AddFile(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> SharedStorageAccessManager::RedeemTokenForFileAsync(hstring_ref token)
{
    return get_activation_factory<SharedStorageAccessManager, ISharedStorageAccessManagerStatics>().RedeemTokenForFileAsync(token);
}

inline void SharedStorageAccessManager::RemoveFile(hstring_ref token)
{
    get_activation_factory<SharedStorageAccessManager, ISharedStorageAccessManagerStatics>().RemoveFile(token);
}

inline hstring StandardDataFormats::Text()
{
    return get_activation_factory<StandardDataFormats, IStandardDataFormatsStatics>().Text();
}

inline hstring StandardDataFormats::Uri()
{
    return get_activation_factory<StandardDataFormats, IStandardDataFormatsStatics>().Uri();
}

inline hstring StandardDataFormats::Html()
{
    return get_activation_factory<StandardDataFormats, IStandardDataFormatsStatics>().Html();
}

inline hstring StandardDataFormats::Rtf()
{
    return get_activation_factory<StandardDataFormats, IStandardDataFormatsStatics>().Rtf();
}

inline hstring StandardDataFormats::Bitmap()
{
    return get_activation_factory<StandardDataFormats, IStandardDataFormatsStatics>().Bitmap();
}

inline hstring StandardDataFormats::StorageItems()
{
    return get_activation_factory<StandardDataFormats, IStandardDataFormatsStatics>().StorageItems();
}

inline hstring StandardDataFormats::WebLink()
{
    return get_activation_factory<StandardDataFormats, IStandardDataFormatsStatics2>().WebLink();
}

inline hstring StandardDataFormats::ApplicationLink()
{
    return get_activation_factory<StandardDataFormats, IStandardDataFormatsStatics2>().ApplicationLink();
}

}

}
