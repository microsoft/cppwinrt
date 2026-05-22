
WINRT_EXPORT namespace winrt::impl
{
    template <> struct abi<Windows::Foundation::IUnknown>
    {
        struct WINRT_IMPL_ABI_DECL type
        {
            virtual std::int32_t __stdcall QueryInterface(guid const& id, void** object) noexcept = 0;
            virtual std::uint32_t __stdcall AddRef() noexcept = 0;
            virtual std::uint32_t __stdcall Release() noexcept = 0;
        };
    };

    using unknown_abi = abi_t<Windows::Foundation::IUnknown>;

    template <> struct abi<Windows::Foundation::IInspectable>
    {
        struct WINRT_IMPL_ABI_DECL type : unknown_abi
        {
            virtual std::int32_t __stdcall GetIids(std::uint32_t* count, guid** ids) noexcept = 0;
            virtual std::int32_t __stdcall GetRuntimeClassName(void** name) noexcept = 0;
            virtual std::int32_t __stdcall GetTrustLevel(Windows::Foundation::TrustLevel* level) noexcept = 0;
        };
    };

    using inspectable_abi = abi_t<Windows::Foundation::IInspectable>;

    template <> struct abi<Windows::Foundation::IActivationFactory>
    {
        struct WINRT_IMPL_ABI_DECL type : inspectable_abi
        {
            virtual std::int32_t __stdcall ActivateInstance(void** instance) noexcept = 0;
        };
    };

    struct WINRT_IMPL_ABI_DECL IAgileObject : unknown_abi {};

    struct WINRT_IMPL_ABI_DECL IAgileReference : unknown_abi
    {
        virtual std::int32_t __stdcall Resolve(guid const& id, void** object) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IMarshal : unknown_abi
    {
        virtual std::int32_t __stdcall GetUnmarshalClass(guid const& riid, void* pv, std::uint32_t dwDestContext, void* pvDestContext, std::uint32_t mshlflags, guid* pCid) noexcept = 0;
        virtual std::int32_t __stdcall GetMarshalSizeMax(guid const& riid, void* pv, std::uint32_t dwDestContext, void* pvDestContext, std::uint32_t mshlflags, std::uint32_t* pSize) noexcept = 0;
        virtual std::int32_t __stdcall MarshalInterface(void* pStm, guid const& riid, void* pv, std::uint32_t dwDestContext, void* pvDestContext, std::uint32_t mshlflags) noexcept = 0;
        virtual std::int32_t __stdcall UnmarshalInterface(void* pStm, guid const& riid, void** ppv) noexcept = 0;
        virtual std::int32_t __stdcall ReleaseMarshalData(void* pStm) noexcept = 0;
        virtual std::int32_t __stdcall DisconnectObject(std::uint32_t dwReserved) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IGlobalInterfaceTable : unknown_abi
    {
        virtual std::int32_t __stdcall RegisterInterfaceInGlobal(void* object, guid const& iid, std::uint32_t* cookie) noexcept = 0;
        virtual std::int32_t __stdcall RevokeInterfaceFromGlobal(std::uint32_t cookie) noexcept = 0;
        virtual std::int32_t __stdcall GetInterfaceFromGlobal(std::uint32_t cookie, guid const& iid, void** object) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IStaticLifetime : inspectable_abi
    {
        virtual std::int32_t __stdcall unused() noexcept = 0;
        virtual std::int32_t __stdcall GetCollection(void** value) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IStaticLifetimeCollection : inspectable_abi
    {
        virtual std::int32_t __stdcall Lookup(void*, void**) noexcept = 0;
        virtual std::int32_t __stdcall unused() noexcept = 0;
        virtual std::int32_t __stdcall unused2() noexcept = 0;
        virtual std::int32_t __stdcall unused3() noexcept = 0;
        virtual std::int32_t __stdcall Insert(void*, void*, bool*) noexcept = 0;
        virtual std::int32_t __stdcall Remove(void*) noexcept = 0;
        virtual std::int32_t __stdcall unused4() noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IWeakReference : unknown_abi
    {
        virtual std::int32_t __stdcall Resolve(guid const& iid, void** objectReference) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IWeakReferenceSource : unknown_abi
    {
        virtual std::int32_t __stdcall GetWeakReference(IWeakReference** weakReference) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IRestrictedErrorInfo : unknown_abi
    {
        virtual std::int32_t __stdcall GetErrorDetails(bstr* description, std::int32_t* error, bstr* restrictedDescription, bstr* capabilitySid) noexcept = 0;
        virtual std::int32_t __stdcall GetReference(bstr* reference) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IErrorInfo : unknown_abi
    {
        virtual std::int32_t __stdcall GetGUID(guid* value) noexcept = 0;
        virtual std::int32_t __stdcall GetSource(bstr* value) noexcept = 0;
        virtual std::int32_t __stdcall GetDescription(bstr* value) noexcept = 0;
        virtual std::int32_t __stdcall GetHelpFile(bstr* value) noexcept = 0;
        virtual std::int32_t __stdcall GetHelpContext(std::uint32_t* value) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL ILanguageExceptionErrorInfo2 : unknown_abi
    {
        virtual std::int32_t __stdcall GetLanguageException(void** exception) noexcept = 0;
        virtual std::int32_t __stdcall GetPreviousLanguageExceptionErrorInfo(ILanguageExceptionErrorInfo2** previous) noexcept = 0;
        virtual std::int32_t __stdcall CapturePropagationContext(void* exception) noexcept = 0;
        virtual std::int32_t __stdcall GetPropagationContextHead(ILanguageExceptionErrorInfo2** head) noexcept = 0;
    };

    struct ICallbackWithNoReentrancyToApplicationSTA;

    struct WINRT_IMPL_ABI_DECL IContextCallback : unknown_abi
    {
        virtual std::int32_t __stdcall ContextCallback(std::int32_t(__stdcall* callback)(com_callback_args*), com_callback_args* args, guid const& iid, int method, void* reserved) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IServerSecurity : unknown_abi
    {
        virtual std::int32_t __stdcall QueryBlanket(std::uint32_t*, std::uint32_t*, wchar_t**, std::uint32_t*, std::uint32_t*, void**, std::uint32_t*) noexcept = 0;
        virtual std::int32_t __stdcall ImpersonateClient() noexcept = 0;
        virtual std::int32_t __stdcall RevertToSelf() noexcept = 0;
        virtual std::int32_t __stdcall IsImpersonating() noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IBufferByteAccess : unknown_abi
    {
        virtual std::int32_t __stdcall Buffer(std::uint8_t** value) noexcept = 0;
    };

    struct WINRT_IMPL_ABI_DECL IMemoryBufferByteAccess : unknown_abi
    {
        virtual std::int32_t __stdcall GetBuffer(std::uint8_t** value, std::uint32_t* capacity) noexcept = 0;
    };

    template <> struct abi<Windows::Foundation::TimeSpan>
    {
        using type = std::int64_t;
    };

    template <> struct abi<Windows::Foundation::DateTime>
    {
        using type = std::int64_t;
    };

    template <> inline constexpr guid guid_v<Windows::Foundation::IUnknown>{ 0x00000000, 0x0000, 0x0000, { 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::IInspectable>{ 0xAF86E2E0, 0xB12D, 0x4C6A, { 0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90 } };
    template <> inline constexpr guid guid_v<Windows::Foundation::IActivationFactory>{ 0x00000035, 0x0000, 0x0000, { 0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    template <> inline constexpr guid guid_v<IAgileObject>{ 0x94EA2B94, 0xE9CC, 0x49E0, { 0xC0,0xFF,0xEE,0x64,0xCA,0x8F,0x5B,0x90 } };
    template <> inline constexpr guid guid_v<IAgileReference>{ 0xC03F6A43, 0x65A4, 0x9818, { 0x98,0x7E,0xE0,0xB8,0x10,0xD2,0xA6,0xF2 } };
    template <> inline constexpr guid guid_v<IMarshal>{ 0x00000003, 0x0000, 0x0000, { 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    template <> inline constexpr guid guid_v<IGlobalInterfaceTable>{ 0x00000146, 0x0000, 0x0000, { 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    template <> inline constexpr guid guid_v<IStaticLifetime>{ 0x17b0e613, 0x942a, 0x422d, { 0x90,0x4c,0xf9,0x0d,0xc7,0x1a,0x7d,0xae } };
    template <> inline constexpr guid guid_v<IStaticLifetimeCollection>{ 0x1b0d3570, 0x0877, 0x5ec2, { 0x8a,0x2c,0x3b,0x95,0x39,0x50,0x6a,0xca } };
    template <> inline constexpr guid guid_v<IWeakReference>{ 0x00000037, 0x0000, 0x0000, { 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    template <> inline constexpr guid guid_v<IWeakReferenceSource>{ 0x00000038, 0x0000, 0x0000, { 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    template <> inline constexpr guid guid_v<IRestrictedErrorInfo>{ 0x82BA7092, 0x4C88, 0x427D, { 0xA7,0xBC,0x16,0xDD,0x93,0xFE,0xB6,0x7E } };
    template <> inline constexpr guid guid_v<IErrorInfo>{ 0x1CF2B120, 0x547D, 0x101B, { 0x8E,0x65,0x08,0x00,0x2B,0x2B,0xD1,0x19 } };
    template <> inline constexpr guid guid_v<ILanguageExceptionErrorInfo2>{ 0x5746E5C4, 0x5B97, 0x424C, { 0xB6,0x20,0x28,0x22,0x91,0x57,0x34,0xDD } };
    template <> inline constexpr guid guid_v<ICallbackWithNoReentrancyToApplicationSTA>{ 0x0A299774, 0x3E4E, 0xFC42, { 0x1D,0x9D,0x72,0xCE,0xE1,0x05,0xCA,0x57 } };
    template <> inline constexpr guid guid_v<IContextCallback>{ 0x000001da, 0x0000, 0x0000, { 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    template <> inline constexpr guid guid_v<IServerSecurity>{ 0x0000013E, 0x0000, 0x0000, { 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    template <> inline constexpr guid guid_v<IBufferByteAccess>{ 0x905a0fef, 0xbc53, 0x11df, { 0x8c,0x49,0x00,0x1e,0x4f,0xc6,0x86,0xda } };
    template <> inline constexpr guid guid_v<IMemoryBufferByteAccess>{ 0x5b0d3235, 0x4dba, 0x4d44, { 0x86,0x5e,0x8f,0x1d,0x0e,0x4f,0xd0,0x4d } };
}
