; Listing generated by Microsoft (R) Optimizing Compiler Version 19.34.31933.0 

	TITLE	D:\FreeApoc\Apocalypse\vs2022\TACP\Debug\palette.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	_current_pal
_BSS	SEGMENT
_current_pal DD	01H DUP (?)
_BSS	ENDS
msvcjmc	SEGMENT
__CD417A16_concurrencysal@h DB 01H
__18C11F8D_sal@h DB 01H
__BD42D05E_vadefs@h DB 01H
__2DC9DF70_vcruntime@h DB 01H
__C54FBE38_stdint@h DB 01H
__9D4A2350_palette@h DB 01H
__0A98FAD8_palette@c DB 01H
msvcjmc	ENDS
PUBLIC	_out_palette
PUBLIC	__JustMyCode_Default
EXTRN	@__CheckForDebuggerJustMyCode@4:PROC
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_InitBase:PROC
EXTRN	__RTC_Shutdown:PROC
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
rtc$IMZ	ENDS
; Function compile flags: /Odt
;	COMDAT __JustMyCode_Default
_TEXT	SEGMENT
__JustMyCode_Default PROC				; COMDAT
	push	ebp
	mov	ebp, esp
	pop	ebp
	ret	0
__JustMyCode_Default ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File D:\FreeApoc\Apocalypse\TACP\C_Sources\palette.c
;	COMDAT _out_palette
_TEXT	SEGMENT
_pal_ptr$ = 8						; size = 4
_out_palette PROC					; COMDAT

; 6    : {

	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	mov	edi, ebp
	xor	ecx, ecx
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	ecx, OFFSET __0A98FAD8_palette@c
	call	@__CheckForDebuggerJustMyCode@4

; 7    : 	current_pal = pal_ptr;

	mov	eax, DWORD PTR _pal_ptr$[ebp]
	mov	DWORD PTR _current_pal, eax

; 8    : }

	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_out_palette ENDP
_TEXT	ENDS
END
