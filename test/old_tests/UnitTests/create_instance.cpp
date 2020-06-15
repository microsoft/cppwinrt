#include "pch.h"
#include "catch.hpp"
#include <shobjidl.h>

using namespace winrt;

TEST_CASE("create_instance")
{
    com_ptr<IFileOpenDialog> dialog = create_instance<IFileOpenDialog>(guid_of<FileOpenDialog>());
    REQUIRE(dialog);
}

TEST_CASE("try_create_instance")
{
    com_ptr<IFileOpenDialog> dialog = try_create_instance<IFileOpenDialog>(guid_of<FileOpenDialog>());
    REQUIRE(dialog);

    dialog = try_create_instance<IFileOpenDialog>(CLSID_NULL);
    REQUIRE(!dialog);
}
