; Listing generated by Microsoft (R) Optimizing Compiler Version 19.34.31933.0 

	TITLE	D:\FreeApoc\Apocalypse\vs2022\UFOP\Debug\main.obj
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

_DATA	SEGMENT
COMM	_GAME_TICK_COUNTER:DWORD
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
__3A82F0E1_music@h DB 01H
__3432B400_timer@h DB 01H
__111BF5DD_window@h DB 01H
__D590B350_main@c DB 01H
msvcjmc	ENDS
PUBLIC	_SDL_main
PUBLIC	__JustMyCode_Default
PUBLIC	??_C@_0BC@EBJLJDML@Error?5init?5video?$CB@	; `string'
PUBLIC	??_C@_07EBODNPGK@Problem@			; `string'
PUBLIC	??_C@_0BD@EAJIEPPA@Error?5init?5cursor?$CB@	; `string'
PUBLIC	??_C@_0BC@MPOKNALA@Error?5init?5timer?$CB@	; `string'
PUBLIC	??_C@_0BC@EDCOIJKD@Error?5init?5sound?$CB@	; `string'
EXTRN	_SDL_ShowSimpleMessageBox:PROC
EXTRN	_timer_init:PROC
EXTRN	_video_init:PROC
EXTRN	_cursor_init:PROC
EXTRN	_sound_init:PROC
EXTRN	_play_music:PROC
EXTRN	_main_:PROC
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
;	COMDAT ??_C@_0BC@EDCOIJKD@Error?5init?5sound?$CB@
CONST	SEGMENT
??_C@_0BC@EDCOIJKD@Error?5init?5sound?$CB@ DB 'Error init sound!', 00H ; `string'
CONST	ENDS
;	COMDAT ??_C@_0BC@MPOKNALA@Error?5init?5timer?$CB@
CONST	SEGMENT
??_C@_0BC@MPOKNALA@Error?5init?5timer?$CB@ DB 'Error init timer!', 00H ; `string'
CONST	ENDS
;	COMDAT ??_C@_0BD@EAJIEPPA@Error?5init?5cursor?$CB@
CONST	SEGMENT
??_C@_0BD@EAJIEPPA@Error?5init?5cursor?$CB@ DB 'Error init cursor!', 00H ; `string'
CONST	ENDS
;	COMDAT ??_C@_07EBODNPGK@Problem@
CONST	SEGMENT
??_C@_07EBODNPGK@Problem@ DB 'Problem', 00H		; `string'
CONST	ENDS
;	COMDAT ??_C@_0BC@EBJLJDML@Error?5init?5video?$CB@
CONST	SEGMENT
??_C@_0BC@EBJLJDML@Error?5init?5video?$CB@ DB 'Error init video!', 00H ; `string'
CONST	ENDS
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
; File D:\FreeApoc\Apocalypse\UFOP\C_Sources\main.c
;	COMDAT _SDL_main
_TEXT	SEGMENT
_argc$ = 8						; size = 4
_argv$ = 12						; size = 4
_SDL_main PROC						; COMDAT

; 15   : {

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
	mov	ecx, OFFSET __D590B350_main@c
	call	@__CheckForDebuggerJustMyCode@4

; 16   : 
; 17   : 	//printf("%-20s", "this is a test");
; 18   : 	//_cprintf("%-20s", "this is a test");
; 19   : 	//remove("test.txt");
; 20   : 	//putchar('A');
; 21   : 	//_getch();
; 22   : 
; 23   : 
; 24   : 
; 25   : 	if (video_init())

	call	_video_init
	test	eax, eax
	je	SHORT $LN2@SDL_main

; 26   : 	{
; 27   : 		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init video!", NULL);

	push	0
	push	OFFSET ??_C@_0BC@EBJLJDML@Error?5init?5video?$CB@
	push	OFFSET ??_C@_07EBODNPGK@Problem@
	push	16					; 00000010H
	call	_SDL_ShowSimpleMessageBox
	add	esp, 16					; 00000010H

; 28   : 		return 1;

	mov	eax, 1
	jmp	$LN1@SDL_main
$LN2@SDL_main:

; 29   : 	}
; 30   : 	
; 31   : 	if (cursor_init())

	call	_cursor_init
	test	eax, eax
	je	SHORT $LN3@SDL_main

; 32   : 	{
; 33   : 		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init cursor!", NULL);

	push	0
	push	OFFSET ??_C@_0BD@EAJIEPPA@Error?5init?5cursor?$CB@
	push	OFFSET ??_C@_07EBODNPGK@Problem@
	push	16					; 00000010H
	call	_SDL_ShowSimpleMessageBox
	add	esp, 16					; 00000010H

; 34   : 		return 1;

	mov	eax, 1
	jmp	SHORT $LN1@SDL_main
$LN3@SDL_main:

; 35   : 	}
; 36   : 
; 37   : 	if (timer_init())

	call	_timer_init
	test	eax, eax
	je	SHORT $LN4@SDL_main

; 38   : 	{
; 39   : 		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init timer!", NULL);

	push	0
	push	OFFSET ??_C@_0BC@MPOKNALA@Error?5init?5timer?$CB@
	push	OFFSET ??_C@_07EBODNPGK@Problem@
	push	16					; 00000010H
	call	_SDL_ShowSimpleMessageBox
	add	esp, 16					; 00000010H

; 40   : 		return 2;

	mov	eax, 2
	jmp	SHORT $LN1@SDL_main
$LN4@SDL_main:

; 41   : 	}
; 42   : 
; 43   : 	if (sound_init())

	call	_sound_init
	test	eax, eax
	je	SHORT $LN5@SDL_main

; 44   : 	{
; 45   : 		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Problem", "Error init sound!", NULL);

	push	0
	push	OFFSET ??_C@_0BC@EDCOIJKD@Error?5init?5sound?$CB@
	push	OFFSET ??_C@_07EBODNPGK@Problem@
	push	16					; 00000010H
	call	_SDL_ShowSimpleMessageBox
	add	esp, 16					; 00000010H

; 46   : 		return 3;

	mov	eax, 3
	jmp	SHORT $LN1@SDL_main
$LN5@SDL_main:

; 47   : 	}
; 48   : 
; 49   : 
; 50   : 	//init_game_path();
; 51   : 	//GAME_PATH = GAME_PATH1;
; 52   : 	//printf("%s", GAME_PATH);
; 53   : 	play_music();

	call	_play_music

; 54   : 	//sdl_window_show();
; 55   : 	
; 56   : 	return main_(argc, (const char**)argv, NULL);

	push	0
	mov	eax, DWORD PTR _argv$[ebp]
	push	eax
	mov	ecx, DWORD PTR _argc$[ebp]
	push	ecx
	call	_main_
	add	esp, 12					; 0000000cH
$LN1@SDL_main:

; 57   : 	//return 0;
; 58   : }

	pop	edi
	pop	esi
	pop	ebx
	add	esp, 192				; 000000c0H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_SDL_main ENDP
_TEXT	ENDS
END