#include "pch.h"
#include "natvis_type_helpers.h"
#include <rometadataresolution.h>

using namespace natvis_helpers;
using namespace winmd::reader;

namespace
{
    std::unique_ptr<cache> load_system_metadata()
    {
        std::vector<std::string> files;

        wchar_t windir[MAX_PATH];
        GetWindowsDirectoryW(windir, MAX_PATH);
        std::filesystem::path metadata_path = std::filesystem::path(windir) / L"System32" / L"WinMetadata";
        if (!std::filesystem::exists(metadata_path))
        {
            metadata_path = std::filesystem::path(windir) / L"SysNative" / L"WinMetadata";
        }

        if (std::filesystem::exists(metadata_path))
        {
            for (auto& entry : std::filesystem::directory_iterator(metadata_path))
            {
                if (entry.path().extension() == L".winmd")
                {
                    files.push_back(entry.path().string());
                }
            }
        }
        return std::make_unique<cache>(files);
    }

    cache& get_cache()
    {
        static auto c = load_system_metadata();
        return *c;
    }
}

TEST_CASE("load system WinMetadata succeeds", "[integration]")
{
    auto& db = get_cache();
    // Verify we loaded at least some metadata (Windows.Foundation.winmd etc.)
    auto type = db.find("Windows.Foundation", "IInspectable");
    // IInspectable may not be in the WinMD (it's a base COM type), but Uri should be
    auto uri = db.find("Windows.Foundation", "Uri");
    REQUIRE(uri);
}

TEST_CASE("find known type Windows.Foundation.Uri", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "Uri");
    REQUIRE(type);

    auto name = get_full_name(type);
    REQUIRE(name == "Windows.Foundation.Uri");

    // Uri is a class type
    REQUIRE(get_category(type) == category::class_type);
}

TEST_CASE("find known type Windows.Foundation.IPropertyValue", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "IPropertyValue");
    REQUIRE(type);
    REQUIRE(get_category(type) == category::interface_type);
}

TEST_CASE("get_guid extracts known IPropertyValue GUID", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "IPropertyValue");
    REQUIRE(type);

    auto guid = get_guid(type);
    auto formatted = format_guid(guid);
    REQUIRE(formatted == L"4BD682DD-7554-40E9-9A9B-82654EDE7E62");
}

TEST_CASE("get_guid extracts known IClosable GUID", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "IClosable");
    REQUIRE(type);

    auto guid = get_guid(type);
    auto formatted = format_guid(guid);
    REQUIRE(formatted == L"30D5A829-7FA4-4026-83BB-D75BAE4EA99E");
}

TEST_CASE("get_default_interface for Uri returns IUriRuntimeClass", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "Uri");
    REQUIRE(type);

    auto default_iface = get_default_interface(type);
    auto resolved = find_required(default_iface.TypeRef());
    auto name = get_full_name(resolved);
    REQUIRE(name == "Windows.Foundation.IUriRuntimeClass");
}

TEST_CASE("signature for class type Windows.Foundation.Uri", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "Uri");
    REQUIRE(type);

    auto sig = signature_generator::get_signature(type);
    // Class signature: rc(Windows.Foundation.Uri;{GUID})
    // The GUID is for the default interface IUriRuntimeClass
    REQUIRE(sig.find("rc(Windows.Foundation.Uri;") == 0);
    REQUIRE(sig.back() == ')');
}

TEST_CASE("type not found returns empty", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Fake.Nonexistent", "Type");
    REQUIRE(!type);
}

TEST_CASE("AsyncStatus enum signature is correct", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "AsyncStatus");
    REQUIRE(type);
    REQUIRE(get_category(type) == category::enum_type);

    auto sig = signature_generator::get_signature(type);
    REQUIRE(sig == "enum(Windows.Foundation.AsyncStatus;i4)");
}

TEST_CASE("struct type Point has correct signature", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "Point");
    REQUIRE(type);
    REQUIRE(get_category(type) == category::struct_type);

    auto sig = signature_generator::get_signature(type);
    // Point struct has two float fields (X, Y)
    REQUIRE(sig == "struct(Windows.Foundation.Point;f4;f4)");
}

TEST_CASE("struct type Rect has correct signature", "[integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "Rect");
    REQUIRE(type);

    auto sig = signature_generator::get_signature(type);
    // Rect struct has four float fields (X, Y, Width, Height)
    REQUIRE(sig == "struct(Windows.Foundation.Rect;f4;f4;f4;f4)");
}
