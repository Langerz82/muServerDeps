; ******************************************************************************
; Header: SecureEngineCustomVM_FISH_EXTREME_fasm32.inc
; Description: FASM32 macros definitions
;
; Author/s: Oreans Technologies 
; (c) 2014 Oreans Technologies
;
; --- File generated automatically from Oreans VM Generator (2/4/2014) ---
; ******************************************************************************

; ******************************************************************************
;                                 Macros definition
; ******************************************************************************

macro VM_FISH_EXTREME_START
{
    db    0ebh, 10h
    dd    20204c57h
    dd    124
    dd    0
    dd    20204c57h
}


macro VM_FISH_EXTREME_END
{
    db    0ebh, 10h
    dd    20204c57h
    dd    524
    dd    0
    dd    20204c57h
}


