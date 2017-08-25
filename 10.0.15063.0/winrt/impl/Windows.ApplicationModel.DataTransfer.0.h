// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Security::EnterpriseData {

enum class ProtectionPolicyEvaluationResult;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;
struct IStorageItem;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;
struct RandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

enum class DataPackageOperation : unsigned
{
    None = 0x0,
    Copy = 0x1,
    Move = 0x2,
    Link = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(DataPackageOperation)

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
struct DataProviderHandler;
struct ShareProviderHandler;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::DataTransfer::IClipboardStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackage>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackage2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackage3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackageView>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackageView2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackageView3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataPackageView4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IShareProvider>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::Clipboard>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackage>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackageView>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataProviderDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataProviderRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataTransferManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::HtmlFormatHelper>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareProvider>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareProviderOperation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTargetInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::StandardDataFormats>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DataProviderHandler>{ using type = delegate_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>{ using type = delegate_category; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IClipboardStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IClipboardStatics" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackage>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackage" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackage2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackage2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackage3>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackage3" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet3" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView3" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackageView>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackageView" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackageView2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackageView2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackageView3>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackageView3" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataPackageView4>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataPackageView4" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataProviderDeferral" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataProviderRequest" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataRequest" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataRequestDeferral" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManager" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManager2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IHtmlFormatHelperStatics" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareCompletedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IShareProvider>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareProvider" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareProviderFactory" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareProviderOperation" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareProvidersRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IShareTargetInfo" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ISharedStorageAccessManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ITargetApplicationChosenEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::Clipboard>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.Clipboard" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackage>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackage" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackagePropertySet" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackageView>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackageView" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataProviderDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataProviderDeferral" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataProviderRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataProviderRequest" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataRequest" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataRequestDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataRequestDeferral" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataTransferManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataTransferManager" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::HtmlFormatHelper>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.HtmlFormatHelper" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareProvider>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareProvider" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareProviderOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareProviderOperation" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTargetInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTargetInfo" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::StandardDataFormats>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.StandardDataFormats" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataPackageOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataPackageOperation" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DataProviderHandler>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DataProviderHandler" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareProviderHandler" }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IClipboardStatics>{ static constexpr GUID value{ 0xC627E291,0x34E2,0x4963,{ 0x8E,0xED,0x93,0xCB,0xB0,0xEA,0x3D,0x70 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackage>{ static constexpr GUID value{ 0x61EBF5C7,0xEFEA,0x4346,{ 0x95,0x54,0x98,0x1D,0x7E,0x19,0x8F,0xFE } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackage2>{ static constexpr GUID value{ 0x041C1FE9,0x2409,0x45E1,{ 0xA5,0x38,0x4C,0x53,0xEE,0xEE,0x04,0xA7 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackage3>{ static constexpr GUID value{ 0x88F31F5D,0x787B,0x4D32,{ 0x96,0x5A,0xA9,0x83,0x81,0x05,0xA0,0x56 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>{ static constexpr GUID value{ 0xCD1C93EB,0x4C4C,0x443A,{ 0xA8,0xD3,0xF5,0xC2,0x41,0xE9,0x16,0x89 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>{ static constexpr GUID value{ 0xEB505D4A,0x9800,0x46AA,{ 0xB1,0x81,0x7B,0x6F,0x0F,0x2B,0x91,0x9A } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>{ static constexpr GUID value{ 0x9E87FD9B,0x5205,0x401B,{ 0x87,0x4A,0x45,0x56,0x53,0xBD,0x39,0xE8 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>{ static constexpr GUID value{ 0xB94CEC01,0x0C1A,0x4C57,{ 0xBE,0x55,0x75,0xD0,0x12,0x89,0x73,0x5D } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>{ static constexpr GUID value{ 0x6054509B,0x8EBE,0x4FEB,{ 0x9C,0x1E,0x75,0xE6,0x9D,0xE5,0x4B,0x84 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>{ static constexpr GUID value{ 0xDB764CE5,0xD174,0x495C,{ 0x84,0xFC,0x1A,0x51,0xF6,0xAB,0x45,0xD7 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackageView>{ static constexpr GUID value{ 0x7B840471,0x5900,0x4D85,{ 0xA9,0x0B,0x10,0xCB,0x85,0xFE,0x35,0x52 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackageView2>{ static constexpr GUID value{ 0x40ECBA95,0x2450,0x4C1D,{ 0xB6,0xB4,0xED,0x45,0x46,0x3D,0xEE,0x9C } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackageView3>{ static constexpr GUID value{ 0xD37771A8,0xDDAD,0x4288,{ 0x84,0x28,0xD1,0xCA,0xE3,0x94,0x12,0x8B } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataPackageView4>{ static constexpr GUID value{ 0xDFE96F1F,0xE042,0x4433,{ 0xA0,0x9F,0x26,0xD6,0xFF,0xDA,0x8B,0x85 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>{ static constexpr GUID value{ 0xC2CF2373,0x2D26,0x43D9,{ 0xB6,0x9D,0xDC,0xB8,0x6D,0x03,0xF6,0xDA } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>{ static constexpr GUID value{ 0xEBBC7157,0xD3C8,0x47DA,{ 0xAC,0xDE,0xF8,0x23,0x88,0xD5,0xF7,0x16 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataRequest>{ static constexpr GUID value{ 0x4341AE3B,0xFC12,0x4E53,{ 0x8C,0x02,0xAC,0x71,0x4C,0x41,0x5A,0x27 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>{ static constexpr GUID value{ 0x6DC4B89F,0x0386,0x4263,{ 0x87,0xC1,0xED,0x7D,0xCE,0x30,0x89,0x0E } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>{ static constexpr GUID value{ 0xCB8BA807,0x6AC5,0x43C9,{ 0x8A,0xC5,0x9B,0xA2,0x32,0x16,0x31,0x82 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataTransferManager>{ static constexpr GUID value{ 0xA5CAEE9B,0x8708,0x49D1,{ 0x8D,0x36,0x67,0xD2,0x5A,0x8D,0xA0,0x0C } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>{ static constexpr GUID value{ 0x30AE7D71,0x8BA8,0x4C02,{ 0x8E,0x3F,0xDD,0xB2,0x3B,0x38,0x87,0x15 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>{ static constexpr GUID value{ 0xA9DA01AA,0xE00E,0x4CFE,{ 0xAA,0x44,0x2D,0xD9,0x32,0xDC,0xA3,0xD8 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>{ static constexpr GUID value{ 0xC54EC2EC,0x9F97,0x4D63,{ 0x98,0x68,0x39,0x5E,0x27,0x1A,0xD8,0xF5 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>{ static constexpr GUID value{ 0xE22E7749,0xDD70,0x446F,{ 0xAE,0xFC,0x61,0xCE,0xE5,0x9F,0x65,0x5E } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>{ static constexpr GUID value{ 0xE7AF329D,0x051D,0x4FAB,{ 0xB1,0xA9,0x47,0xFD,0x77,0xF7,0x0A,0x41 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>{ static constexpr GUID value{ 0x858FA073,0x1E19,0x4105,{ 0xB2,0xF7,0xC8,0x47,0x88,0x08,0xD5,0x62 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>{ static constexpr GUID value{ 0x4574C442,0xF913,0x4F60,{ 0x9D,0xF7,0xCC,0x40,0x60,0xAB,0x19,0x16 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IShareProvider>{ static constexpr GUID value{ 0x2FABE026,0x443E,0x4CDA,{ 0xAF,0x25,0x8D,0x81,0x07,0x0E,0xFD,0x80 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>{ static constexpr GUID value{ 0x172A174C,0xE79E,0x4F6D,{ 0xB0,0x7D,0x12,0x8F,0x46,0x9E,0x02,0x96 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>{ static constexpr GUID value{ 0x19CEF937,0xD435,0x4179,{ 0xB6,0xAF,0x14,0xE0,0x49,0x2B,0x69,0xF6 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>{ static constexpr GUID value{ 0xF888F356,0xA3F8,0x4FCE,{ 0x85,0xE4,0x88,0x26,0xE6,0x3B,0xE7,0x99 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>{ static constexpr GUID value{ 0x385BE607,0xC6E8,0x4114,{ 0xB2,0x94,0x28,0xF3,0xBB,0x6F,0x99,0x04 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>{ static constexpr GUID value{ 0xC6132ADA,0x34B1,0x4849,{ 0xBD,0x5F,0xD0,0x9F,0xEE,0x31,0x58,0xC5 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>{ static constexpr GUID value{ 0x7ED681A1,0xA880,0x40C9,{ 0xB4,0xED,0x0B,0xEE,0x1E,0x15,0xF5,0x49 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>{ static constexpr GUID value{ 0x42A254F4,0x9D76,0x42E8,{ 0x86,0x1B,0x47,0xC2,0x5D,0xD0,0xCF,0x71 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>{ static constexpr GUID value{ 0xCA6FB8AC,0x2987,0x4EE3,{ 0x9C,0x54,0xD8,0xAF,0xBC,0xB8,0x6C,0x1D } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DataProviderHandler>{ static constexpr GUID value{ 0xE7ECD720,0xF2F4,0x4A2D,{ 0x92,0x0E,0x17,0x0A,0x2F,0x48,0x2A,0x27 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>{ static constexpr GUID value{ 0xE7F9D9BA,0xE1BA,0x4E4D,{ 0xBD,0x65,0xD4,0x38,0x45,0xD3,0x21,0x2F } }; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataPackage>{ using type = Windows::ApplicationModel::DataTransfer::IDataPackage; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>{ using type = Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>{ using type = Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataPackageView>{ using type = Windows::ApplicationModel::DataTransfer::IDataPackageView; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataProviderDeferral>{ using type = Windows::ApplicationModel::DataTransfer::IDataProviderDeferral; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataProviderRequest>{ using type = Windows::ApplicationModel::DataTransfer::IDataProviderRequest; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataRequest>{ using type = Windows::ApplicationModel::DataTransfer::IDataRequest; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataRequestDeferral>{ using type = Windows::ApplicationModel::DataTransfer::IDataRequestDeferral; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs>{ using type = Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DataTransferManager>{ using type = Windows::ApplicationModel::DataTransfer::IDataTransferManager; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs>{ using type = Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs>{ using type = Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareProvider>{ using type = Windows::ApplicationModel::DataTransfer::IShareProvider; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareProviderOperation>{ using type = Windows::ApplicationModel::DataTransfer::IShareProviderOperation; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs>{ using type = Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareTargetInfo>{ using type = Windows::ApplicationModel::DataTransfer::IShareTargetInfo; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs>{ using type = Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics
{
    Windows::ApplicationModel::DataTransfer::DataPackageView GetContent() const;
    void SetContent(Windows::ApplicationModel::DataTransfer::DataPackage const& content) const;
    void Flush() const;
    void Clear() const;
    event_token ContentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const;
    using ContentChanged_revoker = event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics>;
    ContentChanged_revoker ContentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const;
    void ContentChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IClipboardStatics> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackage
{
    Windows::ApplicationModel::DataTransfer::DataPackageView GetView() const;
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySet Properties() const;
    Windows::ApplicationModel::DataTransfer::DataPackageOperation RequestedOperation() const;
    void RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
    event_token OperationCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const& handler) const;
    using OperationCompleted_revoker = event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage>;
    OperationCompleted_revoker OperationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const& handler) const;
    void OperationCompleted(event_token const& eventCookie) const;
    event_token Destroyed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const;
    using Destroyed_revoker = event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage>;
    Destroyed_revoker Destroyed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const;
    void Destroyed(event_token const& eventCookie) const;
    void SetData(param::hstring const& formatId, Windows::Foundation::IInspectable const& value) const;
    void SetDataProvider(param::hstring const& formatId, Windows::ApplicationModel::DataTransfer::DataProviderHandler const& delayRenderer) const;
    void SetText(param::hstring const& value) const;
    [[deprecated("SetUri may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use SetWebLink or SetApplicationLink.")]] void SetUri(Windows::Foundation::Uri const& value) const;
    void SetHtmlFormat(param::hstring const& value) const;
    Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference> ResourceMap() const;
    void SetRtf(param::hstring const& value) const;
    void SetBitmap(Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
    void SetStorageItems(param::iterable<Windows::Storage::IStorageItem> const& value) const;
    void SetStorageItems(param::iterable<Windows::Storage::IStorageItem> const& value, bool readOnly) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackage> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackage2
{
    void SetApplicationLink(Windows::Foundation::Uri const& value) const;
    void SetWebLink(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackage2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackage2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackage3
{
    event_token ShareCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const& handler) const;
    using ShareCompleted_revoker = event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage3>;
    ShareCompleted_revoker ShareCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const& handler) const;
    void ShareCompleted(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackage3> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackage3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet
{
    hstring Title() const;
    void Title(param::hstring const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
    void Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    Windows::Foundation::Collections::IVector<hstring> FileTypes() const;
    hstring ApplicationName() const;
    void ApplicationName(param::hstring const& value) const;
    Windows::Foundation::Uri ApplicationListingUri() const;
    void ApplicationListingUri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2
{
    Windows::Foundation::Uri ContentSourceWebLink() const;
    void ContentSourceWebLink(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri ContentSourceApplicationLink() const;
    void ContentSourceApplicationLink(Windows::Foundation::Uri const& value) const;
    hstring PackageFamilyName() const;
    void PackageFamilyName(param::hstring const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Square30x30Logo() const;
    void Square30x30Logo(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    Windows::UI::Color LogoBackgroundColor() const;
    void LogoBackgroundColor(Windows::UI::Color const& value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3
{
    hstring EnterpriseId() const;
    void EnterpriseId(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView
{
    hstring Title() const;
    hstring Description() const;
    Windows::Storage::Streams::RandomAccessStreamReference Thumbnail() const;
    Windows::Foundation::Collections::IVectorView<hstring> FileTypes() const;
    hstring ApplicationName() const;
    Windows::Foundation::Uri ApplicationListingUri() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2
{
    hstring PackageFamilyName() const;
    Windows::Foundation::Uri ContentSourceWebLink() const;
    Windows::Foundation::Uri ContentSourceApplicationLink() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Square30x30Logo() const;
    Windows::UI::Color LogoBackgroundColor() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView3
{
    hstring EnterpriseId() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackageView
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView Properties() const;
    Windows::ApplicationModel::DataTransfer::DataPackageOperation RequestedOperation() const;
    void ReportOperationCompleted(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
    Windows::Foundation::Collections::IVectorView<hstring> AvailableFormats() const;
    bool Contains(param::hstring const& formatId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> GetDataAsync(param::hstring const& formatId) const;
    Windows::Foundation::IAsyncOperation<hstring> GetTextAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetTextAsync(param::hstring const& formatId) const;
    [[deprecated("GetUriAsync may be altered or unavailable for releases after Windows 8.1. Instead, use GetWebLinkAsync or GetApplicationLinkAsync.")]] Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> GetUriAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetHtmlFormatAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>> GetResourceMapAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetRtfAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> GetBitmapAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> GetStorageItemsAsync() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackageView> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackageView2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> GetApplicationLinkAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> GetWebLinkAsync() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackageView2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackageView2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> RequestAccessAsync(param::hstring const& enterpriseId) const;
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult UnlockAndAssumeEnterpriseIdentity() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackageView3> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataPackageView4
{
    void SetAcceptedFormatId(param::hstring const& formatId) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataPackageView4> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataPackageView4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataProviderDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataProviderDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest
{
    hstring FormatId() const;
    Windows::Foundation::DateTime Deadline() const;
    Windows::ApplicationModel::DataTransfer::DataProviderDeferral GetDeferral() const;
    void SetData(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataProviderRequest> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataRequest
{
    Windows::ApplicationModel::DataTransfer::DataPackage Data() const;
    void Data(Windows::ApplicationModel::DataTransfer::DataPackage const& value) const;
    Windows::Foundation::DateTime Deadline() const;
    void FailWithDisplayText(param::hstring const& value) const;
    Windows::ApplicationModel::DataTransfer::DataRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataRequest> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataRequestDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataRequestedEventArgs
{
    Windows::ApplicationModel::DataTransfer::DataRequest Request() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager
{
    event_token DataRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const& eventHandler) const;
    using DataRequested_revoker = event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager>;
    DataRequested_revoker DataRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const& eventHandler) const;
    void DataRequested(event_token const& eventCookie) const;
    event_token TargetApplicationChosen(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const& eventHandler) const;
    using TargetApplicationChosen_revoker = event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager>;
    TargetApplicationChosen_revoker TargetApplicationChosen(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const& eventHandler) const;
    void TargetApplicationChosen(event_token const& eventCookie) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManager> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2
{
    event_token ShareProvidersRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const& handler) const;
    using ShareProvidersRequested_revoker = event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>;
    ShareProvidersRequested_revoker ShareProvidersRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const& handler) const;
    void ShareProvidersRequested(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManager2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics
{
    void ShowShareUI() const;
    Windows::ApplicationModel::DataTransfer::DataTransferManager GetForCurrentView() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics2
{
    bool IsSupported() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics
{
    hstring GetStaticFragment(param::hstring const& htmlFormat) const;
    hstring CreateHtmlFormat(param::hstring const& htmlFragment) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation Operation() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs2
{
    hstring AcceptedFormatId() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IShareCompletedEventArgs
{
    Windows::ApplicationModel::DataTransfer::ShareTargetInfo ShareTarget() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IShareProvider
{
    hstring Title() const;
    Windows::Storage::Streams::RandomAccessStreamReference DisplayIcon() const;
    Windows::UI::Color BackgroundColor() const;
    Windows::Foundation::IInspectable Tag() const;
    void Tag(Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareProvider> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IShareProviderFactory
{
    Windows::ApplicationModel::DataTransfer::ShareProvider Create(param::hstring const& title, Windows::Storage::Streams::RandomAccessStreamReference const& displayIcon, Windows::UI::Color const& backgroundColor, Windows::ApplicationModel::DataTransfer::ShareProviderHandler const& handler) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareProviderFactory> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareProviderFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation
{
    Windows::ApplicationModel::DataTransfer::DataPackageView Data() const;
    Windows::ApplicationModel::DataTransfer::ShareProvider Provider() const;
    void ReportCompleted() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareProviderOperation> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::DataTransfer::ShareProvider> Providers() const;
    Windows::ApplicationModel::DataTransfer::DataPackageView Data() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IShareTargetInfo
{
    hstring AppUserModelId() const;
    Windows::ApplicationModel::DataTransfer::ShareProvider ShareProvider() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IShareTargetInfo> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IShareTargetInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics
{
    hstring AddFile(Windows::Storage::IStorageFile const& file) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> RedeemTokenForFileAsync(param::hstring const& token) const;
    void RemoveFile(param::hstring const& token) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics
{
    hstring Text() const;
    [[deprecated("Uri may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use WebLink or ApplicationLink.")]] hstring Uri() const;
    hstring Html() const;
    hstring Rtf() const;
    hstring Bitmap() const;
    hstring StorageItems() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2
{
    hstring WebLink() const;
    hstring ApplicationLink() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_ITargetApplicationChosenEventArgs
{
    hstring ApplicationName() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ITargetApplicationChosenEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::DataTransfer::IClipboardStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetContent(::IUnknown** content) = 0;
    virtual HRESULT __stdcall SetContent(::IUnknown* content) = 0;
    virtual HRESULT __stdcall Flush() = 0;
    virtual HRESULT __stdcall Clear() = 0;
    virtual HRESULT __stdcall add_ContentChanged(::IUnknown* changeHandler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ContentChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetView(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RequestedOperation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
    virtual HRESULT __stdcall put_RequestedOperation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation> value) = 0;
    virtual HRESULT __stdcall add_OperationCompleted(::IUnknown* handler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_OperationCompleted(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_Destroyed(::IUnknown* handler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_Destroyed(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall SetData(HSTRING formatId, ::IUnknown* value) = 0;
    virtual HRESULT __stdcall SetDataProvider(HSTRING formatId, ::IUnknown* delayRenderer) = 0;
    virtual HRESULT __stdcall SetText(HSTRING value) = 0;
    virtual HRESULT __stdcall SetUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall SetHtmlFormat(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ResourceMap(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetRtf(HSTRING value) = 0;
    virtual HRESULT __stdcall SetBitmap(::IUnknown* value) = 0;
    virtual HRESULT __stdcall SetStorageItemsReadOnly(::IUnknown* value) = 0;
    virtual HRESULT __stdcall SetStorageItems(::IUnknown* value, bool readOnly) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackage2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetApplicationLink(::IUnknown* value) = 0;
    virtual HRESULT __stdcall SetWebLink(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackage3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ShareCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ShareCompleted(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FileTypes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ApplicationName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ApplicationName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ApplicationListingUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ApplicationListingUri(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContentSourceWebLink(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ContentSourceWebLink(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ContentSourceApplicationLink(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ContentSourceApplicationLink(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_PackageFamilyName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Square30x30Logo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Square30x30Logo(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_LogoBackgroundColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall put_LogoBackgroundColor(abi_t<Windows::UI::Color> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnterpriseId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_EnterpriseId(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FileTypes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ApplicationName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ApplicationListingUri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ContentSourceWebLink(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentSourceApplicationLink(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Square30x30Logo(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LogoBackgroundColor(abi_t<Windows::UI::Color>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnterpriseId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackageView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RequestedOperation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
    virtual HRESULT __stdcall ReportOperationCompleted(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation> value) = 0;
    virtual HRESULT __stdcall get_AvailableFormats(::IUnknown** formatIds) = 0;
    virtual HRESULT __stdcall Contains(HSTRING formatId, bool* value) = 0;
    virtual HRESULT __stdcall GetDataAsync(HSTRING formatId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetTextAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetCustomTextAsync(HSTRING formatId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetUriAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetHtmlFormatAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetResourceMapAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetRtfAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetBitmapAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetStorageItemsAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackageView2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetApplicationLinkAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetWebLinkAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackageView3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestAccessWithEnterpriseIdAsync(HSTRING enterpriseId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UnlockAndAssumeEnterpriseIdentity(abi_t<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>* result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataPackageView4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetAcceptedFormatId(HSTRING formatId) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataProviderRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FormatId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetData(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Data(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Deadline(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall FailWithDisplayText(HSTRING value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_DataRequested(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_DataRequested(abi_t<event_token> eventCookie) = 0;
    virtual HRESULT __stdcall add_TargetApplicationChosen(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) = 0;
    virtual HRESULT __stdcall remove_TargetApplicationChosen(abi_t<event_token> eventCookie) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ShareProvidersRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ShareProvidersRequested(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowShareUI() = 0;
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsSupported(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStaticFragment(HSTRING htmlFormat, HSTRING* htmlFragment) = 0;
    virtual HRESULT __stdcall CreateHtmlFormat(HSTRING htmlFragment, HSTRING* htmlFormat) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Operation(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AcceptedFormatId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ShareTarget(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayIcon(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Tag(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Tag(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareProviderFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING title, ::IUnknown* displayIcon, abi_t<Windows::UI::Color> backgroundColor, ::IUnknown* handler, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareProviderOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Provider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ReportCompleted() = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Providers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IShareTargetInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppUserModelId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ShareProvider(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddFile(::IUnknown* file, HSTRING* outToken) = 0;
    virtual HRESULT __stdcall RedeemTokenForFileAsync(HSTRING token, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RemoveFile(HSTRING token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Uri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Html(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Rtf(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Bitmap(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StorageItems(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebLink(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ApplicationLink(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ApplicationName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DataProviderHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* request) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* operation) = 0;
};};

}
