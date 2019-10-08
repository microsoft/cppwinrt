
extern "C"
{
    int32_t __stdcall WINRT_GetRestrictedErrorInfo(void** info) noexcept;
    int32_t __stdcall WINRT_GetErrorInfo(uint32_t reserved, void** info) noexcept;
    int32_t __stdcall WINRT_RoGetActivationFactory(void* classId, winrt::guid const& iid, void** factory) noexcept;
    int32_t __stdcall WINRT_RoInitialize(uint32_t type) noexcept;
    int32_t __stdcall WINRT_RoOriginateLanguageException(int32_t error, void* message, void* exception) noexcept;
    void    __stdcall WINRT_RoUninitialize() noexcept;
    int32_t __stdcall WINRT_SetRestrictedErrorInfo(void* info) noexcept;
    int32_t __stdcall WINRT_RoGetAgileReference(uint32_t options, winrt::guid const& iid, void* object, void** reference) noexcept;
    int32_t __stdcall WINRT_CoIncrementMTAUsage(void** cookie) noexcept;
    [[noreturn]] void __stdcall WINRT_RoFailFastWithErrorContext(int32_t error) noexcept;
    int32_t __stdcall WINRT_RoTransformError(int32_t oldError, int32_t newError, void* message) noexcept;

    int32_t __stdcall WINRT_WindowsCreateString(wchar_t const* sourceString, uint32_t length, void** string) noexcept;
    int32_t __stdcall WINRT_WindowsCreateStringReference(wchar_t const* sourceString, uint32_t length, void* hstringHeader, void** string) noexcept;
    int32_t __stdcall WINRT_WindowsDuplicateString(void* string, void** newString) noexcept;
    int32_t __stdcall WINRT_WindowsDeleteString(void* string) noexcept;
    int32_t __stdcall WINRT_WindowsStringHasEmbeddedNull(void* string, int* hasEmbedNull) noexcept;
    int32_t __stdcall WINRT_WindowsPreallocateStringBuffer(uint32_t length, wchar_t** charBuffer, void** bufferHandle) noexcept;
    int32_t __stdcall WINRT_WindowsDeleteStringBuffer(void* bufferHandle) noexcept;
    int32_t __stdcall WINRT_WindowsPromoteStringBuffer(void* bufferHandle, void** string) noexcept;
    int32_t __stdcall WINRT_WindowsConcatString(void* string1, void* string2, void** newString) noexcept;
    wchar_t const* __stdcall WINRT_WindowsGetStringRawBuffer(void* string, uint32_t* length) noexcept;
    uint32_t __stdcall WINRT_WindowsGetStringLen(void* string) noexcept;

    int32_t  __stdcall WINRT_CoCreateFreeThreadedMarshaler(void* outer, void** marshaler) noexcept;
    int32_t  __stdcall WINRT_CoCreateInstance(winrt::guid const& clsid, void* outer, uint32_t context, winrt::guid const& iid, void** object) noexcept;
    int32_t  __stdcall WINRT_CoGetCallContext(winrt::guid const& iid, void** object) noexcept;
    int32_t  __stdcall WINRT_CoGetObjectContext(winrt::guid const& iid, void** object) noexcept;
    int32_t  __stdcall WINRT_CoGetApartmentType(int32_t* type, int32_t* qualifier) noexcept;
    void*    __stdcall WINRT_CoTaskMemAlloc(std::size_t size) noexcept;
    void     __stdcall WINRT_CoTaskMemFree(void* ptr) noexcept;
    void     __stdcall WINRT_SysFreeString(winrt::impl::bstr string) noexcept;
    uint32_t __stdcall WINRT_SysStringLen(winrt::impl::bstr string) noexcept;
    int32_t  __stdcall WINRT_IIDFromString(wchar_t const* string, winrt::guid* iid) noexcept;
    int32_t  __stdcall WINRT_MultiByteToWideChar(uint32_t codepage, uint32_t flags, char const* in_string, int32_t in_size, wchar_t* out_string, int32_t out_size) noexcept;
    int32_t  __stdcall WINRT_WideCharToMultiByte(uint32_t codepage, uint32_t flags, wchar_t const* int_string, int32_t in_size, char* out_string, int32_t out_size, char const* default_char, int32_t* default_used) noexcept;
    int32_t  __stdcall WINRT_HeapFree(void* heap, uint32_t flags, void* value) noexcept;
    void*    __stdcall WINRT_GetProcessHeap() noexcept;
    uint32_t __stdcall WINRT_FormatMessageW(uint32_t flags, void const* source, uint32_t code, uint32_t language, wchar_t* buffer, uint32_t size, va_list* arguments) noexcept;
    uint32_t __stdcall WINRT_GetLastError() noexcept;
    void     __stdcall WINRT_GetSystemTimePreciseAsFileTime(void* result) noexcept;
    uintptr_t __stdcall WINRT_VirtualQuery(void* address, void* buffer, uintptr_t length) noexcept;

    int32_t  __stdcall WINRT_OpenProcessToken(void* process, uint32_t access, void** token) noexcept;
    void*    __stdcall WINRT_GetCurrentProcess() noexcept;
    int32_t  __stdcall WINRT_DuplicateToken(void* existing, uint32_t level, void** duplicate) noexcept;
    int32_t  __stdcall WINRT_OpenThreadToken(void* thread, uint32_t access, int32_t self, void** token) noexcept;
    void*    __stdcall WINRT_GetCurrentThread() noexcept;
    int32_t  __stdcall WINRT_SetThreadToken(void** thread, void* token) noexcept;

    void    __stdcall WINRT_AcquireSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    void    __stdcall WINRT_AcquireSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    uint8_t __stdcall WINRT_TryAcquireSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    uint8_t __stdcall WINRT_TryAcquireSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    void    __stdcall WINRT_ReleaseSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    void    __stdcall WINRT_ReleaseSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    int32_t __stdcall WINRT_SleepConditionVariableSRW(winrt::impl::condition_variable* cv, winrt::impl::srwlock* lock, uint32_t milliseconds, uint32_t flags) noexcept;
    void    __stdcall WINRT_WakeConditionVariable(winrt::impl::condition_variable* cv) noexcept;
    void    __stdcall WINRT_WakeAllConditionVariable(winrt::impl::condition_variable* cv) noexcept;
    void*   __stdcall WINRT_InterlockedPushEntrySList(void* head, void* entry) noexcept;
    void*   __stdcall WINRT_InterlockedFlushSList(void* head) noexcept;

    void* __stdcall WINRT_CreateEventW(void*, int32_t, int32_t, void*) noexcept;
    int32_t __stdcall WINRT_SetEvent(void*) noexcept;
    int32_t  __stdcall WINRT_CloseHandle(void* hObject) noexcept;
    uint32_t __stdcall WINRT_WaitForSingleObject(void* handle, uint32_t milliseconds) noexcept;

    int32_t  __stdcall WINRT_TrySubmitThreadpoolCallback(void(__stdcall *callback)(void*, void* context), void* context, void*) noexcept;
    winrt::impl::ptp_timer __stdcall WINRT_CreateThreadpoolTimer(void(__stdcall *callback)(void*, void* context, void*), void* context, void*) noexcept;
    void     __stdcall WINRT_SetThreadpoolTimer(winrt::impl::ptp_timer timer, void* time, uint32_t period, uint32_t window) noexcept;
    void     __stdcall WINRT_CloseThreadpoolTimer(winrt::impl::ptp_timer timer) noexcept;
    winrt::impl::ptp_wait __stdcall WINRT_CreateThreadpoolWait(void(__stdcall *callback)(void*, void* context, void*, uint32_t result), void* context, void*) noexcept;
    void     __stdcall WINRT_SetThreadpoolWait(winrt::impl::ptp_wait wait, void* handle, void* timeout) noexcept;
    void     __stdcall WINRT_CloseThreadpoolWait(winrt::impl::ptp_wait wait) noexcept;
    winrt::impl::ptp_io __stdcall WINRT_CreateThreadpoolIo(void* object, void(__stdcall *callback)(void*, void* context, void* overlapped, uint32_t result, std::size_t bytes, void*) noexcept, void* context, void*) noexcept;
    void     __stdcall WINRT_StartThreadpoolIo(winrt::impl::ptp_io io) noexcept;
    void     __stdcall WINRT_CancelThreadpoolIo(winrt::impl::ptp_io io) noexcept;
    void     __stdcall WINRT_CloseThreadpoolIo(winrt::impl::ptp_io io) noexcept;
    winrt::impl::ptp_pool __stdcall WINRT_CreateThreadpool(void* reserved) noexcept;
    void __stdcall WINRT_SetThreadpoolThreadMaximum(winrt::impl::ptp_pool pool, uint32_t value) noexcept;
    int32_t __stdcall WINRT_SetThreadpoolThreadMinimum(winrt::impl::ptp_pool pool, uint32_t value) noexcept;
    void     __stdcall WINRT_CloseThreadpool(winrt::impl::ptp_pool pool) noexcept;

    int32_t __stdcall WINRT_CanUnloadNow() noexcept;
    int32_t __stdcall WINRT_GetActivationFactory(void* classId, void** factory) noexcept;
}

#ifdef _M_HYBRID
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:#WINRT_" #function "@" #count "=#" #function "@" #count))
#elif _M_IX86
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:_WINRT_" #function "@" #count "=_" #function "@" #count))
#else
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:WINRT_" #function "=" #function))
#endif

WINRT_IMPL_LINK(GetRestrictedErrorInfo, 4)
WINRT_IMPL_LINK(GetErrorInfo, 8)
WINRT_IMPL_LINK(RoGetActivationFactory, 12)
WINRT_IMPL_LINK(RoInitialize, 4)
WINRT_IMPL_LINK(RoOriginateLanguageException, 12)
WINRT_IMPL_LINK(RoUninitialize, 0)
WINRT_IMPL_LINK(SetRestrictedErrorInfo, 4)
WINRT_IMPL_LINK(RoGetAgileReference, 16)
WINRT_IMPL_LINK(CoIncrementMTAUsage, 4)
WINRT_IMPL_LINK(RoFailFastWithErrorContext, 4)
WINRT_IMPL_LINK(RoTransformError, 12)

WINRT_IMPL_LINK(WindowsCreateString, 12)
WINRT_IMPL_LINK(WindowsCreateStringReference, 16)
WINRT_IMPL_LINK(WindowsDuplicateString, 8)
WINRT_IMPL_LINK(WindowsDeleteString, 4)
WINRT_IMPL_LINK(WindowsStringHasEmbeddedNull, 8)
WINRT_IMPL_LINK(WindowsPreallocateStringBuffer, 12)
WINRT_IMPL_LINK(WindowsDeleteStringBuffer, 4)
WINRT_IMPL_LINK(WindowsPromoteStringBuffer, 8)
WINRT_IMPL_LINK(WindowsConcatString, 12)
WINRT_IMPL_LINK(WindowsGetStringRawBuffer, 8)
WINRT_IMPL_LINK(WindowsGetStringLen, 4)

WINRT_IMPL_LINK(CoCreateFreeThreadedMarshaler, 8)
WINRT_IMPL_LINK(CoCreateInstance, 20)
WINRT_IMPL_LINK(CoGetCallContext, 8)
WINRT_IMPL_LINK(CoGetObjectContext, 8)
WINRT_IMPL_LINK(CoGetApartmentType, 8)
WINRT_IMPL_LINK(CoTaskMemAlloc, 4)
WINRT_IMPL_LINK(CoTaskMemFree, 4)
WINRT_IMPL_LINK(SysFreeString, 4)
WINRT_IMPL_LINK(SysStringLen, 4)
WINRT_IMPL_LINK(IIDFromString, 8)
WINRT_IMPL_LINK(MultiByteToWideChar, 24)
WINRT_IMPL_LINK(WideCharToMultiByte, 32)
WINRT_IMPL_LINK(HeapFree, 12)
WINRT_IMPL_LINK(GetProcessHeap, 0)
WINRT_IMPL_LINK(FormatMessageW, 28)
WINRT_IMPL_LINK(GetLastError, 0)
WINRT_IMPL_LINK(GetSystemTimePreciseAsFileTime, 4)
WINRT_IMPL_LINK(VirtualQuery, 12)

WINRT_IMPL_LINK(OpenProcessToken, 12)
WINRT_IMPL_LINK(GetCurrentProcess, 0)
WINRT_IMPL_LINK(DuplicateToken, 12)
WINRT_IMPL_LINK(OpenThreadToken, 16)
WINRT_IMPL_LINK(GetCurrentThread, 0)
WINRT_IMPL_LINK(SetThreadToken, 8)

WINRT_IMPL_LINK(AcquireSRWLockExclusive, 4)
WINRT_IMPL_LINK(AcquireSRWLockShared, 4)
WINRT_IMPL_LINK(TryAcquireSRWLockExclusive, 4)
WINRT_IMPL_LINK(TryAcquireSRWLockShared, 4)
WINRT_IMPL_LINK(ReleaseSRWLockExclusive, 4)
WINRT_IMPL_LINK(ReleaseSRWLockShared, 4)
WINRT_IMPL_LINK(SleepConditionVariableSRW, 16)
WINRT_IMPL_LINK(WakeConditionVariable, 4)
WINRT_IMPL_LINK(WakeAllConditionVariable, 4)
WINRT_IMPL_LINK(InterlockedPushEntrySList, 8)
WINRT_IMPL_LINK(InterlockedFlushSList, 4)

WINRT_IMPL_LINK(CreateEventW, 16)
WINRT_IMPL_LINK(SetEvent, 4)
WINRT_IMPL_LINK(CloseHandle, 4)
WINRT_IMPL_LINK(WaitForSingleObject, 8)

WINRT_IMPL_LINK(TrySubmitThreadpoolCallback, 12)
WINRT_IMPL_LINK(CreateThreadpoolTimer, 12)
WINRT_IMPL_LINK(SetThreadpoolTimer, 16)
WINRT_IMPL_LINK(CloseThreadpoolTimer, 4)
WINRT_IMPL_LINK(CreateThreadpoolWait, 12)
WINRT_IMPL_LINK(SetThreadpoolWait, 12)
WINRT_IMPL_LINK(CloseThreadpoolWait, 4)
WINRT_IMPL_LINK(CreateThreadpoolIo, 16)
WINRT_IMPL_LINK(StartThreadpoolIo, 4)
WINRT_IMPL_LINK(CancelThreadpoolIo, 4)
WINRT_IMPL_LINK(CloseThreadpoolIo, 4)
WINRT_IMPL_LINK(CreateThreadpool, 4)
WINRT_IMPL_LINK(SetThreadpoolThreadMaximum, 8)
WINRT_IMPL_LINK(SetThreadpoolThreadMinimum, 8)
WINRT_IMPL_LINK(CloseThreadpool, 4)

#undef WINRT_IMPL_LINK
