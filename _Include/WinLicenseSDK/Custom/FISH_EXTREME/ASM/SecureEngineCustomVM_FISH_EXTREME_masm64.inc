; ******************************************************************************
; Header: SecureEngineCustomVM_FISH_EXTREME_masm64.inc
; Description: MASM64 macros definitions
;
; Author/s: Oreans Technologies 
; (c) 2014 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (2/4/2014) ---
; ******************************************************************************

; ******************************************************************************
;                                 Macros definition
; ******************************************************************************

VM_FISH_EXTREME_START MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    125
    dd    0
    dd    20204c57h
ENDM


VM_FISH_EXTREME_END MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    525
    dd    0
    dd    20204c57h
ENDM

