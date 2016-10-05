// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Networking.Vpn.1.h"

WINRT_EXPORT namespace winrt {

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

#ifndef WINRT_GENERIC_f4706ab1_55a3_5270_afb2_732988fe8227
#define WINRT_GENERIC_f4706ab1_55a3_5270_afb2_732988fe8227
template <> struct __declspec(uuid("f4706ab1-55a3-5270-afb2-732988fe8227")) __declspec(novtable) IVectorView<Windows::Networking::HostName> : impl_IVectorView<Windows::Networking::HostName> {};
#endif

#ifndef WINRT_GENERIC_b0d63b78_78ad_5e31_b6d8_e32a0e16c447
#define WINRT_GENERIC_b0d63b78_78ad_5e31_b6d8_e32a0e16c447
template <> struct __declspec(uuid("b0d63b78-78ad-5e31-b6d8-e32a0e16c447")) __declspec(novtable) IIterable<Windows::Foundation::Uri> : impl_IIterable<Windows::Foundation::Uri> {};
#endif

#ifndef WINRT_GENERIC_0d82bd8d_fe62_5d67_a7b9_7886dd75bc4e
#define WINRT_GENERIC_0d82bd8d_fe62_5d67_a7b9_7886dd75bc4e
template <> struct __declspec(uuid("0d82bd8d-fe62-5d67-a7b9-7886dd75bc4e")) __declspec(novtable) IVector<Windows::Foundation::Uri> : impl_IVector<Windows::Foundation::Uri> {};
#endif

#ifndef WINRT_GENERIC_5b026bd8_2cc5_5570_bde5_0db7c4331279
#define WINRT_GENERIC_5b026bd8_2cc5_5570_bde5_0db7c4331279
template <> struct __declspec(uuid("5b026bd8-2cc5-5570-bde5-0db7c4331279")) __declspec(novtable) IVector<Windows::Networking::Vpn::VpnRoute> : impl_IVector<Windows::Networking::Vpn::VpnRoute> {};
#endif

#ifndef WINRT_GENERIC_90c71c29_a9b5_5267_a5ad_8b756736317c
#define WINRT_GENERIC_90c71c29_a9b5_5267_a5ad_8b756736317c
template <> struct __declspec(uuid("90c71c29-a9b5-5267-a5ad-8b756736317c")) __declspec(novtable) IVector<Windows::Networking::HostName> : impl_IVector<Windows::Networking::HostName> {};
#endif

#ifndef WINRT_GENERIC_056bddf2_135d_542e_a322_36aa4ca0e60d
#define WINRT_GENERIC_056bddf2_135d_542e_a322_36aa4ca0e60d
template <> struct __declspec(uuid("056bddf2-135d-542e-a322-36aa4ca0e60d")) __declspec(novtable) IVector<Windows::Networking::Vpn::VpnNamespaceInfo> : impl_IVector<Windows::Networking::Vpn::VpnNamespaceInfo> {};
#endif

#ifndef WINRT_GENERIC_4b8385bd_a2cd_5ff1_bf74_7ea580423e50
#define WINRT_GENERIC_4b8385bd_a2cd_5ff1_bf74_7ea580423e50
template <> struct __declspec(uuid("4b8385bd-a2cd-5ff1-bf74-7ea580423e50")) __declspec(novtable) IVectorView<Windows::Foundation::Uri> : impl_IVectorView<Windows::Foundation::Uri> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_39907949_a8cc_5ce5_9e0a_06e3b2d31570
#define WINRT_GENERIC_39907949_a8cc_5ce5_9e0a_06e3b2d31570
template <> struct __declspec(uuid("39907949-a8cc-5ce5-9e0a-06e3b2d31570")) __declspec(novtable) TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> : impl_TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_804449c2_3bc1_5cfe_8468_3bbece4a5cd7
#define WINRT_GENERIC_804449c2_3bc1_5cfe_8468_3bbece4a5cd7
template <> struct __declspec(uuid("804449c2-3bc1-5cfe-8468-3bbece4a5cd7")) __declspec(novtable) IVectorView<Windows::Networking::Vpn::IVpnCustomPrompt> : impl_IVectorView<Windows::Networking::Vpn::IVpnCustomPrompt> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_2cfcf1ba_bffc_5746_b868_2e45a46d2958
#define WINRT_GENERIC_2cfcf1ba_bffc_5746_b868_2e45a46d2958
template <> struct __declspec(uuid("2cfcf1ba-bffc-5746-b868-2e45a46d2958")) __declspec(novtable) TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> : impl_TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_25eaf5eb_2f39_5b4d_bb6e_e652c7d00f6a
#define WINRT_GENERIC_25eaf5eb_2f39_5b4d_bb6e_e652c7d00f6a
template <> struct __declspec(uuid("25eaf5eb-2f39-5b4d-bb6e-e652c7d00f6a")) __declspec(novtable) IVectorView<Windows::Networking::Vpn::IVpnCustomPromptElement> : impl_IVectorView<Windows::Networking::Vpn::IVpnCustomPromptElement> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_216a6f97_dba1_5f71_a14b_2818ad3c4c69
#define WINRT_GENERIC_216a6f97_dba1_5f71_a14b_2818ad3c4c69
template <> struct __declspec(uuid("216a6f97-dba1-5f71-a14b-2818ad3c4c69")) __declspec(novtable) IAsyncOperation<Windows::Networking::Vpn::VpnCredential> : impl_IAsyncOperation<Windows::Networking::Vpn::VpnCredential> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_fa954f6e_30d7_50e0_9d43_dadb6c53e196
#define WINRT_GENERIC_fa954f6e_30d7_50e0_9d43_dadb6c53e196
template <> struct __declspec(uuid("fa954f6e-30d7-50e0-9d43-dadb6c53e196")) __declspec(novtable) IIterable<Windows::Networking::Vpn::VpnPacketBuffer> : impl_IIterable<Windows::Networking::Vpn::VpnPacketBuffer> {};
#endif

#ifndef WINRT_GENERIC_9e5f3ed0_cf1c_5d38_832c_acea6164bf5c
#define WINRT_GENERIC_9e5f3ed0_cf1c_5d38_832c_acea6164bf5c
template <> struct __declspec(uuid("9e5f3ed0-cf1c-5d38-832c-acea6164bf5c")) __declspec(novtable) IIterable<Windows::Networking::HostName> : impl_IIterable<Windows::Networking::HostName> {};
#endif

#ifndef WINRT_GENERIC_8179b6f2_7273_5ca3_a81b_53e902ca209b
#define WINRT_GENERIC_8179b6f2_7273_5ca3_a81b_53e902ca209b
template <> struct __declspec(uuid("8179b6f2-7273-5ca3-a81b-53e902ca209b")) __declspec(novtable) IVector<Windows::Networking::Vpn::VpnDomainNameInfo> : impl_IVector<Windows::Networking::Vpn::VpnDomainNameInfo> {};
#endif

#ifndef WINRT_GENERIC_2a5b9ad8_f005_5f69_ad81_300642e7c667
#define WINRT_GENERIC_2a5b9ad8_f005_5f69_ad81_300642e7c667
template <> struct __declspec(uuid("2a5b9ad8-f005-5f69-ad81-300642e7c667")) __declspec(novtable) IVector<Windows::Networking::Vpn::VpnTrafficFilter> : impl_IVector<Windows::Networking::Vpn::VpnTrafficFilter> {};
#endif

#ifndef WINRT_GENERIC_89097d58_edb8_5ad4_abc5_603f21dd4b15
#define WINRT_GENERIC_89097d58_edb8_5ad4_abc5_603f21dd4b15
template <> struct __declspec(uuid("89097d58-edb8-5ad4-abc5-603f21dd4b15")) __declspec(novtable) IVector<Windows::Networking::Vpn::VpnAppId> : impl_IVector<Windows::Networking::Vpn::VpnAppId> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_e99b86dc_6b65_5f23_9419_90b55852f283
#define WINRT_GENERIC_e99b86dc_6b65_5f23_9419_90b55852f283
template <> struct __declspec(uuid("e99b86dc-6b65-5f23-9419-90b55852f283")) __declspec(novtable) IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> : impl_IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f1dc8f7d_ca33_53fd_9d4c_40c51b5873ec
#define WINRT_GENERIC_f1dc8f7d_ca33_53fd_9d4c_40c51b5873ec
template <> struct __declspec(uuid("f1dc8f7d-ca33-53fd-9d4c-40c51b5873ec")) __declspec(novtable) IVectorView<Windows::Networking::Vpn::IVpnProfile> : impl_IVectorView<Windows::Networking::Vpn::IVpnProfile> {};
#endif

#ifndef WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
#define WINRT_GENERIC_8c304ebb_6615_50a4_8829_879ecd443236
template <> struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236")) __declspec(novtable) IIterator<hstring> : impl_IIterator<hstring> {};
#endif

#ifndef WINRT_GENERIC_557bf83c_a428_5dbd_a0fe_05f6ee543d45
#define WINRT_GENERIC_557bf83c_a428_5dbd_a0fe_05f6ee543d45
template <> struct __declspec(uuid("557bf83c-a428-5dbd-a0fe-05f6ee543d45")) __declspec(novtable) IIterator<Windows::Networking::HostName> : impl_IIterator<Windows::Networking::HostName> {};
#endif

#ifndef WINRT_GENERIC_1c157d0f_5efe_5cec_bbd6_0c6ce9af07a5
#define WINRT_GENERIC_1c157d0f_5efe_5cec_bbd6_0c6ce9af07a5
template <> struct __declspec(uuid("1c157d0f-5efe-5cec-bbd6-0c6ce9af07a5")) __declspec(novtable) IIterator<Windows::Foundation::Uri> : impl_IIterator<Windows::Foundation::Uri> {};
#endif

#ifndef WINRT_GENERIC_44f813ac_052f_514b_a776_aad37a64fdc6
#define WINRT_GENERIC_44f813ac_052f_514b_a776_aad37a64fdc6
template <> struct __declspec(uuid("44f813ac-052f-514b-a776-aad37a64fdc6")) __declspec(novtable) IIterator<Windows::Networking::Vpn::VpnRoute> : impl_IIterator<Windows::Networking::Vpn::VpnRoute> {};
#endif

#ifndef WINRT_GENERIC_bbf498d5_b9ef_55f1_97b1_77a06639e4e2
#define WINRT_GENERIC_bbf498d5_b9ef_55f1_97b1_77a06639e4e2
template <> struct __declspec(uuid("bbf498d5-b9ef-55f1-97b1-77a06639e4e2")) __declspec(novtable) IIterable<Windows::Networking::Vpn::VpnRoute> : impl_IIterable<Windows::Networking::Vpn::VpnRoute> {};
#endif

#ifndef WINRT_GENERIC_43701a74_e497_5559_a71b_11d0156fa839
#define WINRT_GENERIC_43701a74_e497_5559_a71b_11d0156fa839
template <> struct __declspec(uuid("43701a74-e497-5559-a71b-11d0156fa839")) __declspec(novtable) IVectorView<Windows::Networking::Vpn::VpnRoute> : impl_IVectorView<Windows::Networking::Vpn::VpnRoute> {};
#endif

#ifndef WINRT_GENERIC_91e28244_7555_594d_b54d_9c87095e79a2
#define WINRT_GENERIC_91e28244_7555_594d_b54d_9c87095e79a2
template <> struct __declspec(uuid("91e28244-7555-594d-b54d-9c87095e79a2")) __declspec(novtable) IIterator<Windows::Networking::Vpn::VpnNamespaceInfo> : impl_IIterator<Windows::Networking::Vpn::VpnNamespaceInfo> {};
#endif

#ifndef WINRT_GENERIC_17781d03_ddcf_553f_aba8_d2e8155cb6b8
#define WINRT_GENERIC_17781d03_ddcf_553f_aba8_d2e8155cb6b8
template <> struct __declspec(uuid("17781d03-ddcf-553f-aba8-d2e8155cb6b8")) __declspec(novtable) IIterable<Windows::Networking::Vpn::VpnNamespaceInfo> : impl_IIterable<Windows::Networking::Vpn::VpnNamespaceInfo> {};
#endif

#ifndef WINRT_GENERIC_c6ed05a9_4dc7_507d_9c92_7c78c2ef4786
#define WINRT_GENERIC_c6ed05a9_4dc7_507d_9c92_7c78c2ef4786
template <> struct __declspec(uuid("c6ed05a9-4dc7-507d-9c92-7c78c2ef4786")) __declspec(novtable) IVectorView<Windows::Networking::Vpn::VpnNamespaceInfo> : impl_IVectorView<Windows::Networking::Vpn::VpnNamespaceInfo> {};
#endif

#ifndef WINRT_GENERIC_6fc7cfe8_1882_5ba1_8e5e_4c5e3a4fa86d
#define WINRT_GENERIC_6fc7cfe8_1882_5ba1_8e5e_4c5e3a4fa86d
template <> struct __declspec(uuid("6fc7cfe8-1882-5ba1-8e5e-4c5e3a4fa86d")) __declspec(novtable) IIterator<Windows::Networking::Vpn::IVpnCustomPrompt> : impl_IIterator<Windows::Networking::Vpn::IVpnCustomPrompt> {};
#endif

#ifndef WINRT_GENERIC_8bac695c_70cb_54d6_8606_af6e3a25e3a1
#define WINRT_GENERIC_8bac695c_70cb_54d6_8606_af6e3a25e3a1
template <> struct __declspec(uuid("8bac695c-70cb-54d6-8606-af6e3a25e3a1")) __declspec(novtable) IIterable<Windows::Networking::Vpn::IVpnCustomPrompt> : impl_IIterable<Windows::Networking::Vpn::IVpnCustomPrompt> {};
#endif

#ifndef WINRT_GENERIC_ee23ff21_51ba_5cc4_9856_625c79c28080
#define WINRT_GENERIC_ee23ff21_51ba_5cc4_9856_625c79c28080
template <> struct __declspec(uuid("ee23ff21-51ba-5cc4-9856-625c79c28080")) __declspec(novtable) IIterator<Windows::Networking::Vpn::IVpnCustomPromptElement> : impl_IIterator<Windows::Networking::Vpn::IVpnCustomPromptElement> {};
#endif

#ifndef WINRT_GENERIC_437d3693_00c4_50b4_989a_938f1016a230
#define WINRT_GENERIC_437d3693_00c4_50b4_989a_938f1016a230
template <> struct __declspec(uuid("437d3693-00c4-50b4-989a-938f1016a230")) __declspec(novtable) IIterable<Windows::Networking::Vpn::IVpnCustomPromptElement> : impl_IIterable<Windows::Networking::Vpn::IVpnCustomPromptElement> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_1c9c4504_4b75_57ea_837d_5338358bb762
#define WINRT_GENERIC_1c9c4504_4b75_57ea_837d_5338358bb762
template <> struct __declspec(uuid("1c9c4504-4b75-57ea-837d-5338358bb762")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Networking::Vpn::VpnCredential> : impl_AsyncOperationCompletedHandler<Windows::Networking::Vpn::VpnCredential> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_04c88ba5_05e9_53b2_8524_df458d2a9179
#define WINRT_GENERIC_04c88ba5_05e9_53b2_8524_df458d2a9179
template <> struct __declspec(uuid("04c88ba5-05e9-53b2-8524-df458d2a9179")) __declspec(novtable) IIterator<Windows::Networking::Vpn::VpnPacketBuffer> : impl_IIterator<Windows::Networking::Vpn::VpnPacketBuffer> {};
#endif

#ifndef WINRT_GENERIC_29f9008e_3e81_5c58_8a78_6be91abcc17d
#define WINRT_GENERIC_29f9008e_3e81_5c58_8a78_6be91abcc17d
template <> struct __declspec(uuid("29f9008e-3e81-5c58-8a78-6be91abcc17d")) __declspec(novtable) IIterator<Windows::Networking::Vpn::VpnDomainNameInfo> : impl_IIterator<Windows::Networking::Vpn::VpnDomainNameInfo> {};
#endif

#ifndef WINRT_GENERIC_33abe488_be1a_558a_a9cf_b5330ab49f50
#define WINRT_GENERIC_33abe488_be1a_558a_a9cf_b5330ab49f50
template <> struct __declspec(uuid("33abe488-be1a-558a-a9cf-b5330ab49f50")) __declspec(novtable) IIterable<Windows::Networking::Vpn::VpnDomainNameInfo> : impl_IIterable<Windows::Networking::Vpn::VpnDomainNameInfo> {};
#endif

#ifndef WINRT_GENERIC_d4772f57_2328_5c25_9a11_246da17e39d5
#define WINRT_GENERIC_d4772f57_2328_5c25_9a11_246da17e39d5
template <> struct __declspec(uuid("d4772f57-2328-5c25-9a11-246da17e39d5")) __declspec(novtable) IVectorView<Windows::Networking::Vpn::VpnDomainNameInfo> : impl_IVectorView<Windows::Networking::Vpn::VpnDomainNameInfo> {};
#endif

#ifndef WINRT_GENERIC_8f37d5a0_5905_55bf_9c18_b9b3b544648b
#define WINRT_GENERIC_8f37d5a0_5905_55bf_9c18_b9b3b544648b
template <> struct __declspec(uuid("8f37d5a0-5905-55bf-9c18-b9b3b544648b")) __declspec(novtable) IIterator<Windows::Networking::Vpn::VpnTrafficFilter> : impl_IIterator<Windows::Networking::Vpn::VpnTrafficFilter> {};
#endif

#ifndef WINRT_GENERIC_b6d4c853_77c9_52ca_9ce9_853add4554cf
#define WINRT_GENERIC_b6d4c853_77c9_52ca_9ce9_853add4554cf
template <> struct __declspec(uuid("b6d4c853-77c9-52ca-9ce9-853add4554cf")) __declspec(novtable) IIterable<Windows::Networking::Vpn::VpnTrafficFilter> : impl_IIterable<Windows::Networking::Vpn::VpnTrafficFilter> {};
#endif

#ifndef WINRT_GENERIC_75de1766_ee22_56e9_be99_2714065349e5
#define WINRT_GENERIC_75de1766_ee22_56e9_be99_2714065349e5
template <> struct __declspec(uuid("75de1766-ee22-56e9-be99-2714065349e5")) __declspec(novtable) IVectorView<Windows::Networking::Vpn::VpnTrafficFilter> : impl_IVectorView<Windows::Networking::Vpn::VpnTrafficFilter> {};
#endif

#ifndef WINRT_GENERIC_ec9298b0_8ca2_549c_bbe2_252823e70eef
#define WINRT_GENERIC_ec9298b0_8ca2_549c_bbe2_252823e70eef
template <> struct __declspec(uuid("ec9298b0-8ca2-549c-bbe2-252823e70eef")) __declspec(novtable) IIterator<Windows::Networking::Vpn::VpnAppId> : impl_IIterator<Windows::Networking::Vpn::VpnAppId> {};
#endif

#ifndef WINRT_GENERIC_0e1e00aa_f93d_5dc7_9912_e07d1fa6bd67
#define WINRT_GENERIC_0e1e00aa_f93d_5dc7_9912_e07d1fa6bd67
template <> struct __declspec(uuid("0e1e00aa-f93d-5dc7-9912-e07d1fa6bd67")) __declspec(novtable) IIterable<Windows::Networking::Vpn::VpnAppId> : impl_IIterable<Windows::Networking::Vpn::VpnAppId> {};
#endif

#ifndef WINRT_GENERIC_faecbc50_da9a_5102_8229_1dd24e873d1f
#define WINRT_GENERIC_faecbc50_da9a_5102_8229_1dd24e873d1f
template <> struct __declspec(uuid("faecbc50-da9a-5102-8229-1dd24e873d1f")) __declspec(novtable) IVectorView<Windows::Networking::Vpn::VpnAppId> : impl_IVectorView<Windows::Networking::Vpn::VpnAppId> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_31229f8c_709d_5017_8629_57ef1289e616
#define WINRT_GENERIC_31229f8c_709d_5017_8629_57ef1289e616
template <> struct __declspec(uuid("31229f8c-709d-5017-8629-57ef1289e616")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_91ccb492_ec28_530b_b45e_c431744ca9b5
#define WINRT_GENERIC_91ccb492_ec28_530b_b45e_c431744ca9b5
template <> struct __declspec(uuid("91ccb492-ec28-530b-b45e-c431744ca9b5")) __declspec(novtable) IIterator<Windows::Networking::Vpn::IVpnProfile> : impl_IIterator<Windows::Networking::Vpn::IVpnProfile> {};
#endif

#ifndef WINRT_GENERIC_db35f6b1_f266_5c87_8862_9dd87d9df18f
#define WINRT_GENERIC_db35f6b1_f266_5c87_8862_9dd87d9df18f
template <> struct __declspec(uuid("db35f6b1-f266-5c87-8862-9dd87d9df18f")) __declspec(novtable) IIterable<Windows::Networking::Vpn::IVpnProfile> : impl_IIterable<Windows::Networking::Vpn::IVpnProfile> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_69d957be_045e_538f_98f6_1aa65cee244a
#define WINRT_GENERIC_69d957be_045e_538f_98f6_1aa65cee244a
template <> struct __declspec(uuid("69d957be-045e-538f-98f6-1aa65cee244a")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> {};
#endif

#ifndef WINRT_GENERIC_dac6dd72_a5d1_56d4_afc4_989f84dcb2b3
#define WINRT_GENERIC_dac6dd72_a5d1_56d4_afc4_989f84dcb2b3
template <> struct __declspec(uuid("dac6dd72-a5d1-56d4-afc4-989f84dcb2b3")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> {};
#endif


}

namespace Windows::Networking::Vpn {

template <typename D>
struct WINRT_EBO impl_IVpnAppId
{
    Windows::Networking::Vpn::VpnAppIdType Type() const;
    void Type(Windows::Networking::Vpn::VpnAppIdType value) const;
    hstring Value() const;
    void Value(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnAppIdFactory
{
    Windows::Networking::Vpn::VpnAppId Create(Windows::Networking::Vpn::VpnAppIdType type, hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnChannel
{
    void AssociateTransport(const Windows::IInspectable & mainOuterTunnelTransport, const Windows::IInspectable & optionalOuterTunnelTransport) const;
    void Start(const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv4list, const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv6list, const Windows::Networking::Vpn::VpnInterfaceId & vpnInterfaceId, const Windows::Networking::Vpn::VpnRouteAssignment & routeScope, const Windows::Networking::Vpn::VpnNamespaceAssignment & namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, const Windows::IInspectable & mainOuterTunnelTransport, const Windows::IInspectable & optionalOuterTunnelTransport) const;
    void Stop() const;
    Windows::Networking::Vpn::VpnPickedCredential RequestCredentials(Windows::Networking::Vpn::VpnCredentialType credType, bool isRetry, bool isSingleSignOnCredential, const Windows::Security::Cryptography::Certificates::Certificate & certificate) const;
    void RequestVpnPacketBuffer(Windows::Networking::Vpn::VpnDataPathType type, Windows::Networking::Vpn::VpnPacketBuffer & vpnPacketBuffer) const;
    void LogDiagnosticMessage(hstring_ref message) const;
    uint32_t Id() const;
    Windows::Networking::Vpn::VpnChannelConfiguration Configuration() const;
    event_token ActivityChange(const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> & handler) const;
    using ActivityChange_revoker = event_revoker<IVpnChannel>;
    ActivityChange_revoker ActivityChange(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> & handler) const;
    void ActivityChange(event_token token) const;
    void PlugInContext(const Windows::IInspectable & value) const;
    Windows::IInspectable PlugInContext() const;
    Windows::Networking::Vpn::VpnSystemHealth SystemHealth() const;
    void RequestCustomPrompt(const Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPrompt> & customPrompt) const;
    void SetErrorMessage(hstring_ref message) const;
    void SetAllowedSslTlsVersions(const Windows::IInspectable & tunnelTransport, bool useTls12) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnChannel2
{
    void StartWithMainTransport(const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv4list, const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv6list, const Windows::Networking::Vpn::VpnInterfaceId & vpnInterfaceId, const Windows::Networking::Vpn::VpnRouteAssignment & assignedRoutes, const Windows::Networking::Vpn::VpnDomainNameAssignment & assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, const Windows::IInspectable & mainOuterTunnelTransport) const;
    void StartExistingTransports(const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv4list, const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIPv6list, const Windows::Networking::Vpn::VpnInterfaceId & vpnInterfaceId, const Windows::Networking::Vpn::VpnRouteAssignment & assignedRoutes, const Windows::Networking::Vpn::VpnDomainNameAssignment & assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) const;
    event_token ActivityStateChange(const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> & handler) const;
    using ActivityStateChange_revoker = event_revoker<IVpnChannel2>;
    ActivityStateChange_revoker ActivityStateChange(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> & handler) const;
    void ActivityStateChange(event_token token) const;
    Windows::Networking::Vpn::VpnPacketBuffer GetVpnSendPacketBuffer() const;
    Windows::Networking::Vpn::VpnPacketBuffer GetVpnReceivePacketBuffer() const;
    Windows::Foundation::IAsyncAction RequestCustomPromptAsync(const Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPromptElement> & customPromptElement) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType credType, uint32_t credOptions, const Windows::Security::Cryptography::Certificates::Certificate & certificate) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType credType, uint32_t credOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType credType) const;
    void TerminateConnection(hstring_ref message) const;
    void StartWithTrafficFilter(const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIpv4List, const Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> & assignedClientIpv6List, const Windows::Networking::Vpn::VpnInterfaceId & vpnInterfaceId, const Windows::Networking::Vpn::VpnRouteAssignment & assignedRoutes, const Windows::Networking::Vpn::VpnDomainNameAssignment & assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, const Windows::IInspectable & mainOuterTunnelTransport, const Windows::IInspectable & optionalOuterTunnelTransport, const Windows::Networking::Vpn::VpnTrafficFilterAssignment & assignedTrafficFilters) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnChannelActivityEventArgs
{
    Windows::Networking::Vpn::VpnChannelActivityEventType Type() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnChannelActivityStateChangedArgs
{
    Windows::Networking::Vpn::VpnChannelActivityEventType ActivityState() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnChannelConfiguration
{
    hstring ServerServiceName() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> ServerHostNameList() const;
    hstring CustomField() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnChannelConfiguration2
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> ServerUris() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnChannelStatics
{
    void ProcessEventAsync(const Windows::IInspectable & thirdPartyPlugIn, const Windows::IInspectable & event) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCredential
{
    Windows::Security::Credentials::PasswordCredential PasskeyCredential() const;
    Windows::Security::Cryptography::Certificates::Certificate CertificateCredential() const;
    hstring AdditionalPin() const;
    Windows::Security::Credentials::PasswordCredential OldPasswordCredential() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomCheckBox
{
    void InitialCheckState(bool value) const;
    bool InitialCheckState() const;
    bool Checked() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomComboBox
{
    void OptionsText(const Windows::Foundation::Collections::IVectorView<hstring> & value) const;
    Windows::Foundation::Collections::IVectorView<hstring> OptionsText() const;
    uint32_t Selected() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomEditBox
{
    void DefaultText(hstring_ref value) const;
    hstring DefaultText() const;
    void NoEcho(bool value) const;
    bool NoEcho() const;
    hstring Text() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomErrorBox
{
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomPrompt
{
    void Label(hstring_ref value) const;
    hstring Label() const;
    void Compulsory(bool value) const;
    bool Compulsory() const;
    void Bordered(bool value) const;
    bool Bordered() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomPromptBooleanInput
{
    void InitialValue(bool value) const;
    bool InitialValue() const;
    bool Value() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomPromptElement
{
    void DisplayName(hstring_ref value) const;
    hstring DisplayName() const;
    void Compulsory(bool value) const;
    bool Compulsory() const;
    void Emphasized(bool value) const;
    bool Emphasized() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomPromptOptionSelector
{
    Windows::Foundation::Collections::IVector<hstring> Options() const;
    uint32_t SelectedIndex() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomPromptText
{
    void Text(hstring_ref value) const;
    hstring Text() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomPromptTextInput
{
    void PlaceholderText(hstring_ref value) const;
    hstring PlaceholderText() const;
    void IsTextHidden(bool value) const;
    bool IsTextHidden() const;
    hstring Text() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnCustomTextBox
{
    void DisplayText(hstring_ref value) const;
    hstring DisplayText() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnDomainNameAssignment
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> DomainNameList() const;
    void ProxyAutoConfigurationUri(const Windows::Foundation::Uri & value) const;
    Windows::Foundation::Uri ProxyAutoConfigurationUri() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnDomainNameInfo
{
    void DomainName(const Windows::Networking::HostName & value) const;
    Windows::Networking::HostName DomainName() const;
    void DomainNameType(Windows::Networking::Vpn::VpnDomainNameType value) const;
    Windows::Networking::Vpn::VpnDomainNameType DomainNameType() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> DnsServers() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> WebProxyServers() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnDomainNameInfo2
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> WebProxyUris() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnDomainNameInfoFactory
{
    Windows::Networking::Vpn::VpnDomainNameInfo CreateVpnDomainNameInfo(hstring_ref name, Windows::Networking::Vpn::VpnDomainNameType nameType, const Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> & dnsServerList, const Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> & proxyServerList) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnInterfaceId
{
    void GetAddressInfo(com_array<uint8_t> & id) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnInterfaceIdFactory
{
    Windows::Networking::Vpn::VpnInterfaceId CreateVpnInterfaceId(array_ref<const uint8_t> address) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnManagementAgent
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> AddProfileFromXmlAsync(hstring_ref xml) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> AddProfileFromObjectAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> UpdateProfileFromXmlAsync(hstring_ref xml) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> UpdateProfileFromObjectAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> GetProfilesAsync() const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> DeleteProfileAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> ConnectProfileAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> ConnectProfileWithPasswordCredentialAsync(const Windows::Networking::Vpn::IVpnProfile & profile, const Windows::Security::Credentials::PasswordCredential & passwordCredential) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Networking::Vpn::VpnManagementErrorStatus> DisconnectProfileAsync(const Windows::Networking::Vpn::IVpnProfile & profile) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnNamespaceAssignment
{
    void NamespaceList(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> & value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> NamespaceList() const;
    void ProxyAutoConfigUri(const Windows::Foundation::Uri & value) const;
    Windows::Foundation::Uri ProxyAutoConfigUri() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnNamespaceInfo
{
    void Namespace(hstring_ref value) const;
    hstring Namespace() const;
    void DnsServers(const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> DnsServers() const;
    void WebProxyServers(const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> WebProxyServers() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnNamespaceInfoFactory
{
    Windows::Networking::Vpn::VpnNamespaceInfo CreateVpnNamespaceInfo(hstring_ref name, const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & dnsServerList, const Windows::Foundation::Collections::IVector<Windows::Networking::HostName> & proxyServerList) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnNativeProfile
{
    Windows::Foundation::Collections::IVector<hstring> Servers() const;
    Windows::Networking::Vpn::VpnRoutingPolicyType RoutingPolicyType() const;
    void RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType value) const;
    Windows::Networking::Vpn::VpnNativeProtocolType NativeProtocolType() const;
    void NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType value) const;
    Windows::Networking::Vpn::VpnAuthenticationMethod UserAuthenticationMethod() const;
    void UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod value) const;
    Windows::Networking::Vpn::VpnAuthenticationMethod TunnelAuthenticationMethod() const;
    void TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod value) const;
    hstring EapConfiguration() const;
    void EapConfiguration(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnNativeProfile2
{
    bool RequireVpnClientAppUI() const;
    void RequireVpnClientAppUI(bool value) const;
    Windows::Networking::Vpn::VpnManagementConnectionStatus ConnectionStatus() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPacketBuffer
{
    Windows::Storage::Streams::Buffer Buffer() const;
    void Status(Windows::Networking::Vpn::VpnPacketBufferStatus value) const;
    Windows::Networking::Vpn::VpnPacketBufferStatus Status() const;
    void TransportAffinity(uint32_t value) const;
    uint32_t TransportAffinity() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPacketBuffer2
{
    Windows::Networking::Vpn::VpnAppId AppId() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPacketBufferFactory
{
    Windows::Networking::Vpn::VpnPacketBuffer CreateVpnPacketBuffer(const Windows::Networking::Vpn::VpnPacketBuffer & parentBuffer, uint32_t offset, uint32_t length) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPacketBufferList
{
    void Append(const Windows::Networking::Vpn::VpnPacketBuffer & nextVpnPacketBuffer) const;
    void AddAtBegin(const Windows::Networking::Vpn::VpnPacketBuffer & nextVpnPacketBuffer) const;
    Windows::Networking::Vpn::VpnPacketBuffer RemoveAtEnd() const;
    Windows::Networking::Vpn::VpnPacketBuffer RemoveAtBegin() const;
    void Clear() const;
    void Status(Windows::Networking::Vpn::VpnPacketBufferStatus value) const;
    Windows::Networking::Vpn::VpnPacketBufferStatus Status() const;
    uint32_t Size() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPacketBufferList2
{
    void AddLeadingPacket(const Windows::Networking::Vpn::VpnPacketBuffer & nextVpnPacketBuffer) const;
    Windows::Networking::Vpn::VpnPacketBuffer RemoveLeadingPacket() const;
    void AddTrailingPacket(const Windows::Networking::Vpn::VpnPacketBuffer & nextVpnPacketBuffer) const;
    Windows::Networking::Vpn::VpnPacketBuffer RemoveTrailingPacket() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPickedCredential
{
    Windows::Security::Credentials::PasswordCredential PasskeyCredential() const;
    hstring AdditionalPin() const;
    Windows::Security::Credentials::PasswordCredential OldPasswordCredential() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPlugIn
{
    void Connect(const Windows::Networking::Vpn::VpnChannel & channel) const;
    void Disconnect(const Windows::Networking::Vpn::VpnChannel & channel) const;
    void GetKeepAlivePayload(const Windows::Networking::Vpn::VpnChannel & channel, Windows::Networking::Vpn::VpnPacketBuffer & keepAlivePacket) const;
    void Encapsulate(const Windows::Networking::Vpn::VpnChannel & channel, const Windows::Networking::Vpn::VpnPacketBufferList & packets, const Windows::Networking::Vpn::VpnPacketBufferList & encapulatedPackets) const;
    void Decapsulate(const Windows::Networking::Vpn::VpnChannel & channel, const Windows::Networking::Vpn::VpnPacketBuffer & encapBuffer, const Windows::Networking::Vpn::VpnPacketBufferList & decapsulatedPackets, const Windows::Networking::Vpn::VpnPacketBufferList & controlPacketsToSend) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPlugInProfile
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> ServerUris() const;
    hstring CustomConfiguration() const;
    void CustomConfiguration(hstring_ref value) const;
    hstring VpnPluginPackageFamilyName() const;
    void VpnPluginPackageFamilyName(hstring_ref value) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnPlugInProfile2
{
    bool RequireVpnClientAppUI() const;
    void RequireVpnClientAppUI(bool value) const;
    Windows::Networking::Vpn::VpnManagementConnectionStatus ConnectionStatus() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnProfile
{
    hstring ProfileName() const;
    void ProfileName(hstring_ref value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId> AppTriggers() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Routes() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> DomainNameInfoList() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> TrafficFilters() const;
    bool RememberCredentials() const;
    void RememberCredentials(bool value) const;
    bool AlwaysOn() const;
    void AlwaysOn(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnRoute
{
    void Address(const Windows::Networking::HostName & value) const;
    Windows::Networking::HostName Address() const;
    void PrefixSize(uint8_t value) const;
    uint8_t PrefixSize() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnRouteAssignment
{
    void Ipv4InclusionRoutes(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> & value) const;
    void Ipv6InclusionRoutes(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> & value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Ipv4InclusionRoutes() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Ipv6InclusionRoutes() const;
    void Ipv4ExclusionRoutes(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> & value) const;
    void Ipv6ExclusionRoutes(const Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> & value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Ipv4ExclusionRoutes() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Ipv6ExclusionRoutes() const;
    void ExcludeLocalSubnets(bool value) const;
    bool ExcludeLocalSubnets() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnRouteFactory
{
    Windows::Networking::Vpn::VpnRoute CreateVpnRoute(const Windows::Networking::HostName & address, uint8_t prefixSize) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnSystemHealth
{
    Windows::Storage::Streams::Buffer StatementOfHealth() const;
};

template <typename D>
struct WINRT_EBO impl_IVpnTrafficFilter
{
    Windows::Networking::Vpn::VpnAppId AppId() const;
    void AppId(const Windows::Networking::Vpn::VpnAppId & value) const;
    Windows::Foundation::Collections::IVector<hstring> AppClaims() const;
    Windows::Networking::Vpn::VpnIPProtocol Protocol() const;
    void Protocol(Windows::Networking::Vpn::VpnIPProtocol value) const;
    Windows::Foundation::Collections::IVector<hstring> LocalPortRanges() const;
    Windows::Foundation::Collections::IVector<hstring> RemotePortRanges() const;
    Windows::Foundation::Collections::IVector<hstring> LocalAddressRanges() const;
    Windows::Foundation::Collections::IVector<hstring> RemoteAddressRanges() const;
    Windows::Networking::Vpn::VpnRoutingPolicyType RoutingPolicyType() const;
    void RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType value) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnTrafficFilterAssignment
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> TrafficFilterList() const;
    bool AllowOutbound() const;
    void AllowOutbound(bool value) const;
    bool AllowInbound() const;
    void AllowInbound(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IVpnTrafficFilterFactory
{
    Windows::Networking::Vpn::VpnTrafficFilter Create(const Windows::Networking::Vpn::VpnAppId & appId) const;
};

struct IVpnAppId :
    Windows::IInspectable,
    impl::consume<IVpnAppId>
{
    IVpnAppId(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnAppId>(m_ptr); }
};

struct IVpnAppIdFactory :
    Windows::IInspectable,
    impl::consume<IVpnAppIdFactory>
{
    IVpnAppIdFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnAppIdFactory>(m_ptr); }
};

struct IVpnChannel :
    Windows::IInspectable,
    impl::consume<IVpnChannel>
{
    IVpnChannel(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnChannel>(m_ptr); }
};

struct IVpnChannel2 :
    Windows::IInspectable,
    impl::consume<IVpnChannel2>
{
    IVpnChannel2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnChannel2>(m_ptr); }
};

struct IVpnChannelActivityEventArgs :
    Windows::IInspectable,
    impl::consume<IVpnChannelActivityEventArgs>
{
    IVpnChannelActivityEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnChannelActivityEventArgs>(m_ptr); }
};

struct IVpnChannelActivityStateChangedArgs :
    Windows::IInspectable,
    impl::consume<IVpnChannelActivityStateChangedArgs>
{
    IVpnChannelActivityStateChangedArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnChannelActivityStateChangedArgs>(m_ptr); }
};

struct IVpnChannelConfiguration :
    Windows::IInspectable,
    impl::consume<IVpnChannelConfiguration>
{
    IVpnChannelConfiguration(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnChannelConfiguration>(m_ptr); }
};

struct IVpnChannelConfiguration2 :
    Windows::IInspectable,
    impl::consume<IVpnChannelConfiguration2>
{
    IVpnChannelConfiguration2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnChannelConfiguration2>(m_ptr); }
};

struct IVpnChannelStatics :
    Windows::IInspectable,
    impl::consume<IVpnChannelStatics>
{
    IVpnChannelStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnChannelStatics>(m_ptr); }
};

struct IVpnCredential :
    Windows::IInspectable,
    impl::consume<IVpnCredential>
{
    IVpnCredential(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCredential>(m_ptr); }
};

struct IVpnCustomCheckBox :
    Windows::IInspectable,
    impl::consume<IVpnCustomCheckBox>,
    impl::require<IVpnCustomCheckBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomCheckBox(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomCheckBox>(m_ptr); }
};

struct IVpnCustomComboBox :
    Windows::IInspectable,
    impl::consume<IVpnCustomComboBox>,
    impl::require<IVpnCustomComboBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomComboBox(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomComboBox>(m_ptr); }
};

struct IVpnCustomEditBox :
    Windows::IInspectable,
    impl::consume<IVpnCustomEditBox>,
    impl::require<IVpnCustomEditBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomEditBox(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomEditBox>(m_ptr); }
};

struct IVpnCustomErrorBox :
    Windows::IInspectable,
    impl::consume<IVpnCustomErrorBox>,
    impl::require<IVpnCustomErrorBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomErrorBox(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomErrorBox>(m_ptr); }
};

struct IVpnCustomPrompt :
    Windows::IInspectable,
    impl::consume<IVpnCustomPrompt>
{
    IVpnCustomPrompt(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomPrompt>(m_ptr); }
};

struct IVpnCustomPromptBooleanInput :
    Windows::IInspectable,
    impl::consume<IVpnCustomPromptBooleanInput>,
    impl::require<IVpnCustomPromptBooleanInput, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptBooleanInput(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomPromptBooleanInput>(m_ptr); }
};

struct IVpnCustomPromptElement :
    Windows::IInspectable,
    impl::consume<IVpnCustomPromptElement>
{
    IVpnCustomPromptElement(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomPromptElement>(m_ptr); }
};

struct IVpnCustomPromptOptionSelector :
    Windows::IInspectable,
    impl::consume<IVpnCustomPromptOptionSelector>,
    impl::require<IVpnCustomPromptOptionSelector, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptOptionSelector(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomPromptOptionSelector>(m_ptr); }
};

struct IVpnCustomPromptText :
    Windows::IInspectable,
    impl::consume<IVpnCustomPromptText>,
    impl::require<IVpnCustomPromptText, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptText(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomPromptText>(m_ptr); }
};

struct IVpnCustomPromptTextInput :
    Windows::IInspectable,
    impl::consume<IVpnCustomPromptTextInput>,
    impl::require<IVpnCustomPromptTextInput, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptTextInput(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomPromptTextInput>(m_ptr); }
};

struct IVpnCustomTextBox :
    Windows::IInspectable,
    impl::consume<IVpnCustomTextBox>,
    impl::require<IVpnCustomTextBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomTextBox(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnCustomTextBox>(m_ptr); }
};

struct IVpnDomainNameAssignment :
    Windows::IInspectable,
    impl::consume<IVpnDomainNameAssignment>
{
    IVpnDomainNameAssignment(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnDomainNameAssignment>(m_ptr); }
};

struct IVpnDomainNameInfo :
    Windows::IInspectable,
    impl::consume<IVpnDomainNameInfo>
{
    IVpnDomainNameInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnDomainNameInfo>(m_ptr); }
};

struct IVpnDomainNameInfo2 :
    Windows::IInspectable,
    impl::consume<IVpnDomainNameInfo2>
{
    IVpnDomainNameInfo2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnDomainNameInfo2>(m_ptr); }
};

struct IVpnDomainNameInfoFactory :
    Windows::IInspectable,
    impl::consume<IVpnDomainNameInfoFactory>
{
    IVpnDomainNameInfoFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnDomainNameInfoFactory>(m_ptr); }
};

struct IVpnInterfaceId :
    Windows::IInspectable,
    impl::consume<IVpnInterfaceId>
{
    IVpnInterfaceId(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnInterfaceId>(m_ptr); }
};

struct IVpnInterfaceIdFactory :
    Windows::IInspectable,
    impl::consume<IVpnInterfaceIdFactory>
{
    IVpnInterfaceIdFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnInterfaceIdFactory>(m_ptr); }
};

struct IVpnManagementAgent :
    Windows::IInspectable,
    impl::consume<IVpnManagementAgent>
{
    IVpnManagementAgent(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnManagementAgent>(m_ptr); }
};

struct IVpnNamespaceAssignment :
    Windows::IInspectable,
    impl::consume<IVpnNamespaceAssignment>
{
    IVpnNamespaceAssignment(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnNamespaceAssignment>(m_ptr); }
};

struct IVpnNamespaceInfo :
    Windows::IInspectable,
    impl::consume<IVpnNamespaceInfo>
{
    IVpnNamespaceInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnNamespaceInfo>(m_ptr); }
};

struct IVpnNamespaceInfoFactory :
    Windows::IInspectable,
    impl::consume<IVpnNamespaceInfoFactory>
{
    IVpnNamespaceInfoFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnNamespaceInfoFactory>(m_ptr); }
};

struct IVpnNativeProfile :
    Windows::IInspectable,
    impl::consume<IVpnNativeProfile>,
    impl::require<IVpnNativeProfile, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnNativeProfile(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnNativeProfile>(m_ptr); }
};

struct IVpnNativeProfile2 :
    Windows::IInspectable,
    impl::consume<IVpnNativeProfile2>
{
    IVpnNativeProfile2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnNativeProfile2>(m_ptr); }
};

struct IVpnPacketBuffer :
    Windows::IInspectable,
    impl::consume<IVpnPacketBuffer>
{
    IVpnPacketBuffer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPacketBuffer>(m_ptr); }
};

struct IVpnPacketBuffer2 :
    Windows::IInspectable,
    impl::consume<IVpnPacketBuffer2>
{
    IVpnPacketBuffer2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPacketBuffer2>(m_ptr); }
};

struct IVpnPacketBufferFactory :
    Windows::IInspectable,
    impl::consume<IVpnPacketBufferFactory>
{
    IVpnPacketBufferFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPacketBufferFactory>(m_ptr); }
};

struct IVpnPacketBufferList :
    Windows::IInspectable,
    impl::consume<IVpnPacketBufferList>,
    impl::require<IVpnPacketBufferList, Windows::Foundation::Collections::IIterable<Windows::Networking::Vpn::VpnPacketBuffer>>
{
    IVpnPacketBufferList(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPacketBufferList>(m_ptr); }
};

struct IVpnPacketBufferList2 :
    Windows::IInspectable,
    impl::consume<IVpnPacketBufferList2>,
    impl::require<IVpnPacketBufferList2, Windows::Foundation::Collections::IIterable<Windows::Networking::Vpn::VpnPacketBuffer>>
{
    IVpnPacketBufferList2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPacketBufferList2>(m_ptr); }
};

struct IVpnPickedCredential :
    Windows::IInspectable,
    impl::consume<IVpnPickedCredential>
{
    IVpnPickedCredential(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPickedCredential>(m_ptr); }
};

struct IVpnPlugIn :
    Windows::IInspectable,
    impl::consume<IVpnPlugIn>
{
    IVpnPlugIn(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPlugIn>(m_ptr); }
};

struct IVpnPlugInProfile :
    Windows::IInspectable,
    impl::consume<IVpnPlugInProfile>,
    impl::require<IVpnPlugInProfile, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnPlugInProfile(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPlugInProfile>(m_ptr); }
};

struct IVpnPlugInProfile2 :
    Windows::IInspectable,
    impl::consume<IVpnPlugInProfile2>,
    impl::require<IVpnPlugInProfile2, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnPlugInProfile2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnPlugInProfile2>(m_ptr); }
};

struct IVpnProfile :
    Windows::IInspectable,
    impl::consume<IVpnProfile>
{
    IVpnProfile(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnProfile>(m_ptr); }
};

struct IVpnRoute :
    Windows::IInspectable,
    impl::consume<IVpnRoute>
{
    IVpnRoute(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnRoute>(m_ptr); }
};

struct IVpnRouteAssignment :
    Windows::IInspectable,
    impl::consume<IVpnRouteAssignment>
{
    IVpnRouteAssignment(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnRouteAssignment>(m_ptr); }
};

struct IVpnRouteFactory :
    Windows::IInspectable,
    impl::consume<IVpnRouteFactory>
{
    IVpnRouteFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnRouteFactory>(m_ptr); }
};

struct IVpnSystemHealth :
    Windows::IInspectable,
    impl::consume<IVpnSystemHealth>
{
    IVpnSystemHealth(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnSystemHealth>(m_ptr); }
};

struct IVpnTrafficFilter :
    Windows::IInspectable,
    impl::consume<IVpnTrafficFilter>
{
    IVpnTrafficFilter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnTrafficFilter>(m_ptr); }
};

struct IVpnTrafficFilterAssignment :
    Windows::IInspectable,
    impl::consume<IVpnTrafficFilterAssignment>
{
    IVpnTrafficFilterAssignment(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnTrafficFilterAssignment>(m_ptr); }
};

struct IVpnTrafficFilterFactory :
    Windows::IInspectable,
    impl::consume<IVpnTrafficFilterFactory>
{
    IVpnTrafficFilterFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVpnTrafficFilterFactory>(m_ptr); }
};

}

}
