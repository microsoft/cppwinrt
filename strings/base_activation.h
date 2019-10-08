
WINRT_EXPORT namespace winrt
{
    template <typename Interface = Windows::Foundation::IActivationFactory>
    impl::com_ref<Interface> get_activation_factory(param::hstring const& name)
    {
        void* result{};
        hresult hr = WINRT_RoGetActivationFactory(*(void**)(&name), guid_of<Interface>(), &result);

        if (hr == impl::error_not_initialized)
        {
            void* cookie;
            WINRT_CoIncrementMTAUsage(&cookie);
            hr = WINRT_RoGetActivationFactory(*(void**)(&name), guid_of<Interface>(), &result);
        }

        check_hresult(hr);
        return { result, take_ownership_from_abi };
    }
}

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif

#if defined _M_ARM
#define WINRT_IMPL_INTERLOCKED_READ_MEMORY_BARRIER (__dmb(_ARM_BARRIER_ISH));
#elif defined _M_ARM64
#define WINRT_IMPL_INTERLOCKED_READ_MEMORY_BARRIER (__dmb(_ARM64_BARRIER_ISH));
#endif

namespace winrt::impl
{
    inline int32_t interlocked_read_32(int32_t const volatile* target) noexcept
    {
#if defined _M_IX86 || defined _M_X64
        int32_t const result = *target;
        _ReadWriteBarrier();
        return result;
#elif defined _M_ARM || defined _M_ARM64
        int32_t const result = __iso_volatile_load32(reinterpret_cast<int32_t const volatile*>(target));
        WINRT_IMPL_INTERLOCKED_READ_MEMORY_BARRIER
        return result;
#else
#error Unsupported architecture
#endif
    }

#if defined _WIN64
    inline int64_t interlocked_read_64(int64_t const volatile* target) noexcept
    {
#if defined _M_X64
        int64_t const result = *target;
        _ReadWriteBarrier();
        return result;
#elif defined _M_ARM64
        int64_t const result = __iso_volatile_load64(target);
        WINRT_IMPL_INTERLOCKED_READ_MEMORY_BARRIER
        return result;
#else
#error Unsupported architecture
#endif
    }
#endif

#undef WINRT_IMPL_INTERLOCKED_READ_MEMORY_BARRIER

#ifdef __clang__
#pragma clang diagnostic pop
#endif

    template <typename T>
    T* interlocked_read_pointer(T* const volatile* target) noexcept
    {
#ifdef _WIN64
        return (T*)interlocked_read_64((int64_t*)target);
#else
        return (T*)interlocked_read_32((int32_t*)target);
#endif
    }

#ifdef _WIN64
    inline constexpr uint32_t memory_allocation_alignment{ 16 };
#pragma warning(push)
#pragma warning(disable:4324) // structure was padded due to alignment specifier
    struct alignas(16) slist_entry
    {
        slist_entry* next;
    };
    union alignas(16) slist_header
    {
        struct
        {
            uint64_t reserved1;
            uint64_t reserved2;
        } reserved1;
        struct
        {
            uint64_t reserved1 : 16;
            uint64_t reserved2 : 48;
            uint64_t reserved3 : 4;
            uint64_t reserved4 : 60;
        } reserved2;
    };
#pragma warning(pop)
#else
    inline constexpr uint32_t memory_allocation_alignment{ 8 };
    struct slist_entry
    {
        slist_entry* next;
    };
    union slist_header
    {
        uint64_t reserved1;
        struct
        {
            slist_entry reserved1;
            uint16_t reserved2;
            uint16_t reserved3;
        } reserved2;
    };
#endif

    struct factory_count_guard
    {
        factory_count_guard(factory_count_guard const&) = delete;
        factory_count_guard& operator=(factory_count_guard const&) = delete;

        explicit factory_count_guard(size_t& count) noexcept : m_count(count)
        {
#ifdef _WIN64
            _InterlockedIncrement64((int64_t*)&m_count);
#else
            _InterlockedIncrement((long*)&m_count);
#endif
        }

        ~factory_count_guard() noexcept
        {
#ifdef _WIN64
            _InterlockedDecrement64((int64_t*)&m_count);
#else
            _InterlockedDecrement((long*)&m_count);
#endif
        }

    private:

        size_t& m_count;
    };

    struct factory_cache_entry_base
    {
        struct alignas(sizeof(void*) * 2) object_and_count
        {
            unknown_abi* object;
            size_t count;
        };

        object_and_count m_value;
        alignas(memory_allocation_alignment) slist_entry m_next;

        void clear() noexcept
        {
            unknown_abi* pointer_value = interlocked_read_pointer(&m_value.object);

            if (pointer_value == nullptr)
            {
                return;
            }

            object_and_count current_value{ pointer_value, 0 };

#if defined _WIN64
            if (1 == _InterlockedCompareExchange128((int64_t*)this, 0, 0, (int64_t*)&current_value))
            {
                pointer_value->Release();
            }
#else
            int64_t const result = _InterlockedCompareExchange64((int64_t*)this, 0, *(int64_t*)&current_value);

            if (result == *(int64_t*)&current_value)
            {
                pointer_value->Release();
            }
#endif
        }
    };

    static_assert(std::is_standard_layout_v<factory_cache_entry_base>);

#if !defined _M_IX86 && !defined _M_X64 && !defined _M_ARM && !defined _M_ARM64
#error Unsupported architecture: verify that zero-initialization of SLIST_HEADER is still safe
#endif

    struct factory_cache
    {
        factory_cache(factory_cache const&) = delete;
        factory_cache& operator=(factory_cache const&) = delete;
        factory_cache() noexcept = default;

        void add(factory_cache_entry_base* const entry) noexcept
        {
            WINRT_ASSERT(entry);
            WINRT_InterlockedPushEntrySList(&m_list, &entry->m_next);
        }

        void clear() noexcept
        {
            slist_entry* entry = static_cast<slist_entry*>(WINRT_InterlockedFlushSList(&m_list));

            while (entry != nullptr)
            {
                // entry->next must be read before entry->clear() is called since the InterlockedCompareExchange
                // inside clear() will allow another thread to add the entry back to the cache.
                slist_entry* next = entry->next;
                reinterpret_cast<factory_cache_entry_base*>(reinterpret_cast<uint8_t*>(entry) - offsetof(factory_cache_entry_base, m_next))->clear();
                entry = next;
            }
        }

    private:

        alignas(memory_allocation_alignment) slist_header m_list;
    };

    inline factory_cache& get_factory_cache() noexcept
    {
        static factory_cache cache;
        return cache;
    }

    template <typename Class, typename Interface>
    struct factory_cache_entry : factory_cache_entry_base
    {
        template <typename F>
        __declspec(noinline) auto call(F&& callback)
        {
#ifdef WINRT_DIAGNOSTICS
            get_diagnostics_info().add_factory<Class>();
#endif

            auto object = get_activation_factory<Interface>(name_of<Class>());

            if (!object.template try_as<IAgileObject>())
            {
#ifdef WINRT_DIAGNOSTICS
                get_diagnostics_info().non_agile_factory<Class>();
#endif

                return callback(object);
            }

            {
                factory_count_guard const guard(m_value.count);

                if (nullptr == _InterlockedCompareExchangePointer(reinterpret_cast<void**>(&m_value.object), *reinterpret_cast<void**>(&object), nullptr))
                {
                    *reinterpret_cast<void**>(&object) = nullptr;
                    get_factory_cache().add(this);
                }

                return callback(*reinterpret_cast<com_ref<Interface> const*>(&m_value.object));
            }
        }
    };

    template <typename Class, typename Interface>
    factory_cache_entry<Class, Interface> factory_cache_entry_v{};

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory, typename F>
    auto call_factory(F&& callback)
    {
        auto& factory = factory_cache_entry_v<Class, Interface>;

        {
            factory_count_guard const guard(factory.m_value.count);

            if (factory.m_value.object)
            {
                return callback(*reinterpret_cast<com_ref<Interface> const*>(&factory.m_value.object));
            }
        }

        return factory.call(callback);
    }

    template <typename CastType, typename Class, typename Interface = Windows::Foundation::IActivationFactory, typename F>
    auto call_factory_cast(F&& callback)
    {
        auto& factory = factory_cache_entry_v<Class, Interface>;

        {
            factory_count_guard const guard(factory.m_value.count);

            if (factory.m_value.object)
            {
                return callback(*reinterpret_cast<com_ref<Interface> const*>(&factory.m_value.object));
            }
        }

        return factory.call(static_cast<CastType>(callback));
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    impl::com_ref<Interface> try_get_activation_factory(hresult_error* exception = nullptr) noexcept
    {
        param::hstring const name{ name_of<Class>() };
        void* result{};
        hresult const hr = WINRT_RoGetActivationFactory(get_abi(name), guid_of<Interface>(), &result);

        if (hr < 0)
        {
            // Ensure that the IRestrictedErrorInfo is not left on the thread.
            hresult_error local_exception{ hr, take_ownership_from_abi };

            if (exception)
            {
                // Optionally transfer ownership to the caller.
                *exception = std::move(local_exception);
            }
        }

        return { result, take_ownership_from_abi };
    }

    template <typename D> struct produce<D, Windows::Foundation::IActivationFactory> : produce_base<D, Windows::Foundation::IActivationFactory>
    {
        int32_t __stdcall ActivateInstance(void** instance) noexcept final try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_abi(this->shim().ActivateInstance());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}

WINRT_EXPORT namespace winrt
{
    enum class apartment_type : int32_t
    {
        single_threaded,
        multi_threaded
    };

    inline void init_apartment(apartment_type const type = apartment_type::multi_threaded)
    {
        hresult const result = WINRT_RoInitialize(static_cast<uint32_t>(type));

        if (result < 0)
        {
            throw_hresult(result);
        }
    }

    inline void uninit_apartment() noexcept
    {
        WINRT_RoUninitialize();
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    auto get_activation_factory()
    {
        // Normally, the callback avoids having to return a ref-counted object and the resulting AddRef/Release bump.
        // In this case we do want a unique reference, so we use the lambda to return one and thus produce an
        // AddRef'd object that is returned to the caller. 
        return impl::call_factory<Class, Interface>([](auto&& factory)
        {
            return factory;
        });
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    auto try_get_activation_factory() noexcept
    {
        return impl::try_get_activation_factory<Class, Interface>();
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    auto try_get_activation_factory(hresult_error& exception) noexcept
    {
        return impl::try_get_activation_factory<Class, Interface>(&exception);
    }

    inline void clear_factory_cache() noexcept
    {
        impl::get_factory_cache().clear();
    }

    template <typename Interface>
    auto create_instance(guid const& clsid, uint32_t context = 0x1 /*CLSCTX_INPROC_SERVER*/, void* outer = nullptr)
    {
        return capture<Interface>(WINRT_CoCreateInstance, clsid, outer, context);
    }

    namespace Windows::Foundation
    {
        struct IActivationFactory : IInspectable
        {
            IActivationFactory(std::nullptr_t = nullptr) noexcept {}
            IActivationFactory(void* ptr, take_ownership_from_abi_t) noexcept : IInspectable(ptr, take_ownership_from_abi) {}

            template <typename T>
            T ActivateInstance() const
            {
                IInspectable instance;
                check_hresult((*(impl::abi_t<IActivationFactory>**)this)->ActivateInstance(put_abi(instance)));
                return instance.try_as<T>();
            }
        };
    }
}

namespace winrt::impl
{
    template <typename T>
    T fast_activate(Windows::Foundation::IActivationFactory const& factory)
    {
        void* result{};
        check_hresult((*(impl::abi_t<Windows::Foundation::IActivationFactory>**)&factory)->ActivateInstance(&result));
        return{ result, take_ownership_from_abi };
    }
}
