; ARM fast forwarder thunk implementations
; Calling convention: https://docs.microsoft.com/en-us/cpp/build/overview-of-arm-abi-conventions

#include "ksarm.h"

    IMPORT  __guard_check_icall_fptr

    TEXTAREA 

    CFG_ALIGN
    NESTED_ENTRY InvokeForwarder 

    ; Save enregistered args and return address
    PROLOG_PUSH {r0-r4, lr}

    ; Replace forwarder abi with owner abi 
    ldr     r1, [r0, #4]
    str     r1, [sp]

    ; Add offset and index (on stack)
    ldr     r2, [sp, #24]
    ldr     r3, [r0, #8]
    add     r2, r2, r3

    ; Get method address from owner abi vtable 
    ldr     r0, [r1]  
    ldr     r4, [r0, r2, lsl #2]
    mov     r0, r4
    
    ; Verify indirect call target
    mov32   r12, __guard_check_icall_fptr
    ldr     r12, [r12]
    blx     r12

    ; Restore method address, return address, and args
    mov     r12, r4
    EPILOG_POP {r0-r4, lr}
    EPILOG_NOP add sp, #4

    ; Jump to method
    EPILOG_NOP bx r12

    NESTED_END InvokeForwarder 

    ; Define thunks
    MACRO 
    WINRT_FF_THUNK $i
    LEAF_ENTRY winrt_ff_thunk$i
    ; Note: no scratch registers available (r12/IP is used by CFG), must use stack
    mov     r12, $i
    push    r12
    ldr     pc, =InvokeForwarder 
    LEAF_END winrt_ff_thunk$i
    MEND

#include "thunks.inc"

    END