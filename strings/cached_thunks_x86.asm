; cached_thunks_x86.asm - x86 cached interface dispatch stubs
;
; Calling convention: https://docs.microsoft.com/en-us/cpp/cpp/stdcall
;
; x86 COM uses __stdcall: args on stack, callee cleans. Thunks tail-jump
; to the real method which does the stdcall cleanup.
;
; Each stub loads a slot index into eax and jumps to CachedResolveAndDispatch.

.686
.MODEL FLAT

    extrn _winrt_cached_resolve_thunk:proc
    extrn ___guard_check_icall_fptr:DWORD

.CODE

; ============================================================================
; No-op IUnknown slots for thunk objects
; The thunk is not a real COM object; QI fails, AddRef/Release return 1.
; ============================================================================

winrt_cached_thunk_qi PROC
    mov     eax, [esp+12]          ; ppv (3rd arg)
    mov     dword ptr [eax], 0     ; *ppv = nullptr
    mov     eax, 80004002h         ; E_NOINTERFACE
    ret     12                     ; stdcall: 3 args (this, riid, ppv)
winrt_cached_thunk_qi ENDP

winrt_cached_thunk_addref PROC
    mov     eax, 1
    ret     4                      ; stdcall: 1 arg (this)
winrt_cached_thunk_addref ENDP

winrt_cached_thunk_release PROC
    mov     eax, 1
    ret     4
winrt_cached_thunk_release ENDP

; ============================================================================
; CachedResolveAndDispatch
;
; Entry: eax = vtable slot index
;        Stack: [esp]=ret_addr [esp+4]=this(thunk*) [esp+8]=arg1 ...
;
; Calls winrt_cached_resolve_thunk(this) → eax = resolved IFoo* or nullptr.
; On success: replaces this on stack, validates via CFG, tail-jumps to method.
; On failure: returns E_NOINTERFACE (0x80004002).
; ============================================================================

    ALIGN 16
CachedResolveAndDispatch PROC
    push    eax                     ; save slot index

    ; Call resolve: cdecl, pass thunk* as arg
    push    dword ptr [esp+8]       ; push 'this' (thunk*) as arg
    call    _winrt_cached_resolve_thunk
    add     esp, 4                  ; clean cdecl arg

    pop     ecx                     ; ecx = slot index

    test    eax, eax
    jz      resolve_failed

    mov     [esp+4], eax            ; replace 'this' on stack with resolved IFoo*
    mov     edx, [eax]              ; edx = resolved vtable
    mov     eax, [edx + ecx*4]     ; eax = method at vtable[slot]

    ; Verify indirect call target (CFG)
    call    [___guard_check_icall_fptr]

    ; Jump to method (stdcall: callee will clean stack including 'this')
    jmp     eax

resolve_failed:
    mov     eax, 80004002h          ; E_NOINTERFACE
    ret
CachedResolveAndDispatch ENDP

; ============================================================================
; Leaf stub macro — each loads a slot index and jumps to the shared dispatcher
; ============================================================================

WINRT_CACHED_THUNK MACRO idx
    ALIGN 2
    winrt_cached_thunk_stub_&idx& PROC
        mov     eax, idx
        jmp     CachedResolveAndDispatch
    winrt_cached_thunk_stub_&idx& ENDP
ENDM

; Emit 256 stubs (slots 0-255)
counter = 0
REPT 256
    WINRT_CACHED_THUNK %counter
    counter = counter + 1
ENDM

; ============================================================================
; Vtable array: slots 0-2 are no-op IUnknown, slots 3-255 are resolve stubs
; ============================================================================

vtable_entry MACRO idx
    dd winrt_cached_thunk_stub_&idx&
ENDM

.CONST

PUBLIC _winrt_cached_thunk_vtable
_winrt_cached_thunk_vtable LABEL DWORD

dd winrt_cached_thunk_qi
dd winrt_cached_thunk_addref
dd winrt_cached_thunk_release

counter2 = 3
REPT 253
    vtable_entry %counter2
    counter2 = counter2 + 1
ENDM

END
