#pragma once
#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include <stdint.h>
int16_t set_action_30(int16_t agent_num, int16_t mode, int16_t ai_control, int16_t exp_array);
int16_t set_action_31(int16_t agent_num, int16_t mode, int16_t ai_control);
int16_t sub_8E420_(struct units_struct* agent);

typedef enum
{
	displacement = 1,
	behavior_action_2 = 2,
	move_mode_ch = 3,
	aggressive_mode_ch = 4,
	set_waypoint = 5,
	fire_to_unit = 6,
	change_hand_weapon = 7,
	behavior_action_8 = 8,
	change_direction = 9,
	check_alied_unit_ = 10,
	behavior_action_B = 11,
	fire_to_map = 12,
	Stand_kneel = 13,
	g_speed_sync = 14,
	unit_SYNC_error = 15,
	add_in_squad = 16,
	choice_item_in_hand = 17,
	increse_game_counter = 18,
	prime_grenad = 19,
	throw = 20,
	freed_from_Psionic_control = 21,
	fire_mod_ch = 22,
	teleports = 23,
	move_to_point = 24,
	behavior_action_19 = 25,
	unkn_format_action = 26,
	behavior_action_1B = 27,
	behavior_action_1C = 28,
	behavior_action_1D = 29,
	set_exp_array_num = 30,
	behavior_action_1F = 31,
	Drop_R_hand = 32,
	Drop_L_hand = 33,
	behavior_action_22 = 34,
	reserve_TU_shot = 35,
	reserve_TU_kneel = 36,
	group_format_action = 37,
	single_file_action = 38,
	use_medikit = 39,
	check_freed_from_Psionic_control = 40,
	unit_died = 41,
} behavior_action;

#endif