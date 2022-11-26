; ---------------------------------------------------------------------------

vehicle_save_data struc ; (sizeof=0x276, align=0x2, mappedto_90)
                                        ; XREF: .bss:veh_save_stru/r
veh_count       dw ?                    ; XREF: day_loop_+322/w
                                        ; day_loop_:loc_10C68/r ...
movement_type   dw ?                    ; XREF: main_loop_+7F/r
                                        ; main_loop_+219/r ...
craft_type      dw ?                    ; XREF: set_erorr_value_6_/w
                                        ; sub_16663+71/w ...
veh_name        db 42 dup(?)            ; XREF: main_+12F/w
                                        ; ultra_time_+6F4/w ...
current_x_pos   dw ?                    ; XREF: autopause_+212/r
                                        ; autopause_butt+EE/r ...
current_y_pos   dw ?                    ; XREF: sub_48D30+207/r
                                        ; sub_58930+4BC/r ...
current_altitude dw ?
current_frame1  dw ?
current_frame2  dw ?
current_frame3  dw ?
current_frame4  dw ?
current_frame5  dw ?
size_x          dw ?                    ; XREF: sub_48D30+1EE/r
size_y          dw ?                    ; XREF: sub_48D30+1DE/r
size_z          dw ?
image_pos1      dw ?
image_pos2      dw ?
image_pos3      dw ?
image_pos4      dw ?
destantion_x_pos dw ?
distantion_y_pos dw ?
distantion_altitude dw ?                ; XREF: agent_path_find+96D/r
altitude_setting dw ?                   ; XREF: sity_main_intr+969/r
                                        ; show_unit_stats+33F/r
unknown_x_pos1  dw ?                    ; XREF: show_unit_stats+335/r
unknown_y_pos1  dw ?
unknown_altitude1 dw ?
current_x_pos_and_size_x dw ?
current_y_pos_and_size_y dw ?
current_x_pos_and_size_z dw ?           ; XREF: alien_gen+2C3/r
veh_path_ind    dw ?
unknown_29      dw ?                    ; XREF: calc_ptang_+71/r
                                        ; calc_ptang_+96/r
road_direct_ind dw ?                    ; XREF: draw_object_on_map_+9E0/r
activ_waypoint  dw ?
unknown_32      dw ?
vert_direction  dw ?
speed_x2_div3   dw ?
hovering_time   dw ?
unknown_36      dw ?
unknown_37      dw ?
unknown_38      dw ?
unknown_39      dw ?
unknown_40      dw ?                    ; XREF: lose_screen_+59/r
                                        ; win_screen+56/r ...
unknown_41      dw ?
waypoint_1_x_pos dw ?                   ; XREF: lose_screen_+52/r
                                        ; win_screen+4F/r ...
waypoint_1_y_pos dw ?
waypoint_1_z_pos dw ?                   ; XREF: score_day_screen+25A/r
                                        ; score_day_screen+281/r
waypoint_1_num  dw ?
waypoint_2_x_pos dw ?                   ; XREF: score_day_screen+286/r
waypoint_2_y_pos dw ?
waypoint_2_z_pos dw ?                   ; XREF: score_day_screen+2D5/r
                                        ; score_day_screen+2FC/r
waypoint_2_num  dw ?
waypoint_3_x_pos dw ?                   ; XREF: score_day_screen+301/r
waypoint_3_y_pos dw ?
waypoint_3_z_pos dw ?                   ; XREF: calc_week_to_total_score+5E/r
                                        ; score_day_screen+356/r ...
waypoint_3_num  dw ?
waypoint_4_x_pos dw ?                   ; XREF: calc_week_to_total_score+56/r
                                        ; score_day_screen+382/r
waypoint_4_y_pos dw ?
waypoint_4_z_pos dw ?                   ; XREF: score_day_screen+3D6/r
                                        ; score_day_screen+402/r ...
waypoint_4_num  dw ?
waypoint_5_x_pos dw ?                   ; XREF: calc_funding+1D0/r
                                        ; calc_funding+1DF/w ...
waypoint_5_y_pos dw ?
waypoint_5_z_pos dw ?                   ; XREF: MESSAGE_HISTORY_box_+919/r
                                        ; Center_on_message+1E9/r ...
waypoint_5_num  dw ?                    ; XREF: Infiltration_calc+3E/r
waypoint_6_x_pos dw ?                   ; XREF: score_day_screen+487/r
waypoint_6_y_pos dw ?
waypoint_6_z_pos dw ?                   ; XREF: score_day_screen+4DB/r
                                        ; score_day_screen+502/r
waypoint_6_num  dw ?
waypoint_7_x_pos dw ?                   ; XREF: score_day_screen+507/r
waypoint_7_y_pos dw ?
waypoint_7_z_pos dw ?                   ; XREF: check_base_contain+37/r
                                        ; check_base_adv_contain+37/r ...
waypoint_7_num  dw ?                    ; XREF: check_base_contain+54/r
                                        ; check_base_adv_contain+54/r ...
waypoint_8_x_pos dw ?                   ; XREF: check_base_contain+4E/r
                                        ; check_base_adv_contain+4E/r ...
waypoint_8_y_pos dw ?
waypoint_8_z_pos dw ?                   ; XREF: set_start_data_+2A/r
                                        ; gen_start_base_+49D/r ...
waypoint_8_num  dw ?                    ; XREF: DGATE_IN+19D/r
                                        ; score_day_screen+52E/r ...
unknown_74      dw ?                    ; XREF: calc_funding+623/r
                                        ; calc_funding+859/w ...
unknown_75      dw ?
unknown_76      dw ?                    ; XREF: base_bilding_screen+99C/r
                                        ; base_bilding_screen+B64/r
unknown_77      dw ?
unknown_78      dw ?                    ; XREF: switch_reserch_modifier:def_AB38F/r
unknown_79      dw ?
unknown_80      dw ?                    ; XREF: sub_AA2A0+28E/r
unknown_81      dw ?
active_waypoint db ?                    ; XREF: diplomatic_screen_unuse+C2/r
                                        ; diplomatic_screen_unuse+D4/w ...
target_type     db ?                    ; XREF: agent_assigment_switch_+73E/r
                                        ; agent_assigment_switch_+7C5/r
target_x_pos    dw ?                    ; XREF: agent_assigment_switch_+751/r
                                        ; agent_assigment_switch_+7EA/r ...
target_y_pos    dw ?
smog_flag       db ?
active_waypoints db ?
waypoint1_x_pos dw ?
waypoint1_y_pos dw ?
waypoint2_x_pos dw ?                    ; XREF: sub_89240+8/r
                                        ; sub_89240+E5/w ...
waypoint2_y_pos dw ?
waypoint3_x_pos dw ?                    ; XREF: DGATE_IN+502/w
                                        ; DGATE_IN+6F9/w ...
waypoint3_y_pos dw ?
waypoint4_x_pos dw ?                    ; XREF: Research:loc_AB801/r
                                        ; Research:loc_ABBA0/r
waypoint4_y_pos dw ?
waypoint5_x_pos dw ?                    ; XREF: sub_477F0:loc_47ABB/r
waypoint5_y_pos dw ?
unknown_96      dw ?                    ; XREF: draw_grass+1E8/r
                                        ; scroll_minimap_:def_480DB/r ...
unknown_x_pos3  dw ?
unknown_y_pos3  dw ?                    ; XREF: Live_Alien_spotted+B2/r
unknown_altitude3 dw ?
unknown_100     dw ?
anim_speed      dw ?
anim_frame      dw ?
unknown_103     dw ?
unknown_104     dw ?
Acceleration    dw ?
Acceleration_2  dw ?
top_speed       dw ?
current_speed   dw ?
unknown_109     dw ?
field_106       db ?
field_107       db ?
shadow_struc_offset dw ?                ; XREF: sub_8F800+127/r
veh_assign      dw ?                    ; XREF: move_agent_to_bld_on_vehicle+53D/r
                                        ; move_agent_to_bld_on_vehicle+557/r ...
unknown_114     dw ?
unknown_115     dw ?
lof_height      dw ?
lof_offset      dw ?
x_pos_3d        dw ?
y_pos_3d        dw ?
z_pos_3d        dw ?
weapon_slot_1   dw ?                    ; XREF: scan_mouse_veh_veapon+1D2/r
                                        ; sub_505A0+226/r
weapon_slot_2   dw ?
weapon_slot_3   dw ?
fire_rate_1     dw ?
fire_rate_2     dw ?
fire_rate_3     dw ?
enable_weapon1  dw ?                    ; XREF: scan_mouse_veh_veapon+1DE/r
                                        ; scan_mouse_veh_veapon+1F3/w
enable_weapon2  dw ?
enable_weapon3  dw ?                    ; XREF: ALLIEN_MOVE_TO_BLD+42/r
owner           dw ?                    ; XREF: main_loop_+8F/r
                                        ; main_loop_+225/r ...
constitution    dw ?
unknown_131     dw ?
max_sheild_points dw ?
unknown_133     dw ?
attack_veh_type_latency db 34 dup(?)
target_veh      dw ?                    ; XREF: dos_output_func_+1D/r
                                        ; sub_58930+555/r
target_building dw ?                    ; XREF: DGATE_IN+62A/w
veh_mission     dw ?                    ; XREF: Simul_Real_Mode_+49/w
                                        ; DGATE_IN+61E/w
unknown_154     dw ?
unknown_155     dw ?                    ; XREF: read_ufoped_organiz_screen+156/w
                                        ; ufopaedia_screen+FA/r ...
unknown_156     dw ?                    ; XREF: sub_5FD80+7/r
                                        ; sub_5FD80+93/w ...
unknown_157     dw ?
rules_of_engag_setting db ?             ; XREF: sity_main_intr+9DD/r
                                        ; Infiltration_calc+BC/r ...
unk             db ?
hit_points_left_before_retreating dw ?
return_ufo_flag db ?
field_16B       db ?
escorted_type   dw ?
rnd_for_gen_return_coord dw ?
field_170       db ?
field_171       db ?
unknown_164     dw ?                    ; XREF: main_loop_+CC/r
current_demention db ?                  ; XREF: main_loop_+99/r
                                        ; main_loop_+BD/r ...
field_175       db ?
weight          dw ?
unknown_167     dw ?                    ; XREF: MESSAGE_HISTORY_box_+D1/r
                                        ; MESSAGE_HISTORY_box_+2A0/r ...
current_sheild_point dw ?
rear_armor      dw ?                    ; XREF: find_agent_free_count+3/r
                                        ; find_agent_free_count+3B/w ...
top_armor       dw ?
right_armor     dw ?
left_armor      dw ?
under_armor     dw ?
front_armor     dw ?
unknown_175     dw ?
accuracy        dw ?
equipment_layuot db ?
equipment_slot  db 45 dup(?)            ; XREF: gen_start_base_+376/w
                                        ; gen_start_base_+37E/w ...
ammo_fuel       dw 45 dup(?)            ; XREF: Simul_Real_Mode_0+18D/o
                                        ; Simul_Real_Mode_0+26E/o ...
unk_slot        dw 45 dup(?)            ; XREF: main_+AC/w
                                        ; main_:loc_101BA/r ...
cloaking        db ?                    ; XREF: day_loop_+78/r
frozen          db ?
field_270       db ?
field_271       db ?                    ; XREF: ufo_return_to_portal_+73/r
                                        ; move_agent_to_bld_on_vehicle+12D/r
field_272       db ?                    ; XREF: day_loop_+9/r
                                        ; day_loop_+A4/r ...
field_273       db ?                    ; XREF: sub_16D01+60/w
                                        ; sub_16D01+84/r ...
unknown_292     dw ?                    ; XREF: sub_16D01+74/w
                                        ; sub_16D01+8A/r ...
vehicle_save_data ends

; ---------------------------------------------------------------------------

vehicle_equipment_3_3 struc ; (sizeof=0x12, mappedto_53)
                                        ; XREF: DGROUP:veh_equip_3_3/r
accuracy_modifier dw ?                  ; XREF: accuracy_slot_summ_+4E/r
                                        ; accuracy_slot_summ_+6D/r
cargo_space     dw ?                    ; XREF: cargo_space_slot_summ+62/r
passengers      dw ?                    ; XREF: passengers_slot_summ+72/r
                                        ; sub_741E0+3D9/r ...
aliens_held     dw ?                    ; XREF: bio_transp_module_summ+62/r
missile_jamming dw ?                    ; XREF: jamming_check+13F/r
shielding       dw ?                    ; XREF: veh_slot_shelding_summ+92/r
                                        ; veh_slot_shelding_summ+BC/r ...
cloaking        dw ?                    ; XREF: cloaking_summ_slot+41/r
                                        ; cloaking_summ_slot+62/r
teleporting     dw ?                    ; XREF: teleporting_slot_summ+41/r
                                        ; teleporting_slot_summ+62/r
dimension_shifting dw ?                 ; XREF: unused_96+41/r
                                        ; unused_96+62/r
vehicle_equipment_3_3 ends

; ---------------------------------------------------------------------------

proj_color      struc ; (sizeof=0x9, mappedto_63)
                                        ; XREF: DGROUP:sprits/r
field_0         db ?
field_1         db ?
field_2         db ?
field_3         db ?
field_4         db ?
field_5         db ?
field_6         db ?
field_7         db ?
field_8         db ?
proj_color      ends

; ---------------------------------------------------------------------------

tile_dem_ind_struc struc ; (sizeof=0x182, align=0x2, mappedto_132)
                                        ; XREF: .bss:tile_dem_ind/r
used_flag       dw ?                    ; XREF: find_falling_tile:loc_5E632/r
                                        ; collapse_tile+5B/r ...
x_coord         dw 64 dup(?)            ; XREF: collapse_tile+124/w
                                        ; unit_move_on_map+4C/r
y_coord         dw 64 dup(?)            ; XREF: collapse_tile+135/w
                                        ; unit_move_on_map+5F/r
z_coord         dw 64 dup(?)            ; XREF: collapse_tile+14E/w
                                        ; unit_move_on_map+71/r ...
tile_dem_ind_struc ends

; ---------------------------------------------------------------------------

falling_tile_struc struc ; (sizeof=0x22, mappedto_131)
                                        ; XREF: .bss:falling_tiles_0/r
x_value         db ?
y_value         db ?
z_value         db ?
tile_count      db ?
field_4         db ?
field_5         db ?
field_6         db ?
field_7         db ?
field_8         db ?
field_9         db ?
field_A         db ?
field_B         db ?
field_C         db ?
field_D         db ?
field_E         db ?
field_F         db ?
field_10        db ?
field_11        db ?
field_12        db ?
field_13        db ?
field_14        db ?
field_15        db ?
field_16        db ?
field_17        db ?
field_18        db ?
field_19        db ?
field_1A        db ?
field_1B        db ?
constitution    db ?
field_1D        db ?
field_1E        db ?
field_1F        db ?
mass            db ?
field_21        db ?
falling_tile_struc ends

; ---------------------------------------------------------------------------

veh_shadow_struc struc ; (sizeof=0x20, align=0x2, mappedto_113)
                                        ; XREF: DGROUP:shadow_layer/r
shadow_image    dw ?                    ; XREF: polis_car_grow+F6/w
                                        ; sub_70710+54/w ...
current_frame1  dd ?
current_frame3  dd ?
tile            dw ?
shadow_image_pos_3 dw ?
shadow_image_pos_4 dw ?
shadow_image_pos_1 dw ?
shadow_image_pos_2 dw ?
animation_type  dw ?
current_x_pos   dw ?
current_y_pos   dw ?
current_altitude dw ?
road_direct_ind dw ?
activ_waypoint  dw ?
veh_shadow_struc ends

; ---------------------------------------------------------------------------

funds_struc_save struc ; (sizeof=0x1B6, align=0x2, mappedto_71)
                                        ; XREF: .bss:save_funding/r
race            dw ?                    ; XREF: main_+157/r
                                        ; load_all_data_+5D1/w ...
org_member      dd ?                    ; XREF: editor_2+34/o
                                        ; editor_2+59/w ...
Security_level  db ?
Security_number db ?
balance         dd ?
external_income dd ?
rebuildrate     db ?
like_alien      db ?
combat_value    dw ?
bld_count       dw ?
fund_history52  dd ?
fund_history51  dd ?
fund_history50  dd ?
fund_history49  dd ?
fund_history48  dd ?
fund_history47  dd ?
fund_history46  dd ?
fund_history45  dd ?
fund_history44  dd ?
fund_history43  dd ?
fund_history42  dd ?
fund_history41  dd ?
fund_history40  dd ?
fund_history39  dd ?
fund_history38  dd ?
fund_history37  dd ?
fund_history36  dd ?                    ; XREF: switch_main_intr_tab+279/o
                                        ; switch_main_intr_tab+294/w
fund_history35  dd ?
fund_history34  dd ?
fund_history33  dd ?
fund_history32  dd ?
fund_history31  dd ?
fund_history30  dd ?
fund_history29  dd ?
fund_history28  dd ?
fund_history27  dd ?
fund_history26  dd ?
fund_history25  dd ?
fund_history24  dd ?
fund_history23  dd ?
fund_history22  dd ?
fund_history21  dd ?
fund_history20  dd ?
fund_history19  dd ?
fund_history18  dd ?
fund_history17  dd ?                    ; XREF: sub_4E3B0+38/r
                                        ; equip_veh_bottom+E/r ...
fund_history16  dd ?
fund_history15  dd ?                    ; XREF: scan_mouse_veh_veapon+64/r
                                        ; sub_4FDB0+8B/r ...
fund_history14  dd ?                    ; XREF: sub_4E420+17/r
                                        ; scan_mouse_agent+65/r ...
fund_history13  dd ?
fund_history12  dd ?
fund_history11  dd ?
fund_history10  dd ?                    ; XREF: scan_mouse_veh+62/r
                                        ; sub_50070+46/r ...
fund_history9   dd ?
fund_history8   dd ?
fund_history7   dd ?                    ; XREF: sub_4E7A0+6B/r
                                        ; sub_502B0+CE/r ...
fund_history6   dd ?                    ; XREF: load_all_data_+357/w
                                        ; editor_19+19/r ...
fund_history5   dd ?                    ; XREF: load_all_data_+384/w
                                        ; draw_object_on_map_+9DA/r
fund_history4   dd ?                    ; XREF: load_all_data_+366/w
                                        ; editor_19+10/r ...
fund_history3   dd ?                    ; XREF: move_agent_to_bld_on_vehicle+FB/r
                                        ; move_agent_to_bld_on_vehicle+157/r ...
fund_history2   dd ?                    ; XREF: load_all_data_+348/w
                                        ; sub_286A0+30/r ...
fund_history    dd ?                    ; XREF: load_all_data_+375/w
                                        ; draw_object_on_map_+9FA/r
funding_history52 dd ?                  ; XREF: load_all_data_+3B6/w
                                        ; move_ind_read_+4E/r
funding_history51 dd ?                  ; XREF: sub_48A10+39/w
                                        ; sub_607A0+8F/w ...
funding_history50 dd ?                  ; XREF: move_agent_to_bld_on_vehicle+4FF/r
                                        ; sub_51150+14/r ...
funding_history49 dd ?
field_F6        dd ?
field_FA        dd ?
field_FE        dd ?
field_102       dd ?
field_106       dd ?                    ; XREF: bld_editor_0+110/o
                                        ; bld_editor_1+11B/o ...
field_10A       dd ?
field_10E       dd ?
field_112       dd ?
field_116       dd ?
field_11A       dd ?
field_11E       dd ?
field_122       dd ?                    ; XREF: load_main_interf_tab_pos+10E/w
field_126       dd ?
field_12A       dd ?
field_12E       dd ?
field_132       dd ?
field_136       dd ?
field_13A       dd ?
field_13E       dd ?
field_142       dd ?
field_146       dd ?
field_14A       dd ?
field_14E       dd ?
field_152       dd ?
field_156       dd ?                    ; XREF: day_loop_+393/r
                                        ; draw_object_on_map_+644/r ...
field_15A       dd ?                    ; XREF: main_:loc_10179/r
                                        ; ultra_time_+7F/r ...
field_15E       dd ?                    ; XREF: sub_2AD90+163/w
                                        ; sub_2AF40:loc_2B036/r ...
field_162       dd ?                    ; XREF: switch_main_intr_tab+28F/o
                                        ; switch_main_intr_tab+2A0/w
field_166       dd ?
field_16A       dd ?
field_16E       dd ?
field_172       dd ?
field_176       dd ?
field_17A       dd ?
field_17E       dd ?
field_182       dd ?
field_186       dd ?
field_18A       dd ?                    ; XREF: Psi_Training_tab+17/r
                                        ; Psi_Training_tab:loc_51C20/r ...
field_18E       dd ?
field_192       dd ?
field_196       dd ?
field_19A       dd ?
field_19E       dd ?
field_1A2       dd ?
field_1A6       dd ?
field_1AA       dd ?
field_1AE       dd ?
cur_funds       dd ?
funds_struc_save ends

; ---------------------------------------------------------------------------

base_structure  struc ; (sizeof=0x2BE, align=0x2, mappedto_96)
                                        ; XREF: DGROUP:base_struct/r
bld_cnt         dw ?                    ; XREF: scan_mouse_bld+B8/r
                                        ; agent_assigment_switch_+137/r ...
base_name       db 17 dup(?)
field_13        dw ?
used_flag_      db ?                    ; XREF: scan_mouse_bld+A4/r
                                        ; agent_assigment_switch_+12E/r ...
layout          db 64 dup(?)            ; XREF: Building_Regulations_+5C/r
                                        ; Building_Regulations_+A3/r ...
planned_facility db 64 dup(?)           ; XREF: sub_69C80+106/r
                                        ; sub_69C80+24C/r ...
vehicle_equip   dw 49 dup(?)            ; XREF: sub_75310+D6/r
                                        ; sub_75310+177/r ...
agent_equip     dw 87 dup(?)            ; XREF: main_loop_+4A/w
                                        ; BEGTEXT:0008547E/w ...
fuel_on_base    dw 59 dup(?)            ; XREF: sub_75310+1E2/r
                                        ; BEGTEXT:000854DC/r ...
contayment      dw 30 dup(?)            ; XREF: Containment_moving+5F5/w
                                        ; sub_AB5F0+8B/r ...
adv_cont        dw 30 dup(?)            ; XREF: sub_AB5F0+95/r
unuse_294       dw 20 dup(?)
rain_flag       dw ?                    ; XREF: add_alien_in_bld+2A/w
                                        ; sub_6F750+76/w ...
base_structure  ends

; ---------------------------------------------------------------------------

bld_cost        struc ; (sizeof=0xC, align=0x2, mappedto_95)
                                        ; XREF: DGROUP:bld_cost_struc/r
cost_value      dw ?                    ; XREF: init_org_funds_+3D/r
unit_num        dw ?                    ; XREF: init_org_funds_+199/r
                                        ; calc_funding+FB/r
incom_value     dw ?                    ; XREF: init_org_funds_+78/r
field_6         dw ?                    ; XREF: init_org_funds_+BA/r
money_needed    dw ?                    ; XREF: init_org_funds_+D0/r
respect_array   dw ?                    ; XREF: init_org_funds_+E6/r
bld_cost        ends

; ---------------------------------------------------------------------------

org_names       struc ; (sizeof=0x32, align=0x2, mappedto_80)
                                        ; XREF: DGROUP:build_name_ind/r
org_nm          dw 25 dup(?)            ; XREF: init_org_funds_+344/r ; base 10
org_names       ends

; ---------------------------------------------------------------------------

funds_init      struc ; (sizeof=0x12, align=0x2, mappedto_60)
                                        ; XREF: DGROUP:struc_funds/r
race            dw ?                    ; XREF: init_org_funds_+234/r
org_member      dd ?                    ; XREF: init_org_funds_+23C/r
Security_level  db ?                    ; XREF: init_org_funds_+24E/r
Security_number db ?                    ; XREF: init_org_funds_+245/r
balance         dd ?                    ; XREF: init_org_funds_+257/r
                                        ; init_diff_const+C5/r
external_income dd ?                    ; XREF: init_org_funds_+260/r
                                        ; init_diff_const+F8/r
rebuildrate     db ?                    ; XREF: init_org_funds_+269/r
like_alien      db ?
funds_init      ends

; ---------------------------------------------------------------------------

agent_save_struct struc ; (sizeof=0xCE, align=0x2, mappedto_88)

agent_name      db 26 dup(?)
count           db ?                    ; XREF: find_agent_free_count+18/r
unk_1           db ?
unk_2           db ?
unk_3           db ?
unk_4           db ?
unc_5           db ?
unk_6           db ?                    ; XREF: sub_AF450+51/r                                       ; sub_AF450+60/w
owned_org       db ?                    ; XREF: sub_69C80:loc_69E50/r                                      ; gen_start_unit_+19/w ...
rank            db ?                    ; XREF: sub_89240+D4/r                                       ; read_ufoped_organiz_screen+110/r
role            db ?                    ; XREF: sub_69C80+1D9/r                                       ; gen_civil_unit+21C/w ...
agent_base      dw ?                    ; XREF: sub_69C80+207/r                                      ; gen_start_unit_+80/w ...
day_in_servis   dw ?
kills           dw ?
missions        dw ?
Improvement     dw ?
speed_max_start db ?
health_max_start db ?
stamina_start   db ?
reaction_start  db ?
strenght_start  db ?
braverly_start  db ?
accuracy_start  db ?
psi_energy_start db ?
psi_attack_start db ?
psi_defece_start db ?
agent_score     db ?
teh_role        db ?                    ; XREF: gen_civil_unit+226/w                                      ; gen_civil_unit+2A3/w
speed_curr      db ?
health_max_curr db ?
health_curr     db ?
unc_38          db ?
stamina_curr    db ?
reaction_cyrr   db ?
strenght_curr   db ?
braverly_curr   db ?
psi_energy_curr db ?
psi_attack_curr db ?
psi_defese_curr db ?
leg_type        db ?
accuracy_curr   db ?
unc_47          db ?
unc_48          db ?
bio_skill       db ?                    ; XREF: sub_A8E10+103/r                                       ; Research+B3/r
qua_skill       db ?                    ; XREF: sub_A8E10+126/r                                      ; Research+452/r
eng_skill       db ?                    ; XREF: sub_A8E10+149/r
unc_52          db ?
unc_53          db ?
armor_legs      db ?                    ; XREF: sub_B34A0+618/w
armor_body      db ?
armor_left_arm  db ?
armor_right_arm db ?
armor_head      db ?
armor_back      db ?                    ; XREF: sub_B34A0+47A/r
inventory_id    dw ?                    ; XREF: gen_start_unit_+A4/r                                       ; gen_start_unit_+247/r ...
inventory_id_reference db ?
field_57        db ?
field_58        db ?
field_59        db ?
field_5A        db ?
field_5B        db ?
field_5C        db ?
field_5D        db ?
field_5E        db ?
field_5F        db ?
field_60        db ?
field_61        db ?
size_x          dw ?
size_y          dw ?
field_66        dw ?
field_67        db ?
field_69        db ?
field_70        db ?
field_6B        db ?
field_6C        db ?
hired           db ?
order           dw ?                    ; XREF: gen_start_unit_+60/w                                       ; gen_start_unit_+204/w ...
tailing_person  dw ?                    ; XREF: gen_start_unit_+90/w                                       ; gen_start_unit_+21D/w ...
field_72        db ?
field_73        db ?
field_74        db ?                    ; XREF: gen_start_unit_+87/w                                       ; gen_start_unit_+216/w ...
field_75        db ?
coord_3d_x      dw ?
coord_3d_y      dw ?
coord_3d_z      dw ?
agent_demension db ?
assignment_type db ?                    ; XREF: move_agent_to_bld_on_vehicle:loc_4B5A0/r                                       ; move_agent_to_bld_on_vehicle:loc_4B8B0/r ...
assignment      dw ?                    ; XREF: move_agent_to_bld_on_vehicle+3F9/r                                      ; move_agent_to_bld_on_vehicle+709/r ...
target_building dw ?                    ; XREF: agent_tailing:loc_785DB/r                                       ; agent_tailing:loc_785EB/r ...
target_bld_num_unk dw ?
field_84        db ?
field_85        dw ?
field_87        db ?
field_88        db ?
field_89        db ?
field_8A        db ?
field_8B        db ?
field_8C        db ?
field_8D        db ?
field_8E        db ?
field_8F        db ?
field_90        db ?
field_91        db ?
field_92        db ?
field_93        db ?
field_94        db ?
field_95        db ?
field_96        db ?
field_97        db ?
field_98        dw ?
coord_3d_x_1_ikon_bld dw ?
coord_3d_y_1_ikon_bld dw ?
coord_3d_z_1_ikon_bld dw ?
coord_3d_x_2    dw ?
coord_3d_y_2    dw ?
coord_3d_z_2    dw ?
field_A6        db ?
field_A7        db ?
field_A8        db ?
field_A9        db ?
field_AA        db ?
field_AB        db ?
field_AC        db ?
field_AD        db ?
field_AE        db ?
field_AF        db ?
hired_flag      db ?                    ; XREF: gen_civil_unit+187/w                                        ; gen_civil_unit+215/w ...
field_B1        db ?
agent_race      db ?
gender          db ?
unkn            db ?
facial_image    db ?                    ; XREF: gen_face_image_+2E/r                                       ; write_dat_unit+2E/r
field_B6        db ?
field_B7        db ?
field_B8        db ?
field_B9        db ?
field_BA        db ?
field_BB        db ?
field_BC        db ?
field_BD        db ?
field_BE        db ?                    ; XREF: Returning_to_city+573/w
field_BF        db ?
field_C0        db ?
field_C1        db ?
field_C2        db ?
field_C3        db ?
field_C4        db ?
field_C5        db ?
assigment_progject dw ?                 ; XREF: sub_69C80+1F3/r                                      ; sub_69C80+210/w ...
training        db ?                    ; XREF: gen_start_unit_+99/w                                       ; gen_start_unit_+23C/w ...
field_C9        db ?
field_CA        db ?                    ; XREF: move_agent_to_bld_on_vehicle+404/w                                       ; move_agent_to_bld_on_vehicle+714/w ...
field_CB        db ?
field_CC        db ?
field_CD        db ?
agent_save_struct ends

; ---------------------------------------------------------------------------

ufo_objects     struc ; (sizeof=0x2D4, align=0x4, mappedto_82)
                                        ; XREF: .bss:portals_human/r
                                        ; .bss:portal_ufo/r
portal_home     dd ?                    ; XREF: portal_init+E/w
                                        ; portal_init+14/w ...
portal_x_coord_1 dw 10 dup(?)           ; XREF: portal_init+33/w
                                        ; portal_init+E3/w ...
portal_y_coord_1 dw 10 dup(?)           ; XREF: portal_init+3B/w
                                        ; portal_init+EB/w ...
portal_z_coord_1 dw 10 dup(?)           ; XREF: portal_init+43/w
                                        ; portal_init+F3/w ...
direction       dw 10 dup(?)            ; XREF: portal_init+4B/w
                                        ; portal_init+FB/w ...
portal_num      dw 10 dup(?)            ; XREF: gen_portal+2B1/w
field_68        dw ?
field_6A        dw ?
field_6C        dw ?
field_6E        dw ?
field_70        dw ?
field_72        db 10 dup(?)            ; XREF: portal_init+54/w
                                        ; portal_init+104/w ...
field_7C_        db 10 dup(?)            ; XREF: start_ufo_mission+375/w
                                        ; unused_117+F0/w
field_86        dw ?                    ; XREF: portal_init+BF/w
                                        ; start_ufo_mission+340/w
field_88_        dw ?                    ; XREF: Returning_to_city+1A9/w
field_8A_        dw ?                    ; XREF: Returning_to_city+19B/w
prob            dw ?                    ; XREF: day_loop_+C3/r
                                        ; DGATE_IN+102/r ...
scout           dw ?
transp          dw ?
fast_ship       dw ?
destroyer       dw ?
assault_ship    dw ?
bomber          dw ?
escort          dw ?
battlship       dw ?
mothership      dw ?
field_A0_        dw 40 dup(?)            ; XREF: portal_init+97/w
                                        ; portal_init+150/w ...
field_F0        dw 40 dup(?)
field_140       dw 40 dup(?)
field_190       dw 40 dup(?)
field_1E0       dw 40 dup(?)
field_230       dw 40 dup(?)
field_280       dw 40 dup(?)
field_2D0       dw ?                    ; XREF: portal_init+B1/w
                                        ; portal_init+17B/w
field_2D2       dw ?                    ; XREF: portal_init+B8/w
                                        ; portal_init+182/w
ufo_objects     ends

; ---------------------------------------------------------------------------

cargo_item      struc ; (sizeof=0x8, align=0x2, mappedto_134)
                                        ; XREF: .bss:cargo_items/r
vehicle         dw ?
item            dw ?
amount          dw ?
item_type       db ?
field_7         db ?
cargo_item      ends

; ---------------------------------------------------------------------------

main_interf_tab_selection struc ; (sizeof=0x16, align=0x2, mappedto_118)
                                        ; XREF: .bss:main_interf_struc/r
field_0         dw ?                    ; XREF: switch_main_intr_tab+177/r
                                        ; switch_main_intr_tab+1A7/r ...
base_tab        dw ?                    ; XREF: load_main_interf_tab_pos:loc_A5B38/r
                                        ; load_main_interf_tab_pos+115/r
veh_tab         dw ?                    ; XREF: day_loop_+382/r
                                        ; draw_object_on_map_+62F/r ...
agent_tab       dw ?                    ; XREF: Psi_Training_tab+6/r
                                        ; Psi_Training_tab:loc_51C3C/r ...
bio_tab         dw ?
eng_tab         dw ?
qua_tab         dw ?
ufo_tab         dw ?                    ; XREF: day_loop_+3A3/r
                                        ; sub_469C0+47/r ...
field_10        dw ?
field_12        dw ?
field_14        dw ?
main_interf_tab_selection ends

; ---------------------------------------------------------------------------

vehicle_init_data struc ; (sizeof=0x7E, align=0x2, mappedto_72)
                                        ; XREF: DGROUP:init_craft_data/r
manufacturer    dw ?                    ; XREF: Market_Announcement+28F/r
movement_type_  dw ?                    ; XREF: org_attack_raid+5A7/r
animation_type_ dw ?                    ; XREF: sub_38070+43/r
                                        ; sub_381F0+16/r ...
size_x          dw ?
size_y          dw ?
size_z          dw ?
image_pos_1     dw ?
image_pos_2     dw ?
image_pos_3     dw ?
image_pos_4     dw ?
image           dw ?
built_in_accelerat dw ?
built_in_unknown dw ?
built_in_top_speed dw ?                 ; XREF: check_built_in_top_speed+9/r
shadow_image    dw ?
shadow_img_pos_1 dw ?
shadow_img_pos_2 dw ?
shadow_img_pos_3 dw ?                 ; XREF: calc_shadow_+329/r
shadow_img_pos_4 dw ?                 ; XREF: calc_shadow_+330/r
loftemps_height dw ?
loftemps_index  dw ?
unknown22       dw ?
unused23        dw ?
constitution_   dw ?                    ; XREF: sub_4FAF0+202/r
                                        ; Vehicle_damaged_+313/r ...
remein_HP_befor_downed dw ?             ; XREF: unused_3_+2A/r
                                        ; sub_38070+6E/r ...
weight_         dw ?                    ; XREF: how_veh_stat_+252/r
                                        ; calc_summ_veh_weight_ets+4A/r ...
rear_armor_     dw ?                    ; XREF: veh_ufopedi+105/r
top_armor_      dw ?                    ; XREF: veh_ufopedi+10C/r
right_armor_    dw ?                    ; XREF: veh_ufopedi+11C/r
left_armor_     dw ?                    ; XREF: veh_ufopedi+113/r
under_armor_    dw ?                    ; XREF: veh_ufopedi+125/r
front_armor_    dw ?                    ; XREF: veh_ufopedi+12E/r
passengers_     db ?                    ; XREF: passengers_slot_summ+32/r
                                        ; veh_ufopedi+20C/r
field_41_       db ?                    ; XREF: set_veh_anim_speed_+93/r
                                        ; sub_38070+77/r
agressivenes    dw ?                    ; XREF: sub_5F460+104/r
                                        ; sub_5F5E0+F2/r ...
score_veh       dw ?                    ; XREF: DGATE_IN+12A/r
                                        ; unused_78+70/r ...
equip_layout    db ?                    ; XREF: veh_ufopedi+255/r
                                        ; veh_ufopedi+2EE/r ...
equip_layout_image db 8 dup(?)
unused38        db ?
unknown39       db ?
equip_slot      db 45 dup(?)
vehicle_init_data ends

; ---------------------------------------------------------------------------

projectile_stru struc ; (sizeof=0x15E, align=0x2, mappedto_62)
                                        ; XREF: .bss:projectile/r
weapon_type     dw ?                    ; XREF: set_start_data_+15A/w
                                        ; veh_attacking_+170/r
prog_image      dw ?
prog_speed      dw ?
prog_x_pos      dw 50 dup(?)
prog_y_pos      dw 50 dup(?)
prog_z_pos      dw 50 dup(?)
coord_index     dw ?
field_134       dw ?
tail_size_      dw ?
status          dw ?
num_aiming_vehicles dw ?
dist_3d         dw ?
x_y_vs_z1_x2    dw ?
x_y_vs_z2_x2    dw ?
z_shift_1       dw ?
z_direct        dw ?
z_shift_2       dw ?
direct_3d       dw ?
distance        dw ?
anglex2         dw ?
distx2          dw ?
r_l_direct      dw ?
up_down         dw ?
direct_x        dw ?                    ; XREF: Returning_to_city+525/w
direct_y        dw ?
lifetime        dw ?
veh_owner_struc dw ?
field_15C       dw ?
projectile_stru ends

; ---------------------------------------------------------------------------

agent_path_struc struc ; (sizeof=0x4, align=0x2, mappedto_105)
                                        ; XREF: .bss:ppl_path/r
field_0         dw ?                    ; XREF: agent_path_find+164/r
                                        ; agent_path_find+376/r ...
field_1         dw ?                    ; XREF: agent_path_find+382/r
                                        ; agent_path_find+B22/r ...
agent_path_struc ends

; ---------------------------------------------------------------------------

city_map_struc  struc ; (sizeof=0x34, align=0x2, mappedto_47)
                                        ; XREF: .bss:citymap_dat/r
tile_type       db ?                    ; XREF: calc_ppl_tube_junc_+1A5/r
                                        ; calc_bld_tube_connection_+B9/r ...
road_type       db ?                    ; XREF: tile_editor+83E/r
                                        ; tile_editor+D7B/r ...
road_junction   db 4 dup(?)             ; XREF: tile_editor+222/r
road_level_change db 4 dup(?)           ; XREF: tile_editor+298/r
height          db ?                    ; XREF: tile_editor+535/r
                                        ; tile_editor+8D6/w ...
constitution    db ?                    ; XREF: tile_editor+59A/r
                                        ; tile_editor+919/w ...
value           db ?                    ; XREF: tile_editor+5C5/r
                                        ; tile_editor+93A/w ...
overlaytile_idx db ?                    ; XREF: load_all_data_+5A9/w
                                        ; editor_city_interface_1+36/r ...
landing_pad     db ?                    ; XREF: tile_editor+47F/r
                                        ; tile_editor+10AD/w
walk_type       db ?                    ; XREF: tile_editor+86E/r
                                        ; tile_editor+E73/r ...
voxelIdx        db 16 dup(?)            ; XREF: tile_editor+EB4/r
                                        ; tile_editor+EC7/w ...
has_basement    db ?                    ; XREF: tile_editor+2E8/r
                                        ; tile_editor+E32/r ...
people_tube_connections db 6 dup(?)     ; XREF: calc_bld_tube_connection_+D0/r
                                        ; calc_bld_tube_connection_+113/r ...
mass            db ?                    ; XREF: tile_editor+566/r
                                        ; tile_editor+8F9/w ...
strength        dw ?                    ; XREF: tile_editor+603/r
                                        ; tile_editor+952/w ...
damagedtile_idx dw ?                    ; XREF: tile_editor+692/r
                                        ; tile_editor+6DD/r ...
supportile_idx  dw ?                    ; XREF: tile_editor+6F9/r
                                        ; tile_editor+739/r ...
target_Pnt      db 4 dup(?)             ; XREF: editor_17+64/r
                                        ; editor_17+74/r ...
stratmap_idx    dw ?                    ; XREF: tile_editor+7AF/r
                                        ; tile_editor+7F6/r ...
city_map_struc  ends

; ---------------------------------------------------------------------------

veh_land_struc  struc ; (sizeof=0x8, align=0x2, mappedto_119)
                                        ; XREF: .bss:veh_land_struct/r
veh_num         dw ?                    ; XREF: sub_5FD80+74/w
                                        ; sub_60000+29/w
base            dw ?
direction       dw ?                    ; XREF: sub_5FD80+7B/w
                                        ; sub_60000+32/w
z_level_pod     dw ?                    ; XREF: sub_5FD80+88/w
                                        ; sub_60000+42/w
veh_land_struc  ends

; ---------------------------------------------------------------------------

ufo_missions    struc ; (sizeof=0x2A, align=0x2, mappedto_77)
                                        ; XREF: DGROUP:ufo_mission/r
                                        ; DGROUP:000DC782/r ...
ufo_type_1      dw ?                    ; XREF: unused_120:loc_70D12/r
ufo_type_2      dw ?
ufo_type_3      dw ?
ufo_type_1_amount dw ?                  ; XREF: unused_120+40/r
ufo_type_2_amount dw ?
ufo_type_3_amount dw ?
ufo_type_1_mission dw ?
ufo_type_2_mission dw ?
ufo_type_3_mission dw ?
ufo_type_1_escorts dw ?
ufo_type_2_escorts dw ?
ufo_type_3_escorts dw ?
field_18        dw ?
field_1A        db ?
field_1B        db ?
field_1C        dw ?
rnd_for_gen_return_coord dw ?
field_20        dw ?
field_22        dw ?
hit_points_left_before_retreating_setting dw ?
field_26        dw ?
field_28        dw ?
ufo_missions    ends

; ---------------------------------------------------------------------------

manufacturing_struc struc ; (sizeof=0x10, align=0x4, mappedto_120)
                                        ; XREF: .bss:manufacturing/r
base_number     db ?                    ; XREF: agent_assigment_switch_+4D0/r
                                        ; sub_6C290+31B/o ...
progect_num     db ?                    ; XREF: agent_assigment_switch_:loc_4F5BF/r
                                        ; reserch_and_manuf_screen+430/r ...
item_name       dw ?                    ; XREF: agent_assigment_switch_+4FD/r
                                        ; reserch_and_manuf_screen+461/r ...
total_number    dd ?                    ; XREF: reserch_and_manuf_screen+650/w
                                        ; reserch_and_manuf_screen+683/r ...
completed_item_num dd ?                 ; XREF: reserch_and_manuf_screen+44F/r
                                        ; reserch_and_manuf_screen+656/w ...
current_skill_hour dd ?                 ; XREF: reserch_and_manuf_screen+459/r
                                        ; reserch_and_manuf_screen+65C/w ...
manufacturing_struc ends

; ---------------------------------------------------------------------------

vehicle_equipment_1 struc ; (sizeof=0x18, align=0x2, mappedto_50)
                                        ; XREF: DGROUP:veh_equipment1/r
item_type       db ?                    ; XREF: veh_slot_shelding_summ+72/r
                                        ; jamming_check+12B/r ...
effect          db ?                    ; XREF: sub_3DE60+7B/r
                                        ; sub_494E0+1C9/r ...
item_group      dw ?
weight          dw ?                    ; XREF: calc_summ_veh_weight_ets+31/r
max_ammo_fuel   dw ?                    ; XREF: sub_4E1C0+63/r
                                        ; gen_vehicle+7BC/r ...
ammo_fuel_type_used dw ?                ; XREF: veh_manual_controling_2+94/r
                                        ; sub_3DE60+41/r ...
ammo_fuel_consumptio dw ?
picture         dw ?                    ; XREF: sub_4FDB0+1DD/r
                                        ; sub_740F0+98/r ...
size_x_          db ?                    ; XREF: sub_5EB20+180/r
                                        ; sub_741E0+1F0/r ...
size_y_          db ?                    ; XREF: sub_5EB20+18A/r
                                        ; sub_741E0+1F9/r ...
unknown_11      dw ?                    ; XREF: sub_5EB20+171/r
unknown_12      dw ?                    ; XREF: veh_manual_controling_2+FF/r
                                        ; veh_slot_shelding_summ+A4/r ...
manufacturer    dw ?                    ; XREF: set_start_data_+246/r
                                        ; Market_Announcement+19F/r
storage_space_needed dw ?               ; XREF: sub_5EEA0+47/r
                                        ; sub_5EEA0+204/r ...
vehicle_equipment_1 ends

; ---------------------------------------------------------------------------

craft_engine_data struc ; (sizeof=0x6, mappedto_52)
engine_power    dd ?
top_speed       dw ?
craft_engine_data ends

; ---------------------------------------------------------------------------

veh_equip_32    struc ; (sizeof=0x22, align=0x2, mappedto_49)
                                        ; XREF: DGROUP:veh_equip_3_2/r
prog_speed      dw ?                    ; XREF: projectile_init+110/r
                                        ; attacking_main+119/r ...
prog_image      dw ?                    ; XREF: projectile_init+101/r
                                        ; calc_range_+F7/r
damage          dw ?                    ; XREF: Vehicle_damaged_+38/r
                                        ; sub_58930+35C/r ...
accuracy        dw ?                    ; XREF: accuracy_calc+3D/r
fire_delay      dw ?                    ; XREF: attacking_main+501/r
                                        ; attacking_main+518/r ...
tail_size       dw ?                    ; XREF: projectile_init+14C/r
                                        ; calc_range_+155/r
guided          dw ?                    ; XREF: projectile_init+180/r
                                        ; proj_traectory_calc+13A/r ...
turn_rate       dw ?                    ; XREF: calc_turn_rate_+3A/r
range           dw ?                    ; XREF: sub_494E0+1D7/r
                                        ; attacking_main+1D8/r ...
projectile_lifetime dw ?                ; XREF: proj_traectory_calc+1A23/r
horizontal_firing_arc dw ?
vertical_firing_arc dw ?
point_defence   dw ?                    ; XREF: proj_traectory_calc+454/r
                                        ; use_guided_weapon+54/r ...
splits_in_projectile dw ?               ; XREF: proj_traectory_calc+1A2C/r
                                        ; calc_range_+3D/r
firing_sound    dw ?                    ; XREF: projectile_init+9A/r
impact_sound    dw ?
explosion_graphic dw ?                  ; XREF: proj_traectory_calc+FEC/r
                                        ; proj_traectory_calc+193D/r ...
veh_equip_32    ends

; ---------------------------------------------------------------------------

agent_inventory_struct struc ; (sizeof=0x9E, align=0x2, mappedto_89)
                                        ; XREF: .bss:agent_inventory/r
agent           dw ?                    ; XREF: set_start_data_+FA/w
                                        ; set_agent_inventor_ID:loc_7A513/r ...
right_hand      db ?                    ; XREF: sub_82C10+30E/r
                                        ; sub_82C10:loc_82F60/r ...
left_hend       db ?
right_leg       db ?
left_leg        db ?
right_belt_1    db ?
right_belt_2    db ?
right_belt_3    db ?
right_belt_4    db ?
left_belt_1     db ?
left_belt_2     db ?
left_belt_3     db ?
left_belt_4     db ?
right_shoulder  db ?
left_shoulder   db ?
back_pack_1A    db ?
back_pack_1B    db ?
back_pack_1C    db ?
back_pack_1D    db ?
back_pack_2A    db ?
back_pack_2B    db ?
back_pack_2C    db ?
back_pack_2D    db ?
back_pack_3A    db ?
back_pack_3B    db ?
back_pack_3C    db ?
back_pack_3D    db ?
back_pack_4A    db ?
back_pack_4B    db ?
back_pack_4C    db ?
back_pack_4D    db ?
back_pack_5A    db ?
back_pack_5B    db ?
back_pack_5C    db ?
back_pack_5D    db ?
armor_left_arm  db ?
armor_right_arm db ?
armor_body      db ?
armor_legs      db ?
armor_head      db ?
armor_unknown   db ?
unknown_42      db ?
unknown_43      db ?
unknown_44      db ?
unknown_45      db ?
unknown_46      db ?
unknown_47      db ?
unknown_48      db ?
unknown_49      db ?
unknown_50      db ?
unknown_51      db ?
unknown_52      db ?
unknown_53      db ?
r_hend_ammo     db ?
l_hend_ammo     db ?
r_leg_ammo      db ?
l_leg_ammo      db ?
r_belt_1_ammo   db ?
r_belt_2_ammo   db ?
r_belt_3_ammo   db ?
r_belt_4_ammo   db ?
l_belt_1_ammo   db ?
l_belt_2_ammo   db ?
l_belt_3_ammo   db ?
l_belt_4_ammo   db ?
r_shoulder_ammo db ?
l_shoulder_ammo db ?
back_pack_1A_ammo db ?
back_pack_1B_ammo db ?
back_pack_1C_ammo db ?
back_pack_1D_ammo db ?
back_pack_2A_ammo db ?
back_pack_2B_ammo db ?
back_pack_2C_ammo db ?
back_pack_2D_ammo db ?
back_pack_3A_ammo db ?
back_pack_3B_ammo db ?
back_pack_3C_ammo db ?
back_pack_3D_ammo db ?
back_pack_4A_ammo db ?
back_pack_4B_ammo db ?
back_pack_4C_ammo db ?
back_pack_4D_ammo db ?
back_pack_5A_ammo db ?
back_pack_5B_ammo db ?
back_pack_5C_ammo db ?
back_pack_5D_ammo db ?
unknown_92      db ?
unknown_93      db ?
unknown_94      db ?
unknown_95      db ?
unknown_96      db ?
unknown_97      db ?
unknown_98      db ?
unknown_99      db ?
unknown_100     db ?
unknown_101     db ?
unknown_102     db ?
unknown_103     db ?
unknown_104     db ?
unknown_105     db ?
unknown_106     db ?
unknown_107     db ?
unknown_108     db ?
unknown_109     db ?
r_hend_weapon_type db ?
l_hend_weapon_type db ?
r_leg_weapon_type db ?
l_leg_weapon_type db ?
r_belt_1_weapon_type db ?
r_belt_2_weapon_type db ?
r_belt_3_weapon_type db ?
r_belt_4_weapon_type db ?
l_belt_1_weapon_type db ?
l_belt_2_weapon_type db ?
l_belt_3_weapon_type db ?
l_belt_4_weapon_type db ?
r_shoulder_weapon_type db ?
l_shoulder_weapon_type db ?
back_pack_1A_weapon_type db ?
back_pack_1B_weapon_type db ?
back_pack_1C_weapon_type db ?
back_pack_1D_weapon_type db ?
back_pack_2A_weapon_type db ?           ; XREF: Returning_to_city+555/w
back_pack_2B_weapon_type db ?
back_pack_2C_weapon_type db ?
back_pack_2D_weapon_type db ?
back_pack_3A_weapon_type db ?
back_pack_3B_weapon_type db ?
back_pack_3C_weapon_type db ?
back_pack_3D_weapon_type db ?
back_pack_4A_weapon_type db ?
back_pack_4B_weapon_type db ?
back_pack_4C_weapon_type db ?
back_pack_4D_weapon_type db ?
back_pack_5A_weapon_type db ?
back_pack_5B_weapon_type db ?
back_pack_5C_weapon_type db ?
back_pack_5D_weapon_type db ?
unknown_140     db ?
unknown_141     db ?
unknown_142     db ?
unknown_143     db ?
unknown_144     db ?
unknown_145     db ?
unknown_146     db ?
unknown_147     db ?
unknown_148     db ?
unknown_149     db ?
unknown_150     db ?
unknown_151     db ?
unknown_152     db ?
unknown_153     db ?
unknown_154     db ?
unknown_155     db ?
unknown_156     db ?
unknown_157     db ?
agent_inventory_struct ends

; ---------------------------------------------------------------------------

blding_struc_save struc ; (sizeof=0xE2, align=0x2, mappedto_70)
building_name   dw ?
x1position      dw ?
x2position      dw ?
y1position      dw ?
y2position      dw ?
field_A         dw ?
count_value_zero_tile dw ?
x_terminal      dw ?
y_terminal      dw ?
z_terminal      dw ?
ppl_tube_junc_num dw ?
ptj_x1          dw ?
ptj_x2          dw ?
ptj_x3          dw ?
ptj_x4          dw ?
ptj_x5          dw ?
ptj_x6          dw ?
ptj_y1          dw ?
ptj_y2          dw ?
ptj_y3          dw ?
ptj_y4          dw ?
ptj_y5          dw ?
ptj_y6          dw ?
ptj_z1          dw ?
ptj_z2          dw ?
ptj_z3          dw ?
ptj_z4          dw ?
ptj_z5          dw ?
ptj_z6          dw ?
linked_bld_count dw ?
linked_bld_num1 dw ?
linked_bld_num2 dw ?
linked_bld_num3 dw ?
linked_bld_num4 dw ?
linked_bld_num5 dw ?
linked_bld_num6 dw ?
linked_bld_num7 dw ?
linked_bld_num8 dw ?
linked_bld_num9 dw ?
linked_bld_num10 dw ?
linked_bld_num11 dw ?
linked_bld_num12 dw ?
ppl_t_length_bld_1 dw ?
ppl_t_length_bld_2 dw ?
ppl_t_length_bld_3 dw ?
ppl_t_length_bld_4 dw ?
ppl_t_length_bld_5 dw ?
ppl_t_length_bld_6 dw ?
ppl_t_length_bld_7 dw ?
ppl_t_length_bld_8 dw ?
ppl_t_length_bld_9 dw ?
ppl_t_length_bld_10 dw ?
ppl_t_length_bld_11 dw ?
ppl_t_length_bld_12 dw ?
ppl_tube_junc_con_bld_1 dw ?
ppl_tube_junc_con_bld_2 dw ?
ppl_tube_junc_con_bld_3 dw ?
ppl_tube_junc_con_bld_4 dw ?
ppl_tube_junc_con_bld_5 dw ?
ppl_tube_junc_con_bld_6 dw ?
ppl_tube_junc_con_bld_7 dw ?
ppl_tube_junc_con_bld_8 dw ?
ppl_tube_junc_con_bld_9 dw ?
ppl_tube_junc_con_bld_10 dw ?
ppl_tube_junc_con_bld_11 dw ?
ppl_tube_junc_con_bld_12 dw ?
ppl_tube_junc_con_dir_out_bld_1 dw ?
ppl_tube_junc_con_dir_out_bld_2 dw ?
ppl_tube_junc_con_dir_out_bld_3 dw ?
ppl_tube_junc_con_dir_out_bld_4 dw ?
ppl_tube_junc_con_dir_out_bld_5 dw ?
ppl_tube_junc_con_dir_out_bld_6 dw ?
ppl_tube_junc_con_dir_out_bld_7 dw ?
ppl_tube_junc_con_dir_out_bld_8 dw ?
ppl_tube_junc_con_dir_out_bld_9 dw ?
ppl_tube_junc_con_dir_out_bld_10 dw ?
ppl_tube_junc_con_dir_out_bld_11 dw ?
ppl_tube_junc_con_dir_out_bld_12 dw ?
ppl_tube_conn_to_neig_bld dw 6 dup(?)
junction        dw ?
bld_function    dw ?
bld_type        dw ?
field_AE        db ?
field_AF        db ?
field_B0        dw ?
field_B2        dw ?
field_B4        dw ?
purchaseable    db ?
field_B7        db ?
field_B8        dw ?
price           dw ?
alien_detection_timout dw ?
fixed_costs     dw ?
maximum_workforce dw ?
current_workforce dw ?
current_wage    dw ?
Income_per_capita dw ?
owner           db ?
start_base_flag db ?
field_CA        db ?
field_CB        db ?
$$needed        db ?
respect         db ?
allow_atac_time dw ?
field_D0        dw ?
field_D2        dw ?
alien_eggs      db ?
brainsuckers    db ?
multiworm       db ?
hyperworm       db ?
chrystali       db ?
anthropods      db ?
skeletoids      db ?
spitter         db ?
poppers         db ?
megaspawn       db ?
psimorphs       db ?
quinspawn       db ?
micronoid_aggregate db ?
brainsuckers_pods db ?
blding_struc_save ends

; ---------------------------------------------------------------------------

market_ctruc    struc ; (sizeof=0x16, align=0x2, mappedto_56)
                                        ; XREF: DGROUP:veh_market/r
                                        ; DGROUP:craft_equip_economic/r ...
available_from_week dw ?
base_price      dd ?                    ; XREF: set_eco_data_+26/r
                                        ; set_eco_data_+AE/r ...
min_stock_increase dw ?
max_stock_increase dw ?
current_price   dd ?                    ; XREF: set_eco_data_+2C/w
                                        ; set_eco_data_+BA/w ...
current_stock   dd ?                    ; XREF: set_eco_data_+34/w
                                        ; set_eco_data_+A8/w ...
last_week_amount_for_sale dd ?          ; XREF: set_eco_data_+3A/w
                                        ; set_eco_data_+B4/w ...
market_ctruc    ends

; ---------------------------------------------------------------------------

engagment_struc struc ; (sizeof=0x94, align=0x2, mappedto_104)
                                        ; XREF: DGROUP:rules_of_engag/r
field_eng_0     db ?                    ; XREF: unused_60+26/r
                                        ; sub_38E10+17D/r ...
attack_dist     db ?                    ; XREF: road_path_find_+4F/r
                                        ; road_path_find_+65/r ...
attack_dist_array db 34 dup(?)          ; XREF: sub_38E10+1F8/r
                                        ; sub_38E10+245/r ...
attack_setting  db ?                    ; XREF: veh_attacking_+76/r
field_25_       db 34 dup(?)            ; XREF: veh_attacking_+22A/r
retriat         db ?                    ; XREF: sub_34350+77/r
                                        ; sub_48D30+DF/r ...
retriat_array   db 34 dup(?)            ; XREF: sub_34350+1C5/r
                                        ; sub_49070+10B/r ...
field_6A_       db ?                    ; XREF: road_movig_+437/r
                                        ; sub_3C930+CD1/r ...
field_6B        db 34 dup(?)            ; XREF: road_movig_+449/r
                                        ; sub_3C930+CE4/r ...
field_8D        db ?
fiel_8E        dw ?                    ; XREF: sub_494E0+6A/r
                                        ; sub_494E0+B3/r ...
eng_mission     dw ?                    ; XREF: gen_vehicle+635/r
                                        ; set_mission+6B/r
points_before_retreating dw ?           ; XREF: gen_vehicle+5FE/r
                                        ; set_mission+34/r ...
engagment_struc ends

; ---------------------------------------------------------------------------

vehicle_equipment_layout struc ; (sizeof=0x16A, align=0x2, mappedto_65)
amount_slots    dw ?                    ; XREF: veh_ufopedi+267/r
                                        ; veh_ufopedi+300/r ...
slot_1_x_pos    db ?
slot_1_y_pos    db ?
slot_1_x_size   db ?                    ; XREF: veh_ufopedi+23B/r
                                        ; veh_ufopedi+385/r ...
slot_1_y_size   db ?                    ; XREF: veh_ufopedi+241/r
                                        ; veh_ufopedi+38B/r ...
slot_1_type     db ?                    ; XREF: veh_ufopedi+230/r
                                        ; veh_ufopedi+2DC/r ...
slot_1_safe_flag db ?
safe_1_x_centr  db ?
safe_1_y_centr  db ?
slot_2_x_pos    db ?
slot_2_y_pos    db ?
slot_2_x_size   db ?
field_D         db ?
field_E         db ?
field_F         db ?
field_10        db ?
field_11        db ?
field_12        db ?
field_13        db ?
field_14        db ?
field_15        db ?
field_16        db ?
field_17        db ?
field_18        db ?
field_19        db ?
field_1A        db ?
field_1B        db ?
field_1C        db ?
field_1D        db ?
field_1E        db ?
field_1F        db ?
field_20        db ?
field_21        db ?
field_22        dw ?
field_24        db ?
field_25        db ?
field_26        db ?
field_27        db ?
field_28        db ?
field_29        db ?
field_2A        db ?
field_2B        db ?
field_2C        db ?
field_2D        db ?
field_2E        db ?
field_2F        db ?
field_30        db ?
field_31        db ?
field_32        db ?
field_33        db ?
field_34        db ?
field_35        db ?
field_36        db ?
field_37        db ?
field_38        db ?
field_39        db ?
field_3A        db ?
field_3B        db ?
field_3C        db ?
field_3D        db ?
field_3E        db ?
field_3F        db ?
field_40        db ?
field_41        db ?
field_42        db ?
field_43        db ?
field_44        db ?
field_45        db ?
field_46        db ?
field_47        db ?
field_48        db ?
field_49        db ?
field_4A        db ?
field_4B        db ?
field_4C        db ?
field_4D        db ?
field_4E        db ?
field_4F        db ?
field_50        db ?
field_51        db ?
field_52        db ?
field_53        db ?
field_54        db ?
field_55        db ?
field_56        db ?
field_57        db ?
field_58        db ?
field_59        db ?
field_5A        db ?
field_5B        db ?
field_5C        db ?
field_5D        db ?
field_5E        db ?
field_5F        db ?
field_60        db ?
field_61        db ?
field_62        db ?
field_63        db ?
field_64        db ?
field_65        db ?
field_66        db ?
field_67        db ?
field_68        db ?
field_69        db ?
field_6A        db ?
field_6B        db ?
field_6C        db ?
field_6D        db ?
field_6E        db ?
field_6F        db ?
field_70        db ?
field_71        db ?
field_72        db ?
field_73        db ?
field_74        db ?
field_75        db ?
field_76        db ?
field_77        db ?
field_78        db ?
field_79        db ?
field_7A        db ?
field_7B        db ?
field_7C        dw ?
field_7E        db ?
field_7F        db ?
field_80        db ?
field_81        db ?
field_82        db ?
field_83        db ?
field_84        db ?
field_85        db ?
field_86        db ?
field_87        db ?
field_88        db ?
field_89        db ?
field_8A        db ?
field_8B        db ?
field_8C        db ?
field_8D        db ?
field_8E        db ?
field_8F        db ?
field_90        db ?
field_91        db ?
field_92        db ?
field_93        db ?
field_94        db ?
field_95        db ?
field_96        db ?
field_97        db ?
field_98        db ?
field_99        db ?
field_9A        db ?
field_9B        db ?
field_9C        db ?
field_9D        db ?
field_9E        db ?
field_9F        db ?
field_A0        db ?
field_A1        db ?
field_A2        db ?
field_A3        db ?
field_A4        db ?
field_A5        db ?
field_A6        db ?
field_A7        db ?
field_A8        db ?
field_A9        db ?
field_AA        db ?
field_AB        db ?
field_AC        db ?
field_AD        db ?
field_AE        db ?
field_AF        db ?
field_B0        db ?
field_B1        db ?
field_B2        db ?
field_B3        db ?
field_B4        db ?
field_B5        db ?
field_B6        db ?
field_B7        db ?
field_B8        db ?
field_B9        db ?
field_BA        db ?
field_BB        db ?
field_BC        db ?
field_BD        db ?
field_BE        db ?
field_BF        db ?
field_C0        db ?
field_C1        db ?
field_C2        db ?
field_C3        db ?
field_C4        db ?
field_C5        db ?
field_C6        db ?
field_C7        db ?
field_C8        db ?
field_C9        db ?
field_CA        db ?
field_CB        db ?
field_CC        db ?
field_CD        db ?
field_CE        db ?
field_CF        db ?
field_D0        dw ?
field_D2        db ?
field_D3        db ?
field_D4        db ?
field_D5        db ?
field_D6        db ?
field_D7        db ?
field_D8        db ?
field_D9        db ?
field_DA        db ?
field_DB        db ?
field_DC        db ?
field_DD        db ?
field_DE        db ?
field_DF        db ?
field_E0        db ?
field_E1        db ?
field_E2        db ?
field_E3        db ?
field_E4        db ?
field_E5        db ?
field_E6        db ?
field_E7        db ?
field_E8        db ?
field_E9        db ?
field_EA        db ?
field_EB        db ?
field_EC        db ?
field_ED        db ?
field_EE        db ?
field_EF        db ?
field_F0        db ?
field_F1        db ?
field_F2        db ?
field_F3        db ?
field_F4        db ?
field_F5        db ?
field_F6        db ?
field_F7        db ?
field_F8        db ?
field_F9        db ?
field_FA        db ?
field_FB        db ?
field_FC        db ?
field_FD        db ?
field_FE        db ?
field_FF        db ?
field_100       db ?
field_101       db ?
field_102       db ?
field_103       db ?
field_104       db ?
field_105       db ?
field_106       db ?
field_107       db ?
field_108       db ?
field_109       db ?
field_10A       db ?
field_10B       db ?
field_10C       db ?
field_10D       db ?
field_10E       db ?
field_10F       db ?
field_110       db ?
field_111       db ?
field_112       db ?
field_113       db ?
field_114       db ?
field_115       db ?
field_116       db ?
field_117       db ?
field_118       db ?
field_119       db ?
field_11A       db ?
field_11B       db ?
field_11C       db ?
field_11D       db ?
field_11E       db ?
field_11F       db ?
field_120       db ?
field_121       db ?
field_122       db ?
field_123       db ?
field_124       db ?
field_125       db ?
field_126       db ?
field_127       db ?
field_128       db ?
field_129       db ?
field_12A       db ?
field_12B       db ?
field_12C       db ?
field_12D       db ?
field_12E       db ?
field_12F       db ?
field_130       db ?
field_131       db ?
field_132       db ?
field_133       db ?
field_134       db ?
field_135       db ?
field_136       db ?
field_137       db ?
field_138       db ?
field_139       db ?
field_13A       db ?
field_13B       db ?
field_13C       db ?
field_13D       db ?
field_13E       db ?
field_13F       db ?
field_140       db ?
field_141       db ?
field_142       db ?
field_143       db ?
field_144       db ?
field_145       db ?
field_146       db ?
field_147       db ?
field_148       db ?
field_149       db ?
field_14A       db ?
field_14B       db ?
field_14C       db ?
field_14D       db ?
field_14E       db ?
field_14F       db ?
field_150       db ?
field_151       db ?
field_152       db ?
field_153       db ?
field_154       db ?
field_155       db ?
field_156       db ?
field_157       db ?
field_158       db ?
field_159       db ?
field_15A       db ?
field_15B       db ?
field_15C       db ?
field_15D       db ?
field_15E       db ?
field_15F       db ?
field_160       db ?
field_161       db ?
field_162       db ?
field_163       db ?
field_164       db ?
field_165       db ?
field_166       db ?
field_167       db ?
field_168       db ?
field_169       db ?
vehicle_equipment_layout ends

; ---------------------------------------------------------------------------

projectile_img  struc ; (sizeof=0x24, mappedto_64)
                                        ; XREF: DGROUP:proj_image/r
field_0         db ?
field_1         db ?
field_2         db ?
field_3         db ?                    ; XREF: draw_projec_+117/r
field_4         db ?
field_5         db ?
field_6         db ?
field_7         db ?
field_8         db ?
field_9         db ?
field_A         db ?
field_B         db ?
field_C         db ?
field_D         db ?
field_E         db ?
field_F         db ?
field_10        db ?
field_11        db ?
field_12        db ?
field_13        db ?
field_14        db ?
field_15        db ?
field_16        db ?
field_17        db ?
field_18        db ?
field_19        db ?
field_1A        db ?
field_1B        db ?
field_1C        db ?
field_1D        db ?
field_1E        db ?
field_1F        db ?
field_20        db ?
field_21        db ?
field_22        db ?
field_23        db ?
projectile_img  ends

; ---------------------------------------------------------------------------

reserch             struc ; (sizeof=0xA, align=0x2, mappedto_108)
                          
                                      
reserch_flag        db ?               
                                        
agent_base_res      db ?               
                                        
assigment_proj      dw ?                 
                                       
skill_hours_res     dd ?                 
                                      
researched          dw ?                
                                       
reserch             ends

; ---------------------------------------------------------------------------

start_facilities_struc struc ; (sizeof=0x1A, align=0x2, mappedto_110)
                                        ; XREF: DGROUP:start_facility/r
facility_1      dw ?                    ; XREF: gen_start_base_+1F2/r
                                        ; gen_start_base_+208/r ...
facility_2      dw ?
facility_3      dw ?
facility_4      dw ?
facility_5      dw ?
facility_6      dw ?
facility_7      dw ?
facility_8      dw ?
facility_9      dw ?
facility_10     dw ?
facility_11     dw ?
facility_12     dw ?
facility_13     dw ?
start_facilities_struc ends

; ---------------------------------------------------------------------------

log_history_struc struc ; (sizeof=0x52, align=0x2, mappedto_133)
                                        ; XREF: .bss:log_history/r
count           dd ?
field_4         db ?
field_5         db ?
year            dw ?
month           dw ?
day             dw ?
hour            dw ?
minute          dw ?
second          dw ?
x_pos           dw ?
y_pos           dw ?
z_pos           dw ?
text            db 55 dup(?)
field_4F        db ?
alien_demen_flag db ?
field_51        db ?
log_history_struc ends

; ---------------------------------------------------------------------------

colapse_tile_struc struc ; (sizeof=0x8, align=0x2, mappedto_116)
                                        ; XREF: .bss:colapse_tile_stru/r
col_flag        dw ?
x_value         dw ?
y_value         dw ?
z_value         dw ?
colapse_tile_struc ends

; ---------------------------------------------------------------------------

agent_eqv_economics struc ; (sizeof=0x16, align=0x2, mappedto_59)
                                        ; XREF: DGROUP:agent_eqv_economic/r
available_from_week dw ?
base_price      dd ?                    ; XREF: set_eco_data_+6E/r
min_stock_increase dw ?
max_stock_increase dw ?
current_price   dd ?                    ; XREF: set_eco_data_+7A/w
current_amount_for_sale dd ?            ; XREF: set_eco_data_+68/w
last_week_amount_for_sale dd ?          ; XREF: set_eco_data_+74/w
                                        ; Manufacturing+1AF/w
agent_eqv_economics ends

; ---------------------------------------------------------------------------

junction_struc  struc ; (sizeof=0x1C, align=0x2, mappedto_97)
                                        ; XREF: .bss:road_junction_struc/r
x_pos           dw ?                    ; XREF: calc_road_path_+2B/r
                                        ; calc_road_path_+1C1/r ...
y_pos           dw ?                    ; XREF: calc_road_path_+37/r
                                        ; calc_road_path_+1BA/r ...
z_pos           dw ?                    ; XREF: sub_34350+291/r
neig_junk_N     dw ?                    ; XREF: road_path_find_+100/r
                                        ; road_movig_+26C/r ...
neig_junk_E     dw ?                    ; XREF: unused_63+14/r
                                        ; sub_362B0+1B9/r
neig_junk_S     dw ?                    ; XREF: unused_64+14/r
                                        ; sub_362B0+20D/r
neig_junk_W     dw ?                    ; XREF: unused_65+14/r
                                        ; sub_362B0:loc_364E6/r
distance_N      dw ?
distance_E      dw ?
distance_S      dw ?
distance_W      dw ?
field_16        db ?                    ; XREF: unused_60+C1/w
                                        ; unused_60+191/w
field_17        db ?
field_18        db ?
field_19        db ?
road_end        dw ?                    ; XREF: calc_road_path_+166/r
junction_struc  ends

; ---------------------------------------------------------------------------

anim            struc ; (sizeof=0xA, align=0x2, mappedto_98)
                      
z_pos_anim      dd ?  
obj_struc       dd ?                   
type_           db ?
field_9_anim    db ?
anim            ends

; ---------------------------------------------------------------------------

ptang_struc     struc ; (sizeof=0xA, align=0x2, mappedto_101)
                                        ; XREF: .bss:struc_ptg/r
pikch_num       dw ?                    ; XREF: find_free_point+1/o
                                        ; sub_5E650+3/o ...
x_pos_3d        dw ?
y_pos_3d        dw ?
z_pos_3d        dw ?
speed           dw ?
ptang_struc     ends

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

; ---------------------------------------------------------------------------

map_size_struct struc ; (sizeof=0x30, align=0x4, mappedto_121)
                                        ; XREF: DGROUP:map_size_sruc/r
x_size_0        dd ?
y_size_0        dd ?
z_size_0        dd ?
x_size_1        dd ?
y_size_1        dd ?
z_size_1        dd ?
x_size_2        dd ?
y_size_2        dd ?
z_size_2        dd ?
x_size_3        dd ?
y_size_3        dd ?
z_size_3        dd ?
map_size_struct ends

; ---------------------------------------------------------------------------

equip_hard_evel struc ; (sizeof=0x14, align=0x4, mappedto_67)
                                        ; XREF: DGROUP:equip_level/r
novice          dd ?                    ; XREF: calc_week_to_total_score+84/r
                                        ; calc_week_to_total_score+96/r ; base 10
easy            dd ?                    ; base 10
medium          dd ?                    ; base 10
hard            dd ?                    ; base 10
superhuman      dd ?                    ; base 10
equip_hard_evel ends

; ---------------------------------------------------------------------------

tube_connection_tile struc ; (sizeof=0x6, align=0x2, mappedto_106)
                                        ; XREF: DGROUP:tube_connection_struc/r
x               dw ?                    ; XREF: calc_bld_tube_connection_+55/r
                                        ; calc_bld_tube_connection_+130/r ...
y               dw ?                    ; XREF: calc_bld_tube_connection_+63/r
                                        ; calc_bld_tube_connection_+137/r ...
z               dw ?                    ; XREF: calc_bld_tube_connection_+71/r
                                        ; calc_bld_tube_connection_+13E/r ...
tube_connection_tile ends

; ---------------------------------------------------------------------------

ufo_loudouts    struc ; (sizeof=0x38, align=0x4, mappedto_87)
                                        ; XREF: DGROUP:ufo_loudouts_drop/r
                                        ; DGROUP:alien_bld_loadout/r
alien_egg       dd ?                    ; XREF: DGATE_IN+543/r
                                        ; DGATE_IN+54C/r ...
brainsucker     dd ?
multiworm       dd ?
hyperworm       dd ?
chrysalis       dd ?
anthropod       dd ?
skeletoid       dd ?
spitter         dd ?
popper          dd ?
megaspawn       dd ?
psimorph        dd ?
queenspawn      dd ?
micronoid_aggregate dd ?
brainsucker_pod dd ?
ufo_loudouts    ends

; ---------------------------------------------------------------------------

research_struc  struc ; (sizeof=0x1C, align=0x4, mappedto_51)
                                        
lab_size_required db ?
item_prerequisite_modifier db ?
tech_prerequisite_modifier db ?
item_prerequisite_group1 db ?                                       
item_prerequisite_group2 db ?
item_prerequisite_group3 db ?
item_prerequisite1 dw ?                                     
item_prerequisite2 dw ?
item_prerequisite3 dw ?
tech_prerequisite_1 dw ?
tech_prerequisite_2 dw ?
tech_prerequisite_3 dw ?
score_res           dw ?                                                
skill_hours     dd ?                                                   
research_group  db ?                   
UFOPadia_group  db ?                                                   
UFOpedia_entry  dw ?                  
                                      
research_struc  ends

; ---------------------------------------------------------------------------

base_layout_struc struc ; (sizeof=0x40, mappedto_111)
row_1_tile_1    db ?                    ; XREF: gen_start_base_+E0/r
                                        ; base_generate+59/r ...
row_1_tile_2    db ?
row_1_tile_3    db ?
row_1_tile_4    db ?
row_1_tile_5    db ?
row_1_tile_6    db ?
row_1_tile_7    db ?
row_1_tile_8    db ?
row_2_tile_1    db ?
row_2_tile_2    db ?
row_2_tile_3    db ?
row_2_tile_4    db ?
row_2_tile_5    db ?
row_2_tile_6    db ?
row_2_tile_7    db ?
row_2_tile_8    db ?
row_3_tile_1    db ?
row_3_tile_2    db ?
row_3_tile_3    db ?
row_3_tile_4    db ?
row_3_tile_5    db ?
row_3_tile_6    db ?
row_3_tile_7    db ?
row_3_tile_8    db ?
row_4_tile_1    db ?
row_4_tile_2    db ?
row_4_tile_3    db ?
row_4_tile_4    db ?
row_4_tile_5    db ?
row_4_tile_6    db ?
row_4_tile_7    db ?
row_4_tile_8    db ?
row_5_tile_1    db ?
row_5_tile_2    db ?
row_5_tile_3    db ?
row_5_tile_4    db ?
row_5_tile_5    db ?
row_5_tile_6    db ?
row_5_tile_7    db ?
row_5_tile_8    db ?
row_6_tile_1    db ?
row_6_tile_2    db ?
row_6_tile_3    db ?
row_6_tile_4    db ?
row_6_tile_5    db ?
row_6_tile_6    db ?
row_6_tile_7    db ?
row_6_tile_8    db ?
row_7_tile_1    db ?
row_7_tile_2    db ?
row_7_tile_3    db ?
row_7_tile_4    db ?
row_7_tile_5    db ?
row_7_tile_6    db ?
row_7_tile_7    db ?
row_7_tile_8    db ?
row_8_tile_1    db ?
row_8_tile_2    db ?
row_8_tile_3    db ?
row_8_tile_4    db ?
row_8_tile_5    db ?
row_8_tile_6    db ?
row_8_tile_7    db ?
row_8_tile_8    db ?
base_layout_struc ends

; ---------------------------------------------------------------------------

facility_data_t struc ; (sizeof=0x10, align=0x4, mappedto_61)
                                        ; XREF: DGROUP:facility_data/r
price           dd ?                    ; XREF: sub_68EF0+13/o
                                        ; sub_692D0+E/o ...
image_offset    db ?                    ; XREF: sub_8E190+14B/r
                                        ; trans_butt_draw:loc_9FFFE/r ...
fcl_size        db ?                    ; XREF: gen_start_base_+1FC/r
                                        ; sub_69C80+2B1/r ...
day_to_builds   dw ?                    ; XREF: base_bilding_screen+B34/r
                                        ; base_bilding_screen+B41/r ...
maintainance_cost dw ?                  ; XREF: finance_day_report+13A/r
capacity        dw ?                    ; XREF: agent_assigment_switch_+35A/r
                                        ; agent_assigment_switch_+3F8/r ...
image__         db ?
buildable       db ?                    ; XREF: Research+14E/w
                                        ; Research+160/w ...
unused1_fkl     db ?
unused2_fkl     db ?
facility_data_t ends

; ---------------------------------------------------------------------------

ufo_mission_pattern struc ; (sizeof=0x14, align=0x2, mappedto_93)
                                        ; XREF: DGROUP:ufo_mission_patterns/r
mission_type_1  dw ?                    ; XREF: mission_selection+4C/r
mission_type_2  dw ?
mission_type_3  dw ?
mission_type_4  dw ?
mission_type_5  dw ?
mission_type_6  dw ?
mission_type_7  dw ?
mission_type_8  dw ?
mission_type_9  dw ?
mission_type_10 dw ?
ufo_mission_pattern ends

; ---------------------------------------------------------------------------

ufos_grow       struc ; (sizeof=0x14, align=0x2, mappedto_78)
                                        ; XREF: ufo_grow+42/r
                                        ; DGROUP:ufo_grow_limit/r
probe           dw ?                    ; XREF: ufo_grow+4A/r
scout           dw ?
transport       dw ?
fast_attack_ship dw ?
destroyer       dw ?
assault_ship    dw ?
bomber          dw ?
escort          dw ?
battleship      dw ?
mothership      dw ?
ufos_grow       ends

; ---------------------------------------------------------------------------

agent_equipment_1 struc ; (sizeof=0x12, align=0x2, mappedto_83)
                                        ; XREF: DGROUP:agent_equip_1/r
score           dw ?                    ; XREF: sub_ADA30+98/r
                                        ; unused_182+EB/r
item_type       db ?                    ; XREF: sub_81A60+133/r
                                        ; sub_82C10+89F/r ...
item_effect     db ?                    ; XREF: sub_81A60+110/r
                                        ; sub_838F0+640/r ...
weight          dw ?                    ; XREF: equip_ufopedi:loc_8B8C1/r
picture         dw ?                    ; XREF: sub_82C10+8D8/r
                                        ; sub_82C10+936/r ...
size_x          db ?                    ; XREF: sub_810F0+13F/r
                                        ; sub_81A60+76/r ...
size_y          db ?                    ; XREF: sub_810F0+16A/r
                                        ; sub_81A60+A2/r ...
manufacturer    dw ?                    ; XREF: Market_Announcement+98/r
storage_space_needed db ?               ; XREF: sub_5EEA0+B5/r
                                        ; sub_73060+98/r ...
armor_rating    db ?                    ; XREF: sub_ADA30+13A/r
                                        ; sub_AE050+1C8/r ...
unknown_11      db ?
unknown_12      db ?
unused_13       dw ?
agent_equipment_1 ends

; ---------------------------------------------------------------------------

agent_equipment_2_2 struc ; (sizeof=0xC, align=0x2, mappedto_86)
                                        ; XREF: DGROUP:agent_equip_2_2/r
ammo_effect     db ?                    ; XREF: sub_81A00+2F/r
                                        ; sub_81A60+30E/r ...
rounds          db ?                    ; XREF: sub_81A00+27/r
                                        ; sub_81A60+161/r ...
recharge_speed  db ?                    ; XREF: sub_B34A0+5B1/r
unused_3        db ?
unused_4        db ?
unused_5        db ?
unknown_6       dw ?                    ; XREF: sub_81430+12C/r
                                        ; sub_81870+90/r ...
ammo_type       dw ?                    ; XREF: sub_81A60+141/r
                                        ; sub_838F0+185/r ...
item_type       db ?
unused_10       db ?
agent_equipment_2_2 ends

; ---------------------------------------------------------------------------

unit_score_level struc ; (sizeof=0x1C, align=0x4, mappedto_66)
                                        ; XREF: DGROUP:unit_score_req_0/r
level_2         dd ?                    ; XREF: sub_ADE30+5B/r
level_3         dd ?
level_4         dd ?
level_5         dd ?
level_6         dd ?
level_7         dd ?
level_8         dd ?
unit_score_level ends

; ---------------------------------------------------------------------------

agent_init_struc struc ; (sizeof=0x6A, align=0x2, mappedto_138)
score           db ?                    ; base 10
max_score_incr  db ?                    ; base 10
base_speed      db ?                    ; base 10
max_speed_icr   db ?                    ; base 10
base_health     dw ?                    ; base 10
max_health_icr  dw ?                    ; base 10
unk7            db ?                    ; base 10
unk8            db ?                    ; base 10
base_stamina    db ?                    ; base 10
max_stamina_icr db ?                    ; base 10
base_reactions  db ?                    ; base 10
max_reactions_icr db ?                  ; base 10
base_strenght   db ?                    ; base 10
max_strenght_icr db ?                   ; base 10
base_braverly   db ?                    ; base 10
max_braverly_icr db ?                   ; base 10
base_psi_energy db ?                    ; XREF: sub_B0040+F4/r
                                        ; sub_B0040+FA/r ; base 16
max_psi_energy_icr db ?                 ; base 10
base_psi_attack db ?                    ; base 10
max_psi_attack_icr db ?                 ; base 10
base_psi_defence db ?                   ; base 10
max_psi_defence_icr db ?                ; base 10
unk22           db ?                    ; base 10
unk23           db ?                    ; base 10
base_accuracy   db ?                    ; base 10
max_accuracy_icr db ?                   ; base 10
field_28        db ?                    ; base 10
field_30_       db ?                    ; base 10
field_31        db ?                    ; base 10
field_32_       db ?                    ; XREF: scenario_loader+6F/o ; base 10
bio_skill       db ?                    ; XREF: scenario_seed_gen+13/o ; base 10
max_bio_skill_increace db ?             ; base 10
qua_skill       db ?                    ; base 10
max_qua_skill_increace db ?             ; base 10
eng_skill       db ?                    ; base 10
max_eng_skill_increace db ?             ; base 10
field_38        db ?                    ; base 10
field_39        db ?                    ; base 10
field_40        db ?                    ; base 10
field_41        db ?                    ; base 10
field_42        db ?                    ; base 10
field_43        db ?                    ; base 10
field_44        db ?                    ; base 10
field_45        db ?                    ; base 10
field_46        db ?                    ; base 10
field_47        db ?                    ; base 10
field_48        db ?                    ; base 10
field_49        db ?                    ; base 10
field_50        db ?                    ; base 10
field_51        db ?                    ; base 10
field_52        db ?                    ; base 10
field_53        db ?                    ; base 10
field_54        db ?                    ; base 10
field_55        db ?                    ; base 10
field_56        db ?                    ; base 10
field_57        db ?                    ; base 10
field_58        db ?                    ; base 10
field_59        db ?                    ; base 10
size_x          dw ?                    ; base 10
size_y          dw ?                    ; base 10
unit_type       dw ?                    ; base 10
movement_type   db ?                    ; XREF: sub_B0040+70/r
                                        ; sub_B0040+76/r ; base 16
field_67        db ?                    ; base 10
inventory       db ?                    ; XREF: xcom_equip+B3/r
                                        ; alien_gen+12F/r ... ; base 16
leg_type        db ?                    ; XREF: scenario_play+213/r ; base 10
head_armor      dw ?                    ; base 10
body_armor      dw ?                    ; base 10
r_arm_armor     dw ?                    ; base 10
l_arm_armor     dw ?                    ; base 10
leg_armor       dw ?                    ; base 10
unk_armor       dw ?                    ; base 10
unknown_71      db ?                    ; base 10
equipment_set_1 db ?                    ; XREF: xcom_equip+C8/r
                                        ; alien_gen+144/r ... ; base 10
equipment_set_2 db ?                    ; base 10
equipment_set_3 db ?                    ; base 10
equipment_set_4 db ?                    ; base 10
equipment_set_5 db ?                    ; base 10
field_583       db ?                    ; base 10
armor_back      db ?                    ; base 10
unknown_78      dw ?                    ; base 10
empty_slot_flag dw ?                    ; base 10
assigment_type  db ?                    ; base 10
field_5F        db ?                    ; base 10
image_position_1 dw ?                   ; base 10
image_position_2 dw ?                   ; base 10
image_position_3 dw ?                   ; base 10
image_position_4 dw ?                   ; base 10
image           dw ?                    ; XREF: sub_B0040+17/r
                                        ; sub_B0040+37/r ; base 10
agent_init_struc ends

; ---------------------------------------------------------------------------

press_button    struc ; (sizeof=0x34, align=0x4, copyof_48)
scan_mous       dd ?
img_unprs       dd ?
img_aim         dd ?
x_top           dd ?
y_top           dd ?
x_botn          dd ?
y_botn          dd ?
img_flag        dd ?
unkn1           dd ?
scan_keybr      dw ?
scan_mous_x_1   dw ?
scan_mous_y_1   dw ?
scan_mouse      dd ?
tooltip         dd ?
press_flag      dw ?
press_button    ends

; ---------------------------------------------------------------------------

damage_modif    struc ; (sizeof=0x24, align=0x2, mappedto_68)
                                        ; XREF: DGROUP:damage_modif_/r
smoke           dw ?
anti_alien_gas  dw ?
incendiary      dw ?
stun_gas        dw ?
explosive       dw ?
stun            dw ?
psionic_blast   dw ?
armor_piercing  dw ?
laser_beam      dw ?
plasma          dw ?
toxin_A         dw ?
toxin_B         dw ?
toxin_C         dw ?
dimesion_destabiliser dw ?
disruptor_beam  dw ?
explosive1      dw ?
entropy_enzyme  dw ?
falling_object  dw ?
damage_modif    ends

; ---------------------------------------------------------------------------

agent_equipmen_3 struc ; (sizeof=0x26, align=0x2, mappedto_91)
                                        ; XREF: DGROUP:agent_equipment_3/r
speed           dw ?
projectile_image dw ?
power           dw ?                    ; XREF: show_unit_stats+BD9/r
accuracy        dw ?
fire_delay      dw ?
unknown_6       dw ?
guided          dw ?
tune_rate       dw ?
range           dw ?
projectile_lifetime dw ?
unknown_11      dw ?
unknown_12      dw ?
explosion_graphic dw ?
unused14        dw ?
firing_sound    dw ?
impact_sound    dw ?
demage_type     dw ?                    ; XREF: show_unit_stats+B9A/r
proximity_trigger_type dw ?
depletion_rate  dw ?
agent_equipmen_3 ends

; ---------------------------------------------------------------------------

agent_equipment_2_0 struc ; (sizeof=0xA, align=0x2, mappedto_84)
                                        ; XREF: DGROUP:gent_equip_2_0/r
unused_1        db ?                    ; XREF: sub_81A60+200/r
                                        ; sub_82C10+1A9/r ...
unknown_2       dw ?                    ; XREF: sub_81A60+208/r
                                        ; sub_82C10+1B4/r ...
armor_position  db ?                    ; XREF: sub_82C10+150/r
                                        ; sub_82C10+17F/r ...
armor_rating    db ?                    ; XREF: show_unit_stats+B53/r
                                        ; equip_ufopedi+2FA/r
damage_modifier_type db ?
unknown_6       dw ?
unused_7        dw ?                    ; XREF: sub_838F0+7E0/r
agent_equipment_2_0 ends

; ---------------------------------------------------------------------------

agent_equipment_2_1 struc ; (sizeof=0x10, align=0x2, mappedto_85)
                                        ; XREF: DGROUP:agent_equip_2_1/r
primary_ammo_effect db ?                ; XREF: sub_81A60+11B/r
                                        ; sub_81A60+23D/r ...
secondary_ammo_effect db ?              ; XREF: sub_838F0+676/r
tertiary_ammo_effect db ?               ; XREF: sub_838F0+67E/r
max_primary_rounds db ?                 ; XREF: sub_81A60+294/r
                                        ; sub_81A60+2F1/r ...
max_secondary_rounds db ?
max_tertiary_rounds db ?
primary_recharge_speed db ?             ; XREF: sub_81A60+2E8/r
                                        ; sub_841F0+2F/r ...
secondary_recharge_speed db ?
tertiary_recharge_speed db ?
unused_9        db ?
unused_10       db ?
unused_11       db ?
ammo_type_used  dw ?                    ; XREF: sub_838F0+654/r
grenade_effect  dw ?                    ; XREF: show_unit_stats+B73/r
agent_equipment_2_1 ends

; ---------------------------------------------------------------------------

unk_armor_struc struc ; (sizeof=0x8, mappedto_112)
                                        ; XREF: DGROUP:unkn_armor/r
ttt             db ?
x_pos1          db ?                    ; XREF: sub_82C10+2B5/o
                                        ; sub_82C10:loc_82F4D/o ...
y_pos1          db ?                    ; XREF: sub_84800+21/r
                                        ; sub_84800+45/r ...
x_pos2          db ?                    ; XREF: sub_84800+2E/r
                                        ; sub_84880+92/r ...
y_pos2          db ?                    ; XREF: sub_84800+4C/r
                                        ; sub_84880+AE/r ...
armor_pos       db ?                    ; XREF: sub_82C10+2A8/r
                                        ; sub_82C10+322/r ...
field_6         db ?
field_7         db ?
unk_armor_struc ends

; ---------------------------------------------------------------------------

ufopaedia_struct struc ; (sizeof=0x8, align=0x2, mappedto_69)
                                        ; XREF: DGROUP:ufopaedia/r
group_          dw ?                    ; XREF: sub_89240+48/r
                                        ; read_ufoped_organiz_screen+7F/r ...
entry           dw ?
pcx_offset      dw ?
txt_offset      dw ?
ufopaedia_struct ends

; ---------------------------------------------------------------------------

organized_crime struc ; (sizeof=0x8, align=0x2, mappedto_109)
                                        ; XREF: DGROUP:organized_crim/r
organization    dw ?
action_type     dw ?
target_building dw ?
org_time            dw ?
organized_crime ends

; ---------------------------------------------------------------------------

raid_table      struc ; (sizeof=0x1E, mappedto_102)
                                        ; XREF: DGROUP:gang_megapol_raids/r
                                        ; DGROUP:neutral_org_raids/r
field_0         db ?                    ; XREF: set_org_raid_action+2B4/r
                                        ; set_org_raid_action+2C8/r
field_1         db ?
field_2         db ?
field_3         db ?
field_4         db ?
field_5         db ?
field_6         db ?
field_7         db ?
field_8         db ?
field_9         db ?
field_A         db ?
field_B         db ?
field_C         db ?
field_D         db ?
field_E         db ?
field_F         db ?
field_10        db ?
field_11        db ?
field_12        db ?
field_13        db ?
field_14        db ?
field_15        db ?
field_16        db ?
field_17        db ?
field_18        db ?
field_19        db ?
field_1A        db ?
field_1B        db ?
field_1C        db ?
field_1D        db ?
raid_table      ends

; ---------------------------------------------------------------------------

agent_in_facility_struc struc ; (sizeof=0x90, align=0x4, mappedto_115)
                                        ; XREF: DGROUP:agent_in_facility/r
field_0         dd ?
field_4         dd ?
field_8         dd ?
field_C         dd ?
field_10        dd ?
field_14        dd ?
field_18        dd ?
field_1C        dd ?
medical_bay_count dd ?
wounded_agents  dd ?                    ; XREF: calc_base_facility_num+115/w
trainning_aria_count dd ?               ; XREF: agent_assigment_switch_+3FF/r
trainning_agents dd ?                   ; XREF: agent_assigment_switch_+409/r
                                        ; calc_base_facility_num+13B/w
psi_gum_count   dd ?                    ; XREF: agent_assigment_switch_+361/r
psi_training_agents dd ?                ; XREF: agent_assigment_switch_+372/r
                                        ; calc_base_facility_num:loc_6BE93/w
field_38        dd ?
field_3C        dd ?
field_40        dd ?
field_44        dd ?
field_48        dd ?
field_4C        dd ?
field_50        dd ?
field_54        dd ?
field_58        dd ?
field_5C        dd ?
field_60        dd ?
field_64        dd ?
field_68        dd ?
field_6C        dd ?
field_70        dd ?
field_74        dd ?
field_78        dd ?
field_7C        dd ?
field_80        dd ?
field_84        dd ?
field_88        dd ?
field_8C        dd ?
agent_in_facility_struc ends

; ---------------------------------------------------------------------------

manufac_data    struc ; (sizeof=0x32, align=0x2, mappedto_55)
                                        ; XREF: DGROUP:manuf_data/r
manufacturable  dw ?
skill_hours     dd ?                    ; XREF: calc_manuf_data+1D/r
                                        ; calc_manuf_data+26/r ...
unused1         dw ?
unused2         dw ?
tech_prerequisite_modifier dw ?
tech_prerequisite_1 dw ?
tech_prerequisite_2 dw ?
tech_prerequisite_3 dd ?                ; XREF: reserch_and_manuf_screen+88D/r
                                        ; reserch_and_manuf_screen+967/r ...
part_need_to_build_item db ?            ; XREF: reserch_and_manuf_screen+A41/r
                                        ; sub_AAD30+46/r ...
unused10        db ?
unused11        dd ?                    ; XREF: reserch_and_manuf_screen+8D3/r
                                        ; reserch_and_manuf_screen+9AD/r ...
unused12        dw ?                    ; XREF: reserch_and_manuf_screen+A87/r
                                        ; sub_AAD30+74/r ...
unused13        dd ?                    ; XREF: sub_AAD30:loc_AAED7/r
                                        ; sub_AAD30:loc_AAF93/r
unused14        dd ?                    ; XREF: sub_AAD30:loc_AAE26/r
unused15        dd ?
manufac_cost    dd ?                    ; XREF: reserch_and_manuf_screen+474/r
                                        ; reserch_and_manuf_screen+70E/r ...
item_group      dw ?                    ; XREF: sub_AAD30+300/r
item            dw ?
lab_size_required dw ?
manufac_data    ends

; ---------------------------------------------------------------------------

unit_dat_struct struc ; (sizeof=0x92, align=0x2, mappedto_99)
                                        ; XREF: .bss:unitr_dat/r
image           db ?
field_1         db ?
base_accuracy   db ?                    ; XREF: sub_B34A0+44C/r
field_3         db ?
field_4         db ?
field_5         db ?
field_6         db ?
field_7         db ?
field_8         db ?
field_9         db ?
field_A         db ?
field_B         db ?
field_C         db ?
field_D         db ?
field_E         db ?
field_F         db ?
field_10        db ?
field_11        db ?
field_12        db ?
field_13        db ?
field_14        db ?
field_15        db ?
field_16        db ?
field_17        db ?
field_18        db ?
field_19        db ?
field_1A        db ?
field_1B        db ?
field_1C        db ?
field_1D        db ?
organiz         db ?                    ; XREF: set_personal_teleporter+26/r
                                        ; secur_equiping+3E/r
field_1F        db ?
AI_control      db ?
field_21        db ?
field_22        dw ?                    ; XREF: unused_175+1BD/w
                                        ; set_personal_teleporter+30/r
field_24        db ?
rank            db ?
field_26        db ?
field_27        db ?
score           db ?
speed_curr      db ?
current_max_speed db ?
stamina_curr    db ?
stamina_strt    db ?
reaction_cyrr   db ?
reaction_start  db ?
braverly_curr   db ?
psi_energy_curr db ?
psi_energy_strt db ?
psi_attack_start db ?
psi_defece_curr db ?
psi_defece_start db ?
unk23           db ?
accuracy_curr   db ?
body_armor      db ?
uncnown_705     db ?
uncnown_704     db ?
leg_armor       db ?
uncnown_armor   db ?
max_speed       db ?
field_3D        db ?
health_max_curr db ?
field_3F        db ?
health_curr     db ?                    ; XREF: alien_gen+AF/w
field_41        db ?
unk64           db ?
field_43        db ?
leg_arm         dw ?                    ; XREF: sub_ADA30+10F/w
                                        ; sub_AE050+7A/r ...
body_arm        dw ?
larm_armor      db ?
rarm_armor      dw ?
head_arm        dw ?
unc_arm         db ?
gender          db ?
field_4F        db ?
l_arm_armor     db ?
face_image      db ?
field_52        db ?
field_53        db ?
field_54        db ?
field_55        db ?
field_56        db ?
field_57        db ?
field_58        db ?
field_59        db ?
field_5A        db ?
equip_set_1     db ?
equip_set_2     db ?
equip_set_3     db ?
equip_set_4     db ?
equip_set_5     db ?
r_arm_armor     db ?
field_61        db ?
size_x          dw ?
size_y          dw ?
unit_type       db ?
field_67        db ?
move_type_dat   db ?
field_69        db ?
inventory       db ?                    ; XREF: sub_ADE30+31/r
                                        ; secur_equiping+2B/r
strenght_curr   db ?
strenght_start  db ?
field_6D        db ?
field_6E        db ?
damage_modifier_group db ?
day_in_servis   dw ?
kills           dw ?
missions        dw ?
unc_7           db ?
medals          db ?
field_78        db ?
field_79        db ?
empty_slot_flag dw ?
assigment_type  dw ?
image_position_1 dw ?
image_position_2 dw ?
image_position_3 dw ?
image_position_4 dw ?
field_86        db ?
field_87        db ?
speed_3         db ?
health_3        db ?
stamina_3       db ?
reaction_3      db ?
strenght_3      db ?
braverly_3      db ?
accuracy_3      db ?
psi_energy_3    db ?
psi_attack_3    db ?
psi_defece_3    db ?
unit_dat_struct ends

; ---------------------------------------------------------------------------

object_dat_struc struc ; (sizeof=0x30, mappedto_125)
                                        ; XREF: .bss:object_dat/r
owned_org       db ?                    ; XREF: write_object_dat+A7/w
score           db ?
equipment       db ?
unit_num        db ?
x_coord_obj         db ?                    ; XREF: write_object_dat+8F/w
y_coord_obj         db ?                    ; XREF: write_object_dat+98/w
z_coord_obj         db ?                    ; XREF: write_object_dat+A1/w
field_7         db ?
field_8         db ?
field_9         db ?
max_primary_rounds db ?
field_B         db ?
primary_ammo_effect db ?
field_D         db ?
armor_rating    db ?
field_F         db ?
field_10        db ?
field_11        db ?
orgs            db 28 dup(?)
owned_org_      db ?
field_2F        db ?
object_dat_struc ends

; ---------------------------------------------------------------------------

unit_equipset_builtin struc ; (sizeof=0x5C, align=0x4, mappedto_117)
                                        ; XREF: DGROUP:unit_equp_set_builtin/r
weapon_type1    dd ?
appearance_chance dd ?
clip_type       dd ?
clip_amount     dd ?
weapon_type2    dd ?
appearance_weap2 dd ?
clip_type2      dd ?
clip_amount2    dd ?
equipment_type1 dd ?
appearance_eq1  dd ?
equip1_emount   dd ?
equipment_type2 dd ?
appearance_eq2  dd ?
equip2_emount   dd ?
equipment_type3 dd ?
appearance_eq3  dd ?
equip3_emount   dd ?
equipment_type4 dd ?
appearance_eq4  dd ?
equip4_emount   dd ?
equipment_type5 dd ?
appearance_eq5  dd ?
equip5_emount   dd ?
unit_equipset_builtin ends

; ---------------------------------------------------------------------------

scenario_dat    struc ; (sizeof=0xD4, align=0x4, mappedto_137)
                                        ; XREF: .bss:SCENARIO_dat/r
map_name        db 40 dup(?)
total_tac_map_x_size dd ?               ; XREF: gen_tact_map+DB/w
                                        ; gen_tact_map+100/r ...
total_tac_map_y_size dd ?               ; XREF: gen_tact_map+EE/w
                                        ; gen_tact_map+105/r ...
total_tac_map_z_size dd ?               ; XREF: gen_tact_map+FB/w
                                        ; gen_tact_map+115/r ...
game_type       dd ?                    ; XREF: set_SCENARIO_dat+3E/w
                                        ; set_scenario_game_type/r ...
xcom_mission_type dd ?                  ; XREF: set_SCENARIO_dat+44/w
                                        ; set_SCENARIO_dat+16D/w ...
year_tac        dd ?                    ; XREF: set_SCENARIO_dat+5F/w
                                        ; fill_SCENARI0_dat+42/w
month_tac       dd ?                    ; XREF: set_SCENARIO_dat+72/w
                                        ; fill_SCENARI0_dat+54/w
week__tac       dd ?                    ; XREF: set_SCENARIO_dat+85/w
                                        ; fill_SCENARI0_dat+66/w
day_tac         dd ?                    ; XREF: set_SCENARIO_dat+98/w
                                        ; fill_SCENARI0_dat+78/w
hour_tac        dd ?                    ; XREF: set_SCENARIO_dat+AB/w
                                        ; fill_SCENARI0_dat+8A/w
minute_tac      dd ?                    ; XREF: set_SCENARIO_dat+BE/w
                                        ; fill_SCENARI0_dat+9C/w
second_tac      dd ?                    ; XREF: set_SCENARIO_dat+D0/w
                                        ; fill_SCENARI0_dat+AF/w
bldn_num        dd ?                    ; XREF: set_SCENARIO_dat+4C/w
                                        ; set_SCENARIO_dat+EF/w ...
bld_function_sc dd ?                    ; XREF: set_SCENARIO_dat+59/w
                                        ; set_SCENARIO_dat+FC/w ...
bld_owner_sc    dd ?                    ; XREF: set_SCENARIO_dat+6C/w
                                        ; set_SCENARIO_dat+10D/w ...
bld_relation    dd ?                    ; XREF: set_SCENARIO_dat+D8/w
                                        ; set_SCENARIO_dat+125/w ...
field_6A        dd ?                    ; XREF: set_SCENARIO_dat+7F/w
                                        ; fill_SCENARI0_dat+4E/w
field_6C        dd ?                    ; XREF: set_SCENARIO_dat+92/w
                                        ; fill_SCENARI0_dat+60/w
field_70        dd ?                    ; XREF: set_SCENARIO_dat+1AE/w
                                        ; fill_SCENARI0_dat+84/w
field_74        dd ?                    ; XREF: set_SCENARIO_dat+1A8/w
                                        ; set_SCENARIO_dat+1D7/w ...
bld_ship_type_mission dd ?              ; XREF: set_SCENARIO_dat:loc_B0DE1/w
                                        ; set_SCENARIO_dat+263/w ...
rank_sum        db 7 dup(?)             ; XREF: set_SCENARIO_dat+27F/o
                                        ; set_SCENARIO_dat+2BA/w ...
field_83        db ?
field_84        dd ?
field_88        dd ?
field_8C        dd ?
field_90        dd ?
field_94        dd ?
field_98        dd ?                    ; XREF: set_SCENARIO_dat+2DD/w
                                        ; load_from_unit_dat_after_tac_battle:loc_B30D8/r ...
field_9C        dd ?                    ; XREF: set_SCENARIO_dat:loc_B0DF8/w
                                        ; set_SCENARIO_dat+274/w ...
field_A0        dd ?                    ; XREF: set_SCENARIO_dat+A5/w
                                        ; alien_bld_destroy_in_demension+10/r ...
field_A4        dd ?                    ; XREF: set_SCENARIO_dat+2E3/w
                                        ; alien_bld_destroy_in_demension+154/r ...
field_A8        dd ?                    ; XREF: set_SCENARIO_dat+2E9/w
                                        ; fill_SCENARI0_dat+10F/w
diff_enum       dd ?                    ; XREF: set_SCENARIO_dat+2FB/w
                                        ; fill_SCENARI0_dat+121/w
field_B0        dd ?                    ; XREF: set_SCENARIO_dat+2F5/w
                                        ; switch_SCENARIO_bld_function+5E/w ...
field_B4        dd ?                    ; XREF: set_SCENARIO_dat+321/w
                                        ; fill_SCENARI0_dat+FD/w
tac_score       dd ?                    ; XREF: set_SCENARIO_dat+333/w
field_BC        dd ?                    ; XREF: set_SCENARIO_dat+B8/w
                                        ; set_SCENARIO_dat:loc_B0F0D/r ...
field_C0        db ?                    ; XREF: set_SCENARIO_dat+DE/w
                                        ; set_SCENARIO_dat+146/o
field_C1        db ?
field_C2        db ?
field_C3        db ?
field_C4        dd ?
field_C8        dd ?
field_CC        dd ?
field_D0        dd ?
scenario_dat    ends

; ---------------------------------------------------------------------------

agent_recovery_struc struc ; (sizeof=0xC, align=0x4, mappedto_114)
                                        ; XREF: DGROUP:agent_recovery/r
medical         dd ?
trainning       dd ?                    ; XREF: calc_base_recovery_capasit+FA/o
psi             dd ?                    ; XREF: calc_base_recovery_capasit+125/o
agent_recovery_struc ends

; ---------------------------------------------------------------------------

building_dat_ctruc struc ; (sizeof=0x7AD, mappedto_122)
                                        ; XREF: .bss:building_dat/r
base_map_size_x dd ?                    ; XREF: gen_tact_map+CE/r
                                        ; read_building_dat:loc_B1461/r ...
base_map_size_y dd ?                    ; XREF: gen_tact_map+D5/r
                                        ; read_building_dat+15A/r ...
base_map_size_z dd ?                    ; XREF: gen_tact_map+E8/r
                                        ; read_building_dat+163/r ...
sizes_map_block_x dd ?                  ; XREF: gen_tact_map:loc_B0FF2/r
sizes_map_block_y dd ?                  ; XREF: gen_tact_map+8C/r
sizes_map_block_z dd ?                  ; XREF: gen_tact_map+96/r
entrance_NESW   db ?                    ; XREF: sub_B2170+96/w
                                        ; sub_B2170+A4/w ...
exit_NESW       db ?
min_entrance_levels dd ?
max_entrance_levels dd ?
min_exit_levels dd ?
max_exit_levels dd ?
max_entrance_levels_ db 1919 dup(?)
ind_destroyed_ground_tile dd ?          ; XREF: load_sdt_file+149/w
building_dat_ctruc ends

; ---------------------------------------------------------------------------

SDT_struc       struc ; (sizeof=0x14, align=0x4, mappedto_123)
                                        ; XREF: .bss:sdt_file/r
x_size          dd ?                    ; XREF: processing_sdt_file+38/r
                                        ; processing_sdt_file+62/r ...
y_size          dd ?                    ; XREF: processing_sdt_file+46/r
                                        ; processing_sdt_file+68/r ...
z_size          dd ?                    ; XREF: processing_sdt_file+54/r
                                        ; processing_sdt_file+6F/r ...
min_value       dd ?                    ; XREF: gen_tact_map+292/w
                                        ; processing_sdt_file:loc_B184F/r ...
max_value       dd ?                    ; XREF: gen_tact_map+298/w
                                        ; unused_180:loc_B1969/r ...
SDT_struc       ends

; ---------------------------------------------------------------------------

sob_structure   struc ; (sizeof=0x8, align=0x2, mappedto_34)
x_coord         dw ?
y_coord         dw ?
z_coord         dw ?
priority        dw ?
sob_structure   ends

; ---------------------------------------------------------------------------

raid_loot       struc ; (sizeof=0x3C, align=0x4, mappedto_103)
                                        ; XREF: DGROUP:loot_raid_table/r
field_0         dd ?
field_4         dd ?
field_8         dd ?
field_C         dd ?
field_10        dd ?
field_14        dd ?
field_18        dd ?
field_1C        dd ?
field_20        dd ?
field_24        dd ?
field_28        dd ?
field_2C        dd ?
field_30        dd ?
field_34        dd ?
field_38        dd ?
raid_loot       ends

; ---------------------------------------------------------------------------

;sound_buff      struc ; (sizeof=0x12, align=0x2, mappedto_54)
;num             dw ?
;unknown1        dw ?
;speed           dw ?
;anon3           dw ?
;FFFF_1          dw ?
;x_pos           dw ?
;y_pos           dw ?
;z_pos           dw ?
;FFFF_2          dw ?
;sound_buff      ends

; ---------------------------------------------------------------------------

struct_sound_    struc ; (sizeof=0x40, align=0x2, mappedto_46)
sound_path      db 50 dup(?)            ; string(C)
bitrate         dd ?                    ; base 10
fsize           dd ?                    ; base 10
format          dw ?                    ; base 10
max_volume      dw ?                    ; base 10
anonymous_3     dw ?                    ; base 10
struct_sound_    ends

; ---------------------------------------------------------------------------

music_stuct     struc ; (sizeof=0xA, mappedto_144)
                                        ; XREF: DGROUP:music_stuc/r
field_0         dw ?
group_number    dw ?                    ; XREF: read_music_play_list+38F/r
                                        ; music_plyer+3F/w ...
field_4         dw ?
track_number    dd ?                    ; XREF: read_music_play_list+388/r
                                        ; music_plyer+46/w ...
music_stuct     ends

; ---------------------------------------------------------------------------

color_struc     struc ; (sizeof=0x6, align=0x2, mappedto_94)
                                        ; XREF: DGROUP:color_strucure/r
r               dw ?
g               dw ?
b               dw ?
color_struc     ends

; ---------------------------------------------------------------------------

unit_select_stru struc ; (sizeof=0x8, align=0x2, mappedto_135)
                                        ; XREF: DGROUP:unit_select/r
unit            dw ?                    ; XREF: move_agent_to_bld_on_vehicle+10D/r
                                        ; move_agent_to_bld_on_vehicle+65A/r ...
unit_pointer    dd ?                    ; XREF: move_agent_to_bld_on_vehicle+18C/r
                                        ; move_agent_to_bld_on_vehicle+255/r ...
type_1          db ?                    ; XREF: move_agent_to_bld_on_vehicle+104/r
                                        ; move_agent_to_bld_on_vehicle+651/r ...
field_7         db ?                    ; XREF: move_agent_to_bld_on_vehicle+17F/r
                                        ; sub_4C840+17A/w ...
unit_select_stru ends

; ---------------------------------------------------------------------------

save_name_struct struc ; (sizeof=0x51, mappedto_126)
                                        ; XREF: .bss:save_headers/r
field_0         db 81 dup(?)            ; XREF: fill_save_game_array+12E/w
save_name_struct ends

; ---------------------------------------------------------------------------
veh_path_struc  struc ; (sizeof=0x8, mappedto_145)

x_value         dd ?
z_value         dw ?
vaypoint_       dw ?

veh_path_struc  ends

; ---------------------------------------------------------------------------

; enum org_enum, mappedto_8
X_COM            = 0
Alien            = 1
Government       = 2
Megapol          = 3
Cult_of_Sirius   = 4
Marsec           = 5
Superdynamics    = 6
General_Metro    = 7
Cyberweb         = 8
Transtellar      = 9
Solmine          = 0Ah
Sensovision      = 0Bh
Lifetree         = 0Ch
Nutrivend        = 0Dh
Evonet           = 0Eh
Sanctuary_Clinic  = 0Fh
Nanotech         = 10h
Energen          = 11h
Synthemesh       = 12h
Gravball_League  = 13h
Psyke            = 14h
Diablo           = 15h
Osiron           = 16h
SELF             = 17h
Mutant_Alliance  = 18h
Extropians       = 19h
Technocrats      = 1Ah
Civilian         = 1Bh

; ---------------------------------------------------------------------------

; enum movement_type, mappedto_10
road             = 0
flying           = 1
overspawn        = 2
not_active       = 0FFFFFFFFh

; ---------------------------------------------------------------------------

; enum agent_assignment_type, mappedto_7
building         = 1
tube             = 2
vehicle_         = 3
inactive         = 0FFFFFFFFh

; ---------------------------------------------------------------------------

; enum bld_funcion, mappedto_9
Space_Port       = 8
slums            = 1Ch
warehouse        = 1Eh

; ---------------------------------------------------------------------------

; enum tile_type, mappedto_17
general          = 0
roads            = 1
ppl_tube_junc    = 2
ppl_tube         = 3
city_wall        = 4

; ---------------------------------------------------------------------------

; enum road_type, mappedto_23
terminal_junction  = 2

; ---------------------------------------------------------------------------

; enum font, mappedto_1
smalfont         = 0
smallset         = 1
bigfont          = 2

; ---------------------------------------------------------------------------

; enum veh_contol_num_comand, mappedto_15
Go_to_building   = 2
Attack_hostile_unit  = 3
Go_to_map_point  = 4
Attack_building  = 6
manual           = 9

; ---------------------------------------------------------------------------

; enum vehicle_mission_type, mappedto_11
None             = 0
attack_near_portal_bld  = 1
rain_mission     = 2
drop_missiom     = 3
random_bld_attack  = 4
OVERSP_mission   = 5

; ---------------------------------------------------------------------------

; enum veh_target_type, mappedto_39
build            = 0
veh              = 1
map              = 2
no_targ          = 0FFFFFFFFh

; ---------------------------------------------------------------------------

; enum weapon_type, mappedto_13
Janitor_missiles_launcher  = 0Ah
retrib_missile_laluncher  = 0Ch
statis_bomb_launcher  = 0Eh

; ---------------------------------------------------------------------------

; enum direct_damage, mappedto_4
rear             = 0
top              = 1
right            = 2
left             = 3
under            = 4
front            = 5

; ---------------------------------------------------------------------------

; enum Agent_order, mappedto_40
no_order         = 0
Return_to_base   = 1
Tailing          = 4
Spying           = 5

; ---------------------------------------------------------------------------

; enum agent_hired, mappedto_20
not_hired_       = 0
hired_           = 2

; ---------------------------------------------------------------------------

; enum armor_pos, mappedto_14
legs             = 0
body             = 1
l_arm            = 2
r_arm            = 3
head             = 4
unknow           = 5

; ---------------------------------------------------------------------------

; enum action_raid_enum, mappedto_41
Attack           = 1
Raid             = 2
Storm            = 3
notused_1        = 4
notused_2        = 5
Illegal_Flayer   = 6
notused_3        = 7
notused_4        = 8
Treaty           = 9

; ---------------------------------------------------------------------------

; enum security, mappedto_24
megapol_officer  = 0Ah
gangster         = 0Bh
cultist          = 0Ch

; ---------------------------------------------------------------------------

; enum xcom_mission_type_, mappedto_36
Ivest_mission    = 1
Base_mission     = 2
UFO_mission      = 3
raid             = 4

; ---------------------------------------------------------------------------

; enum facilities, mappedto_21
secur_station    = 17h
adv_secur_station  = 18h
vehicle_repair_bay  = 19h
biochenistry_lab  = 1Ah
adv_biochenistry_lab  = 1Bh
quantum_phisics_lab  = 1Ch
adv_quantum_phisics_lab  = 1Dh
alien_containment  = 1Eh
adv_alien_containment  = 1Fh
workshop         = 20h
adv_workshop     = 21h

; ---------------------------------------------------------------------------

 ; enum start_menu_choise, mappedto_29
exit_v           = 0
new_game         = 1
load_game        = 2
scenario         = 3

