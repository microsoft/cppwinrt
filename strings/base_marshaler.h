
namespace winrt::impl
{
    inline std::int32_t make_marshaler(unknown_abi* outer, void** result) noexcept
    {
        struct marshaler final : IMarshal
        {
            marshaler(unknown_abi* object) noexcept
            {
                m_object.copy_from(object);
            }

            std::int32_t __stdcall QueryInterface(guid const& id, void** object) noexcept final
            {
                if (is_guid_of<IMarshal>(id))
                {
                    *object = static_cast<IMarshal*>(this);
                    AddRef();
                    return 0;
                }

                return m_object->QueryInterface(id, object);
            }

            std::uint32_t __stdcall AddRef() noexcept final
            {
                return ++m_references;
            }

            std::uint32_t __stdcall Release() noexcept final
            {
                auto const remaining = --m_references;

                if (remaining == 0)
                {
                    delete this;
                }

                return remaining;
            }

            std::int32_t __stdcall GetUnmarshalClass(guid const& riid, void* pv, std::uint32_t dwDestContext, void* pvDestContext, std::uint32_t mshlflags, guid* pCid) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->GetUnmarshalClass(riid, pv, dwDestContext, pvDestContext, mshlflags, pCid);
                }

                return error_bad_alloc;
            }

            std::int32_t __stdcall GetMarshalSizeMax(guid const& riid, void* pv, std::uint32_t dwDestContext, void* pvDestContext, std::uint32_t mshlflags, std::uint32_t* pSize) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->GetMarshalSizeMax(riid, pv, dwDestContext, pvDestContext, mshlflags, pSize);
                }

                return error_bad_alloc;
            }

            std::int32_t __stdcall MarshalInterface(void* pStm, guid const& riid, void* pv, std::uint32_t dwDestContext, void* pvDestContext, std::uint32_t mshlflags) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->MarshalInterface(pStm, riid, pv, dwDestContext, pvDestContext, mshlflags);
                }

                return error_bad_alloc;
            }

            std::int32_t __stdcall UnmarshalInterface(void* pStm, guid const& riid, void** ppv) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->UnmarshalInterface(pStm, riid, ppv);
                }

                *ppv = nullptr;
                return error_bad_alloc;
            }

            std::int32_t __stdcall ReleaseMarshalData(void* pStm) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->ReleaseMarshalData(pStm);
                }

                return error_bad_alloc;
            }

            std::int32_t __stdcall DisconnectObject(std::uint32_t dwReserved) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->DisconnectObject(dwReserved);
                }

                return error_bad_alloc;
            }

        private:

            static com_ptr<IMarshal> get_marshaler() noexcept
            {
                com_ptr<unknown_abi> unknown;
                WINRT_VERIFY_(0, WINRT_IMPL_CoCreateFreeThreadedMarshaler(nullptr, unknown.put_void()));
                return unknown ? unknown.try_as<IMarshal>() : nullptr;
            }

            com_ptr<unknown_abi> m_object;
            com_ptr<IMarshal> m_marshaler{ get_marshaler() };
            atomic_ref_count m_references{ 1 };
        };

        *result = new (std::nothrow) marshaler(outer);
        return *result ? error_ok : error_bad_alloc;
    }
}
