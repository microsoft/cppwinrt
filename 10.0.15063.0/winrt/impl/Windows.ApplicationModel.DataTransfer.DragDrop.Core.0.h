// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

enum class DataPackageOperation : unsigned;
struct DataPackage;
struct DataPackageView;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop {

enum class DragDropModifiers : unsigned;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::DragDrop::Core {

enum class CoreDragUIContentMode : unsigned
{
    Auto = 0x0,
    Deferred = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(CoreDragUIContentMode)

struct ICoreDragDropManager;
struct ICoreDragDropManagerStatics;
struct ICoreDragInfo;
struct ICoreDragInfo2;
struct ICoreDragOperation;
struct ICoreDragOperation2;
struct ICoreDragUIOverride;
struct ICoreDropOperationTarget;
struct ICoreDropOperationTargetRequestedEventArgs;
struct CoreDragDropManager;
struct CoreDragInfo;
struct CoreDragOperation;
struct CoreDragUIOverride;
struct CoreDropOperationTargetRequestedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManager" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragDropManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragInfo2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragOperation2" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDragUIOverride" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTarget" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.ICoreDropOperationTargetRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragDropManager" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragInfo" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragOperation" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIOverride" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDropOperationTargetRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>{ static constexpr auto & value{ L"Windows.ApplicationModel.DataTransfer.DragDrop.Core.CoreDragUIContentMode" }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>{ static constexpr GUID value{ 0x7D56D344,0x8464,0x4FAF,{ 0xAA,0x49,0x37,0xEA,0x6E,0x2D,0x7B,0xD1 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>{ static constexpr GUID value{ 0x9542FDCA,0xDA12,0x4C1C,{ 0x8D,0x06,0x04,0x1D,0xB2,0x97,0x33,0xC3 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>{ static constexpr GUID value{ 0x48353A8B,0xCB50,0x464E,{ 0x95,0x75,0xCD,0x4E,0x3A,0x7A,0xB0,0x28 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>{ static constexpr GUID value{ 0xC54691E5,0xE6FB,0x4D74,{ 0xB4,0xB1,0x8A,0x3C,0x17,0xF2,0x5E,0x9E } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>{ static constexpr GUID value{ 0xCC06DE4F,0x6DB0,0x4E62,{ 0xAB,0x1B,0xA7,0x4A,0x02,0xDC,0x6D,0x85 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>{ static constexpr GUID value{ 0x824B1E2C,0xD99A,0x4FC3,{ 0x85,0x07,0x6C,0x18,0x2F,0x33,0xB4,0x6A } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>{ static constexpr GUID value{ 0x89A85064,0x3389,0x4F4F,{ 0x88,0x97,0x7E,0x8A,0x3F,0xFB,0x3C,0x93 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>{ static constexpr GUID value{ 0xD9126196,0x4C5B,0x417D,{ 0xBB,0x37,0x76,0x38,0x1D,0xEF,0x8D,0xB4 } }; };
template <> struct guid<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>{ static constexpr GUID value{ 0x2ACA929A,0x5E28,0x4EA6,{ 0x82,0x9E,0x29,0x13,0x4E,0x66,0x5D,0x6D } }; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragOperation>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride; };
template <> struct default_interface<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs>{ using type = Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager
{
    event_token TargetRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const;
    using TargetRequested_revoker = event_revoker<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>;
    TargetRequested_revoker TargetRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDropOperationTargetRequestedEventArgs> const& value) const;
    void TargetRequested(event_token const& value) const;
    bool AreConcurrentOperationsEnabled() const;
    void AreConcurrentOperationsEnabled(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics
{
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragDropManager GetForCurrentView() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragDropManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo
{
    Windows::ApplicationModel::DataTransfer::DataPackageView Data() const;
    Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers Modifiers() const;
    Windows::Foundation::Point Position() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation AllowedOperations() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragInfo2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation
{
    Windows::ApplicationModel::DataTransfer::DataPackage Data() const;
    void SetPointerId(uint32_t pointerId) const;
    void SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
    void SetDragUIContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
    Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode DragUIContentMode() const;
    void DragUIContentMode(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> StartAsync() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation AllowedOperations() const;
    void AllowedOperations(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragOperation2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride
{
    void SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap) const;
    void SetContentFromSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& softwareBitmap, Windows::Foundation::Point const& anchorPoint) const;
    bool IsContentVisible() const;
    void IsContentVisible(bool value) const;
    hstring Caption() const;
    void Caption(param::hstring const& value) const;
    bool IsCaptionVisible() const;
    void IsCaptionVisible(bool value) const;
    bool IsGlyphVisible() const;
    void IsGlyphVisible(bool value) const;
    void Clear() const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDragUIOverride<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> EnterAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> OverAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo, Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIOverride const& dragUIOverride) const;
    Windows::Foundation::IAsyncAction LeaveAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> DropAsync(Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragInfo const& dragInfo) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTarget<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs
{
    void SetTarget(Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget const& target) const;
};
template <> struct consume<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_DataTransfer_DragDrop_Core_ICoreDropOperationTargetRequestedEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_TargetRequested(::IUnknown* value, abi_t<event_token>* returnValue) = 0;
    virtual HRESULT __stdcall remove_TargetRequested(abi_t<event_token> value) = 0;
    virtual HRESULT __stdcall get_AreConcurrentOperationsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_AreConcurrentOperationsEnabled(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragDropManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Modifiers(abi_t<Windows::ApplicationModel::DataTransfer::DragDrop::DragDropModifiers>* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Point>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowedOperations(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SetPointerId(uint32_t pointerId) = 0;
    virtual HRESULT __stdcall SetDragUIContentFromSoftwareBitmap(::IUnknown* softwareBitmap) = 0;
    virtual HRESULT __stdcall SetDragUIContentFromSoftwareBitmapWithAnchorPoint(::IUnknown* softwareBitmap, abi_t<Windows::Foundation::Point> anchorPoint) = 0;
    virtual HRESULT __stdcall get_DragUIContentMode(abi_t<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode>* value) = 0;
    virtual HRESULT __stdcall put_DragUIContentMode(abi_t<Windows::ApplicationModel::DataTransfer::DragDrop::Core::CoreDragUIContentMode> value) = 0;
    virtual HRESULT __stdcall StartAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowedOperations(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation>* value) = 0;
    virtual HRESULT __stdcall put_AllowedOperations(abi_t<Windows::ApplicationModel::DataTransfer::DataPackageOperation> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetContentFromSoftwareBitmap(::IUnknown* softwareBitmap) = 0;
    virtual HRESULT __stdcall SetContentFromSoftwareBitmapWithAnchorPoint(::IUnknown* softwareBitmap, abi_t<Windows::Foundation::Point> anchorPoint) = 0;
    virtual HRESULT __stdcall get_IsContentVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsContentVisible(bool value) = 0;
    virtual HRESULT __stdcall get_Caption(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Caption(HSTRING value) = 0;
    virtual HRESULT __stdcall get_IsCaptionVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCaptionVisible(bool value) = 0;
    virtual HRESULT __stdcall get_IsGlyphVisible(bool* value) = 0;
    virtual HRESULT __stdcall put_IsGlyphVisible(bool value) = 0;
    virtual HRESULT __stdcall Clear() = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTarget>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall EnterAsync(::IUnknown* dragInfo, ::IUnknown* dragUIOverride, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall OverAsync(::IUnknown* dragInfo, ::IUnknown* dragUIOverride, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall LeaveAsync(::IUnknown* dragInfo, ::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall DropAsync(::IUnknown* dragInfo, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDropOperationTargetRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetTarget(::IUnknown* target) = 0;
};};

}
