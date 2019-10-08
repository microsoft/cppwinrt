#include "pch.h"
#include "winrt\Windows.Foundation.h"
#include "catch.hpp"
#include <unordered_set>
#include <set>

using namespace std;
using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("hash,specializations")
{
    unordered_set<Windows::Foundation::IUnknown>{};
    unordered_set<Windows::Foundation::IUriRuntimeClass>{};
    unordered_set<Windows::Foundation::IActivationFactory>{};
    unordered_set<Windows::Foundation::Collections::IVectorView<int>>{};
    unordered_set<Windows::Foundation::Uri>{};
    unordered_set<Windows::Devices::Sensors::PedometerStepKind>{}; // Verify that we can hash enums
}

TEST_CASE("hash,identity")
{
    unordered_set<Windows::Foundation::IUnknown> s;
    REQUIRE(s.insert(nullptr).second);
    REQUIRE(s.find(nullptr) != s.end());

    Uri uri{ L"https://github.com/microsoft/cppwinrt" };
    REQUIRE(s.insert(uri).second);
    REQUIRE(s.find(uri) != s.end());
    REQUIRE(*(s.find(uri)) == uri);
    // Make sure we respect COM identity
    REQUIRE(s.find(uri) == s.find(uri.as<IStringable>()));

    Uri uri2{ L"https://github.com/isocpp/CppCoreGuidelines" };
    REQUIRE(s.insert(uri2).second);
    REQUIRE(s.find(uri2) != s.end());
    REQUIRE(*(s.find(uri2)) == uri2);
    REQUIRE(s.find(uri2) == s.find(uri2.as<IStringable>()));

    REQUIRE(s.find(nullptr) != s.find(uri));
    REQUIRE(s.find(nullptr) != s.find(uri2));
    REQUIRE(s.find(uri) != s.find(uri2));
}

TEST_CASE("hash,map_identity")
{
    set<Windows::Foundation::IUnknown> s;
    REQUIRE(s.insert(nullptr).second);
    REQUIRE(s.find(nullptr) != s.end());

    Uri uri{ L"https://github.com/microsoft/cppwinrt" };
    REQUIRE(s.insert(uri).second);
    REQUIRE(s.find(uri) != s.end());
    REQUIRE(*(s.find(uri)) == uri);
    // Make sure we respect COM identity
    REQUIRE(s.find(uri) == s.find(uri.as<IStringable>()));

    Uri uri2{ L"https://github.com/isocpp/CppCoreGuidelines" };
    REQUIRE(s.insert(uri2).second);
    REQUIRE(s.find(uri2) != s.end());
    REQUIRE(*(s.find(uri2)) == uri2);
    REQUIRE(s.find(uri2) == s.find(uri2.as<IStringable>()));

    REQUIRE(s.find(nullptr) != s.find(uri));
    REQUIRE(s.find(nullptr) != s.find(uri2));
    REQUIRE(s.find(uri) != s.find(uri2));
}

