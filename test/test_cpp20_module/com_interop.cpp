#include "pch.h"
#include <unknwn.h>
#include <inspectable.h>

import std;
import winrt.Windows.Foundation;

//
// These tests confirm that COM interop — including legacy (non-WinRT) COM types
// from the Windows SDK — works correctly when consumed via modules.
//
// Note: We avoid 'using namespace Windows::Foundation' here because it brings
// IInspectable/IUnknown into scope and collides with the SDK types of the same name.
//

using namespace winrt;

TEST_CASE("module_com_ptr_round_trip")
{
    Windows::Foundation::Uri uri(L"https://example.com");

    // Detach to raw ABI pointer and re-attach
    void* abi = detach_abi(uri);
    REQUIRE(abi != nullptr);

    Windows::Foundation::Uri uri2{ nullptr };
    attach_abi(uri2, abi);
    REQUIRE(uri2.AbsoluteUri() == L"https://example.com/");
}

TEST_CASE("module_sdk_iunknown_interop")
{
    // Interop between winrt projected types and the Windows SDK ::IUnknown
    Windows::Foundation::Uri uri(L"https://example.com");

    // Get the SDK IUnknown pointer from a projected type
    ::IUnknown* raw = nullptr;
    copy_to_abi(uri, *reinterpret_cast<void**>(&raw));
    REQUIRE(raw != nullptr);

    // QI for IInspectable through the raw SDK pointer
    ::IInspectable* inspectable = nullptr;
    REQUIRE(raw->QueryInterface(IID_IInspectable, reinterpret_cast<void**>(&inspectable)) == S_OK);
    REQUIRE(inspectable != nullptr);
    inspectable->Release();

    // Round-trip back to a projected type
    Windows::Foundation::Uri uri2{ nullptr };
    copy_from_abi(uri2, raw);
    REQUIRE(uri2.AbsoluteUri() == L"https://example.com/");

    raw->Release();
}

TEST_CASE("module_com_ptr_sdk_type")
{
    // winrt::com_ptr wrapping a Windows SDK ::IUnknown
    Windows::Foundation::Uri uri(L"https://example.com");

    com_ptr<::IUnknown> unknown;
    copy_to_abi(uri, *reinterpret_cast<void**>(unknown.put()));
    REQUIRE(unknown.get() != nullptr);
}

TEST_CASE("module_iunknown_identity")
{
    Windows::Foundation::Uri uri(L"https://example.com");

    auto unknown1 = uri.as<Windows::Foundation::IUnknown>();
    auto unknown2 = uri.as<Windows::Foundation::IUnknown>();
    REQUIRE(unknown1 == unknown2);
}

TEST_CASE("module_try_as")
{
    Windows::Foundation::Uri uri(L"https://example.com");

    auto stringable = uri.try_as<Windows::Foundation::IStringable>();
    REQUIRE(stringable != nullptr);
    REQUIRE(!stringable.ToString().empty());

    auto closable = uri.try_as<Windows::Foundation::IClosable>();
    REQUIRE(closable == nullptr);
}
