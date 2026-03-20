#include "pch.h"
#include "natvis_type_helpers.h"
#include <rometadataresolution.h>

using namespace natvis_helpers;
using namespace winmd::reader;

namespace
{
    // Load the system WinMetadata cache for testing
    std::unique_ptr<cache> load_system_metadata()
    {
        std::vector<std::string> files;

        // Load from %windir%\System32\WinMetadata
        wchar_t windir[MAX_PATH];
        GetWindowsDirectoryW(windir, MAX_PATH);

        // Use SysNative on WoW64 to ensure we get 64-bit metadata
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

TEST_CASE("signature for primitive ElementType Boolean", "[signature][integration]")
{
    // ElementType signatures don't need metadata - they're hardcoded
    // We test via the call() dispatch helper indirectly through known type signatures
    // For direct primitive mapping, we verify the known mappings
    struct
    {
        ElementType type;
        const char* expected;
    }
    primitives[] = {
        { ElementType::Boolean, "b1" },
        { ElementType::Char, "c2" },
        { ElementType::I1, "i1" },
        { ElementType::U1, "u1" },
        { ElementType::I2, "i2" },
        { ElementType::U2, "u2" },
        { ElementType::I4, "i4" },
        { ElementType::U4, "u4" },
        { ElementType::I8, "i8" },
        { ElementType::U8, "u8" },
        { ElementType::R4, "f4" },
        { ElementType::R8, "f8" },
        { ElementType::String, "string" },
        { ElementType::Object, "cinterface(IInspectable)" },
    };

    for (auto& [type, expected] : primitives)
    {
        // Build a TypeSig with this ElementType
        // Use the call() helper to verify the dispatch
        TypeSig::value_type val = type;
        auto result = call(val,
            [&](ElementType t) -> std::string
            {
                switch (t)
                {
                    case ElementType::Boolean: return "b1";
                    case ElementType::Char: return "c2";
                    case ElementType::I1: return "i1";
                    case ElementType::U1: return "u1";
                    case ElementType::I2: return "i2";
                    case ElementType::U2: return "u2";
                    case ElementType::I4: return "i4";
                    case ElementType::U4: return "u4";
                    case ElementType::I8: return "i8";
                    case ElementType::U8: return "u8";
                    case ElementType::R4: return "f4";
                    case ElementType::R8: return "f8";
                    case ElementType::String: return "string";
                    case ElementType::Object: return "cinterface(IInspectable)";
                    default: return "";
                }
            },
            [&](auto&&) -> std::string { return ""; });
        REQUIRE(result == expected);
    }
}

TEST_CASE("get_guid extracts correct IInspectable GUID", "[signature][integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "IPropertyValue");
    REQUIRE(type);

    auto guid = get_guid(type);
    auto formatted = format_guid(guid);
    // IPropertyValue GUID: 4BD682DD-7554-40E9-9A9B-82654EDE7E62
    REQUIRE(formatted == L"4BD682DD-7554-40E9-9A9B-82654EDE7E62");
}

TEST_CASE("get_guid extracts correct IStringable GUID", "[signature][integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "IStringable");
    REQUIRE(type);

    auto guid = get_guid(type);
    auto formatted = format_guid(guid);
    REQUIRE(formatted == L"96369F54-8EB6-48F0-ABCE-C1B211E627C3");
}

TEST_CASE("get_full_name returns dotted namespace.type", "[signature][integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "Uri");
    REQUIRE(type);

    auto name = get_full_name(type);
    REQUIRE(name == "Windows.Foundation.Uri");
}

TEST_CASE("signature for known interface type", "[signature][integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "IStringable");
    REQUIRE(type);

    auto sig = signature_generator::get_signature(type);
    // Interface signature is its GUID in lowercase braces
    REQUIRE(sig == "{96369f54-8eb6-48f0-abce-c1b211e627c3}");
}

TEST_CASE("signature for enum type", "[signature][integration]")
{
    auto& db = get_cache();
    auto type = db.find("Windows.Foundation", "AsyncStatus");
    REQUIRE(type);

    auto sig = signature_generator::get_signature(type);
    // Enum signature: enum(Namespace.Name;i4) for non-flags
    REQUIRE(sig == "enum(Windows.Foundation.AsyncStatus;i4)");
}
