#pragma once
#ifndef STRUC_INIT_H_INCLUDED
#define STRUC_INIT_H_INCLUDED
#include <stdint.h>

#endif

int all_struct_alloc(void);
int free_all_mem(void);

struct behavior_struc
{
	uint8_t beh_0;
	uint8_t beh_2;
	uint8_t item_group;
	uint8_t item_type;
	uint8_t unit_action;
	uint8_t agent_beh;
	uint8_t ammo_power;
	uint8_t AI_control_none;
	int16_t x_pos;
	int16_t y_pos;
	int16_t z_pos;
	int16_t beh_ai_control;
	int16_t mode;
	int16_t game_speed;
	int16_t armor_rating;

}behavior_instance[145];

//-----------------------------------------
extern uint8_t* struc_behavior;
//typedef struct behavior_struc behavior;
//typedef behavior* bhvr;
struct behavior_struc *bhvr_ptr;
//-----------------------------------------
