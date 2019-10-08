#include "pch.h"
#include "winrt/test_component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace test_component;

TEST_CASE("uniform_in_params")
{
    Class{ single_threaded_vector<hstring>({ L"test" }).as<IIterable<hstring>>(), 0 };
    Class{ single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"test", L"test" } }).as<IIterable<IKeyValuePair<hstring, hstring>>>(), 0, 0 };
    Class{ single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"test", L"test" } }), 0, 0, 0 };
    Class{ single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"test", L"test" } }).GetView(), 0, 0, 0, 0 };
    Class{ single_threaded_vector<hstring>({ L"test" }), 0, 0, 0, 0, 0 };
    Class{ single_threaded_vector<hstring>({ L"test" }).GetView(), 0, 0, 0, 0, 0, 0 };

    Class c;
    REQUIRE(L"test" == c.InIterable({L"test"}));
    REQUIRE(L"test" == c.InIterablePair(single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"test", L"test" } })));
    REQUIRE(L"test" == c.InAsyncIterable({ L"test" }).get());
    REQUIRE(L"test" == c.InAsyncIterablePair(single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"test", L"test" } })).get());
    REQUIRE(L"test" == c.InMap(single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"test", L"test" } })));
    REQUIRE(L"test" == c.InMapView(single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"test", L"test" } }).GetView()));
    REQUIRE(L"test" == c.InAsyncMapView(single_threaded_map<hstring, hstring>(std::map<hstring, hstring>{ {L"test", L"test" } }).GetView()).get());
    REQUIRE(L"test" == c.InVector({ L"test" }));
    REQUIRE(L"test" == c.InVectorView({ L"test" }));
    REQUIRE(L"test" == c.InAsyncVectorView({ L"test" }).get());
}
