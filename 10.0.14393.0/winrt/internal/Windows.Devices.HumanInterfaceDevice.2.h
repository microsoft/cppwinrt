// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.HumanInterfaceDevice.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_ef60385f_be78_584b_aaef_7829ada2b0de
#define WINRT_GENERIC_ef60385f_be78_584b_aaef_7829ada2b0de
template <> struct __declspec(uuid("ef60385f-be78-584b-aaef-7829ada2b0de")) __declspec(novtable) IAsyncOperation<uint32_t> : impl_IAsyncOperation<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_a76a4fbf_5177_5256_84a8_b31a8dcf1048
#define WINRT_GENERIC_a76a4fbf_5177_5256_84a8_b31a8dcf1048
template <> struct __declspec(uuid("a76a4fbf-5177-5256-84a8-b31a8dcf1048")) __declspec(novtable) IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> : impl_IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_96f1faac_348f_5b8f_a71d_2d650e0b11f2
#define WINRT_GENERIC_96f1faac_348f_5b8f_a71d_2d650e0b11f2
template <> struct __declspec(uuid("96f1faac-348f-5b8f-a71d-2d650e0b11f2")) __declspec(novtable) IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> : impl_IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> {};
#endif

#ifndef WINRT_GENERIC_0e417dac_591a_5de0_afd6_0b2c04c304e7
#define WINRT_GENERIC_0e417dac_591a_5de0_afd6_0b2c04c304e7
template <> struct __declspec(uuid("0e417dac-591a-5de0-afd6-0b2c04c304e7")) __declspec(novtable) IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> : impl_IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b3e28917_cd48_57b3_a0b1_321432e85bd6
#define WINRT_GENERIC_b3e28917_cd48_57b3_a0b1_321432e85bd6
template <> struct __declspec(uuid("b3e28917-cd48-57b3-a0b1-321432e85bd6")) __declspec(novtable) IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> : impl_IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> {};
#endif

#ifndef WINRT_GENERIC_d72fb6f9_42f6_5f45_bfe3_29af247c2e85
#define WINRT_GENERIC_d72fb6f9_42f6_5f45_bfe3_29af247c2e85
template <> struct __declspec(uuid("d72fb6f9-42f6-5f45-bfe3-29af247c2e85")) __declspec(novtable) IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> : impl_IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_aab72786_ec34_536f_a7c5_27394753df2c
#define WINRT_GENERIC_aab72786_ec34_536f_a7c5_27394753df2c
template <> struct __declspec(uuid("aab72786-ec34-536f-a7c5-27394753df2c")) __declspec(novtable) IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> : impl_IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> {};
#endif

#ifndef WINRT_GENERIC_e02ca66c_610a_51b4_aef9_3707b697b985
#define WINRT_GENERIC_e02ca66c_610a_51b4_aef9_3707b697b985
template <> struct __declspec(uuid("e02ca66c-610a-51b4-aef9-3707b697b985")) __declspec(novtable) IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> : impl_IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_31e757c8_8f6a_540b_938b_aba79b6f03ec
#define WINRT_GENERIC_31e757c8_8f6a_540b_938b_aba79b6f03ec
template <> struct __declspec(uuid("31e757c8-8f6a-540b-938b-aba79b6f03ec")) __declspec(novtable) TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> : impl_TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_9343b6e7_e3d2_5e4a_ab2d_2bce4919a6a4
#define WINRT_GENERIC_9343b6e7_e3d2_5e4a_ab2d_2bce4919a6a4
template <> struct __declspec(uuid("9343b6e7-e3d2-5e4a-ab2d-2bce4919a6a4")) __declspec(novtable) AsyncOperationCompletedHandler<uint32_t> : impl_AsyncOperationCompletedHandler<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_b0e8e149_0cb6_55a7_bcc1_d996324d65c4
#define WINRT_GENERIC_b0e8e149_0cb6_55a7_bcc1_d996324d65c4
template <> struct __declspec(uuid("b0e8e149-0cb6-55a7-bcc1-d996324d65c4")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::HumanInterfaceDevice::HidDevice> : impl_AsyncOperationCompletedHandler<Windows::Devices::HumanInterfaceDevice::HidDevice> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_cefcee70_c7ff_57c1_a675_a0df8976a988
#define WINRT_GENERIC_cefcee70_c7ff_57c1_a675_a0df8976a988
template <> struct __declspec(uuid("cefcee70-c7ff-57c1-a675-a0df8976a988")) __declspec(novtable) IIterator<Windows::Devices::HumanInterfaceDevice::HidCollection> : impl_IIterator<Windows::Devices::HumanInterfaceDevice::HidCollection> {};
#endif

#ifndef WINRT_GENERIC_bbeada0f_708f_5b5e_a017_5c64ffb96b69
#define WINRT_GENERIC_bbeada0f_708f_5b5e_a017_5c64ffb96b69
template <> struct __declspec(uuid("bbeada0f-708f-5b5e-a017-5c64ffb96b69")) __declspec(novtable) IIterable<Windows::Devices::HumanInterfaceDevice::HidCollection> : impl_IIterable<Windows::Devices::HumanInterfaceDevice::HidCollection> {};
#endif

#ifndef WINRT_GENERIC_5cde3c23_d054_53d6_abf1_41e73379b472
#define WINRT_GENERIC_5cde3c23_d054_53d6_abf1_41e73379b472
template <> struct __declspec(uuid("5cde3c23-d054-53d6-abf1-41e73379b472")) __declspec(novtable) IIterator<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> : impl_IIterator<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> {};
#endif

#ifndef WINRT_GENERIC_1111e585_5ab0_5d2b_8aed_b6d6186d1c3f
#define WINRT_GENERIC_1111e585_5ab0_5d2b_8aed_b6d6186d1c3f
template <> struct __declspec(uuid("1111e585-5ab0-5d2b-8aed-b6d6186d1c3f")) __declspec(novtable) IIterable<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> : impl_IIterable<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_01c83770_03ab_5576_98b4_8d75ce1a9885
#define WINRT_GENERIC_01c83770_03ab_5576_98b4_8d75ce1a9885
template <> struct __declspec(uuid("01c83770-03ab-5576-98b4-8d75ce1a9885")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::HumanInterfaceDevice::HidInputReport> : impl_AsyncOperationCompletedHandler<Windows::Devices::HumanInterfaceDevice::HidInputReport> {};
#endif

#ifndef WINRT_GENERIC_db643555_3d16_57fe_b7ef_2bdbd719fdbf
#define WINRT_GENERIC_db643555_3d16_57fe_b7ef_2bdbd719fdbf
template <> struct __declspec(uuid("db643555-3d16-57fe-b7ef-2bdbd719fdbf")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> : impl_AsyncOperationCompletedHandler<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_203203b0_b7f4_542d_b0d0_9caa1fb55d7f
#define WINRT_GENERIC_203203b0_b7f4_542d_b0d0_9caa1fb55d7f
template <> struct __declspec(uuid("203203b0-b7f4-542d-b0d0-9caa1fb55d7f")) __declspec(novtable) IIterator<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> : impl_IIterator<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> {};
#endif

#ifndef WINRT_GENERIC_d0ff0fed_a156_58bf_9411_5777df9d57bf
#define WINRT_GENERIC_d0ff0fed_a156_58bf_9411_5777df9d57bf
template <> struct __declspec(uuid("d0ff0fed-a156-58bf-9411-5777df9d57bf")) __declspec(novtable) IIterable<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> : impl_IIterable<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> {};
#endif

#ifndef WINRT_GENERIC_52b9c36e_7d95_5d1c_acab_23c19ea76f01
#define WINRT_GENERIC_52b9c36e_7d95_5d1c_acab_23c19ea76f01
template <> struct __declspec(uuid("52b9c36e-7d95-5d1c-acab-23c19ea76f01")) __declspec(novtable) IIterator<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> : impl_IIterator<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> {};
#endif

#ifndef WINRT_GENERIC_868f060d_e0d4_571b_b2f7_431d6984a513
#define WINRT_GENERIC_868f060d_e0d4_571b_b2f7_431d6984a513
template <> struct __declspec(uuid("868f060d-e0d4-571b-b2f7-431d6984a513")) __declspec(novtable) IIterable<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> : impl_IIterable<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> {};
#endif


}

namespace Windows::Devices::HumanInterfaceDevice {

template <typename D>
struct WINRT_EBO impl_IHidBooleanControl
{
    uint32_t Id() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    bool IsActive() const;
    void IsActive(bool value) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription ControlDescription() const;
};

template <typename D>
struct WINRT_EBO impl_IHidBooleanControlDescription
{
    uint32_t Id() const;
    uint16_t ReportId() const;
    Windows::Devices::HumanInterfaceDevice::HidReportType ReportType() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> ParentCollections() const;
};

template <typename D>
struct WINRT_EBO impl_IHidBooleanControlDescription2
{
    bool IsAbsolute() const;
};

template <typename D>
struct WINRT_EBO impl_IHidCollection
{
    uint32_t Id() const;
    Windows::Devices::HumanInterfaceDevice::HidCollectionType Type() const;
    uint32_t UsagePage() const;
    uint32_t UsageId() const;
};

template <typename D>
struct WINRT_EBO impl_IHidDevice
{
    uint16_t VendorId() const;
    uint16_t ProductId() const;
    uint16_t Version() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> GetInputReportAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidInputReport> GetInputReportAsync(uint16_t reportId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> GetFeatureReportAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidFeatureReport> GetFeatureReportAsync(uint16_t reportId) const;
    Windows::Devices::HumanInterfaceDevice::HidOutputReport CreateOutputReport() const;
    Windows::Devices::HumanInterfaceDevice::HidOutputReport CreateOutputReport(uint16_t reportId) const;
    Windows::Devices::HumanInterfaceDevice::HidFeatureReport CreateFeatureReport() const;
    Windows::Devices::HumanInterfaceDevice::HidFeatureReport CreateFeatureReport(uint16_t reportId) const;
    Windows::Foundation::IAsyncOperation<uint32_t> SendOutputReportAsync(const Windows::Devices::HumanInterfaceDevice::HidOutputReport & outputReport) const;
    Windows::Foundation::IAsyncOperation<uint32_t> SendFeatureReportAsync(const Windows::Devices::HumanInterfaceDevice::HidFeatureReport & featureReport) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> GetBooleanControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType reportType, uint16_t usagePage, uint16_t usageId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> GetNumericControlDescriptions(Windows::Devices::HumanInterfaceDevice::HidReportType reportType, uint16_t usagePage, uint16_t usageId) const;
    event_token InputReportReceived(const Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> & reportHandler) const;
    using InputReportReceived_revoker = event_revoker<IHidDevice>;
    InputReportReceived_revoker InputReportReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::HumanInterfaceDevice::HidDevice, Windows::Devices::HumanInterfaceDevice::HidInputReportReceivedEventArgs> & reportHandler) const;
    void InputReportReceived(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IHidDeviceStatics
{
    hstring GetDeviceSelector(uint16_t usagePage, uint16_t usageId) const;
    hstring GetDeviceSelector(uint16_t usagePage, uint16_t usageId, uint16_t vendorId, uint16_t productId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::HumanInterfaceDevice::HidDevice> FromIdAsync(hstring_ref deviceId, Windows::Storage::FileAccessMode accessMode) const;
};

template <typename D>
struct WINRT_EBO impl_IHidFeatureReport
{
    uint16_t Id() const;
    Windows::Storage::Streams::IBuffer Data() const;
    void Data(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription & controlDescription) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription & controlDescription) const;
};

template <typename D>
struct WINRT_EBO impl_IHidInputReport
{
    uint16_t Id() const;
    Windows::Storage::Streams::IBuffer Data() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> ActivatedBooleanControls() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControl> TransitionedBooleanControls() const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription & controlDescription) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription & controlDescription) const;
};

template <typename D>
struct WINRT_EBO impl_IHidInputReportReceivedEventArgs
{
    Windows::Devices::HumanInterfaceDevice::HidInputReport Report() const;
};

template <typename D>
struct WINRT_EBO impl_IHidNumericControl
{
    uint32_t Id() const;
    bool IsGrouped() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    int64_t Value() const;
    void Value(int64_t value) const;
    int64_t ScaledValue() const;
    void ScaledValue(int64_t value) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription ControlDescription() const;
};

template <typename D>
struct WINRT_EBO impl_IHidNumericControlDescription
{
    uint32_t Id() const;
    uint16_t ReportId() const;
    Windows::Devices::HumanInterfaceDevice::HidReportType ReportType() const;
    uint32_t ReportSize() const;
    uint32_t ReportCount() const;
    uint16_t UsagePage() const;
    uint16_t UsageId() const;
    int32_t LogicalMinimum() const;
    int32_t LogicalMaximum() const;
    int32_t PhysicalMinimum() const;
    int32_t PhysicalMaximum() const;
    uint32_t UnitExponent() const;
    uint32_t Unit() const;
    bool IsAbsolute() const;
    bool HasNull() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidCollection> ParentCollections() const;
};

template <typename D>
struct WINRT_EBO impl_IHidOutputReport
{
    uint16_t Id() const;
    Windows::Storage::Streams::IBuffer Data() const;
    void Data(const Windows::Storage::Streams::IBuffer & value) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidBooleanControl GetBooleanControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription & controlDescription) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControl(uint16_t usagePage, uint16_t usageId) const;
    Windows::Devices::HumanInterfaceDevice::HidNumericControl GetNumericControlByDescription(const Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription & controlDescription) const;
};

struct IHidBooleanControl :
    Windows::IInspectable,
    impl::consume<IHidBooleanControl>
{
    IHidBooleanControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidBooleanControl>(m_ptr); }
};

struct IHidBooleanControlDescription :
    Windows::IInspectable,
    impl::consume<IHidBooleanControlDescription>
{
    IHidBooleanControlDescription(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidBooleanControlDescription>(m_ptr); }
};

struct IHidBooleanControlDescription2 :
    Windows::IInspectable,
    impl::consume<IHidBooleanControlDescription2>
{
    IHidBooleanControlDescription2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidBooleanControlDescription2>(m_ptr); }
};

struct IHidCollection :
    Windows::IInspectable,
    impl::consume<IHidCollection>
{
    IHidCollection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidCollection>(m_ptr); }
};

struct IHidDevice :
    Windows::IInspectable,
    impl::consume<IHidDevice>,
    impl::require<IHidDevice, Windows::Foundation::IClosable>
{
    IHidDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidDevice>(m_ptr); }
};

struct IHidDeviceStatics :
    Windows::IInspectable,
    impl::consume<IHidDeviceStatics>
{
    IHidDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidDeviceStatics>(m_ptr); }
};

struct IHidFeatureReport :
    Windows::IInspectable,
    impl::consume<IHidFeatureReport>
{
    IHidFeatureReport(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidFeatureReport>(m_ptr); }
};

struct IHidInputReport :
    Windows::IInspectable,
    impl::consume<IHidInputReport>
{
    IHidInputReport(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidInputReport>(m_ptr); }
};

struct IHidInputReportReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IHidInputReportReceivedEventArgs>
{
    IHidInputReportReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidInputReportReceivedEventArgs>(m_ptr); }
};

struct IHidNumericControl :
    Windows::IInspectable,
    impl::consume<IHidNumericControl>
{
    IHidNumericControl(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidNumericControl>(m_ptr); }
};

struct IHidNumericControlDescription :
    Windows::IInspectable,
    impl::consume<IHidNumericControlDescription>
{
    IHidNumericControlDescription(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidNumericControlDescription>(m_ptr); }
};

struct IHidOutputReport :
    Windows::IInspectable,
    impl::consume<IHidOutputReport>
{
    IHidOutputReport(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHidOutputReport>(m_ptr); }
};

}

}
