// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::DataTransfer {

struct DataProviderHandler;
struct IClipboardStatics;
struct IDataPackage;
struct IDataPackage2;
struct IDataPackage3;
struct IDataPackagePropertySet;
struct IDataPackagePropertySet2;
struct IDataPackagePropertySet3;
struct IDataPackagePropertySetView;
struct IDataPackagePropertySetView2;
struct IDataPackagePropertySetView3;
struct IDataPackageView;
struct IDataPackageView2;
struct IDataPackageView3;
struct IDataPackageView4;
struct IDataProviderDeferral;
struct IDataProviderRequest;
struct IDataRequest;
struct IDataRequestDeferral;
struct IDataRequestedEventArgs;
struct IDataTransferManager;
struct IDataTransferManager2;
struct IDataTransferManagerStatics;
struct IDataTransferManagerStatics2;
struct IHtmlFormatHelperStatics;
struct IOperationCompletedEventArgs;
struct IOperationCompletedEventArgs2;
struct IShareCompletedEventArgs;
struct IShareProvider;
struct IShareProviderFactory;
struct IShareProviderOperation;
struct IShareProvidersRequestedEventArgs;
struct IShareTargetInfo;
struct ISharedStorageAccessManagerStatics;
struct IStandardDataFormatsStatics;
struct IStandardDataFormatsStatics2;
struct ITargetApplicationChosenEventArgs;
struct ShareProviderHandler;
struct DataPackage;
struct DataPackagePropertySet;
struct DataPackagePropertySetView;
struct DataPackageView;
struct DataProviderDeferral;
struct DataProviderRequest;
struct DataRequest;
struct DataRequestDeferral;
struct DataRequestedEventArgs;
struct DataTransferManager;
struct OperationCompletedEventArgs;
struct ShareCompletedEventArgs;
struct ShareProvider;
struct ShareProviderOperation;
struct ShareProvidersRequestedEventArgs;
struct ShareTargetInfo;
struct TargetApplicationChosenEventArgs;

}

namespace Windows::ApplicationModel::DataTransfer {

struct DataProviderHandler;
struct ShareProviderHandler;
struct IClipboardStatics;
struct IDataPackage;
struct IDataPackage2;
struct IDataPackage3;
struct IDataPackagePropertySet;
struct IDataPackagePropertySet2;
struct IDataPackagePropertySet3;
struct IDataPackagePropertySetView;
struct IDataPackagePropertySetView2;
struct IDataPackagePropertySetView3;
struct IDataPackageView;
struct IDataPackageView2;
struct IDataPackageView3;
struct IDataPackageView4;
struct IDataProviderDeferral;
struct IDataProviderRequest;
struct IDataRequest;
struct IDataRequestDeferral;
struct IDataRequestedEventArgs;
struct IDataTransferManager;
struct IDataTransferManager2;
struct IDataTransferManagerStatics;
struct IDataTransferManagerStatics2;
struct IHtmlFormatHelperStatics;
struct IOperationCompletedEventArgs;
struct IOperationCompletedEventArgs2;
struct IShareCompletedEventArgs;
struct IShareProvider;
struct IShareProviderFactory;
struct IShareProviderOperation;
struct IShareProvidersRequestedEventArgs;
struct IShareTargetInfo;
struct ISharedStorageAccessManagerStatics;
struct IStandardDataFormatsStatics;
struct IStandardDataFormatsStatics2;
struct ITargetApplicationChosenEventArgs;
struct Clipboard;
struct DataPackage;
struct DataPackagePropertySet;
struct DataPackagePropertySetView;
struct DataPackageView;
struct DataProviderDeferral;
struct DataProviderRequest;
struct DataRequest;
struct DataRequestDeferral;
struct DataRequestedEventArgs;
struct DataTransferManager;
struct HtmlFormatHelper;
struct OperationCompletedEventArgs;
struct ShareCompletedEventArgs;
struct ShareProvider;
struct ShareProviderOperation;
struct ShareProvidersRequestedEventArgs;
struct ShareTargetInfo;
struct SharedStorageAccessManager;
struct StandardDataFormats;
struct TargetApplicationChosenEventArgs;

}

namespace Windows::ApplicationModel::DataTransfer {

template <typename T> struct impl_IClipboardStatics;
template <typename T> struct impl_IDataPackage;
template <typename T> struct impl_IDataPackage2;
template <typename T> struct impl_IDataPackage3;
template <typename T> struct impl_IDataPackagePropertySet;
template <typename T> struct impl_IDataPackagePropertySet2;
template <typename T> struct impl_IDataPackagePropertySet3;
template <typename T> struct impl_IDataPackagePropertySetView;
template <typename T> struct impl_IDataPackagePropertySetView2;
template <typename T> struct impl_IDataPackagePropertySetView3;
template <typename T> struct impl_IDataPackageView;
template <typename T> struct impl_IDataPackageView2;
template <typename T> struct impl_IDataPackageView3;
template <typename T> struct impl_IDataPackageView4;
template <typename T> struct impl_IDataProviderDeferral;
template <typename T> struct impl_IDataProviderRequest;
template <typename T> struct impl_IDataRequest;
template <typename T> struct impl_IDataRequestDeferral;
template <typename T> struct impl_IDataRequestedEventArgs;
template <typename T> struct impl_IDataTransferManager;
template <typename T> struct impl_IDataTransferManager2;
template <typename T> struct impl_IDataTransferManagerStatics;
template <typename T> struct impl_IDataTransferManagerStatics2;
template <typename T> struct impl_IHtmlFormatHelperStatics;
template <typename T> struct impl_IOperationCompletedEventArgs;
template <typename T> struct impl_IOperationCompletedEventArgs2;
template <typename T> struct impl_IShareCompletedEventArgs;
template <typename T> struct impl_IShareProvider;
template <typename T> struct impl_IShareProviderFactory;
template <typename T> struct impl_IShareProviderOperation;
template <typename T> struct impl_IShareProvidersRequestedEventArgs;
template <typename T> struct impl_IShareTargetInfo;
template <typename T> struct impl_ISharedStorageAccessManagerStatics;
template <typename T> struct impl_IStandardDataFormatsStatics;
template <typename T> struct impl_IStandardDataFormatsStatics2;
template <typename T> struct impl_ITargetApplicationChosenEventArgs;
template <typename T> struct impl_DataProviderHandler;
template <typename T> struct impl_ShareProviderHandler;

}

namespace Windows::ApplicationModel::DataTransfer {

enum class DataPackageOperation : unsigned
{
    None = 0x0,
    Copy = 0x1,
    Move = 0x2,
    Link = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(DataPackageOperation)

}

}
