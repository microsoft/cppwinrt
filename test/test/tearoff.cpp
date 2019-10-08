#include "pch.h"
#include <windows.foundation.h>

namespace abi
{
    using namespace ABI::Windows::Foundation;
}

namespace winrt
{
    using namespace Windows::Foundation;
}

namespace
{
    // Creates an implementation of IPersist as a tearoff.
    HRESULT make_persist(winrt::IUnknown const& object, void** result) noexcept
    {
        struct persist final : IPersist
        {
            persist(winrt::IUnknown const& object) :
                m_object(object.as<::IUnknown>())
            {
            }

            HRESULT __stdcall GetClassID(CLSID* result) noexcept final
            {
                *result = winrt::guid_of<IPersist>();
                return S_OK;
            }

            HRESULT __stdcall QueryInterface(GUID const& id, void** result) noexcept final
            {
                if (winrt::is_guid_of<IPersist>(id))
                {
                    *result = static_cast<IPersist*>(this);
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

        private:

            winrt::com_ptr<::IUnknown> m_object;
            std::atomic<uint32_t> m_references{ 1 };
        };

        *result = new (std::nothrow) persist(object);
        return *result ? S_OK : E_OUTOFMEMORY;
    }

    // Creates an implementation of IStringable as a tearoff.
    HRESULT make_stringable(winrt::IInspectable const& object, winrt::hstring const& value, void** result) noexcept
    {
        struct stringable final : abi::IStringable
        {
            stringable(winrt::IInspectable const& object, winrt::hstring const& value) :
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
                if (winrt::is_guid_of<winrt::IStringable>(id))
                {
                    *result = static_cast<abi::IStringable*>(this);
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

            winrt::com_ptr<::IInspectable> m_object;
            winrt::hstring m_value;
            std::atomic<uint32_t> m_references{ 1 };
        };

        *result = new (std::nothrow) stringable(object, value);
        return *result ? S_OK : E_OUTOFMEMORY;
    }

    struct InteropType : winrt::implements<InteropType, winrt::IClosable>
    {
        inline static bool Closed{};
        inline static bool Destroyed{};

        ~InteropType()
        {
            Destroyed = true;
        }

        void Close()
        {
            Closed = true;
        }

        int32_t query_interface_tearoff(winrt::guid const& id, void** result) const noexcept final
        {
            if (winrt::is_guid_of<IPersist>(id))
            {
                return make_persist(*this, result);
            }

            *result = nullptr;
            return E_NOINTERFACE;
        }
    };

    struct RuntimeType : winrt::implements<RuntimeType, winrt::IClosable>
    {
        inline static bool Closed{};
        inline static bool Destroyed{};

        ~RuntimeType()
        {
            Destroyed = true;
        }

        void Close()
        {
            Closed = true;
        }

        winrt::hstring GetRuntimeClassName()
        {
            return L"RuntimeClassName";
        }

        int32_t query_interface_tearoff(winrt::guid const& id, void** result) const noexcept final
        {
            if (winrt::is_guid_of<winrt::IStringable>(id))
            {
                return make_stringable(*this, L"ToString", result);
            }

            *result = nullptr;
            return E_NOINTERFACE;
        }
    };
}

TEST_CASE("tearoff")
{
    {
        winrt::IClosable closable = winrt::make<InteropType>();

        // IClosable is implemented directly on the object.
        REQUIRE(!InteropType::Closed);
        closable.Close();
        REQUIRE(InteropType::Closed);

        // IPersist is implemented as a tearoff.
        winrt::com_ptr<IPersist> persist = closable.as<IPersist>();
        GUID result;
        REQUIRE(S_OK == persist->GetClassID(&result));
        REQUIRE(winrt::is_guid_of<IPersist>(result));

        // query_interface_tearoff happily ignores any other queries.
        REQUIRE(closable.try_as<winrt::IActivationFactory>() == nullptr);

        {
            // Querying the tearoff forwards to the object.
            winrt::IClosable closable2 = persist.as<winrt::IClosable>();
            REQUIRE(winrt::get_abi(closable) == winrt::get_abi(closable2));

            // Querying the tearoff for itself returns the tearoff.
            winrt::com_ptr<IPersist> persist2 = persist.as<IPersist>();
            REQUIRE(winrt::get_abi(persist) == winrt::get_abi(persist2));
        }

        // Releasing a reference to the object does not destroy it since the tearoff keeps it alive.
        REQUIRE(!InteropType::Destroyed);
        closable = nullptr;
        REQUIRE(!InteropType::Destroyed);

        // Releasing the tearoff finally destroys the object.
        persist = nullptr;
        REQUIRE(InteropType::Destroyed);
    }
    {
        winrt::IClosable closable = winrt::make<RuntimeType>();

        // IClosable is implemented directly on the object.
        REQUIRE(!RuntimeType::Closed);
        closable.Close();
        REQUIRE(RuntimeType::Closed);

        // IStringable is implemented as a tearoff.
        winrt::IStringable stringable = closable.as<winrt::IStringable>();
        REQUIRE(stringable.ToString() == L"ToString");

        // Calling an IInspectable function on the tearoff forwards to the object.
        REQUIRE(winrt::get_class_name(stringable) == L"RuntimeClassName");

        // query_interface_tearoff happily ignores any other queries.
        REQUIRE(closable.try_as<winrt::IActivationFactory>() == nullptr);

        {
            // Querying the tearoff forwards to the object.
            winrt::IClosable closable2 = stringable.as<winrt::IClosable>();
            REQUIRE(winrt::get_abi(closable) == winrt::get_abi(closable2));

            // Querying the tearoff for itself returns the tearoff.
            winrt::IStringable stringable2 = stringable.as<winrt::IStringable>();
            REQUIRE(winrt::get_abi(stringable) == winrt::get_abi(stringable2));
        }

        // Releasing a reference to the object does not destroy it since the tearoff keeps it alive.
        REQUIRE(!RuntimeType::Destroyed);
        closable = nullptr;
        REQUIRE(!RuntimeType::Destroyed);

        // Releasing the tearoff finally destroys the object.
        stringable = nullptr;
        REQUIRE(RuntimeType::Destroyed);
    }
}
