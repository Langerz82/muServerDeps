; ****************************************************************************
; Module: SecureEngineCustomVM_TIGER_EXTREME.asm
; Description: Another way to link with the SecureEngine SDK via an ASM module
;
; Author/s: Oreans Technologies 
; (c) 2014 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (2/4/2014) ---
; ****************************************************************************


IFDEF RAX

ELSE

.586
.model flat,stdcall
option casemap:none

ENDIF


; ****************************************************************************
;                                 Constants
; ****************************************************************************

.CONST


; ****************************************************************************
;                               Data Segment
; ****************************************************************************

.DATA


; ****************************************************************************
;                               Code Segment
; ****************************************************************************

.CODE

IFDEF RAX

; ****************************************************************************
; VM_TIGER_EXTREME definition
; ****************************************************************************

VM_TIGER_EXTREME_START_ASM64 PROC

    push    rax
    push    rbx
    push    rcx

    mov     eax, 'TMWL'
    mov     ebx, 127
    mov     ecx, 'TMWL'
    add     ebx, eax
    add     ecx, eax

    pop     rcx
    pop     rbx
    pop     rax
    ret

VM_TIGER_EXTREME_START_ASM64 ENDP

VM_TIGER_EXTREME_END_ASM64 PROC

    push    rax
    push    rbx
    push    rcx

    mov     eax, 'TMWL'
    mov     ebx, 527
    mov     ecx, 'TMWL'
    add     ebx, eax
    add     ecx, eax

    pop     rcx
    pop     rbx
    pop     rax
    ret

VM_TIGER_EXTREME_END_ASM64 ENDP

ELSE

; ****************************************************************************
; VM_TIGER_EXTREME definition
; ****************************************************************************

VM_TIGER_EXTREME_START_ASM32 PROC

    push    eax
    push    ebx
    push    ecx

    mov     eax, 'TMWL'
    mov     ebx, 126
    mov     ecx, 'TMWL'
    add     ebx, eax
    add     ecx, eax

    pop     ecx
    pop     ebx
    pop     eax
    ret

VM_TIGER_EXTREME_START_ASM32 ENDP

VM_TIGER_EXTREME_END_ASM32 PROC

    push    eax
    push    ebx
    push    ecx

    mov     eax, 'TMWL'
    mov     ebx, 526
    mov     ecx, 'TMWL'
    add     ebx, eax
    add     ecx, eax

    pop     ecx
    pop     ebx
    pop     eax
    ret

VM_TIGER_EXTREME_END_ASM32 ENDP

ENDIF

END
