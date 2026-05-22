; cached_thunks_arm64ec.asm - ARM64EC cached interface dispatch stubs
;
; ARM64EC uses ARM64 instructions with x64-compatible calling convention.
; Logic is identical to ARM64. Fast Forward Sequences handle transitions.
; All slots including IUnknown (QI/AddRef/Release) resolve and forward,
; so an unresolved thunk behaves as a proper COM object.

#include "ksarm64.h"

    IMPORT  winrt_flat_resolve_thunk
    IMPORT  __guard_check_icall_fptr

    TEXTAREA

; ============================================================================
; FlatResolveAndDispatch
;
; Entry: w10 = vtable slot index, x0 = interface_thunk*
;        x1-x7 = caller's args (preserved across resolve)
;
; Calls winrt_flat_resolve_thunk(x0) -> x0 = resolved IFoo* or nullptr.
; On success: validates target via CFG, tail-jumps to vtable[slot].
; On failure: returns E_NOINTERFACE (0x80004002).
; ============================================================================

    CFG_ALIGN
    NESTED_ENTRY FlatResolveAndDispatch

    ; Save frame, link, caller's args, and slot index
    PROLOG_SAVE_REG_PAIR fp, lr, #-80!
    PROLOG_NOP stp x1, x2, [sp, #16]
    PROLOG_NOP stp x3, x4, [sp, #32]
    PROLOG_NOP stp x5, x6, [sp, #48]
    PROLOG_NOP stp x7, x10, [sp, #64]

    ; x0 = interface_thunk* (already in place)
    bl      winrt_flat_resolve_thunk

    ; Restore slot index (x10) and caller's args
    ldp     x7, x10, [sp, #64]
    ldp     x5, x6, [sp, #48]
    ldp     x3, x4, [sp, #32]
    ldp     x1, x2, [sp, #16]

    cbz     x0, resolve_failed

    ; x0 = resolved IFoo*. Load method ptr and validate via CFG.
    ldr     x9, [x0]               ; x9 = resolved vtable
    ldr     x15, [x9, x10, lsl #3] ; x15 = method at vtable[slot]

    ; Verify indirect call target (CFG: target in x15, validator in x12)
    adrp    x12, __guard_check_icall_fptr
    ldr     x12, [x12, __guard_check_icall_fptr]
    blr     x12

    ; Restore frame and tail-jump to validated method
    EPILOG_RESTORE_REG_PAIR fp, lr, #80!
    EPILOG_NOP br x15

resolve_failed
    mov     w0, #0x4002
    movk    w0, #0x8000, lsl #16   ; E_NOINTERFACE
    EPILOG_RESTORE_REG_PAIR fp, lr, #80!
    EPILOG_RETURN

    NESTED_END FlatResolveAndDispatch

; ============================================================================
; Leaf stub macro — each loads a slot index and branches to the shared dispatcher
; ============================================================================

    MACRO 
    WINRT_CACHED_THUNK $idx
    LEAF_ENTRY winrt_flat_thunk_stub$idx
    mov     x10, #$idx
    b       FlatResolveAndDispatch
    LEAF_END winrt_flat_thunk_stub$idx
    MEND

; Emit 256 stubs (slots 0-255)
#include "cached_thunk_stubs.inc"

; ============================================================================
; Vtable array: all slots (including IUnknown 0-2) resolve and dispatch.
; Read-only data.
; ============================================================================

    AREA |.rdata|, DATA, READONLY, ALIGN=3

    EXPORT winrt_flat_thunk_vtable
winrt_flat_thunk_vtable

    MACRO
    VtableEntry $idx
    DCQ winrt_flat_thunk_stub$idx
    MEND

#include "cached_thunk_vtable.inc"

    END
