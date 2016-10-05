// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::DataTransfer {

struct DataProviderHandler;
struct IClipboardStatics;
struct IDataPackage;
struct IDataPackage2;
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
struct IDataTransferManagerStatics;
struct IDataTransferManagerStatics2;
struct IHtmlFormatHelperStatics;
struct IOperationCompletedEventArgs;
struct IOperationCompletedEventArgs2;
struct ISharedStorageAccessManagerStatics;
struct IStandardDataFormatsStatics;
struct IStandardDataFormatsStatics2;
struct ITargetApplicationChosenEventArgs;
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
struct TargetApplicationChosenEventArgs;

}

namespace Windows::ApplicationModel::DataTransfer {

struct DataProviderHandler;
struct IClipboardStatics;
struct IDataPackage;
struct IDataPackage2;
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
struct IDataTransferManagerStatics;
struct IDataTransferManagerStatics2;
struct IHtmlFormatHelperStatics;
struct IOperationCompletedEventArgs;
struct IOperationCompletedEventArgs2;
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
struct SharedStorageAccessManager;
struct StandardDataFormats;
struct TargetApplicationChosenEventArgs;

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
