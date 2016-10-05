// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Appointments.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
#define WINRT_GENERIC_cdb5efb3_5788_509d_9be1_71ccb8a3362a
template <> struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a")) __declspec(novtable) IAsyncOperation<bool> : impl_IAsyncOperation<bool> {};
#endif

#ifndef WINRT_GENERIC_3e1fe603_f897_5263_b328_0806426b8a79
#define WINRT_GENERIC_3e1fe603_f897_5263_b328_0806426b8a79
template <> struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79")) __declspec(novtable) IAsyncOperation<hstring> : impl_IAsyncOperation<hstring> {};
#endif

#ifndef WINRT_GENERIC_63798415_4d1f_5fc7_8729_79a282bceca4
#define WINRT_GENERIC_63798415_4d1f_5fc7_8729_79a282bceca4
template <> struct __declspec(uuid("63798415-4d1f-5fc7-8729-79a282bceca4")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> : impl_IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> {};
#endif

#ifndef WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
#define WINRT_GENERIC_513ef3af_e784_5325_a91e_97c2b8111cf3
template <> struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3")) __declspec(novtable) IReference<uint32_t> : impl_IReference<uint32_t> {};
#endif

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif

#ifndef WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
#define WINRT_GENERIC_604d0c4c_91de_5c2a_935f_362f13eaf800
template <> struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800")) __declspec(novtable) IReference<Windows::Foundation::TimeSpan> : impl_IReference<Windows::Foundation::TimeSpan> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_70f4b32e_f91e_55bb_9a92_0246da734bb0
#define WINRT_GENERIC_70f4b32e_f91e_55bb_9a92_0246da734bb0
template <> struct __declspec(uuid("70f4b32e-f91e-55bb-9a92-0246da734bb0")) __declspec(novtable) IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> : impl_IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> {};
#endif

#ifndef WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
#define WINRT_GENERIC_98b9acc1_4b56_532e_ac73_03d5291cca90
template <> struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90")) __declspec(novtable) IVector<hstring> : impl_IVector<hstring> {};
#endif

#ifndef WINRT_GENERIC_61021758_9e37_5a86_a832_aab31f32692b
#define WINRT_GENERIC_61021758_9e37_5a86_a832_aab31f32692b
template <> struct __declspec(uuid("61021758-9e37-5a86-a832-aab31f32692b")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Appointments::Appointment> : impl_IVectorView<Windows::ApplicationModel::Appointments::Appointment> {};
#endif

#ifndef WINRT_GENERIC_e5030866_08d8_56be_a21b_c5bf80d70360
#define WINRT_GENERIC_e5030866_08d8_56be_a21b_c5bf80d70360
template <> struct __declspec(uuid("e5030866-08d8-56be-a21b-c5bf80d70360")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Appointments::AppointmentException> : impl_IVectorView<Windows::ApplicationModel::Appointments::AppointmentException> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_0c5732f8_5bb9_5bb3_93e5_b87e43e0cd6a
#define WINRT_GENERIC_0c5732f8_5bb9_5bb3_93e5_b87e43e0cd6a
template <> struct __declspec(uuid("0c5732f8-5bb9-5bb3-93e5-b87e43e0cd6a")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> : impl_IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_fb9718a9_f059_52b0_a904_1a65e4281e40
#define WINRT_GENERIC_fb9718a9_f059_52b0_a904_1a65e4281e40
template <> struct __declspec(uuid("fb9718a9-f059-52b0-a904-1a65e4281e40")) __declspec(novtable) IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> : impl_IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_bd1308de_6d2e_5541_b254_bdb61839bac1
#define WINRT_GENERIC_bd1308de_6d2e_5541_b254_bdb61839bac1
template <> struct __declspec(uuid("bd1308de-6d2e-5541-b254-bdb61839bac1")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable> : impl_TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_4f9dd4e5_c3ae_5269_aff5_fe35cd50c3bb
#define WINRT_GENERIC_4f9dd4e5_c3ae_5269_aff5_fe35cd50c3bb
template <> struct __declspec(uuid("4f9dd4e5-c3ae-5269-aff5-fe35cd50c3bb")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange> : impl_IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_6bb17a95_918e_5ad0_bbc2_bcc5fa1ff936
#define WINRT_GENERIC_6bb17a95_918e_5ad0_bbc2_bcc5fa1ff936
template <> struct __declspec(uuid("6bb17a95-918e-5ad0-bbc2-bcc5fa1ff936")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> : impl_IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_774512d3_a564_5f8d_b104_3ec8f2a1104f
#define WINRT_GENERIC_774512d3_a564_5f8d_b104_3ec8f2a1104f
template <> struct __declspec(uuid("774512d3-a564-5f8d-b104-3ec8f2a1104f")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar> : impl_IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b376080f_e5b2_5ae2_9901_86cf77ba5d00
#define WINRT_GENERIC_b376080f_e5b2_5ae2_9901_86cf77ba5d00
template <> struct __declspec(uuid("b376080f-e5b2-5ae2-9901-86cf77ba5d00")) __declspec(novtable) IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> : impl_IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
#define WINRT_GENERIC_2f13c006_a03a_5f69_b090_75a43e33423e
template <> struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e")) __declspec(novtable) IVectorView<hstring> : impl_IVectorView<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_9e628351_c639_5cef_ab1d_8beae9d75d52
#define WINRT_GENERIC_9e628351_c639_5cef_ab1d_8beae9d75d52
template <> struct __declspec(uuid("9e628351-c639-5cef-ab1d-8beae9d75d52")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_ba2f633a_5182_5eda_8e2e_a66e55b320ce
#define WINRT_GENERIC_ba2f633a_5182_5eda_8e2e_a66e55b320ce
template <> struct __declspec(uuid("ba2f633a-5182-5eda-8e2e-a66e55b320ce")) __declspec(novtable) IVectorView<Windows::ApplicationModel::Appointments::AppointmentInvitee> : impl_IVectorView<Windows::ApplicationModel::Appointments::AppointmentInvitee> {};
#endif

#ifndef WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
#define WINRT_GENERIC_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e
template <> struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e")) __declspec(novtable) IIterable<hstring> : impl_IIterable<hstring> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
#define WINRT_GENERIC_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a
template <> struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a")) __declspec(novtable) AsyncOperationCompletedHandler<bool> : impl_AsyncOperationCompletedHandler<bool> {};
#endif

#ifndef WINRT_GENERIC_b79a741f_7fb5_50ae_9e99_911201ec3d41
#define WINRT_GENERIC_b79a741f_7fb5_50ae_9e99_911201ec3d41
template <> struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41")) __declspec(novtable) AsyncOperationCompletedHandler<hstring> : impl_AsyncOperationCompletedHandler<hstring> {};
#endif

#ifndef WINRT_GENERIC_bccf6d2a_ab72_5f23_b7d5_4c2c9bd45b79
#define WINRT_GENERIC_bccf6d2a_ab72_5f23_b7d5_4c2c9bd45b79
template <> struct __declspec(uuid("bccf6d2a-ab72-5f23-b7d5-4c2c9bd45b79")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Appointments::AppointmentStore> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Appointments::AppointmentStore> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_57e35198_1b41_54da_adaf_50ef1e93fded
#define WINRT_GENERIC_57e35198_1b41_54da_adaf_50ef1e93fded
template <> struct __declspec(uuid("57e35198-1b41-54da-adaf-50ef1e93fded")) __declspec(novtable) IIterator<Windows::ApplicationModel::Appointments::AppointmentInvitee> : impl_IIterator<Windows::ApplicationModel::Appointments::AppointmentInvitee> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_386a5922_49fc_53b6_8bed_4c9ff9fe6e01
#define WINRT_GENERIC_386a5922_49fc_53b6_8bed_4c9ff9fe6e01
template <> struct __declspec(uuid("386a5922-49fc-53b6-8bed-4c9ff9fe6e01")) __declspec(novtable) IIterator<Windows::ApplicationModel::Appointments::Appointment> : impl_IIterator<Windows::ApplicationModel::Appointments::Appointment> {};
#endif

#ifndef WINRT_GENERIC_b9802bba_ff53_5d37_8cd7_e56162f12156
#define WINRT_GENERIC_b9802bba_ff53_5d37_8cd7_e56162f12156
template <> struct __declspec(uuid("b9802bba-ff53-5d37-8cd7-e56162f12156")) __declspec(novtable) IIterable<Windows::ApplicationModel::Appointments::Appointment> : impl_IIterable<Windows::ApplicationModel::Appointments::Appointment> {};
#endif

#ifndef WINRT_GENERIC_e58c63db_d9d5_5fa5_8790_29846de54fa4
#define WINRT_GENERIC_e58c63db_d9d5_5fa5_8790_29846de54fa4
template <> struct __declspec(uuid("e58c63db-d9d5-5fa5-8790-29846de54fa4")) __declspec(novtable) IIterator<Windows::ApplicationModel::Appointments::AppointmentException> : impl_IIterator<Windows::ApplicationModel::Appointments::AppointmentException> {};
#endif

#ifndef WINRT_GENERIC_caac41d6_6c65_5fd8_b783_eb9d9a4272b8
#define WINRT_GENERIC_caac41d6_6c65_5fd8_b783_eb9d9a4272b8
template <> struct __declspec(uuid("caac41d6-6c65-5fd8-b783-eb9d9a4272b8")) __declspec(novtable) IIterable<Windows::ApplicationModel::Appointments::AppointmentException> : impl_IIterable<Windows::ApplicationModel::Appointments::AppointmentException> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_b640ed04_9331_5b28_9247_0146bcf5b72a
#define WINRT_GENERIC_b640ed04_9331_5b28_9247_0146bcf5b72a
template <> struct __declspec(uuid("b640ed04-9331-5b28-9247-0146bcf5b72a")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Appointments::Appointment> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Appointments::Appointment> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_16a427bf_e5b0_5662_9279_caa8ed8481a6
#define WINRT_GENERIC_16a427bf_e5b0_5662_9279_caa8ed8481a6
template <> struct __declspec(uuid("16a427bf-e5b0-5662-9279-caa8ed8481a6")) __declspec(novtable) IIterator<Windows::ApplicationModel::Appointments::AppointmentStoreChange> : impl_IIterator<Windows::ApplicationModel::Appointments::AppointmentStoreChange> {};
#endif

#ifndef WINRT_GENERIC_7b657ca2_e02e_5026_a032_9905e49682fd
#define WINRT_GENERIC_7b657ca2_e02e_5026_a032_9905e49682fd
template <> struct __declspec(uuid("7b657ca2-e02e-5026-a032-9905e49682fd")) __declspec(novtable) IIterable<Windows::ApplicationModel::Appointments::AppointmentStoreChange> : impl_IIterable<Windows::ApplicationModel::Appointments::AppointmentStoreChange> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_6d9cb651_5af6_51b0_9cd3_45dd51f17949
#define WINRT_GENERIC_6d9cb651_5af6_51b0_9cd3_45dd51f17949
template <> struct __declspec(uuid("6d9cb651-5af6-51b0-9cd3-45dd51f17949")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Appointments::AppointmentCalendar> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Appointments::AppointmentCalendar> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f40a879d_b6b7_5f92_beb1_6a8e7ce54120
#define WINRT_GENERIC_f40a879d_b6b7_5f92_beb1_6a8e7ce54120
template <> struct __declspec(uuid("f40a879d-b6b7-5f92-beb1-6a8e7ce54120")) __declspec(novtable) IIterator<Windows::ApplicationModel::Appointments::AppointmentCalendar> : impl_IIterator<Windows::ApplicationModel::Appointments::AppointmentCalendar> {};
#endif

#ifndef WINRT_GENERIC_d3fb010b_b692_5130_9d16_2cfdabcb6dec
#define WINRT_GENERIC_d3fb010b_b692_5130_9d16_2cfdabcb6dec
template <> struct __declspec(uuid("d3fb010b-b692-5130-9d16-2cfdabcb6dec")) __declspec(novtable) IIterable<Windows::ApplicationModel::Appointments::AppointmentCalendar> : impl_IIterable<Windows::ApplicationModel::Appointments::AppointmentCalendar> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_82fb40fe_05b1_523c_9b53_b3dd759c9f75
#define WINRT_GENERIC_82fb40fe_05b1_523c_9b53_b3dd759c9f75
template <> struct __declspec(uuid("82fb40fe-05b1-523c-9b53-b3dd759c9f75")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::ApplicationModel::Appointments::AppointmentConflictResult> : impl_AsyncOperationCompletedHandler<Windows::ApplicationModel::Appointments::AppointmentConflictResult> {};
#endif

#ifndef WINRT_GENERIC_a6bb6962_e2c1_5da2_9938_15ef82cbd1cc
#define WINRT_GENERIC_a6bb6962_e2c1_5da2_9938_15ef82cbd1cc
template <> struct __declspec(uuid("a6bb6962-e2c1-5da2-9938-15ef82cbd1cc")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> {};
#endif

#ifndef WINRT_GENERIC_87e171ac_53fe_50ea_beb3_0589993ac984
#define WINRT_GENERIC_87e171ac_53fe_50ea_beb3_0589993ac984
template <> struct __declspec(uuid("87e171ac-53fe-50ea-beb3-0589993ac984")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> {};
#endif

#ifndef WINRT_GENERIC_d54944b9_b72e_50bc_a64a_19396e0d1bcc
#define WINRT_GENERIC_d54944b9_b72e_50bc_a64a_19396e0d1bcc
template <> struct __declspec(uuid("d54944b9-b72e-50bc-a64a-19396e0d1bcc")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> {};
#endif

#ifndef WINRT_GENERIC_d26021ac_99b4_5c40_b0d2_d6835d2e9202
#define WINRT_GENERIC_d26021ac_99b4_5c40_b0d2_d6835d2e9202
template <> struct __declspec(uuid("d26021ac-99b4-5c40-b0d2-d6835d2e9202")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> {};
#endif

#ifndef WINRT_GENERIC_2f92b529_119b_575a_a419_3904b4e41af2
#define WINRT_GENERIC_2f92b529_119b_575a_a419_3904b4e41af2
template <> struct __declspec(uuid("2f92b529-119b-575a-a419-3904b4e41af2")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> {};
#endif

#ifndef WINRT_GENERIC_f626345f_7bfc_5418_9f47_f1d86306e06b
#define WINRT_GENERIC_f626345f_7bfc_5418_9f47_f1d86306e06b
template <> struct __declspec(uuid("f626345f-7bfc-5418-9f47-f1d86306e06b")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> {};
#endif

#ifndef WINRT_GENERIC_60e2023c_c2a9_5d3c_86b1_cd221c308a5e
#define WINRT_GENERIC_60e2023c_c2a9_5d3c_86b1_cd221c308a5e
template <> struct __declspec(uuid("60e2023c-c2a9-5d3c-86b1-cd221c308a5e")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> {};
#endif

#ifndef WINRT_GENERIC_3fe84fc8_da80_5fab_8b46_3720f7646345
#define WINRT_GENERIC_3fe84fc8_da80_5fab_8b46_3720f7646345
template <> struct __declspec(uuid("3fe84fc8-da80-5fab-8b46-3720f7646345")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> {};
#endif

#ifndef WINRT_GENERIC_f478469b_9777_553d_beab_1bb5eee1ca8b
#define WINRT_GENERIC_f478469b_9777_553d_beab_1bb5eee1ca8b
template <> struct __declspec(uuid("f478469b-9777-553d-beab-1bb5eee1ca8b")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> {};
#endif

#ifndef WINRT_GENERIC_7c7899be_5f2e_5bf3_ade5_ad98b772c7cd
#define WINRT_GENERIC_7c7899be_5f2e_5bf3_ade5_ad98b772c7cd
template <> struct __declspec(uuid("7c7899be-5f2e-5bf3-ade5-ad98b772c7cd")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<hstring>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<hstring>> {};
#endif


}

namespace Windows::ApplicationModel::Appointments {

template <typename D>
struct WINRT_EBO impl_IAppointment
{
    Windows::Foundation::DateTime StartTime() const;
    void StartTime(const Windows::Foundation::DateTime & value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void Duration(const Windows::Foundation::TimeSpan & value) const;
    hstring Location() const;
    void Location(hstring_ref value) const;
    hstring Subject() const;
    void Subject(hstring_ref value) const;
    hstring Details() const;
    void Details(hstring_ref value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Reminder() const;
    void Reminder(const Windows::Foundation::IReference<Windows::Foundation::TimeSpan> & value) const;
    Windows::ApplicationModel::Appointments::AppointmentOrganizer Organizer() const;
    void Organizer(const Windows::ApplicationModel::Appointments::AppointmentOrganizer & value) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> Invitees() const;
    Windows::ApplicationModel::Appointments::AppointmentRecurrence Recurrence() const;
    void Recurrence(const Windows::ApplicationModel::Appointments::AppointmentRecurrence & value) const;
    Windows::ApplicationModel::Appointments::AppointmentBusyStatus BusyStatus() const;
    void BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus value) const;
    bool AllDay() const;
    void AllDay(bool value) const;
    Windows::ApplicationModel::Appointments::AppointmentSensitivity Sensitivity() const;
    void Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity value) const;
    Windows::Foundation::Uri Uri() const;
    void Uri(const Windows::Foundation::Uri & value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointment2
{
    hstring LocalId() const;
    hstring CalendarId() const;
    hstring RoamingId() const;
    void RoamingId(hstring_ref value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> OriginalStartTime() const;
    bool IsResponseRequested() const;
    void IsResponseRequested(bool value) const;
    bool AllowNewTimeProposal() const;
    void AllowNewTimeProposal(bool value) const;
    hstring OnlineMeetingLink() const;
    void OnlineMeetingLink(hstring_ref value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ReplyTime() const;
    void ReplyTime(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const;
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse UserResponse() const;
    void UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) const;
    bool HasInvitees() const;
    bool IsCanceledMeeting() const;
    void IsCanceledMeeting(bool value) const;
    bool IsOrganizedByUser() const;
    void IsOrganizedByUser(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointment3
{
    uint64_t ChangeNumber() const;
    uint64_t RemoteChangeNumber() const;
    void RemoteChangeNumber(uint64_t value) const;
    Windows::ApplicationModel::Appointments::AppointmentDetailsKind DetailsKind() const;
    void DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentCalendar
{
    Windows::UI::Color DisplayColor() const;
    hstring DisplayName() const;
    void DisplayName(hstring_ref value) const;
    hstring LocalId() const;
    bool IsHidden() const;
    Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value) const;
    Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess OtherAppWriteAccess() const;
    void OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value) const;
    hstring SourceDisplayName() const;
    Windows::ApplicationModel::Appointments::AppointmentSummaryCardView SummaryCardView() const;
    void SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAppointmentsAsync(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAppointmentsAsync(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength, const Windows::ApplicationModel::Appointments::FindAppointmentsOptions & options) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> FindExceptionsFromMasterAsync(hstring_ref masterLocalId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAllInstancesAsync(hstring_ref masterLocalId, const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAllInstancesAsync(hstring_ref masterLocalId, const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength, const Windows::ApplicationModel::Appointments::FindAppointmentsOptions & pOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> GetAppointmentAsync(hstring_ref localId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> GetAppointmentInstanceAsync(hstring_ref localId, const Windows::Foundation::DateTime & instanceStartTime) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindUnexpandedAppointmentsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindUnexpandedAppointmentsAsync(const Windows::ApplicationModel::Appointments::FindAppointmentsOptions & options) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::Foundation::IAsyncAction DeleteAppointmentAsync(hstring_ref localId) const;
    Windows::Foundation::IAsyncAction DeleteAppointmentInstanceAsync(hstring_ref localId, const Windows::Foundation::DateTime & instanceStartTime) const;
    Windows::Foundation::IAsyncAction SaveAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & pAppointment) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentCalendar2
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager SyncManager() const;
    hstring RemoteId() const;
    void RemoteId(hstring_ref value) const;
    void DisplayColor(const Windows::UI::Color & value) const;
    void IsHidden(bool value) const;
    hstring UserDataAccountId() const;
    bool CanCreateOrUpdateAppointments() const;
    void CanCreateOrUpdateAppointments(bool value) const;
    bool CanCancelMeetings() const;
    void CanCancelMeetings(bool value) const;
    bool CanForwardMeetings() const;
    void CanForwardMeetings(bool value) const;
    bool CanProposeNewTimeForMeetings() const;
    void CanProposeNewTimeForMeetings(bool value) const;
    bool CanUpdateMeetingResponses() const;
    void CanUpdateMeetingResponses(bool value) const;
    bool CanNotifyInvitees() const;
    void CanNotifyInvitees(bool value) const;
    bool MustNofityInvitees() const;
    void MustNofityInvitees(bool value) const;
    Windows::Foundation::IAsyncOperation<bool> TryCreateOrUpdateAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, bool notifyInvitees) const;
    Windows::Foundation::IAsyncOperation<bool> TryCancelMeetingAsync(const Windows::ApplicationModel::Appointments::Appointment & meeting, hstring_ref subject, hstring_ref comment, bool notifyInvitees) const;
    Windows::Foundation::IAsyncOperation<bool> TryForwardMeetingAsync(const Windows::ApplicationModel::Appointments::Appointment & meeting, const Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> & invitees, hstring_ref subject, hstring_ref forwardHeader, hstring_ref comment) const;
    Windows::Foundation::IAsyncOperation<bool> TryProposeNewTimeForMeetingAsync(const Windows::ApplicationModel::Appointments::Appointment & meeting, const Windows::Foundation::DateTime & newStartTime, const Windows::Foundation::TimeSpan & newDuration, hstring_ref subject, hstring_ref comment) const;
    Windows::Foundation::IAsyncOperation<bool> TryUpdateMeetingResponseAsync(const Windows::ApplicationModel::Appointments::Appointment & meeting, Windows::ApplicationModel::Appointments::AppointmentParticipantResponse response, hstring_ref subject, hstring_ref comment, bool sendUpdate) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentCalendar3
{
    Windows::Foundation::IAsyncAction RegisterSyncManagerAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentCalendarSyncManager
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus Status() const;
    Windows::Foundation::DateTime LastSuccessfulSyncTime() const;
    Windows::Foundation::DateTime LastAttemptedSyncTime() const;
    Windows::Foundation::IAsyncOperation<bool> SyncAsync() const;
    event_token SyncStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable> & handler) const;
    using SyncStatusChanged_revoker = event_revoker<IAppointmentCalendarSyncManager>;
    SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable> & handler) const;
    void SyncStatusChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentCalendarSyncManager2
{
    void Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value) const;
    void LastSuccessfulSyncTime(const Windows::Foundation::DateTime & value) const;
    void LastAttemptedSyncTime(const Windows::Foundation::DateTime & value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentConflictResult
{
    Windows::ApplicationModel::Appointments::AppointmentConflictType Type() const;
    Windows::Foundation::DateTime Date() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentException
{
    Windows::ApplicationModel::Appointments::Appointment Appointment() const;
    Windows::Foundation::Collections::IVectorView<hstring> ExceptionProperties() const;
    bool IsDeleted() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentInvitee
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantRole Role() const;
    void Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole value) const;
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse Response() const;
    void Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentManagerForUser
{
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncAction ShowTimeFrameAsync(const Windows::Foundation::DateTime & timeToShow, const Windows::Foundation::TimeSpan & duration) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(hstring_ref appointmentId) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(hstring_ref appointmentId, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowEditNewAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options) const;
    Windows::System::User User() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentManagerStatics
{
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(hstring_ref appointmentId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(hstring_ref appointmentId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncAction ShowTimeFrameAsync(const Windows::Foundation::DateTime & timeToShow, const Windows::Foundation::TimeSpan & duration) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentManagerStatics2
{
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(hstring_ref appointmentId) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(hstring_ref appointmentId, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowEditNewAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentManagerStatics3
{
    Windows::ApplicationModel::Appointments::AppointmentManagerForUser GetForUser(const Windows::System::User & user) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentParticipant
{
    hstring DisplayName() const;
    void DisplayName(hstring_ref value) const;
    hstring Address() const;
    void Address(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentPropertiesStatics
{
    hstring Subject() const;
    hstring Location() const;
    hstring StartTime() const;
    hstring Duration() const;
    hstring Reminder() const;
    hstring BusyStatus() const;
    hstring Sensitivity() const;
    hstring OriginalStartTime() const;
    hstring IsResponseRequested() const;
    hstring AllowNewTimeProposal() const;
    hstring AllDay() const;
    hstring Details() const;
    hstring OnlineMeetingLink() const;
    hstring ReplyTime() const;
    hstring Organizer() const;
    hstring UserResponse() const;
    hstring HasInvitees() const;
    hstring IsCanceledMeeting() const;
    hstring IsOrganizedByUser() const;
    hstring Recurrence() const;
    hstring Uri() const;
    hstring Invitees() const;
    Windows::Foundation::Collections::IVector<hstring> DefaultProperties() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentPropertiesStatics2
{
    hstring ChangeNumber() const;
    hstring RemoteChangeNumber() const;
    hstring DetailsKind() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentRecurrence
{
    Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit Unit() const;
    void Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value) const;
    Windows::Foundation::IReference<uint32_t> Occurrences() const;
    void Occurrences(const Windows::Foundation::IReference<uint32_t> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Until() const;
    void Until(const Windows::Foundation::IReference<Windows::Foundation::DateTime> & value) const;
    uint32_t Interval() const;
    void Interval(uint32_t value) const;
    Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek DaysOfWeek() const;
    void DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value) const;
    Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth WeekOfMonth() const;
    void WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value) const;
    uint32_t Month() const;
    void Month(uint32_t value) const;
    uint32_t Day() const;
    void Day(uint32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentRecurrence2
{
    Windows::ApplicationModel::Appointments::RecurrenceType RecurrenceType() const;
    hstring TimeZone() const;
    void TimeZone(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentRecurrence3
{
    hstring CalendarIdentifier() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStore
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker ChangeTracker() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> CreateAppointmentCalendarAsync(hstring_ref name) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> GetAppointmentCalendarAsync(hstring_ref calendarId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> GetAppointmentAsync(hstring_ref localId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> GetAppointmentInstanceAsync(hstring_ref localId, const Windows::Foundation::DateTime & instanceStartTime) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> FindAppointmentCalendarsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> FindAppointmentCalendarsAsync(Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions options) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAppointmentsAsync(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAppointmentsAsync(const Windows::Foundation::DateTime & rangeStart, const Windows::Foundation::TimeSpan & rangeLength, const Windows::ApplicationModel::Appointments::FindAppointmentsOptions & options) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> FindConflictAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> FindConflictAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::DateTime & instanceStartTime) const;
    Windows::Foundation::IAsyncAction MoveAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::ApplicationModel::Appointments::AppointmentCalendar & destinationCalendar) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(hstring_ref localId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(hstring_ref localId, const Windows::ApplicationModel::Appointments::Appointment & appointment, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(hstring_ref localId, const Windows::Foundation::Rect & selection) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(hstring_ref localId, const Windows::Foundation::Rect & selection, Windows::UI::Popups::Placement preferredPlacement, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(hstring_ref localId) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(hstring_ref localId, const Windows::Foundation::DateTime & instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowEditNewAppointmentAsync(const Windows::ApplicationModel::Appointments::Appointment & appointment) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> FindLocalIdsFromRoamingIdAsync(hstring_ref roamingId) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStore2
{
    event_token StoreChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> & pHandler) const;
    using StoreChanged_revoker = event_revoker<IAppointmentStore2>;
    StoreChanged_revoker StoreChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> & pHandler) const;
    void StoreChanged(event_token token) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> CreateAppointmentCalendarAsync(hstring_ref name, hstring_ref userDataAccountId) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStoreChange
{
    Windows::ApplicationModel::Appointments::Appointment Appointment() const;
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeType ChangeType() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStoreChange2
{
    Windows::ApplicationModel::Appointments::AppointmentCalendar AppointmentCalendar() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStoreChangeReader
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> ReadBatchAsync() const;
    void AcceptChanges() const;
    void AcceptChangesThrough(const Windows::ApplicationModel::Appointments::AppointmentStoreChange & lastChangeToAccept) const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStoreChangeTracker
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader GetChangeReader() const;
    void Enable() const;
    void Reset() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStoreChangedDeferral
{
    void Complete() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStoreChangedEventArgs
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IAppointmentStoreNotificationTriggerDetails
{
};

template <typename D>
struct WINRT_EBO impl_IFindAppointmentsOptions
{
    Windows::Foundation::Collections::IVector<hstring> CalendarIds() const;
    Windows::Foundation::Collections::IVector<hstring> FetchProperties() const;
    bool IncludeHidden() const;
    void IncludeHidden(bool value) const;
    uint32_t MaxCount() const;
    void MaxCount(uint32_t value) const;
};

struct IAppointment :
    Windows::IInspectable,
    impl::consume<IAppointment>
{
    IAppointment(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointment>(m_ptr); }
};

struct IAppointment2 :
    Windows::IInspectable,
    impl::consume<IAppointment2>,
    impl::require<IAppointment2, Windows::ApplicationModel::Appointments::IAppointment>
{
    IAppointment2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointment2>(m_ptr); }
};

struct IAppointment3 :
    Windows::IInspectable,
    impl::consume<IAppointment3>,
    impl::require<IAppointment3, Windows::ApplicationModel::Appointments::IAppointment, Windows::ApplicationModel::Appointments::IAppointment2>
{
    IAppointment3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointment3>(m_ptr); }
};

struct IAppointmentCalendar :
    Windows::IInspectable,
    impl::consume<IAppointmentCalendar>
{
    IAppointmentCalendar(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentCalendar>(m_ptr); }
};

struct IAppointmentCalendar2 :
    Windows::IInspectable,
    impl::consume<IAppointmentCalendar2>,
    impl::require<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar>
{
    IAppointmentCalendar2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentCalendar2>(m_ptr); }
    using impl_IAppointmentCalendar::DisplayColor;
    using impl_IAppointmentCalendar::IsHidden;
    using impl_IAppointmentCalendar2::DisplayColor;
    using impl_IAppointmentCalendar2::IsHidden;
};

struct IAppointmentCalendar3 :
    Windows::IInspectable,
    impl::consume<IAppointmentCalendar3>
{
    IAppointmentCalendar3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentCalendar3>(m_ptr); }
};

struct IAppointmentCalendarSyncManager :
    Windows::IInspectable,
    impl::consume<IAppointmentCalendarSyncManager>
{
    IAppointmentCalendarSyncManager(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentCalendarSyncManager>(m_ptr); }
};

struct IAppointmentCalendarSyncManager2 :
    Windows::IInspectable,
    impl::consume<IAppointmentCalendarSyncManager2>
{
    IAppointmentCalendarSyncManager2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentCalendarSyncManager2>(m_ptr); }
};

struct IAppointmentConflictResult :
    Windows::IInspectable,
    impl::consume<IAppointmentConflictResult>
{
    IAppointmentConflictResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentConflictResult>(m_ptr); }
};

struct IAppointmentException :
    Windows::IInspectable,
    impl::consume<IAppointmentException>
{
    IAppointmentException(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentException>(m_ptr); }
};

struct IAppointmentInvitee :
    Windows::IInspectable,
    impl::consume<IAppointmentInvitee>,
    impl::require<IAppointmentInvitee, Windows::ApplicationModel::Appointments::IAppointmentParticipant>
{
    IAppointmentInvitee(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentInvitee>(m_ptr); }
};

struct IAppointmentManagerForUser :
    Windows::IInspectable,
    impl::consume<IAppointmentManagerForUser>
{
    IAppointmentManagerForUser(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentManagerForUser>(m_ptr); }
};

struct IAppointmentManagerStatics :
    Windows::IInspectable,
    impl::consume<IAppointmentManagerStatics>
{
    IAppointmentManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentManagerStatics>(m_ptr); }
};

struct IAppointmentManagerStatics2 :
    Windows::IInspectable,
    impl::consume<IAppointmentManagerStatics2>
{
    IAppointmentManagerStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentManagerStatics2>(m_ptr); }
};

struct IAppointmentManagerStatics3 :
    Windows::IInspectable,
    impl::consume<IAppointmentManagerStatics3>
{
    IAppointmentManagerStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentManagerStatics3>(m_ptr); }
};

struct IAppointmentParticipant :
    Windows::IInspectable,
    impl::consume<IAppointmentParticipant>
{
    IAppointmentParticipant(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentParticipant>(m_ptr); }
};

struct IAppointmentPropertiesStatics :
    Windows::IInspectable,
    impl::consume<IAppointmentPropertiesStatics>
{
    IAppointmentPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentPropertiesStatics>(m_ptr); }
};

struct IAppointmentPropertiesStatics2 :
    Windows::IInspectable,
    impl::consume<IAppointmentPropertiesStatics2>,
    impl::require<IAppointmentPropertiesStatics2, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
{
    IAppointmentPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentPropertiesStatics2>(m_ptr); }
};

struct IAppointmentRecurrence :
    Windows::IInspectable,
    impl::consume<IAppointmentRecurrence>
{
    IAppointmentRecurrence(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentRecurrence>(m_ptr); }
};

struct IAppointmentRecurrence2 :
    Windows::IInspectable,
    impl::consume<IAppointmentRecurrence2>,
    impl::require<IAppointmentRecurrence2, Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
{
    IAppointmentRecurrence2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentRecurrence2>(m_ptr); }
};

struct IAppointmentRecurrence3 :
    Windows::IInspectable,
    impl::consume<IAppointmentRecurrence3>,
    impl::require<IAppointmentRecurrence3, Windows::ApplicationModel::Appointments::IAppointmentRecurrence, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
{
    IAppointmentRecurrence3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentRecurrence3>(m_ptr); }
};

struct IAppointmentStore :
    Windows::IInspectable,
    impl::consume<IAppointmentStore>
{
    IAppointmentStore(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStore>(m_ptr); }
};

struct IAppointmentStore2 :
    Windows::IInspectable,
    impl::consume<IAppointmentStore2>,
    impl::require<IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore>
{
    IAppointmentStore2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStore2>(m_ptr); }
    using impl_IAppointmentStore::CreateAppointmentCalendarAsync;
    using impl_IAppointmentStore2::CreateAppointmentCalendarAsync;
};

struct IAppointmentStoreChange :
    Windows::IInspectable,
    impl::consume<IAppointmentStoreChange>
{
    IAppointmentStoreChange(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStoreChange>(m_ptr); }
};

struct IAppointmentStoreChange2 :
    Windows::IInspectable,
    impl::consume<IAppointmentStoreChange2>,
    impl::require<IAppointmentStoreChange2, Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
{
    IAppointmentStoreChange2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStoreChange2>(m_ptr); }
};

struct IAppointmentStoreChangeReader :
    Windows::IInspectable,
    impl::consume<IAppointmentStoreChangeReader>
{
    IAppointmentStoreChangeReader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStoreChangeReader>(m_ptr); }
};

struct IAppointmentStoreChangeTracker :
    Windows::IInspectable,
    impl::consume<IAppointmentStoreChangeTracker>
{
    IAppointmentStoreChangeTracker(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStoreChangeTracker>(m_ptr); }
};

struct IAppointmentStoreChangedDeferral :
    Windows::IInspectable,
    impl::consume<IAppointmentStoreChangedDeferral>
{
    IAppointmentStoreChangedDeferral(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStoreChangedDeferral>(m_ptr); }
};

struct IAppointmentStoreChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IAppointmentStoreChangedEventArgs>
{
    IAppointmentStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStoreChangedEventArgs>(m_ptr); }
};

struct IAppointmentStoreNotificationTriggerDetails :
    Windows::IInspectable,
    impl::consume<IAppointmentStoreNotificationTriggerDetails>
{
    IAppointmentStoreNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAppointmentStoreNotificationTriggerDetails>(m_ptr); }
};

struct IFindAppointmentsOptions :
    Windows::IInspectable,
    impl::consume<IFindAppointmentsOptions>
{
    IFindAppointmentsOptions(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFindAppointmentsOptions>(m_ptr); }
};

}

}
