// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

struct DataPackageView;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct RandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget {

struct IQuickLink;
struct IShareOperation;
struct IShareOperation2;
struct QuickLink;
struct ShareOperation;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.IQuickLink" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.IShareOperation" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.IShareOperation2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.QuickLink" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.ShareTarget.ShareOperation" }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>{ static constexpr GUID value{ 0x603E4308,0xF0BE,0x4ADC,{ 0xAC,0xC9,0x8B,0x27,0xAB,0x9C,0xF5,0x56 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>{ static constexpr GUID value{ 0x2246BAB8,0xD0F8,0x41C1,{ 0xA8,0x2A,0x41,0x37,0xDB,0x65,0x04,0xFB } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>{ static constexpr GUID value{ 0x0FFB97C1,0x9778,0x4A09,{ 0x8E,0x5B,0xCB,0x5E,0x48,0x2D,0x05,0x55 } }; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink>{ using type = Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::ShareTarget::ShareOperation>{ using type = Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink
{
    hstring Title() const;
    void Title(param::hstring const& value) const;
    Windows::Storage::Streams::RandomAccessStreamReference Thumbnail() const;
    void Thumbnail(Windows::Storage::Streams::RandomAccessStreamReference const& value) const;
    hstring Id() const;
    void Id(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<hstring> SupportedDataFormats() const;
    Windows::Foundation::Collections::IVector<hstring> SupportedFileTypes() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation
{
    Windows::ApplicationModel::DataTransfer::DataPackageView Data() const;
    hstring QuickLinkId() const;
    void RemoveThisQuickLink() const;
    void ReportStarted() const;
    void ReportDataRetrieved() const;
    void ReportSubmittedBackgroundTask() const;
    void ReportCompleted(Windows::ApplicationModel::DataTransfer::ShareTarget::QuickLink const& quicklink) const;
    void ReportCompleted() const;
    void ReportError(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation2
{
    void DismissUI() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation2<D>; };

template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Title(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Thumbnail(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SupportedDataFormats(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedFileTypes(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_QuickLinkId(HSTRING* value) = 0;
    virtual HRESULT __stdcall RemoveThisQuickLink() = 0;
    virtual HRESULT __stdcall ReportStarted() = 0;
    virtual HRESULT __stdcall ReportDataRetrieved() = 0;
    virtual HRESULT __stdcall ReportSubmittedBackgroundTask() = 0;
    virtual HRESULT __stdcall ReportCompletedWithQuickLink(::IUnknown* quicklink) = 0;
    virtual HRESULT __stdcall ReportCompleted() = 0;
    virtual HRESULT __stdcall ReportError(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DismissUI() = 0;
};};

}
