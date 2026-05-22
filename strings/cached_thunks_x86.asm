; cached_thunks_x86.asm - x86 cached interface dispatch stubs
;
; Calling convention: https://docs.microsoft.com/en-us/cpp/cpp/stdcall
;
; x86 COM uses __stdcall: args on stack, callee cleans. Thunks tail-jump
; to the real method which does the stdcall cleanup.
;
; Each stub loads a slot index into eax and jumps to FlatResolveAndDispatch.
; All slots including IUnknown (QI/AddRef/Release) resolve and forward,
; so an unresolved thunk behaves as a proper COM object.

.686
.MODEL FLAT

    extrn _winrt_flat_resolve_thunk:proc
    extrn ___guard_check_icall_fptr:DWORD

.CODE

; ============================================================================
; FlatResolveAndDispatch
;
; Entry: eax = vtable slot index
;        Stack: [esp]=ret_addr [esp+4]=this(thunk*) [esp+8]=arg1 ...
;
; Calls winrt_flat_resolve_thunk(this) → eax = resolved IFoo* or nullptr.
; On success: replaces this on stack, validates via CFG, tail-jumps to method.
; On failure: returns E_NOINTERFACE (0x80004002).
; ============================================================================

    ALIGN 16
FlatResolveAndDispatch PROC
    push    eax                     ; save slot index

    ; Call resolve: cdecl, pass thunk* as arg
    push    dword ptr [esp+8]       ; push 'this' (thunk*) as arg
    call    _winrt_flat_resolve_thunk
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
    cmp     ecx, 3
    je      resolve_failed_pop12
    cmp     ecx, 5
    jbe     resolve_failed_pop8

    mov     edx, [esp+4]            ; edx = thunk*
    mov     eax, [edx+4]            ; eax = payload
    test    eax, 1
    jz      resolve_failed_full

    mov     edx, eax
    and     edx, 0FFFFFFF0h         ; edx = thunked_runtimeclass_header*
    shr     eax, 1
    and     eax, 7                  ; eax = tagged interface index
    mov     edx, [edx+4]            ; edx = descriptor_table
    lea     edx, [edx+eax*8]        ; edx = &descriptor[index]
    jmp     resolve_failed_stack_table

resolve_failed_full:
    mov     edx, [edx+8]            ; edx = descriptor*

resolve_failed_stack_table:
    mov     edx, [edx+4]            ; edx = stack_pop_sizes table
    sub     ecx, 6
    movzx   eax, word ptr [edx+ecx*2]
    jmp     resolve_failed_return

resolve_failed_pop8:
    mov     eax, 8
    jmp     resolve_failed_return

resolve_failed_pop12:
    mov     eax, 12

resolve_failed_return:
    mov     edx, [esp]              ; edx = return address
    add     esp, 4                  ; pop return address
    add     esp, eax                ; pop the original stdcall args
    mov     eax, 80004002h          ; E_NOINTERFACE
    jmp     edx
FlatResolveAndDispatch ENDP

; ============================================================================
; Leaf stub macro — each loads a slot index and jumps to the shared dispatcher
; ============================================================================

WINRT_CACHED_THUNK MACRO idx
    ALIGN 2
    winrt_flat_thunk_stub_&idx& PROC
        mov     eax, idx
        jmp     FlatResolveAndDispatch
    winrt_flat_thunk_stub_&idx& ENDP
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
    dd winrt_flat_thunk_stub_&idx&
ENDM

.CONST

PUBLIC _winrt_flat_thunk_vtable
_winrt_flat_thunk_vtable LABEL DWORD

counter2 = 0
REPT 256
    vtable_entry %counter2
    counter2 = counter2 + 1
ENDM

END
