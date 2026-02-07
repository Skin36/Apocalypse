#include "debug.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

extern uint8_t brain_unit;
extern uint8_t brain_comand;


void load_units(void)
{
	int i;
	
	units_ptr = (struct units_struc*)malloc(60 * sizeof(struct units_struc));

	units_ptr = &agents_t;

	for (i = 0; i < 215; i++)
	{
		//printf("%s\n", (units_ptr + i)->name_t1);
	


	}	
}






static void free_units(void)
{
	free(units_ptr);
}






int debug_brain(void)
{

	switch (brain_comand) {

	case 101:
		printf("unit num %d  %s received the command 101 - move_mode->crawl\n",brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 102:
		printf("unit num %d  %s received the command 102 - move_mode->walk\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 103:
		printf("unit num %d  %s received the command 103 - move_mode->run\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 104:
		printf("unit num %d  %s received the command 104 - aggresive_mode->UP\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 105:
		printf("unit num %d  %s received the command 105 - aggressive_mode->DOWN\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 106:
		printf("unit num %d  %s received the command 106 - move_mode->if stend up<->kneel down\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 107:
		printf("unit num %d  %s received the command 107 - move_mode->if kneel down<->stend up\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 108:
		printf("unit num %d  %s received the command 108 - fire_mode->smart_1\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 109:
		printf("unit num %d  %s received the command 109 - fire_mode->smart_2\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 110:
		printf("unit num %d  %s received the command 110 - unit_action->smart displacement\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 111:
		//printf("unit num %d  %s received the command 111 - unit_action->smart displacement_to unit+move_mode->run\n", brain_unit, (units_ptr + brain_unit)->name_t1);
		break;
	case 112:
		printf("unit num %d  %s received the command 112 - unit_action->displacement\n", brain_unit,(units_ptr + brain_unit)->name_t1);
		break;

	default:
		printf("Unkmown command.\n");

	}




	//printf("%s\n", (units_ptr + brain_unit)->name_t1);;
	return 1;
}