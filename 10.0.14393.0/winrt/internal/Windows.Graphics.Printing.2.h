// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.Printing.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_4cc141d4_c0d9_5220_b1ce_80fff3bd2d44
#define WINRT_GENERIC_4cc141d4_c0d9_5220_b1ce_80fff3bd2d44
template <> struct __declspec(uuid("4cc141d4-c0d9-5220-b1ce-80fff3bd2d44")) __declspec(novtable) TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> : impl_TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_c08d0524_5899_536c_8f46_55fdaa4cf78b
#define WINRT_GENERIC_c08d0524_5899_536c_8f46_55fdaa4cf78b
template <> struct __declspec(uuid("c08d0524-5899-536c-8f46-55fdaa4cf78b")) __declspec(novtable) TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> : impl_TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> {};
#endif

#ifndef WINRT_GENERIC_b0b02549_b9ad_5226_898a_7b563b46640c
#define WINRT_GENERIC_b0b02549_b9ad_5226_898a_7b563b46640c
template <> struct __declspec(uuid("b0b02549-b9ad-5226-898a-7b563b46640c")) __declspec(novtable) TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> : impl_TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_8a8cb877_70c5_54ce_8b42_d790e2914859
#define WINRT_GENERIC_8a8cb877_70c5_54ce_8b42_d790e2914859
template <> struct __declspec(uuid("8a8cb877-70c5-54ce-8b42-d790e2914859")) __declspec(novtable) TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> : impl_TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif


}

namespace Windows::Graphics::Printing {

template <typename D>
struct WINRT_EBO impl_IPrintDocumentSource
{
};

template <typename D>
struct WINRT_EBO impl_IPrintManager
{
    event_token PrintTaskRequested(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> & eventHandler) const;
    using PrintTaskRequested_revoker = event_revoker<IPrintManager>;
    PrintTaskRequested_revoker PrintTaskRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> & eventHandler) const;
    void PrintTaskRequested(event_token eventCookie) const;
};

template <typename D>
struct WINRT_EBO impl_IPrintManagerStatic
{
    Windows::Graphics::Printing::PrintManager GetForCurrentView() const;
    Windows::Foundation::IAsyncOperation<bool> ShowPrintUIAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintManagerStatic2
{
    bool IsSupported() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintPageInfo
{
    void MediaSize(Windows::Graphics::Printing::PrintMediaSize value) const;
    Windows::Graphics::Printing::PrintMediaSize MediaSize() const;
    void PageSize(const Windows::Foundation::Size & value) const;
    Windows::Foundation::Size PageSize() const;
    void DpiX(uint32_t value) const;
    uint32_t DpiX() const;
    void DpiY(uint32_t value) const;
    uint32_t DpiY() const;
    void Orientation(Windows::Graphics::Printing::PrintOrientation value) const;
    Windows::Graphics::Printing::PrintOrientation Orientation() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTask
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySet Properties() const;
    Windows::Graphics::Printing::IPrintDocumentSource Source() const;
    Windows::Graphics::Printing::PrintTaskOptions Options() const;
    event_token Previewing(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> & eventHandler) const;
    using Previewing_revoker = event_revoker<IPrintTask>;
    Previewing_revoker Previewing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> & eventHandler) const;
    void Previewing(event_token eventCookie) const;
    event_token Submitting(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> & eventHandler) const;
    using Submitting_revoker = event_revoker<IPrintTask>;
    Submitting_revoker Submitting(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::IInspectable> & eventHandler) const;
    void Submitting(event_token eventCookie) const;
    event_token Progressing(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> & eventHandler) const;
    using Progressing_revoker = event_revoker<IPrintTask>;
    Progressing_revoker Progressing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> & eventHandler) const;
    void Progressing(event_token eventCookie) const;
    event_token Completed(const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> & eventHandler) const;
    using Completed_revoker = event_revoker<IPrintTask>;
    Completed_revoker Completed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> & eventHandler) const;
    void Completed(event_token eventCookie) const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTask2
{
    void IsPreviewEnabled(bool value) const;
    bool IsPreviewEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskCompletedEventArgs
{
    Windows::Graphics::Printing::PrintTaskCompletion Completion() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskOptions
{
    void Bordering(Windows::Graphics::Printing::PrintBordering value) const;
    Windows::Graphics::Printing::PrintBordering Bordering() const;
    Windows::Storage::Streams::IRandomAccessStream GetPagePrintTicket(const Windows::Graphics::Printing::PrintPageInfo & printPageInfo) const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskOptionsCore
{
    Windows::Graphics::Printing::PrintPageDescription GetPageDescription(uint32_t jobPageNumber) const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskOptionsCoreProperties
{
    void MediaSize(Windows::Graphics::Printing::PrintMediaSize value) const;
    Windows::Graphics::Printing::PrintMediaSize MediaSize() const;
    void MediaType(Windows::Graphics::Printing::PrintMediaType value) const;
    Windows::Graphics::Printing::PrintMediaType MediaType() const;
    void Orientation(Windows::Graphics::Printing::PrintOrientation value) const;
    Windows::Graphics::Printing::PrintOrientation Orientation() const;
    void PrintQuality(Windows::Graphics::Printing::PrintQuality value) const;
    Windows::Graphics::Printing::PrintQuality PrintQuality() const;
    void ColorMode(Windows::Graphics::Printing::PrintColorMode value) const;
    Windows::Graphics::Printing::PrintColorMode ColorMode() const;
    void Duplex(Windows::Graphics::Printing::PrintDuplex value) const;
    Windows::Graphics::Printing::PrintDuplex Duplex() const;
    void Collation(Windows::Graphics::Printing::PrintCollation value) const;
    Windows::Graphics::Printing::PrintCollation Collation() const;
    void Staple(Windows::Graphics::Printing::PrintStaple value) const;
    Windows::Graphics::Printing::PrintStaple Staple() const;
    void HolePunch(Windows::Graphics::Printing::PrintHolePunch value) const;
    Windows::Graphics::Printing::PrintHolePunch HolePunch() const;
    void Binding(Windows::Graphics::Printing::PrintBinding value) const;
    Windows::Graphics::Printing::PrintBinding Binding() const;
    uint32_t MinCopies() const;
    uint32_t MaxCopies() const;
    void NumberOfCopies(uint32_t value) const;
    uint32_t NumberOfCopies() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskOptionsCoreUIConfiguration
{
    Windows::Foundation::Collections::IVector<hstring> DisplayedOptions() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskProgressingEventArgs
{
    uint32_t DocumentPageCount() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskRequest
{
    Windows::Foundation::DateTime Deadline() const;
    Windows::Graphics::Printing::PrintTask CreatePrintTask(hstring_ref title, const Windows::Graphics::Printing::PrintTaskSourceRequestedHandler & handler) const;
    Windows::Graphics::Printing::PrintTaskRequestedDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskRequestedDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskRequestedEventArgs
{
    Windows::Graphics::Printing::PrintTaskRequest Request() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskSourceRequestedArgs
{
    Windows::Foundation::DateTime Deadline() const;
    void SetSource(const Windows::Graphics::Printing::IPrintDocumentSource & source) const;
    Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskSourceRequestedDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IPrintTaskTargetDeviceSupport
{
    void IsPrinterTargetEnabled(bool value) const;
    bool IsPrinterTargetEnabled() const;
    void Is3DManufacturingTargetEnabled(bool value) const;
    bool Is3DManufacturingTargetEnabled() const;
};

template <typename D>
struct WINRT_EBO impl_IStandardPrintTaskOptionsStatic
{
    hstring MediaSize() const;
    hstring MediaType() const;
    hstring Orientation() const;
    hstring PrintQuality() const;
    hstring ColorMode() const;
    hstring Duplex() const;
    hstring Collation() const;
    hstring Staple() const;
    hstring HolePunch() const;
    hstring Binding() const;
    hstring Copies() const;
    hstring NUp() const;
    hstring InputBin() const;
};

template <typename D>
struct WINRT_EBO impl_IStandardPrintTaskOptionsStatic2
{
    hstring Bordering() const;
};

struct PrintTaskSourceRequestedHandler : Windows::IUnknown
{
    PrintTaskSourceRequestedHandler(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<PrintTaskSourceRequestedHandler>(m_ptr); }
    template <typename L> PrintTaskSourceRequestedHandler(L lambda);
    template <typename F> PrintTaskSourceRequestedHandler (F * function);
    template <typename O, typename M> PrintTaskSourceRequestedHandler(O * object, M method);
    void operator()(const Windows::Graphics::Printing::PrintTaskSourceRequestedArgs & args) const;
};

struct IPrintDocumentSource :
    Windows::IInspectable,
    impl::consume<IPrintDocumentSource>
{
    IPrintDocumentSource(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintDocumentSource>(m_ptr); }
};

struct IPrintManager :
    Windows::IInspectable,
    impl::consume<IPrintManager>
{
    IPrintManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintManager>(m_ptr); }
};

struct IPrintManagerStatic :
    Windows::IInspectable,
    impl::consume<IPrintManagerStatic>
{
    IPrintManagerStatic(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintManagerStatic>(m_ptr); }
};

struct IPrintManagerStatic2 :
    Windows::IInspectable,
    impl::consume<IPrintManagerStatic2>
{
    IPrintManagerStatic2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintManagerStatic2>(m_ptr); }
};

struct IPrintPageInfo :
    Windows::IInspectable,
    impl::consume<IPrintPageInfo>
{
    IPrintPageInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintPageInfo>(m_ptr); }
};

struct IPrintTask :
    Windows::IInspectable,
    impl::consume<IPrintTask>
{
    IPrintTask(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTask>(m_ptr); }
};

struct IPrintTask2 :
    Windows::IInspectable,
    impl::consume<IPrintTask2>
{
    IPrintTask2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTask2>(m_ptr); }
};

struct IPrintTaskCompletedEventArgs :
    Windows::IInspectable,
    impl::consume<IPrintTaskCompletedEventArgs>
{
    IPrintTaskCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskCompletedEventArgs>(m_ptr); }
};

struct IPrintTaskOptions :
    Windows::IInspectable,
    impl::consume<IPrintTaskOptions>
{
    IPrintTaskOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskOptions>(m_ptr); }
};

struct IPrintTaskOptionsCore :
    Windows::IInspectable,
    impl::consume<IPrintTaskOptionsCore>
{
    IPrintTaskOptionsCore(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskOptionsCore>(m_ptr); }
};

struct IPrintTaskOptionsCoreProperties :
    Windows::IInspectable,
    impl::consume<IPrintTaskOptionsCoreProperties>
{
    IPrintTaskOptionsCoreProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskOptionsCoreProperties>(m_ptr); }
};

struct IPrintTaskOptionsCoreUIConfiguration :
    Windows::IInspectable,
    impl::consume<IPrintTaskOptionsCoreUIConfiguration>
{
    IPrintTaskOptionsCoreUIConfiguration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskOptionsCoreUIConfiguration>(m_ptr); }
};

struct IPrintTaskProgressingEventArgs :
    Windows::IInspectable,
    impl::consume<IPrintTaskProgressingEventArgs>
{
    IPrintTaskProgressingEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskProgressingEventArgs>(m_ptr); }
};

struct IPrintTaskRequest :
    Windows::IInspectable,
    impl::consume<IPrintTaskRequest>
{
    IPrintTaskRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskRequest>(m_ptr); }
};

struct IPrintTaskRequestedDeferral :
    Windows::IInspectable,
    impl::consume<IPrintTaskRequestedDeferral>
{
    IPrintTaskRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskRequestedDeferral>(m_ptr); }
};

struct IPrintTaskRequestedEventArgs :
    Windows::IInspectable,
    impl::consume<IPrintTaskRequestedEventArgs>
{
    IPrintTaskRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskRequestedEventArgs>(m_ptr); }
};

struct IPrintTaskSourceRequestedArgs :
    Windows::IInspectable,
    impl::consume<IPrintTaskSourceRequestedArgs>
{
    IPrintTaskSourceRequestedArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskSourceRequestedArgs>(m_ptr); }
};

struct IPrintTaskSourceRequestedDeferral :
    Windows::IInspectable,
    impl::consume<IPrintTaskSourceRequestedDeferral>
{
    IPrintTaskSourceRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskSourceRequestedDeferral>(m_ptr); }
};

struct IPrintTaskTargetDeviceSupport :
    Windows::IInspectable,
    impl::consume<IPrintTaskTargetDeviceSupport>
{
    IPrintTaskTargetDeviceSupport(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrintTaskTargetDeviceSupport>(m_ptr); }
};

struct IStandardPrintTaskOptionsStatic :
    Windows::IInspectable,
    impl::consume<IStandardPrintTaskOptionsStatic>
{
    IStandardPrintTaskOptionsStatic(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStandardPrintTaskOptionsStatic>(m_ptr); }
};

struct IStandardPrintTaskOptionsStatic2 :
    Windows::IInspectable,
    impl::consume<IStandardPrintTaskOptionsStatic2>
{
    IStandardPrintTaskOptionsStatic2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IStandardPrintTaskOptionsStatic2>(m_ptr); }
};

}

}
