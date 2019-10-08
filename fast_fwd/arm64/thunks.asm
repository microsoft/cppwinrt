; ARM64 fast forwarder thunk implementations
; Calling convention: https://docs.microsoft.com/en-us/cpp/build/arm64-windows-abi-conventions

#include "ksarm64.h"

    IMPORT  __guard_check_icall_fptr

    TEXTAREA 

    CFG_ALIGN
    NESTED_ENTRY InvokeForwarder 

    ; Save enregistered args 
    PROLOG_SAVE_REG_PAIR fp, lr, #-64!
    PROLOG_SAVE_REG_PAIR x19, x20, #16
    PROLOG_NOP stp x0, x1, [sp, #32]
    PROLOG_NOP stp x2, x3, [sp, #48]

    ; Replace forwarder abi with owner abi 
    ldr     x1, [x0, #8]
    str     x1, [sp, #32]

    ; Add offset and index (on stack)
    ldr     x2, [x0, #16]
    add     x12, x12, x2

    ; Get method address from owner abi vtable 
    ldr     x0, [x1]  
    ldr     x19, [x0, x12, lsl #3]
    mov     x0, x19
    
    ; Verify indirect call target
    adrp    x12, __guard_check_icall_fptr
    ldr     x12, [x12, __guard_check_icall_fptr]
    blr     x12

    ; Restore method address, return address, and args
    mov     x12, x19
    EPILOG_NOP ldp x2, x3, [sp, #48]
    EPILOG_NOP ldp x0, x1, [sp, #32]
    EPILOG_RESTORE_REG_PAIR x19, x20, #16
    EPILOG_RESTORE_REG_PAIR fp, lr, #64! 

    ; Jump to method
    EPILOG_NOP br x12 

    NESTED_END InvokeForwarder 

    ; Define thunks
    MACRO 
    WINRT_FF_THUNK $i
    LEAF_ENTRY winrt_ff_thunk$i
    mov     x12, #$i
    b       InvokeForwarder
    LEAF_END winrt_ff_thunk$i
    MEND

#include "thunks.inc"

    END