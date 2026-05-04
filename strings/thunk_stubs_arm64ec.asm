; thunk_stubs_arm64ec.asm - ARM64EC thunk stubs for interface caching
;
; ARM64EC uses ARM64 instructions with x64-compatible calling convention.
; Logic is identical to ARM64. Fast Forward Sequences handle transitions.

    IMPORT winrt_fast_resolve_thunk

    AREA |.text|, CODE, READONLY, ALIGN=4

; ============================================================================
; No-op IUnknown slots
; ============================================================================
winrt_thunk_qi PROC
    str     xzr, [x2]
    mov     w0, #0x4002
    movk    w0, #0x8000, lsl #16
    ret
    ENDP

winrt_thunk_addref PROC
    mov     w0, #1
    ret
    ENDP

winrt_thunk_release PROC
    mov     w0, #1
    ret
    ENDP

; ============================================================================
; Common dispatch
; ============================================================================
    ALIGN 16
common_thunk_dispatch PROC
    stp     x29, x30, [sp, #-80]!
    mov     x29, sp
    stp     x1, x2, [sp, #16]
    stp     x3, x4, [sp, #32]
    stp     x5, x6, [sp, #48]
    stp     x7, x10, [sp, #64]

    bl      winrt_fast_resolve_thunk

    ldp     x7, x10, [sp, #64]
    ldp     x5, x6, [sp, #48]
    ldp     x3, x4, [sp, #32]
    ldp     x1, x2, [sp, #16]
    ldp     x29, x30, [sp], #80

    ldr     x9, [x0]
    ldr     x9, [x9, x10, lsl #3]
    br      x9
    ENDP

; ============================================================================
; Thunk stubs
; ============================================================================
    ALIGN 8
    EXPORT winrt_fast_thunk_stub_base
winrt_fast_thunk_stub_base

    MACRO
    ThunkStubDCD $idx
    EXPORT winrt_fast_thunk_stub_$idx
winrt_fast_thunk_stub_$idx
    DCD CurEnc
    b       common_thunk_dispatch
    MEND

    GBLA StubCtr
    GBLA CurEnc
StubCtr SETA 0
    WHILE StubCtr < 256
CurEnc SETA 0x5280000A :OR: (StubCtr:SHL:5)
    ThunkStubDCD $StubCtr
StubCtr SETA StubCtr + 1
    WEND

; ============================================================================
; Vtable array
; ============================================================================
    AREA |.data|, DATA, READWRITE, ALIGN=3

    EXPORT winrt_fast_thunk_vtable
winrt_fast_thunk_vtable

    DCQ winrt_thunk_qi
    DCQ winrt_thunk_addref
    DCQ winrt_thunk_release

    MACRO
    VtableEntry $idx
    DCQ winrt_fast_thunk_stub_$idx
    MEND

    GBLA VtblCtr
VtblCtr SETA 3
    WHILE VtblCtr < 256
    VtableEntry $VtblCtr
VtblCtr SETA VtblCtr + 1
    WEND

    END
