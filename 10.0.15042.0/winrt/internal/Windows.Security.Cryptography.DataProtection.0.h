// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Cryptography::DataProtection {

struct IDataProtectionProvider;
struct IDataProtectionProviderFactory;
struct DataProtectionProvider;

}

namespace Windows::Security::Cryptography::DataProtection {

struct IDataProtectionProvider;
struct IDataProtectionProviderFactory;
struct DataProtectionProvider;

}

namespace Windows::Security::Cryptography::DataProtection {

template <typename T> struct impl_IDataProtectionProvider;
template <typename T> struct impl_IDataProtectionProviderFactory;

}

}
