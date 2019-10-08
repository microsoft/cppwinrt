#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows;
using namespace Windows::Graphics::Display;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;


//
// Each of the sections in this test case exercises a unique edge case presented by an existing delegate in the Windows SDK.
// 
TEST_CASE("delegate,return")
{
    //
    // This delegate returns a bool value.
    //
    SECTION("PerceptionStartFaceAuthenticationHandler")
    {
        using namespace Windows::Devices::Perception::Provider;

        bool expected = true;

        PerceptionStartFaceAuthenticationHandler handler = [&] (IPerceptionFaceAuthenticationGroup const &)
        {
            return expected;
        };

        REQUIRE(true == handler(nullptr));

        expected = false;

        REQUIRE(false == handler(nullptr));
    }

    //
    // This delegate returns an IInspectable value.
    //
    SECTION("CreateDefaultValueCallback")
    {
        using namespace Windows::Foundation;
        using namespace Windows::UI::Xaml;

        CreateDefaultValueCallback handler = []
        {
            return Uri(L"http://moderncpp.com/");
        };

        Windows::Foundation::IInspectable result = handler();

        Uri uri = result.as<Uri>();

        REQUIRE(uri.Domain() == L"moderncpp.com");
    }

    //
    // This one covers all the particular ways you can return a string from a delegate, which happens to require specific TMP support.
    //
    SECTION("ListViewItemToKeyHandler")
    {
        using namespace Windows::UI::Xaml::Controls;

        {
            ListViewItemToKeyHandler handler = [] (Windows::Foundation::IInspectable const &) { return L"raw"; };

            hstring result = handler(nullptr);

            REQUIRE(result == L"raw");
        }

        {
            ListViewItemToKeyHandler handler = [](Windows::Foundation::IInspectable const &)
            {
                return hstring(L"hstring");
            };

            hstring result = handler(nullptr);

            REQUIRE(result == L"hstring");
        }
    }

    //
    // This just verifies that the delegate is correctly projected to return an IAsyncOperation.
    //
    SECTION("ListViewKeyToItemHandler")
    {
        using namespace Windows::Foundation;
        using namespace Windows::UI::Xaml::Controls;

        ListViewKeyToItemHandler handler = [] (hstring const&)
        {
            return nullptr;
        };

        IAsyncOperation<Windows::Foundation::IInspectable> result = handler(L"key");
    }
}

Windows::Foundation::IInspectable Handler()
{
    return Uri(L"http://free/");
}

struct MemberHandler
{
    Uri m_uri { L"http://member/" };

    Windows::Foundation::IInspectable Handler()
    {
        return m_uri;
    }
};

TEST_CASE("delegate,binding")
{
    SECTION("free function")
    {
        using namespace Windows::Foundation;
        using namespace Windows::UI::Xaml;

        CreateDefaultValueCallback handler = Handler;

        Windows::Foundation::IInspectable result = handler();

        Uri uri = result.as<Uri>();

        REQUIRE(uri.Host() == L"free");
    }

    SECTION("member function")
    {
        using namespace Windows::Foundation;
        using namespace Windows::UI::Xaml;

        MemberHandler that;

        CreateDefaultValueCallback handler = { &that, &MemberHandler::Handler };

        Windows::Foundation::IInspectable result = handler();

        Uri uri = result.as<Uri>();

        REQUIRE(uri.Host() == L"member");
    }

    SECTION("lambda")
    {
        using namespace Windows::Foundation;
        using namespace Windows::UI::Xaml;

        CreateDefaultValueCallback handler = []
        {
            return Uri(L"http://lambda/");
        };

        Windows::Foundation::IInspectable result = handler();

        Uri uri = result.as<Uri>();

        REQUIRE(uri.Host() == L"lambda");
    }
}

//
// Delegates defined in the base library
//

static void AsyncActionCompletedHandler_Free(IAsyncAction const & sender, AsyncStatus args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == AsyncStatus::Completed);
}

struct AsyncActionCompletedHandler_Member
{
    void Handler(IAsyncAction const & sender, AsyncStatus args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == AsyncStatus::Completed);
    }
};

TEST_CASE("delegate,AsyncActionCompletedHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        AsyncActionCompletedHandler a;
        AsyncActionCompletedHandler b = nullptr;
    }

    SECTION("lambda")
    {
        AsyncActionCompletedHandler h = [] (IAsyncAction const & sender, AsyncStatus args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == AsyncStatus::Completed);
        };

        h(nullptr, AsyncStatus::Completed);
    }

    SECTION("free function")
    {
        AsyncActionCompletedHandler h = AsyncActionCompletedHandler_Free;
        h(nullptr, AsyncStatus::Completed);
    }

    SECTION("member function")
    {
        AsyncActionCompletedHandler_Member object;
        AsyncActionCompletedHandler h { &object, &AsyncActionCompletedHandler_Member::Handler };
        h(nullptr, AsyncStatus::Completed);
    }
}

static void AsyncActionProgressHandler_Free(IAsyncActionWithProgress<double> const & sender, double args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == 123.0);
}

struct AsyncActionProgressHandler_Member
{
    void Handler(IAsyncActionWithProgress<double> const & sender, double args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == 123.0);
    }
};

TEST_CASE("delegate,AsyncActionProgressHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        AsyncActionProgressHandler<double> a;
        AsyncActionProgressHandler<double> b = nullptr;
    }

    SECTION("lambda")
    {
        AsyncActionProgressHandler<double> h = [](IAsyncActionWithProgress<double> const & sender, double args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == 123.0);
        };

        h(nullptr, 123.0);
    }

    SECTION("free function")
    {
        AsyncActionProgressHandler<double> h = AsyncActionProgressHandler_Free;
        h(nullptr, 123.0);
    }

    SECTION("member function")
    {
        AsyncActionProgressHandler_Member object;
        AsyncActionProgressHandler<double> h{ &object, &AsyncActionProgressHandler_Member::Handler };
        h(nullptr, 123.0);
    }
}

static void AsyncActionWithProgressCompletedHandler_Free(const IAsyncActionWithProgress<double> & sender, const AsyncStatus args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == AsyncStatus::Completed);
}

struct AsyncActionWithProgressCompletedHandler_Member
{
    void Handler(const IAsyncActionWithProgress<double> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == AsyncStatus::Completed);
    }
};

TEST_CASE("delegate,AsyncActionWithProgressCompletedHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        AsyncActionWithProgressCompletedHandler<double> a;
        AsyncActionWithProgressCompletedHandler<double> b = nullptr;
    }

    SECTION("lambda")
    {
        AsyncActionWithProgressCompletedHandler<double> h = [](const IAsyncActionWithProgress<double> & sender, const AsyncStatus args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == AsyncStatus::Completed);
        };

        h(nullptr, AsyncStatus::Completed);
    }

    SECTION("free function")
    {
        AsyncActionWithProgressCompletedHandler<double> h = AsyncActionWithProgressCompletedHandler_Free;
        h(nullptr, AsyncStatus::Completed);
    }

    SECTION("member function")
    {
        AsyncActionWithProgressCompletedHandler_Member object;
        AsyncActionWithProgressCompletedHandler<double> h{ &object, &AsyncActionWithProgressCompletedHandler_Member::Handler };
        h(nullptr, AsyncStatus::Completed);
    }
}

static void AsyncOperationProgressHandler_Free(const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, uint64_t args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == 123);
}

struct AsyncOperationProgressHandler_Member
{
    void Handler(const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, uint64_t args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == 123);
    }
};

TEST_CASE("delegate,AsyncOperationProgressHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        AsyncOperationProgressHandler<uint64_t, uint64_t> a;
        AsyncOperationProgressHandler<uint64_t, uint64_t> b = nullptr;
    }

    SECTION("lambda")
    {
        AsyncOperationProgressHandler<uint64_t, uint64_t> h = [](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, uint64_t args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == 123);
        };

        h(nullptr, 123);
    }

    SECTION("free function")
    {
        AsyncOperationProgressHandler<uint64_t, uint64_t> h = AsyncOperationProgressHandler_Free;
        h(nullptr, 123);
    }

    SECTION("member function")
    {
        AsyncOperationProgressHandler_Member object;
        AsyncOperationProgressHandler<uint64_t, uint64_t> h{ &object, &AsyncOperationProgressHandler_Member::Handler };
        h(nullptr, 123);
    }
}

static void AsyncOperationWithProgressCompletedHandler_Free(const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, const AsyncStatus args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == AsyncStatus::Completed);
}

struct AsyncOperationWithProgressCompletedHandler_Member
{
    void Handler(const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, const AsyncStatus args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == AsyncStatus::Completed);
    }
};

TEST_CASE("delegate,AsyncOperationWithProgressCompletedHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> a;
        AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> b = nullptr;
    }

    SECTION("lambda")
    {
        AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> h = [](const IAsyncOperationWithProgress<uint64_t, uint64_t> & sender, const AsyncStatus args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == AsyncStatus::Completed);
        };

        h(nullptr, AsyncStatus::Completed);
    }

    SECTION("free function")
    {
        AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> h = AsyncOperationWithProgressCompletedHandler_Free;
        h(nullptr, AsyncStatus::Completed);
    }

    SECTION("member function")
    {
        AsyncOperationWithProgressCompletedHandler_Member object;
        AsyncOperationWithProgressCompletedHandler<uint64_t, uint64_t> h{ &object, &AsyncOperationWithProgressCompletedHandler_Member::Handler };
        h(nullptr, AsyncStatus::Completed);
    }
}

static void AsyncOperationCompletedHandler_Free(IAsyncOperation<bool> const & sender, const AsyncStatus args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == AsyncStatus::Completed);
}

struct AsyncOperationCompletedHandler_Member
{
    void Handler(IAsyncOperation<bool> const & sender, const AsyncStatus args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == AsyncStatus::Completed);
    }
};

TEST_CASE("delegate,AsyncOperationCompletedHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        AsyncOperationCompletedHandler<bool> a;
        AsyncOperationCompletedHandler<bool> b = nullptr;
    }

    SECTION("lambda")
    {
        AsyncOperationCompletedHandler<bool> h = [](IAsyncOperation<bool> const & sender, const AsyncStatus args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == AsyncStatus::Completed);
        };

        h(nullptr, AsyncStatus::Completed);
    }

    SECTION("free function")
    {
        AsyncOperationCompletedHandler<bool> h = AsyncOperationCompletedHandler_Free;
        h(nullptr, AsyncStatus::Completed);
    }

    SECTION("member function")
    {
        AsyncOperationCompletedHandler_Member object;
        AsyncOperationCompletedHandler<bool> h{ &object, &AsyncOperationCompletedHandler_Member::Handler };
        h(nullptr, AsyncStatus::Completed);
    }
}

static void EventHandler_Free(const Windows::Foundation::IInspectable & sender, const Windows::Foundation::IInspectable & args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == nullptr);
}

struct EventHandler_Member
{
    void Handler(const Windows::Foundation::IInspectable & sender, const Windows::Foundation::IInspectable & args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == nullptr);
    }
};

TEST_CASE("delegate,EventHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        EventHandler<bool> a;
        EventHandler<bool> b = nullptr;
    }

    SECTION("lambda")
    {
        EventHandler<Windows::Foundation::IInspectable> h = [](const Windows::Foundation::IInspectable & sender, const Windows::Foundation::IInspectable & args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == nullptr);
        };

        h(nullptr, nullptr);
    }

    SECTION("free function")
    {
        EventHandler<Windows::Foundation::IInspectable> h = EventHandler_Free;
        h(nullptr, nullptr);
    }

    SECTION("member function")
    {
        EventHandler_Member object;
        EventHandler<Windows::Foundation::IInspectable> h{ &object, &EventHandler_Member::Handler };
        h(nullptr, nullptr);
    }
}

static void TypedEventHandler_Free(const Windows::Foundation::IInspectable & sender, const Windows::Foundation::IInspectable & args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == nullptr);
}

struct TypedEventHandler_Member
{
    void Handler(const Windows::Foundation::IInspectable & sender, const Windows::Foundation::IInspectable & args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == nullptr);
    }
};

TEST_CASE("delegate,TypedEventHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> a;
        TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> b = nullptr;
    }

    SECTION("lambda")
    {
        TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> h = [](const DisplayInformation & sender, const Windows::Foundation::IInspectable & args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == nullptr);
        };

        h(nullptr, nullptr);
    }

    SECTION("free function")
    {
        TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> h = TypedEventHandler_Free;
        h(nullptr, nullptr);
    }

    SECTION("member function")
    {
        TypedEventHandler_Member object;
        TypedEventHandler<DisplayInformation, Windows::Foundation::IInspectable> h{ &object, &TypedEventHandler_Member::Handler };
        h(nullptr, nullptr);
    }
}

static void VectorChangedEventHandler_Free(IObservableVector<Windows::Foundation::IInspectable> const & sender, IVectorChangedEventArgs const & args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == nullptr);
}

struct VectorChangedEventHandler_Member
{
    void Handler(IObservableVector<Windows::Foundation::IInspectable> const & sender, IVectorChangedEventArgs const & args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == nullptr);
    }
};

TEST_CASE("delegate,VectorChangedEventHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        VectorChangedEventHandler<Windows::Foundation::IInspectable> a;
        VectorChangedEventHandler<Windows::Foundation::IInspectable> b = nullptr;
    }

    SECTION("lambda")
    {
        VectorChangedEventHandler<Windows::Foundation::IInspectable> h = [](IObservableVector<Windows::Foundation::IInspectable> const & sender, IVectorChangedEventArgs const & args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == nullptr);
        };

        h(nullptr, nullptr);
    }

    SECTION("free function")
    {
        VectorChangedEventHandler<Windows::Foundation::IInspectable> h = VectorChangedEventHandler_Free;
        h(nullptr, nullptr);
    }

    SECTION("member function")
    {
        VectorChangedEventHandler_Member object;
        VectorChangedEventHandler<Windows::Foundation::IInspectable> h{ &object, &VectorChangedEventHandler_Member::Handler };
        h(nullptr, nullptr);
    }
}

static void MapChangedEventHandler_Free(IObservableMap<hstring, Windows::Foundation::IInspectable> const & sender, IMapChangedEventArgs<hstring> const & args)
{
    REQUIRE(sender == nullptr);
    REQUIRE(args == nullptr);
}

struct MapChangedEventHandler_Member
{
    void Handler(IObservableMap<hstring, Windows::Foundation::IInspectable> const & sender, IMapChangedEventArgs<hstring> const & args)
    {
        REQUIRE(sender == nullptr);
        REQUIRE(args == nullptr);
    }
};

TEST_CASE("delegate,MapChangedEventHandler")
{
    //
    // This section verifies that the default and nullptr_t constructor is present.
    //
    SECTION("default")
    {
        MapChangedEventHandler<hstring, Windows::Foundation::IInspectable> a;
        MapChangedEventHandler<hstring, Windows::Foundation::IInspectable> b = nullptr;
    }

    SECTION("lambda")
    {
        MapChangedEventHandler<hstring, Windows::Foundation::IInspectable> h = [](IObservableMap<hstring, Windows::Foundation::IInspectable> const & sender, IMapChangedEventArgs<hstring> const & args)
        {
            REQUIRE(sender == nullptr);
            REQUIRE(args == nullptr);
        };

        h(nullptr, nullptr);
    }

    SECTION("free function")
    {
        MapChangedEventHandler<hstring, Windows::Foundation::IInspectable> h = MapChangedEventHandler_Free;
        h(nullptr, nullptr);
    }

    SECTION("member function")
    {
        MapChangedEventHandler_Member object;
        MapChangedEventHandler<hstring, Windows::Foundation::IInspectable> h{ &object, &MapChangedEventHandler_Member::Handler };
        h(nullptr, nullptr);
    }
}

TEST_CASE("delegate,collection")
{
    //
    // Mostly a compiliation test to ensure that we can create collections of delegates. This is a rare corner case that was 
    // previously not working.
    //

    IVector<EventHandler<int>> v = single_threaded_vector<EventHandler<int>>();

    std::array<EventHandler<int>, 10> a;

    REQUIRE(0 == v.GetMany(0, a));
}
