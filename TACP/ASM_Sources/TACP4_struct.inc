; ---------------------------------------------------------------------------

object_dat_struc struc ; (sizeof=0x30, align=0x2, mappedto_85)
                                        ; object_dat/r
owned_org       db ?                    ; score_calc_+48A/r
                                        ; score_calc_+519/r ...
score_ob           db ?                    ; score_calc_+4C7/r
                                        ; score_calc_+4FA/r ...
equipment_ob       db ?                    ; unit_moving_work+ABF/r
                                        ; unit_moving_work+E0C/r ...
unit_num        db ?                    ; score_calc_+470/r
                                        ; score_calc_+4D9/r ...
x_pos_ob           db ?                    ; unused_1_1+1B3/w
                                        ; unused_1_1+23A/w ...
y_pos_ob           db ?                    ; sub_51DB0+17C/r
                                        ; unused_1_1+1BD/w ...
z_pos_ob           db ?                    ; unused_1_1+1C7/w
                                        ; unused_1_1+257/w ...
brainsucker_status db ?                 ; calc_action+10E4/w
                                        ; sub_581C0+605/r
lof             db ?                    ; unused_1_1+99/w
                                        ; unused_1_1+28F/w ...
power_ob           db ?
max_primary_rounds dw ?                 ; sub_50EF0+17B/r
                                        ; sub_50EF0+248/r ...
ammo_type_ob       db ?                    ; sub_50EF0+173/r
                                        ; sub_50EF0+240/r ...
field_D         db ?
armor_rating_ob    dw ?                    ; sub_222A0+BC/r
                                        ; sub_222A0+C5/w ...
move_struc      dw ?                    ; sub_581C0+617/r
                                        ; sub_7E4E0+17CC/w ...
orgs_array      db 28 dup(?)            ; net_game__0+1D5/w
                                        ; set_g_speed_sync_action+73/w ...
orgs_array_beh  db ?
field_2F        db ?
object_dat_struc ends

; ---------------------------------------------------------------------------

struc_23_t        struc ; (sizeof=0x12, align=0x2, mappedto_93)
fuild_1         dw ?
x_               dw ?
y_               dw ?
z_               dw ?
fuild_6         dw ?
field_A         dw ?
field_C         dw ?
field_E         dw ?
field_10        dw ?
struc_23_t       ends

; ---------------------------------------------------------------------------

agent_init_struc struc ; (sizeof=0x6A, align=0x2, mappedto_9)
                                        ; agent_init_stru/r
score           db ?
field_1         db ?
speed           db ?
max_speed_increese db ?
health          dw ?
max_health_increase dw ?
unk1            db ?
unk2            db ?
stamina         db ?
max_stamina_increase db ?
reaction        db ?
max_reaction_increase db ?
strenght        db ?
max_strenght_increase db ?
braverly        db ?
max_braverly_increase db ?
psi_energy      db ?
max_psi_energy_increase db ?
psi_attack      db ?
max_psi_attack_incriase db ?
psi_defece      db ?
max_psi_defece_incriace db ?
field_24_t        db ?
field_25_t        db ?
accuracy_t        db ?
max_accuracy_incriace_t db ?
field_28_t        db ?
field_30_t2        db ?
field_31_t        db ?
field_32_t        db ?
bio_skill_t       db ?
max_bio_skill_increace db ?
qua_skill       db ?
max_qua_skill_increace db ?
eng_skill       db ?
max_eng_skill_increace db ?
field_38_t        db ?
field_39_t        db ?
field_40_t        db ?
field_41_t        db ?
field_42        db ?
field_43_t        db ?
field_44_t        db ?
field_45_t        db ?
field_46_t        db ?
field_47_t        db ?
field_48_t        db ?
field_49_t        db ?
field_50_t        db ?
field_51_t        db ?
field_52_t        db ?
field_53_t        db ?
field_54_t        db ?
field_55_t        db ?
field_56_t        db ?
field_57_t        db ?
field_58_t        db ?
field_59_t        db ?
size_x_t          dw ?
size_y_t          dw ?
field_64_t        dw ?
movement_type_ui   db ?
field_67_t        db ?
inventory_t       db ?
leg_type        db ?
leg_armor       dw ?                    ; unused_gen_unit_+5A2/r
                                        ; unused_gen_unit_+5C4/r
body_armor      dw ?
r_arm_armor_t     dw ?
l_arm_armor_t     dw ?
head_armor_t      dw ?
unk_armor_t       dw ?
unknown_71_t      db ?
equipment_set_1 db ?
equipment_set_2 db ?
equipment_set_3 db ?
equipment_set_4 db ?
equipment_set_5 db ?
damage_modifier_group dw ?
unknown_78      dw ?
empty_slot_flag dw ?
assigment_type  db ?
field_5F        db ?
image_position_1 dw ?
image_position_2 dw ?
image_position_3 dw ?
image_position_4 dw ?
image_ui         dw ?                    ; gen_unit_+23/r
agent_init_struc ends

; ---------------------------------------------------------------------------

unit_dat_struct_t struc ; (sizeof=0x92, align=0x2, mappedto_51)
                                        ; unitr_dat/r
image           dw ?
ID              db ?
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
field_E_t         db ?
field_F         db ?
field_10_t        db ?
field_11_t        db ?
field_12_t        db ?
field_13_t        db ?
field_14        db ?
field_15        db ?
field_16        db ?
field_17        db ?
field_18        db ?
field_19        db ?
field_1A        db ?
field_1B_t        db ?
field_1C_t        db ?
field_1D_t        db ?
side_t            db ?
field_1F_t        db ?
AI_control_t      db ?
field_21_t        db ?
field_22_t        db ?
field_23_t        db ?
field_24_t        db ?
rank_t            db ?
field_26_t        db ?
field_27_t        db ?
unk_t             db ?
speed_curr_t      db ?
current_max_speed_t db ?
stamina_curr_t    db ?
stamina_strt_t    db ?
reaction_cyrr_t   db ?
reaction_start_t  db ?
braverly_curr_t   db ?
psi_energy_curr_t db ?
psi_energy_strt_t db ?
psi_attack_start_t db ?
psi_defece_curr_t db ?
psi_defece_start_t db ?
field_35_t        db ?
accuracy_curr_t   db ?
field_37_t        db ?
current_accuracy_t db ?
field_39_t1        db ?
field_3A_t1        db ?
field_3B_t1        db ?
field_3C_t1        db ?
field_3D_t1        db ?
health_max_curr_t1 db ?
field_3F_t1        db ?
health_curr_t1     db ?
field_41_t1        db ?
leg_type_t1        db ?
field_43_t1        db ?
field_44_t1        db ?
field_45_t1        db ?
field_46_t1        dw ?
field_48_t1        dw ?
field_4A_t1        db ?
field_4B_t1        db ?
field_4C_t1        db ?
field_4D_t1        db ?
gender_t1          db ?
field_4F_t        db ?
field_50_t        db ?
face_image_t      db ?
field_52_t        db ?
photo_image     db ?
field_54_t1        dw ?
field_56_t        dw ?
field_58_t        dw ?
field_5A_t        db ?
equip_set_1     db ?
equip_set_2     db ?
equip_set_3     db ?
equip_set_4     db ?
equip_set_5     db ?
r_arm_armor     db ?
field_61_t        db ?
size_x_t          dw ?
size_y_t          dw ?
unit_type_t       db ?
field_67_t        db ?
movement_type_ud   db ?
field_69_t        db ?
inventory_ds       db ?
strenght_curr_t   db ?
strenght_start_t  db ?
field_6D_t        db ?
field_6E_t        db ?
damage_modifier_group_t db ?
day_in_servis_t   dw ?
kills_t           dw ?
missions_t        dw ?
Score_t           db ?
medals_t          db ?
x_size_t          dw ?
y_size_t         dw ?
z_size_t1         dw ?
field_7E_t        db ?
field_7F_t1        db ?
field_80_t1        db ?
field_81_t1        db ?
img_t             db ?
field_83_t_t        db ?
field_84_t        db ?
field_85_t        db ?
field_86_t        db ?
field_87_t        db ?
speed_3         db ?
health_3        db ?
stamina_3_t       db ?
reaction_3_t      db ?
strenght_3      db ?
braverly_3      db ?
accuracy_3      db ?
psi_energy_3    db ?
psi_attack_3    db ?
psi_defece_4    db ?
unit_dat_struct_t ends

; ---------------------------------------------------------------------------

agent_equipmen_3_t struc ; (sizeof=0x26, align=0x2, mappedto_58)
                                        ; agent_equip_3/r
speed           dw ?                    ; sub_635E0+149/r
projectile_image dw ?
power           dw ?                    ; show_unit_stats+CFC/r
                                        ; proj_calc+BF9/r ...
accuracy_e3        dw ?                    ; accuracy_calc_cloak_+191/r
fire_delay_t      dw ?                    ; calc_fire_delay+64/r
                                        ; calc_fire_delay+84/r ...
unknown_6_t       dw ?
guided_t          dw ?                    ; proj_calc+1C9/r
                                        ; proj_calc+B7F/r
tune_rate_t       dw ?                    ; calc_turn_rate_+45/r
range_t           dw ?                    ; sub_635E0+18E/r
                                        ; calc_weapon_range+1B0/r ...
projectile_lifetime_t dw ?                ; proj_calc+13FD/r
unknown_11_t      dw ?
unknown_12_t      dw ?
explosion_graphic_3t dw ?                  ; proj_calc+1505/r
                                        ; proj_calc+1520/r
unused14_t        dw ?
firing_sound_t    dw ?
impact_sound_t    dw ?                    ; proj_calc+1043/r
demage_type_3t     dw ?                    ; show_unit_stats+CB4/r
                                        ; calc_unit_damage_+9A/r
proximity_trigger_type_t dw ?
depletion_rate  dw ?                    ; unit_shot_init_+2B2/r
                                        ; unit_shot_init_+2F1/r ...
agent_equipmen_3_t ends

; ---------------------------------------------------------------------------

agent_equipment_2_2 struc ; (sizeof=0xC, align=0x2, mappedto_55)
                                        ; agent_equip_2_2/r
ammo_effect     db ?                    ; show_unit_stats+E9F/r
                                        ; unused_1_1+11B/r ...
rounds          db ?                    ; equip_type_define_+59/r
                                        ; unused_86+150/r ...
recharge_speed  db ?
unused_3        db ?
unused_4        db ?
unused_5        db ?
unknown_6       dw ?
ammo_type       dw ?                    ; show_unit_stats+E82/r
                                        ; unused_1_1+109/r ...
item_type       db ?                    ; sub_65A10+1E2/r
                                        ; sub_65A10+251/r
unused_10       db ?
agent_equipment_2_2 ends

; ---------------------------------------------------------------------------

agent_equipment_2_1 struc ; (sizeof=0x10, align=0x2, mappedto_54)
                                        ; ag_equipment_2_1/r
primary_ammo_effect db ?                ; unused_86+121/r
                                        ; unused_1_1+CD/r
secondary_ammo_effect db ?
tertiary_ammo_effect db ?
max_primary_rounds db ?                 ; unused_86+12F/r
                                        ; unused_1_1+D3/r
max_secondary_rounds db ?
max_tertiary_rounds db ?
primary_recharge_speed db ?             ; unused_86+24A/r
secondary_recharge_speed db ?
tertiary_recharge_speed db ?
unused_9        db ?
unused_10       db ?
unused_11       db ?
ammo_type_used  dw ?
grenade_effect  dw ?                    ; calc_action+111D/r
                                        ; show_unit_stats+C8C/r ...
agent_equipment_2_1 ends

; ---------------------------------------------------------------------------

agent_equipment_2_0 struc ; (sizeof=0xA, align=0x2, mappedto_53)
                                        ; agent_equipment_2_0_0/r
unused_1        db ?
unknown_2       dw ?
armor_position  db ?                    ; set_unit_equip_+24E/r
armor_rating    db ?                    ; show_unit_stats+C27/r
                                        ; Unit_Brainsucked+49/r
damage_modifier_type db ?
unknown_6       dw ?
unused_7        dw ?
agent_equipment_2_0 ends

; ---------------------------------------------------------------------------

agent_equipment_1 struc ; (sizeof=0x12, align=0x2, mappedto_52)
                                        ; agent_equip_1/r
score           dw ?
item_type       db ?                    ; calc_weapon_effect_size_+3F/r
                                        ; calc_weapon_effect_size_+86/r ...
item_effect     db ?                    ; calc_weapon_effect_size_+48/r
                                        ; calc_weapon_effect_size_+8F/r ...
weight          dw ?
picture         dw ?                    ; unused_87+3EF/r
size_x          db ?                    ; sub_222A0+19E/r
                                        ; sub_222A0+220/r ...
size_y          db ?                    ; sub_222A0+1A4/r
                                        ; sub_222A0+226/r ...
manufacturer    dw ?                    ; sub_222A0+190/r
                                        ; sub_222A0+214/r
storage_space_needed db ?
armor_rating_ae1    db ?                    ; unused_1_1+9F/r
                                        ; sub_642E0+A7/r
unknown_11      db ?
unknown_12      db ?
unused_13       dw ?
agent_equipment_1 ends

; ---------------------------------------------------------------------------

prog_img        struc ; (sizeof=0x9, mappedto_2)
field_0_t         db 9 dup(?)
prog_img        ends

; ---------------------------------------------------------------------------

proj_offs       struc ; (sizeof=0x24, mappedto_3)
field_0         db 36 dup(?)
proj_offs       ends

; ---------------------------------------------------------------------------

vehicle_equipment_1 struc ; (sizeof=0x18, align=0x2, mappedto_13)
item_type       db ?
effect          db ?
item_group      dw ?
weight          dw ?
max_ammo_fuel   dw ?
ammo_fuel_type_used dw ?
ammo_fuel_consumptio dw ?
picture         dw ?
size_x          db ?
size_y          db ?
unknown_11      dw ?
unknown_12      dw ?
manufacturer    dw ?
storage_space_needed dw ?
vehicle_equipment_1 ends

; ---------------------------------------------------------------------------

score_req       struc ; (sizeof=0x1C, align=0x4, mappedto_62)
                                        ; score__agent_req/r
level_2         dd ?                    ; base 10
level_3         dd ?                    ; base 10
level_4         dd ?                    ; base 10
level_5         dd ?                    ; base 10
level_6         dd ?                    ; base 10
level_7         dd ?                    ; base 10
level_8         dd ?                    ; base 10
score_req       ends

; ---------------------------------------------------------------------------

score_equip_set struc ; (sizeof=0x8C, align=0x2, mappedto_44)
                                        ; equp_set_score/r
weapon_1        dw ?
clip_type_1     dw ?
clip_amount_1   dw ?
weapon_2        dw ?
clip_type_2     dw ?
clip_amount_2   dw ?
weapon_3        dw ?
clip_type_3     dw ?
clip_amount_3   dw ?
weapon_4        dw ?
clip_type_4     dw ?
clip_amount_4   dw ?
weapon_5        dw ?
clip_type_5     dw ?
clip_amount_5   dw ?
weapon_6        dw ?
clip_type_6     dw ?
clip_amount_6   dw ?
weapon_7        dw ?
clip_type_7     dw ?
clip_amount_7   dw ?
weapon_8        dw ?
clip_type_8     dw ?
clip_amount_8   dw ?
weapon_9        dw ?
clip_type_9     dw ?
clip_amount_9   dw ?
weapon_10       dw ?
clip_type_10    dw ?
clip_amount_10  dw ?
grenade_type1   dw ?
grenade_amount1 dw ?
grenade_type2   dw ?
grenade_amount2 dw ?
grenade_type3   dw ?
grenade_amount3 dw ?
grenade_type4   dw ?
grenade_amount4 dw ?
grenade_type5   dw ?
grenade_amount5 dw ?
grenade_type6   dw ?
grenade_amount6 dw ?
grenade_type7   dw ?
grenade_amount7 dw ?
grenade_type8   dw ?
grenade_amount8 dw ?
grenade_type9   dw ?
grenade_amount9 dw ?
grenade_type10  dw ?
grenade_amount10 dw ?
other_equp_1    dw ?
other_equp_2    dw ?
other_equp_3    dw ?
other_equp_4    dw ?
other_equp_5    dw ?
other_equp_6    dw ?
other_equp_7    dw ?
other_equp_8    dw ?
other_equp_9    dw ?
other_equp_10   dw ?
other_equp_11   dw ?
other_equp_12   dw ?
other_equp_13   dw ?
other_equp_14   dw ?
other_equp_15   dw ?
other_equp_16   dw ?
other_equp_17   dw ?
other_equp_18   dw ?
other_equp_19   dw ?
other_equp_20   dw ?
score_equip_set ends

; ---------------------------------------------------------------------------

ptang_struc     struc ; (sizeof=0xA, align=0x2, mappedto_92)
                                        ; ptang_stru/r
pic_num_t         dw ?                    ; unit_gone_berserk_2_+5B7/r
x_pos_3d_t        dw ?
y_pos_3D_t        dw ?
z_pos_3d_t        dw ?
fuild_8_t         dw ?
ptang_struc     ends

; ---------------------------------------------------------------------------

struc_agents     struc ; (sizeof=0x49A, align=0x2, mappedto_110)
                                        ; struc_agents/r agent_struc/r ...
image_t           dw ?                    ; score_calc_+36/r
                                        ; score_calc_+63/r ... ; enum unit_image
image_2         dw ?                    ; unused_85+20/r
                                        ; unused_85+147/r
ID              dw ?                    ; unused_85+2E/r
                                        ; unused_85+168/r ...
name_t            db 26 dup(?)            ; unused_85+3C/r
                                        ; unused_85+189/r ... ; char
side_t            dw ?                    ; score_calc_+84/r
                                        ; score_calc_+BE/r ... ; enum unit_side
unit_type_t       dw ?
AI_control_t      dw ?                    ; add_in_squad_0+7A/r
                                        ; group_formation_action+A3/r ...
squad_t           dw ?
anim_offset_t     dw ?
field_2A_t        db ?
field_2B_t        db ?
field_2C_t        db ?
field_2D_t        db ?
field_2E_t        db ?
rank            db ?
field_30_t        dw ?
r_hend_weapon_t   dw ?                    ; sub_412D0+130/r
                                        ; sub_51DB0+195/w ...
l_hand_weapon_t   dw ?                    ; sub_51DB0+1F3/w
weapon_weight_t   dw ?
total_encumberan_t dw ?
Days_service    dw ?
Kills           dw ?                    ; unit_has_died_+1A6/r
                                        ; unit_has_died_+1BB/w
missions        dw ?
score           dw ?                    ; unit_has_died_+1DD/r
                                        ; unit_has_died_+1E9/w
total_kill_score dw ?                   ; unit_has_died_+1CA/r
                                        ; unit_has_died_+1D6/w
calc_score      db ?                    ; score_calc_+24E/r
                                        ; score_calc_+332/r ...
leg_typs        db ?                    ; set_action_8+3E/r
legs_armor      dw ?                    ; sub_51DB0+25F/r
                                        ; sub_51DB0+268/w ...
body_armor      dw ?                    ; set_unit_equip_+1F8/w
l_arm_armor     dw ?                    ; set_unit_equip_+203/w
r_arm_armor     dw ?                    ; set_unit_equip_+20C/w
head_armor      dw ?                    ; set_unit_equip_+218/w
uncnown_armor   dw ?
leg_wound       db ?
tors_wound      db ?
l_hend_wound    db ?
r_hend_wound    db ?
head_wound      db ?
rear_wound      db ?
max_speed       db ?
max_TU          db ?
curr_speed_a      db ?
field_5B        db ?
Reserve_TU_shot dw ?
Reserve_TU_kneel dw ?
cloak_dist      db ?
field_61        db ?
max_health      dw ?
current_health  dw ?                    ; score_calc_+46/r
                                        ; score_calc_+224/r ...
morale_1        db ?
morale_2        db ?
stamina_1       db ?
stamina_2       db ?
stamina_usage_count db ?
field_6B        db ?
curent_reaction db ?
max_reaction    db ?
auto_shot_counter db ?
field_6F        db ?
strenght_1      db ?
strenght_2      db ?
curr_morale     db ?
braverly        db ?
psi_energy_1    db ?
psi_energy_2    db ?
field_76        db ?
field_77        db ?
field_78        db ?
field_79        db ?
field_7A        db ?
field_7B        db ?
unit_status     db ?                    ; enum status_unit
agressive_mode_2 db ?
fire_mode_2     db ?
field_7F        db ?
stun_level      dw ?                    ; score_calc_+56/r
                                        ; score_calc_+230/r ...
fire_damage     db ?
field_83        db ?
attack_unit_num dw ?
field_86        dw ?
psi_defece_curr db ?
psi_defece_1    db ?
psi_defece_2    db ?
field_8B        db ?
accuracy        dw ?
current_accuracy dw ?
field_90        db ?
field_91        db ?
field_92        db ?
field_93        db ?
field_94        db ?
field_95        db ?
gender          db ?                    ; enum gender
face_image      db ?
field_98        db ?
field_99        db ?
photo_image     db ?
field_9B        db ?
field_9C        db ?
field_9D        db ?
field_9E        db ?
field_9F        db ?
field_A0        db ?
field_A1        db ?
equip_set_1     db ?
equip_set_2     db ?
equip_set_3     db ?
equip_set_4     db ?
equip_set_5     db ?
field_A7        db ?
tracker_state   dw ?
x_pos_t           dw ?                    ; calc_action+66E/r
                                        ; sub_51DB0+36F/r
y_pos_t           dw ?                    ; calc_action+667/r
                                        ; sub_51DB0+385/r
z_pos_t           dw ?                    ; calc_action+660/r
                                        ; sub_51DB0+39B/r ...
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
x_pos_3D        dw ?
y_pos_3D        dw ?
z_pos_3D        dw ?
x_size_t          dw ?
y_size_t          dw ?
z_size_t          dw ?
field_C6        db ?
field_C7        db ?
field_C8        db ?
field_C9        db ?
field_CA        db ?
field_CB        db ?
field_CC        db ?
field_CD        db ?
lof_height      dw ?
size_x_1        dw ?
x_pos_move_target dw ?
y_pos_move_target dw ?
z_pos_move_target dw ?
x_pos_1         dw ?
y_pos_1         dw ?
z_pos_1         dw ?
Object_height   db ?
field_DF        db ?
x_pos_2         db ?
y_pos_2         db ?
z_pos_2         db ?
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
direct_2d       db ?
item_size_y     db ?
item_size_z     db ?
field_F1        db ?
direct_3d       dw ?
field_F4        dw ?                    ; calc_action+1583/w
field_F6        dw ?
move_mode       dw ?                    ; sub_4C690:loc_4C91F/r
                                        ; sub_4C690+558/r
field_FA        dw ?
field_FC        dw ?
max_speed_2_mod db ?
field_FF        db ?
curr_TU         dw ?
current_frame_speed_by_moving_mode dw ? ; sub_476F0+252/r
                                        ; sub_4C690:loc_4C92F/r ...
field_104       db ?
field_105       db ?
field_106       db ?                    ; sub_4C690+535/r
                                        ; sub_4C690+546/w
field_107       db ?
lof_offset      dw ?
x_pos_3         db ?
y_pos_3         db ?
z_pos_3         db ?
field_10D       db ?
z_pos_6         dw ?
turet_size_2    dw ?
field_112       dw ?
field_114       dw ?
field_116       dw ?
field_118       dw ?
field_11A       dw ?
field_11C       dw ?
field_11E       dw ?
field_120       dw ?
field_122       dw ?
field_124       dw ?
field_126       dw ?
field_128       dw ?
field_12A       dw ?
field_12C       dw ?
field_12E       dw ?
field_130       dw ?
field_132       dw ?
field_134       dw ?
field_136       dw ?
field_138       dw ?
field_13A       dw ?
field_13C       dw ?
field_13E       dw ?
field_140       dw ?
field_142       dw ?
field_144       dw ?
field_146       dw ?
field_148       dw ?
field_14A       dw ?
field_14C       dw ?
field_14E       dw ?
field_150       dw ?
field_152       dw ?
field_154       dw ?
field_156       dw ?
field_158       dw ?
field_15A       dw ?
field_15C       dw ?
field_15E       dw ?
field_160       dw ?
field_162       dw ?
field_164       dw ?
field_166       dw ?
field_168       dw ?
field_16A       dw ?
field_16C       dw ?
field_16E       dw ?
field_170       dw ?
field_172       dw ?
field_174       dw ?
field_176       dw ?
field_178       dw ?
field_17A       dw ?
field_17C       dw ?
field_17E       dw ?
field_180       dw ?
field_182       dw ?
field_184       dw ?
field_186       dw ?
field_188       dw ?
field_18A       dw ?
field_18C       dw ?
field_18E       dw ?
field_190       dw ?
field_192       dw ?
field_194       dw ?
field_196       dw ?
field_198       dw ?
field_19A       dw ?
field_19C       dw ?
field_19E       dw ?
field_1A0       dw ?
field_1A2       dw ?
field_1A4       dw ?
field_1A6       dw ?
field_1A8       dw ?
field_1AA       dw ?
field_1AC       dw ?
field_1AE       dw ?
field_1B0       dw ?
field_1B2       dw ?
field_1B4       dw ?
field_1B6       dw ?
field_1B8       dw ?
field_1BA       dw ?
field_1BC       dw ?
field_1BE       dw ?
field_1C0       dw ?
field_1C2       dw ?
field_1C4       dw ?
field_1C6       dw ?
field_1C8       dw ?
field_1CA       dw ?
field_1CC       dw ?
field_1CE       dw ?
field_1D0       dw ?
field_1D2       dw ?
losarea_sec_num db ?
field_1D5       db ?
losar_sec_num   db 10 dup(?)
field_1E0       db ?
field_1E1       db ?
field_1E2       db ?
field_1E3       db ?
field_1E4       db ?
field_1E5       db ?
field_1E6       db ?
field_1E7       db ?
field_1E8       db ?
field_1E9       db ?
field_1EA       db ?
field_1EB       db ?
field_1EC       db ?
field_1ED       db ?
field_1EE       db ?
field_1EF       db ?
field_1F0       db ?
field_1F1       db ?
field_1F2       db ?
field_1F3       db ?
field_1F4       db ?
field_1F5       db ?
field_1F6       db ?
field_1F7       db ?
field_1F8       db ?
field_1F9       db ?
field_1FA       db ?
field_1FB       db ?
field_1FC       db ?
field_1FD       db ?
field_1FE       db ?
field_1FF       db ?
field_200       db ?
field_201       db ?
field_202       db ?
field_203       db ?
field_204       db ?
field_205       db ?
field_206       db ?
field_207       db ?
field_208       db ?
field_209       db ?
field_20A       db ?
field_20B       db ?                    ; sub_4C690+4ED/r
                                        ; sub_4C690+51A/w
field_20C       db ?
field_20D       db ?
field_20E       db ?                    ; sub_4C690+527/w
field_20F       db ?
field_210       db ?                    ; sub_4C690+27F/r
                                        ; sub_4C690+53B/w
field_211       db ?
field_212       db ?
field_213       db ?
x_pos_4         dw ?
y_pos_4         dw ?
z_pos_4         dw ?
agent_in_aim    dw ?
kneeling        dw ?
movement_mode   dw ?
agent_formation dw ?
agressive_mode  dw ?
movement_graphic_mode dw ?
fire_mode       dw ?
kneeling_graf_fire dw ?
stand_kneel_a     dw ?
kneeling_setting dw ?
field_22E       db ?
field_22F       db ?
field_230       db ?
field_231       db ?
field_232       db ?
field_233       db ?
field_234       db ?
field_235       db ?
field_236       db ?
field_237       db ?
field_238       db ?
field_239       db ?
field_23A       db ?
field_23B       db ?
field_23C       db ?
field_23D       db ?
field_23E       db ?
field_23F       db ?
field_240       db ?
field_241       db ?
field_242       db ?
field_243       db ?
field_244       db ?
field_245       db ?
field_246       db ?
field_247       db ?
field_248       db ?
field_249       db ?
field_24A       db ?
field_24B       db ?
field_24C       db ?
field_24D       db ?
field_24E       db ?
field_24F       db ?
field_250       db ?
field_251       db ?
field_252       db ?
field_253       db ?
sheild_point    dw ?
field_256       db ?
field_257       db ?
matrix_action_2_mode db ?
field_259       db ?
field_25A       db ?
field_25B       db ?
proj_owner_unit_num dw ?
num_aiming_unit_array db 28 dup(?)      ; sub_476F0+189/r
                                        ; sub_5CD00+95/r ...
field_27A       db 6 dup(?)
field_280       db 6 dup(?)
number_of_units_hit_t db ?                ; proj_calc+14A0/w
damage_taken_counter_t db ?
unit_hit_struc_t  db ?                    ; proj_calc+14DA/w
num_aim_unit_t    db ?
field_28A_t       db ?
field_28B_t       db ?
max_health_div_4_t db ?
field_28D_t       db ?
matrix_action_6_mode_t db ?
field_28F       db ?
unit_alied_num  db ?
field_291       db ?
field_292       db ?
field_293       db ?
field_294       db ?
field_295       db ?
field_296       db ?
field_297       db ?
field_298       db ?
field_299       db ?
field_29A       db ?
field_29B       db ?
field_29C       db ?
field_29D       db ?
field_29E       db ?
field_29F       db ?
field_2A0       db ?
field_2A1       db ?
field_2A2       db ?
field_2A3       db ?
field_2A4       db ?
field_2A5       db ?
field_2A6       db ?
field_2A7       db ?
field_2A8       db ?
field_2A9       db ?
field_2AA       db ?
field_2AB       db ?
field_2AC       db ?
field_2AD       db ?
field_2AE       db ?
field_2AF       db ?
obj_r_hand      dw ?                    ; sub_412D0+139/w
                                        ; sub_412D0+182/r ...
field_2B2       dw ?                    ; sub_51DB0+1D3/w
obj_l_hand      dw ?                    ; sub_412D0:loc_41414/w
                                        ; sub_412D0:loc_41468/w ...
field_2B6       dw ?                    ; sub_51DB0+231/w
inventory       db ?                    ; sub_51DB0+3C/r
                                        ; set_action_8+23/r
field_2B9       db ?
field_2BA       db ?
damage_modif_group db ?
movement_type   db ?
fly_mod         db ?
field_2BE       db ?
field_2BF       db ?
losection_num   db ?
field_2C1       db ?
time_array      dd 28 dup(?)
losection_array dw 28 dup(?)
agent_move_type db 28 dup(?)
agent_move_mode dw 28 dup(?)
r_hand_ammo     db 28 dup(?)
l_hand_ammo     db 28 dup(?)
lose_health_arr db 28 dup(?)
squad_unk       db ?
field_413       db ?
field_414       db ?
field_415       db ?
field_416       db ?
field_417       db ?
field_418       db ?
field_419       db ?
matrix_ai_control_xcom dw ?             ; set_action_30_+18/r
                                        ; set_action_30_+5E/w
matrix_ai_control_alien dw ?
field_41E       db ?
brainsuck_flag  db ?
field_420       db ?
field_421       db ?
field_422       db ?
field_423       db ?
field_424       db ?
field_425       db ?
field_426       db ?
field_427       db ?
field_428       db ?
random_matrix_flag db ?
field_42A       db ?
field_42B       db ?
field_42C       db ?
field_42D       db ?
time_unc        db ?
field_42F       db ?
field_430       db ?
field_431       db ?
exp_array_section dw ?                  ; set_action_30_+21/r
                                        ; set_action_30_+66/w
exp_sec_num_2   dw ?
action_30_array dw 20 dup(?)
x_pos_unc       dw ?
y_pos_unc       dw ?
z_pos_unc       dw ?
aggr_set_ctrl_unit db ?
movement_graphic_mode_old db ?
fire_mod_old    db ?
field_467       db ?
field_468       db ?
field_469       db ?
field_46A       db ?
field_46B       db ?
matrix_action_27_mode db ?
field_46D       db ?
field_46E       db ?
field_46F       db ?
field_470       db ?
field_471       db ?
field_472       db ?                    ; column_9_10_set_+479/w
field_473       db ?
field_474       db ?
field_475       db ?
field_476       db ?
matrix_action_28_mode db ?
field_478       db ?
unit_weapon_mode db ?                   ; calc_action+1571/w
anim_speed      db ?                    ; calc_action+159F/w
field_47B       db ?
field_47C       db ?
field_47D       db ?
field_47E       db ?
field_47F       db ?
field_480       db ?
field_481       db ?
field_482       db ?
field_483       db ?
field_484       db ?
field_485       db ?
field_486       db ?
field_487       db ?
speed_3         dw ?
health_3        dw ?
stamina_3       dw ?
reaction_3      dw ?
strenght_3      dw ?
braverly_3      dw ?
accuracy_3      dw ?
psi_energy_3    dw ?
psi_attack_3    dw ?
struc_agents    ends

; ---------------------------------------------------------------------------

tile_struc_unused struc ; (sizeof=0x6, mappedto_115)
coord_x         dw ?
coord_y         dw ?
coord_z         dw ?
tile_struc_unused ends

; ---------------------------------------------------------------------------

save_struct     struc ; (sizeof=0xA, align=0x2, mappedto_94)
                                        ; save_struct_/r
length_t          dd ?
offset_t          dd ?                    ; offset
field_8_s         dw ?
save_struct     ends

; ---------------------------------------------------------------------------

weapon_effect_size struc ; (sizeof=0x6, align=0x2, mappedto_98)
                                        ; weap_eff_size/r
x_size          dw ?
y_size          dw ?
z_size          dw ?
weapon_effect_size ends

; ---------------------------------------------------------------------------

text_string_41  struc ; (sizeof=0x2A, align=0x2, mappedto_97)
field_0         db 41 dup(?)
                db ? ; undefined
text_string_41  ends

; ---------------------------------------------------------------------------

sound_buff      struc ; (sizeof=0x12, align=0x2, mappedto_17)
                                        ; sound_buffer_struc/r
num             dw ?
unknown1        dw ?
a5              dw ?
anon3           dw ?
FFFF_1          dw ?
channel         dw ?
a3              dw ?
a4              dw ?
FFFF_2          dw ?
sound_buff      ends

; ---------------------------------------------------------------------------

psio_control_unit_struct struc ; (sizeof=0x14, align=0x4, mappedto_99)
                                        ; psio_control_unit_struc/r
obj_dat_sec     dw ?                    ; sub_88390:loc_883D5/o
                                        ; check_psi_side_antropod_+E/o ...
field_2         dw ?
unit_1          dd ?
unit_2          dd ?
AI_control      dw ?
side            dw ?
field_10        dw ?
field_12        dw ?
psio_control_unit_struct ends

; ---------------------------------------------------------------------------

CITYMAP_DAT     struc ; (sizeof=0x34, align=0x2, mappedto_10)
tile_type       db ?
road_type       db ?
road_junction   db 4 dup(?)
road_level_change db 4 dup(?)
height          db ?
constitution    db ?
value           db ?
overlaytile_idx db ?
landing_pad     db ?
walk_type       db ?
voxelIdx        db 16 dup(?)
has_basement    db ?
people_tube_connections db 6 dup(?)
mass            db ?
strength        dw ?
damagedtile_idx dw ?
supportile_idx  dw ?
target_Pnt      db 4 dup(?)
stratmap_idx    dw ?
CITYMAP_DAT     ends

; ---------------------------------------------------------------------------

score_structure struc ; (sizeof=0x20, align=0x4, mappedto_65) ; score/r
combat_rating_s   dd ?                    ; score_calc_+1A4/w
                                        ; score_calc_+263/r ...
casual_penalty  dd ?                    ; score_calc_+296/w
                                        ; score_calc_+2A3/w ...
leadership_bonus dd ?                   ; score_calc_+43C/w
live_alien_capture dd ?                 ; score_calc_+397/w
equip_capture   dd ?                    ; score_calc_+39D/w
                                        ; score_calc_+41E/w
equip_lost      dd ?                    ; score_calc_+446/w
                                        ; score_calc_+4F4/r ...
total_score     dd ?                    ; score_calc_+44B/w
                                        ; score_calc_+4C1/r ...
mission_performans dd ?                 ; score_calc_+575/w
score_structure ends

; ---------------------------------------------------------------------------

expirean_struc  struc ; (sizeof=0x72, align=0x2, mappedto_66)
                                        ; expirean_temp_2/r
flag            dw ?                    ; add_header1_for_exper_array_+2C/r
                                        ; add_header1_for_exper_array_+48/r ...
index           dd ?                    ; calc_brain_+9B/r
                                        ; calc_brain_+1E1/r
max_value       dd ?
entry           dd 25 dup(?)            ; calc_brain_:loc_9FCA6/r
                                        ; calc_brain_+2D0/r ...
section         dd ?                    ; calc_brain_+D5/r
                                        ; calc_brain_+EF/r ...
expirean_struc  ends

; ---------------------------------------------------------------------------

experian_array_12 struc ; (sizeof=0x68, align=0x4, mappedto_79)
number_t12          dd ?
brainsucer_num_t12  dd ?
average_max_health_t12 dd ?
average_current_health_t12 dd ?
average_curr_max_TU_t12 dd ?
number_of_units_hit_t12 dd ?
avr_damage_taken_t12 dd ?
average_dist_t12    dd ?
losarea_field_62_t12 dd ?
fuild_62_value_t12  dd ?
losarea_val_9ED80_1_t12 dd ?
losarea_val_9ED80_2_t12 dd ?
field_30_t12        dd ?
field_37_t12        dd ?
field_38_t12        dd ?
field_39_t12        dd ?
field_40_t12        dd ?
field_44_t12        dd ?
field_48_t12        dd ?
field_4C_t12        dd ?
field_50_t12        dd ?
field_54_t12        dd ?
field_58_t12        dd ?
field_5C_t12        dd ?
field_60_t12        dd ?
field_64_t12        dd ?
experian_array_12 ends

; ---------------------------------------------------------------------------

experian_array_16 struc ; (sizeof=0x68, align=0x4, mappedto_80)
number_t16          dd ?
brainsucer_num_t16  dd ?
average_max_health_t16 dd ?
average_current_health_t16 dd ?
average_curr_max_TU_t16 dd ?
number_of_units_hit_t16 dd ?
avr_damage_taken_t16 dd ?
average_dist_t16    dd ?
WEAPEXP_2_value_t16 dd ?
num_2_t16           dd ?
max_health_array_t16 dd ?
agent_move_mode_t16 dd ?
dist_t16            dd ?
WEAPEXP_1_value_t16 dd ?
constant_t16        dd ?
field_39_t16        dd ?
field_40_t16        dd ?
field_44_t16        dd ?
field_48_t16        dd ?
field_4C_t16        dd ?
field_50_t16        dd ?
field_54_t16        dd ?
field_58_t16        dd ?
field_5C_t16        dd ?
field_60_t16        dd ?
field_64_t16        dd ?
experian_array_16 ends

; ---------------------------------------------------------------------------

experian_array_17 struc ; (sizeof=0x68, align=0x4, mappedto_78)
                                        ; column_2_7_array/r
number_t17          dd ?
brainsucer_num_t17  dd ?
average_max_health_t17 dd ?
average_current_health_t17 dd ?
average_curr_max_TU_t17 dd ?
number_of_units_hit_t17 dd ?
avr_damage_taken_t17 dd ?
average_dist_t17    dd ?
WEAPEXP_2_value_t17 dd ?
number_2_t17        dd ?
lose_health_t17     dd ?
field_2C_t17        dd ?
dist_t17            dd ?
WEAPEXP_1_value_t17 dd ?
constant_t17        dd ?
field_39_t17        dd ?                    ; column_2_7_set+EE/r
                                        ; column_2_7_set+149/r
field_40_t17        dd ?
field_44_t17        dd ?
field_48_t17        dd ?
field_4C_t17        dd ?
field_50_t17        dd ?
field_54_t17        dd ?
field_58_t17        dd ?
field_5C_t17        dd ?
field_60_t17        dd ?
field_64_t17        dd ?                    ; row_8_set_+2B/o
                                        ; row_8_set_+6C/r
experian_array_17 ends

; ---------------------------------------------------------------------------

experian_array_9_11 struc ; (sizeof=0x68, align=0x4, mappedto_81)
squad_count_t11     dd ?
brainsucer_num_t11  dd ?
average_max_health_t11 dd ?
average_current_health_t11 dd ?
number_of_units_hit_t11 dd ?
avr_damage_taken_t11 dd ?
losarea1_t11        dd ?
average_dist_t11    dd ?
losarea2_t11        dd ?
field_24_t11        dd ?
field_28_t11        dd ?
field_2C_t11        dd ?
field_30_t11        dd ?
field_32_t11        dd ?
field_38_t11        dd ?
field_39_t11        dd ?
field_40_t11        dd ?
field_44_t11        dd ?
field_48_t11        dd ?
field_4C_t11        dd ?
field_50_t11        dd ?
field_54_t11        dd ?
field_58_t11        dd ?
field_5C_t11        dd ?
field_60_t11        dd ?
field_64_t11        dd ?
experian_array_9_11 ends

; ---------------------------------------------------------------------------

move_unit_struc struc ; (sizeof=0x1E, align=0x2, mappedto_101)
                                        ; move_unit_struct/r
direction       dw ?
unit            dw ?
x_pos_3D        dw ?
y_pos_3D        dw ?
z_pos_3D        dw ?
x_pos_delta     dw ?
y_pos_delta     dw ?
field_E         dw ?
game_speed      dw ?
x_pos_3D_2      dw ?
y_pos_3D_2      dw ?
z_pos_3D_2      dw ?
unit_2          dw ?
side            db ?
field_1B        db ?
field_1C        dw ?
move_unit_struc ends

; ---------------------------------------------------------------------------

experian_array_25 struc ; (sizeof=0x64, align=0x4, mappedto_103)
unit_count      dd ?
brainsucer_num  dd ?
average_max_health dd ?
average_current_health dd ?
average_curr_max_TU dd ?
number_of_units_hit dd ?
damage_taken_counter dd ?
coord_dispersion dd ?
avr_losarea_value dd ?
number_of_units_hit_3 dd ?
WEAPEXP_2       dd ?
accuracy        dd ?
agent_count     dd ?
max_health      dd ?
current_health  dd ?
curr_max_TU     dd ?
number_of_units_hit_2 dd ?
dispersion_2    dd ?
protect         dd ?
squad_count     dd ?
aver_max_health dd ?
avr_move_mode   dd ?
dispersion      dd ?
WEAPEXP_1       dd ?
dist            dd ?
experian_array_25 ends

; ---------------------------------------------------------------------------

experian_array_9 struc ; (sizeof=0x24, align=0x4, mappedto_72)
                                        ; column_9_10_array/r
unit_count      dd ?
brainsucer_num  dd ?                    ; column_9_10_set_+29/o
                                        ; column_9_10_set_+471/r
avr_max_health  dd ?
avr_current_health dd ?
avr_curr_TU     dd ?
avr_number_of_units_hit dd ?
avr_damage_taken dd ?
coord_dispersion dd ?
avr_losarea_value dd ?
experian_array_9 ends

; ---------------------------------------------------------------------------

behavior_struc  struc ; (sizeof=0x16, align=0x2, mappedto_82)
                                        ; struc_behavior/r
beh_0           db ?
beh_2           db ?
item_group      db ?
item_type       db ?
unit_action     db ?
agent_beh       db ?
ammo_power      db ?
AI_contrl_NONE_s  db ?
x_pos           dw ?
y_pos           dw ?
z_pos           dw ?
beh_ai_control  dw ?
mode            dw ?
game_speed      dw ?
armor_rating    dw ?
behavior_struc  ends

; ---------------------------------------------------------------------------

mapunit_dat     struc ; (sizeof=0x56, align=0x2, mappedto_1)
                                        ; grounmap_dat/r leftmap_dat/r ...
strenght        dw ?
Explosion_Power_at_GZ dw ?
Explosion_depletion_rate dw ?
Explosion_Type  dw ?
fire_resistance db ?
burn_time       db ?
intensity_time_table db ?
blockage_phisical db ?
blockage_gas    db ?
blockage_fire   db ?
blockage_psionic db ?
lof1_0          db ?
lof1_1          db ?
lof1_2          db ?
lof1_3          db ?
lof1_4          db ?
lof1_5          db ?
lof1_6          db ?
lof1_7          db ?                    ; unused_12+2B/o
                                        ; unused_12+33/o
lof1_8          db ?
lof1_9          db ?
lof1_10         db ?
lof1_11         db ?
lof1_12         db ?
lof1_13         db ?
lof1_14         db ?
lof1_15         db ?
lof1_16         db ?
lof1_17         db ?
lof1_18         db ?
lof1_19         db ?
lof2_1          db ?
lof2_2          db ?
lof2_3          db ?
lof2_4          db ?
lof2_5          db ?
lof2_6          db ?
lof2_7          db ?
lof2_8          db ?
lof2_9          db ?
lof2_10         db ?
lof2_11         db ?
lof2_12         db ?
lof2_13         db ?
lof2_14         db ?
lof2_15         db ?
lof2_16         db ?
lof2_17         db ?
lof2_18         db ?
lof2_19         db ?
field_36        db ?
field_37        db ?
field_38        db ?
field_39        db ?
tile_size       db ?
field_3B        db ?
damaged_tile_index dw ?
index_anim      dw ?
Number_of_animated_frames db ?
Auto_loop_      db ?
Transparent     db ?
sound_effects   db ?
Door_flag       db ?
Closed_door     db ?
LOS_Through_Terrain db ?
Floor_marker    db ?                    ; sub_B4A60+189/r
Gravlift        db ?
field_49        db ?
field_4A        db ?
field_4B        db ?
field_4C        db ?
field_4D        db ?
field_4E        db ?
Movement_cost   db ?
Climbable       db ?
Object_height   db ?                    ; sub_7E4E0+2A5/r
                                        ; sub_7E4E0+2BB/r
Floating_object db ?
Provides_support db ?
Gets_support_from db ?
Independent_structure db ?
mapunit_dat     ends

; ---------------------------------------------------------------------------

projectile_stru struc ; (sizeof=0x15E, align=0x2, mappedto_26)
                                        ; projectile_struct/r
weapon_type     dw ?                    ; load_game_files_+AA/w
prog_image      dw ?
prog_speed      dw ?
x_pos           dw 50 dup(?)
y_pos           dw 50 dup(?)
z_pos           dw 50 dup(?)
field_132       dw ?
proj_number     dw ?
tail_size_      dw ?
was_used        dw ?
num_aiming_unit dw ?
dist_3d         dw ?
x_y_vs_z1_x2    dw ?
x_y_vs_z2_x2    dw ?
z_shift_1       dw ?
z_direct        dw ?
z_shift_2       dw ?
field_148       dw ?
distance        dw ?
anglex2         dw ?
distx2          dw ?
r_l_direct      dw ?
up_down         dw ?
direct_x        dw ?
direct_y        dw ?
projectile_lifetime dw ?
unit_owner_struc dw ?                   ; enum unit_side
field_15C       dw ?
projectile_stru ends

; ---------------------------------------------------------------------------

sections_dat_struc struc ; (sizeof=0x18, align=0x4, mappedto_76)
                                        ; sections_dat/r
x1              dd ?
y1              dd ?
z1              dd ?
x2              dd ?
y2              dd ?
z2              dd ?
sections_dat_struc ends

; ---------------------------------------------------------------------------

unit_equipset_builtin struc ; (sizeof=0x5C, align=0x4, mappedto_77)
                                        ; equp_set_builtin/r
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

los_area_struc  struc ; (sizeof=0x88, align=0x2, mappedto_75)
                                        ; losarea_dat/r
field_0         db ?                    ; unused_gen_unit_+26C/r
field_1         db ?                    ; load_game_files_+FC/w
x_coord1        dw ?
y_coord1        dw ?
z_coord1        dw ?
x_coord2        dw ?
y_coord2        dw ?
z_coord2        dw ?
sections_x      dw ?                    ; unused_gen_unit_+2A7/r
                                        ; sub_48130+3E/r ...
sections_y      dw ?                    ; unused_gen_unit_+2CD/r
                                        ; sub_48130+64/r ...
sections_z      dw ?                    ; unused_gen_unit_+2F3/r
                                        ; sub_48130+8A/r ...
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
field_5E        db ?                    ; sub_9D760+328/w
                                        ; sub_9D760+552/r ...
field_5F        db ?
field_60        db ?                    ; sub_9B140+41C/w
                                        ; sub_9D760+27D/r ...
field_61        db ?
org_offset      db 28 dup(?)            ; create_17_value_array_+A3A/r
                                        ; create_12_value_array_+2DD/r ...
field_7E        db ?
field_7F        db ?
field_80        db ?
field_81        db ?
AI_Patrol_Priority db ?
AI_Target_Priority db ?
Spawn_Type      db ?
Spawn_Priority  db ?
Can_Deploy_Large_Units db ?
Can_Deploy_Non_Flying_Units db ?
los_area_struc  ends

; ---------------------------------------------------------------------------

struct_sound    struc ; (sizeof=0x40, align=0x4, mappedto_7)
name            db 50 dup(?)            ; string(C)
bitrate         dd ?                    ; base 10
anonymous_1     dd ?                    ; sub_84890+2E2/r ; base 10
format          dw ?                    ; base 10
anonymous_2     dd ?                    ; base 10
struct_sound    ends

; ---------------------------------------------------------------------------

damage_modif    struc ; (sizeof=0x24, align=0x2, mappedto_32)
                                        ; damage_mod/r
smoke           dw ?                    ; Unit_injured_+69/r
                                        ; Unit_injured_+1E1/r ...
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

LOF_struct      struc ; (sizeof=0xC, align=0x4, mappedto_63)
width_t           dd ?
height_t          dd ?
length_masks_t    dd ?
LOF_struct      ends

; ---------------------------------------------------------------------------

brain_main      struc ; (sizeof=0x98, align=0x4, mappedto_104)
array_1         dd 12 dup(?)
array_1_total   dd ?
array_2         dd 25 dup(?)
brain_main      ends

; ---------------------------------------------------------------------------

brain_dat_struc struc ; (sizeof=0x56DC, align=0x4, mappedto_64)
                                        ; load_game_files_+272/r
                                        ; BRAIN_DAT/r
index           dd ?                    ; load_game_files_+253/r
                                        ; find_section_brain_dat_:loc_9F8EC/r ...
item_count      dd ?                    ; find_section_brain_dat_+61/r
                                        ; find_section_brain_dat_+C7/w ...
section         dd ?                    ; set_2_expirean_temp_section_+4D/r
                                        ; set_2_expirean_temp_section_+80/w ...
full_sec1       dd 926 dup(?)           ; calc_brain_+7F5/w
full_sec2       dd 926 dup(?)
full_sec3       dd 926 dup(?)
full_sec4       dd 926 dup(?)
full_sec5       dd 926 dup(?)
full_sec16      dd 926 dup(?)
brain_dat_struc ends

; ---------------------------------------------------------------------------

brain_dat_section struc ; (sizeof=0xE78, mappedto_118)
short_min       dd ?
short_delta     dd ?
short_value     dd 298 dup(?)
total           dd ?
long_section    dd 625 dup(?)
brain_dat_section ends

; ---------------------------------------------------------------------------

scenario_dat    struc ; (sizeof=0xD4, align=0x4, mappedto_105)
                                        
map_name        db 40 dup(?)
total_tac_map_x_size dd ?               
total_tac_map_y_size dd ?               
total_tac_map_z_size dd ?              
scenario_type   dd ?                    
                                        
xcom_mission_type dd ?                  
                                       
year_tac        dd ?
month_tac       dd ?
week__tac       dd ?
day_tac         dd ?
hour_tac        dd ?
minute_tac      dd ?
second_tac      dd ?
bldn_num        dd ?
bld_function_sc dd ?                    
bld_owner_sc    dd ?                   
                                        
bld_relation    dd ?
field_6A        dd ?
field_6C        dd ?
field_70        dd ?
field_74        dd ?
bld_ship_type_mission dd ?
rank_sum        db 7 dup(?)             
                                        
field_83        db ? 
field_84        dd ?
field_88        dd ?
field_8C        dd ?
field_90        dd ?
field_94        dd ?
field_98        dd ?                    
                                        
field_9C        dd ?
field_A0        dd ?
field_A4        dd ?
field_A8        dd ?
diff_enum       dd ?                  
                                       
field_B0        dd ?
MISSION_BRIEFING_header dd ?
tac_score       dd ?
field_BC        dd ?                   
field_C0        db ?
field_C1        db ?
field_C2        db ?
field_C3        db ?
field_C4        dd ?
field_C8        dd ?
field_CC        dd ?
field_D0        dd ?
scenario_dat    ends

; ---------------------------------------------------------------------------

struc_string_41 struc ; (sizeof=0x29, mappedto_112) ; string_test/r
field_0         db 41 dup(?)            ; string(C)
struc_string_41 ends

; ---------------------------------------------------------------------------

; enum direction, mappedto_102
direction_x      = 1
direction_y      = 2
direction_x_y    = 4

; ---------------------------------------------------------------------------

; enum move_mode, mappedto_100
crawl            = 0
walk             = 1
run              = 2

; ---------------------------------------------------------------------------

; enum game_mode_enum, mappedto_113
real_time        = 0
turn_game        = 1

; ---------------------------------------------------------------------------

; enum reserv_TU_shot, mappedto_114
reserv_TU_Auto   = 1
reserv_TU_Snap   = 2
reserv_TU_Aim    = 3
None             = 4294967295

; ---------------------------------------------------------------------------

; enum Agressive_setting, mappedto_68
safe             = 0
coutious         = 1
Agresive         = 2

; ---------------------------------------------------------------------------

; enum fire_mode, mappedto_69
no_shot          = 0
auto_shot        = 1
snap_shot        = 2
aimed_shot       = 3

; ---------------------------------------------------------------------------

; enum item_1_type, mappedto_59
protect_t          = 0
weapon_t           = 1
other_t            = 2
none_t             = 4

; ---------------------------------------------------------------------------

; enum item_2_2_type, mappedto_106
ammo_clip        = 0
motion_scanner   = 1
Probe            = 2
vortex_analizer  = 3
multitracker     = 4
mind_shild       = 5
mind_bender      = 6
alien_detector   = 7
pers_disr_shield  = 8
pers_teleporter  = 9
pers_cloacking_field  = 0Ah
dim_force_field  = 0Bh
medikit          = 0Ch

; ---------------------------------------------------------------------------

; enum map_tile_side, mappedto_90
grounmap         = 0
leftmap          = 1
rightmap         = 2
featmap          = 3
featmap_4        = 4

; ---------------------------------------------------------------------------

; enum area_spawn_type, mappedto_91
X_Com            = 0
Rival_Organisations  = 1
Civilians        = 2
Civilians_3      = 3

; ---------------------------------------------------------------------------

; enum equipment_1, mappedto_95
megapol_plasma_gun  = 16
megapol_plasma_pod  = 17
forceweb         = 32
disruptor_gun    = 41
disruptor_2A     = 42

; ---------------------------------------------------------------------------

; enum hand, mappedto_96
r_hand           = 0
l_hand           = 1
right_leg        = 2
right_3          = 3

; ---------------------------------------------------------------------------

; enum damage_modif_type, mappedto_60
marsec_m4000_mg  = 6
marsec_armor     = 18

; ---------------------------------------------------------------------------

; enum kneeling, mappedto_116
stend_up         = 0
kneel_down       = 1

; ---------------------------------------------------------------------------

; enum status_unit, mappedto_61
no_status        = 0
panic            = 1
panic_2          = 2
berserk          = 3
frozen           = 4

; ---------------------------------------------------------------------------

; enum unit_side, mappedto_67
alien            = 1
civilian         = 27

; ---------------------------------------------------------------------------

; enum test_enum, mappedto_117
description      = 0
organisation     = 1
squad_            = 2
player           = 3
createunit       = 4
equip1           = 5
equip2           = 6
equipbody        = 7
armour           = 8
type_t             = 9
hiddenterrain    = 10
trainingdemo     = 11
x_t                = 12
y_t                = 13
z_t                = 14
autosave         = 15
aitakeover       = 16
turnbasedgame    = 17

; ---------------------------------------------------------------------------

; enum equip_3_damage_type, mappedto_86
incendiary_t       = 2
stun_t             = 5

; ---------------------------------------------------------------------------

; enum behavior_action, mappedto_108
displacement     = 1
behavior_action_2  = 2
move_mode_ch     = 3
Aggressive_mode_ch  = 4
set_waypoint     = 5
fire_to_unit     = 6
change_hand_weapon  = 7
behavior_action_8  = 8
change_direction  = 9
check_alied_unit_  = 10
behavior_action_B  = 11
fire_to_map      = 12
Stand_kneel_t      = 13
g_speed_sync     = 14
unit_SYNC_error  = 15
add_in_squad     = 16
choice_item_in_hand  = 17
increse_game_counter  = 18
prime_grenad     = 19
throw            = 20
freed_from_Psionic_control  = 21
fire_mod_ch      = 22
teleports        = 23
move_to_point    = 24
behavior_action_19  = 25
unkn_format_action  = 26
behavior_action_1B  = 27
behavior_action_1C  = 28
behavior_action_1D  = 29
set_exp_array_num  = 30
behavior_action_1F  = 31
Drop_R_hand      = 32
Drop_L_hand      = 33
behavior_action_22  = 34
Reserve_TU_shot_t  = 35
Reserve_TU_kneel_t  = 36
group_format_action  = 37
single_file_action  = 38
use_medikit      = 39
check_freed_from_Psionic_control  = 40
unit_died        = 41

; ---------------------------------------------------------------------------

; enum xcom_mission_type, mappedto_107
common_mission   = 1
Marsec_mission   = 2
Alien_mission    = 3
megapol_mission  = 4

; ---------------------------------------------------------------------------

; enum game_type, mappedto_71
real_time_game   = 1
TB_game          = 2
net_game_        = 3

; ---------------------------------------------------------------------------

; enum unit_equipment_1, mappedto_73
Heavy_launcher_HE_missile  = 9

; ---------------------------------------------------------------------------

; enum unit_equipment_2_2, mappedto_74
personal_disruptor_shield  = 8
personal_teleporter  = 9

; ---------------------------------------------------------------------------

; enum alien_bld_func, mappedto_111
incubator        = 0
spawn            = 1
food             = 2
megapod          = 3
sleep            = 4
organic_factory  = 5
alien_farm       = 6
control          = 7
maintan          = 8
gate_generator   = 9

; ---------------------------------------------------------------------------

; enum unit_image, mappedto_70
xcom             = 0
egg              = 1
brainsucer       = 2
multiworm        = 3
hyperworm        = 4
chrysalis        = 5
anthropod        = 6
skeletoid        = 7
spitter          = 8
popper           = 9
megaspawn        = 0Ah
psimorph         = 0Bh
queenspawn       = 0Ch
corporate_boss   = 15h
not_use          = 0FFFFFFFFh

; ---------------------------------------------------------------------------

; enum weapon_type, mappedto_88
entropy_launcher  = 27

; ---------------------------------------------------------------------------

; enum gender, mappedto_87
male             = 0
female           = 1
android          = 2

; ---------------------------------------------------------------------------

; enum Explosion_Type, mappedto_89
smoke_t            = 0
alien_gas_t        = 1
fire_t             = 2
Stun_Gas_t         = 3
High_Explosive   = 4
Stun_4_t             = 5
Psionic_Blast_t    = 6

