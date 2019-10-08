; AMD64 fast forwarder thunk implementations
; Calling convention: https://docs.microsoft.com/en-us/cpp/build/calling-convention

include ksamd64.inc

extern __guard_check_icall_fptr:QWORD

NESTED_ENTRY InvokeForwarder, _TEXT

    ; Save enregistered args 
    push    r9
    push    r8
    push    rdx
    push    rcx

    END_PROLOGUE

    ; Create register shadow stack
    sub     rsp, 4 * 8  

    ; Replace forwarder abi with owner abi 
    mov     rdx, qword ptr[rcx + 8]
    mov     [rsp + 4 * 8], rdx

    ; Add offset and index
    add     rax, qword ptr [rcx + 16]  

    ; Get method address from owner abi vtable 
    mov     rcx, qword ptr [rdx]  
    mov     rax, qword ptr [rcx + rax * 8]  

    ; Verify indirect call target
    call    [__guard_check_icall_fptr]
      
    ; Remove register shadow stack
    add     rsp, 4 * 8  

    ; Restore method address and args
    pop     rcx
    pop     rdx
    pop     r8
    pop     r9
      
    ; Jump to method
    rex_jmp_reg rax             

NESTED_END InvokeForwarder, _TEXT

; Define thunks
WINRT_FF_THUNK MACRO i
LEAF_ENTRY winrt_ff_thunk&i, _TEXT, NoPad
    mov rax, i
    jmp InvokeForwarder 
LEAF_END winrt_ff_thunk&i, _TEXT
ENDM

include thunks.inc

END