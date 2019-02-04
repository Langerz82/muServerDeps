; ****************************************************************************
; Module: SecureEngineCustomVM_FISH_LONDON.asm
; Description: Another way to link with the SecureEngine SDK via an ASM module
;
; Author/s: Oreans Technologies 
; (c) 2015 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (27/1/2015) ---
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
; VM_FISH_LONDON definition
; ****************************************************************************

VM_FISH_LONDON_START_ASM64 PROC

    push    rax
    push    rbx
    push    rcx

    mov     eax, 'TMWL'
    mov     ebx, 131
    mov     ecx, 'TMWL'
    add     ebx, eax
    add     ecx, eax

    pop     rcx
    pop     rbx
    pop     rax
    ret

VM_FISH_LONDON_START_ASM64 ENDP

VM_FISH_LONDON_END_ASM64 PROC

    push    rax
    push    rbx
    push    rcx

    mov     eax, 'TMWL'
    mov     ebx, 531
    mov     ecx, 'TMWL'
    add     ebx, eax
    add     ecx, eax

    pop     rcx
    pop     rbx
    pop     rax
    ret

VM_FISH_LONDON_END_ASM64 ENDP

ELSE

; ****************************************************************************
; VM_FISH_LONDON definition
; ****************************************************************************

VM_FISH_LONDON_START_ASM32 PROC

    push    eax
    push    ebx
    push    ecx

    mov     eax, 'TMWL'
    mov     ebx, 130
    mov     ecx, 'TMWL'
    add     ebx, eax
    add     ecx, eax

    pop     ecx
    pop     ebx
    pop     eax
    ret

VM_FISH_LONDON_START_ASM32 ENDP

VM_FISH_LONDON_END_ASM32 PROC

    push    eax
    push    ebx
    push    ecx

    mov     eax, 'TMWL'
    mov     ebx, 530
    mov     ecx, 'TMWL'
    add     ebx, eax
    add     ecx, eax

    pop     ecx
    pop     ebx
    pop     eax
    ret

VM_FISH_LONDON_END_ASM32 ENDP

ENDIF

END
