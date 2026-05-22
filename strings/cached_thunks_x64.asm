; cached_thunks_x64.asm - x64 cached interface dispatch stubs
;
; Calling convention: https://docs.microsoft.com/en-us/cpp/build/calling-convention
;
; Each leaf stub loads a slot index into eax and jumps to FlatResolveAndDispatch.
; FlatResolveAndDispatch calls winrt_flat_resolve_thunk(rcx) which returns
; the resolved IFoo* (or nullptr). On success, replaces rcx with the resolved
; pointer and tail-jumps to vtable[slot]. On failure, returns E_NOINTERFACE.
; All slots including IUnknown (QI/AddRef/Release) resolve and forward,
; so an unresolved thunk behaves as a proper COM object.

include ksamd64.inc

extern winrt_flat_resolve_thunk:proc
extern __guard_check_icall_fptr:QWORD

; ============================================================================
; FlatResolveAndDispatch
;
; Entry: eax = vtable slot index, rcx = interface_thunk*
;        rdx, r8, r9 = caller's args (preserved across resolve)
;
; Calls winrt_flat_resolve_thunk(rcx) → rax = resolved IFoo* or nullptr.
; On success: rcx = rax, tail-jumps to [rcx]->vtable[slot].
; On failure: returns E_NOINTERFACE (0x80004002).
; ============================================================================

NESTED_ENTRY FlatResolveAndDispatch, _TEXT

    ; Save caller's enregistered args and slot index
    push    r9
    push    r8
    push    rdx
    push    rax                     ; slot index

    END_PROLOGUE

    sub     rsp, 5 * 8             ; shadow space plus alignment padding for callee

    ; rcx = interface_thunk* (already in place from caller)
    call    winrt_flat_resolve_thunk

    add     rsp, 5 * 8             ; remove shadow space and alignment padding

    pop     r10                     ; r10 = slot index

    test    rax, rax
    jz      resolve_failed

    ; rax = resolved IFoo*. Load method ptr into rax for CFG validation.
    mov     rcx, rax                ; rcx = new this (resolved IFoo*)
    mov     r11, [rax]              ; r11 = resolved vtable
    mov     rax, [r11 + r10 * 8]   ; rax = method at vtable[slot]

    ; Verify indirect call target (preserves all GPRs except rax/flags)
    call    [__guard_check_icall_fptr]

    ; Restore caller's args after CFG check
    pop     rdx
    pop     r8
    pop     r9

    rex_jmp_reg rax

resolve_failed:
    pop     rdx                     ; balance the stack
    pop     r8
    pop     r9
    mov     eax, 80004002h          ; E_NOINTERFACE
    ret

NESTED_END FlatResolveAndDispatch, _TEXT

; ============================================================================
; Leaf stub macro — each loads a slot index and jumps to the shared dispatcher
; ============================================================================

WINRT_CACHED_THUNK MACRO idx
LEAF_ENTRY winrt_flat_thunk_stub_&idx, _TEXT, NoPad
    mov     eax, idx
    jmp     FlatResolveAndDispatch
LEAF_END winrt_flat_thunk_stub_&idx, _TEXT
ENDM

; Emit 256 stubs (slots 0-255)
counter = 0
REPT 256
    WINRT_CACHED_THUNK %counter
    counter = counter + 1
ENDM

; ============================================================================
; Vtable array: all slots (including IUnknown 0-2) resolve and dispatch.
; ============================================================================

vtable_entry MACRO idx
    dq winrt_flat_thunk_stub_&idx
ENDM

CONST segment

    public winrt_flat_thunk_vtable
    winrt_flat_thunk_vtable label qword

    counter2 = 0
    REPT 256
        vtable_entry %counter2
        counter2 = counter2 + 1
    ENDM

CONST ends

END
