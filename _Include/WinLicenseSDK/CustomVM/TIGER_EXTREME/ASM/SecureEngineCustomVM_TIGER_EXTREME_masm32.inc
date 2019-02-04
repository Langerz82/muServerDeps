; ******************************************************************************
; Header: SecureEngineCustomVM_TIGER_EXTREME_masm32.inc
; Description: MASM32 macros definitions
;
; Author/s: Oreans Technologies 
; (c) 2014 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (2/4/2014) ---
; ******************************************************************************

; ******************************************************************************
;                                 Macros definition
; ******************************************************************************

VM_TIGER_EXTREME_START MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    126
    dd    0
    dd    20204c57h
ENDM


VM_TIGER_EXTREME_END MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    526
    dd    0
    dd    20204c57h
ENDM


