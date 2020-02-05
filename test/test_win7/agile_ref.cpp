#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    struct Object : implements<Object, IStringable>
    {
        hstring ToString()
        {
            return L"Object";
        }
    };
}

TEST_CASE("agile_ref")
{
    agile_ref<IStringable> ref = make<Object>();

    //
    // Here we're creating an agile_ref explicitly and using a traditional lambda variable capture
    // to pass it to the delegate.
    //

    delegate<> a = [ref]
    {
        IStringable object = ref.get();
        REQUIRE(object.ToString() == L"Object");
    };

    a();

    //
    // Here's we're using the make_agile helper with generalized lambda capture to produce a
    // variable local to the lambda.
    //

    delegate<> b = [ref = make_agile(make<Object>())]
    {
        IStringable object = ref.get();
        REQUIRE(object.ToString() == L"Object");
    };

    b();

    //
    // And it's ok to resolve a nullptr agile_ref.
    //

    agile_ref<IStringable> empty;
    IStringable object = empty.get();
    REQUIRE(object == nullptr);
}
