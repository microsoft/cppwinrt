; thunk_stubs_x64.asm - x64 thunk stubs for interface caching
;
; Each stub is 10 bytes: mov eax, <slot_index> + jmp common_thunk_dispatch
; The common dispatch saves caller's register args, calls resolve, then
; tail-jumps to the real vtable method.

extern winrt_fast_resolve_thunk:proc

_TEXT segment align(16)

; ============================================================================
; No-op IUnknown slots for thunk objects
; ============================================================================
winrt_thunk_qi proc
    mov     dword ptr [r8], 0       ; *ppv = nullptr
    mov     eax, 80004002h          ; E_NOINTERFACE
    ret
winrt_thunk_qi endp

winrt_thunk_addref proc
    mov     eax, 1
    ret
winrt_thunk_addref endp

winrt_thunk_release proc
    mov     eax, 1
    ret
winrt_thunk_release endp

; ============================================================================
; Common dispatch - entered with eax = vtable slot index, rcx = InterfaceThunk*
; ============================================================================
align 16
common_thunk_dispatch proc
    mov     [rsp+10h], rdx
    mov     [rsp+18h], r8
    mov     [rsp+20h], r9
    push    rax
    sub     rsp, 20h

    ; rcx = InterfaceThunk* (already in place)
    call    winrt_fast_resolve_thunk

    add     rsp, 20h
    pop     r10

    mov     rcx, rax
    mov     r11, [rax]
    mov     r11, [r11 + r10*8]

    mov     rdx, [rsp+10h]
    mov     r8,  [rsp+18h]
    mov     r9,  [rsp+20h]

    jmp     r11
common_thunk_dispatch endp

; ============================================================================
; Thunk stub macro
; ============================================================================
thunk_stub macro idx
    align 2
    winrt_fast_thunk_stub_&idx& proc
        mov     eax, idx
        jmp     common_thunk_dispatch
    winrt_fast_thunk_stub_&idx& endp
endm

; ============================================================================
; Emit 256 thunk stubs
; ============================================================================
counter = 0
rept 256
    thunk_stub %counter
    counter = counter + 1
endm

_TEXT ends

; ============================================================================
; Vtable array: slots 0-2 are no-op IUnknown, slots 3-255 are resolve stubs
; ============================================================================

vtable_entry macro idx
    dq winrt_fast_thunk_stub_&idx&
endm

_DATA segment

    public winrt_fast_thunk_vtable
    winrt_fast_thunk_vtable label qword

    dq winrt_thunk_qi
    dq winrt_thunk_addref
    dq winrt_thunk_release

    counter2 = 3
    rept 253
        vtable_entry %counter2
        counter2 = counter2 + 1
    endm

_DATA ends

end
