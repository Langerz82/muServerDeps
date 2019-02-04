; ******************************************************************************
; Header: SecureEngineCustomVM_FISH_LONDON_masm32.inc
; Description: MASM32 macros definitions
;
; Author/s: Oreans Technologies 
; (c) 2015 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (27/1/2015) ---
; ******************************************************************************

; ******************************************************************************
;                                 Macros definition
; ******************************************************************************

VM_FISH_LONDON_START MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    130
    dd    0
    dd    20204c57h
ENDM


VM_FISH_LONDON_END MACRO

    db    0ebh, 10h
    dd    20204c57h
    dd    530
    dd    0
    dd    20204c57h
ENDM


