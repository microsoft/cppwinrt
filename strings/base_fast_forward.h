#include <cstddef>
#include <atomic>

#define WINRT_IMPL_STRING_1(expression) #expression
#define WINRT_IMPL_STRING(expression) WINRT_IMPL_STRING_1(expression)

#if !defined(WINRT_FAST_ABI_SIZE)
#define WINRT_FAST_ABI_SIZE %
#endif

static_assert(WINRT_FAST_ABI_SIZE >= %);

#pragma detect_mismatch("WINRT_FAST_ABI_SIZE", WINRT_IMPL_STRING(WINRT_FAST_ABI_SIZE))

namespace winrt::impl
{
    // Thunk definitions are in arch-specific assembly sources
%
    struct fast_abi_forwarder
    {
        struct guid
        {
            uint32_t Data1;
            uint16_t Data2;
            uint16_t Data3;
            uint8_t  Data4[8];
            inline bool operator!=(guid const& right) const noexcept
            {
                return memcmp(this, &right, sizeof(guid));
            }
        };

        struct __declspec(novtable) inspectable
        {
            virtual int32_t __stdcall QueryInterface(guid const& id, void** object) noexcept = 0;
            virtual uint32_t __stdcall AddRef() noexcept = 0;
            virtual uint32_t __stdcall Release() noexcept = 0;
            virtual int32_t __stdcall GetIids(uint32_t* count, guid** ids) noexcept = 0;
            virtual int32_t __stdcall GetRuntimeClassName(void** name) noexcept = 0;
            virtual int32_t __stdcall GetTrustLevel(uint32_t* level) noexcept = 0;
        };

        void* const* m_vfptr;
        inspectable* m_owner;
        std::size_t m_offset;
        guid m_iid;
        std::atomic<uint32_t> m_references{ 1 };

        fast_abi_forwarder(void* owner, guid const& iid, std::size_t offset) noexcept :
            m_vfptr(s_vtable), m_owner(static_cast<inspectable*>(owner)), m_iid(iid), m_offset(offset)
        {
            m_owner->AddRef();
        }

        ~fast_abi_forwarder() noexcept
        {
            m_owner->Release();
        }

        static int32_t __stdcall QueryInterface(fast_abi_forwarder* self, guid const& iid, void** object) noexcept
        {
            if (iid != self->m_iid)
            {
                return self->m_owner->QueryInterface(iid, object);
            }
            AddRef(self);
            *object = self;
            return 0;
        }

        // Note: COM interfaces use stdcall, not thiscall, ('this' gets no special treatment), permitting static implementations
        static uint32_t __stdcall AddRef(fast_abi_forwarder* self) noexcept
        {
            return 1 + self->m_references.fetch_add(1, std::memory_order_relaxed);
        }

        static uint32_t __stdcall Release(fast_abi_forwarder* self) noexcept
        {
            uint32_t const remaining = self->m_references.fetch_sub(1, std::memory_order_release) - 1;
            if (remaining == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                delete self;
            }
            return remaining;
        }

        static uint32_t __stdcall GetIids(fast_abi_forwarder* self, uint32_t* count, guid** iids) noexcept
        {
            return self->m_owner->GetIids(count, iids);
        }

        static uint32_t __stdcall GetRuntimeClassName(fast_abi_forwarder* self, void** name) noexcept
        {
            return self->m_owner->GetRuntimeClassName(name);
        }

        static uint32_t __stdcall GetTrustLevel(fast_abi_forwarder* self, uint32_t* level) noexcept
        {
            return self->m_owner->GetTrustLevel(level);
        }

        static inline void* const s_vtable[] =
        {
            QueryInterface,
            AddRef,
            Release,
            GetIids,
            GetRuntimeClassName,
            GetTrustLevel,
%        };
    };

    // Enforce assumptions made by thunk asm code
    static_assert(offsetof(fast_abi_forwarder, m_vfptr) == 0);
    static_assert(offsetof(fast_abi_forwarder, m_owner) == sizeof(fast_abi_forwarder::m_vfptr));
    static_assert(offsetof(fast_abi_forwarder, m_offset) == sizeof(fast_abi_forwarder::m_vfptr) + sizeof(fast_abi_forwarder::m_owner));
}

namespace winrt
{
    template<typename TGuid>
    auto make_fast_abi_forwarder(void* owner, TGuid const& guid, size_t offset)
    {
        using ff_guid = impl::fast_abi_forwarder::guid;
        static_assert(sizeof(ff_guid) == sizeof(TGuid));
        return new impl::fast_abi_forwarder(owner, *reinterpret_cast<ff_guid const*>(&guid), offset);
    }
}

#undef WINRT_IMPL_STRING
#undef WINRT_IMPL_STRING_1
