; Listing generated by Microsoft (R) Optimizing Compiler Version 19.34.31933.0 

	TITLE	D:\FreeApoc\Apocalypse\vs2022\UFOP\Debug\sdl_event.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

_DATA	SEGMENT
COMM	_mouse_x_pos:DWORD
COMM	_mouse_y_pos:DWORD
COMM	_akey:DWORD
COMM	_MOUSE_BUTTONS_STATE:BYTE
COMM	_x:DWORD
COMM	_y:DWORD
_DATA	ENDS
msvcjmc	SEGMENT
__D0DFFAC6_winpackagefamily@h DB 01H
__D0D0F397_winapifamily@h DB 01H
__1ADC5BE7_begin_code@h DB 01H
__8D67BD40_close_code@h DB 01H
__DDEA9788_SDL_platform@h DB 01H
__94A3FDDD_sdkddkver@h DB 01H
__4BD2FD7B_SDL_config@h DB 01H
__CD417A16_concurrencysal@h DB 01H
__18C11F8D_sal@h DB 01H
__BD42D05E_vadefs@h DB 01H
__2DC9DF70_vcruntime@h DB 01H
__6569C2CA_corecrt@h DB 01H
__C9393812_stddef@h DB 01H
__F19000F7_stdarg@h DB 01H
__EBA520B6_SDL_stdinc@h DB 01H
__C6E6D7CD_SDL_main@h DB 01H
__C819AA9E_SDL_assert@h DB 01H
__D7AB785A_SDL_atomic@h DB 01H
__7CDE7143_SDL_error@h DB 01H
__C264589F_SDL_endian@h DB 01H
__BF5E9F8E_SDL_mutex@h DB 01H
__741AE07E_corecrt_math@h DB 01H
__91D68F2D_math@h DB 01H
__C66E9EB9_vcruntime_startup@h DB 01H
__F6CEABBE_corecrt_startup@h DB 01H
__61BDDCD5_corecrt_wprocess@h DB 01H
__F57902D7_process@h DB 01H
__0C4DD541_SDL_thread@h DB 01H
__1FA23C7D_SDL_rwops@h DB 01H
__4BA16835_SDL_audio@h DB 01H
__A80A68DA_SDL_clipboard@h DB 01H
__99FA516B_intrin0@inl@h DB 01H
__552C563B_setjmp@h DB 01H
__3BCDA13C_mmintrin@h DB 01H
__6C20D4D3_corecrt_malloc@h DB 01H
__20BB4341_malloc@h DB 01H
__AD1CB324_xmmintrin@h DB 01H
__C87E3AE8_emmintrin@h DB 01H
__17DF5261_pmmintrin@h DB 01H
__A70621E3_tmmintrin@h DB 01H
__8E3D3460_smmintrin@h DB 01H
__EB5FBDAC_nmmintrin@h DB 01H
__3EE447E2_wmmintrin@h DB 01H
__F5700AE5_zmmintrin@h DB 01H
__C264A82F_immintrin@h DB 01H
__78A7496A_ammintrin@h DB 01H
__74E2446C_mm3dnow@h DB 01H
__731AEA4C_intrin@h DB 01H
__68067E44_SDL_cpuinfo@h DB 01H
__64E89E41_SDL_pixels@h DB 01H
__BFEA0781_SDL_rect@h DB 01H
__03192F33_SDL_blendmode@h DB 01H
__00CE5C3F_SDL_surface@h DB 01H
__D71AB72D_SDL_video@h DB 01H
__0166E892_SDL_scancode@h DB 01H
__1B40CEEC_SDL_keycode@h DB 01H
__92B90C80_SDL_keyboard@h DB 01H
__41FFAFA3_SDL_mouse@h DB 01H
__9364B404_SDL_joystick@h DB 01H
__049FB5AB_SDL_sensor@h DB 01H
__5B890460_SDL_gamecontroller@h DB 01H
__362302C9_SDL_quit@h DB 01H
__EB78B272_SDL_touch@h DB 01H
__18F5D7F5_SDL_gesture@h DB 01H
__9C10120D_SDL_events@h DB 01H
__D54FBDEE_SDL_filesystem@h DB 01H
__627295A5_SDL_haptic@h DB 01H
__57D222F1_SDL_hints@h DB 01H
__28D3E821_SDL_loadso@h DB 01H
__52E9A77B_SDL_log@h DB 01H
__E1B8B927_SDL_messagebox@h DB 01H
__28C501EE_SDL_metal@h DB 01H
__512DBC7B_SDL_power@h DB 01H
__75481EC3_SDL_render@h DB 01H
__ECCEE624_SDL_shape@h DB 01H
__D14E8A6D_SDL_system@h DB 01H
__596BF456_SDL_timer@h DB 01H
__130AA0EB_SDL_version@h DB 01H
__A8160445_SDL_locale@h DB 01H
__C1EAB8A4_SDL_misc@h DB 01H
__0E484B1D_SDL@h DB 01H
__C54FBE38_stdint@h DB 01H
__AB7B7F5C_sdl_event@h DB 01H
__1846F8BA_keyboard@h DB 01H
__3CA9A6D4_sdl_event@c DB 01H
msvcjmc	ENDS
PUBLIC	_SDL_events
PUBLIC	_get_cursor_pos
PUBLIC	__JustMyCode_Default
EXTRN	_SDL_GetMouseState:PROC
EXTRN	_SDL_PollEvent:PROC
EXTRN	_mouse_update:PROC
EXTRN	_keyboard_update:PROC
EXTRN	_code_conv:PROC
EXTRN	@_RTC_CheckStackVars@8:PROC
EXTRN	@__CheckForDebuggerJustMyCode@4:PROC
EXTRN	@__security_check_cookie@4:PROC
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_InitBase:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	___security_cookie:DWORD
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
rtc$IMZ	ENDS
;	COMDAT voltbl
voltbl	SEGMENT
_volmd	DW	022H
	DW	0175H
voltbl	ENDS
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
; File D:\FreeApoc\Apocalypse\UFOP\C_Sources\sdl_event.c
;	COMDAT _get_cursor_pos
_TEXT	SEGMENT
_get_cursor_pos PROC					; COMDAT

; 77   : {

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
	mov	ecx, OFFSET __3CA9A6D4_sdl_event@c
	call	@__CheckForDebuggerJustMyCode@4

; 78   :     SDL_GetMouseState(&mouse_x_pos, &mouse_y_pos);

	push	OFFSET _mouse_y_pos
	push	OFFSET _mouse_x_pos
	call	_SDL_GetMouseState
	add	esp, 8

; 79   :     if (MOUSE_BUTTONS_STATE) {

	movzx	eax, BYTE PTR _MOUSE_BUTTONS_STATE
	test	eax, eax
	je	SHORT $LN2@get_cursor

; 80   : 
; 81   :         //printf("%d \n", MOUSE_BUTTONS_STATE);
; 82   :         //printf("x= %d  y= %d\n", mouse_x_pos, mouse_y_pos);
; 83   :         mouse_update(MOUSE_BUTTONS_STATE, mouse_y_pos, mouse_x_pos);

	mov	eax, DWORD PTR _mouse_x_pos
	push	eax
	mov	ecx, DWORD PTR _mouse_y_pos
	push	ecx
	movzx	edx, BYTE PTR _MOUSE_BUTTONS_STATE
	push	edx
	call	_mouse_update
	add	esp, 12					; 0000000cH

; 84   :       
; 85   :         MOUSE_BUTTONS_STATE = 0;

	mov	BYTE PTR _MOUSE_BUTTONS_STATE, 0
$LN2@get_cursor:

; 86   :     }
; 87   : 
; 88   :     return 0;

	xor	eax, eax

; 89   : }

	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_get_cursor_pos ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File D:\FreeApoc\Apocalypse\UFOP\C_Sources\sdl_event.c
;	COMDAT _SDL_events
_TEXT	SEGMENT
_event$ = -64						; size = 56
__$ArrayPad$ = -4					; size = 4
_SDL_events PROC					; COMDAT

; 13   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 260				; 00000104H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-68]
	mov	ecx, 17					; 00000011H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	mov	DWORD PTR __$ArrayPad$[ebp], eax
	mov	ecx, OFFSET __3CA9A6D4_sdl_event@c
	call	@__CheckForDebuggerJustMyCode@4
$LN2@SDL_events:

; 14   :     SDL_Event event;
; 15   :     while (SDL_PollEvent(&event))

	lea	eax, DWORD PTR _event$[ebp]
	push	eax
	call	_SDL_PollEvent
	add	esp, 4
	test	eax, eax
	je	$LN3@SDL_events

; 16   :     {
; 17   : 
; 18   :         if (event.type == SDL_MOUSEBUTTONDOWN)

	cmp	DWORD PTR _event$[ebp], 1025		; 00000401H
	jne	SHORT $LN4@SDL_events

; 19   :         {
; 20   :             if (event.button.button == SDL_BUTTON_LEFT)

	movzx	eax, BYTE PTR _event$[ebp+16]
	cmp	eax, 1
	jne	SHORT $LN6@SDL_events

; 21   :             {
; 22   :                 MOUSE_BUTTONS_STATE = 2;

	mov	BYTE PTR _MOUSE_BUTTONS_STATE, 2

; 23   :             }

	jmp	SHORT $LN7@SDL_events
$LN6@SDL_events:

; 24   :             else if (event.button.button == SDL_BUTTON_RIGHT)

	movzx	eax, BYTE PTR _event$[ebp+16]
	cmp	eax, 3
	jne	SHORT $LN7@SDL_events

; 25   :             {
; 26   :                 MOUSE_BUTTONS_STATE = 8;//|

	mov	BYTE PTR _MOUSE_BUTTONS_STATE, 8
$LN7@SDL_events:

; 27   :             }
; 28   :         }

	jmp	$LN5@SDL_events
$LN4@SDL_events:

; 29   :         else if (event.type == SDL_MOUSEBUTTONUP)

	cmp	DWORD PTR _event$[ebp], 1026		; 00000402H
	jne	SHORT $LN9@SDL_events

; 30   :         {
; 31   :             if (event.button.button == SDL_BUTTON_LEFT)

	movzx	eax, BYTE PTR _event$[ebp+16]
	cmp	eax, 1
	jne	SHORT $LN11@SDL_events

; 32   :             {
; 33   :                 MOUSE_BUTTONS_STATE = 4;

	mov	BYTE PTR _MOUSE_BUTTONS_STATE, 4

; 34   :             }

	jmp	SHORT $LN12@SDL_events
$LN11@SDL_events:

; 35   :             else if (event.button.button == SDL_BUTTON_RIGHT)

	movzx	eax, BYTE PTR _event$[ebp+16]
	cmp	eax, 3
	jne	SHORT $LN12@SDL_events

; 36   :             {
; 37   :                 MOUSE_BUTTONS_STATE = 16;

	mov	BYTE PTR _MOUSE_BUTTONS_STATE, 16	; 00000010H
$LN12@SDL_events:

; 38   :             }
; 39   :         }

	jmp	$LN5@SDL_events
$LN9@SDL_events:

; 40   :         else
; 41   :         {
; 42   :             if (event.type == SDL_KEYDOWN)

	cmp	DWORD PTR _event$[ebp], 768		; 00000300H
	jne	SHORT $LN14@SDL_events

; 43   :             {
; 44   :                 akey = code_conv(event.key.keysym.sym);

	mov	eax, DWORD PTR _event$[ebp+20]
	push	eax
	call	_code_conv
	add	esp, 4
	mov	DWORD PTR _akey, eax

; 45   :                 if (akey < 255)

	cmp	DWORD PTR _akey, 255			; 000000ffH
	jae	SHORT $LN15@SDL_events

; 46   :                 {
; 47   :                     keyboard_update(akey);

	mov	eax, DWORD PTR _akey
	push	eax
	call	_keyboard_update
	add	esp, 4

; 48   :                 }

	jmp	SHORT $LN14@SDL_events
$LN15@SDL_events:

; 49   :                 else
; 50   :                 {
; 51   :                     keyboard_update(224);

	push	224					; 000000e0H
	call	_keyboard_update
	add	esp, 4

; 52   :                     keyboard_update(akey >> 8);

	mov	eax, DWORD PTR _akey
	shr	eax, 8
	push	eax
	call	_keyboard_update
	add	esp, 4
$LN14@SDL_events:

; 53   :                 }
; 54   :             }
; 55   :             if (event.type == SDL_KEYUP)

	cmp	DWORD PTR _event$[ebp], 769		; 00000301H
	jne	SHORT $LN5@SDL_events

; 56   :             {
; 57   :                 akey = code_conv(event.key.keysym.sym);

	mov	eax, DWORD PTR _event$[ebp+20]
	push	eax
	call	_code_conv
	add	esp, 4
	mov	DWORD PTR _akey, eax

; 58   :                 if (akey < 255)

	cmp	DWORD PTR _akey, 255			; 000000ffH
	jae	SHORT $LN18@SDL_events

; 59   :                 {
; 60   :                     keyboard_update(akey + 128);

	mov	eax, DWORD PTR _akey
	add	eax, 128				; 00000080H
	push	eax
	call	_keyboard_update
	add	esp, 4

; 61   :                 }

	jmp	SHORT $LN5@SDL_events
$LN18@SDL_events:

; 62   :                 else
; 63   :                 {
; 64   :                     keyboard_update(224);

	push	224					; 000000e0H
	call	_keyboard_update
	add	esp, 4

; 65   :                     keyboard_update((akey >> 8) + 128);

	mov	eax, DWORD PTR _akey
	shr	eax, 8
	add	eax, 128				; 00000080H
	push	eax
	call	_keyboard_update
	add	esp, 4
$LN5@SDL_events:

; 66   :                 }
; 67   :             }
; 68   :         }
; 69   :     }

	jmp	$LN2@SDL_events
$LN3@SDL_events:

; 70   :     
; 71   :     get_cursor_pos();

	call	_get_cursor_pos

; 72   :     return 0;

	xor	eax, eax

; 73   : 
; 74   : }

	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN23@SDL_events
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	mov	ecx, DWORD PTR __$ArrayPad$[ebp]
	xor	ecx, ebp
	call	@__security_check_cookie@4
	add	esp, 260				; 00000104H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
$LN23@SDL_events:
	DD	1
	DD	$LN22@SDL_events
$LN22@SDL_events:
	DD	-64					; ffffffc0H
	DD	56					; 00000038H
	DD	$LN21@SDL_events
$LN21@SDL_events:
	DB	101					; 00000065H
	DB	118					; 00000076H
	DB	101					; 00000065H
	DB	110					; 0000006eH
	DB	116					; 00000074H
	DB	0
_SDL_events ENDP
_TEXT	ENDS
END