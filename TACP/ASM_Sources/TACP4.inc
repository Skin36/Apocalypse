;==========================================================
DEBUG = 0
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
extrn lseek:proc

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
extrn cprintf:proc
extrn fgetc:proc

extrn dos_delay:proc
extrn clock:proc

extrn free:proc
extrn malloc:proc
extrn exit:proc
extrn exit_all:proc
;======================cursor==============================
extrn draw_cursor:proc
;====================== BRAIN ==============================
extrn fill_brain:proc
;========================find==============================
extrn _findfirst32:proc
extrn _findnext32:proc
extrn remove:proc
;==========================================================
;extrn fsetpos:proc
;extrn fgetpos:proc
;extrn qsort:proc
;==========================================================
;extrn sound:proc
;extrn load_raw_snd:proc
;=========================music================================
extrn music_update:proc
extrn sound:proc
;=====================palette=================================
extrn out_palette:proc
extrn palette_correct:proc
;extrn palette_mix:proc
;=========================screen==============================
extrn redraw:proc
extrn redraw2:proc

extrn SDL_events:proc
extrn screenshot:proc
;extrn sound:proc
;extrn load_raw_snd:proc
extrn GAME_TICK_COUNTER:dword
;==========================================================
public swap_channal_flag
public camera_coord_x_3
public camera_coord_y_5
public camera_coord_7_x
public camera_coord_9_y
public camera_z_coord
;==========================================================
;need to lock part of screen buff
public screenx
public screenx_1
public screeny
public screeny_1
;==========================================================
public SCREEN_BUFFER_PTR_2
public SCREEN_BUFFER_PTR

;public screen_buffer
;public temp_screen_buffer
 public keyboard_update
 public mouse_update
;public pal_01
;public sound_struc
;==========================================================
;extrn restart:proc
;==========================================================
;=========================flags=============================
public map_view_flag
public main_volum_flg
public snd_volum_flg
public music_volum_flg
public action_music_flag
public alien_demens_flag
;===================volum===============================
public main_volum
public snd_volum
public music_volum
public music_alert_level

public AI_contrl_NONE
public player_side

extrn smooth_decrease_music_vol:proc
extrn set_volume:proc
;======================test==============================
public brain_unit
public brain_comand
extrn debug_brain:proc

;=========================AI===============================
public EXPERIEN_proccesing_flag
public expirean_temp_2
public WEAPEXP_2_t
public WEAPEXP_1_1
public update_matrix_flag
public sc_mission_type
public sc_bld_owner_sc
public WEAPEXP_write_flag
public agent_count
public dword_2A1578
public squad_array
public side_array
public AI_control_FULL
public unit_action_flag
public brain_index_count
public train_flag
public game_type_0
public dword_27A0F0
public alien_health_damage_array
public agent_health_damage_array


extrn write_expirien_dat:proc
extrn WEAPEXP_write:proc
extrn read_WEAPEXP:proc
extrn trunc_experian:proc
extrn update_matrix_c:proc

;======================time==============================
public tick
public second
public minute
public hours


;======================interface==============================
public choosen_agent
public agent_choose_interf



;==========================ASM STRUC=====================
public agents_t
public struc_behavior
public expirean_temp_2
public BRAIN_DAT
public losarea_dat