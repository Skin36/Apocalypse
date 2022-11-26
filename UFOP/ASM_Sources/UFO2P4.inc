;==========================================================
DEBUG = 0
;==========================================================

extrn fopen:proc
extrn fclose:proc
extrn fread:proc
extrn fwrite:proc
extrn fseek:proc

extrn open:proc
extrn write:proc
extrn close:proc
extrn read:proc

;extrn ftell:proc
;extrn fflush:proc

extrn filelength:proc

extrn time:proc
extrn printf:proc
;extrn sprintf:proc

extrn puts:proc
;extrn getch:proc
;extrn putchar:proc
extrn _cprintf:proc
extrn fgetc:proc


;extrn remove:proc

extrn dos_delay:proc
extrn clock:proc

extrn free:proc
extrn malloc:proc
extrn exit:proc
;======================cursor==============================
extrn draw_cursor:proc
;==========================================================
extrn _findfirst:proc
extrn _findnext:proc
;==========================================================
;extrn fsetpos:proc
;extrn fgetpos:proc
;extrn qsort:proc
;==========================================================
;extrn sound:proc
;extrn load_raw_snd:proc
;=========================music================================
extrn open_music:proc
;extrn music_unpause:proc
;extrn music_pause:proc
;extrn read_music_play_list:proc
;=====================palette=================================
extrn out_palette:proc
extrn palette_correct:proc
;extrn palette_mix:proc
;=========================screen==============================
extrn out_to_screen:proc
extrn out_to_screen_2:proc
extrn SDL_events:proc
extrn screenshot:proc
;extrn sound:proc
;extrn load_raw_snd:proc
extrn GAME_TICK_COUNTER:dword
;==========================================================
;public map_view_flag
;public main_volum_flg
;public snd_volum_flg

;public swap_channal_flag
;public camera_coord_x_3
;public camera_coord_y_5
;public camera_coord_7_x
;public camera_coord_9_y
;public camera_z_coord
;==========================================================
;public main_volum
;public snd_volum
;public music_volum
;==========================================================
;need to lock part of screen buff
public screenx
public screenx_1
public screeny
public screeny_1
;==========================================================
public screen_buffer
public temp_screen_buffer
public mouse_update
public keyboard_update
;public pal_01
;public sound_struc
;==========================================================
;extrn restart:proc
;==========================================================

