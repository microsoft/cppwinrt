#include "pch.h"
#include "catch.hpp"
#include "winrt/Composable.h"
#include <windows.foundation.h>

using namespace winrt;
using namespace Windows::Foundation;
using namespace Composable;

using namespace std::string_view_literals;
using hstring = ::winrt::hstring;

namespace
{
    constexpr auto Base_VirtualMethod{ L"Base::VirtualMethod"sv };
    constexpr auto Base_OverridableMethod{ L"Base::OverridableMethod"sv };
    constexpr auto Base_OverridableVirtualMethod{ L"Base::OverridableVirtualMethod"sv };
    constexpr auto Base_OverridableNoexceptMethod{ 42 };
    constexpr auto Base_ProtectedMethod{ 0xDEADBEEF };

    constexpr auto Derived_VirtualMethod{ L"Derived::VirtualMethod"sv };
    constexpr auto Derived_OverridableVirtualMethod{ L"Derived::OverridableVirtualMethod"sv };

    constexpr auto OverriddenBase_OverridableMethod{ L"OverriddenBase::OverridableMethod"sv };
    constexpr auto OverriddenBase_OverridableVirtualMethod{ L"OverriddenBase::OverridableVirtualMethod"sv };
    constexpr auto OverriddenBase_OverridableNoexceptMethod{ 1337 };
}

TEST_CASE("Composable.Base")
{
    Base base;
    REQUIRE(base.VirtualMethod() == Base_VirtualMethod);
    REQUIRE(base.CallOverridableMethod() == Base_OverridableMethod);
    REQUIRE(base.CallOverridableVirtualMethod() == Base_OverridableVirtualMethod);
    REQUIRE(base.CallOverridableNoexceptMethod() == Base_OverridableNoexceptMethod);
}

TEST_CASE("Composable.OverriddenBase")
{
    {
        struct OverriddenBase : BaseT<OverriddenBase>
        {
        };
        auto object = make<OverriddenBase>();
        REQUIRE(object.VirtualMethod() == Base_VirtualMethod);
        REQUIRE(object.CallOverridableMethod() == Base_OverridableMethod);
        REQUIRE(object.CallOverridableVirtualMethod() == Base_OverridableVirtualMethod);
        REQUIRE(object.CallOverridableNoexceptMethod() == Base_OverridableNoexceptMethod);
    }
    {
        struct OverriddenBase : BaseT<OverriddenBase>
        {
            hstring OverridableMethod() const
            {
                return hstring(OverriddenBase_OverridableMethod);
            }

            hstring OverridableVirtualMethod() const
            {
                return hstring(OverriddenBase_OverridableVirtualMethod);
            }

            int32_t OverridableNoexceptMethod() const noexcept
            {
                return OverriddenBase_OverridableNoexceptMethod;
            }

            int32_t CallProtectedMethod()
            {
                return ProtectedMethod();
            }
        };

        auto object_self = make_self<OverriddenBase>();
        auto object = object_self.as<Base>();
        REQUIRE(object.VirtualMethod() == Base_VirtualMethod);
        REQUIRE(object.CallOverridableMethod() == OverriddenBase_OverridableMethod);
        REQUIRE(object.CallOverridableVirtualMethod() == OverriddenBase_OverridableVirtualMethod);
        REQUIRE(object.CallOverridableNoexceptMethod() == OverriddenBase_OverridableNoexceptMethod);
        REQUIRE(object_self->CallProtectedMethod() == Base_ProtectedMethod);
    }
    {
        const std::wstring OverridableMethodResult = std::wstring(OverriddenBase_OverridableMethod) + L"=>" + Base_OverridableMethod.data();
        const std::wstring OverridableVirtualMethodResult = std::wstring(OverriddenBase_OverridableVirtualMethod) + L"=>" + Base_OverridableVirtualMethod.data();
        const int32_t OverridableNoexceptMethodResult = OverriddenBase_OverridableNoexceptMethod + Base_OverridableNoexceptMethod;

        struct OverriddenBase : BaseT<OverriddenBase>
        {
            hstring OverridableMethod() const
            {
                return OverriddenBase_OverridableMethod + L"=>" + BaseT<OverriddenBase>::OverridableMethod();
            }

            hstring OverridableVirtualMethod() const
            {
                return OverriddenBase_OverridableVirtualMethod + L"=>" + BaseT<OverriddenBase>::OverridableVirtualMethod();
            }

            int32_t OverridableNoexceptMethod() const noexcept
            {
                return OverriddenBase_OverridableNoexceptMethod + BaseT<OverriddenBase>::OverridableNoexceptMethod();
            }
        };
        auto object = make<OverriddenBase>();
        REQUIRE(object.VirtualMethod() == Base_VirtualMethod);
        REQUIRE(object.CallOverridableMethod() == OverridableMethodResult);
        REQUIRE(object.CallOverridableVirtualMethod() == OverridableVirtualMethodResult);
        REQUIRE(object.CallOverridableNoexceptMethod() == OverridableNoexceptMethodResult);
    }
}

TEST_CASE("Composable.Derived")
{
    Derived obj{ L"Foo" };
    REQUIRE(obj.Name() == L"Foo");
    REQUIRE(obj.VirtualMethod() == Derived_VirtualMethod);
    REQUIRE(obj.CallOverridableMethod() == Base_OverridableMethod);
    REQUIRE(obj.CallOverridableVirtualMethod() == Derived_OverridableVirtualMethod);
    REQUIRE(obj.CallOverridableNoexceptMethod() == Base_OverridableNoexceptMethod);
    REQUIRE(obj.CallProtectedMethod() == Base_ProtectedMethod);
}

namespace
{
    // Check for implicit conversions to base types/interfaces from unsealed projection types
    void CallIBase(Composable::IBase const&) {}
    void CallBase(Composable::Base const&) {}
    void CallIDerived(Composable::IDerived const&) {}
    void CallDerived(Composable::Derived const&) {}

    struct Foo : Composable::BaseT<Foo> {};

    void TestCalls(Foo const& obj)
    {
        CallIBase(obj);
        CallBase(obj);
    }

    struct Bar : Composable::DerivedT<Bar> {};

    void TestCalls(Bar const& obj)
    {
        CallIBase(obj);
        CallBase(obj);
        CallIDerived(obj);
        CallDerived(obj);
    }

    template <typename T, typename = void>
    struct has_ProtectedMember : std::false_type { };

    template <typename T>
    struct has_ProtectedMember<T, std::enable_if_t<std::is_member_function_pointer_v<decltype(&T::ProtectedMember)>>> : std::true_type { };

    // make sure we can't access protected members directly
    static_assert(!has_ProtectedMember<Composable::Base>::value);
    static_assert(!has_ProtectedMember<Composable::Derived>::value);
    static_assert(!has_ProtectedMember<Foo>::value);
    static_assert(!has_ProtectedMember<Bar>::value);

    // make sure we can't implicitly convert to IBaseProtected
    static_assert(!std::is_convertible_v<Composable::Base, Composable::IBaseProtected>);
    static_assert(!std::is_convertible_v<Composable::Derived, Composable::IBaseProtected>);
    static_assert(!std::is_convertible_v<Foo, Composable::IBaseProtected>);
    static_assert(!std::is_convertible_v<Bar, Composable::IBaseProtected>);
}

TEST_CASE("Composable conversions")
{
    TestCalls(*make_self<Foo>());
    TestCalls(*make_self<Bar>());
}

namespace
{
    // Creates an implementation of IStringable as a tearoff.
    HRESULT make_stringable(winrt::Windows::Foundation::IInspectable const& object, hstring const& value, void** result) noexcept
    {
        struct stringable final : ABI::Windows::Foundation::IStringable
        {
            stringable(winrt::Windows::Foundation::IInspectable const& object, hstring const& value) :
                m_object(object.as<::IInspectable>()),
                m_value(value)
            {
            }

            HRESULT __stdcall ToString(HSTRING* result) noexcept final
            {
                return WindowsDuplicateString(static_cast<HSTRING>(get_abi(m_value)), result);
            }

            HRESULT __stdcall QueryInterface(GUID const& id, void** result) noexcept final
            {
                if (is_guid_of<IStringable>(id))
                {
                    *result = static_cast<ABI::Windows::Foundation::IStringable*>(this);
                    AddRef();
                    return S_OK;
                }

                return m_object->QueryInterface(id, result);
            }

            ULONG __stdcall AddRef() noexcept final
            {
                return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
            }

            ULONG __stdcall Release() noexcept final
            {
                uint32_t const remaining = m_references.fetch_sub(1, std::memory_order_relaxed) - 1;

                if (remaining == 0)
                {
                    delete this;
                }

                return remaining;
            }

            HRESULT __stdcall GetIids(ULONG* count, GUID** iids) noexcept final
            {
                return m_object->GetIids(count, iids);
            }

            HRESULT __stdcall GetRuntimeClassName(HSTRING* result) noexcept final
            {
                return m_object->GetRuntimeClassName(result);
            }

            HRESULT __stdcall GetTrustLevel(::TrustLevel* result) noexcept final
            {
                return m_object->GetTrustLevel(result);
            }

        private:

            com_ptr<::IInspectable> m_object;
            hstring m_value;
            std::atomic<uint32_t> m_references{ 1 };
        };

        *result = new (std::nothrow) stringable(object, value);
        return *result ? S_OK : E_OUTOFMEMORY;
    }
}

TEST_CASE("Composable tearoff")
{
    struct Tearoff : DerivedT<Tearoff, IClosable>
    {
        void Close()
        {
        }

        int32_t query_interface_tearoff(winrt::guid const& id, void** result) const noexcept final
        {
            if (is_guid_of<IStringable>(id))
            {
                return make_stringable(*this, L"ToString", result);
            }

            *result = nullptr;
            return E_NOINTERFACE;
        }

        std::vector<winrt::guid> get_iids_tearoff() const noexcept final
        {
            return {winrt::guid_of<IStringable>()};
        }
    };

    auto object = make<Tearoff>();
    auto ifaces = get_interfaces(object);

    REQUIRE(object.as<IClosable>());
    REQUIRE(object.as<IStringable>());
    // IBaseOverrides is repeated twice for some reason, so actual size is 7 but there are only 6 unique interfaces
    REQUIRE(ifaces.size() >= 6);
    REQUIRE(std::find(ifaces.begin(), ifaces.end(), winrt::guid_of<Base>()) != ifaces.end());
    REQUIRE(std::find(ifaces.begin(), ifaces.end(), winrt::guid_of<IBaseProtected>()) != ifaces.end());
    REQUIRE(std::find(ifaces.begin(), ifaces.end(), winrt::guid_of<IBaseOverrides>()) != ifaces.end());
    REQUIRE(std::find(ifaces.begin(), ifaces.end(), winrt::guid_of<Derived>()) != ifaces.end());
    REQUIRE(std::find(ifaces.begin(), ifaces.end(), winrt::guid_of<IClosable>()) != ifaces.end());
    REQUIRE(std::find(ifaces.begin(), ifaces.end(), winrt::guid_of<IStringable>()) != ifaces.end());
}
