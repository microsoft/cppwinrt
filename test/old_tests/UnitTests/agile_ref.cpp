#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::System::Threading;

IAsyncAction test_agile_ref()
{
    Uri object(L"http://host/path");

    //
    // Here we're creating an agile_ref explicitly and using a traditional lambda variable capture
    // to pass it to the delegate.
    //

    agile_ref<Uri> ref = object;

    co_await ThreadPool::RunAsync([ref](auto && ...)
    {
        Uri object = ref.get();

        REQUIRE(object.ToString() == L"http://host/path");
    });

    //
    // Here's we're using the make_agile helper with generalized lambda capture to produce a
    // variable local to the lambda.
    //

    co_await ThreadPool::RunAsync([ref = make_agile(object)](auto && ...)
    {
        Uri object = ref.get();

        REQUIRE(object.ToString() == L"http://host/path");
    });
}

TEST_CASE("agile_ref")
{
    test_agile_ref().get();
}

TEST_CASE("empty")
{
    agile_ref<Uri> ref;

    Uri uri = ref.get();
    REQUIRE(uri == nullptr);
}
