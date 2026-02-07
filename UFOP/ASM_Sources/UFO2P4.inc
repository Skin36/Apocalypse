;==========================================================
;DEBUG = 0
;==========================================================
extrn selector:byte
;=========================================================
extrn fopen:proc
extrn fclose:proc
extrn fread:proc
extrn fwrite:proc
extrn fseek:proc

extrn open:proc
extrn write:proc
extrn close:proc
extrn read:proc

extrn ftell:proc
extrn fflush:proc

extrn filelength:proc

extrn time:proc
extrn printf:proc
;extrn sprintf:proc

extrn puts:proc
extrn getch:proc
extrn putchar:proc
extrn _cprintf:proc
extrn putchar:proc
extrn fgetc:proc
;===========================time==========================
extrn dos_delay:proc
extrn clock:proc
;=========================================================
extrn free:proc
extrn malloc:proc
extrn exit:proc
extrn exit_all:proc
;======================cursor==============================
extrn draw_cursor:proc
;========================find==============================
extrn _findfirst32:proc
extrn _findnext32:proc
extrn remove:proc
;==========================================================
;extrn fsetpos:proc
;extrn fgetpos:proc
;extrn qsort:proc
;=========================music+sound======================
extrn music_unpause:proc
extrn music_pause:proc
extrn music_update:proc
extrn smooth_decrease_music_vol:proc
extrn sound:proc
;=====================palette=================================
extrn out_palette:proc
extrn palette_correct:proc
extrn palette_mix:proc
;=======================================================
extrn SDL_events:proc
extrn GAME_TICK_COUNTER:dword
;=========================flags=============================
public map_view_flag
public main_volum_flg
public snd_volum_flg
public music_volum_flg
public action_music_flag
public alien_demens_flag
;==================screen==================================
extrn clear_screen_sdl:proc
extrn redraw:proc
extrn redraw2:proc
extrn screenshot:proc
;extrn surf_init:proc
;extrn get_screen_buffer_ptr:proc

;extrn SCREEN_BUFFER_PTR:dword
public map_view_flag
public SCREEN_BUFFER_PTR_2
public SCREEN_BUFFER_PTR
;==========================================================
public swap_channal_flag
public camera_coord_x_3
public camera_coord_y_5
public camera_coord_7_x
public camera_coord_9_y
public camera_z_coord
;===================volum===============================
public main_volum
public snd_volum
public music_volum
public music_alert_level
extrn set_volume:proc
;==========================================================
;need to lock part of screen buff
public screenx
public screenx_1
public screeny
public screeny_1
;==========================================================
public mouse_update
public keyboard_update
public console_screen
;public pal_01
;==========================================================
;extrn restart:proc
;==========================================================
extrn delete_old_scenario:proc
extrn write_map_add_files:proc


;==========================for cheats=====================
public money
public aconsole


;   ==================junction===========================
public junct_num
extrn recalc_junc:proc

;==================map===========================
public citymap_work
;==========================ASM STRUC=====================
public road_junction_struc
public citymap_dat

