#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Graphics::Effects;

// Validates that exceptions can be raise through properties.

namespace
{
    struct properties : implements<properties, IGraphicsEffect>
    {
        hstring Name()
        {
            if (m_value == L"throw")
            {
                throw hresult_invalid_argument(L"throw");
            }

            return m_value;
        }

        void Name(hstring const& value)
        {
            m_value = value;

            if (m_value == L"throw")
            {
                throw hresult_invalid_argument(L"throw");
            }
        }

        hstring m_value;
    };
}

TEST_CASE("properties")
{
    IGraphicsEffect e = make<properties>();

    REQUIRE(e.Name() == L"");
    e.Name(L"value");
    REQUIRE(e.Name() == L"value");

    REQUIRE_THROWS_AS(e.Name(L"throw"), hresult_invalid_argument);
    REQUIRE_THROWS_AS(e.Name(), hresult_invalid_argument);

}

namespace
{
    // Make sure that statements like
    //
    //    e.Name() = L"Fred";       // intended e.Name(L"Fred");
    //    e.Uri() = newUri;         // intended e.Uri(newUri);
    //
    // are not valid. These are common beginner errors when
    // trying to set Windows Runtime properties.

    template<typename T, bool default_constructible, typename... ConstructorArgs>
    struct validate_rvalue_operations
    {
        // Make sure we didn't damage default constructor.
        static_assert(std::is_default_constructible_v<T> == default_constructible);

        // Make sure we didn't damage other constructors.
        static_assert((std::is_constructible_v<T, ConstructorArgs> && ...));

        // Make sure we didn't damage copy and move constructors.
        static_assert(std::is_copy_constructible_v<T>);
        static_assert(std::is_move_constructible_v<T>);

        // Make sure rvalue assignment is disallowed, but lvalue is still okay.
        static_assert(!std::is_assignable_v<T&&, T>);
        static_assert((!std::is_assignable_v<T&&, ConstructorArgs> && ...));
        static_assert(std::is_assignable_v<T&, T>);
        static_assert((std::is_assignable_v<T&, ConstructorArgs> && ...));

        constexpr static bool validate()
        {
            // Dummy method. Exists only to force instantiation of type so the static_assert's will fire.
            return true;
        }
    };

    static_assert(validate_rvalue_operations<hstring, true, const wchar_t*>::validate());
    static_assert(validate_rvalue_operations<Windows::Foundation::IInspectable, true, std::nullptr_t>::validate());
    static_assert(validate_rvalue_operations<Windows::Foundation::IActivationFactory, true, std::nullptr_t>::validate());
    static_assert(validate_rvalue_operations<Windows::Foundation::IAsyncOperation<int32_t>, true, std::nullptr_t>::validate());
    static_assert(validate_rvalue_operations<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>, true, std::nullptr_t>::validate());
    static_assert(validate_rvalue_operations<Windows::Foundation::IUriRuntimeClass, true, std::nullptr_t>::validate());
    static_assert(validate_rvalue_operations<Windows::Foundation::Uri, false /* not default constructible */, std::nullptr_t>::validate());
}
