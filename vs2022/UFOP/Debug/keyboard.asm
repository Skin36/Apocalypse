; Listing generated by Microsoft (R) Optimizing Compiler Version 19.34.31933.0 

	TITLE	D:\FreeApoc\Apocalypse\vs2022\UFOP\Debug\keyboard.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

PUBLIC	_Scancode
msvcjmc	SEGMENT
__1846F8BA_keyboard@h DB 01H
__8F942132_keyboard@c DB 01H
msvcjmc	ENDS
_DATA	SEGMENT
_Scancode DD	00H
	DD	01H
	DD	02H
	DD	03H
	DD	01eH
	DD	030H
	DD	02eH
	DD	020H
	DD	012H
	DD	021H
	DD	022H
	DD	023H
	DD	017H
	DD	024H
	DD	025H
	DD	026H
	DD	032H
	DD	031H
	DD	018H
	DD	019H
	DD	010H
	DD	013H
	DD	01fH
	DD	014H
	DD	016H
	DD	02fH
	DD	011H
	DD	02dH
	DD	015H
	DD	02cH
	DD	02H
	DD	03H
	DD	04H
	DD	05H
	DD	06H
	DD	07H
	DD	08H
	DD	09H
	DD	0aH
	DD	0bH
	DD	01cH
	DD	01H
	DD	0eH
	DD	0fH
	DD	039H
	DD	0cH
	DD	0dH
	DD	01aH
	DD	01bH
	DD	02bH
	DD	00H
	DD	027H
	DD	028H
	DD	029H
	DD	033H
	DD	034H
	DD	035H
	DD	03aH
	DD	03bH
	DD	03cH
	DD	03dH
	DD	03eH
	DD	03fH
	DD	040H
	DD	041H
	DD	042H
	DD	043H
	DD	044H
	DD	057H
	DD	058H
	DD	00H
	DD	046H
	DD	00H
	DD	052e0H
	DD	047e0H
	DD	049e0H
	DD	053e0H
	DD	04fe0H
	DD	051e0H
	DD	04de0H
	DD	04be0H
	DD	050e0H
	DD	048e0H
	DD	00H
	DD	035e0H
	DD	037H
	DD	04aH
	DD	04eH
	DD	01ce0H
	DD	04fH
	DD	050H
	DD	051H
	DD	04bH
	DD	04cH
	DD	04dH
	DD	047H
	DD	048H
	DD	049H
	DD	052H
	DD	053H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	01dH
	DD	02aH
	DD	038H
	DD	00H
	DD	01de0H
	DD	036H
	DD	038e0H
_DATA	ENDS
PUBLIC	_code_conv
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
; File D:\FreeApoc\Apocalypse\UFOP\C_Sources\keyboard.c
;	COMDAT _code_conv
_TEXT	SEGMENT
_code$ = 8						; size = 4
_code_conv PROC						; COMDAT

; 239  : {

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
	mov	ecx, OFFSET __8F942132_keyboard@c
	call	@__CheckForDebuggerJustMyCode@4

; 240  :     return Scancode[code];

	mov	eax, DWORD PTR _code$[ebp]
	mov	eax, DWORD PTR _Scancode[eax*4]

; 241  : }

	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_code_conv ENDP
_TEXT	ENDS
END