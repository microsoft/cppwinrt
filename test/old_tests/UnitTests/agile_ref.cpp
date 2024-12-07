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

    co_await ThreadPool::RunAsync(
        [ref](auto&&...)
        {
            Uri object = ref.get();

            REQUIRE(object.ToString() == L"http://host/path");
        });

    //
    // Here's we're using the make_agile helper with generalized lambda capture to produce a
    // variable local to the lambda.
    //

    co_await ThreadPool::RunAsync(
        [ref = make_agile(object)](auto&&...)
        {
            Uri object = ref.get();

            REQUIRE(object.ToString() == L"http://host/path");
        });
}

#if defined(__clang__) && defined(_MSC_VER) && (defined(_M_IX86) || defined(__i386__))
// FIXME: Test is known to crash from calling invalid address on x86 when built with Clang.
TEST_CASE("agile_ref", "[.clang-crash]")
#elif defined(__GNUC__) && !defined(__clang__)
// FIXME: Test is known to randomly crash or abort when built with GCC (segfaults under appverifier).
TEST_CASE("agile_ref", "[.gcc-crash]")
#else
TEST_CASE("agile_ref")
#endif
{
    test_agile_ref().get();
}

TEST_CASE("empty")
{
    agile_ref<Uri> ref;

    Uri uri = ref.get();
    REQUIRE(uri == nullptr);
}
