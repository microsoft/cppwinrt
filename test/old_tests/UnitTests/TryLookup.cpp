#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;

namespace
{
    struct stringable : implements<stringable, IStringable>
    {
        explicit stringable(hstring value) : m_value(std::move(value))
        {
        }

        hstring ToString() const
        {
            return m_value;
        }

        hstring const m_value;
    };
}

TEST_CASE("TryLookup")
{
    {
        // Covers the hstring partial specialization.

        // Not found
        auto map = single_threaded_map<hstring, IStringable>();
        REQUIRE_THROWS_AS(map.Lookup(L"key"), hresult_out_of_bounds);
        REQUIRE(!map.TryLookup(L"key"));

        // Found but value is nullptr
        map.Insert(L"key", nullptr);
        REQUIRE(map.Lookup(L"key") == nullptr);
        REQUIRE(!map.TryLookup(L"key"));

        // Found
        map.Insert(L"key", make<stringable>(L"value"));
        REQUIRE(map.Lookup(L"key").ToString() == L"value");
        REQUIRE(map.TryLookup(L"key").ToString() == L"value");
    }

    {
        // Covers the base template.

        // Not found
        auto map = single_threaded_map<int, IStringable>();
        REQUIRE_THROWS_AS(map.Lookup(123), hresult_out_of_bounds);
        REQUIRE(!map.TryLookup(123));

        // Found but value is nullptr
        map.Insert(123, nullptr);
        REQUIRE(map.Lookup(123) == nullptr);
        REQUIRE(!map.TryLookup(123));

        // Found
        map.Insert(123, make<stringable>(L"value"));
        REQUIRE(map.Lookup(123).ToString() == L"value");
        REQUIRE(map.TryLookup(123).ToString() == L"value");
    }

    {
        // Covers the hstring partial specialization returning std:optional.

        // Not found
        auto map = single_threaded_map<hstring, int>();
        REQUIRE_THROWS_AS(map.Lookup(L"key"), hresult_out_of_bounds);
        REQUIRE(!map.TryLookup(L"key"));

        // Found
        map.Insert(L"key", 456);
        REQUIRE(map.Lookup(L"key") == 456);
        REQUIRE(map.TryLookup(L"key").value() == 456);
    }

    {
        // Covers the base template returning std:optional.

        // Not found
        auto map = single_threaded_map<int, int>();
        REQUIRE_THROWS_AS(map.Lookup(123), hresult_out_of_bounds);
        REQUIRE(!map.TryLookup(123));

        // Found
        map.Insert(123, 456);
        REQUIRE(map.Lookup(123) == 456);
        REQUIRE(map.TryLookup(123).value() == 456);
    }
}

TEST_CASE("TryRemove")
{
    auto map = single_threaded_map<int, IStringable>(std::map<int, IStringable>{
            { 123, nullptr },
            { 124, make<stringable>(L"remove") },
            { 125, make<stringable>(L"keep") },
        });

    REQUIRE(map.TryRemove(122) == false);
    REQUIRE(map.TryRemove(123) == true);
    REQUIRE(map.TryRemove(124) == true);

    // Should still have one item left.
    REQUIRE(map.Size() == 1);
    REQUIRE(map.Lookup(125).ToString() == L"keep");
}

TEST_CASE("TryLookup TryRemove error")
{
    // A map that throws a specific error, used to verify various edge cases.
    struct error_map : implements<error_map, IMap<int, int>>
    {
        hresult code;
        int Lookup(int) { throw_hresult(code); }
        int32_t Size() { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        bool HasKey(int) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        IMapView<int, int> GetView() { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        bool Insert(int, int) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        void Remove(int) { throw_hresult(code); }
        void Clear() { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
    };
    
    auto self = make_self<error_map>();
    IMap<int, int> map = *self;

    // Simulate a non-agile map that is being accessed from the wrong thread.
    // "Try" operations should throw rather than erroneously report "not found".
    // Because they didn't even try. The operation never got off the ground.
    self->code = RPC_E_WRONG_THREAD;
    REQUIRE_THROWS_AS(map.TryLookup(123), hresult_wrong_thread);
    REQUIRE_THROWS_AS(map.TryRemove(123), hresult_wrong_thread);

    // Some implementations return HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND)
    // or E_FAIL when the key is not present.
    self->code = HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND);
    REQUIRE(!map.TryLookup(123));
    REQUIRE(!map.TryRemove(123));

    self->code = E_FAIL;
    REQUIRE(!map.TryLookup(123));
    REQUIRE(!map.TryRemove(123));

}

TEST_CASE("trylookup_from_abi specialization")
{
    // A map that throws a specific error, used to verify various edge cases.
    // and implements tryLookup, to take advantage of an optimization to avoid a throw. 
    struct map_with_try_lookup : implements<map_with_try_lookup, IMapView<int, int>>
    {
        hresult codeToThrow{ S_OK };
        bool shouldThrowOnTryLookup{ false };
        std::optional<int> TryLookup(int, trylookup_from_abi_t)
        {
            if (shouldThrowOnTryLookup)
            { 
                throw_hresult(codeToThrow); 
            }
            else
            {
                return { std::nullopt };
            }
        }
        int Lookup(int) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        int32_t Size() { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        bool HasKey(int) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        void Split(IMapView<int, int>&, IMapView<int, int>&) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
    };

    auto self = make_self<map_with_try_lookup>();
    IMapView<int, int> map = *self;

    // Make sure that we use the TryLookup specialization, and don't throw an unexpected exception.
    self->shouldThrowOnTryLookup = false;
    REQUIRE(!map.TryLookup(123));
    // make sure regular lookup stll throws bounds
    REQUIRE_THROWS_AS(map.Lookup(123), hresult_out_of_bounds);
    
    // Simulate a non-agile map that is being accessed from the wrong thread.
    // "Try" operations should throw rather than erroneously report "not found".
    // Because they didn't even try. The operation never got off the ground.
    self->shouldThrowOnTryLookup = true;
    self->codeToThrow = RPC_E_WRONG_THREAD;
    REQUIRE_THROWS_AS(map.TryLookup(123), hresult_wrong_thread);
    // regular lookup should throw the same error
    REQUIRE_THROWS_AS(map.Lookup(123), hresult_wrong_thread);
}

TEST_CASE("trylookup_from_abi NOT opt-in, no special tag")
{
    // Makes sure that an existing TryLookup method is not called without the trylookup_from_abi_t tag.
    struct map_without_try_lookup : implements<map_without_try_lookup, IMapView<int, int>>
    {
        hresult codeToThrow{ S_OK };
        std::optional<int> TryLookup(int) // notice no trylookup_from_abi_t, so no opt-in
        {
            // throw an unexpectd hresult, this should not be called. 
            throw_hresult(RPC_E_WRONG_THREAD);
        }
        int Lookup(int) { return 42; } // Behave as if the item was found

        int32_t Size() { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        bool HasKey(int) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        void Split(IMapView<int, int>&, IMapView<int, int>&) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
    };

    auto self = make_self<map_without_try_lookup>();
    IMapView<int, int> map = *self;

    // Make sure that we don't use the TryLookup specialization, we use the Successful Lookup
    REQUIRE(map.TryLookup(123).value() == 42);
    REQUIRE(map.Lookup(123) == 42);
}

TEST_CASE("trylookup_from_abi specialization with IInspectable")
{
    // A map that throws a specific error, used to verify various edge cases.
    // and implements tryLookup, to take advantage of an optimization to avoid a throw. 
    struct map_with_try_lookup : implements<map_with_try_lookup, IMapView<int, IInspectable>>
    {
        hresult codeToThrow{ S_OK };
        bool shouldThrowOnTryLookup{ false };
        bool returnNullptr{ false };
        std::optional<IInspectable> TryLookup(int, trylookup_from_abi_t)
        {
            if (returnNullptr)
            {
                return { nullptr };
            }
            else if (shouldThrowOnTryLookup)
            { 
                throw_hresult(codeToThrow); 
            }
            else
            {
                return { std::nullopt };
            }
        }
        IInspectable Lookup(int) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        int32_t Size() { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        bool HasKey(int) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
        void Split(IMapView<int, IInspectable>&, IMapView<int, IInspectable>&) { throw_hresult(E_UNEXPECTED); } // shouldn't be called by the test
    };

    auto self = make_self<map_with_try_lookup>();
    IMapView<int, IInspectable> map = *self;

    // Ensure that we return a value on nullptr, a nullptr is a valid IInspectable in the Map
    self->returnNullptr = true;
    REQUIRE(map.TryLookup(123) == IInspectable{nullptr});
    REQUIRE(map.Lookup(123) == IInspectable{nullptr});
    
    // Make sure that we use the TryLookup specialization, and don't throw an unexpected exception.
    self->shouldThrowOnTryLookup = false;
    self->returnNullptr = false;
    REQUIRE(map.TryLookup(123) == IInspectable{nullptr});
    // make sure regular lookup stll throws bounds
    REQUIRE_THROWS_AS(map.Lookup(123), hresult_out_of_bounds);

    // Simulate a non-agile map that is being accessed from the wrong thread.
    // "Try" operations should throw rather than erroneously report "not found".
    // Because they didn't even try. The operation never got off the ground.
    self->shouldThrowOnTryLookup = true;
    self->codeToThrow = RPC_E_WRONG_THREAD;
    REQUIRE_THROWS_AS(map.TryLookup(123), hresult_wrong_thread);
    // regular lookup should throw the same error
    REQUIRE_THROWS_AS(map.Lookup(123), hresult_wrong_thread);
}
