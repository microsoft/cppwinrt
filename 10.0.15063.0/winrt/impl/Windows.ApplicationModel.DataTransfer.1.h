// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Security.EnterpriseData.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

struct WINRT_EBO IClipboardStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IClipboardStatics>
{
    IClipboardStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackage>
{
    IDataPackage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackage2>
{
    IDataPackage2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackage3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackage3>
{
    IDataPackage3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackagePropertySet :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySet>,
    impl::require<IDataPackagePropertySet, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>>
{
    IDataPackagePropertySet(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackagePropertySet2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySet2>
{
    IDataPackagePropertySet2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackagePropertySet3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySet3>
{
    IDataPackagePropertySet3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackagePropertySetView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySetView>,
    impl::require<IDataPackagePropertySetView, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Foundation::IInspectable>>, Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>
{
    IDataPackagePropertySetView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackagePropertySetView2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySetView2>
{
    IDataPackagePropertySetView2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackagePropertySetView3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackagePropertySetView3>
{
    IDataPackagePropertySetView3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackageView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackageView>
{
    IDataPackageView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackageView2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackageView2>
{
    IDataPackageView2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackageView3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackageView3>
{
    IDataPackageView3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataPackageView4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataPackageView4>
{
    IDataPackageView4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataProviderDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProviderDeferral>
{
    IDataProviderDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataProviderRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataProviderRequest>
{
    IDataProviderRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataRequest>
{
    IDataRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataRequestDeferral>
{
    IDataRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataRequestedEventArgs>
{
    IDataRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataTransferManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTransferManager>
{
    IDataTransferManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataTransferManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTransferManager2>
{
    IDataTransferManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataTransferManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTransferManagerStatics>
{
    IDataTransferManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDataTransferManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDataTransferManagerStatics2>
{
    IDataTransferManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHtmlFormatHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHtmlFormatHelperStatics>
{
    IHtmlFormatHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOperationCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOperationCompletedEventArgs>
{
    IOperationCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IOperationCompletedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IOperationCompletedEventArgs2>
{
    IOperationCompletedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShareCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareCompletedEventArgs>
{
    IShareCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShareProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareProvider>
{
    IShareProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShareProviderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareProviderFactory>
{
    IShareProviderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShareProviderOperation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareProviderOperation>
{
    IShareProviderOperation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShareProvidersRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareProvidersRequestedEventArgs>
{
    IShareProvidersRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IShareTargetInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IShareTargetInfo>
{
    IShareTargetInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISharedStorageAccessManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISharedStorageAccessManagerStatics>
{
    ISharedStorageAccessManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStandardDataFormatsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardDataFormatsStatics>
{
    IStandardDataFormatsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStandardDataFormatsStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStandardDataFormatsStatics2>
{
    IStandardDataFormatsStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITargetApplicationChosenEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITargetApplicationChosenEventArgs>
{
    ITargetApplicationChosenEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
