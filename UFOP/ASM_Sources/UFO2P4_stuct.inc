
; ---------------------------------------------------------------------------
;blding_struc_save struc ; (sizeof=0xE2, align=0x2, mappedto_70)
; ---------------------------------------------------------------------------


f_name          struc ; (sizeof=0xB, mappedto_141)
                                        ; XREF: DGROUP:first_name/r
field_0         db 11 dup(?)            ; string(C)
f_name          ends

; ---------------------------------------------------------------------------

l_name          struc ; (sizeof=0xC, mappedto_140)
                                        ; XREF: DGROUP:last_name/r
field_0         db 12 dup(?)            ; string(C)
l_name          ends
