
__declspec(selectany) int32_t(__stdcall* winrt_to_hresult_handler)(void* address) noexcept {};
__declspec(selectany) winrt::hstring(__stdcall* winrt_to_message_handler)(void* address) {};
__declspec(selectany) void(__stdcall* winrt_throw_hresult_handler)(uint32_t lineNumber, char const* fileName, char const* functionName, void* returnAddress, winrt::hresult const result) noexcept {};
__declspec(selectany) int32_t(__stdcall* winrt_activation_handler)(void* classId, winrt::guid const& iid, void** factory) noexcept {};

#if defined(_MSC_VER) && !defined(__clang__)
#ifdef _M_HYBRID
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:#WINRT_IMPL_" #function "@" #count "=#" #function "@" #count))
#define WINRT_IMPL_DLLIMPORT
#elif _M_ARM64EC
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:#WINRT_IMPL_" #function "=#" #function))
#define WINRT_IMPL_DLLIMPORT
#elif _M_IX86
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:__imp__WINRT_IMPL_" #function "@" #count "=__imp__" #function "@" #count))
#define WINRT_IMPL_DLLIMPORT __declspec(dllimport)
#else
#define WINRT_IMPL_LINK(function, count) __pragma(comment(linker, "/alternatename:__imp_WINRT_IMPL_" #function "=__imp_" #function))
#define WINRT_IMPL_DLLIMPORT __declspec(dllimport)
#endif
#define WINRT_IMPL_EXTERN_C_BEGIN extern "C" {
#define WINRT_IMPL_EXTERN_C_END }
#elif defined(__GNUC__) || defined(__clang__)
#if defined(__arm64ec__) || defined(_M_ARM64EC)
#define WINRT_IMPL_LINK(function, count) __asm__("#" #function)
#define WINRT_IMPL_DLLIMPORT
#elif SIZE_MAX <= UINT_LEAST32_MAX && (defined(__x86__) || defined(_M_IX86) || defined(__i386__))
#if !defined(__clang__)
#define WINRT_IMPL_LINK(function, count) __asm__(#function "@" #count)
#else
#define WINRT_IMPL_LINK(function, count) __asm__("_" #function "@" #count)
#endif
#define WINRT_IMPL_DLLIMPORT [[__gnu__::__dllimport__]]
#else
#define WINRT_IMPL_LINK(function, count) __asm__(#function)
#define WINRT_IMPL_DLLIMPORT [[__gnu__::__dllimport__]]
#endif
#define WINRT_IMPL_EXTERN_C_BEGIN
#define WINRT_IMPL_EXTERN_C_END
#endif

WINRT_IMPL_EXTERN_C_BEGIN

WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_RoGetActivationFactory(void* classId, winrt::guid const& iid, void** factory) noexcept WINRT_IMPL_LINK(RoGetActivationFactory, 12);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_RoGetAgileReference(uint32_t options, winrt::guid const& iid, void* object, void** reference) noexcept WINRT_IMPL_LINK(RoGetAgileReference, 16);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_SetThreadpoolTimerEx(winrt::impl::ptp_timer, void*, uint32_t, uint32_t) noexcept WINRT_IMPL_LINK(SetThreadpoolTimerEx, 16);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_SetThreadpoolWaitEx(winrt::impl::ptp_wait, void*, void*, void*) noexcept WINRT_IMPL_LINK(SetThreadpoolWaitEx, 16);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_RoOriginateLanguageException(int32_t error, void* message, void* exception) noexcept WINRT_IMPL_LINK(RoOriginateLanguageException, 12);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_RoCaptureErrorContext(int32_t error) noexcept WINRT_IMPL_LINK(RoCaptureErrorContext, 4);
WINRT_IMPL_DLLIMPORT void __stdcall WINRT_IMPL_RoFailFastWithErrorContext(int32_t) noexcept WINRT_IMPL_LINK(RoFailFastWithErrorContext, 4);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_RoTransformError(int32_t, int32_t, void*) noexcept WINRT_IMPL_LINK(RoTransformError, 12);

WINRT_IMPL_DLLIMPORT void* __stdcall WINRT_IMPL_LoadLibraryExW(wchar_t const* name, void* unused, uint32_t flags) noexcept WINRT_IMPL_LINK(LoadLibraryExW, 12);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_FreeLibrary(void* library) noexcept WINRT_IMPL_LINK(FreeLibrary, 4);
WINRT_IMPL_DLLIMPORT void* __stdcall WINRT_IMPL_GetProcAddress(void* library, char const* name) noexcept WINRT_IMPL_LINK(GetProcAddress, 8);

WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_SetErrorInfo(uint32_t reserved, void* info) noexcept WINRT_IMPL_LINK(SetErrorInfo, 8);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_GetErrorInfo(uint32_t reserved, void** info) noexcept WINRT_IMPL_LINK(GetErrorInfo, 8);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_CoInitializeEx(void*, uint32_t type) noexcept WINRT_IMPL_LINK(CoInitializeEx, 8);
WINRT_IMPL_DLLIMPORT void    __stdcall WINRT_IMPL_CoUninitialize() noexcept WINRT_IMPL_LINK(CoUninitialize, 0);

WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_CoCreateFreeThreadedMarshaler(void* outer, void** marshaler) noexcept WINRT_IMPL_LINK(CoCreateFreeThreadedMarshaler, 8);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_CoCreateInstance(winrt::guid const& clsid, void* outer, uint32_t context, winrt::guid const& iid, void** object) noexcept WINRT_IMPL_LINK(CoCreateInstance, 20);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_CoGetCallContext(winrt::guid const& iid, void** object) noexcept WINRT_IMPL_LINK(CoGetCallContext, 8);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_CoGetObjectContext(winrt::guid const& iid, void** object) noexcept WINRT_IMPL_LINK(CoGetObjectContext, 8);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_CoGetApartmentType(int32_t* type, int32_t* qualifier) noexcept WINRT_IMPL_LINK(CoGetApartmentType, 8);
WINRT_IMPL_DLLIMPORT void*    __stdcall WINRT_IMPL_CoTaskMemAlloc(std::size_t size) noexcept WINRT_IMPL_LINK(CoTaskMemAlloc, 4);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_CoTaskMemFree(void* ptr) noexcept WINRT_IMPL_LINK(CoTaskMemFree, 4);
WINRT_IMPL_DLLIMPORT winrt::impl::bstr __stdcall WINRT_IMPL_SysAllocString(wchar_t const* value) noexcept WINRT_IMPL_LINK(SysAllocString, 4);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_SysFreeString(winrt::impl::bstr string) noexcept WINRT_IMPL_LINK(SysFreeString, 4);
WINRT_IMPL_DLLIMPORT uint32_t __stdcall WINRT_IMPL_SysStringLen(winrt::impl::bstr string) noexcept WINRT_IMPL_LINK(SysStringLen, 4);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_IIDFromString(wchar_t const* string, winrt::guid* iid) noexcept WINRT_IMPL_LINK(IIDFromString, 8);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_MultiByteToWideChar(uint32_t codepage, uint32_t flags, char const* in_string, int32_t in_size, wchar_t* out_string, int32_t out_size) noexcept WINRT_IMPL_LINK(MultiByteToWideChar, 24);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_WideCharToMultiByte(uint32_t codepage, uint32_t flags, wchar_t const* int_string, int32_t in_size, char* out_string, int32_t out_size, char const* default_char, int32_t* default_used) noexcept WINRT_IMPL_LINK(WideCharToMultiByte, 32);
WINRT_IMPL_DLLIMPORT void* __stdcall    WINRT_IMPL_HeapAlloc(void* heap, uint32_t flags, size_t bytes) noexcept WINRT_IMPL_LINK(HeapAlloc, 12);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_HeapFree(void* heap, uint32_t flags, void* value) noexcept WINRT_IMPL_LINK(HeapFree, 12);
WINRT_IMPL_DLLIMPORT void*    __stdcall WINRT_IMPL_GetProcessHeap() noexcept WINRT_IMPL_LINK(GetProcessHeap, 0);
WINRT_IMPL_DLLIMPORT uint32_t __stdcall WINRT_IMPL_FormatMessageW(uint32_t flags, void const* source, uint32_t code, uint32_t language, wchar_t* buffer, uint32_t size, va_list* arguments) noexcept WINRT_IMPL_LINK(FormatMessageW, 28);
WINRT_IMPL_DLLIMPORT uint32_t __stdcall WINRT_IMPL_GetLastError() noexcept WINRT_IMPL_LINK(GetLastError, 0);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_GetSystemTimePreciseAsFileTime(void* result) noexcept WINRT_IMPL_LINK(GetSystemTimePreciseAsFileTime, 4);
WINRT_IMPL_DLLIMPORT uintptr_t __stdcall WINRT_IMPL_VirtualQuery(void* address, void* buffer, uintptr_t length) noexcept WINRT_IMPL_LINK(VirtualQuery, 12);
WINRT_IMPL_DLLIMPORT void*    __stdcall WINRT_IMPL_EncodePointer(void* ptr) noexcept WINRT_IMPL_LINK(EncodePointer, 4);

WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_OpenProcessToken(void* process, uint32_t access, void** token) noexcept WINRT_IMPL_LINK(OpenProcessToken, 12);
WINRT_IMPL_DLLIMPORT void*    __stdcall WINRT_IMPL_GetCurrentProcess() noexcept WINRT_IMPL_LINK(GetCurrentProcess, 0);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_DuplicateToken(void* existing, uint32_t level, void** duplicate) noexcept WINRT_IMPL_LINK(DuplicateToken, 12);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_OpenThreadToken(void* thread, uint32_t access, int32_t self, void** token) noexcept WINRT_IMPL_LINK(OpenThreadToken, 16);
WINRT_IMPL_DLLIMPORT void*    __stdcall WINRT_IMPL_GetCurrentThread() noexcept WINRT_IMPL_LINK(GetCurrentThread, 0);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_SetThreadToken(void** thread, void* token) noexcept WINRT_IMPL_LINK(SetThreadToken, 8);

WINRT_IMPL_DLLIMPORT void    __stdcall WINRT_IMPL_AcquireSRWLockExclusive(winrt::impl::srwlock* lock) noexcept WINRT_IMPL_LINK(AcquireSRWLockExclusive, 4);
WINRT_IMPL_DLLIMPORT void    __stdcall WINRT_IMPL_AcquireSRWLockShared(winrt::impl::srwlock* lock) noexcept WINRT_IMPL_LINK(AcquireSRWLockShared, 4);
WINRT_IMPL_DLLIMPORT uint8_t __stdcall WINRT_IMPL_TryAcquireSRWLockExclusive(winrt::impl::srwlock* lock) noexcept WINRT_IMPL_LINK(TryAcquireSRWLockExclusive, 4);
WINRT_IMPL_DLLIMPORT uint8_t __stdcall WINRT_IMPL_TryAcquireSRWLockShared(winrt::impl::srwlock* lock) noexcept WINRT_IMPL_LINK(TryAcquireSRWLockShared, 4);
WINRT_IMPL_DLLIMPORT void    __stdcall WINRT_IMPL_ReleaseSRWLockExclusive(winrt::impl::srwlock* lock) noexcept WINRT_IMPL_LINK(ReleaseSRWLockExclusive, 4);
WINRT_IMPL_DLLIMPORT void    __stdcall WINRT_IMPL_ReleaseSRWLockShared(winrt::impl::srwlock* lock) noexcept WINRT_IMPL_LINK(ReleaseSRWLockShared, 4);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_SleepConditionVariableSRW(winrt::impl::condition_variable* cv, winrt::impl::srwlock* lock, uint32_t milliseconds, uint32_t flags) noexcept WINRT_IMPL_LINK(SleepConditionVariableSRW, 16);
WINRT_IMPL_DLLIMPORT void    __stdcall WINRT_IMPL_WakeConditionVariable(winrt::impl::condition_variable* cv) noexcept WINRT_IMPL_LINK(WakeConditionVariable, 4);
WINRT_IMPL_DLLIMPORT void    __stdcall WINRT_IMPL_WakeAllConditionVariable(winrt::impl::condition_variable* cv) noexcept WINRT_IMPL_LINK(WakeAllConditionVariable, 4);
WINRT_IMPL_DLLIMPORT void*   __stdcall WINRT_IMPL_InterlockedPushEntrySList(void* head, void* entry) noexcept WINRT_IMPL_LINK(InterlockedPushEntrySList, 8);
WINRT_IMPL_DLLIMPORT void*   __stdcall WINRT_IMPL_InterlockedFlushSList(void* head) noexcept WINRT_IMPL_LINK(InterlockedFlushSList, 4);

WINRT_IMPL_DLLIMPORT void* __stdcall WINRT_IMPL_CreateEventW(void*, int32_t, int32_t, void*) noexcept WINRT_IMPL_LINK(CreateEventW, 16);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_SetEvent(void*) noexcept WINRT_IMPL_LINK(SetEvent, 4);
WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_CloseHandle(void* hObject) noexcept WINRT_IMPL_LINK(CloseHandle, 4);
WINRT_IMPL_DLLIMPORT uint32_t __stdcall WINRT_IMPL_WaitForSingleObject(void* handle, uint32_t milliseconds) noexcept WINRT_IMPL_LINK(WaitForSingleObject, 8);

WINRT_IMPL_DLLIMPORT int32_t  __stdcall WINRT_IMPL_TrySubmitThreadpoolCallback(void(__stdcall *callback)(void*, void* context), void* context, void*) noexcept WINRT_IMPL_LINK(TrySubmitThreadpoolCallback, 12);
WINRT_IMPL_DLLIMPORT winrt::impl::ptp_timer __stdcall WINRT_IMPL_CreateThreadpoolTimer(void(__stdcall *callback)(void*, void* context, void*), void* context, void*) noexcept WINRT_IMPL_LINK(CreateThreadpoolTimer, 12);     
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_SetThreadpoolTimer(winrt::impl::ptp_timer timer, void* time, uint32_t period, uint32_t window) noexcept WINRT_IMPL_LINK(SetThreadpoolTimer, 16);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_CloseThreadpoolTimer(winrt::impl::ptp_timer timer) noexcept WINRT_IMPL_LINK(CloseThreadpoolTimer, 4);
WINRT_IMPL_DLLIMPORT winrt::impl::ptp_wait __stdcall WINRT_IMPL_CreateThreadpoolWait(void(__stdcall *callback)(void*, void* context, void*, uint32_t result), void* context, void*) noexcept WINRT_IMPL_LINK(CreateThreadpoolWait, 12);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_SetThreadpoolWait(winrt::impl::ptp_wait wait, void* handle, void* timeout) noexcept WINRT_IMPL_LINK(SetThreadpoolWait, 12);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_CloseThreadpoolWait(winrt::impl::ptp_wait wait) noexcept WINRT_IMPL_LINK(CloseThreadpoolWait, 4);
WINRT_IMPL_DLLIMPORT winrt::impl::ptp_io __stdcall WINRT_IMPL_CreateThreadpoolIo(void* object, void(__stdcall *callback)(void*, void* context, void* overlapped, uint32_t result, std::size_t bytes, void*) noexcept, void* context, void*) noexcept WINRT_IMPL_LINK(CreateThreadpoolIo, 16);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_StartThreadpoolIo(winrt::impl::ptp_io io) noexcept WINRT_IMPL_LINK(StartThreadpoolIo, 4);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_CancelThreadpoolIo(winrt::impl::ptp_io io) noexcept WINRT_IMPL_LINK(CancelThreadpoolIo, 4);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_CloseThreadpoolIo(winrt::impl::ptp_io io) noexcept WINRT_IMPL_LINK(CloseThreadpoolIo, 4);
WINRT_IMPL_DLLIMPORT winrt::impl::ptp_pool __stdcall WINRT_IMPL_CreateThreadpool(void* reserved) noexcept WINRT_IMPL_LINK(CreateThreadpool, 4);
WINRT_IMPL_DLLIMPORT void __stdcall WINRT_IMPL_SetThreadpoolThreadMaximum(winrt::impl::ptp_pool pool, uint32_t value) noexcept WINRT_IMPL_LINK(SetThreadpoolThreadMaximum, 8);
WINRT_IMPL_DLLIMPORT int32_t __stdcall WINRT_IMPL_SetThreadpoolThreadMinimum(winrt::impl::ptp_pool pool, uint32_t value) noexcept WINRT_IMPL_LINK(SetThreadpoolThreadMinimum, 8);
WINRT_IMPL_DLLIMPORT void     __stdcall WINRT_IMPL_CloseThreadpool(winrt::impl::ptp_pool pool) noexcept WINRT_IMPL_LINK(CloseThreadpool, 4);

WINRT_IMPL_EXTERN_C_END

extern "C"
{
int32_t __stdcall WINRT_CanUnloadNow() noexcept;
int32_t __stdcall WINRT_GetActivationFactory(void* classId, void** factory) noexcept;
}

#undef WINRT_IMPL_DLLIMPORT
#undef WINRT_IMPL_LINK
#undef WINRT_IMPL_EXTERN_C_BEGIN
#undef WINRT_IMPL_EXTERN_C_END
