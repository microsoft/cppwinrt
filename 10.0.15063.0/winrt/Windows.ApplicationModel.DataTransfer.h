// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.EnterpriseData.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::GetContent() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView content{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->GetContent(put_abi(content)));
    return content;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::SetContent(Windows::ApplicationModel::DataTransfer::DataPackage const& content) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->SetContent(get_abi(content)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::Flush() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->Flush());
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->Clear());
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::ContentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->add_ContentChanged(get_abi(changeHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics> consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::ContentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IClipboardStatics>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics>::remove_ContentChanged, ContentChanged(changeHandler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::ContentChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->remove_ContentChanged(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::GetView() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->GetView(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackagePropertySet consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::Properties() const
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::RequestedOperation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->get_RequestedOperation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->put_RequestedOperation(get_abi(value)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::OperationCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const& handler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->add_OperationCompleted(get_abi(handler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage> consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::OperationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataPackage>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage>::remove_OperationCompleted, OperationCompleted(handler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::OperationCompleted(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->remove_OperationCompleted(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::Destroyed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->add_Destroyed(get_abi(handler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage> consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::Destroyed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataPackage>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage>::remove_Destroyed, Destroyed(handler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::Destroyed(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->remove_Destroyed(get_abi(eventCookie)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetData(param::hstring const& formatId, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetData(get_abi(formatId), get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetDataProvider(param::hstring const& formatId, Windows::ApplicationModel::DataTransfer::DataProviderHandler const& delayRenderer) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetDataProvider(get_abi(formatId), get_abi(delayRenderer)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetText(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetUri(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetHtmlFormat(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetHtmlFormat(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference> consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::ResourceMap() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->get_ResourceMap(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetRtf(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetRtf(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetBitmap(Windows::Storage::Streams::RandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetBitmap(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetStorageItems(param::iterable<Windows::Storage::IStorageItem> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetStorageItemsReadOnly(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetStorageItems(param::iterable<Windows::Storage::IStorageItem> const& value, bool readOnly) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetStorageItems(get_abi(value), readOnly));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage2<D>::SetApplicationLink(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage2)->SetApplicationLink(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage2<D>::SetWebLink(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage2)->SetWebLink(get_abi(value)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataPackage3<D>::ShareCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage3)->add_ShareCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage3> consume_Windows_ApplicationModel_DataTransfer_IDataPackage3<D>::ShareCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataPackage3>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage3>::remove_ShareCompleted, ShareCompleted(handler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage3<D>::ShareCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage3)->remove_ShareCompleted(get_abi(token)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_Description(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::FileTypes() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_FileTypes(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::ApplicationName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_ApplicationName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::ApplicationName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_ApplicationName(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::ApplicationListingUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_ApplicationListingUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::ApplicationListingUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_ApplicationListingUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::ContentSourceWebLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_ContentSourceWebLink(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::ContentSourceWebLink(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_ContentSourceWebLink(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::ContentSourceApplicationLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_ContentSourceApplicationLink(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::ContentSourceApplicationLink(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_ContentSourceApplicationLink(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::PackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::PackageFamilyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_PackageFamilyName(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::Square30x30Logo() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_Square30x30Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::Square30x30Logo(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_Square30x30Logo(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::LogoBackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_LogoBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::LogoBackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_LogoBackgroundColor(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3<D>::EnterpriseId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3)->put_EnterpriseId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::FileTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_FileTypes(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::ApplicationName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_ApplicationName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::ApplicationListingUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_ApplicationListingUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::PackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::ContentSourceWebLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_ContentSourceWebLink(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::ContentSourceApplicationLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_ContentSourceApplicationLink(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::Square30x30Logo() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_Square30x30Logo(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::LogoBackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_LogoBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView3<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::Properties() const
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::RequestedOperation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->get_RequestedOperation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::ReportOperationCompleted(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->ReportOperationCompleted(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::AvailableFormats() const
{
    Windows::Foundation::Collections::IVectorView<hstring> formatIds{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->get_AvailableFormats(put_abi(formatIds)));
    return formatIds;
}

template <typename D> bool consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::Contains(param::hstring const& formatId) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->Contains(get_abi(formatId), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetDataAsync(param::hstring const& formatId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetDataAsync(get_abi(formatId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetTextAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetTextAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetTextAsync(param::hstring const& formatId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetCustomTextAsync(get_abi(formatId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetUriAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetUriAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetHtmlFormatAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetHtmlFormatAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetResourceMapAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetResourceMapAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetRtfAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetRtfAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetBitmapAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetBitmapAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetStorageItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetStorageItemsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView2<D>::GetApplicationLinkAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView2)->GetApplicationLinkAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView2<D>::GetWebLinkAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView2)->GetWebLinkAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView3)->RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3<D>::RequestAccessAsync(param::hstring const& enterpriseId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView3)->RequestAccessWithEnterpriseIdAsync(get_abi(enterpriseId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3<D>::UnlockAndAssumeEnterpriseIdentity() const
{
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView3)->UnlockAndAssumeEnterpriseIdentity(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackageView4<D>::SetAcceptedFormatId(param::hstring const& formatId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView4)->SetAcceptedFormatId(get_abi(formatId)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataProviderDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderDeferral)->Complete());
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>::FormatId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderRequest)->get_FormatId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataProviderDeferral consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::DataTransfer::DataProviderDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>::SetData(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderRequest)->SetData(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::Data(Windows::ApplicationModel::DataTransfer::DataPackage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->put_Data(get_abi(value)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::FailWithDisplayText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->FailWithDisplayText(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataRequestDeferral consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::DataTransfer::DataRequestDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequestDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataRequest consume_Windows_ApplicationModel_DataTransfer_IDataRequestedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::DataTransfer::DataRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::DataRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager)->add_DataRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager> consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::DataRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager>::remove_DataRequested, DataRequested(eventHandler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::DataRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager)->remove_DataRequested(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::TargetApplicationChosen(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager)->add_TargetApplicationChosen(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager> consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::TargetApplicationChosen(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager>::remove_TargetApplicationChosen, TargetApplicationChosen(eventHandler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::TargetApplicationChosen(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager)->remove_TargetApplicationChosen(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2<D>::ShareProvidersRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager2)->add_ShareProvidersRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager2> consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2<D>::ShareProvidersRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager2>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>::remove_ShareProvidersRequested, ShareProvidersRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2<D>::ShareProvidersRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager2)->remove_ShareProvidersRequested(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics<D>::ShowShareUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics)->ShowShareUI());
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataTransferManager consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::DataTransfer::DataTransferManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics2<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2)->IsSupported(&value));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics<D>::GetStaticFragment(param::hstring const& htmlFormat) const
{
    hstring htmlFragment{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics)->GetStaticFragment(get_abi(htmlFormat), put_abi(htmlFragment)));
    return htmlFragment;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics<D>::CreateHtmlFormat(param::hstring const& htmlFragment) const
{
    hstring htmlFormat{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics)->CreateHtmlFormat(get_abi(htmlFragment), put_abi(htmlFormat)));
    return htmlFormat;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs<D>::Operation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs2<D>::AcceptedFormatId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2)->get_AcceptedFormatId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareTargetInfo consume_Windows_ApplicationModel_DataTransfer_IShareCompletedEventArgs<D>::ShareTarget() const
{
    Windows::ApplicationModel::DataTransfer::ShareTargetInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs)->get_ShareTarget(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->get_Title(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::DisplayIcon() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->get_DisplayIcon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::Tag() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::Tag(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->put_Tag(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareProvider consume_Windows_ApplicationModel_DataTransfer_IShareProviderFactory<D>::Create(param::hstring const& title, Windows::Storage::Streams::RandomAccessStreamReference const& displayIcon, Windows::UI::Color const& backgroundColor, Windows::ApplicationModel::DataTransfer::ShareProviderHandler const& handler) const
{
    Windows::ApplicationModel::DataTransfer::ShareProvider result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProviderFactory)->Create(get_abi(title), get_abi(displayIcon), get_abi(backgroundColor), get_abi(handler), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProviderOperation)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareProvider consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation<D>::Provider() const
{
    Windows::ApplicationModel::DataTransfer::ShareProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProviderOperation)->get_Provider(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProviderOperation)->ReportCompleted());
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::DataTransfer::ShareProvider> consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs<D>::Providers() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::DataTransfer::ShareProvider> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs)->get_Providers(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IShareTargetInfo<D>::AppUserModelId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareTargetInfo)->get_AppUserModelId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareProvider consume_Windows_ApplicationModel_DataTransfer_IShareTargetInfo<D>::ShareProvider() const
{
    Windows::ApplicationModel::DataTransfer::ShareProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareTargetInfo)->get_ShareProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics<D>::AddFile(Windows::Storage::IStorageFile const& file) const
{
    hstring outToken{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics)->AddFile(get_abi(file), put_abi(outToken)));
    return outToken;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics<D>::RedeemTokenForFileAsync(param::hstring const& token) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics)->RedeemTokenForFileAsync(get_abi(token), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics<D>::RemoveFile(param::hstring const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics)->RemoveFile(get_abi(token)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Text(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Uri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Html() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Html(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Rtf() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Rtf(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Bitmap() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Bitmap(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::StorageItems() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_StorageItems(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2<D>::WebLink() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2)->get_WebLink(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2<D>::ApplicationLink() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2)->get_ApplicationLink(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_ITargetApplicationChosenEventArgs<D>::ApplicationName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs)->get_ApplicationName(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::ApplicationModel::DataTransfer::DataProviderHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::DataTransfer::DataProviderHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::DataTransfer::DataProviderHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* request) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataProviderRequest const*>(&request));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::DataTransfer::ShareProviderHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::DataTransfer::ShareProviderHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* operation) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::ShareProviderOperation const*>(&operation));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IClipboardStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IClipboardStatics>
{
    HRESULT __stdcall GetContent(::IUnknown** content) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *content = detach_abi(this->shim().GetContent());
            return S_OK;
        }
        catch (...)
        {
            *content = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetContent(::IUnknown* content) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContent(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackage const*>(&content));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Flush() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Flush();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ContentChanged(::IUnknown* changeHandler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ContentChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ContentChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall GetView(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetView());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedOperation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestedOperation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedOperation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestedOperation(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackageOperation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_OperationCompleted(::IUnknown* handler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().OperationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_OperationCompleted(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OperationCompleted(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Destroyed(::IUnknown* handler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().Destroyed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Destroyed(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Destroyed(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetData(HSTRING formatId, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetData(*reinterpret_cast<hstring const*>(&formatId), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDataProvider(HSTRING formatId, ::IUnknown* delayRenderer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDataProvider(*reinterpret_cast<hstring const*>(&formatId), *reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataProviderHandler const*>(&delayRenderer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetHtmlFormat(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHtmlFormat(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceMap(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResourceMap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetRtf(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRtf(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetBitmap(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBitmap(*reinterpret_cast<Windows::Storage::Streams::RandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStorageItemsReadOnly(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStorageItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStorageItems(::IUnknown* value, bool readOnly) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStorageItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> const*>(&value), readOnly);
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
    HRESULT __stdcall SetApplicationLink(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetApplicationLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetWebLink(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetWebLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackage3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackage3>
{
    HRESULT __stdcall add_ShareCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ShareCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ShareCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShareCompleted(*reinterpret_cast<event_token const*>(&token));
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

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
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
            this->shim().Thumbnail(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationListingUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationListingUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationListingUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationListingUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
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
    HRESULT __stdcall get_ContentSourceWebLink(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentSourceWebLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentSourceWebLink(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentSourceWebLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceApplicationLink(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentSourceApplicationLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentSourceApplicationLink(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentSourceApplicationLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PackageFamilyName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Square30x30Logo(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square30x30Logo(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogoBackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LogoBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LogoBackgroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogoBackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
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
    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnterpriseId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterpriseId(*reinterpret_cast<hstring const*>(&value));
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

    HRESULT __stdcall get_Description(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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

    HRESULT __stdcall get_FileTypes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationListingUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationListingUri());
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
    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceWebLink(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentSourceWebLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceApplicationLink(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentSourceApplicationLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogoBackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LogoBackgroundColor());
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
    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnterpriseId());
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
    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedOperation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestedOperation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportOperationCompleted(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportOperationCompleted(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackageOperation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableFormats(::IUnknown** formatIds) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *formatIds = detach_abi(this->shim().AvailableFormats());
            return S_OK;
        }
        catch (...)
        {
            *formatIds = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Contains(HSTRING formatId, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Contains(*reinterpret_cast<hstring const*>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDataAsync(HSTRING formatId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetDataAsync(*reinterpret_cast<hstring const*>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTextAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetTextAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCustomTextAsync(HSTRING formatId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetTextAsync(*reinterpret_cast<hstring const*>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetUriAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetUriAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHtmlFormatAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetHtmlFormatAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetResourceMapAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetResourceMapAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRtfAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetRtfAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetBitmapAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetBitmapAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStorageItemsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetStorageItemsAsync());
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
    HRESULT __stdcall GetApplicationLinkAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetApplicationLinkAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetWebLinkAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetWebLinkAsync());
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
    HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessWithEnterpriseIdAsync(HSTRING enterpriseId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&enterpriseId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnlockAndAssumeEnterpriseIdentity(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnlockAndAssumeEnterpriseIdentity());
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
    HRESULT __stdcall SetAcceptedFormatId(HSTRING formatId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAcceptedFormatId(*reinterpret_cast<hstring const*>(&formatId));
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
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_FormatId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormatId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetData(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetData(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
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

    HRESULT __stdcall put_Data(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FailWithDisplayText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailWithDisplayText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
    HRESULT __stdcall Complete() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
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
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
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
    HRESULT __stdcall add_DataRequested(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().DataRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataRequested(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TargetApplicationChosen(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().TargetApplicationChosen(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetApplicationChosen(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetApplicationChosen(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager2>
{
    HRESULT __stdcall add_ShareProvidersRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ShareProvidersRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ShareProvidersRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShareProvidersRequested(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall ShowShareUI() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowShareUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForCurrentView(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForCurrentView());
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
    HRESULT __stdcall IsSupported(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSupported());
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
    HRESULT __stdcall GetStaticFragment(HSTRING htmlFormat, HSTRING* htmlFragment) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *htmlFragment = detach_abi(this->shim().GetStaticFragment(*reinterpret_cast<hstring const*>(&htmlFormat)));
            return S_OK;
        }
        catch (...)
        {
            *htmlFragment = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateHtmlFormat(HSTRING htmlFragment, HSTRING* htmlFormat) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *htmlFormat = detach_abi(this->shim().CreateHtmlFormat(*reinterpret_cast<hstring const*>(&htmlFragment)));
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
    HRESULT __stdcall get_Operation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Operation());
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
    HRESULT __stdcall get_AcceptedFormatId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AcceptedFormatId());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>
{
    HRESULT __stdcall get_ShareTarget(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShareTarget());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareProvider> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareProvider>
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

    HRESULT __stdcall get_DisplayIcon(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayIcon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareProviderFactory> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareProviderFactory>
{
    HRESULT __stdcall Create(HSTRING title, ::IUnknown* displayIcon, abi_t<Windows::UI::Color> backgroundColor, ::IUnknown* handler, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<Windows::Storage::Streams::RandomAccessStreamReference const*>(&displayIcon), *reinterpret_cast<Windows::UI::Color const*>(&backgroundColor), *reinterpret_cast<Windows::ApplicationModel::DataTransfer::ShareProviderHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareProviderOperation> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareProviderOperation>
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

    HRESULT __stdcall get_Provider(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Provider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>
{
    HRESULT __stdcall get_Providers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Providers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareTargetInfo> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareTargetInfo>
{
    HRESULT __stdcall get_AppUserModelId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppUserModelId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ShareProvider(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShareProvider());
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
    HRESULT __stdcall AddFile(::IUnknown* file, HSTRING* outToken) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *outToken = detach_abi(this->shim().AddFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *outToken = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RedeemTokenForFileAsync(HSTRING token, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RedeemTokenForFileAsync(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveFile(HSTRING token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFile(*reinterpret_cast<hstring const*>(&token));
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
    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Html(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Html());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rtf(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rtf());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitmap(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bitmap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StorageItems(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StorageItems());
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
    HRESULT __stdcall get_WebLink(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebLink());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationLink(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationLink());
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
    HRESULT __stdcall get_ApplicationName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationName());
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

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

inline Windows::ApplicationModel::DataTransfer::DataPackageView Clipboard::GetContent()
{
    return get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().GetContent();
}

inline void Clipboard::SetContent(Windows::ApplicationModel::DataTransfer::DataPackage const& content)
{
    get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().SetContent(content);
}

inline void Clipboard::Flush()
{
    get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().Flush();
}

inline void Clipboard::Clear()
{
    get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().Clear();
}

inline event_token Clipboard::ContentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
{
    return get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().ContentChanged(changeHandler);
}

inline factory_event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics> Clipboard::ContentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
{
    auto factory = get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>();
    return { factory, &abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics>::remove_ContentChanged, factory.ContentChanged(changeHandler) };
}

inline void Clipboard::ContentChanged(event_token const& token)
{
    get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().ContentChanged(token);
}

inline DataPackage::DataPackage() :
    DataPackage(activate_instance<DataPackage>())
{}

inline void DataTransferManager::ShowShareUI()
{
    get_activation_factory<DataTransferManager, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>().ShowShareUI();
}

inline Windows::ApplicationModel::DataTransfer::DataTransferManager DataTransferManager::GetForCurrentView()
{
    return get_activation_factory<DataTransferManager, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>().GetForCurrentView();
}

inline bool DataTransferManager::IsSupported()
{
    return get_activation_factory<DataTransferManager, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>().IsSupported();
}

inline hstring HtmlFormatHelper::GetStaticFragment(param::hstring const& htmlFormat)
{
    return get_activation_factory<HtmlFormatHelper, Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>().GetStaticFragment(htmlFormat);
}

inline hstring HtmlFormatHelper::CreateHtmlFormat(param::hstring const& htmlFragment)
{
    return get_activation_factory<HtmlFormatHelper, Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>().CreateHtmlFormat(htmlFragment);
}

inline ShareProvider::ShareProvider(param::hstring const& title, Windows::Storage::Streams::RandomAccessStreamReference const& displayIcon, Windows::UI::Color const& backgroundColor, Windows::ApplicationModel::DataTransfer::ShareProviderHandler const& handler) :
    ShareProvider(get_activation_factory<ShareProvider, Windows::ApplicationModel::DataTransfer::IShareProviderFactory>().Create(title, displayIcon, backgroundColor, handler))
{}

inline hstring SharedStorageAccessManager::AddFile(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<SharedStorageAccessManager, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>().AddFile(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> SharedStorageAccessManager::RedeemTokenForFileAsync(param::hstring const& token)
{
    return get_activation_factory<SharedStorageAccessManager, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>().RedeemTokenForFileAsync(token);
}

inline void SharedStorageAccessManager::RemoveFile(param::hstring const& token)
{
    get_activation_factory<SharedStorageAccessManager, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>().RemoveFile(token);
}

inline hstring StandardDataFormats::Text()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Text();
}

inline hstring StandardDataFormats::Uri()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Uri();
}

inline hstring StandardDataFormats::Html()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Html();
}

inline hstring StandardDataFormats::Rtf()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Rtf();
}

inline hstring StandardDataFormats::Bitmap()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Bitmap();
}

inline hstring StandardDataFormats::StorageItems()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().StorageItems();
}

inline hstring StandardDataFormats::WebLink()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>().WebLink();
}

inline hstring StandardDataFormats::ApplicationLink()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>().ApplicationLink();
}

template <typename L> DataProviderHandler::DataProviderHandler(L handler) :
    DataProviderHandler(impl::make_delegate<DataProviderHandler>(std::forward<L>(handler)))
{}

template <typename F> DataProviderHandler::DataProviderHandler(F* handler) :
    DataProviderHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> DataProviderHandler::DataProviderHandler(O* object, M method) :
    DataProviderHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void DataProviderHandler::operator()(Windows::ApplicationModel::DataTransfer::DataProviderRequest const& request) const
{
    check_hresult((*(abi_t<DataProviderHandler>**)this)->Invoke(get_abi(request)));
}

template <typename L> ShareProviderHandler::ShareProviderHandler(L handler) :
    ShareProviderHandler(impl::make_delegate<ShareProviderHandler>(std::forward<L>(handler)))
{}

template <typename F> ShareProviderHandler::ShareProviderHandler(F* handler) :
    ShareProviderHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> ShareProviderHandler::ShareProviderHandler(O* object, M method) :
    ShareProviderHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void ShareProviderHandler::operator()(Windows::ApplicationModel::DataTransfer::ShareProviderOperation const& operation) const
{
    check_hresult((*(abi_t<ShareProviderHandler>**)this)->Invoke(get_abi(operation)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IClipboardStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IClipboardStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage3> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView3> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView4> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataProviderDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataProviderDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataProviderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataProviderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataRequestDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManager2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManager2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IShareProvider> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareProviderFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IShareProviderFactory> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareProviderOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IShareProviderOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareTargetInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IShareTargetInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::Clipboard> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::Clipboard> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataPackage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataPackage> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySet> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataPackageView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataPackageView> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataProviderDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataProviderDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataProviderRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataProviderRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataRequestDeferral> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataRequestDeferral> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataTransferManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::DataTransferManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::HtmlFormatHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::HtmlFormatHelper> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareProvider> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareProviderOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareProviderOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareTargetInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::ShareTargetInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::StandardDataFormats> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::StandardDataFormats> {};

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> {};

}

WINRT_WARNING_POP
