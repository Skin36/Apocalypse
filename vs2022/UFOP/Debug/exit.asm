; Listing generated by Microsoft (R) Optimizing Compiler Version 19.34.31933.0 

	TITLE	D:\FreeApoc\Apocalypse\vs2022\UFOP\Debug\exit.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

msvcjmc	SEGMENT
__D2503BE0_exit@h DB 01H
__4582E268_exit@c DB 01H
msvcjmc	ENDS
PUBLIC	_exit_all
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
; File D:\FreeApoc\Apocalypse\UFOP\C_Sources\exit.c
;	COMDAT _exit_all
_TEXT	SEGMENT
_selector$ = 8						; size = 4
_exit_all PROC						; COMDAT

; 4    : {

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
	mov	ecx, OFFSET __4582E268_exit@c
	call	@__CheckForDebuggerJustMyCode@4

; 5    : /*
; 6    :     selector = 3;
; 7    :     int v1;
; 8    :     int Buffer;
; 9    :     if (selector == 1)
; 10   :     {
; 11   : 
; 12   :         v1 = _fopen("XCOM3.CFG", "rb+");
; 13   :         if (!v1)
; 14   :         {
; 15   :             printf("Cannot open file 'XCOM3.CFG'.\n");
; 16   :             _exit(1);
; 17   :         }
; 18   :         if (_fwrite(&Buffer, 1u, 1u, v1) != 1)
; 19   :         {
; 20   :             printf("Cannot fwrite file 'XCOM3.CFG'.\n");
; 21   :             _exit(1);
; 22   :         }
; 23   :         _fclose(v1);
; 24   :         __execl("XCOMAPOC.exe", "XCOMAPOC.exe",5, 5, 0);
; 25   :     }
; 26   :     else if (selector == 4)
; 27   :     {
; 28   :         __execl("TACP.exe", "TACP.exe", 5, 5, 0);
; 29   :     }
; 30   :     remove_timer();
; 31   :     close_music();
; 32   :     close_sound();
; 33   :     close_video();
; 34   :     _exit(1);
; 35   : */
; 36   : }

	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_exit_all ENDP
_TEXT	ENDS
END
