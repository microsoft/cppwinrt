#include "pch.h"

struct writer : cppwinrt::writer_base<writer>
{

};

int main(int const argc, char** argv)
{
    if (argc < 3)
    {
        puts("Usage: prebuild.exe input output");
        return 0;
    }

    writer strings_h;
    writer strings_cpp;

    strings_h.write(R"(
#pragma once
namespace cppwinrt::strings {
extern "C++" {
)");

    strings_cpp.write(R"(
#include "strings.h"
namespace cppwinrt::strings {
)");

    for (auto&& file : std::filesystem::directory_iterator(argv[1]))
    {
        if (!std::filesystem::is_regular_file(file))
        {
            continue;
        }

        auto path = file.path();
        auto name = path.filename();
        name.replace_extension();

        auto view = cppwinrt::file_to_string(path.string());

        strings_h.write(R"(extern char const %[%];
)",
            name.string(),
            static_cast<uint64_t>(view.size() + 1));

        strings_cpp.write(R"(extern char const %[] = R"xyz()xyz"
)",
            name.string());

        std::string_view remainder = view;

        while (!remainder.empty())
        {
            auto const size = std::min(size_t{ 16'000 }, remainder.size());
            auto const chunk = remainder.substr(0, size);

            strings_cpp.write(R"(R"xyz(%)xyz"
)",
                chunk);

            remainder = remainder.substr(size);
        }

        strings_cpp.write(";\n");
    }

    strings_h.write(R"(
}
}
)");

    strings_cpp.write(R"(
}
)");

    writer version_rc;

    version_rc.write(R"(
#include "winres.h"

VS_VERSION_INFO VERSIONINFO
 FILEVERSION 2,0,0,0
 PRODUCTVERSION 2,0,0,0
 FILEFLAGSMASK 0x3fL
#ifdef _DEBUG
 FILEFLAGS 0x1L
#else
 FILEFLAGS 0x0L
#endif
 FILEOS 0x40004L
 FILETYPE 0x0L
 FILESUBTYPE 0x0L
BEGIN
    BLOCK "StringFileInfo"
    BEGIN
        BLOCK "040904b0"
        BEGIN
            VALUE "CompanyName", "Microsoft Corporation"
            VALUE "FileDescription", "C++/WinRT"
            VALUE "FileVersion", "2.0.0.0"
            VALUE "LegalCopyright", "Microsoft Corporation. All rights reserved."
            VALUE "OriginalFilename", "cppwinrt.exe"
            VALUE "ProductName", "C++/WinRT"
            VALUE "ProductVersion", "%"
        END
    END
    BLOCK "VarFileInfo"
    BEGIN
        VALUE "Translation", 0x409, 1200
    END
END
)",
    CPPWINRT_VERSION_STRING);

    std::filesystem::create_directories(argv[2]);
    auto const output = std::filesystem::canonical(argv[2]);
    strings_h.flush_to_file(output / "strings.h");
    strings_cpp.flush_to_file(output / "strings.cpp");
    version_rc.flush_to_file(output / "version.rc");
}
