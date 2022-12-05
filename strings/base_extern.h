
__declspec(selectany) int32_t(__stdcall* winrt_to_hresult_handler)(void* address) noexcept {};
__declspec(selectany) winrt::hstring(__stdcall* winrt_to_message_handler)(void* address) {};
__declspec(selectany) void(__stdcall* winrt_throw_hresult_handler)(uint32_t lineNumber, char const* fileName, char const* functionName, void* returnAddress, winrt::hresult const result) noexcept {};
__declspec(selectany) int32_t(__stdcall* winrt_activation_handler)(void* classId, winrt::guid const& iid, void** factory) noexcept {};

extern "C"
{
    void* __stdcall WINRT_IMPL_LoadLibraryW(wchar_t const* name) noexcept;
    int32_t __stdcall WINRT_IMPL_FreeLibrary(void* library) noexcept;
    void* __stdcall WINRT_IMPL_GetProcAddress(void* library, char const* name) noexcept;

    int32_t __stdcall WINRT_IMPL_SetErrorInfo(uint32_t reserved, void* info) noexcept;
    int32_t __stdcall WINRT_IMPL_GetErrorInfo(uint32_t reserved, void** info) noexcept;
    int32_t __stdcall WINRT_IMPL_CoInitializeEx(void*, uint32_t type) noexcept;
    void    __stdcall WINRT_IMPL_CoUninitialize() noexcept;

    int32_t  __stdcall WINRT_IMPL_CoCreateFreeThreadedMarshaler(void* outer, void** marshaler) noexcept;
    int32_t  __stdcall WINRT_IMPL_CoCreateInstance(winrt::guid const& clsid, void* outer, uint32_t context, winrt::guid const& iid, void** object) noexcept;
    int32_t  __stdcall WINRT_IMPL_CoGetCallContext(winrt::guid const& iid, void** object) noexcept;
    int32_t  __stdcall WINRT_IMPL_CoGetObjectContext(winrt::guid const& iid, void** object) noexcept;
    int32_t  __stdcall WINRT_IMPL_CoGetApartmentType(int32_t* type, int32_t* qualifier) noexcept;
    void*    __stdcall WINRT_IMPL_CoTaskMemAlloc(std::size_t size) noexcept;
    void     __stdcall WINRT_IMPL_CoTaskMemFree(void* ptr) noexcept;
    winrt::impl::bstr __stdcall WINRT_IMPL_SysAllocString(wchar_t const* value) noexcept;
    void     __stdcall WINRT_IMPL_SysFreeString(winrt::impl::bstr string) noexcept;
    uint32_t __stdcall WINRT_IMPL_SysStringLen(winrt::impl::bstr string) noexcept;
    int32_t  __stdcall WINRT_IMPL_IIDFromString(wchar_t const* string, winrt::guid* iid) noexcept;
    int32_t  __stdcall WINRT_IMPL_MultiByteToWideChar(uint32_t codepage, uint32_t flags, char const* in_string, int32_t in_size, wchar_t* out_string, int32_t out_size) noexcept;
    int32_t  __stdcall WINRT_IMPL_WideCharToMultiByte(uint32_t codepage, uint32_t flags, wchar_t const* int_string, int32_t in_size, char* out_string, int32_t out_size, char const* default_char, int32_t* default_used) noexcept;
    void* __stdcall    WINRT_IMPL_HeapAlloc(void* heap, uint32_t flags, size_t bytes) noexcept;
    int32_t  __stdcall WINRT_IMPL_HeapFree(void* heap, uint32_t flags, void* value) noexcept;
    void*    __stdcall WINRT_IMPL_GetProcessHeap() noexcept;
    uint32_t __stdcall WINRT_IMPL_FormatMessageW(uint32_t flags, void const* source, uint32_t code, uint32_t language, wchar_t* buffer, uint32_t size, va_list* arguments) noexcept;
    uint32_t __stdcall WINRT_IMPL_GetLastError() noexcept;
    void     __stdcall WINRT_IMPL_GetSystemTimePreciseAsFileTime(void* result) noexcept;
    uintptr_t __stdcall WINRT_IMPL_VirtualQuery(void* address, void* buffer, uintptr_t length) noexcept;
    void*    __stdcall WINRT_IMPL_EncodePointer(void* ptr) noexcept;

    int32_t  __stdcall WINRT_IMPL_OpenProcessToken(void* process, uint32_t access, void** token) noexcept;
    void*    __stdcall WINRT_IMPL_GetCurrentProcess() noexcept;
    int32_t  __stdcall WINRT_IMPL_DuplicateToken(void* existing, uint32_t level, void** duplicate) noexcept;
    int32_t  __stdcall WINRT_IMPL_OpenThreadToken(void* thread, uint32_t access, int32_t self, void** token) noexcept;
    void*    __stdcall WINRT_IMPL_GetCurrentThread() noexcept;
    int32_t  __stdcall WINRT_IMPL_SetThreadToken(void** thread, void* token) noexcept;

    void    __stdcall WINRT_IMPL_AcquireSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    void    __stdcall WINRT_IMPL_AcquireSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    uint8_t __stdcall WINRT_IMPL_TryAcquireSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    uint8_t __stdcall WINRT_IMPL_TryAcquireSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    void    __stdcall WINRT_IMPL_ReleaseSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    void    __stdcall WINRT_IMPL_ReleaseSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    int32_t __stdcall WINRT_IMPL_SleepConditionVariableSRW(winrt::impl::condition_variable* cv, winrt::impl::srwlock* lock, uint32_t milliseconds, uint32_t flags) noexcept;
    void    __stdcall WINRT_IMPL_WakeConditionVariable(winrt::impl::condition_variable* cv) noexcept;
    void    __stdcall WINRT_IMPL_WakeAllConditionVariable(winrt::impl::condition_variable* cv) noexcept;
    void*   __stdcall WINRT_IMPL_InterlockedPushEntrySList(void* head, void* entry) noexcept;
    void*   __stdcall WINRT_IMPL_InterlockedFlushSList(void* head) noexcept;

    void* __stdcall WINRT_IMPL_CreateEventW(void*, int32_t, int32_t, void*) noexcept;
    int32_t __stdcall WINRT_IMPL_SetEvent(void*) noexcept;
    int32_t  __stdcall WINRT_IMPL_CloseHandle(void* hObject) noexcept;
    uint32_t __stdcall WINRT_IMPL_WaitForSingleObject(void* handle, uint32_t milliseconds) noexcept;

    int32_t  __stdcall WINRT_IMPL_TrySubmitThreadpoolCallback(void(__stdcall *callback)(void*, void* context), void* context, void*) noexcept;
    winrt::impl::ptp_timer __stdcall WINRT_IMPL_CreateThreadpoolTimer(void(__stdcall *callback)(void*, void* context, void*), void* context, void*) noexcept;
    void     __stdcall WINRT_IMPL_SetThreadpoolTimer(winrt::impl::ptp_timer timer, void* time, uint32_t period, uint32_t window) noexcept;
    void     __stdcall WINRT_IMPL_CloseThreadpoolTimer(winrt::impl::ptp_timer timer) noexcept;
    winrt::impl::ptp_wait __stdcall WINRT_IMPL_CreateThreadpoolWait(void(__stdcall *callback)(void*, void* context, void*, uint32_t result), void* context, void*) noexcept;
    void     __stdcall WINRT_IMPL_SetThreadpoolWait(winrt::impl::ptp_wait wait, void* handle, void* timeout) noexcept;
    void     __stdcall WINRT_IMPL_CloseThreadpoolWait(winrt::impl::ptp_wait wait) noexcept;
    winrt::impl::ptp_io __stdcall WINRT_IMPL_CreateThreadpoolIo(void* object, void(__stdcall *callback)(void*, void* context, void* overlapped, uint32_t result, std::size_t bytes, void*) noexcept, void* context, void*) noexcept;
    void     __stdcall WINRT_IMPL_StartThreadpoolIo(winrt::impl::ptp_io io) noexcept;
    void     __stdcall WINRT_IMPL_CancelThreadpoolIo(winrt::impl::ptp_io io) noexcept;
    void     __stdcall WINRT_IMPL_CloseThreadpoolIo(winrt::impl::ptp_io io) noexcept;
    winrt::impl::ptp_pool __stdcall WINRT_IMPL_CreateThreadpool(void* reserved) noexcept;
    void __stdcall WINRT_IMPL_SetThreadpoolThreadMaximum(winrt::impl::ptp_pool pool, uint32_t value) noexcept;
    int32_t __stdcall WINRT_IMPL_SetThreadpoolThreadMinimum(winrt::impl::ptp_pool pool, uint32_t value) noexcept;
    void     __stdcall WINRT_IMPL_CloseThreadpool(winrt::impl::ptp_pool pool) noexcept;

    int32_t __stdcall WINRT_CanUnloadNow() noexcept;
    int32_t __stdcall WINRT_GetActivationFactory(void* classId, void** factory) noexcept;
}

#if defined(_MSC_VER)
#ifdef _M_HYBRID
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:#WINRT_IMPL_" #function "@" #count "=#" #function "@" #count))
#elif _M_ARM64EC
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:#WINRT_IMPL_" #function "=#" #function))
#elif _M_IX86
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:_WINRT_IMPL_" #function "@" #count "=_" #function "@" #count))
#else
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:WINRT_IMPL_" #function "=" #function))
#endif
#elif defined(__GNUC__)
#if defined(__i386__)
#define WINRT_IMPL_LINK(function, count) __asm__( \
    ".globl _" #function "@" #count "\n\t" \
    ".weak _WINRT_IMPL_" #function "@" #count "\n\t" \
    ".set _WINRT_IMPL_" #function "@" #count ", _" #function "@" #count);
#else
#define WINRT_IMPL_LINK(function, count) __asm__( \
    ".globl " #function "\n\t" \
    ".weak WINRT_IMPL_" #function "\n\t" \
    ".set WINRT_IMPL_" #function ", " #function);
#endif
#endif

WINRT_IMPL_LINK(LoadLibraryW, 4)
WINRT_IMPL_LINK(FreeLibrary, 4)
WINRT_IMPL_LINK(GetProcAddress, 8)
WINRT_IMPL_LINK(SetErrorInfo, 8)
WINRT_IMPL_LINK(GetErrorInfo, 8)
WINRT_IMPL_LINK(CoInitializeEx, 8)
WINRT_IMPL_LINK(CoUninitialize, 0)

WINRT_IMPL_LINK(CoCreateFreeThreadedMarshaler, 8)
WINRT_IMPL_LINK(CoCreateInstance, 20)
WINRT_IMPL_LINK(CoGetCallContext, 8)
WINRT_IMPL_LINK(CoGetObjectContext, 8)
WINRT_IMPL_LINK(CoGetApartmentType, 8)
WINRT_IMPL_LINK(CoTaskMemAlloc, 4)
WINRT_IMPL_LINK(CoTaskMemFree, 4)
WINRT_IMPL_LINK(SysAllocString, 4)
WINRT_IMPL_LINK(SysFreeString, 4)
WINRT_IMPL_LINK(SysStringLen, 4)
WINRT_IMPL_LINK(IIDFromString, 8)
WINRT_IMPL_LINK(MultiByteToWideChar, 24)
WINRT_IMPL_LINK(WideCharToMultiByte, 32)
WINRT_IMPL_LINK(HeapAlloc, 12)
WINRT_IMPL_LINK(HeapFree, 12)
WINRT_IMPL_LINK(GetProcessHeap, 0)
WINRT_IMPL_LINK(FormatMessageW, 28)
WINRT_IMPL_LINK(GetLastError, 0)
WINRT_IMPL_LINK(GetSystemTimePreciseAsFileTime, 4)
WINRT_IMPL_LINK(VirtualQuery, 12)
WINRT_IMPL_LINK(EncodePointer, 4)

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
