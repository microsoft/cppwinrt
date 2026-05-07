; cached_thunks_x86.asm - x86 thunk stubs for interface caching
;
; x86 COM uses __stdcall: args on stack, callee cleans. Thunks tail-jump
; to the real method which does the stdcall cleanup.
;
; Each stub is 7 bytes: mov eax, <slot_index> + jmp common_cached_thunk_dispatch

.686
.model flat, c

extern winrt_cached_resolve_thunk:proc

.code

; ============================================================================
; No-op IUnknown slots
; ============================================================================
winrt_cached_thunk_qi proc
    mov     eax, [esp+12]          ; ppv
    mov     dword ptr [eax], 0     ; *ppv = nullptr
    mov     eax, 80004002h         ; E_NOINTERFACE
    ret     12                     ; stdcall: 3 args
winrt_cached_thunk_qi endp

winrt_cached_thunk_addref proc
    mov     eax, 1
    ret     4                      ; stdcall: 1 arg (this)
winrt_cached_thunk_addref endp

winrt_cached_thunk_release proc
    mov     eax, 1
    ret     4
winrt_cached_thunk_release endp

; ============================================================================
; Common dispatch - entered with eax = vtable slot index
; ============================================================================
align 16
common_cached_thunk_dispatch proc
    ; Stack: [esp]=ret_addr [esp+4]=this [esp+8]=arg1 ...
    push    eax                     ; save slot index

    push    dword ptr [esp+8]       ; push 'this' as arg
    call    winrt_cached_resolve_thunk
    add     esp, 4

    pop     ecx                     ; ecx = slot index

    test    eax, eax
    jz      resolve_failed

    mov     [esp+4], eax            ; replace 'this' with real ptr
    mov     edx, [eax]              ; edx = real vtable
    jmp     dword ptr [edx + ecx*4]

resolve_failed:
    mov     eax, 80004002h          ; E_NOINTERFACE
    ret
common_cached_thunk_dispatch endp

; ============================================================================
; Thunk stub macro
; ============================================================================
thunk_stub macro idx
    align 2
    winrt_cached_thunk_stub_&idx& proc
        mov     eax, idx
        jmp     common_cached_thunk_dispatch
    winrt_cached_thunk_stub_&idx& endp
endm

; ============================================================================
; Emit 256 thunk stubs
; ============================================================================
counter = 0
rept 256
    thunk_stub %counter
    counter = counter + 1
endm

; ============================================================================
; Vtable array
; ============================================================================
.data

vtable_entry macro idx
    dd winrt_cached_thunk_stub_&idx&
endm

public winrt_cached_thunk_vtable
winrt_cached_thunk_vtable label dword

dd winrt_cached_thunk_qi
dd winrt_cached_thunk_addref
dd winrt_cached_thunk_release

counter2 = 3
rept 253
    vtable_entry %counter2
    counter2 = counter2 + 1
endm

end
